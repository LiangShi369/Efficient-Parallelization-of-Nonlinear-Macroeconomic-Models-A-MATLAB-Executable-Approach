function configure_msvc_env()
%CONFIGURE_MSVC_ENV Import Visual Studio build variables for MEX compilation.
%
% MATLAB can find cl.exe even when the Windows SDK include/lib paths have
% not been initialized. In that state, generated MEX builds fail on standard
% headers such as stdio.h. This helper runs vcvars64.bat and copies the
% resulting environment into the current MATLAB process.

if ~ispc
    return
end

includePath = getenv('INCLUDE');
if contains(includePath, 'Windows Kits', 'IgnoreCase', true) && ...
        contains(includePath, 'VC\Tools\MSVC', 'IgnoreCase', true)
    return
end

vcvars = find_vcvars64();
if isempty(vcvars)
    warning(['Could not find Visual Studio vcvars64.bat. ', ...
        'Run "mex -setup C++" and install Visual Studio C++ tools if needed.']);
    return
end

cmd = sprintf('cmd /s /c ""%s" >nul && set"', vcvars);
[status, envText] = system(cmd);
if status ~= 0
    warning('Failed to initialize Visual Studio compiler environment using %s.', vcvars);
    return
end

envLines = regexp(envText, '\r?\n', 'split');
for iLine = 1:numel(envLines)
    line = envLines{iLine};
    eqPos = strfind(line, '=');
    if isempty(eqPos) || eqPos(1) == 1
        continue
    end
    setenv(line(1:eqPos(1)-1), line(eqPos(1)+1:end));
end

end

function vcvars = find_vcvars64()

vcvars = '';

programFilesX86 = getenv('ProgramFiles(x86)');
if isempty(programFilesX86)
    programFilesX86 = 'C:\Program Files (x86)';
end

vswhere = fullfile(programFilesX86, 'Microsoft Visual Studio', ...
    'Installer', 'vswhere.exe');
if exist(vswhere, 'file')
    cmd = sprintf('"%s" -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath', vswhere);
    [status, installPath] = system(cmd);
    installPath = strtrim(installPath);
    candidate = fullfile(installPath, 'VC', 'Auxiliary', 'Build', 'vcvars64.bat');
    if status == 0 && exist(candidate, 'file')
        vcvars = candidate;
        return
    end
end

editions = {'Community', 'Professional', 'Enterprise', 'BuildTools'};
versions = {'2022', '2019', '2017'};
for iVersion = 1:numel(versions)
    for iEdition = 1:numel(editions)
        candidate = fullfile(programFilesX86, 'Microsoft Visual Studio', ...
            versions{iVersion}, editions{iEdition}, 'VC', 'Auxiliary', ...
            'Build', 'vcvars64.bat');
        if exist(candidate, 'file')
            vcvars = candidate;
            return
        end
    end
end

end

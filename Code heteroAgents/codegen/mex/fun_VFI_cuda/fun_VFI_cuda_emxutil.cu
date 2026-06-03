//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// fun_VFI_cuda_emxutil.cu
//
// Code generation for function 'fun_VFI_cuda_emxutil'
//

// Include files
#include "fun_VFI_cuda_emxutil.h"
#include "fun_VFI_cuda_data.h"
#include "fun_VFI_cuda_types.h"
#include "rt_nonfinite.h"

// Function Definitions
void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != static_cast<emxArray_real_T *>(nullptr)) {
    if (((*pEmxArray)->data != static_cast<real_T *>(nullptr)) &&
        (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }
    emlrtFreeMex((*pEmxArray)->size);
    emlrtRemoveHeapReference(emlrtRootTLSGlobal, (void *)pEmxArray);
    emlrtFreeEmxArray(*pEmxArray);
    *pEmxArray = static_cast<emxArray_real_T *>(nullptr);
  }
}

void emxInit_real_T(emxArray_real_T **pEmxArray,
                    const emlrtRTEInfo *srcLocation)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = static_cast<emxArray_real_T *>(
      emlrtMallocEmxArray(sizeof(emxArray_real_T)));
  if ((void *)*pEmxArray == nullptr) {
    emlrtHeapAllocationErrorR2012b(srcLocation, emlrtRootTLSGlobal);
  }
  emlrtPushHeapReferenceStackEmxArray(
      emlrtRootTLSGlobal, false, (void *)pEmxArray, (void *)&emxFree_real_T,
      nullptr, nullptr, nullptr);
  emxArray = *pEmxArray;
  emxArray->data = static_cast<real_T *>(nullptr);
  emxArray->numDimensions = 3;
  emxArray->size = static_cast<int32_T *>(emlrtMallocMex(sizeof(int32_T) * 3U));
  if ((void *)emxArray->size == nullptr) {
    emlrtHeapAllocationErrorR2012b(srcLocation, emlrtRootTLSGlobal);
  }
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < 3; i++) {
    emxArray->size[i] = 0;
  }
}

// End of code generation (fun_VFI_cuda_emxutil.cu)

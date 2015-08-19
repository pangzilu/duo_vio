//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: svd.h
//
// MATLAB Coder version            : 2.8
// C/C++ source code generated on  : 19-Aug-2015 10:03:40
//
#ifndef __SVD_H__
#define __SVD_H__

// Include Files
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "SLAM_types.h"

// Function Declarations
extern void eml_xrotg(double *a, double *b, double *c, double *s);
extern void svd(const double A[30], double U[5]);

#endif

//
// File trailer for svd.h
//
// [EOF]
//
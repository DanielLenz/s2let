// S2LET package
// Copyright (C) 2012
// Boris Leistedt & Jason McEwen

#ifndef S2LET_ANALYSIS
#define S2LET_ANALYSIS

#include <complex.h>

/** Harmonic-space wavelet transform **/

void s2let_analysis_lm2lmn(
    complex double *f_wav_lmn,
    complex double *f_scal_lm,
    const complex double *flm,
    const complex double *wav_lm,
    const double *scal_l,
    const s2let_parameters_t *parameters
);

/** Harmonic-space wavelet transform for real signals **/

void s2let_analysis_lm2lmn_real(
    complex double *f_wav_lmn,
    complex double *f_scal_lm,
    const complex double *flm,
    const complex double *wav_lm,
    const double *scal_l,
    const s2let_parameters_t *parameters
);

/** Harmonic-space wavelet transform **/

void s2let_analysis_lm2wav_manual(
    complex double *f_wav,
    complex double *f_scal,
    const complex double *flm,
    const double *scal_l,
    const complex double *wav_lm,
    const int scal_bandlimit,
    const int *wav_bandlimits,
    int J,
    int L,
    int spin,
    int N
);

void s2let_analysis_lm2wav(
    complex double *f_wav,
    complex double *f_scal,
    const complex double *flm,
    const s2let_parameters_t *parameters
);

/** Harmonic-space wavelet transform for real signals **/

void s2let_analysis_lm2wav_real(
    double *f_wav,
    double *f_scal,
    const complex double *flm,
    const s2let_parameters_t *parameters
);

/** Pixel-space wavelet transform **/

void s2let_analysis_px2wav(
    complex double *f_wav,
    complex double *f_scal,
    const complex double *f,
    const s2let_parameters_t *parameters
);

/** Pixel-space wavelet transform for real signals**/

void s2let_analysis_px2wav_real(
    double *f_wav,
    double *f_scal,
    const double *f,
    const s2let_parameters_t *parameters
);

#endif

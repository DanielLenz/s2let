// S2LET package
// Copyright (C) 2012 
// Boris Leistedt & Jason McEwen

#ifndef S2LET_FITSTOOLS
#define S2LET_FITSTOOLS

/*!
 * Read Healpix resolution from a FITS file.
 *
 * \param[in]  file Filename.
 * \retval int resolution parameter
 */
int s2let_read_hpx_nside(char* filename);

/*!
 * Read MW resolution / band-limit parameter from a FITS file.
 *
 * \param[in]  file Filename.
 * \retval int resolution parameter
 */
int s2let_read_mw_bandlimit(char* filename);

/*!
 * Read MW map from a FITS file.
 *
 * \param[out]  f Input map (MW sampling).
 * \param[in]  file Filename.
 * \param[in]  L Band-limit / resolution parameter.
 * \retval none
 */
void s2let_read_mw_map(double* f, char* file, int L);

/*!
 * Write MW map from a FITS file.
 *
 * \param[in]  f Input map (MW sampling).
 * \param[in]  file Filename.
 * \param[in]  L Band-limit / resolution parameter.
 * \retval none
 */
void s2let_write_mw_map(char* file, double* f, int L);

#endif
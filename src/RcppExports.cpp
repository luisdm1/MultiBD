// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// bb_lt_invert_Cpp
std::vector<double> bb_lt_invert_Cpp(double t, const std::vector<double>& lambda1, const std::vector<double>& lambda2, const int Ap1, const int Bp1, const int direction, const int nblocks, const double tol, const int computeMode, const int nThreads);
RcppExport SEXP MultiBD_bb_lt_invert_Cpp(SEXP tSEXP, SEXP lambda1SEXP, SEXP lambda2SEXP, SEXP Ap1SEXP, SEXP Bp1SEXP, SEXP directionSEXP, SEXP nblocksSEXP, SEXP tolSEXP, SEXP computeModeSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type lambda1(lambda1SEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type lambda2(lambda2SEXP);
    Rcpp::traits::input_parameter< const int >::type Ap1(Ap1SEXP);
    Rcpp::traits::input_parameter< const int >::type Bp1(Bp1SEXP);
    Rcpp::traits::input_parameter< const int >::type direction(directionSEXP);
    Rcpp::traits::input_parameter< const int >::type nblocks(nblocksSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type computeMode(computeModeSEXP);
    Rcpp::traits::input_parameter< const int >::type nThreads(nThreadsSEXP);
    __result = Rcpp::wrap(bb_lt_invert_Cpp(t, lambda1, lambda2, Ap1, Bp1, direction, nblocks, tol, computeMode, nThreads));
    return __result;
END_RCPP
}
// bbd_lt_invert_Cpp
std::vector<double> bbd_lt_invert_Cpp(double t, const int a0, const int b0, const std::vector<double>& lambda1, const std::vector<double>& lambda2, const std::vector<double>& mu2, const std::vector<double>& gamma, const std::vector<double>& x, const std::vector<double>& y, const int A, const int Bp1, const int nblocks, const double tol, const int computeMode, const int nThreads, const int maxdepth);
RcppExport SEXP MultiBD_bbd_lt_invert_Cpp(SEXP tSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP lambda1SEXP, SEXP lambda2SEXP, SEXP mu2SEXP, SEXP gammaSEXP, SEXP xSEXP, SEXP ySEXP, SEXP ASEXP, SEXP Bp1SEXP, SEXP nblocksSEXP, SEXP tolSEXP, SEXP computeModeSEXP, SEXP nThreadsSEXP, SEXP maxdepthSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< const int >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const int >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type lambda1(lambda1SEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type lambda2(lambda2SEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type mu2(mu2SEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int >::type A(ASEXP);
    Rcpp::traits::input_parameter< const int >::type Bp1(Bp1SEXP);
    Rcpp::traits::input_parameter< const int >::type nblocks(nblocksSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type computeMode(computeModeSEXP);
    Rcpp::traits::input_parameter< const int >::type nThreads(nThreadsSEXP);
    Rcpp::traits::input_parameter< const int >::type maxdepth(maxdepthSEXP);
    __result = Rcpp::wrap(bbd_lt_invert_Cpp(t, a0, b0, lambda1, lambda2, mu2, gamma, x, y, A, Bp1, nblocks, tol, computeMode, nThreads, maxdepth));
    return __result;
END_RCPP
}
// SIR_Cpp
std::vector<double> SIR_Cpp(const double t, const double alpha, const double beta, const long int S0, const long int I0, const int Ap1, const int Bp1, const int direction, const int nblocks, const double tol, const int computeMode, const int nThreads);
RcppExport SEXP MultiBD_SIR_Cpp(SEXP tSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP S0SEXP, SEXP I0SEXP, SEXP Ap1SEXP, SEXP Bp1SEXP, SEXP directionSEXP, SEXP nblocksSEXP, SEXP tolSEXP, SEXP computeModeSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const double >::type t(tSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const long int >::type S0(S0SEXP);
    Rcpp::traits::input_parameter< const long int >::type I0(I0SEXP);
    Rcpp::traits::input_parameter< const int >::type Ap1(Ap1SEXP);
    Rcpp::traits::input_parameter< const int >::type Bp1(Bp1SEXP);
    Rcpp::traits::input_parameter< const int >::type direction(directionSEXP);
    Rcpp::traits::input_parameter< const int >::type nblocks(nblocksSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type computeMode(computeModeSEXP);
    Rcpp::traits::input_parameter< const int >::type nThreads(nThreadsSEXP);
    __result = Rcpp::wrap(SIR_Cpp(t, alpha, beta, S0, I0, Ap1, Bp1, direction, nblocks, tol, computeMode, nThreads));
    return __result;
END_RCPP
}

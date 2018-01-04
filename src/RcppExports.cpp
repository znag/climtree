// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// corfunexact
SEXP corfunexact(SEXP x, SEXP y, SEXP y0);
RcppExport SEXP _treeclim_corfunexact(SEXP xSEXP, SEXP ySEXP, SEXP y0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    Rcpp::traits::input_parameter< SEXP >::type y0(y0SEXP);
    rcpp_result_gen = Rcpp::wrap(corfunexact(x, y, y0));
    return rcpp_result_gen;
END_RCPP
}
// corfunnoboot
SEXP corfunnoboot(SEXP x, SEXP y);
RcppExport SEXP _treeclim_corfunnoboot(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(corfunnoboot(x, y));
    return rcpp_result_gen;
END_RCPP
}
// corfun
SEXP corfun(SEXP x, SEXP y);
RcppExport SEXP _treeclim_corfun(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(corfun(x, y));
    return rcpp_result_gen;
END_RCPP
}
// pcor
SEXP pcor(SEXP x1, SEXP x2, SEXP y, SEXP y0);
RcppExport SEXP _treeclim_pcor(SEXP x1SEXP, SEXP x2SEXP, SEXP ySEXP, SEXP y0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< SEXP >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    Rcpp::traits::input_parameter< SEXP >::type y0(y0SEXP);
    rcpp_result_gen = Rcpp::wrap(pcor(x1, x2, y, y0));
    return rcpp_result_gen;
END_RCPP
}
// respoexact
SEXP respoexact(SEXP x, SEXP y, SEXP y0);
RcppExport SEXP _treeclim_respoexact(SEXP xSEXP, SEXP ySEXP, SEXP y0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    Rcpp::traits::input_parameter< SEXP >::type y0(y0SEXP);
    rcpp_result_gen = Rcpp::wrap(respoexact(x, y, y0));
    return rcpp_result_gen;
END_RCPP
}
// respo
SEXP respo(SEXP x, SEXP y);
RcppExport SEXP _treeclim_respo(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(respo(x, y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_treeclim_corfunexact", (DL_FUNC) &_treeclim_corfunexact, 3},
    {"_treeclim_corfunnoboot", (DL_FUNC) &_treeclim_corfunnoboot, 2},
    {"_treeclim_corfun", (DL_FUNC) &_treeclim_corfun, 2},
    {"_treeclim_pcor", (DL_FUNC) &_treeclim_pcor, 4},
    {"_treeclim_respoexact", (DL_FUNC) &_treeclim_respoexact, 3},
    {"_treeclim_respo", (DL_FUNC) &_treeclim_respo, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_treeclim(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

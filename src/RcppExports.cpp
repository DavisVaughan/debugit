// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// buggy_fun_impl
bool buggy_fun_impl();
RcppExport SEXP _debugit_buggy_fun_impl() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(buggy_fun_impl());
    return rcpp_result_gen;
END_RCPP
}
// add_one_impl
NumericVector add_one_impl(NumericVector x);
RcppExport SEXP _debugit_add_one_impl(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(add_one_impl(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_debugit_buggy_fun_impl", (DL_FUNC) &_debugit_buggy_fun_impl, 0},
    {"_debugit_add_one_impl", (DL_FUNC) &_debugit_add_one_impl, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_debugit(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

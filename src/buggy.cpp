#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export()]]
bool buggy_fun_impl() {

  NumericVector x(1);

  int n = INT_MAX;

  x[n] = 0;

  return true;
}

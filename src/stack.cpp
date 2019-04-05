#include <Rcpp.h>
using namespace Rcpp;

NumericVector get_one() {

  NumericVector one(1);

  // Not 1!
  one[0] = 100;

  return one;
}

// [[Rcpp::export()]]
NumericVector add_one_impl(NumericVector x) {

  NumericVector y = get_one();

  NumericVector result = x + y;

  return result;
}

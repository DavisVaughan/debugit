#' Add one
#'
#' @param x A numeric value
#'
#' @export
add_one <- function(x) {
  stopifnot(is.numeric(x))
  add_one_impl(x)
}

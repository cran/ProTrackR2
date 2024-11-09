## ----include = FALSE----------------------------------------------------------
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>"
)

## ----setup--------------------------------------------------------------------
library(ProTrackR2)

mod <- pt2_read_mod(pt2_demo())

## ----get-patlist--------------------------------------------------------------
mod$patterns
## which is identical to
mod[["patterns"]]
## which is identical to
mod[[1L]]

## ----get-samplist-------------------------------------------------------------
mod$samples
## which is identical to
mod[["samples"]]
## which is identical to
mod[[2L]]

## ----sample-sel---------------------------------------------------------------
mod$samples[[5L]]
## which is identical to (see the different base of the index)
pt2_sample(mod, 4L)

## ----sample-assign------------------------------------------------------------
mod$samples[[5L]] <- mod$samples[[2L]]

## ----samples-assign-----------------------------------------------------------
mod$samples[5L:8L] <- mod$samples[2L]

## ----pat-sel------------------------------------------------------------------
my_pattern <- mod$patterns[[4L]]
## which is identical to (see the different base of the index)
my_pattern <- pt2_pattern(mod, 3L)

## ----pat-assign---------------------------------------------------------------
mod$patterns[[5L]] <- pt2_new_pattern()

## ----pat-seq------------------------------------------------------------------
pt2_pattern_table(mod)

## ----pat-copy-----------------------------------------------------------------
mod$patterns[[6L]] <- mod$patterns[[1L]]

## ----cells-select-------------------------------------------------------------
my_cells <- mod$patterns[[1L]][1L:8L, 1L]

## ----cell-select--------------------------------------------------------------
my_cells[[1L]]
## which is identical to (see the different base of the indices)
pt2_cell(pt2_pattern(mod, 0L), i = 0L, j = 0L)

## ----cell-copy----------------------------------------------------------------
mod$patterns[[5L]][,1L] <- my_cells


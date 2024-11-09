## ----include = FALSE----------------------------------------------------------
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>"
)

## ----tab-effect-commands, echo=FALSE, message=FALSE, warning=FALSE------------
library(ProTrackR2)
library(kableExtra)
data(effect_commands)
effect_commands |> kbl()

## ----select-command-----------------------------------------------------------
mod <- pt2_read_mod(pt2_demo())
pt2_command(
  mod$patterns[[ 3 ]] [ 1:8, 2 ])

## ----assign-command-----------------------------------------------------------
pt2_command(
  mod$patterns[[ 3 ]] [ 1:8, 2 ]) <- "C10"


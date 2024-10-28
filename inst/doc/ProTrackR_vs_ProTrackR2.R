## ----include = FALSE----------------------------------------------------------
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>"
)

## ----tab-dif, echo=FALSE, message=FALSE, warning=FALSE------------------------
library(kableExtra)
data.frame(
  Feature    = c("Effect commands", "Infrastructure", "File readers",
                 "Audio output", "OpenMPT test cases"),
  ProTrackR  = c("Limited set implemented", "R script", "Optimized for format preservation",
                 "tuneR S4 Wave class", "Passes 6 out of 12 selected tests"),
  ProTrackR2 = c("All PT2.3d effects implemented", "Compiled C/C++", "Optimized for PT2.3d compatibility",
                 "audio S3 audioSample class", "Not tested yet")
) |>
  kbl()


## ----include = FALSE----------------------------------------------------------
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>"
)

## ----tab-dif, echo=FALSE, message=FALSE, warning=FALSE------------------------
library(kableExtra)
data.frame(
  Feature    = c("[Effect commands](#effect-commands)", "[Infrastructure](#infrastructure)",
                 "[File readers](#file-readers)", "[Audio output](#audio-output)", "OpenMPT test cases"),
  ProTrackR  = c("Limited set implemented", "R script", "Optimized for format preservation",
                 "tuneR S4 Wave class", "Passes 6 out of 12 selected tests"),
  ProTrackR2 = c("All PT2.3d effects implemented", "Compiled C/C++", "Optimized for PT2.3d compatibility",
                 "audio S3 audioSample class", "Not tested yet")
) |>
  kbl()

## ----audio-tuner, eval=FALSE--------------------------------------------------
#  ## Load demo module
#  mod <- pt2_read_mod(pt2_demo())
#  
#  ## render 'audioSample' object
#  mod_audio <- pt2_render(mod)
#  
#  ## Convert from 'audio::audioSample' to 'tuneR::Wave' object:
#  if (requireNamespace("tuneR")) {
#    mod_tuneR <-
#      tuneR::Wave(
#        left      = as.integer(2^15*unclass(mod_audio[1,])),
#        right     = as.integer(2^15*unclass(mod_audio[2,])),
#        samp.rate = attributes(mod_audio)$rate,
#        bit       = attributes(mod_audio)$bits
#      )
#  }


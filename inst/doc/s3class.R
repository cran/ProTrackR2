## ----include = FALSE----------------------------------------------------------
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>"
)

## ----echo=FALSE, results='asis'-----------------------------------------------
htmltools::includeHTML("../man/figures/object-tree.svg")

## ----setup--------------------------------------------------------------------
library(ProTrackR2)
mod <- pt2_read_mod(pt2_demo())
mod

## ----play, eval=FALSE---------------------------------------------------------
#  play(mod)

## ----sample-list--------------------------------------------------------------
mod$samples

## ----sample-------------------------------------------------------------------
my_sample <- mod$samples[[1]]

## ----pattern-list-------------------------------------------------------------
mod$patterns

## ----tab-pattern, echo=FALSE, message=FALSE, warning=FALSE--------------------
library(ProTrackR2)
mod <- pt2_read_mod(pt2_demo())

mat <-
  mod$patterns[[1]] |>
  as.character() |>
  apply(1, \(x) gsub("-", "&minus;", x))
mat <- mat[,c(1:5, 64)] |>
  apply(2, \(x) {
    strsplit(x, " ") |>
      lapply(\(y)
             sprintf("<div class='pt2note'>%s</div><div class='pt2instr'>&nbsp;&nbsp;%s&nbsp;&nbsp;</div><div class='pt2effect'>%s</div>",
                     y[1], y[2], y[3])) |> unlist()
  })
mat <- rbind(c(0:4, 63), mat)
mat[,5] <- "..."

mat <- outer(1:5, 1:6, function(X, Y) {
  sprintf("<td class='patcolumn%i'> %s </td>", X - 1, mat[cbind(X, Y)])
}) |>
  apply(2, paste0, collapse = "\n") |>
  sprintf(
    fmt = sprintf("<tr class = 'patrow%i'%s%%%%s> %%s </tr>",
                  1:6,
                  c("", "", "", "", " style='text-align: center;'", ""))
) |>
  paste0(collapse = "\n")

mat <-
  do.call(sprintf, c(
    list(fmt = mat),
    sprintf(" onmouseleave='highlightrow(%i, false);' onmouseenter='highlightrow(%i, true);'",
            1:6, 1:6)))

hd <-
  c("<th> Row </th>",
    sprintf("<th onmouseleave='highlightcol(%i, false);' onmouseenter='highlightcol(%i, true);'> Channel %i </th>", 1:4, 1:4, 1:4)) |>
  paste0(collapse = "\n") |>
  sprintf(fmt = "<thead>\n<tr>\n%s</tr></thead>")
cp <- "<caption><span id='tab-pat-example'>Table 1: </span>An example of a pattern table. Note that rows 4 to 62 are omitted.</caption>"
sprintf("<table class='tab_patt'>%s\n\n%s\n<tbody>\n%s\n</tbody>\n</table>",
        cp, hd, mat) |>
  htmltools::HTML()

## ----pattern------------------------------------------------------------------
my_ptn <- mod$patterns[[1]]

## ----celllist-----------------------------------------------------------------
## This selects all cells in the first two channels
## of a pattern
my_cells <- my_ptn[,1:2]

## ----cell---------------------------------------------------------------------
my_cells[[1]]


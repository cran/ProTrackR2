// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// mod_header.cpp
SEXP mod_name_(SEXP mod);
extern "C" SEXP _ProTrackR2_mod_name_(SEXP mod) {
  BEGIN_CPP11
    return cpp11::as_sexp(mod_name_(cpp11::as_cpp<cpp11::decay_t<SEXP>>(mod)));
  END_CPP11
}
// mod_header.cpp
SEXP mod_length_(SEXP mod);
extern "C" SEXP _ProTrackR2_mod_length_(SEXP mod) {
  BEGIN_CPP11
    return cpp11::as_sexp(mod_length_(cpp11::as_cpp<cpp11::decay_t<SEXP>>(mod)));
  END_CPP11
}
// mod_header.cpp
SEXP set_mod_length_(SEXP mod, integers modlen);
extern "C" SEXP _ProTrackR2_set_mod_length_(SEXP mod, SEXP modlen) {
  BEGIN_CPP11
    return cpp11::as_sexp(set_mod_length_(cpp11::as_cpp<cpp11::decay_t<SEXP>>(mod), cpp11::as_cpp<cpp11::decay_t<integers>>(modlen)));
  END_CPP11
}
// mod_header.cpp
SEXP mod_pattab_(SEXP mod);
extern "C" SEXP _ProTrackR2_mod_pattab_(SEXP mod) {
  BEGIN_CPP11
    return cpp11::as_sexp(mod_pattab_(cpp11::as_cpp<cpp11::decay_t<SEXP>>(mod)));
  END_CPP11
}
// mod_header.cpp
SEXP update_pattern_sequence_(SEXP mod, integers ptn_sequence);
extern "C" SEXP _ProTrackR2_update_pattern_sequence_(SEXP mod, SEXP ptn_sequence) {
  BEGIN_CPP11
    return cpp11::as_sexp(update_pattern_sequence_(cpp11::as_cpp<cpp11::decay_t<SEXP>>(mod), cpp11::as_cpp<cpp11::decay_t<integers>>(ptn_sequence)));
  END_CPP11
}
// mod_io.cpp
SEXP open_mod_(raws data);
extern "C" SEXP _ProTrackR2_open_mod_(SEXP data) {
  BEGIN_CPP11
    return cpp11::as_sexp(open_mod_(cpp11::as_cpp<cpp11::decay_t<raws>>(data)));
  END_CPP11
}
// mod_io.cpp
SEXP mod_as_raw_(SEXP mod);
extern "C" SEXP _ProTrackR2_mod_as_raw_(SEXP mod) {
  BEGIN_CPP11
    return cpp11::as_sexp(mod_as_raw_(cpp11::as_cpp<cpp11::decay_t<SEXP>>(mod)));
  END_CPP11
}
// mod_io.cpp
SEXP new_mod_(strings name);
extern "C" SEXP _ProTrackR2_new_mod_(SEXP name) {
  BEGIN_CPP11
    return cpp11::as_sexp(new_mod_(cpp11::as_cpp<cpp11::decay_t<strings>>(name)));
  END_CPP11
}
// mod_render.cpp
SEXP render_mod_(SEXP mod, doubles render_duration, list render_options, integers position);
extern "C" SEXP _ProTrackR2_render_mod_(SEXP mod, SEXP render_duration, SEXP render_options, SEXP position) {
  BEGIN_CPP11
    return cpp11::as_sexp(render_mod_(cpp11::as_cpp<cpp11::decay_t<SEXP>>(mod), cpp11::as_cpp<cpp11::decay_t<doubles>>(render_duration), cpp11::as_cpp<cpp11::decay_t<list>>(render_options), cpp11::as_cpp<cpp11::decay_t<integers>>(position)));
  END_CPP11
}
// mod_render.cpp
SEXP mod_duration(SEXP mod, list render_options, integers position);
extern "C" SEXP _ProTrackR2_mod_duration(SEXP mod, SEXP render_options, SEXP position) {
  BEGIN_CPP11
    return cpp11::as_sexp(mod_duration(cpp11::as_cpp<cpp11::decay_t<SEXP>>(mod), cpp11::as_cpp<cpp11::decay_t<list>>(render_options), cpp11::as_cpp<cpp11::decay_t<integers>>(position)));
  END_CPP11
}
// patterns.cpp
SEXP cells_as_raw_(SEXP mod, integers pattern, logicals compact, logicals as_pattern, integers row, integers channel);
extern "C" SEXP _ProTrackR2_cells_as_raw_(SEXP mod, SEXP pattern, SEXP compact, SEXP as_pattern, SEXP row, SEXP channel) {
  BEGIN_CPP11
    return cpp11::as_sexp(cells_as_raw_(cpp11::as_cpp<cpp11::decay_t<SEXP>>(mod), cpp11::as_cpp<cpp11::decay_t<integers>>(pattern), cpp11::as_cpp<cpp11::decay_t<logicals>>(compact), cpp11::as_cpp<cpp11::decay_t<logicals>>(as_pattern), cpp11::as_cpp<cpp11::decay_t<integers>>(row), cpp11::as_cpp<cpp11::decay_t<integers>>(channel)));
  END_CPP11
}
// patterns.cpp
SEXP set_new_pattern_(SEXP mod, integers pattern_idx, raws data_new);
extern "C" SEXP _ProTrackR2_set_new_pattern_(SEXP mod, SEXP pattern_idx, SEXP data_new) {
  BEGIN_CPP11
    return cpp11::as_sexp(set_new_pattern_(cpp11::as_cpp<cpp11::decay_t<SEXP>>(mod), cpp11::as_cpp<cpp11::decay_t<integers>>(pattern_idx), cpp11::as_cpp<cpp11::decay_t<raws>>(data_new)));
  END_CPP11
}
// pt_cell.cpp
SEXP pt_cell_(SEXP mod, integers pattern, integers channel, integers row);
extern "C" SEXP _ProTrackR2_pt_cell_(SEXP mod, SEXP pattern, SEXP channel, SEXP row) {
  BEGIN_CPP11
    return cpp11::as_sexp(pt_cell_(cpp11::as_cpp<cpp11::decay_t<SEXP>>(mod), cpp11::as_cpp<cpp11::decay_t<integers>>(pattern), cpp11::as_cpp<cpp11::decay_t<integers>>(channel), cpp11::as_cpp<cpp11::decay_t<integers>>(row)));
  END_CPP11
}
// pt_cell.cpp
SEXP pt_cell_as_char_(SEXP mod, integers pattern, integers channel, integers row, strings padding, strings empty_char, list sformat);
extern "C" SEXP _ProTrackR2_pt_cell_as_char_(SEXP mod, SEXP pattern, SEXP channel, SEXP row, SEXP padding, SEXP empty_char, SEXP sformat) {
  BEGIN_CPP11
    return cpp11::as_sexp(pt_cell_as_char_(cpp11::as_cpp<cpp11::decay_t<SEXP>>(mod), cpp11::as_cpp<cpp11::decay_t<integers>>(pattern), cpp11::as_cpp<cpp11::decay_t<integers>>(channel), cpp11::as_cpp<cpp11::decay_t<integers>>(row), cpp11::as_cpp<cpp11::decay_t<strings>>(padding), cpp11::as_cpp<cpp11::decay_t<strings>>(empty_char), cpp11::as_cpp<cpp11::decay_t<list>>(sformat)));
  END_CPP11
}
// pt_cell.cpp
SEXP pt_rawcell_as_char_(raws pattern, strings padding, strings empty_char, list sformat);
extern "C" SEXP _ProTrackR2_pt_rawcell_as_char_(SEXP pattern, SEXP padding, SEXP empty_char, SEXP sformat) {
  BEGIN_CPP11
    return cpp11::as_sexp(pt_rawcell_as_char_(cpp11::as_cpp<cpp11::decay_t<raws>>(pattern), cpp11::as_cpp<cpp11::decay_t<strings>>(padding), cpp11::as_cpp<cpp11::decay_t<strings>>(empty_char), cpp11::as_cpp<cpp11::decay_t<list>>(sformat)));
  END_CPP11
}
// pt_cell.cpp
SEXP pt_decode_compact_cell(raws source);
extern "C" SEXP _ProTrackR2_pt_decode_compact_cell(SEXP source) {
  BEGIN_CPP11
    return cpp11::as_sexp(pt_decode_compact_cell(cpp11::as_cpp<cpp11::decay_t<raws>>(source)));
  END_CPP11
}
// pt_cell.cpp
SEXP pt_encode_compact_cell(raws source);
extern "C" SEXP _ProTrackR2_pt_encode_compact_cell(SEXP source) {
  BEGIN_CPP11
    return cpp11::as_sexp(pt_encode_compact_cell(cpp11::as_cpp<cpp11::decay_t<raws>>(source)));
  END_CPP11
}
// pt_cell.cpp
SEXP celllist_to_raw_(list celllist, logicals compact);
extern "C" SEXP _ProTrackR2_celllist_to_raw_(SEXP celllist, SEXP compact) {
  BEGIN_CPP11
    return cpp11::as_sexp(celllist_to_raw_(cpp11::as_cpp<cpp11::decay_t<list>>(celllist), cpp11::as_cpp<cpp11::decay_t<logicals>>(compact)));
  END_CPP11
}
// pt_cell.cpp
SEXP replace_cells_(list pattern, integers_matrix<> idx, raws replacement);
extern "C" SEXP _ProTrackR2_replace_cells_(SEXP pattern, SEXP idx, SEXP replacement) {
  BEGIN_CPP11
    return cpp11::as_sexp(replace_cells_(cpp11::as_cpp<cpp11::decay_t<list>>(pattern), cpp11::as_cpp<cpp11::decay_t<integers_matrix<>>>(idx), cpp11::as_cpp<cpp11::decay_t<raws>>(replacement)));
  END_CPP11
}
// pt_cleanup.cpp
SEXP pt_cleanup_();
extern "C" SEXP _ProTrackR2_pt_cleanup_() {
  BEGIN_CPP11
    return cpp11::as_sexp(pt_cleanup_());
  END_CPP11
}
// pt_init.cpp
SEXP pt_init_();
extern "C" SEXP _ProTrackR2_pt_init_() {
  BEGIN_CPP11
    return cpp11::as_sexp(pt_init_());
  END_CPP11
}
// samp_io.cpp
SEXP open_samp_(raws data);
extern "C" SEXP _ProTrackR2_open_samp_(SEXP data) {
  BEGIN_CPP11
    return cpp11::as_sexp(open_samp_(cpp11::as_cpp<cpp11::decay_t<raws>>(data)));
  END_CPP11
}
// samp_io.cpp
SEXP sample_file_format_(SEXP input, strings file_type);
extern "C" SEXP _ProTrackR2_sample_file_format_(SEXP input, SEXP file_type) {
  BEGIN_CPP11
    return cpp11::as_sexp(sample_file_format_(cpp11::as_cpp<cpp11::decay_t<SEXP>>(input), cpp11::as_cpp<cpp11::decay_t<strings>>(file_type)));
  END_CPP11
}
// samples.cpp
SEXP mod_sample_as_raw_(SEXP mod, integers idx);
extern "C" SEXP _ProTrackR2_mod_sample_as_raw_(SEXP mod, SEXP idx) {
  BEGIN_CPP11
    return cpp11::as_sexp(mod_sample_as_raw_(cpp11::as_cpp<cpp11::decay_t<SEXP>>(mod), cpp11::as_cpp<cpp11::decay_t<integers>>(idx)));
  END_CPP11
}
// samples.cpp
SEXP mod_sample_info_(SEXP mod, integers idx);
extern "C" SEXP _ProTrackR2_mod_sample_info_(SEXP mod, SEXP idx) {
  BEGIN_CPP11
    return cpp11::as_sexp(mod_sample_info_(cpp11::as_cpp<cpp11::decay_t<SEXP>>(mod), cpp11::as_cpp<cpp11::decay_t<integers>>(idx)));
  END_CPP11
}
// samples.cpp
SEXP mod_sample_as_int_(SEXP mod, integers idx);
extern "C" SEXP _ProTrackR2_mod_sample_as_int_(SEXP mod, SEXP idx) {
  BEGIN_CPP11
    return cpp11::as_sexp(mod_sample_as_int_(cpp11::as_cpp<cpp11::decay_t<SEXP>>(mod), cpp11::as_cpp<cpp11::decay_t<integers>>(idx)));
  END_CPP11
}
// samples.cpp
logicals validate_sample_raw_(raws smp_data);
extern "C" SEXP _ProTrackR2_validate_sample_raw_(SEXP smp_data) {
  BEGIN_CPP11
    return cpp11::as_sexp(validate_sample_raw_(cpp11::as_cpp<cpp11::decay_t<raws>>(smp_data)));
  END_CPP11
}
// samples.cpp
SEXP mod_set_sample_(SEXP mod, integers idx, raws smp_data);
extern "C" SEXP _ProTrackR2_mod_set_sample_(SEXP mod, SEXP idx, SEXP smp_data) {
  BEGIN_CPP11
    return cpp11::as_sexp(mod_set_sample_(cpp11::as_cpp<cpp11::decay_t<SEXP>>(mod), cpp11::as_cpp<cpp11::decay_t<integers>>(idx), cpp11::as_cpp<cpp11::decay_t<raws>>(smp_data)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_ProTrackR2_celllist_to_raw_",         (DL_FUNC) &_ProTrackR2_celllist_to_raw_,         2},
    {"_ProTrackR2_cells_as_raw_",            (DL_FUNC) &_ProTrackR2_cells_as_raw_,            6},
    {"_ProTrackR2_mod_as_raw_",              (DL_FUNC) &_ProTrackR2_mod_as_raw_,              1},
    {"_ProTrackR2_mod_duration",             (DL_FUNC) &_ProTrackR2_mod_duration,             3},
    {"_ProTrackR2_mod_length_",              (DL_FUNC) &_ProTrackR2_mod_length_,              1},
    {"_ProTrackR2_mod_name_",                (DL_FUNC) &_ProTrackR2_mod_name_,                1},
    {"_ProTrackR2_mod_pattab_",              (DL_FUNC) &_ProTrackR2_mod_pattab_,              1},
    {"_ProTrackR2_mod_sample_as_int_",       (DL_FUNC) &_ProTrackR2_mod_sample_as_int_,       2},
    {"_ProTrackR2_mod_sample_as_raw_",       (DL_FUNC) &_ProTrackR2_mod_sample_as_raw_,       2},
    {"_ProTrackR2_mod_sample_info_",         (DL_FUNC) &_ProTrackR2_mod_sample_info_,         2},
    {"_ProTrackR2_mod_set_sample_",          (DL_FUNC) &_ProTrackR2_mod_set_sample_,          3},
    {"_ProTrackR2_new_mod_",                 (DL_FUNC) &_ProTrackR2_new_mod_,                 1},
    {"_ProTrackR2_open_mod_",                (DL_FUNC) &_ProTrackR2_open_mod_,                1},
    {"_ProTrackR2_open_samp_",               (DL_FUNC) &_ProTrackR2_open_samp_,               1},
    {"_ProTrackR2_pt_cell_",                 (DL_FUNC) &_ProTrackR2_pt_cell_,                 4},
    {"_ProTrackR2_pt_cell_as_char_",         (DL_FUNC) &_ProTrackR2_pt_cell_as_char_,         7},
    {"_ProTrackR2_pt_cleanup_",              (DL_FUNC) &_ProTrackR2_pt_cleanup_,              0},
    {"_ProTrackR2_pt_decode_compact_cell",   (DL_FUNC) &_ProTrackR2_pt_decode_compact_cell,   1},
    {"_ProTrackR2_pt_encode_compact_cell",   (DL_FUNC) &_ProTrackR2_pt_encode_compact_cell,   1},
    {"_ProTrackR2_pt_init_",                 (DL_FUNC) &_ProTrackR2_pt_init_,                 0},
    {"_ProTrackR2_pt_rawcell_as_char_",      (DL_FUNC) &_ProTrackR2_pt_rawcell_as_char_,      4},
    {"_ProTrackR2_render_mod_",              (DL_FUNC) &_ProTrackR2_render_mod_,              4},
    {"_ProTrackR2_replace_cells_",           (DL_FUNC) &_ProTrackR2_replace_cells_,           3},
    {"_ProTrackR2_sample_file_format_",      (DL_FUNC) &_ProTrackR2_sample_file_format_,      2},
    {"_ProTrackR2_set_mod_length_",          (DL_FUNC) &_ProTrackR2_set_mod_length_,          2},
    {"_ProTrackR2_set_new_pattern_",         (DL_FUNC) &_ProTrackR2_set_new_pattern_,         3},
    {"_ProTrackR2_update_pattern_sequence_", (DL_FUNC) &_ProTrackR2_update_pattern_sequence_, 2},
    {"_ProTrackR2_validate_sample_raw_",     (DL_FUNC) &_ProTrackR2_validate_sample_raw_,     1},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_ProTrackR2(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
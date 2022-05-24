// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "CDSeq_types.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// gibbsSampler
List gibbsSampler(double ALPHA, std::vector<double> BETA, std::vector<double> constraints, NumericMatrix mixtureSamples, int T, int NN, int OUTPUT, int processID, int data_block_idx, std::string CDSeq_tmp_log, int write_2_file, int verbose);
RcppExport SEXP _CDSeq_gibbsSampler(SEXP ALPHASEXP, SEXP BETASEXP, SEXP constraintsSEXP, SEXP mixtureSamplesSEXP, SEXP TSEXP, SEXP NNSEXP, SEXP OUTPUTSEXP, SEXP processIDSEXP, SEXP data_block_idxSEXP, SEXP CDSeq_tmp_logSEXP, SEXP write_2_fileSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type ALPHA(ALPHASEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type BETA(BETASEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type constraints(constraintsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type mixtureSamples(mixtureSamplesSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    Rcpp::traits::input_parameter< int >::type NN(NNSEXP);
    Rcpp::traits::input_parameter< int >::type OUTPUT(OUTPUTSEXP);
    Rcpp::traits::input_parameter< int >::type processID(processIDSEXP);
    Rcpp::traits::input_parameter< int >::type data_block_idx(data_block_idxSEXP);
    Rcpp::traits::input_parameter< std::string >::type CDSeq_tmp_log(CDSeq_tmp_logSEXP);
    Rcpp::traits::input_parameter< int >::type write_2_file(write_2_fileSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(gibbsSampler(ALPHA, BETA, constraints, mixtureSamples, T, NN, OUTPUT, processID, data_block_idx, CDSeq_tmp_log, write_2_file, verbose));
    return rcpp_result_gen;
END_RCPP
}
// seedMT
void seedMT(uint32 seed);
RcppExport SEXP _CDSeq_seedMT(SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint32 >::type seed(seedSEXP);
    seedMT(seed);
    return R_NilValue;
END_RCPP
}
// randomMT
uint32 randomMT();
RcppExport SEXP _CDSeq_randomMT() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(randomMT());
    return rcpp_result_gen;
END_RCPP
}
// hungarian_Rcpp
List hungarian_Rcpp(NumericMatrix costMat);
RcppExport SEXP _CDSeq_hungarian_Rcpp(SEXP costMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type costMat(costMatSEXP);
    rcpp_result_gen = Rcpp::wrap(hungarian_Rcpp(costMat));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CDSeq_gibbsSampler", (DL_FUNC) &_CDSeq_gibbsSampler, 11},
    {"_CDSeq_seedMT", (DL_FUNC) &_CDSeq_seedMT, 1},
    {"_CDSeq_randomMT", (DL_FUNC) &_CDSeq_randomMT, 0},
    {"_CDSeq_hungarian_Rcpp", (DL_FUNC) &_CDSeq_hungarian_Rcpp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_CDSeq(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

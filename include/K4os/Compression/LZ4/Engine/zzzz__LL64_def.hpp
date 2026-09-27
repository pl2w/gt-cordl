#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "K4os/Compression/LZ4/Engine/zzzz__LL_cParams_t_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LL64)
namespace GlobalNamespace {
struct LL_HCfavor_e;
}
namespace GlobalNamespace {
struct LL_LZ4HC_match_t;
}
namespace GlobalNamespace {
struct LL_LZ4_streamHC_t;
}
namespace GlobalNamespace {
struct LL_LZ4_stream_t;
}
namespace GlobalNamespace {
struct LL_dictCtx_directive;
}
namespace GlobalNamespace {
struct LL_dictIssue_directive;
}
namespace GlobalNamespace {
struct LL_dict_directive;
}
namespace GlobalNamespace {
struct LL_earlyEnd_directive;
}
namespace GlobalNamespace {
struct LL_endCondition_directive;
}
namespace GlobalNamespace {
struct LL_limitedOutput_directive;
}
namespace GlobalNamespace {
struct LL_tableType_t;
}
// Forward declare root types
namespace K4os::Compression::LZ4::Engine {
class LL64;
}
// Write type traits
MARK_REF_T(::K4os::Compression::LZ4::Engine::LL64*);
DEFINE_IL2CPP_CLASS(::K4os::Compression::LZ4::Engine::LL64*, "K4os.Compression.LZ4.Engine", "LL64");
// Dependencies K4os.Compression.LZ4.Engine.LL, K4os.Compression.LZ4.Engine.LL::cParams_t
namespace K4os::Compression::LZ4::Engine {
// Is value type: false
// CS Name: K4os.Compression.LZ4.Engine.LL64
class CORDL_TYPE LL64 : public ::K4os::Compression::LZ4::Engine::LL {
public:
// Declarations
/// @brief Field DeBruijnBytePos, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DeBruijnBytePos, put=setStaticF_DeBruijnBytePos)) uint32_t*  DeBruijnBytePos;

/// @brief Field _DeBruijnBytePos, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__DeBruijnBytePos, put=setStaticF__DeBruijnBytePos)) ::ArrayW<uint32_t>  _DeBruijnBytePos;

/// @brief Field clTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_clTable, put=setStaticF_clTable)) ::ArrayW<::GlobalNamespace::LL_cParams_t>  clTable;

/// @brief Method LZ4HC_FindLongerMatch, addr 0x9cc5b28, size 0x104, virtual false, abstract: false, final false
static inline ::GlobalNamespace::LL_LZ4HC_match_t LZ4HC_FindLongerMatch(::GlobalNamespace::LL_LZ4_streamHC_t*  ctx, uint8_t*  ip, uint8_t*  iHighLimit, int32_t  minLen, int32_t  nbSearches, ::GlobalNamespace::LL_dictCtx_directive  dict, ::GlobalNamespace::LL_HCfavor_e  favorDecSpeed) ;

/// @brief Method LZ4HC_InsertAndFindBestMatch, addr 0x9cc5a60, size 0xc8, virtual false, abstract: false, final false
static inline int32_t LZ4HC_InsertAndFindBestMatch(::GlobalNamespace::LL_LZ4_streamHC_t*  hc4, uint8_t*  ip, uint8_t*  iLimit, uint8_t*  matchpos, int32_t  maxNbAttempts, bool  patternAnalysis, ::GlobalNamespace::LL_dictCtx_directive  dict) ;

/// @brief Method LZ4HC_InsertAndGetWiderMatch, addr 0x9cc4b58, size 0xf08, virtual false, abstract: false, final false
static inline int32_t LZ4HC_InsertAndGetWiderMatch(::GlobalNamespace::LL_LZ4_streamHC_t*  hc4, uint8_t*  ip, uint8_t*  iLowLimit, uint8_t*  iHighLimit, int32_t  longest, uint8_t*  matchpos, uint8_t*  startpos, int32_t  maxNbAttempts, bool  patternAnalysis, bool  chainSwap, ::GlobalNamespace::LL_dictCtx_directive  dict, ::GlobalNamespace::LL_HCfavor_e  favorDecSpeed) ;

/// @brief Method LZ4HC_compress_generic, addr 0x9cc7e50, size 0xf0, virtual false, abstract: false, final false
static inline int32_t LZ4HC_compress_generic(::GlobalNamespace::LL_LZ4_streamHC_t*  ctx, uint8_t*  src, uint8_t*  dst, int32_t*  srcSizePtr, int32_t  dstCapacity, int32_t  cLevel, ::GlobalNamespace::LL_limitedOutput_directive  limit) ;

/// @brief Method LZ4HC_compress_generic_dictCtx, addr 0x9cc7c58, size 0x1f8, virtual false, abstract: false, final false
static inline int32_t LZ4HC_compress_generic_dictCtx(::GlobalNamespace::LL_LZ4_streamHC_t*  ctx, uint8_t*  src, uint8_t*  dst, int32_t*  srcSizePtr, int32_t  dstCapacity, int32_t  cLevel, ::GlobalNamespace::LL_limitedOutput_directive  limit) ;

/// @brief Method LZ4HC_compress_generic_internal, addr 0x9cc79c8, size 0x1e0, virtual false, abstract: false, final false
static inline int32_t LZ4HC_compress_generic_internal(::GlobalNamespace::LL_LZ4_streamHC_t*  ctx, uint8_t*  src, uint8_t*  dst, int32_t*  srcSizePtr, int32_t  dstCapacity, int32_t  cLevel, ::GlobalNamespace::LL_limitedOutput_directive  limit, ::GlobalNamespace::LL_dictCtx_directive  dict) ;

/// @brief Method LZ4HC_compress_generic_noDictCtx, addr 0x9cc7ba8, size 0xb0, virtual false, abstract: false, final false
static inline int32_t LZ4HC_compress_generic_noDictCtx(::GlobalNamespace::LL_LZ4_streamHC_t*  ctx, uint8_t*  src, uint8_t*  dst, int32_t*  srcSizePtr, int32_t  dstCapacity, int32_t  cLevel, ::GlobalNamespace::LL_limitedOutput_directive  limit) ;

/// @brief Method LZ4HC_compress_hashChain, addr 0x9cc5dcc, size 0xc8c, virtual false, abstract: false, final false
static inline int32_t LZ4HC_compress_hashChain(::GlobalNamespace::LL_LZ4_streamHC_t*  ctx, uint8_t*  source, uint8_t*  dest, int32_t*  srcSizePtr, int32_t  maxOutputSize, int32_t  maxNbAttempts, ::GlobalNamespace::LL_limitedOutput_directive  limit, ::GlobalNamespace::LL_dictCtx_directive  dict) ;

/// @brief Method LZ4HC_compress_optimal, addr 0x9cc6a58, size 0xf70, virtual false, abstract: false, final false
static inline int32_t LZ4HC_compress_optimal(::GlobalNamespace::LL_LZ4_streamHC_t*  ctx, uint8_t*  source, uint8_t*  dst, int32_t*  srcSizePtr, int32_t  dstCapacity, int32_t  nbSearches, uint32_t  sufficient_len, ::GlobalNamespace::LL_limitedOutput_directive  limit, bool  fullUpdate, ::GlobalNamespace::LL_dictCtx_directive  dict, ::GlobalNamespace::LL_HCfavor_e  favorDecSpeed) ;

/// @brief Method LZ4HC_countPattern, addr 0x9cc4a2c, size 0x12c, virtual false, abstract: false, final false
static inline uint32_t LZ4HC_countPattern(uint8_t*  ip, uint8_t*  iEnd, uint32_t  pattern32) ;

/// @brief Method LZ4HC_encodeSequence, addr 0x9cc5c2c, size 0x1a0, virtual false, abstract: false, final false
static inline int32_t LZ4HC_encodeSequence(uint8_t*  ip, uint8_t*  op, uint8_t*  anchor, int32_t  matchLength, uint8_t*  match, ::GlobalNamespace::LL_limitedOutput_directive  limit, uint8_t*  oend) ;

/// @brief Method LZ4_NbCommonBytes, addr 0x9cc8148, size 0x84, virtual false, abstract: false, final false
static inline uint32_t LZ4_NbCommonBytes(uint64_t  val) ;

/// @brief Method LZ4_compress_HC, addr 0x9cbccb4, size 0x174, virtual false, abstract: false, final false
static inline int32_t LZ4_compress_HC(uint8_t*  src, uint8_t*  dst, int32_t  srcSize, int32_t  dstCapacity, int32_t  compressionLevel) ;

/// @brief Method LZ4_compress_HC_extStateHC, addr 0x9cc806c, size 0xdc, virtual false, abstract: false, final false
static inline int32_t LZ4_compress_HC_extStateHC(::GlobalNamespace::LL_LZ4_streamHC_t*  state, uint8_t*  src, uint8_t*  dst, int32_t  srcSize, int32_t  dstCapacity, int32_t  compressionLevel) ;

/// @brief Method LZ4_compress_HC_extStateHC_fastReset, addr 0x9cc7f40, size 0x12c, virtual false, abstract: false, final false
static inline int32_t LZ4_compress_HC_extStateHC_fastReset(::GlobalNamespace::LL_LZ4_streamHC_t*  state, uint8_t*  src, uint8_t*  dst, int32_t  srcSize, int32_t  dstCapacity, int32_t  compressionLevel) ;

/// @brief Method LZ4_compress_fast, addr 0x9cbcb0c, size 0xd4, virtual false, abstract: false, final false
static inline int32_t LZ4_compress_fast(uint8_t*  source, uint8_t*  dest, int32_t  inputSize, int32_t  maxOutputSize, int32_t  acceleration) ;

/// @brief Method LZ4_compress_fast_extState, addr 0x9cc4830, size 0x1fc, virtual false, abstract: false, final false
static inline int32_t LZ4_compress_fast_extState(::GlobalNamespace::LL_LZ4_stream_t*  state, uint8_t*  source, uint8_t*  dest, int32_t  inputSize, int32_t  maxOutputSize, int32_t  acceleration) ;

/// @brief Method LZ4_compress_generic, addr 0x9cc3968, size 0xec8, virtual false, abstract: false, final false
static inline int32_t LZ4_compress_generic(::GlobalNamespace::LL_LZ4_stream_t*  cctx, uint8_t*  source, uint8_t*  dest, int32_t  inputSize, int32_t*  inputConsumed, int32_t  maxOutputSize, ::GlobalNamespace::LL_limitedOutput_directive  outputDirective, ::GlobalNamespace::LL_tableType_t  tableType, ::GlobalNamespace::LL_dict_directive  dictDirective, ::GlobalNamespace::LL_dictIssue_directive  dictIssue, int32_t  acceleration) ;

/// @brief Method LZ4_count, addr 0x9cc81cc, size 0x208, virtual false, abstract: false, final false
static inline uint32_t LZ4_count(uint8_t*  pIn, uint8_t*  pMatch, uint8_t*  pInLimit) ;

/// @brief Method LZ4_decompress_generic, addr 0x9cc3004, size 0xe0, virtual false, abstract: false, final false
static inline int32_t LZ4_decompress_generic(uint8_t*  src, uint8_t*  dst, int32_t  srcSize, int32_t  outputSize, ::GlobalNamespace::LL_endCondition_directive  endOnInput, ::GlobalNamespace::LL_earlyEnd_directive  partialDecoding, ::GlobalNamespace::LL_dict_directive  dict, uint8_t*  lowPrefix, uint8_t*  dictStart, uint32_t  dictSize) ;

/// @brief Method LZ4_decompress_generic, addr 0x9cc30e4, size 0x884, virtual false, abstract: false, final false
static inline int32_t LZ4_decompress_generic(uint8_t*  src, uint8_t*  dst, int32_t  srcSize, int32_t  outputSize, bool  endOnInput, bool  partialDecoding, ::GlobalNamespace::LL_dict_directive  dict, uint8_t*  lowPrefix, uint8_t*  dictStart, uint32_t  dictSize) ;

/// @brief Method LZ4_decompress_safe, addr 0x9cbc964, size 0xd4, virtual false, abstract: false, final false
static inline int32_t LZ4_decompress_safe(uint8_t*  source, uint8_t*  dest, int32_t  compressedSize, int32_t  maxDecompressedSize) ;

/// @brief Method LZ4_getPosition, addr 0x9cc85a4, size 0x128, virtual false, abstract: false, final false
static inline uint8_t* LZ4_getPosition(uint8_t*  p, void*  tableBase, ::GlobalNamespace::LL_tableType_t  tableType, uint8_t*  srcBase) ;

/// @brief Method LZ4_hashPosition, addr 0x9cc83d4, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t LZ4_hashPosition(void*  p, ::GlobalNamespace::LL_tableType_t  tableType) ;

/// @brief Method LZ4_putPosition, addr 0x9cc8470, size 0x134, virtual false, abstract: false, final false
static inline void LZ4_putPosition(uint8_t*  p, void*  tableBase, ::GlobalNamespace::LL_tableType_t  tableType, uint8_t*  srcBase) ;

static inline uint32_t* getStaticF_DeBruijnBytePos() ;

static inline ::ArrayW<uint32_t> getStaticF__DeBruijnBytePos() ;

static inline ::ArrayW<::GlobalNamespace::LL_cParams_t> getStaticF_clTable() ;

static inline void setStaticF_DeBruijnBytePos(uint32_t*  value) ;

static inline void setStaticF__DeBruijnBytePos(::ArrayW<uint32_t>  value) ;

static inline void setStaticF_clTable(::ArrayW<::GlobalNamespace::LL_cParams_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LL64() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LL64", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LL64(LL64 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LL64", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LL64(LL64 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31599};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::K4os::Compression::LZ4::Engine::LL64) == 0x10, "Size mismatch!");

} // namespace end def K4os::Compression::LZ4::Engine

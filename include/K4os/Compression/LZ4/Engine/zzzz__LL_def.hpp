#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LL)
namespace GlobalNamespace {
struct LL_HCfavor_e;
}
namespace GlobalNamespace {
struct LL_LZ4HC_match_t;
}
namespace GlobalNamespace {
struct LL_LZ4HC_optimal_t;
}
namespace GlobalNamespace {
struct LL_LZ4_streamHC_t;
}
namespace GlobalNamespace {
struct LL_LZ4_stream_t;
}
namespace GlobalNamespace {
struct LL_cParams_t;
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
struct LL_lz4hc_strat_e;
}
namespace GlobalNamespace {
struct LL_repeat_state_e;
}
namespace GlobalNamespace {
struct LL_tableType_t;
}
namespace GlobalNamespace {
struct LL_variable_length_error;
}
namespace K4os::Compression::LZ4::Engine {
struct Algorithm;
}
// Forward declare root types
namespace K4os::Compression::LZ4::Engine {
class LL;
}
// Write type traits
MARK_REF_T(::K4os::Compression::LZ4::Engine::LL*);
DEFINE_IL2CPP_CLASS(::K4os::Compression::LZ4::Engine::LL*, "K4os.Compression.LZ4.Engine", "LL");
// Dependencies System.Object
namespace K4os::Compression::LZ4::Engine {
// Is value type: false
// CS Name: K4os.Compression.LZ4.Engine.LL
class CORDL_TYPE LL : public ::System::Object {
public:
// Declarations
using HCfavor_e = ::GlobalNamespace::LL_HCfavor_e;

using LZ4HC_match_t = ::GlobalNamespace::LL_LZ4HC_match_t;

using LZ4HC_optimal_t = ::GlobalNamespace::LL_LZ4HC_optimal_t;

using LZ4_streamHC_t = ::GlobalNamespace::LL_LZ4_streamHC_t;

using LZ4_stream_t = ::GlobalNamespace::LL_LZ4_stream_t;

using cParams_t = ::GlobalNamespace::LL_cParams_t;

using dictCtx_directive = ::GlobalNamespace::LL_dictCtx_directive;

using dictIssue_directive = ::GlobalNamespace::LL_dictIssue_directive;

using dict_directive = ::GlobalNamespace::LL_dict_directive;

using earlyEnd_directive = ::GlobalNamespace::LL_earlyEnd_directive;

using endCondition_directive = ::GlobalNamespace::LL_endCondition_directive;

using limitedOutput_directive = ::GlobalNamespace::LL_limitedOutput_directive;

using lz4hc_strat_e = ::GlobalNamespace::LL_lz4hc_strat_e;

using repeat_state_e = ::GlobalNamespace::LL_repeat_state_e;

using tableType_t = ::GlobalNamespace::LL_tableType_t;

using variable_length_error = ::GlobalNamespace::LL_variable_length_error;

/// @brief Field <Enforce32>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__Enforce32_k__BackingField, put=setStaticF__Enforce32_k__BackingField)) bool  _Enforce32_k__BackingField;

/// @brief Field _dec64table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__dec64table, put=setStaticF__dec64table)) ::ArrayW<int32_t>  _dec64table;

/// @brief Field _inc32table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__inc32table, put=setStaticF__inc32table)) ::ArrayW<uint32_t>  _inc32table;

/// @brief Field dec64table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dec64table, put=setStaticF_dec64table)) int32_t*  dec64table;

/// @brief Field inc32table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_inc32table, put=setStaticF_inc32table)) uint32_t*  inc32table;

/// @brief Method DELTANEXTU16, addr 0x9cbbae0, size 0xc, virtual false, abstract: false, final false
static inline ::by_ref<uint16_t> DELTANEXTU16(uint16_t*  table, uint32_t  pos) ;

/// @brief Method HASH_FUNCTION, addr 0x9cbbacc, size 0x14, virtual false, abstract: false, final false
static inline uint32_t HASH_FUNCTION(uint32_t  value) ;

/// @brief Method LZ4HC_Insert, addr 0x9cbbba4, size 0x198, virtual false, abstract: false, final false
static inline void LZ4HC_Insert(::GlobalNamespace::LL_LZ4_streamHC_t*  hc4, uint8_t*  ip) ;

/// @brief Method LZ4HC_clearTables, addr 0x9cbbdf0, size 0xec, virtual false, abstract: false, final false
static inline void LZ4HC_clearTables(::GlobalNamespace::LL_LZ4_streamHC_t*  hc4) ;

/// @brief Method LZ4HC_countBack, addr 0x9cbbf94, size 0xbc, virtual false, abstract: false, final false
static inline int32_t LZ4HC_countBack(uint8_t*  ip, uint8_t*  match, uint8_t*  iMin, uint8_t*  mMin) ;

/// @brief Method LZ4HC_hashPtr, addr 0x9cbbaec, size 0xb8, virtual false, abstract: false, final false
static inline uint32_t LZ4HC_hashPtr(void*  ptr) ;

/// @brief Method LZ4HC_init_internal, addr 0x9cbbedc, size 0x9c, virtual false, abstract: false, final false
static inline void LZ4HC_init_internal(::GlobalNamespace::LL_LZ4_streamHC_t*  hc4, uint8_t*  start) ;

/// @brief Method LZ4HC_literalsPrice, addr 0x9cbc1c8, size 0x24, virtual false, abstract: false, final false
static inline int32_t LZ4HC_literalsPrice(int32_t  litlen) ;

/// @brief Method LZ4HC_protectDictEnd, addr 0x9cbbf84, size 0x10, virtual false, abstract: false, final false
static inline bool LZ4HC_protectDictEnd(uint32_t  dictLimit, uint32_t  matchIndex) ;

/// @brief Method LZ4HC_reverseCountPattern, addr 0x9cbc050, size 0x10c, virtual false, abstract: false, final false
static inline uint32_t LZ4HC_reverseCountPattern(uint8_t*  ip, uint8_t*  iLow, uint32_t  pattern) ;

/// @brief Method LZ4HC_rotatePattern, addr 0x9cbc15c, size 0x6c, virtual false, abstract: false, final false
static inline uint32_t LZ4HC_rotatePattern(uint32_t  rotate, uint32_t  pattern) ;

/// @brief Method LZ4HC_rotl32, addr 0x9cbbf78, size 0xc, virtual false, abstract: false, final false
static inline uint32_t LZ4HC_rotl32(uint32_t  x, int32_t  r) ;

/// @brief Method LZ4HC_sequencePrice, addr 0x9cbc1ec, size 0xa0, virtual false, abstract: false, final false
static inline int32_t LZ4HC_sequencePrice(int32_t  litlen, int32_t  mlen) ;

/// @brief Method LZ4HC_setExternalDict, addr 0x9cbbd3c, size 0xb4, virtual false, abstract: false, final false
static inline void LZ4HC_setExternalDict(::GlobalNamespace::LL_LZ4_streamHC_t*  ctxPtr, uint8_t*  newBlock) ;

/// @brief Method LZ4_clearHash, addr 0x9cbc420, size 0x30, virtual false, abstract: false, final false
static inline void LZ4_clearHash(uint32_t  h, void*  tableBase, ::GlobalNamespace::LL_tableType_t  tableType) ;

/// @brief Method LZ4_compressBound, addr 0x9cbc3a0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t LZ4_compressBound(int32_t  isize) ;

/// @brief Method LZ4_getIndexOnHash, addr 0x9cbc4a8, size 0x28, virtual false, abstract: false, final false
static inline uint32_t LZ4_getIndexOnHash(uint32_t  h, void*  tableBase, ::GlobalNamespace::LL_tableType_t  tableType) ;

/// @brief Method LZ4_getPositionOnHash, addr 0x9cbc4d0, size 0x2c, virtual false, abstract: false, final false
static inline uint8_t* LZ4_getPositionOnHash(uint32_t  h, void*  tableBase, ::GlobalNamespace::LL_tableType_t  tableType, uint8_t*  srcBase) ;

/// @brief Method LZ4_hash4, addr 0x9cbc3dc, size 0x20, virtual false, abstract: false, final false
static inline uint32_t LZ4_hash4(uint32_t  sequence, ::GlobalNamespace::LL_tableType_t  tableType) ;

/// @brief Method LZ4_hash5, addr 0x9cbc3fc, size 0x24, virtual false, abstract: false, final false
static inline uint32_t LZ4_hash5(uint64_t  sequence, ::GlobalNamespace::LL_tableType_t  tableType) ;

/// @brief Method LZ4_initStream, addr 0x9cbc580, size 0xbc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::LL_LZ4_stream_t* LZ4_initStream(::GlobalNamespace::LL_LZ4_stream_t*  buffer) ;

/// @brief Method LZ4_initStreamHC, addr 0x9cbb92c, size 0x8c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::LL_LZ4_streamHC_t* LZ4_initStreamHC(void*  buffer, int32_t  size) ;

/// @brief Method LZ4_initStreamHC, addr 0x9cbb9b8, size 0x5c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::LL_LZ4_streamHC_t* LZ4_initStreamHC(::GlobalNamespace::LL_LZ4_streamHC_t*  stream) ;

/// @brief Method LZ4_putIndexOnHash, addr 0x9cbc450, size 0x20, virtual false, abstract: false, final false
static inline void LZ4_putIndexOnHash(uint32_t  idx, uint32_t  h, void*  tableBase, ::GlobalNamespace::LL_tableType_t  tableType) ;

/// @brief Method LZ4_putPositionOnHash, addr 0x9cbc470, size 0x38, virtual false, abstract: false, final false
static inline void LZ4_putPositionOnHash(uint8_t*  p, uint32_t  h, void*  tableBase, ::GlobalNamespace::LL_tableType_t  tableType, uint8_t*  srcBase) ;

/// @brief Method LZ4_readVLE, addr 0x9cbc52c, size 0x54, virtual false, abstract: false, final false
static inline uint32_t LZ4_readVLE(uint8_t*  ip, uint8_t*  lencheck, bool  loop_check, bool  initial_check, ::GlobalNamespace::LL_variable_length_error*  error) ;

/// @brief Method LZ4_resetStreamHC_fast, addr 0x9cbba14, size 0xb8, virtual false, abstract: false, final false
static inline void LZ4_resetStreamHC_fast(::GlobalNamespace::LL_LZ4_streamHC_t*  LZ4_streamHCPtr, int32_t  compressionLevel) ;

/// @brief Method LZ4_setCompressionLevel, addr 0x9cbb8f8, size 0x34, virtual false, abstract: false, final false
static inline void LZ4_setCompressionLevel(::GlobalNamespace::LL_LZ4_streamHC_t*  LZ4_streamHCPtr, int32_t  compressionLevel) ;

/// @brief Method MAX, addr 0x9cbc520, size 0xc, virtual false, abstract: false, final false
static inline int64_t MAX(int64_t  a, int64_t  b) ;

/// @brief Method MAX, addr 0x9cbc514, size 0xc, virtual false, abstract: false, final false
static inline uint32_t MAX(uint32_t  a, uint32_t  b) ;

/// @brief Method MIN, addr 0x9cbc4fc, size 0xc, virtual false, abstract: false, final false
static inline int32_t MIN(int32_t  a, int32_t  b) ;

/// @brief Method MIN, addr 0x9cbc508, size 0xc, virtual false, abstract: false, final false
static inline uint32_t MIN(uint32_t  a, uint32_t  b) ;

static inline bool getStaticF__Enforce32_k__BackingField() ;

static inline ::ArrayW<int32_t> getStaticF__dec64table() ;

static inline ::ArrayW<uint32_t> getStaticF__inc32table() ;

static inline int32_t* getStaticF_dec64table() ;

static inline uint32_t* getStaticF_inc32table() ;

/// @brief Method get_Algorithm, addr 0x9cbc2e4, size 0xbc, virtual false, abstract: false, final false
static inline ::K4os::Compression::LZ4::Engine::Algorithm get_Algorithm() ;

/// [CompilerGenerated]
/// @brief Method get_Enforce32, addr 0x9cbc28c, size 0x58, virtual false, abstract: false, final false
static inline bool get_Enforce32() ;

static inline void setStaticF__Enforce32_k__BackingField(bool  value) ;

static inline void setStaticF__dec64table(::ArrayW<int32_t>  value) ;

static inline void setStaticF__inc32table(::ArrayW<uint32_t>  value) ;

static inline void setStaticF_dec64table(int32_t*  value) ;

static inline void setStaticF_inc32table(uint32_t*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LL() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LL", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LL(LL && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LL", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LL(LL const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31596};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::K4os::Compression::LZ4::Engine::LL) == 0x10, "Size mismatch!");

} // namespace end def K4os::Compression::LZ4::Engine

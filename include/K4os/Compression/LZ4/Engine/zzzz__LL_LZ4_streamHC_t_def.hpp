#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_LZ4_streamHC_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4_streamHC_t__chainTable_e__FixedBuffer_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4_streamHC_t__hashTable_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LL_LZ4_streamHC_t)
namespace GlobalNamespace {
struct LZ4_streamHC_t_LL__chainTable_e__FixedBuffer;
}
namespace GlobalNamespace {
struct LZ4_streamHC_t_LL__hashTable_e__FixedBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct LL_LZ4_streamHC_t;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LL_LZ4_streamHC_t);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LL_LZ4_streamHC_t, "K4os.Compression.LZ4.Engine", "LL/LZ4_streamHC_t");
// Dependencies K4os.Compression.LZ4.Engine.LL::LZ4_streamHC_t::<chainTable>e__FixedBuffer, K4os.Compression.LZ4.Engine.LL::LZ4_streamHC_t::<hashTable>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// CS Name: K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t
struct CORDL_TYPE LL_LZ4_streamHC_t {
public:
// Declarations
using _chainTable_e__FixedBuffer = ::GlobalNamespace::LZ4_streamHC_t_LL__chainTable_e__FixedBuffer;

using _hashTable_e__FixedBuffer = ::GlobalNamespace::LZ4_streamHC_t_LL__hashTable_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr LL_LZ4_streamHC_t() ;

// Ctor Parameters [CppParam { name: "hashTable", ty: "::GlobalNamespace::LZ4_streamHC_t_LL__hashTable_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "chainTable", ty: "::GlobalNamespace::LZ4_streamHC_t_LL__chainTable_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "end", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "base", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "dictBase", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "dictLimit", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lowLimit", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "nextToUpdate", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "compressionLevel", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "favorDecSpeed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "dirty", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "dictCtx", ty: "::GlobalNamespace::LL_LZ4_streamHC_t*", modifiers: "", def_value: None, comment: None }]
constexpr LL_LZ4_streamHC_t(::GlobalNamespace::LZ4_streamHC_t_LL__hashTable_e__FixedBuffer  hashTable, ::GlobalNamespace::LZ4_streamHC_t_LL__chainTable_e__FixedBuffer  chainTable, uint8_t*  end, uint8_t*  base, uint8_t*  dictBase, uint32_t  dictLimit, uint32_t  lowLimit, uint32_t  nextToUpdate, int16_t  compressionLevel, bool  favorDecSpeed, bool  dirty, ::GlobalNamespace::LL_LZ4_streamHC_t*  dictCtx) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31589};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40030};

/// [FixedBuffer(typeof(System.UInt32), 32768)]
/// @brief Field hashTable, offset: 0x0, size: 0x20000, def value: None
 ::GlobalNamespace::LZ4_streamHC_t_LL__hashTable_e__FixedBuffer  hashTable;

/// [FixedBuffer(typeof(System.UInt16), 65536)]
/// @brief Field chainTable, offset: 0x20000, size: 0x20000, def value: None
 ::GlobalNamespace::LZ4_streamHC_t_LL__chainTable_e__FixedBuffer  chainTable;

/// @brief Field end, offset: 0x40000, size: 0x8, def value: None
 uint8_t*  end;

/// @brief Field base, offset: 0x40008, size: 0x8, def value: None
 uint8_t*  base;

/// @brief Field dictBase, offset: 0x40010, size: 0x8, def value: None
 uint8_t*  dictBase;

/// @brief Field dictLimit, offset: 0x40018, size: 0x4, def value: None
 uint32_t  dictLimit;

/// @brief Field lowLimit, offset: 0x4001c, size: 0x4, def value: None
 uint32_t  lowLimit;

/// @brief Field nextToUpdate, offset: 0x40020, size: 0x4, def value: None
 uint32_t  nextToUpdate;

/// @brief Field compressionLevel, offset: 0x40024, size: 0x2, def value: None
 int16_t  compressionLevel;

/// @brief Field favorDecSpeed, offset: 0x40026, size: 0x1, def value: None
 bool  favorDecSpeed;

/// @brief Field dirty, offset: 0x40027, size: 0x1, def value: None
 bool  dirty;

/// @brief Field dictCtx, offset: 0x40028, size: 0x8, def value: None
 ::GlobalNamespace::LL_LZ4_streamHC_t*  dictCtx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LL_LZ4_streamHC_t, hashTable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_streamHC_t, chainTable) == 0x20000, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_streamHC_t, end) == 0x40000, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_streamHC_t, base) == 0x40008, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_streamHC_t, dictBase) == 0x40010, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_streamHC_t, dictLimit) == 0x40018, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_streamHC_t, lowLimit) == 0x4001c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_streamHC_t, nextToUpdate) == 0x40020, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_streamHC_t, compressionLevel) == 0x40024, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_streamHC_t, favorDecSpeed) == 0x40026, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_streamHC_t, dirty) == 0x40027, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_streamHC_t, dictCtx) == 0x40028, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LL_LZ4_streamHC_t) == 0x40030, "Size mismatch!");

} // namespace end def GlobalNamespace

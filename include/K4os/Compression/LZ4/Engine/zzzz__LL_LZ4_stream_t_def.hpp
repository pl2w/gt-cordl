#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_LZ4_stream_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4_stream_t__hashTable_e__FixedBuffer_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_tableType_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LL_LZ4_stream_t)
namespace GlobalNamespace {
struct LZ4_stream_t_LL__hashTable_e__FixedBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct LL_LZ4_stream_t;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LL_LZ4_stream_t);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LL_LZ4_stream_t, "K4os.Compression.LZ4.Engine", "LL/LZ4_stream_t");
// Dependencies K4os.Compression.LZ4.Engine.LL::LZ4_stream_t::<hashTable>e__FixedBuffer, K4os.Compression.LZ4.Engine.LL::tableType_t
namespace GlobalNamespace {
// Is value type: true
// CS Name: K4os.Compression.LZ4.Engine.LL/LZ4_stream_t
struct CORDL_TYPE LL_LZ4_stream_t {
public:
// Declarations
using _hashTable_e__FixedBuffer = ::GlobalNamespace::LZ4_stream_t_LL__hashTable_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr LL_LZ4_stream_t() ;

// Ctor Parameters [CppParam { name: "hashTable", ty: "::GlobalNamespace::LZ4_stream_t_LL__hashTable_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dirty", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "tableType", ty: "::GlobalNamespace::LL_tableType_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dictionary", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "dictCtx", ty: "::GlobalNamespace::LL_LZ4_stream_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "dictSize", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr LL_LZ4_stream_t(::GlobalNamespace::LZ4_stream_t_LL__hashTable_e__FixedBuffer  hashTable, uint32_t  currentOffset, bool  dirty, ::GlobalNamespace::LL_tableType_t  tableType, uint8_t*  dictionary, ::GlobalNamespace::LL_LZ4_stream_t*  dictCtx, uint32_t  dictSize) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31578};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4028};

/// [FixedBuffer(typeof(System.UInt32), 4096)]
/// @brief Field hashTable, offset: 0x0, size: 0x4000, def value: None
 ::GlobalNamespace::LZ4_stream_t_LL__hashTable_e__FixedBuffer  hashTable;

/// @brief Field currentOffset, offset: 0x4000, size: 0x4, def value: None
 uint32_t  currentOffset;

/// @brief Field dirty, offset: 0x4004, size: 0x1, def value: None
 bool  dirty;

/// @brief Field tableType, offset: 0x4008, size: 0x4, def value: None
 ::GlobalNamespace::LL_tableType_t  tableType;

/// @brief Field dictionary, offset: 0x4010, size: 0x8, def value: None
 uint8_t*  dictionary;

/// @brief Field dictCtx, offset: 0x4018, size: 0x8, def value: None
 ::GlobalNamespace::LL_LZ4_stream_t*  dictCtx;

/// @brief Field dictSize, offset: 0x4020, size: 0x4, def value: None
 uint32_t  dictSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LL_LZ4_stream_t, hashTable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_stream_t, currentOffset) == 0x4000, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_stream_t, dirty) == 0x4004, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_stream_t, tableType) == 0x4008, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_stream_t, dictionary) == 0x4010, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_stream_t, dictCtx) == 0x4018, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4_stream_t, dictSize) == 0x4020, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LL_LZ4_stream_t) == 0x4028, "Size mismatch!");

} // namespace end def GlobalNamespace

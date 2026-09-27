#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString_tBigInt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Burst/zzzz__BurstString_tBigInt__m_blocks_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstString_tBigInt)
namespace GlobalNamespace {
struct tBigInt_BurstString__m_blocks_e__FixedBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct BurstString_tBigInt;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BurstString_tBigInt);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstString_tBigInt, "Unity.Burst", "BurstString/tBigInt");
// Dependencies Unity.Burst.BurstString::tBigInt::<m_blocks>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Burst.BurstString/tBigInt
struct CORDL_TYPE BurstString_tBigInt {
public:
// Declarations
using _m_blocks_e__FixedBuffer = ::GlobalNamespace::tBigInt_BurstString__m_blocks_e__FixedBuffer;

/// @brief Method GetBlock, addr 0xae84ba4, size 0xc, virtual false, abstract: false, final false
inline uint32_t GetBlock(int32_t  idx) ;

/// @brief Method GetLength, addr 0xae852e8, size 0x8, virtual false, abstract: false, final false
inline int32_t GetLength() ;

/// @brief Method IsZero, addr 0xae84bb0, size 0x10, virtual false, abstract: false, final false
inline bool IsZero() ;

/// @brief Method SetU32, addr 0xae83b78, size 0x1c, virtual false, abstract: false, final false
inline void SetU32(uint32_t  val) ;

/// @brief Method SetU64, addr 0xae84b74, size 0x30, virtual false, abstract: false, final false
inline void SetU64(uint64_t  val) ;

// Ctor Parameters []
// @brief default ctor
constexpr BurstString_tBigInt() ;

// Ctor Parameters [CppParam { name: "m_length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_blocks", ty: "::GlobalNamespace::tBigInt_BurstString__m_blocks_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr BurstString_tBigInt(int32_t  m_length, ::GlobalNamespace::tBigInt_BurstString__m_blocks_e__FixedBuffer  m_blocks) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32181};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field m_length, offset: 0x0, size: 0x4, def value: None
 int32_t  m_length;

/// [FixedBuffer(typeof(System.UInt32), 35)]
/// @brief Field m_blocks, offset: 0x4, size: 0x8c, def value: None
 ::GlobalNamespace::tBigInt_BurstString__m_blocks_e__FixedBuffer  m_blocks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BurstString_tBigInt, m_length) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstString_tBigInt, m_blocks) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BurstString_tBigInt) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace

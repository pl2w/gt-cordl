#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString_tBigInt__m_blocks_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstString_tBigInt__m_blocks_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct tBigInt_BurstString__m_blocks_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::tBigInt_BurstString__m_blocks_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::tBigInt_BurstString__m_blocks_e__FixedBuffer, "Unity.Burst", "BurstString/tBigInt/<m_blocks>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Burst.BurstString/tBigInt/<m_blocks>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE tBigInt_BurstString__m_blocks_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr tBigInt_BurstString__m_blocks_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr tBigInt_BurstString__m_blocks_e__FixedBuffer(uint32_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32180};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8c};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 uint32_t  FixedElementField;

/// @brief Size padding 0x8c - 0x4 = 0x88, packed as 0x88
 uint8_t  _cordl_size_padding[0x88];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::tBigInt_BurstString__m_blocks_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::tBigInt_BurstString__m_blocks_e__FixedBuffer) == 0x8c, "Size mismatch!");

} // namespace end def GlobalNamespace

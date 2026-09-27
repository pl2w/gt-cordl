#pragma once
// IWYU pragma private; include "Fusion/BitSet128__Bits_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitSet128__Bits_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct BitSet128__Bits_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BitSet128__Bits_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BitSet128__Bits_e__FixedBuffer, "Fusion", "BitSet128/<Bits>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.BitSet128/<Bits>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE BitSet128__Bits_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BitSet128__Bits_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr BitSet128__Bits_e__FixedBuffer(uint64_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18981};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field FixedElementField, offset: 0x0, size: 0x8, def value: None
 uint64_t  FixedElementField;

/// @brief Size padding 0x10 - 0x8 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BitSet128__Bits_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BitSet128__Bits_e__FixedBuffer) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

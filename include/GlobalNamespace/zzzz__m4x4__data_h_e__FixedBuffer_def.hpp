#pragma once
// IWYU pragma private; include "GlobalNamespace/m4x4__data_h_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(m4x4__data_h_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct m4x4__data_h_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::m4x4__data_h_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::m4x4__data_h_e__FixedBuffer, "", "m4x4/<data_h>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: m4x4/<data_h>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE m4x4__data_h_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr m4x4__data_h_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr m4x4__data_h_e__FixedBuffer(uint16_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2825};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
 uint16_t  FixedElementField;

/// @brief Size padding 0x40 - 0x2 = 0x3e, packed as 0x3e
 uint8_t  _cordl_size_padding[0x3e];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::m4x4__data_h_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::m4x4__data_h_e__FixedBuffer) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace

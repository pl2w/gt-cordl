#pragma once
// IWYU pragma private; include "Fusion/_512__Data_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(_512__Data_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct _512__Data_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::_512__Data_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::_512__Data_e__FixedBuffer, "Fusion", "_512/<Data>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion._512/<Data>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE _512__Data_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr _512__Data_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr _512__Data_e__FixedBuffer(uint32_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19040};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x800};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 uint32_t  FixedElementField;

/// @brief Size padding 0x800 - 0x4 = 0x7fc, packed as 0x7fc
 uint8_t  _cordl_size_padding[0x7fc];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::_512__Data_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::_512__Data_e__FixedBuffer) == 0x800, "Size mismatch!");

} // namespace end def GlobalNamespace

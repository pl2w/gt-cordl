#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/TouchscreenState__touchData_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchscreenState__touchData_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct TouchscreenState__touchData_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "TouchscreenState/<touchData>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.TouchscreenState/<touchData>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE TouchscreenState__touchData_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TouchscreenState__touchData_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr TouchscreenState__touchData_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13740};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x230};

/// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
 uint8_t  FixedElementField;

/// @brief Size padding 0x230 - 0x1 = 0x22f, packed as 0x22f
 uint8_t  _cordl_size_padding[0x22f];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer) == 0x230, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidGameControllerState__axis_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AndroidGameControllerState__axis_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct AndroidGameControllerState__axis_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AndroidGameControllerState__axis_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AndroidGameControllerState__axis_e__FixedBuffer, "UnityEngine.InputSystem.Android.LowLevel", "AndroidGameControllerState/<axis>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidGameControllerState/<axis>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE AndroidGameControllerState__axis_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AndroidGameControllerState__axis_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr AndroidGameControllerState__axis_e__FixedBuffer(float_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13671};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc0};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 float_t  FixedElementField;

/// @brief Size padding 0xc0 - 0x4 = 0xbc, packed as 0xbc
 uint8_t  _cordl_size_padding[0xbc];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AndroidGameControllerState__axis_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AndroidGameControllerState__axis_e__FixedBuffer) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace

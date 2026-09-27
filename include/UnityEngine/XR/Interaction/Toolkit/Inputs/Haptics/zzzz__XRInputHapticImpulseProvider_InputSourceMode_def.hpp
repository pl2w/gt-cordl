#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/XRInputHapticImpulseProvider_InputSourceMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInputHapticImpulseProvider_InputSourceMode)
// Forward declare root types
namespace GlobalNamespace {
struct XRInputHapticImpulseProvider_InputSourceMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode, "UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics", "XRInputHapticImpulseProvider/InputSourceMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.XRInputHapticImpulseProvider/InputSourceMode
struct CORDL_TYPE XRInputHapticImpulseProvider_InputSourceMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRInputHapticImpulseProvider_InputSourceMode_Unwrapped
enum struct __XRInputHapticImpulseProvider_InputSourceMode_Unwrapped : int32_t {
__E_Unused = static_cast<int32_t>(0x0),
__E_InputAction = static_cast<int32_t>(0x1),
__E_InputActionReference = static_cast<int32_t>(0x2),
__E_ObjectReference = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRInputHapticImpulseProvider_InputSourceMode_Unwrapped () const noexcept {
return static_cast<__XRInputHapticImpulseProvider_InputSourceMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRInputHapticImpulseProvider_InputSourceMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRInputHapticImpulseProvider_InputSourceMode(int32_t  value__) noexcept;

/// @brief Field InputAction value: I32(1)
static ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode const InputAction;

/// @brief Field InputActionReference value: I32(2)
static ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode const InputActionReference;

/// @brief Field ObjectReference value: I32(3)
static ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode const ObjectReference;

/// @brief Field Unused value: I32(0)
static ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode const Unused;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11681};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

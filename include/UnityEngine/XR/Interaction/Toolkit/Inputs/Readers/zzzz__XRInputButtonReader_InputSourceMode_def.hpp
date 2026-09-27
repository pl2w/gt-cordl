#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputButtonReader_InputSourceMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInputButtonReader_InputSourceMode)
// Forward declare root types
namespace GlobalNamespace {
struct XRInputButtonReader_InputSourceMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRInputButtonReader_InputSourceMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRInputButtonReader_InputSourceMode, "UnityEngine.XR.Interaction.Toolkit.Inputs.Readers", "XRInputButtonReader/InputSourceMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputButtonReader/InputSourceMode
struct CORDL_TYPE XRInputButtonReader_InputSourceMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRInputButtonReader_InputSourceMode_Unwrapped
enum struct __XRInputButtonReader_InputSourceMode_Unwrapped : int32_t {
__E_Unused = static_cast<int32_t>(0x0),
__E_InputAction = static_cast<int32_t>(0x1),
__E_InputActionReference = static_cast<int32_t>(0x2),
__E_ObjectReference = static_cast<int32_t>(0x3),
__E_ManualValue = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRInputButtonReader_InputSourceMode_Unwrapped () const noexcept {
return static_cast<__XRInputButtonReader_InputSourceMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRInputButtonReader_InputSourceMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRInputButtonReader_InputSourceMode(int32_t  value__) noexcept;

/// @brief Field InputAction value: I32(1)
static ::GlobalNamespace::XRInputButtonReader_InputSourceMode const InputAction;

/// @brief Field InputActionReference value: I32(2)
static ::GlobalNamespace::XRInputButtonReader_InputSourceMode const InputActionReference;

/// @brief Field ManualValue value: I32(4)
static ::GlobalNamespace::XRInputButtonReader_InputSourceMode const ManualValue;

/// @brief Field ObjectReference value: I32(3)
static ::GlobalNamespace::XRInputButtonReader_InputSourceMode const ObjectReference;

/// @brief Field Unused value: I32(0)
static ::GlobalNamespace::XRInputButtonReader_InputSourceMode const Unused;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11646};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRInputButtonReader_InputSourceMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRInputButtonReader_InputSourceMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

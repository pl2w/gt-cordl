#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRGrabInteractable_AttachPointCompatibilityMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRGrabInteractable_AttachPointCompatibilityMode)
// Forward declare root types
namespace GlobalNamespace {
struct XRGrabInteractable_AttachPointCompatibilityMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode, "UnityEngine.XR.Interaction.Toolkit.Interactables", "XRGrabInteractable/AttachPointCompatibilityMode");
// [Obsolete("AttachPointCompatibilityMode has been deprecated and will be removed in a future version of XRI.", true)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable/AttachPointCompatibilityMode
struct CORDL_TYPE XRGrabInteractable_AttachPointCompatibilityMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRGrabInteractable_AttachPointCompatibilityMode_Unwrapped
enum struct __XRGrabInteractable_AttachPointCompatibilityMode_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Legacy = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRGrabInteractable_AttachPointCompatibilityMode_Unwrapped () const noexcept {
return static_cast<__XRGrabInteractable_AttachPointCompatibilityMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRGrabInteractable_AttachPointCompatibilityMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRGrabInteractable_AttachPointCompatibilityMode(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode const Default;

/// @brief Field Legacy value: I32(1)
static ::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode const Legacy;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11522};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

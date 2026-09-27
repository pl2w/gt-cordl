#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/XRInteractableAffordanceStateProvider_SelectClickAnimationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractableAffordanceStateProvider_SelectClickAnimationMode)
// Forward declare root types
namespace GlobalNamespace {
struct XRInteractableAffordanceStateProvider_SelectClickAnimationMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "XRInteractableAffordanceStateProvider/SelectClickAnimationMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider/SelectClickAnimationMode
struct CORDL_TYPE XRInteractableAffordanceStateProvider_SelectClickAnimationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRInteractableAffordanceStateProvider_SelectClickAnimationMode_Unwrapped
enum struct __XRInteractableAffordanceStateProvider_SelectClickAnimationMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_SelectEntered = static_cast<int32_t>(0x1),
__E_SelectExited = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRInteractableAffordanceStateProvider_SelectClickAnimationMode_Unwrapped () const noexcept {
return static_cast<__XRInteractableAffordanceStateProvider_SelectClickAnimationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRInteractableAffordanceStateProvider_SelectClickAnimationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRInteractableAffordanceStateProvider_SelectClickAnimationMode(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode const None;

/// @brief Field SelectEntered value: I32(1)
static ::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode const SelectEntered;

/// @brief Field SelectExited value: I32(2)
static ::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode const SelectExited;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11731};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

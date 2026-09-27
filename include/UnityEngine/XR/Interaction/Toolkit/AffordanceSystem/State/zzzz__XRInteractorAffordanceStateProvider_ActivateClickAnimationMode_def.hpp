#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/XRInteractorAffordanceStateProvider_ActivateClickAnimationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractorAffordanceStateProvider_ActivateClickAnimationMode)
// Forward declare root types
namespace GlobalNamespace {
struct XRInteractorAffordanceStateProvider_ActivateClickAnimationMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "XRInteractorAffordanceStateProvider/ActivateClickAnimationMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractorAffordanceStateProvider/ActivateClickAnimationMode
struct CORDL_TYPE XRInteractorAffordanceStateProvider_ActivateClickAnimationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRInteractorAffordanceStateProvider_ActivateClickAnimationMode_Unwrapped
enum struct __XRInteractorAffordanceStateProvider_ActivateClickAnimationMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Activated = static_cast<int32_t>(0x1),
__E_Deactivated = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRInteractorAffordanceStateProvider_ActivateClickAnimationMode_Unwrapped () const noexcept {
return static_cast<__XRInteractorAffordanceStateProvider_ActivateClickAnimationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRInteractorAffordanceStateProvider_ActivateClickAnimationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRInteractorAffordanceStateProvider_ActivateClickAnimationMode(int32_t  value__) noexcept;

/// @brief Field Activated value: I32(1)
static ::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode const Activated;

/// @brief Field Deactivated value: I32(2)
static ::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode const Deactivated;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11737};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

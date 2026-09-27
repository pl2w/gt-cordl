#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/LocomotionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocomotionState)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
struct LocomotionState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "LocomotionState");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionState
struct CORDL_TYPE LocomotionState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LocomotionState_Unwrapped
enum struct __LocomotionState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Preparing = static_cast<int32_t>(0x1),
__E_Moving = static_cast<int32_t>(0x2),
__E_Ended = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LocomotionState_Unwrapped () const noexcept {
return static_cast<__LocomotionState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LocomotionState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LocomotionState(int32_t  value__) noexcept;

/// @brief Field Ended value: I32(3)
static ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState const Ended;

/// @brief Field Idle value: I32(0)
static ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState const Idle;

/// @brief Field Moving value: I32(2)
static ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState const Moving;

/// @brief Field Preparing value: I32(1)
static ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState const Preparing;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11335};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion

#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/EaseState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EaseState)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
struct EaseState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort", "EaseState");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort.EaseState
struct CORDL_TYPE EaseState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EaseState_Unwrapped
enum struct __EaseState_Unwrapped : int32_t {
__E_NotEasing = static_cast<int32_t>(0x0),
__E_EasingIn = static_cast<int32_t>(0x1),
__E_EasingInHoldBeforeEasingOut = static_cast<int32_t>(0x2),
__E_EasingOutDelay = static_cast<int32_t>(0x3),
__E_EasingOut = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EaseState_Unwrapped () const noexcept {
return static_cast<__EaseState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EaseState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EaseState(int32_t  value__) noexcept;

/// @brief Field EasingIn value: I32(1)
static ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState const EasingIn;

/// @brief Field EasingInHoldBeforeEasingOut value: I32(2)
static ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState const EasingInHoldBeforeEasingOut;

/// @brief Field EasingOut value: I32(4)
static ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState const EasingOut;

/// @brief Field EasingOutDelay value: I32(3)
static ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState const EasingOutDelay;

/// @brief Field NotEasing value: I32(0)
static ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState const NotEasing;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11381};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort

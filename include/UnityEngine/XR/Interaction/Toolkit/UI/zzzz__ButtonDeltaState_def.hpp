#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/ButtonDeltaState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonDeltaState)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct ButtonDeltaState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState, "UnityEngine.XR.Interaction.Toolkit.UI", "ButtonDeltaState");
// [Flags]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState
struct CORDL_TYPE ButtonDeltaState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ButtonDeltaState_Unwrapped
enum struct __ButtonDeltaState_Unwrapped : int32_t {
__E_NoChange = static_cast<int32_t>(0x0),
__E_Pressed = static_cast<int32_t>(0x1),
__E_Released = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ButtonDeltaState_Unwrapped () const noexcept {
return static_cast<__ButtonDeltaState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ButtonDeltaState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ButtonDeltaState(int32_t  value__) noexcept;

/// @brief Field NoChange value: I32(0)
static ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState const NoChange;

/// @brief Field Pressed value: I32(1)
static ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState const Pressed;

/// @brief Field Released value: I32(2)
static ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState const Released;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11284};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI

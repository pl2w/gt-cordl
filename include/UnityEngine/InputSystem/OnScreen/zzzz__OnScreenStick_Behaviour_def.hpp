#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/OnScreen/OnScreenStick_Behaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnScreenStick_Behaviour)
// Forward declare root types
namespace GlobalNamespace {
struct OnScreenStick_Behaviour;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OnScreenStick_Behaviour);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnScreenStick_Behaviour, "UnityEngine.InputSystem.OnScreen", "OnScreenStick/Behaviour");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.OnScreen.OnScreenStick/Behaviour
struct CORDL_TYPE OnScreenStick_Behaviour {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OnScreenStick_Behaviour_Unwrapped
enum struct __OnScreenStick_Behaviour_Unwrapped : int32_t {
__E_RelativePositionWithStaticOrigin = static_cast<int32_t>(0x0),
__E_ExactPositionWithStaticOrigin = static_cast<int32_t>(0x1),
__E_ExactPositionWithDynamicOrigin = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OnScreenStick_Behaviour_Unwrapped () const noexcept {
return static_cast<__OnScreenStick_Behaviour_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OnScreenStick_Behaviour() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OnScreenStick_Behaviour(int32_t  value__) noexcept;

/// @brief Field ExactPositionWithDynamicOrigin value: I32(2)
static ::GlobalNamespace::OnScreenStick_Behaviour const ExactPositionWithDynamicOrigin;

/// @brief Field ExactPositionWithStaticOrigin value: I32(1)
static ::GlobalNamespace::OnScreenStick_Behaviour const ExactPositionWithStaticOrigin;

/// @brief Field RelativePositionWithStaticOrigin value: I32(0)
static ::GlobalNamespace::OnScreenStick_Behaviour const RelativePositionWithStaticOrigin;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13610};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnScreenStick_Behaviour, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnScreenStick_Behaviour) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

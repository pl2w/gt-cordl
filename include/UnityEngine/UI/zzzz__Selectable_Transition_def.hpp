#pragma once
// IWYU pragma private; include "UnityEngine/UI/Selectable_Transition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Selectable_Transition)
// Forward declare root types
namespace GlobalNamespace {
struct Selectable_Transition;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Selectable_Transition);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Selectable_Transition, "UnityEngine.UI", "Selectable/Transition");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.Selectable/Transition
struct CORDL_TYPE Selectable_Transition {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Selectable_Transition_Unwrapped
enum struct __Selectable_Transition_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ColorTint = static_cast<int32_t>(0x1),
__E_SpriteSwap = static_cast<int32_t>(0x2),
__E_Animation = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Selectable_Transition_Unwrapped () const noexcept {
return static_cast<__Selectable_Transition_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Selectable_Transition() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Selectable_Transition(int32_t  value__) noexcept;

/// @brief Field Animation value: I32(3)
static ::GlobalNamespace::Selectable_Transition const Animation;

/// @brief Field ColorTint value: I32(1)
static ::GlobalNamespace::Selectable_Transition const ColorTint;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Selectable_Transition const None;

/// @brief Field SpriteSwap value: I32(2)
static ::GlobalNamespace::Selectable_Transition const SpriteSwap;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26095};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Selectable_Transition, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Selectable_Transition) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

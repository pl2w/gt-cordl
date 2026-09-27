#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyAnimationSystem_TransitionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StylePropertyAnimationSystem_TransitionState)
// Forward declare root types
namespace GlobalNamespace {
struct StylePropertyAnimationSystem_TransitionState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StylePropertyAnimationSystem_TransitionState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StylePropertyAnimationSystem_TransitionState, "UnityEngine.UIElements", "StylePropertyAnimationSystem/TransitionState");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState
struct CORDL_TYPE StylePropertyAnimationSystem_TransitionState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StylePropertyAnimationSystem_TransitionState_Unwrapped
enum struct __StylePropertyAnimationSystem_TransitionState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Running = static_cast<int32_t>(0x1),
__E_Started = static_cast<int32_t>(0x2),
__E_Ended = static_cast<int32_t>(0x4),
__E_Canceled = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StylePropertyAnimationSystem_TransitionState_Unwrapped () const noexcept {
return static_cast<__StylePropertyAnimationSystem_TransitionState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StylePropertyAnimationSystem_TransitionState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StylePropertyAnimationSystem_TransitionState(int32_t  value__) noexcept;

/// @brief Field Canceled value: I32(8)
static ::GlobalNamespace::StylePropertyAnimationSystem_TransitionState const Canceled;

/// @brief Field Ended value: I32(4)
static ::GlobalNamespace::StylePropertyAnimationSystem_TransitionState const Ended;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::StylePropertyAnimationSystem_TransitionState const None;

/// @brief Field Running value: I32(1)
static ::GlobalNamespace::StylePropertyAnimationSystem_TransitionState const Running;

/// @brief Field Started value: I32(2)
static ::GlobalNamespace::StylePropertyAnimationSystem_TransitionState const Started;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8226};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StylePropertyAnimationSystem_TransitionState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StylePropertyAnimationSystem_TransitionState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

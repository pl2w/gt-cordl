#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ActivationControlPlayable_InitialState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActivationControlPlayable_InitialState)
// Forward declare root types
namespace GlobalNamespace {
struct ActivationControlPlayable_InitialState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ActivationControlPlayable_InitialState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ActivationControlPlayable_InitialState, "UnityEngine.Timeline", "ActivationControlPlayable/InitialState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Timeline.ActivationControlPlayable/InitialState
struct CORDL_TYPE ActivationControlPlayable_InitialState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ActivationControlPlayable_InitialState_Unwrapped
enum struct __ActivationControlPlayable_InitialState_Unwrapped : int32_t {
__E_Unset = static_cast<int32_t>(0x0),
__E_Active = static_cast<int32_t>(0x1),
__E_Inactive = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ActivationControlPlayable_InitialState_Unwrapped () const noexcept {
return static_cast<__ActivationControlPlayable_InitialState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ActivationControlPlayable_InitialState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ActivationControlPlayable_InitialState(int32_t  value__) noexcept;

/// @brief Field Active value: I32(1)
static ::GlobalNamespace::ActivationControlPlayable_InitialState const Active;

/// @brief Field Inactive value: I32(2)
static ::GlobalNamespace::ActivationControlPlayable_InitialState const Inactive;

/// @brief Field Unset value: I32(0)
static ::GlobalNamespace::ActivationControlPlayable_InitialState const Unset;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28752};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ActivationControlPlayable_InitialState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ActivationControlPlayable_InitialState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

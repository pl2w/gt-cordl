#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/EnhancedTouch/Touch_ExtraDataPerTouchState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Touch_ExtraDataPerTouchState)
// Forward declare root types
namespace GlobalNamespace {
struct Touch_ExtraDataPerTouchState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Touch_ExtraDataPerTouchState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Touch_ExtraDataPerTouchState, "UnityEngine.InputSystem.EnhancedTouch", "Touch/ExtraDataPerTouchState");
// Dependencies UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Touch/ExtraDataPerTouchState
struct CORDL_TYPE Touch_ExtraDataPerTouchState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Touch_ExtraDataPerTouchState() ;

// Ctor Parameters [CppParam { name: "accumulatedDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "uniqueId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr Touch_ExtraDataPerTouchState(::UnityEngine::Vector2  accumulatedDelta, uint32_t  uniqueId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13639};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field accumulatedDelta, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  accumulatedDelta;

/// @brief Field uniqueId, offset: 0x8, size: 0x4, def value: None
 uint32_t  uniqueId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Touch_ExtraDataPerTouchState, accumulatedDelta) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Touch_ExtraDataPerTouchState, uniqueId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Touch_ExtraDataPerTouchState) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace

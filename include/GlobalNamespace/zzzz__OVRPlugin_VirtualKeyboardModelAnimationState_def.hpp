#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardModelAnimationState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_VirtualKeyboardModelAnimationState)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardModelAnimationState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState, "", "OVRPlugin/VirtualKeyboardModelAnimationState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/VirtualKeyboardModelAnimationState
struct CORDL_TYPE OVRPlugin_VirtualKeyboardModelAnimationState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_VirtualKeyboardModelAnimationState() ;

// Ctor Parameters [CppParam { name: "AnimationIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Fraction", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_VirtualKeyboardModelAnimationState(int32_t  AnimationIndex, float_t  Fraction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12191};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field AnimationIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  AnimationIndex;

/// @brief Field Fraction, offset: 0x4, size: 0x4, def value: None
 float_t  Fraction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState, AnimationIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState, Fraction) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace

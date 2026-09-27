#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsentHoldButton_Feedback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConsentHoldButton_Feedback)
// Forward declare root types
namespace GlobalNamespace {
struct ConsentHoldButton_Feedback;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConsentHoldButton_Feedback);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConsentHoldButton_Feedback, "", "ConsentHoldButton/Feedback");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ConsentHoldButton/Feedback
struct CORDL_TYPE ConsentHoldButton_Feedback {
public:
// Declarations
/// @brief Method get_Default, addr 0x5a6b0b0, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ConsentHoldButton_Feedback get_Default() ;

// Ctor Parameters []
// @brief default ctor
constexpr ConsentHoldButton_Feedback() ;

// Ctor Parameters [CppParam { name: "completeSoundIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "completeSoundVolume", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pressHapticScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "holdPulseHapticScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "completeHapticScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "retriggerCooldownSeconds", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ConsentHoldButton_Feedback(int32_t  completeSoundIndex, float_t  completeSoundVolume, float_t  pressHapticScale, float_t  holdPulseHapticScale, float_t  completeHapticScale, float_t  retriggerCooldownSeconds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3095};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [Tooltip("Hand-tap sound index passed to VRRig.PlayHandTapLocal when the hold completes.")]
/// @brief Field completeSoundIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  completeSoundIndex;

/// @brief Field completeSoundVolume, offset: 0x4, size: 0x4, def value: None
 float_t  completeSoundVolume;

/// [Tooltip("Haptic strength while touching the button, as a multiplier on GorillaTagger.tapHapticStrength.")]
/// @brief Field pressHapticScale, offset: 0x8, size: 0x4, def value: None
 float_t  pressHapticScale;

/// [Tooltip("Haptic strength of the per-frame pulse while holding, as a multiplier on GorillaTagger.tapHapticStrength.")]
/// @brief Field holdPulseHapticScale, offset: 0xc, size: 0x4, def value: None
 float_t  holdPulseHapticScale;

/// [Tooltip("Haptic strength when the hold completes, as a multiplier on GorillaTagger.tapHapticStrength.")]
/// @brief Field completeHapticScale, offset: 0x10, size: 0x4, def value: None
 float_t  completeHapticScale;

/// [Tooltip("Seconds after a completed hold before the button can be pressed again.")]
/// @brief Field retriggerCooldownSeconds, offset: 0x14, size: 0x4, def value: None
 float_t  retriggerCooldownSeconds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConsentHoldButton_Feedback, completeSoundIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentHoldButton_Feedback, completeSoundVolume) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentHoldButton_Feedback, pressHapticScale) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentHoldButton_Feedback, holdPulseHapticScale) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentHoldButton_Feedback, completeHapticScale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentHoldButton_Feedback, retriggerCooldownSeconds) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConsentHoldButton_Feedback) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

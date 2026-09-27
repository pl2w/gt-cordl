#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerFeatureStateProvider_FingerStateThresholds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FingerFeatureStateProvider_FingerStateThresholds)
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureStateThresholds;
}
// Forward declare root types
namespace GlobalNamespace {
struct FingerFeatureStateProvider_FingerStateThresholds;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds, "Oculus.Interaction.PoseDetection", "FingerFeatureStateProvider/FingerStateThresholds");
// Dependencies Oculus.Interaction.Input.HandFinger
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.FingerFeatureStateProvider/FingerStateThresholds
struct CORDL_TYPE FingerFeatureStateProvider_FingerStateThresholds {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureStateProvider_FingerStateThresholds() ;

// Ctor Parameters [CppParam { name: "Finger", ty: "::Oculus::Interaction::Input::HandFinger", modifiers: "", def_value: None, comment: None }, CppParam { name: "StateThresholds", ty: "::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateThresholds>", modifiers: "", def_value: None, comment: None }]
constexpr FingerFeatureStateProvider_FingerStateThresholds(::Oculus::Interaction::Input::HandFinger  Finger, ::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateThresholds>  StateThresholds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16107};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Tooltip("Which finger the state thresholds apply to.")]
/// @brief Field Finger, offset: 0x0, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandFinger  Finger;

/// [Tooltip("State threshold configuration")]
/// @brief Field StateThresholds, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateThresholds>  StateThresholds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds, Finger) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds, StateThresholds) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

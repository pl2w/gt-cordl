#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/ShapeRecognizerActiveState_FingerFeatureStateUsage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ShapeRecognizerActiveState_FingerFeatureStateUsage)
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizer_FingerFeatureConfig;
}
// Forward declare root types
namespace GlobalNamespace {
struct ShapeRecognizerActiveState_FingerFeatureStateUsage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage, "Oculus.Interaction.PoseDetection", "ShapeRecognizerActiveState/FingerFeatureStateUsage");
// Dependencies Oculus.Interaction.Input.HandFinger
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage
struct CORDL_TYPE ShapeRecognizerActiveState_FingerFeatureStateUsage {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ShapeRecognizerActiveState_FingerFeatureStateUsage() ;

// Ctor Parameters [CppParam { name: "handFinger", ty: "::Oculus::Interaction::Input::HandFinger", modifiers: "", def_value: None, comment: None }, CppParam { name: "config", ty: "::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*", modifiers: "", def_value: None, comment: None }]
constexpr ShapeRecognizerActiveState_FingerFeatureStateUsage(::Oculus::Interaction::Input::HandFinger  handFinger, ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  config) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16155};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field handFinger, offset: 0x0, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandFinger  handFinger;

/// @brief Field config, offset: 0x8, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  config;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage, handFinger) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage, config) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

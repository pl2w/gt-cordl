#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureValueProvider_TransformProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TransformFeatureValueProvider_TransformProperties)
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct TransformFeatureValueProvider_TransformProperties;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TransformFeatureValueProvider_TransformProperties);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransformFeatureValueProvider_TransformProperties, "Oculus.Interaction.PoseDetection", "TransformFeatureValueProvider/TransformProperties");
// Dependencies Oculus.Interaction.Input.Handedness, UnityEngine.Pose, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties
struct CORDL_TYPE TransformFeatureValueProvider_TransformProperties {
public:
// Declarations
/// @brief Method .ctor, addr 0xa4a84b0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Pose  centerEyePos, ::UnityEngine::Pose  wristPose, ::Oculus::Interaction::Input::Handedness  handedness, ::UnityEngine::Vector3  trackingSystemUp, ::UnityEngine::Vector3  trackingSystemForward) ;

// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureValueProvider_TransformProperties() ;

// Ctor Parameters [CppParam { name: "CenterEyePose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }, CppParam { name: "WristPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }, CppParam { name: "Handedness", ty: "::Oculus::Interaction::Input::Handedness", modifiers: "", def_value: None, comment: None }, CppParam { name: "TrackingSystemUp", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "TrackingSystemForward", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr TransformFeatureValueProvider_TransformProperties(::UnityEngine::Pose  CenterEyePose, ::UnityEngine::Pose  WristPose, ::Oculus::Interaction::Input::Handedness  Handedness, ::UnityEngine::Vector3  TrackingSystemUp, ::UnityEngine::Vector3  TrackingSystemForward) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16172};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x54};

/// @brief Field CenterEyePose, offset: 0x0, size: 0x1c, def value: None
 ::UnityEngine::Pose  CenterEyePose;

/// @brief Field WristPose, offset: 0x1c, size: 0x1c, def value: None
 ::UnityEngine::Pose  WristPose;

/// @brief Field Handedness, offset: 0x38, size: 0x4, def value: None
 ::Oculus::Interaction::Input::Handedness  Handedness;

/// @brief Field TrackingSystemUp, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  TrackingSystemUp;

/// @brief Field TrackingSystemForward, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  TrackingSystemForward;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransformFeatureValueProvider_TransformProperties, CenterEyePose) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformFeatureValueProvider_TransformProperties, WristPose) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformFeatureValueProvider_TransformProperties, Handedness) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformFeatureValueProvider_TransformProperties, TrackingSystemUp) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformFeatureValueProvider_TransformProperties, TrackingSystemForward) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransformFeatureValueProvider_TransformProperties) == 0x54, "Size mismatch!");

} // namespace end def GlobalNamespace

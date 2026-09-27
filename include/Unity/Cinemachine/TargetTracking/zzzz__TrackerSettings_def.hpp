#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TargetTracking/TrackerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/TargetTracking/zzzz__AngularDampingMode_def.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__BindingMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TrackerSettings)
// Forward declare root types
namespace Unity::Cinemachine::TargetTracking {
struct TrackerSettings;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::TargetTracking::TrackerSettings);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::TargetTracking::TrackerSettings, "Unity.Cinemachine.TargetTracking", "TrackerSettings");
// Dependencies Unity.Cinemachine.TargetTracking.AngularDampingMode, Unity.Cinemachine.TargetTracking.BindingMode, UnityEngine.Vector3
namespace Unity::Cinemachine::TargetTracking {
// Is value type: true
// CS Name: Unity.Cinemachine.TargetTracking.TrackerSettings
struct CORDL_TYPE TrackerSettings {
public:
// Declarations
/// @brief Method Validate, addr 0xaf013a4, size 0x38, virtual false, abstract: false, final false
inline void Validate() ;

/// @brief Method get_Default, addr 0xaf01330, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::TargetTracking::TrackerSettings get_Default() ;

// Ctor Parameters []
// @brief default ctor
constexpr TrackerSettings() ;

// Ctor Parameters [CppParam { name: "BindingMode", ty: "::Unity::Cinemachine::TargetTracking::BindingMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "PositionDamping", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "AngularDampingMode", ty: "::Unity::Cinemachine::TargetTracking::AngularDampingMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotationDamping", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "QuaternionDamping", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr TrackerSettings(::Unity::Cinemachine::TargetTracking::BindingMode  BindingMode, ::UnityEngine::Vector3  PositionDamping, ::Unity::Cinemachine::TargetTracking::AngularDampingMode  AngularDampingMode, ::UnityEngine::Vector3  RotationDamping, float_t  QuaternionDamping) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22537};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// [Tooltip("The coordinate space to use when interpreting the offset from the target.  This is also used to set the camera\'s Up vector, which will be maintained when aiming the camera.")]
/// @brief Field BindingMode, offset: 0x0, size: 0x4, def value: None
 ::Unity::Cinemachine::TargetTracking::BindingMode  BindingMode;

/// [Tooltip("How aggressively the camera tries to maintain the offset, per axis.  Small numbers are more responsive, rapidly translating the camera to keep the target\'s offset.  Larger numbers give a more heavy slowly responding camera. Using different settings per axis can yield a wide range of camera behaviors.")]
/// @brief Field PositionDamping, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  PositionDamping;

/// @brief Field AngularDampingMode, offset: 0x10, size: 0x4, def value: None
 ::Unity::Cinemachine::TargetTracking::AngularDampingMode  AngularDampingMode;

/// [Tooltip("How aggressively the camera tries to track the target\'s rotation, per axis.  Small numbers are more responsive.  Larger numbers give a more heavy slowly responding camera.")]
/// @brief Field RotationDamping, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  RotationDamping;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to track the target\'s rotation.  Small numbers are more responsive.  Larger numbers give a more heavy slowly responding camera.")]
/// @brief Field QuaternionDamping, offset: 0x20, size: 0x4, def value: None
 float_t  QuaternionDamping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::TargetTracking::TrackerSettings, BindingMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::TargetTracking::TrackerSettings, PositionDamping) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::TargetTracking::TrackerSettings, AngularDampingMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::TargetTracking::TrackerSettings, RotationDamping) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::TargetTracking::TrackerSettings, QuaternionDamping) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::TargetTracking::TrackerSettings) == 0x24, "Size mismatch!");

} // namespace end def Unity::Cinemachine::TargetTracking

#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/ForceVolumeProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ForceVolumeProperties)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
struct ForceVolumeProperties;
}
// Write type traits
MARK_VAL_T(::GT_CustomMapSupportRuntime::ForceVolumeProperties);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::ForceVolumeProperties, "GT_CustomMapSupportRuntime", "ForceVolumeProperties");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies 
namespace GT_CustomMapSupportRuntime {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.ForceVolumeProperties
struct CORDL_TYPE ForceVolumeProperties {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ForceVolumeProperties() ;

// Ctor Parameters [CppParam { name: "accel", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxDepth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "disableGrip", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "dampenLateralVelocity", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "dampenXVel", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dampenZVel", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "applyPullToCenterAcceleration", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "pullToCenterAccel", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pullToCenterMaxSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pullToCenterMinDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "enterClip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }, CppParam { name: "exitClip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }, CppParam { name: "loopClip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }, CppParam { name: "loopCrescendoClip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }]
constexpr ForceVolumeProperties(float_t  accel, float_t  maxDepth, float_t  maxSpeed, bool  disableGrip, bool  dampenLateralVelocity, float_t  dampenXVel, float_t  dampenZVel, bool  applyPullToCenterAcceleration, float_t  pullToCenterAccel, float_t  pullToCenterMaxSpeed, float_t  pullToCenterMinDistance, ::UnityW<::UnityEngine::AudioClip>  enterClip, ::UnityW<::UnityEngine::AudioClip>  exitClip, ::UnityW<::UnityEngine::AudioClip>  loopClip, ::UnityW<::UnityEngine::AudioClip>  loopCrescendoClip) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30898};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field accel, offset: 0x0, size: 0x4, def value: None
 float_t  accel;

/// @brief Field maxDepth, offset: 0x4, size: 0x4, def value: None
 float_t  maxDepth;

/// @brief Field maxSpeed, offset: 0x8, size: 0x4, def value: None
 float_t  maxSpeed;

/// @brief Field disableGrip, offset: 0xc, size: 0x1, def value: None
 bool  disableGrip;

/// @brief Field dampenLateralVelocity, offset: 0xd, size: 0x1, def value: None
 bool  dampenLateralVelocity;

/// @brief Field dampenXVel, offset: 0x10, size: 0x4, def value: None
 float_t  dampenXVel;

/// @brief Field dampenZVel, offset: 0x14, size: 0x4, def value: None
 float_t  dampenZVel;

/// @brief Field applyPullToCenterAcceleration, offset: 0x18, size: 0x1, def value: None
 bool  applyPullToCenterAcceleration;

/// @brief Field pullToCenterAccel, offset: 0x1c, size: 0x4, def value: None
 float_t  pullToCenterAccel;

/// @brief Field pullToCenterMaxSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  pullToCenterMaxSpeed;

/// @brief Field pullToCenterMinDistance, offset: 0x24, size: 0x4, def value: None
 float_t  pullToCenterMinDistance;

/// @brief Field enterClip, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  enterClip;

/// @brief Field exitClip, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  exitClip;

/// @brief Field loopClip, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  loopClip;

/// @brief Field loopCrescendoClip, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  loopCrescendoClip;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::ForceVolumeProperties, accel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ForceVolumeProperties, maxDepth) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ForceVolumeProperties, maxSpeed) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ForceVolumeProperties, disableGrip) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ForceVolumeProperties, dampenLateralVelocity) == 0xd, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ForceVolumeProperties, dampenXVel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ForceVolumeProperties, dampenZVel) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ForceVolumeProperties, applyPullToCenterAcceleration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ForceVolumeProperties, pullToCenterAccel) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ForceVolumeProperties, pullToCenterMaxSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ForceVolumeProperties, pullToCenterMinDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ForceVolumeProperties, enterClip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ForceVolumeProperties, exitClip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ForceVolumeProperties, loopClip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ForceVolumeProperties, loopCrescendoClip) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::ForceVolumeProperties) == 0x48, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime

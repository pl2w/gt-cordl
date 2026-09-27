#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineThirdPersonFollow_ObstacleSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineThirdPersonFollow_ObstacleSettings)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineThirdPersonFollow_ObstacleSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings, "Unity.Cinemachine", "CinemachineThirdPersonFollow/ObstacleSettings");
// Dependencies UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineThirdPersonFollow/ObstacleSettings
struct CORDL_TYPE CinemachineThirdPersonFollow_ObstacleSettings {
public:
// Declarations
/// @brief Method get_Default, addr 0xaea7584, size 0x70, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings get_Default() ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineThirdPersonFollow_ObstacleSettings() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "CollisionFilter", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: None, comment: None }, CppParam { name: "IgnoreTag", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "CameraRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DampingIntoCollision", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DampingFromCollision", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineThirdPersonFollow_ObstacleSettings(bool  Enabled, ::UnityEngine::LayerMask  CollisionFilter, ::StringW  IgnoreTag, float_t  CameraRadius, float_t  DampingIntoCollision, float_t  DampingFromCollision) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22248};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [Tooltip("If enabled, camera will be pulled in front of occluding obstacles")]
/// @brief Field Enabled, offset: 0x0, size: 0x1, def value: None
 bool  Enabled;

/// [Tooltip("Camera will avoid obstacles on these layers")]
/// @brief Field CollisionFilter, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::LayerMask  CollisionFilter;

/// [TagField]
/// [Tooltip("Obstacles with this tag will be ignored.  It is a good idea to set this field to the target\'s tag")]
/// @brief Field IgnoreTag, offset: 0x8, size: 0x8, def value: None
 ::StringW  IgnoreTag;

/// [Tooltip("Specifies how close the camera can get to obstacles")]
/// [Range(0, 1)]
/// @brief Field CameraRadius, offset: 0x10, size: 0x4, def value: None
 float_t  CameraRadius;

/// [Range(0, 10)]
/// [Tooltip("How gradually the camera moves to correct for occlusions.  Higher numbers will move the camera more gradually.")]
/// @brief Field DampingIntoCollision, offset: 0x14, size: 0x4, def value: None
 float_t  DampingIntoCollision;

/// [Range(0, 10)]
/// [Tooltip("How gradually the camera returns to its normal position after having been corrected by the built-in collision resolution system.  Higher numbers will move the camera more gradually back to normal.")]
/// @brief Field DampingFromCollision, offset: 0x18, size: 0x4, def value: None
 float_t  DampingFromCollision;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings, CollisionFilter) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings, IgnoreTag) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings, CameraRadius) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings, DampingIntoCollision) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings, DampingFromCollision) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRLocatable_TrackingSpacePose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceLocationFlags_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRLocatable_TrackingSpacePose)
namespace GlobalNamespace {
struct OVRPlugin_SpaceLocationFlags;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRLocatable_TrackingSpacePose;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRLocatable_TrackingSpacePose);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRLocatable_TrackingSpacePose, "", "OVRLocatable/TrackingSpacePose");
// [IsReadOnly]
// Dependencies OVRPlugin::SpaceLocationFlags, System.Nullable`1<T>, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRLocatable/TrackingSpacePose
struct CORDL_TYPE OVRLocatable_TrackingSpacePose {
public:
// Declarations
 __declspec(property(get=get_IsPositionTracked)) bool  IsPositionTracked;

 __declspec(property(get=get_IsRotationTracked)) bool  IsRotationTracked;

 __declspec(property(get=get_Position)) ::System::Nullable_1<::UnityEngine::Vector3>  Position;

 __declspec(property(get=get_Rotation)) ::System::Nullable_1<::UnityEngine::Quaternion>  Rotation;

/// [Obsolete("Using this method after \'await locatable.SetEnabledAsync(true);\' is error-prone. OVRTask finishes the execution before OVRCameraRig.Update(), so camera will still use a pose from the previous frame. This results in descrepancy when localizing anchors against the stale camera pose.\nUse an overload with the \'trackingSpaceToWorldSpaceTransform\' parameter instead.")]
/// @brief Method ComputeWorldPosition, addr 0xa5751c8, size 0x2c0, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::Vector3> ComputeWorldPosition(::UnityEngine::Camera*  camera) ;

/// @brief Method ComputeWorldPosition, addr 0xa575d8c, size 0x14c, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::Vector3> ComputeWorldPosition(::UnityEngine::Transform*  trackingSpaceToWorldSpaceTransform) ;

/// [Obsolete("Using this method after \'await locatable.SetEnabledAsync(true);\' is error-prone. OVRTask finishes the execution before OVRCameraRig.Update(), so camera will still use a pose from the previous frame. This results in descrepancy when localizing anchors against the stale camera pose.\nUse an overload with the \'trackingSpaceToWorldSpaceTransform\' parameter instead.")]
/// @brief Method ComputeWorldRotation, addr 0xa575a94, size 0x2f8, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::Quaternion> ComputeWorldRotation(::UnityEngine::Camera*  camera) ;

/// @brief Method ComputeWorldRotation, addr 0xa575ed8, size 0x200, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::Quaternion> ComputeWorldRotation(::UnityEngine::Transform*  trackingSpaceToWorldSpaceTransform) ;

/// @brief Method .ctor, addr 0xa573e74, size 0x190, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::GlobalNamespace::OVRPlugin_SpaceLocationFlags  flags) ;

/// @brief Method get_IsPositionTracked, addr 0xa575110, size 0x5c, virtual false, abstract: false, final false
inline bool get_IsPositionTracked() ;

/// @brief Method get_IsRotationTracked, addr 0xa57516c, size 0x5c, virtual false, abstract: false, final false
inline bool get_IsRotationTracked() ;

/// [CompilerGenerated]
/// @brief Method get_Position, addr 0xa5750f0, size 0xc, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::Vector3> get_Position() ;

/// [CompilerGenerated]
/// @brief Method get_Rotation, addr 0xa5750fc, size 0x14, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::Quaternion> get_Rotation() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRLocatable_TrackingSpacePose() ;

// Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "::System::Nullable_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Rotation_k__BackingField", ty: "::System::Nullable_1<::UnityEngine::Quaternion>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Flags", ty: "::GlobalNamespace::OVRPlugin_SpaceLocationFlags", modifiers: "", def_value: None, comment: None }]
constexpr OVRLocatable_TrackingSpacePose(::System::Nullable_1<::UnityEngine::Vector3>  _Position_k__BackingField, ::System::Nullable_1<::UnityEngine::Quaternion>  _Rotation_k__BackingField, ::GlobalNamespace::OVRPlugin_SpaceLocationFlags  Flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11841};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field localToWorldPoseDeprecationMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  localToWorldPoseDeprecationMessage{u"Using this method after \'await locatable.SetEnabledAsync(true);\' is error-prone. OVRTask finishes the execution before OVRCameraRig.Update(), so camera will still use a pose from the previous frame. This results in descrepancy when localizing anchors against the stale camera pose.\nUse an overload with the \'trackingSpaceToWorldSpaceTransform\' parameter instead."};

/// [CompilerGenerated]
/// @brief Field <Position>k__BackingField, offset: 0x0, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  _Position_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Rotation>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Quaternion>  _Rotation_k__BackingField;

/// @brief Field Flags, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceLocationFlags  Flags;

/// @brief Size padding 0x30 - 0x28 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRLocatable_TrackingSpacePose, _Position_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRLocatable_TrackingSpacePose, _Rotation_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRLocatable_TrackingSpacePose, Flags) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRLocatable_TrackingSpacePose) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

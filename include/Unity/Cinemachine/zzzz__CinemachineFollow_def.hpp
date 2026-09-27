#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFollow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/TargetTracking/zzzz__TrackerSettings_def.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__Tracker_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineFollow)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace Unity::Cinemachine {
struct CameraState;
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
namespace Unity::Cinemachine {
class CinemachineFollow;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineFollow*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFollow*, "Unity.Cinemachine", "CinemachineFollow");
// [AddComponentMenu("Cinemachine/Procedural/Position Control/Cinemachine Follow")]
// [SaveDuringPlay]
// [DisallowMultipleComponent]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)0)]
// [RequiredTarget((Unity.Cinemachine.RequiredTargetAttribute::RequiredTargets)1)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineFollow.html")]
// Dependencies Unity.Cinemachine.CinemachineComponentBase, Unity.Cinemachine.TargetTracking.Tracker, Unity.Cinemachine.TargetTracking.TrackerSettings, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFollow
class CORDL_TYPE CinemachineFollow : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
 __declspec(property(get=get_EffectiveOffset)) ::UnityEngine::Vector3  EffectiveOffset;

/// @brief Field FollowOffset, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_FollowOffset, put=__cordl_internal_set_FollowOffset)) ::UnityEngine::Vector3  FollowOffset;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

/// @brief Field TrackerSettings, offset 0x28, size 0x24 
 __declspec(property(get=__cordl_internal_get_TrackerSettings, put=__cordl_internal_set_TrackerSettings)) ::Unity::Cinemachine::TargetTracking::TrackerSettings  TrackerSettings;

/// @brief Field m_TargetTracker, offset 0x58, size 0x40 
 __declspec(property(get=__cordl_internal_get_m_TargetTracker, put=__cordl_internal_set_m_TargetTracker)) ::Unity::Cinemachine::TargetTracking::Tracker  m_TargetTracker;

/// @brief Method ForceCameraPosition, addr 0xae9f020, size 0x164, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetDesiredCameraPosition, addr 0xae9f214, size 0x138, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetDesiredCameraPosition(::UnityEngine::Vector3  worldUp) ;

/// @brief Method GetMaxDampTime, addr 0xae9eca8, size 0x34, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method GetReferenceOrientation, addr 0xae9f184, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetReferenceOrientation(::UnityEngine::Vector3  up) ;

/// @brief Method MutateCameraState, addr 0xae9ecdc, size 0x25c, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineFollow* New_ctor() ;

/// @brief Method OnTargetObjectWarped, addr 0xae9ef38, size 0xe8, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnValidate, addr 0xae9eb20, size 0x34, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Reset, addr 0xae9eb7c, size 0x94, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_FollowOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_FollowOffset() ;

constexpr ::Unity::Cinemachine::TargetTracking::TrackerSettings const& __cordl_internal_get_TrackerSettings() const;

constexpr ::Unity::Cinemachine::TargetTracking::TrackerSettings& __cordl_internal_get_TrackerSettings() ;

constexpr ::Unity::Cinemachine::TargetTracking::Tracker const& __cordl_internal_get_m_TargetTracker() const;

constexpr ::Unity::Cinemachine::TargetTracking::Tracker& __cordl_internal_get_m_TargetTracker() ;

constexpr void __cordl_internal_set_FollowOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_TrackerSettings(::Unity::Cinemachine::TargetTracking::TrackerSettings  value) ;

constexpr void __cordl_internal_set_m_TargetTracker(::Unity::Cinemachine::TargetTracking::Tracker  value) ;

/// @brief Method .ctor, addr 0xae9f34c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EffectiveOffset, addr 0xae9eb54, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_EffectiveOffset() ;

/// @brief Method get_IsValid, addr 0xae9ec10, size 0x90, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Stage, addr 0xae9eca0, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFollow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFollow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFollow(CinemachineFollow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFollow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFollow(CinemachineFollow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22222};

/// @brief Field TrackerSettings, offset: 0x28, size: 0x24, def value: None
 ::Unity::Cinemachine::TargetTracking::TrackerSettings  ___TrackerSettings;

/// [Tooltip("The distance vector that the camera will attempt to maintain from the tracking target")]
/// @brief Field FollowOffset, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___FollowOffset;

/// @brief Field m_TargetTracker, offset: 0x58, size: 0x40, def value: None
 ::Unity::Cinemachine::TargetTracking::Tracker  ___m_TargetTracker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineFollow, ___TrackerSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFollow, ___FollowOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFollow, ___m_TargetTracker) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineFollow) == 0x98, "Size mismatch!");

} // namespace end def Unity::Cinemachine

#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTransposer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/TargetTracking/zzzz__AngularDampingMode_def.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__BindingMode_def.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__Tracker_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineTransposer)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace Unity::Cinemachine::TargetTracking {
struct TrackerSettings;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineFollow;
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
class CinemachineTransposer;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineTransposer*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineTransposer*, "Unity.Cinemachine", "CinemachineTransposer");
// [Obsolete("CinemachineTransposer has been deprecated. Use CinemachineFollow instead")]
// [AddComponentMenu("")]
// [SaveDuringPlay]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)0)]
// Dependencies Unity.Cinemachine.CinemachineComponentBase, Unity.Cinemachine.TargetTracking.AngularDampingMode, Unity.Cinemachine.TargetTracking.BindingMode, Unity.Cinemachine.TargetTracking.Tracker, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineTransposer
class CORDL_TYPE CinemachineTransposer : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
 __declspec(property(get=get_EffectiveOffset)) ::UnityEngine::Vector3  EffectiveOffset;

 __declspec(property(get=get_HideOffsetInInspector, put=set_HideOffsetInInspector)) bool  HideOffsetInInspector;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

 __declspec(property(get=get_TrackerSettings)) ::Unity::Cinemachine::TargetTracking::TrackerSettings  TrackerSettings;

/// @brief Field <HideOffsetInInspector>k__BackingField, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__HideOffsetInInspector_k__BackingField, put=__cordl_internal_set__HideOffsetInInspector_k__BackingField)) bool  _HideOffsetInInspector_k__BackingField;

/// @brief Field m_AngularDamping, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AngularDamping, put=__cordl_internal_set_m_AngularDamping)) float_t  m_AngularDamping;

/// @brief Field m_AngularDampingMode, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AngularDampingMode, put=__cordl_internal_set_m_AngularDampingMode)) ::Unity::Cinemachine::TargetTracking::AngularDampingMode  m_AngularDampingMode;

/// @brief Field m_BindingMode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BindingMode, put=__cordl_internal_set_m_BindingMode)) ::Unity::Cinemachine::TargetTracking::BindingMode  m_BindingMode;

/// @brief Field m_FollowOffset, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_FollowOffset, put=__cordl_internal_set_m_FollowOffset)) ::UnityEngine::Vector3  m_FollowOffset;

/// @brief Field m_PitchDamping, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PitchDamping, put=__cordl_internal_set_m_PitchDamping)) float_t  m_PitchDamping;

/// @brief Field m_RollDamping, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RollDamping, put=__cordl_internal_set_m_RollDamping)) float_t  m_RollDamping;

/// @brief Field m_TargetTracker, offset 0x58, size 0x40 
 __declspec(property(get=__cordl_internal_get_m_TargetTracker, put=__cordl_internal_set_m_TargetTracker)) ::Unity::Cinemachine::TargetTracking::Tracker  m_TargetTracker;

/// @brief Field m_XDamping, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_XDamping, put=__cordl_internal_set_m_XDamping)) float_t  m_XDamping;

/// @brief Field m_YDamping, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_YDamping, put=__cordl_internal_set_m_YDamping)) float_t  m_YDamping;

/// @brief Field m_YawDamping, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_YawDamping, put=__cordl_internal_set_m_YawDamping)) float_t  m_YawDamping;

/// @brief Field m_ZDamping, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ZDamping, put=__cordl_internal_set_m_ZDamping)) float_t  m_ZDamping;

/// @brief Method ForceCameraPosition, addr 0xaed5480, size 0x164, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetMaxDampTime, addr 0xaedb24c, size 0x48, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method GetReferenceOrientation, addr 0xaedb520, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetReferenceOrientation(::UnityEngine::Vector3  up) ;

/// @brief Method GetTargetCameraPosition, addr 0xaedb5b0, size 0x138, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetTargetCameraPosition(::UnityEngine::Vector3  worldUp) ;

/// @brief Method MutateCameraState, addr 0xaedb294, size 0x28c, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineTransposer* New_ctor() ;

/// @brief Method OnTargetObjectWarped, addr 0xaed5304, size 0xe8, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnValidate, addr 0xaed4b28, size 0x30, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method UpgradeToCm3, addr 0xaedb6e8, size 0x48, virtual false, abstract: false, final false
inline void UpgradeToCm3(::Unity::Cinemachine::CinemachineFollow*  c) ;

constexpr bool const& __cordl_internal_get__HideOffsetInInspector_k__BackingField() const;

constexpr bool& __cordl_internal_get__HideOffsetInInspector_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_m_AngularDamping() const;

constexpr float_t& __cordl_internal_get_m_AngularDamping() ;

constexpr ::Unity::Cinemachine::TargetTracking::AngularDampingMode const& __cordl_internal_get_m_AngularDampingMode() const;

constexpr ::Unity::Cinemachine::TargetTracking::AngularDampingMode& __cordl_internal_get_m_AngularDampingMode() ;

constexpr ::Unity::Cinemachine::TargetTracking::BindingMode const& __cordl_internal_get_m_BindingMode() const;

constexpr ::Unity::Cinemachine::TargetTracking::BindingMode& __cordl_internal_get_m_BindingMode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_FollowOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_FollowOffset() ;

constexpr float_t const& __cordl_internal_get_m_PitchDamping() const;

constexpr float_t& __cordl_internal_get_m_PitchDamping() ;

constexpr float_t const& __cordl_internal_get_m_RollDamping() const;

constexpr float_t& __cordl_internal_get_m_RollDamping() ;

constexpr ::Unity::Cinemachine::TargetTracking::Tracker const& __cordl_internal_get_m_TargetTracker() const;

constexpr ::Unity::Cinemachine::TargetTracking::Tracker& __cordl_internal_get_m_TargetTracker() ;

constexpr float_t const& __cordl_internal_get_m_XDamping() const;

constexpr float_t& __cordl_internal_get_m_XDamping() ;

constexpr float_t const& __cordl_internal_get_m_YDamping() const;

constexpr float_t& __cordl_internal_get_m_YDamping() ;

constexpr float_t const& __cordl_internal_get_m_YawDamping() const;

constexpr float_t& __cordl_internal_get_m_YawDamping() ;

constexpr float_t const& __cordl_internal_get_m_ZDamping() const;

constexpr float_t& __cordl_internal_get_m_ZDamping() ;

constexpr void __cordl_internal_set__HideOffsetInInspector_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_AngularDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_AngularDampingMode(::Unity::Cinemachine::TargetTracking::AngularDampingMode  value) ;

constexpr void __cordl_internal_set_m_BindingMode(::Unity::Cinemachine::TargetTracking::BindingMode  value) ;

constexpr void __cordl_internal_set_m_FollowOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_PitchDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_RollDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_TargetTracker(::Unity::Cinemachine::TargetTracking::Tracker  value) ;

constexpr void __cordl_internal_set_m_XDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_YDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_YawDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_ZDamping(float_t  value) ;

/// @brief Method .ctor, addr 0xaed67c0, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EffectiveOffset, addr 0xaed5a9c, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_EffectiveOffset() ;

/// [CompilerGenerated]
/// @brief Method get_HideOffsetInInspector, addr 0xaedb1a4, size 0x8, virtual false, abstract: false, final false
inline bool get_HideOffsetInInspector() ;

/// @brief Method get_IsValid, addr 0xaedb1b4, size 0x90, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Stage, addr 0xaedb244, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

/// @brief Method get_TrackerSettings, addr 0xaed6168, size 0x2c, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::TargetTracking::TrackerSettings get_TrackerSettings() ;

/// [CompilerGenerated]
/// @brief Method set_HideOffsetInInspector, addr 0xaedb1ac, size 0x8, virtual false, abstract: false, final false
inline void set_HideOffsetInInspector(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineTransposer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineTransposer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineTransposer(CinemachineTransposer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineTransposer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineTransposer(CinemachineTransposer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22444};

/// [Tooltip("The coordinate space to use when interpreting the offset from the target.  This is also used to set the camera\'s Up vector, which will be maintained when aiming the camera.")]
/// @brief Field m_BindingMode, offset: 0x28, size: 0x4, def value: None
 ::Unity::Cinemachine::TargetTracking::BindingMode  ___m_BindingMode;

/// [Tooltip("The distance vector that the transposer will attempt to maintain from the Follow target")]
/// @brief Field m_FollowOffset, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_FollowOffset;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to maintain the offset in the X-axis.  Small numbers are more responsive, rapidly translating the camera to keep the target\'s x-axis offset.  Larger numbers give a more heavy slowly responding camera. Using different settings per axis can yield a wide range of camera behaviors.")]
/// @brief Field m_XDamping, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_XDamping;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to maintain the offset in the Y-axis.  Small numbers are more responsive, rapidly translating the camera to keep the target\'s y-axis offset.  Larger numbers give a more heavy slowly responding camera. Using different settings per axis can yield a wide range of camera behaviors.")]
/// @brief Field m_YDamping, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m_YDamping;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to maintain the offset in the Z-axis.  Small numbers are more responsive, rapidly translating the camera to keep the target\'s z-axis offset.  Larger numbers give a more heavy slowly responding camera. Using different settings per axis can yield a wide range of camera behaviors.")]
/// @brief Field m_ZDamping, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_ZDamping;

/// @brief Field m_AngularDampingMode, offset: 0x44, size: 0x4, def value: None
 ::Unity::Cinemachine::TargetTracking::AngularDampingMode  ___m_AngularDampingMode;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to track the target rotation\'s X angle.  Small numbers are more responsive.  Larger numbers give a more heavy slowly responding camera.")]
/// @brief Field m_PitchDamping, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_PitchDamping;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to track the target rotation\'s Y angle.  Small numbers are more responsive.  Larger numbers give a more heavy slowly responding camera.")]
/// @brief Field m_YawDamping, offset: 0x4c, size: 0x4, def value: None
 float_t  ___m_YawDamping;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to track the target rotation\'s Z angle.  Small numbers are more responsive.  Larger numbers give a more heavy slowly responding camera.")]
/// @brief Field m_RollDamping, offset: 0x50, size: 0x4, def value: None
 float_t  ___m_RollDamping;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to track the target\'s orientation.  Small numbers are more responsive.  Larger numbers give a more heavy slowly responding camera.")]
/// @brief Field m_AngularDamping, offset: 0x54, size: 0x4, def value: None
 float_t  ___m_AngularDamping;

/// @brief Field m_TargetTracker, offset: 0x58, size: 0x40, def value: None
 ::Unity::Cinemachine::TargetTracking::Tracker  ___m_TargetTracker;

/// [CompilerGenerated]
/// @brief Field <HideOffsetInInspector>k__BackingField, offset: 0x98, size: 0x1, def value: None
 bool  ____HideOffsetInInspector_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineTransposer, ___m_BindingMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTransposer, ___m_FollowOffset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTransposer, ___m_XDamping) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTransposer, ___m_YDamping) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTransposer, ___m_ZDamping) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTransposer, ___m_AngularDampingMode) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTransposer, ___m_PitchDamping) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTransposer, ___m_YawDamping) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTransposer, ___m_RollDamping) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTransposer, ___m_AngularDamping) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTransposer, ___m_TargetTracker) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTransposer, ____HideOffsetInInspector_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineTransposer) == 0xa0, "Size mismatch!");

} // namespace end def Unity::Cinemachine

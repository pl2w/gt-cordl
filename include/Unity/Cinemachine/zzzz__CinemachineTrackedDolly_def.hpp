#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTrackedDolly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePathBase_PositionUnits_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTrackedDolly_AutoDolly_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTrackedDolly_CameraUpMode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineTrackedDolly)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachineTrackedDolly_AutoDolly;
}
namespace GlobalNamespace {
struct CinemachineTrackedDolly_CameraUpMode;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachinePathBase;
}
namespace Unity::Cinemachine {
class CinemachineSplineDolly;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineTrackedDolly;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineTrackedDolly*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineTrackedDolly*, "Unity.Cinemachine", "CinemachineTrackedDolly");
// [Obsolete("CinemachineTrackedDolly has been deprecated. Use CinemachineSplineDolly instead.")]
// [AddComponentMenu("")]
// [SaveDuringPlay]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)0)]
// Dependencies Unity.Cinemachine.CinemachineComponentBase, Unity.Cinemachine.CinemachinePathBase::PositionUnits, Unity.Cinemachine.CinemachineTrackedDolly::AutoDolly, Unity.Cinemachine.CinemachineTrackedDolly::CameraUpMode, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineTrackedDolly
class CORDL_TYPE CinemachineTrackedDolly : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
using AutoDolly = ::GlobalNamespace::CinemachineTrackedDolly_AutoDolly;

using CameraUpMode = ::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode;

 __declspec(property(get=get_AngularDamping)) ::UnityEngine::Vector3  AngularDamping;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

/// @brief Field m_AutoDolly, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_AutoDolly, put=__cordl_internal_set_m_AutoDolly)) ::GlobalNamespace::CinemachineTrackedDolly_AutoDolly  m_AutoDolly;

/// @brief Field m_CameraUp, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CameraUp, put=__cordl_internal_set_m_CameraUp)) ::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode  m_CameraUp;

/// @brief Field m_Path, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Path, put=__cordl_internal_set_m_Path)) ::UnityW<::Unity::Cinemachine::CinemachinePathBase>  m_Path;

/// @brief Field m_PathOffset, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_PathOffset, put=__cordl_internal_set_m_PathOffset)) ::UnityEngine::Vector3  m_PathOffset;

/// @brief Field m_PathPosition, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PathPosition, put=__cordl_internal_set_m_PathPosition)) float_t  m_PathPosition;

/// @brief Field m_PitchDamping, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PitchDamping, put=__cordl_internal_set_m_PitchDamping)) float_t  m_PitchDamping;

/// @brief Field m_PositionUnits, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PositionUnits, put=__cordl_internal_set_m_PositionUnits)) ::GlobalNamespace::CinemachinePathBase_PositionUnits  m_PositionUnits;

/// @brief Field m_PreviousCameraPosition, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_PreviousCameraPosition, put=__cordl_internal_set_m_PreviousCameraPosition)) ::UnityEngine::Vector3  m_PreviousCameraPosition;

/// @brief Field m_PreviousOrientation, offset 0x74, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_PreviousOrientation, put=__cordl_internal_set_m_PreviousOrientation)) ::UnityEngine::Quaternion  m_PreviousOrientation;

/// @brief Field m_PreviousPathPosition, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PreviousPathPosition, put=__cordl_internal_set_m_PreviousPathPosition)) float_t  m_PreviousPathPosition;

/// @brief Field m_RollDamping, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RollDamping, put=__cordl_internal_set_m_RollDamping)) float_t  m_RollDamping;

/// @brief Field m_XDamping, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_XDamping, put=__cordl_internal_set_m_XDamping)) float_t  m_XDamping;

/// @brief Field m_YDamping, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_YDamping, put=__cordl_internal_set_m_YDamping)) float_t  m_YDamping;

/// @brief Field m_YawDamping, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_YawDamping, put=__cordl_internal_set_m_YawDamping)) float_t  m_YawDamping;

/// @brief Field m_ZDamping, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ZDamping, put=__cordl_internal_set_m_ZDamping)) float_t  m_ZDamping;

/// @brief Method GetCameraOrientationAtPathPoint, addr 0xaedad0c, size 0x204, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetCameraOrientationAtPathPoint(::UnityEngine::Quaternion  pathOrientation, ::UnityEngine::Vector3  up) ;

/// @brief Method GetMaxDampTime, addr 0xaeda370, size 0x44, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method MutateCameraState, addr 0xaeda430, size 0x8dc, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineTrackedDolly* New_ctor() ;

/// @brief Method UpgradeToCm3, addr 0xaedaf10, size 0x184, virtual false, abstract: false, final false
inline void UpgradeToCm3(::Unity::Cinemachine::CinemachineSplineDolly*  c) ;

constexpr ::GlobalNamespace::CinemachineTrackedDolly_AutoDolly const& __cordl_internal_get_m_AutoDolly() const;

constexpr ::GlobalNamespace::CinemachineTrackedDolly_AutoDolly& __cordl_internal_get_m_AutoDolly() ;

constexpr ::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode const& __cordl_internal_get_m_CameraUp() const;

constexpr ::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode& __cordl_internal_get_m_CameraUp() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachinePathBase> const& __cordl_internal_get_m_Path() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachinePathBase>& __cordl_internal_get_m_Path() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PathOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PathOffset() ;

constexpr float_t const& __cordl_internal_get_m_PathPosition() const;

constexpr float_t& __cordl_internal_get_m_PathPosition() ;

constexpr float_t const& __cordl_internal_get_m_PitchDamping() const;

constexpr float_t& __cordl_internal_get_m_PitchDamping() ;

constexpr ::GlobalNamespace::CinemachinePathBase_PositionUnits const& __cordl_internal_get_m_PositionUnits() const;

constexpr ::GlobalNamespace::CinemachinePathBase_PositionUnits& __cordl_internal_get_m_PositionUnits() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PreviousCameraPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PreviousCameraPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_PreviousOrientation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_PreviousOrientation() ;

constexpr float_t const& __cordl_internal_get_m_PreviousPathPosition() const;

constexpr float_t& __cordl_internal_get_m_PreviousPathPosition() ;

constexpr float_t const& __cordl_internal_get_m_RollDamping() const;

constexpr float_t& __cordl_internal_get_m_RollDamping() ;

constexpr float_t const& __cordl_internal_get_m_XDamping() const;

constexpr float_t& __cordl_internal_get_m_XDamping() ;

constexpr float_t const& __cordl_internal_get_m_YDamping() const;

constexpr float_t& __cordl_internal_get_m_YDamping() ;

constexpr float_t const& __cordl_internal_get_m_YawDamping() const;

constexpr float_t& __cordl_internal_get_m_YawDamping() ;

constexpr float_t const& __cordl_internal_get_m_ZDamping() const;

constexpr float_t& __cordl_internal_get_m_ZDamping() ;

constexpr void __cordl_internal_set_m_AutoDolly(::GlobalNamespace::CinemachineTrackedDolly_AutoDolly  value) ;

constexpr void __cordl_internal_set_m_CameraUp(::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode  value) ;

constexpr void __cordl_internal_set_m_Path(::UnityW<::Unity::Cinemachine::CinemachinePathBase>  value) ;

constexpr void __cordl_internal_set_m_PathOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_PathPosition(float_t  value) ;

constexpr void __cordl_internal_set_m_PitchDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_PositionUnits(::GlobalNamespace::CinemachinePathBase_PositionUnits  value) ;

constexpr void __cordl_internal_set_m_PreviousCameraPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_PreviousOrientation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_PreviousPathPosition(float_t  value) ;

constexpr void __cordl_internal_set_m_RollDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_XDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_YDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_YawDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_ZDamping(float_t  value) ;

/// @brief Method .ctor, addr 0xaedb094, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AngularDamping, addr 0xaeda3b4, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_AngularDamping() ;

/// @brief Method get_IsValid, addr 0xaeda2e8, size 0x80, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Stage, addr 0xaeda368, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineTrackedDolly() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineTrackedDolly", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineTrackedDolly(CinemachineTrackedDolly && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineTrackedDolly", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineTrackedDolly(CinemachineTrackedDolly const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22443};

/// [Tooltip("The path to which the camera will be constrained.  This must be non-null.")]
/// @brief Field m_Path, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachinePathBase>  ___m_Path;

/// [Tooltip("The position along the path at which the camera will be placed.  This can be animated directly, or set automatically by the Auto-Dolly feature to get as close as possible to the Follow target.  The value is interpreted according to the Position Units setting.")]
/// @brief Field m_PathPosition, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_PathPosition;

/// [Tooltip("How to interpret Path Position.  If set to Path Units, values are as follows: 0 represents the first waypoint on the path, 1 is the second, and so on.  Values in-between are points on the path in between the waypoints.  If set to Distance, then Path Position represents distance along the path.")]
/// @brief Field m_PositionUnits, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::CinemachinePathBase_PositionUnits  ___m_PositionUnits;

/// [Tooltip("Where to put the camera relative to the path position.  X is perpendicular to the path, Y is up, and Z is parallel to the path.  This allows the camera to be offset from the path itself (as if on a tripod, for example).")]
/// @brief Field m_PathOffset, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_PathOffset;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to maintain its position in a direction perpendicular to the path.  Small numbers are more responsive, rapidly translating the camera to keep the target\'s x-axis offset.  Larger numbers give a more heavy slowly responding camera. Using different settings per axis can yield a wide range of camera behaviors.")]
/// @brief Field m_XDamping, offset: 0x44, size: 0x4, def value: None
 float_t  ___m_XDamping;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to maintain its position in the path-local up direction.  Small numbers are more responsive, rapidly translating the camera to keep the target\'s y-axis offset.  Larger numbers give a more heavy slowly responding camera. Using different settings per axis can yield a wide range of camera behaviors.")]
/// @brief Field m_YDamping, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_YDamping;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to maintain its position in a direction parallel to the path.  Small numbers are more responsive, rapidly translating the camera to keep the target\'s z-axis offset.  Larger numbers give a more heavy slowly responding camera. Using different settings per axis can yield a wide range of camera behaviors.")]
/// @brief Field m_ZDamping, offset: 0x4c, size: 0x4, def value: None
 float_t  ___m_ZDamping;

/// [Tooltip("How to set the virtual camera\'s Up vector.  This will affect the screen composition, because the camera Aim behaviours will always try to respect the Up direction.")]
/// @brief Field m_CameraUp, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode  ___m_CameraUp;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to track the target rotation\'s X angle.  Small numbers are more responsive.  Larger numbers give a more heavy slowly responding camera.")]
/// @brief Field m_PitchDamping, offset: 0x54, size: 0x4, def value: None
 float_t  ___m_PitchDamping;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to track the target rotation\'s Y angle.  Small numbers are more responsive.  Larger numbers give a more heavy slowly responding camera.")]
/// @brief Field m_YawDamping, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_YawDamping;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to track the target rotation\'s Z angle.  Small numbers are more responsive.  Larger numbers give a more heavy slowly responding camera.")]
/// @brief Field m_RollDamping, offset: 0x5c, size: 0x4, def value: None
 float_t  ___m_RollDamping;

/// [Tooltip("Controls how automatic dollying occurs.  A Follow target is necessary to use this feature.")]
/// @brief Field m_AutoDolly, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::CinemachineTrackedDolly_AutoDolly  ___m_AutoDolly;

/// @brief Field m_PreviousPathPosition, offset: 0x70, size: 0x4, def value: None
 float_t  ___m_PreviousPathPosition;

/// @brief Field m_PreviousOrientation, offset: 0x74, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_PreviousOrientation;

/// @brief Field m_PreviousCameraPosition, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_PreviousCameraPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineTrackedDolly, ___m_Path) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTrackedDolly, ___m_PathPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTrackedDolly, ___m_PositionUnits) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTrackedDolly, ___m_PathOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTrackedDolly, ___m_XDamping) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTrackedDolly, ___m_YDamping) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTrackedDolly, ___m_ZDamping) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTrackedDolly, ___m_CameraUp) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTrackedDolly, ___m_PitchDamping) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTrackedDolly, ___m_YawDamping) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTrackedDolly, ___m_RollDamping) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTrackedDolly, ___m_AutoDolly) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTrackedDolly, ___m_PreviousPathPosition) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTrackedDolly, ___m_PreviousOrientation) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTrackedDolly, ___m_PreviousCameraPosition) == 0x84, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineTrackedDolly) == 0x90, "Size mismatch!");

} // namespace end def Unity::Cinemachine

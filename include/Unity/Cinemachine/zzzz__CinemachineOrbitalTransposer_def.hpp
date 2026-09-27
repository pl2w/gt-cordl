#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineOrbitalTransposer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__Tracker_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_Recentering_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalTransposer_Heading_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTransposer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineOrbitalTransposer)
namespace GlobalNamespace {
struct AxisState_Recentering;
}
namespace GlobalNamespace {
struct CinemachineOrbitalTransposer_Heading;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Cinemachine {
class AxisState_IRequiresInput;
}
namespace Unity::Cinemachine {
struct AxisState;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineOrbitalFollow;
}
namespace Unity::Cinemachine {
class CinemachineOrbitalTransposer_UpdateHeadingDelegate;
}
namespace Unity::Cinemachine {
class CinemachineOrbitalTransposer___c;
}
namespace Unity::Cinemachine {
class HeadingTracker;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineOrbitalTransposer;
}
namespace Unity::Cinemachine {
class CinemachineOrbitalTransposer_UpdateHeadingDelegate;
}
namespace Unity::Cinemachine {
class CinemachineOrbitalTransposer___c;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineOrbitalTransposer*);
MARK_REF_T(::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*);
MARK_REF_T(::Unity::Cinemachine::CinemachineOrbitalTransposer___c*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineOrbitalTransposer*, "Unity.Cinemachine", "CinemachineOrbitalTransposer");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*, "Unity.Cinemachine", "CinemachineOrbitalTransposer/UpdateHeadingDelegate");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineOrbitalTransposer___c*, "Unity.Cinemachine", "CinemachineOrbitalTransposer/<>c");
// [Obsolete("CinemachineOrbitalTransposer has been deprecated. Use CinemachineOrbitalFollow instead")]
// [AddComponentMenu("")]
// [SaveDuringPlay]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)0)]
// Dependencies Unity.Cinemachine.AxisState, Unity.Cinemachine.AxisState::Recentering, Unity.Cinemachine.CinemachineOrbitalTransposer::Heading, Unity.Cinemachine.CinemachineTransposer, Unity.Cinemachine.TargetTracking.Tracker, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineOrbitalTransposer
class CORDL_TYPE CinemachineOrbitalTransposer : public ::Unity::Cinemachine::CinemachineTransposer {
public:
// Declarations
using Heading = ::GlobalNamespace::CinemachineOrbitalTransposer_Heading;

using UpdateHeadingDelegate = ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate;

using __c = ::Unity::Cinemachine::CinemachineOrbitalTransposer___c;

/// @brief Field HeadingUpdater, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_HeadingUpdater, put=__cordl_internal_set_HeadingUpdater)) ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*  HeadingUpdater;

/// @brief Field mHeadingTracker, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mHeadingTracker, put=__cordl_internal_set_mHeadingTracker)) ::Unity::Cinemachine::HeadingTracker*  mHeadingTracker;

/// @brief Field m_Heading, offset 0x9c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Heading, put=__cordl_internal_set_m_Heading)) ::GlobalNamespace::CinemachineOrbitalTransposer_Heading  m_Heading;

/// @brief Field m_HeadingIsDriven, offset 0x184, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HeadingIsDriven, put=__cordl_internal_set_m_HeadingIsDriven)) bool  m_HeadingIsDriven;

/// @brief Field m_LastCameraPosition, offset 0x1b8, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LastCameraPosition, put=__cordl_internal_set_m_LastCameraPosition)) ::UnityEngine::Vector3  m_LastCameraPosition;

/// @brief Field m_LastHeading, offset 0x1c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastHeading, put=__cordl_internal_set_m_LastHeading)) float_t  m_LastHeading;

/// @brief Field m_LastTargetPosition, offset 0x190, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LastTargetPosition, put=__cordl_internal_set_m_LastTargetPosition)) ::UnityEngine::Vector3  m_LastTargetPosition;

/// @brief Field m_LegacyHeadingBias, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LegacyHeadingBias, put=__cordl_internal_set_m_LegacyHeadingBias)) float_t  m_LegacyHeadingBias;

/// @brief Field m_LegacyHeightOffset, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LegacyHeightOffset, put=__cordl_internal_set_m_LegacyHeightOffset)) float_t  m_LegacyHeightOffset;

/// @brief Field m_LegacyRadius, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LegacyRadius, put=__cordl_internal_set_m_LegacyRadius)) float_t  m_LegacyRadius;

/// @brief Field m_PreviousTarget, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreviousTarget, put=__cordl_internal_set_m_PreviousTarget)) ::UnityW<::UnityEngine::Transform>  m_PreviousTarget;

/// @brief Field m_RecenterToTargetHeading, offset 0xa8, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_RecenterToTargetHeading, put=__cordl_internal_set_m_RecenterToTargetHeading)) ::GlobalNamespace::AxisState_Recentering  m_RecenterToTargetHeading;

/// @brief Field m_TargetRigidBody, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetRigidBody, put=__cordl_internal_set_m_TargetRigidBody)) ::UnityW<::UnityEngine::Rigidbody>  m_TargetRigidBody;

/// @brief Field m_TargetTracker, offset 0x138, size 0x40 
 __declspec(property(get=__cordl_internal_get_m_TargetTracker, put=__cordl_internal_set_m_TargetTracker)) ::Unity::Cinemachine::TargetTracking::Tracker  m_TargetTracker;

/// @brief Field m_XAxis, offset 0xc8, size 0x70 
 __declspec(property(get=__cordl_internal_get_m_XAxis, put=__cordl_internal_set_m_XAxis)) ::Unity::Cinemachine::AxisState  m_XAxis;

/// @brief Convert operator to "::Unity::Cinemachine::AxisState_IRequiresInput"
constexpr operator  ::Unity::Cinemachine::AxisState_IRequiresInput*() noexcept;

/// @brief Method ForceCameraPosition, addr 0xaed53ec, size 0x94, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetAxisClosestValue, addr 0xaed55e4, size 0x310, virtual false, abstract: false, final false
inline float_t GetAxisClosestValue(::UnityEngine::Vector3  cameraPos, ::UnityEngine::Vector3  up) ;

/// @brief Method GetTargetCameraPosition, addr 0xaed6194, size 0x210, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetTargetCameraPosition(::UnityEngine::Vector3  worldUp) ;

/// @brief Method GetTargetHeading, addr 0xaed4cf4, size 0x3c8, virtual false, abstract: false, final false
inline float_t GetTargetHeading(float_t  currentHeading, ::UnityEngine::Quaternion  targetOrientation) ;

/// @brief Method MutateCameraState, addr 0xaed5ac4, size 0x6a4, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineOrbitalTransposer* New_ctor() ;

/// @brief Method OnEnable, addr 0xaed50bc, size 0x74, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTargetObjectWarped, addr 0xaed521c, size 0xe8, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnTransitionFromCamera, addr 0xaed58f4, size 0x1a8, virtual true, abstract: false, final false
inline bool OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method OnValidate, addr 0xaed4a30, size 0xf8, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Unity.Cinemachine.AxisState.IRequiresInput.RequiresInput, addr 0xaed5214, size 0x8, virtual true, abstract: false, final true
inline bool Unity_Cinemachine_AxisState_IRequiresInput_RequiresInput() ;

/// @brief Method UpdateHeading, addr 0xaed4b58, size 0xc, virtual false, abstract: false, final false
inline float_t UpdateHeading(float_t  deltaTime, ::UnityEngine::Vector3  up, ::by_ref<::Unity::Cinemachine::AxisState>  axis) ;

/// @brief Method UpdateHeading, addr 0xaed4b64, size 0x190, virtual false, abstract: false, final false
inline float_t UpdateHeading(float_t  deltaTime, ::UnityEngine::Vector3  up, ::by_ref<::Unity::Cinemachine::AxisState>  axis, ::by_ref<::GlobalNamespace::AxisState_Recentering>  recentering, bool  isLive) ;

/// @brief Method UpdateInputAxisProvider, addr 0xaed5130, size 0xe4, virtual false, abstract: false, final false
inline void UpdateInputAxisProvider() ;

/// @brief Method UpgradeToCm3, addr 0xaed63a4, size 0x100, virtual false, abstract: false, final false
inline void UpgradeToCm3(::Unity::Cinemachine::CinemachineOrbitalFollow*  c) ;

constexpr ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate* const& __cordl_internal_get_HeadingUpdater() const;

constexpr ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*& __cordl_internal_get_HeadingUpdater() ;

constexpr ::Unity::Cinemachine::HeadingTracker* const& __cordl_internal_get_mHeadingTracker() const;

constexpr ::Unity::Cinemachine::HeadingTracker*& __cordl_internal_get_mHeadingTracker() ;

constexpr ::GlobalNamespace::CinemachineOrbitalTransposer_Heading const& __cordl_internal_get_m_Heading() const;

constexpr ::GlobalNamespace::CinemachineOrbitalTransposer_Heading& __cordl_internal_get_m_Heading() ;

constexpr bool const& __cordl_internal_get_m_HeadingIsDriven() const;

constexpr bool& __cordl_internal_get_m_HeadingIsDriven() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastCameraPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastCameraPosition() ;

constexpr float_t const& __cordl_internal_get_m_LastHeading() const;

constexpr float_t& __cordl_internal_get_m_LastHeading() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastTargetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastTargetPosition() ;

constexpr float_t const& __cordl_internal_get_m_LegacyHeadingBias() const;

constexpr float_t& __cordl_internal_get_m_LegacyHeadingBias() ;

constexpr float_t const& __cordl_internal_get_m_LegacyHeightOffset() const;

constexpr float_t& __cordl_internal_get_m_LegacyHeightOffset() ;

constexpr float_t const& __cordl_internal_get_m_LegacyRadius() const;

constexpr float_t& __cordl_internal_get_m_LegacyRadius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_PreviousTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_PreviousTarget() ;

constexpr ::GlobalNamespace::AxisState_Recentering const& __cordl_internal_get_m_RecenterToTargetHeading() const;

constexpr ::GlobalNamespace::AxisState_Recentering& __cordl_internal_get_m_RecenterToTargetHeading() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_m_TargetRigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_m_TargetRigidBody() ;

constexpr ::Unity::Cinemachine::TargetTracking::Tracker const& __cordl_internal_get_m_TargetTracker() const;

constexpr ::Unity::Cinemachine::TargetTracking::Tracker& __cordl_internal_get_m_TargetTracker() ;

constexpr ::Unity::Cinemachine::AxisState const& __cordl_internal_get_m_XAxis() const;

constexpr ::Unity::Cinemachine::AxisState& __cordl_internal_get_m_XAxis() ;

constexpr void __cordl_internal_set_HeadingUpdater(::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*  value) ;

constexpr void __cordl_internal_set_mHeadingTracker(::Unity::Cinemachine::HeadingTracker*  value) ;

constexpr void __cordl_internal_set_m_Heading(::GlobalNamespace::CinemachineOrbitalTransposer_Heading  value) ;

constexpr void __cordl_internal_set_m_HeadingIsDriven(bool  value) ;

constexpr void __cordl_internal_set_m_LastCameraPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_LastHeading(float_t  value) ;

constexpr void __cordl_internal_set_m_LastTargetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_LegacyHeadingBias(float_t  value) ;

constexpr void __cordl_internal_set_m_LegacyHeightOffset(float_t  value) ;

constexpr void __cordl_internal_set_m_LegacyRadius(float_t  value) ;

constexpr void __cordl_internal_set_m_PreviousTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_RecenterToTargetHeading(::GlobalNamespace::AxisState_Recentering  value) ;

constexpr void __cordl_internal_set_m_TargetRigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_m_TargetTracker(::Unity::Cinemachine::TargetTracking::Tracker  value) ;

constexpr void __cordl_internal_set_m_XAxis(::Unity::Cinemachine::AxisState  value) ;

/// @brief Method .ctor, addr 0xaed64a4, size 0x204, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Cinemachine::AxisState_IRequiresInput"
constexpr ::Unity::Cinemachine::AxisState_IRequiresInput* i___Unity__Cinemachine__AxisState_IRequiresInput() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineOrbitalTransposer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineOrbitalTransposer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineOrbitalTransposer(CinemachineOrbitalTransposer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineOrbitalTransposer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineOrbitalTransposer(CinemachineOrbitalTransposer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22428};

/// [Space]
/// [Tooltip("The definition of Forward.  Camera will follow behind.")]
/// @brief Field m_Heading, offset: 0x9c, size: 0xc, def value: None
 ::GlobalNamespace::CinemachineOrbitalTransposer_Heading  ___m_Heading;

/// [Tooltip("Automatic heading recentering.  The settings here defines how the camera will reposition itself in the absence of player input.")]
/// @brief Field m_RecenterToTargetHeading, offset: 0xa8, size: 0x20, def value: None
 ::GlobalNamespace::AxisState_Recentering  ___m_RecenterToTargetHeading;

/// [Tooltip("Heading Control.  The settings here control the behaviour of the camera in response to the player\'s input.")]
/// @brief Field m_XAxis, offset: 0xc8, size: 0x70, def value: None
 ::Unity::Cinemachine::AxisState  ___m_XAxis;

/// @brief Field m_TargetTracker, offset: 0x138, size: 0x40, def value: None
 ::Unity::Cinemachine::TargetTracking::Tracker  ___m_TargetTracker;

/// [SerializeField]
/// [HideInInspector]
/// [FormerlySerializedAs("m_Radius")]
/// @brief Field m_LegacyRadius, offset: 0x178, size: 0x4, def value: None
 float_t  ___m_LegacyRadius;

/// [SerializeField]
/// [HideInInspector]
/// [FormerlySerializedAs("m_HeightOffset")]
/// @brief Field m_LegacyHeightOffset, offset: 0x17c, size: 0x4, def value: None
 float_t  ___m_LegacyHeightOffset;

/// [SerializeField]
/// [HideInInspector]
/// [FormerlySerializedAs("m_HeadingBias")]
/// @brief Field m_LegacyHeadingBias, offset: 0x180, size: 0x4, def value: None
 float_t  ___m_LegacyHeadingBias;

/// [FormerlySerializedAs("m_HeadingIsSlave")]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// @brief Field m_HeadingIsDriven, offset: 0x184, size: 0x1, def value: None
 bool  ___m_HeadingIsDriven;

/// @brief Field HeadingUpdater, offset: 0x188, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*  ___HeadingUpdater;

/// @brief Field m_LastTargetPosition, offset: 0x190, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LastTargetPosition;

/// @brief Field mHeadingTracker, offset: 0x1a0, size: 0x8, def value: None
 ::Unity::Cinemachine::HeadingTracker*  ___mHeadingTracker;

/// @brief Field m_TargetRigidBody, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___m_TargetRigidBody;

/// @brief Field m_PreviousTarget, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_PreviousTarget;

/// @brief Field m_LastCameraPosition, offset: 0x1b8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LastCameraPosition;

/// @brief Field m_LastHeading, offset: 0x1c4, size: 0x4, def value: None
 float_t  ___m_LastHeading;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalTransposer, ___m_Heading) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalTransposer, ___m_RecenterToTargetHeading) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalTransposer, ___m_XAxis) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalTransposer, ___m_TargetTracker) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalTransposer, ___m_LegacyRadius) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalTransposer, ___m_LegacyHeightOffset) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalTransposer, ___m_LegacyHeadingBias) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalTransposer, ___m_HeadingIsDriven) == 0x184, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalTransposer, ___HeadingUpdater) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalTransposer, ___m_LastTargetPosition) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalTransposer, ___mHeadingTracker) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalTransposer, ___m_TargetRigidBody) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalTransposer, ___m_PreviousTarget) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalTransposer, ___m_LastCameraPosition) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalTransposer, ___m_LastHeading) == 0x1c4, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineOrbitalTransposer) == 0x1c8, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// [CompilerGenerated]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineOrbitalTransposer/<>c
class CORDL_TYPE CinemachineOrbitalTransposer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Unity::Cinemachine::CinemachineOrbitalTransposer___c*  __9;

/// @brief Field <>9__31_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__31_0, put=setStaticF___9__31_0)) ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*  __9__31_0;

static inline ::Unity::Cinemachine::CinemachineOrbitalTransposer___c* New_ctor() ;

/// @brief Method <.ctor>b__31_0, addr 0xaed69ac, size 0xb8, virtual false, abstract: false, final false
inline float_t __ctor_b__31_0(::Unity::Cinemachine::CinemachineOrbitalTransposer*  orbital, float_t  deltaTime, ::UnityEngine::Vector3  up) ;

/// @brief Method .ctor, addr 0xaed69a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Cinemachine::CinemachineOrbitalTransposer___c* getStaticF___9() ;

static inline ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate* getStaticF___9__31_0() ;

static inline void setStaticF___9(::Unity::Cinemachine::CinemachineOrbitalTransposer___c*  value) ;

static inline void setStaticF___9__31_0(::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineOrbitalTransposer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineOrbitalTransposer___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineOrbitalTransposer___c(CinemachineOrbitalTransposer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineOrbitalTransposer___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineOrbitalTransposer___c(CinemachineOrbitalTransposer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22427};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineOrbitalTransposer___c) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.MulticastDelegate
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate
class CORDL_TYPE CinemachineOrbitalTransposer_UpdateHeadingDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xaed6858, size 0xbc, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Unity::Cinemachine::CinemachineOrbitalTransposer*  orbital, float_t  deltaTime, ::UnityEngine::Vector3  up, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xaed6914, size 0x28, virtual true, abstract: false, final false
inline float_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xaed6844, size 0x14, virtual true, abstract: false, final false
inline float_t Invoke(::Unity::Cinemachine::CinemachineOrbitalTransposer*  orbital, float_t  deltaTime, ::UnityEngine::Vector3  up) ;

static inline ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xaed66b4, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineOrbitalTransposer_UpdateHeadingDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineOrbitalTransposer_UpdateHeadingDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineOrbitalTransposer_UpdateHeadingDelegate(CinemachineOrbitalTransposer_UpdateHeadingDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineOrbitalTransposer_UpdateHeadingDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineOrbitalTransposer_UpdateHeadingDelegate(CinemachineOrbitalTransposer_UpdateHeadingDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22426};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine

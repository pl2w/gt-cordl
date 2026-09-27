#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineOrbitalFollow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/TargetTracking/zzzz__TrackerSettings_def.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__Tracker_def.hpp"
#include "Unity/Cinemachine/zzzz__Cinemachine3OrbitRig_OrbitSplineCache_def.hpp"
#include "Unity/Cinemachine/zzzz__Cinemachine3OrbitRig_Settings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalFollow_OrbitStyles_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalFollow_ReferenceFrames_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineOrbitalFollow)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachineOrbitalFollow_OrbitStyles;
}
namespace GlobalNamespace {
struct CinemachineOrbitalFollow_ReferenceFrames;
}
namespace GlobalNamespace {
struct CinemachineOrbitalFollow___c__DisplayClass50_0;
}
namespace GlobalNamespace {
struct CinemachineOrbitalFollow___c__DisplayClass50_1;
}
namespace GlobalNamespace {
struct CinemachineOrbitalFollow___c__DisplayClass50_2;
}
namespace GlobalNamespace {
struct IInputAxisOwner_AxisDescriptor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiableDistance;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiablePositionDamping;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifierValueSource;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
class IInputAxisOwner;
}
namespace Unity::Cinemachine {
class IInputAxisResetSource;
}
namespace Unity::Cinemachine {
struct InputAxis;
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
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineOrbitalFollow;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineOrbitalFollow*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineOrbitalFollow*, "Unity.Cinemachine", "CinemachineOrbitalFollow");
// [AddComponentMenu("Cinemachine/Procedural/Position Control/Cinemachine Orbital Follow")]
// [SaveDuringPlay]
// [DisallowMultipleComponent]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)0)]
// [RequiredTarget((Unity.Cinemachine.RequiredTargetAttribute::RequiredTargets)1)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineOrbitalFollow.html")]
// Dependencies Unity.Cinemachine.Cinemachine3OrbitRig::OrbitSplineCache, Unity.Cinemachine.Cinemachine3OrbitRig::Settings, Unity.Cinemachine.CinemachineComponentBase, Unity.Cinemachine.CinemachineOrbitalFollow::OrbitStyles, Unity.Cinemachine.CinemachineOrbitalFollow::ReferenceFrames, Unity.Cinemachine.InputAxis, Unity.Cinemachine.TargetTracking.Tracker, Unity.Cinemachine.TargetTracking.TrackerSettings, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineOrbitalFollow
class CORDL_TYPE CinemachineOrbitalFollow : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
using OrbitStyles = ::GlobalNamespace::CinemachineOrbitalFollow_OrbitStyles;

using ReferenceFrames = ::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames;

using __c__DisplayClass50_0 = ::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0;

using __c__DisplayClass50_1 = ::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1;

using __c__DisplayClass50_2 = ::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_2;

/// @brief Field HorizontalAxis, offset 0x80, size 0x34 
 __declspec(property(get=__cordl_internal_get_HorizontalAxis, put=__cordl_internal_set_HorizontalAxis)) ::Unity::Cinemachine::InputAxis  HorizontalAxis;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field OrbitStyle, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_OrbitStyle, put=__cordl_internal_set_OrbitStyle)) ::GlobalNamespace::CinemachineOrbitalFollow_OrbitStyles  OrbitStyle;

/// @brief Field Orbits, offset 0x60, size 0x1c 
 __declspec(property(get=__cordl_internal_get_Orbits, put=__cordl_internal_set_Orbits)) ::GlobalNamespace::Cinemachine3OrbitRig_Settings  Orbits;

/// @brief Field RadialAxis, offset 0xe8, size 0x34 
 __declspec(property(get=__cordl_internal_get_RadialAxis, put=__cordl_internal_set_RadialAxis)) ::Unity::Cinemachine::InputAxis  RadialAxis;

/// @brief Field Radius, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Radius, put=__cordl_internal_set_Radius)) float_t  Radius;

/// @brief Field RecenteringTarget, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RecenteringTarget, put=__cordl_internal_set_RecenteringTarget)) ::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames  RecenteringTarget;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

/// @brief Field TargetOffset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_TargetOffset, put=__cordl_internal_set_TargetOffset)) ::UnityEngine::Vector3  TargetOffset;

 __declspec(property(get=get_TrackedPoint, put=set_TrackedPoint)) ::UnityEngine::Vector3  TrackedPoint;

/// @brief Field TrackerSettings, offset 0x34, size 0x24 
 __declspec(property(get=__cordl_internal_get_TrackerSettings, put=__cordl_internal_set_TrackerSettings)) ::Unity::Cinemachine::TargetTracking::TrackerSettings  TrackerSettings;

 __declspec(property(get=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance, put=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance)) float_t  Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_Distance;

 __declspec(property(get=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping, put=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping)) ::UnityEngine::Vector3  Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_PositionDamping;

 __declspec(property(get=Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue)) float_t  Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_NormalizedModifierValue;

 __declspec(property(get=Unity_Cinemachine_IInputAxisResetSource_get_HasResetHandler)) bool  Unity_Cinemachine_IInputAxisResetSource_HasResetHandler;

/// @brief Field VerticalAxis, offset 0xb4, size 0x34 
 __declspec(property(get=__cordl_internal_get_VerticalAxis, put=__cordl_internal_set_VerticalAxis)) ::Unity::Cinemachine::InputAxis  VerticalAxis;

/// @brief Field <TrackedPoint>k__BackingField, offset 0x1a8, size 0xc 
 __declspec(property(get=__cordl_internal_get__TrackedPoint_k__BackingField, put=__cordl_internal_set__TrackedPoint_k__BackingField)) ::UnityEngine::Vector3  _TrackedPoint_k__BackingField;

/// @brief Field m_OrbitCache, offset 0x168, size 0x38 
 __declspec(property(get=__cordl_internal_get_m_OrbitCache, put=__cordl_internal_set_m_OrbitCache)) ::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache  m_OrbitCache;

/// @brief Field m_PreviousOffset, offset 0x11c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_PreviousOffset, put=__cordl_internal_set_m_PreviousOffset)) ::UnityEngine::Vector3  m_PreviousOffset;

/// @brief Field m_ResetHandler, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ResetHandler, put=__cordl_internal_set_m_ResetHandler)) ::System::Action*  m_ResetHandler;

/// @brief Field m_TargetTracker, offset 0x128, size 0x40 
 __declspec(property(get=__cordl_internal_get_m_TargetTracker, put=__cordl_internal_set_m_TargetTracker)) ::Unity::Cinemachine::TargetTracking::Tracker  m_TargetTracker;

/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance"
constexpr operator  ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping"
constexpr operator  ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr operator  ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::IInputAxisOwner"
constexpr operator  ::Unity::Cinemachine::IInputAxisOwner*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::IInputAxisResetSource"
constexpr operator  ::Unity::Cinemachine::IInputAxisResetSource*() noexcept;

/// @brief Method ForceCameraPosition, addr 0xaea0a40, size 0x330, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetCameraOffsetForNormalizedAxisValue, addr 0xaea0378, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetCameraOffsetForNormalizedAxisValue(float_t  t) ;

/// @brief Method GetCameraPoint, addr 0xaea01d8, size 0x178, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetCameraPoint() ;

/// @brief Method GetMaxDampTime, addr 0xae9fcf0, size 0x34, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method GetReferenceOrientation, addr 0xaea1dd0, size 0xd4, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetReferenceOrientation() ;

/// @brief Method InferAxesFromPosition_Sphere, addr 0xaea0ea8, size 0x170, virtual false, abstract: false, final false
inline void InferAxesFromPosition_Sphere(::UnityEngine::Vector3  dir, float_t  distance, ::by_ref<::Unity::Cinemachine::CameraState>  state) ;

/// @brief Method InferAxesFromPosition_ThreeRing, addr 0xaea0d70, size 0x138, virtual false, abstract: false, final false
inline void InferAxesFromPosition_ThreeRing(::UnityEngine::Vector3  dir, float_t  distance, ::by_ref<::Unity::Cinemachine::CameraState>  state) ;

/// @brief Method MutateCameraState, addr 0xaea14f4, size 0x5d8, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineOrbitalFollow* New_ctor() ;

/// @brief Method OnTargetObjectWarped, addr 0xaea140c, size 0xe8, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnTransitionFromCamera, addr 0xaea0838, size 0x208, virtual true, abstract: false, final false
inline bool OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method OnValidate, addr 0xae9f9c4, size 0x74, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Reset, addr 0xae9fa38, size 0x140, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.get_Distance, addr 0xaea0368, size 0x8, virtual true, abstract: false, final true
inline float_t Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance() ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.set_Distance, addr 0xaea0370, size 0x8, virtual true, abstract: false, final true
inline void Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance(float_t  value) ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.get_PositionDamping, addr 0xaea0350, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping() ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.set_PositionDamping, addr 0xaea035c, size 0xc, virtual true, abstract: false, final true
inline void Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping(::UnityEngine::Vector3  value) ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifierValueSource.get_NormalizedModifierValue, addr 0xaea01ac, size 0x2c, virtual true, abstract: false, final true
inline float_t Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue() ;

/// @brief Method Unity.Cinemachine.IInputAxisOwner.GetInputAxes, addr 0xae9fd24, size 0x358, virtual true, abstract: false, final true
inline void Unity_Cinemachine_IInputAxisOwner_GetInputAxes(::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*  axes) ;

/// @brief Method Unity.Cinemachine.IInputAxisResetSource.RegisterResetHandler, addr 0xaea007c, size 0x90, virtual true, abstract: false, final true
inline void Unity_Cinemachine_IInputAxisResetSource_RegisterResetHandler(::System::Action*  handler) ;

/// @brief Method Unity.Cinemachine.IInputAxisResetSource.UnregisterResetHandler, addr 0xaea010c, size 0x90, virtual true, abstract: false, final true
inline void Unity_Cinemachine_IInputAxisResetSource_UnregisterResetHandler(::System::Action*  handler) ;

/// @brief Method Unity.Cinemachine.IInputAxisResetSource.get_HasResetHandler, addr 0xaea019c, size 0x10, virtual true, abstract: false, final true
inline bool Unity_Cinemachine_IInputAxisResetSource_get_HasResetHandler() ;

/// @brief Method UpdateHorizontalCenter, addr 0xaea1acc, size 0x304, virtual false, abstract: false, final false
inline void UpdateHorizontalCenter(::UnityEngine::Quaternion  referenceOrientation) ;

/// [CompilerGenerated]
/// @brief Method <InferAxesFromPosition_ThreeRing>g__AngleFunction|50_4, addr 0xaea2168, size 0xb8, virtual false, abstract: false, final false
inline float_t _InferAxesFromPosition_ThreeRing_g__AngleFunction_50_4(float_t  input, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>  _cordl_fixed_empty_name_whitespace, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>  _cordl_fixed_empty_name_whitespace_param_2) ;

/// [CompilerGenerated]
/// @brief Method <InferAxesFromPosition_ThreeRing>g__ChooseBestAngle|50_7, addr 0xaea2288, size 0x30, virtual false, abstract: false, final false
inline void _InferAxesFromPosition_ThreeRing_g__ChooseBestAngle_50_7(float_t  x, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>  _cordl_fixed_empty_name_whitespace, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_2>  _cordl_fixed_empty_name_whitespace_param_3) ;

/// [CompilerGenerated]
/// @brief Method <InferAxesFromPosition_ThreeRing>g__GetHorizontalAxis|50_0, addr 0xaea1018, size 0x100, virtual false, abstract: false, final false
inline float_t _InferAxesFromPosition_ThreeRing_g__GetHorizontalAxis_50_0(::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <InferAxesFromPosition_ThreeRing>g__GetVerticalAxisClosestValue|50_1, addr 0xaea1118, size 0x2f4, virtual false, abstract: false, final false
inline float_t _InferAxesFromPosition_ThreeRing_g__GetVerticalAxisClosestValue_50_1(::by_ref<::UnityEngine::Vector3>  splinePoint, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <InferAxesFromPosition_ThreeRing>g__InitialGuess|50_6, addr 0xaea2098, size 0xd0, virtual false, abstract: false, final false
inline float_t _InferAxesFromPosition_ThreeRing_g__InitialGuess_50_6(::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>  _cordl_fixed_empty_name_whitespace, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>  _cordl_fixed_empty_name_whitespace_param_1) ;

/// [CompilerGenerated]
/// @brief Method <InferAxesFromPosition_ThreeRing>g__MapTo01|50_3, addr 0xaea2088, size 0x10, virtual false, abstract: false, final false
static inline float_t _InferAxesFromPosition_ThreeRing_g__MapTo01_50_3(float_t  valueToMap, float_t  fMin, float_t  fMax) ;

/// [CompilerGenerated]
/// @brief Method <InferAxesFromPosition_ThreeRing>g__SlopeOfAngleFunction|50_5, addr 0xaea2220, size 0x68, virtual false, abstract: false, final false
inline float_t _InferAxesFromPosition_ThreeRing_g__SlopeOfAngleFunction_50_5(float_t  input, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>  _cordl_fixed_empty_name_whitespace, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>  _cordl_fixed_empty_name_whitespace_param_2) ;

/// [CompilerGenerated]
/// @brief Method <InferAxesFromPosition_ThreeRing>g__SteepestDescent|50_2, addr 0xaea1fc4, size 0xc4, virtual false, abstract: false, final false
inline float_t _InferAxesFromPosition_ThreeRing_g__SteepestDescent_50_2(::UnityEngine::Vector3  cameraOffset, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <Unity.Cinemachine.IInputAxisOwner.GetInputAxes>b__32_0, addr 0xaea1fac, size 0x8, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Cinemachine::InputAxis> _Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__32_0() ;

/// [CompilerGenerated]
/// @brief Method <Unity.Cinemachine.IInputAxisOwner.GetInputAxes>b__32_1, addr 0xaea1fb4, size 0x8, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Cinemachine::InputAxis> _Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__32_1() ;

/// [CompilerGenerated]
/// @brief Method <Unity.Cinemachine.IInputAxisOwner.GetInputAxes>b__32_2, addr 0xaea1fbc, size 0x8, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Cinemachine::InputAxis> _Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__32_2() ;

constexpr ::Unity::Cinemachine::InputAxis const& __cordl_internal_get_HorizontalAxis() const;

constexpr ::Unity::Cinemachine::InputAxis& __cordl_internal_get_HorizontalAxis() ;

constexpr ::GlobalNamespace::CinemachineOrbitalFollow_OrbitStyles const& __cordl_internal_get_OrbitStyle() const;

constexpr ::GlobalNamespace::CinemachineOrbitalFollow_OrbitStyles& __cordl_internal_get_OrbitStyle() ;

constexpr ::GlobalNamespace::Cinemachine3OrbitRig_Settings const& __cordl_internal_get_Orbits() const;

constexpr ::GlobalNamespace::Cinemachine3OrbitRig_Settings& __cordl_internal_get_Orbits() ;

constexpr ::Unity::Cinemachine::InputAxis const& __cordl_internal_get_RadialAxis() const;

constexpr ::Unity::Cinemachine::InputAxis& __cordl_internal_get_RadialAxis() ;

constexpr float_t const& __cordl_internal_get_Radius() const;

constexpr float_t& __cordl_internal_get_Radius() ;

constexpr ::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames const& __cordl_internal_get_RecenteringTarget() const;

constexpr ::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames& __cordl_internal_get_RecenteringTarget() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_TargetOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_TargetOffset() ;

constexpr ::Unity::Cinemachine::TargetTracking::TrackerSettings const& __cordl_internal_get_TrackerSettings() const;

constexpr ::Unity::Cinemachine::TargetTracking::TrackerSettings& __cordl_internal_get_TrackerSettings() ;

constexpr ::Unity::Cinemachine::InputAxis const& __cordl_internal_get_VerticalAxis() const;

constexpr ::Unity::Cinemachine::InputAxis& __cordl_internal_get_VerticalAxis() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__TrackedPoint_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__TrackedPoint_k__BackingField() ;

constexpr ::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache const& __cordl_internal_get_m_OrbitCache() const;

constexpr ::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache& __cordl_internal_get_m_OrbitCache() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PreviousOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PreviousOffset() ;

constexpr ::System::Action* const& __cordl_internal_get_m_ResetHandler() const;

constexpr ::System::Action*& __cordl_internal_get_m_ResetHandler() ;

constexpr ::Unity::Cinemachine::TargetTracking::Tracker const& __cordl_internal_get_m_TargetTracker() const;

constexpr ::Unity::Cinemachine::TargetTracking::Tracker& __cordl_internal_get_m_TargetTracker() ;

constexpr void __cordl_internal_set_HorizontalAxis(::Unity::Cinemachine::InputAxis  value) ;

constexpr void __cordl_internal_set_OrbitStyle(::GlobalNamespace::CinemachineOrbitalFollow_OrbitStyles  value) ;

constexpr void __cordl_internal_set_Orbits(::GlobalNamespace::Cinemachine3OrbitRig_Settings  value) ;

constexpr void __cordl_internal_set_RadialAxis(::Unity::Cinemachine::InputAxis  value) ;

constexpr void __cordl_internal_set_Radius(float_t  value) ;

constexpr void __cordl_internal_set_RecenteringTarget(::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames  value) ;

constexpr void __cordl_internal_set_TargetOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_TrackerSettings(::Unity::Cinemachine::TargetTracking::TrackerSettings  value) ;

constexpr void __cordl_internal_set_VerticalAxis(::Unity::Cinemachine::InputAxis  value) ;

constexpr void __cordl_internal_set__TrackedPoint_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_OrbitCache(::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache  value) ;

constexpr void __cordl_internal_set_m_PreviousOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_ResetHandler(::System::Action*  value) ;

constexpr void __cordl_internal_set_m_TargetTracker(::Unity::Cinemachine::TargetTracking::Tracker  value) ;

/// @brief Method .ctor, addr 0xaea1ea4, size 0x108, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultHorizontal, addr 0xae9fb9c, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::InputAxis get_DefaultHorizontal() ;

/// @brief Method get_DefaultRadial, addr 0xae9fc24, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::InputAxis get_DefaultRadial() ;

/// @brief Method get_DefaultVertical, addr 0xae9fbe4, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::InputAxis get_DefaultVertical() ;

/// @brief Method get_IsValid, addr 0xae9fc58, size 0x90, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Stage, addr 0xae9fce8, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

/// [CompilerGenerated]
/// @brief Method get_TrackedPoint, addr 0xae9f9a4, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_TrackedPoint() ;

/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance* i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiableDistance() noexcept;

/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping* i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiablePositionDamping() noexcept;

/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource* i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifierValueSource() noexcept;

/// @brief Convert to "::Unity::Cinemachine::IInputAxisOwner"
constexpr ::Unity::Cinemachine::IInputAxisOwner* i___Unity__Cinemachine__IInputAxisOwner() noexcept;

/// @brief Convert to "::Unity::Cinemachine::IInputAxisResetSource"
constexpr ::Unity::Cinemachine::IInputAxisResetSource* i___Unity__Cinemachine__IInputAxisResetSource() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TrackedPoint, addr 0xae9f9b4, size 0x10, virtual false, abstract: false, final false
inline void set_TrackedPoint(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineOrbitalFollow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineOrbitalFollow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineOrbitalFollow(CinemachineOrbitalFollow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineOrbitalFollow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineOrbitalFollow(CinemachineOrbitalFollow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22230};

/// [Tooltip("Offset from the target object\'s center in target-local space. Use this to fine-tune the orbit when the desired focus of the orbit is not the tracked object\'s center.")]
/// @brief Field TargetOffset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___TargetOffset;

/// @brief Field TrackerSettings, offset: 0x34, size: 0x24, def value: None
 ::Unity::Cinemachine::TargetTracking::TrackerSettings  ___TrackerSettings;

/// [Tooltip("Defines the manner in which the orbit surface is constructed.")]
/// @brief Field OrbitStyle, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineOrbitalFollow_OrbitStyles  ___OrbitStyle;

/// [Tooltip("The camera will be placed at this distance from the Follow target.")]
/// @brief Field Radius, offset: 0x5c, size: 0x4, def value: None
 float_t  ___Radius;

/// [Tooltip("Defines a complex surface rig from 3 horizontal rings.")]
/// [HideFoldout]
/// @brief Field Orbits, offset: 0x60, size: 0x1c, def value: None
 ::GlobalNamespace::Cinemachine3OrbitRig_Settings  ___Orbits;

/// [Tooltip("Defines the reference frame for horizontal recentering.  The axis center will be dynamically updated to be behind the selected object.")]
/// @brief Field RecenteringTarget, offset: 0x7c, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames  ___RecenteringTarget;

/// [Tooltip("Axis representing the current horizontal rotation.  Value is in degrees and represents a rotation about the up vector.")]
/// @brief Field HorizontalAxis, offset: 0x80, size: 0x34, def value: None
 ::Unity::Cinemachine::InputAxis  ___HorizontalAxis;

/// [Tooltip("Axis representing the current vertical rotation.  Value is in degrees and represents a rotation about the right vector.")]
/// @brief Field VerticalAxis, offset: 0xb4, size: 0x34, def value: None
 ::Unity::Cinemachine::InputAxis  ___VerticalAxis;

/// [Tooltip("Axis controlling the scale of the current distance.  Value is a scalar multiplier and is applied to the specified camera distance.")]
/// @brief Field RadialAxis, offset: 0xe8, size: 0x34, def value: None
 ::Unity::Cinemachine::InputAxis  ___RadialAxis;

/// @brief Field m_PreviousOffset, offset: 0x11c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_PreviousOffset;

/// @brief Field m_TargetTracker, offset: 0x128, size: 0x40, def value: None
 ::Unity::Cinemachine::TargetTracking::Tracker  ___m_TargetTracker;

/// @brief Field m_OrbitCache, offset: 0x168, size: 0x38, def value: None
 ::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache  ___m_OrbitCache;

/// @brief Field m_ResetHandler, offset: 0x1a0, size: 0x8, def value: None
 ::System::Action*  ___m_ResetHandler;

/// [CompilerGenerated]
/// @brief Field <TrackedPoint>k__BackingField, offset: 0x1a8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____TrackedPoint_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalFollow, ___TargetOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalFollow, ___TrackerSettings) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalFollow, ___OrbitStyle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalFollow, ___Radius) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalFollow, ___Orbits) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalFollow, ___RecenteringTarget) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalFollow, ___HorizontalAxis) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalFollow, ___VerticalAxis) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalFollow, ___RadialAxis) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalFollow, ___m_PreviousOffset) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalFollow, ___m_TargetTracker) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalFollow, ___m_OrbitCache) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalFollow, ___m_ResetHandler) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineOrbitalFollow, ____TrackedPoint_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineOrbitalFollow) == 0x1b8, "Size mismatch!");

} // namespace end def Unity::Cinemachine

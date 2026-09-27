#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFreeLook.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__BindingMode_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_Recentering_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_BlendHints_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLook_LegacyTransitionParams_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLook_Orbit_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalTransposer_Heading_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalTransposer_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__LegacyLensSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineFreeLook)
namespace GlobalNamespace {
struct CinemachineFreeLook_LegacyTransitionParams;
}
namespace GlobalNamespace {
struct CinemachineFreeLook_Orbit;
}
namespace GlobalNamespace {
struct CinemachineFreeLook___c__DisplayClass52_0;
}
namespace GlobalNamespace {
struct CinemachineFreeLook___c__DisplayClass52_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineBlend;
}
namespace Unity::Cinemachine {
class CinemachineFreeLook_CreateRigDelegate;
}
namespace Unity::Cinemachine {
class CinemachineFreeLook_DestroyRigDelegate;
}
namespace Unity::Cinemachine {
class CinemachineLegacyCameraEvents_OnCameraLiveEvent;
}
namespace Unity::Cinemachine {
class CinemachineOrbitalTransposer;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCamera;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
class ICinemachineMixer;
}
namespace UnityEngine {
class GameObject;
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
class CinemachineFreeLook;
}
namespace Unity::Cinemachine {
class CinemachineFreeLook_CreateRigDelegate;
}
namespace Unity::Cinemachine {
class CinemachineFreeLook_DestroyRigDelegate;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineFreeLook*);
MARK_REF_T(::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*);
MARK_REF_T(::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFreeLook*, "Unity.Cinemachine", "CinemachineFreeLook");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*, "Unity.Cinemachine", "CinemachineFreeLook/CreateRigDelegate");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*, "Unity.Cinemachine", "CinemachineFreeLook/DestroyRigDelegate");
// [Obsolete("This is deprecated. Use Create -> Cinemachine -> FreeLook camera, or create a CinemachineCamera with appropriate components")]
// [DisallowMultipleComponent]
// [ExecuteAlways]
// [ExcludeFromPreset]
// [AddComponentMenu("")]
// Dependencies Unity.Cinemachine.AxisState, Unity.Cinemachine.AxisState::Recentering, Unity.Cinemachine.CameraState, Unity.Cinemachine.CinemachineCore::BlendHints, Unity.Cinemachine.CinemachineFreeLook::LegacyTransitionParams, Unity.Cinemachine.CinemachineFreeLook::Orbit, Unity.Cinemachine.CinemachineOrbitalTransposer, Unity.Cinemachine.CinemachineOrbitalTransposer::Heading, Unity.Cinemachine.CinemachineVirtualCamera, Unity.Cinemachine.CinemachineVirtualCameraBase, Unity.Cinemachine.LegacyLensSettings, Unity.Cinemachine.LensSettings, Unity.Cinemachine.TargetTracking.BindingMode, UnityEngine.Vector4
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLook
class CORDL_TYPE CinemachineFreeLook : public ::Unity::Cinemachine::CinemachineVirtualCameraBase {
public:
// Declarations
using LegacyTransitionParams = ::GlobalNamespace::CinemachineFreeLook_LegacyTransitionParams;

using Orbit = ::GlobalNamespace::CinemachineFreeLook_Orbit;

using __c__DisplayClass52_0 = ::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0;

using __c__DisplayClass52_1 = ::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_1;

using CreateRigDelegate = ::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate;

using DestroyRigDelegate = ::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate;

/// @brief Field BlendHint, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_BlendHint, put=__cordl_internal_set_BlendHint)) ::GlobalNamespace::CinemachineCore_BlendHints  BlendHint;

/// @brief Field CreateRigOverride, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CreateRigOverride, put=setStaticF_CreateRigOverride)) ::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*  CreateRigOverride;

/// @brief Field DestroyRigOverride, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DestroyRigOverride, put=setStaticF_DestroyRigOverride)) ::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*  DestroyRigOverride;

 __declspec(property(get=get_Follow, put=set_Follow)) ::UnityW<::UnityEngine::Transform>  Follow;

 __declspec(property(get=get_IsDprecated)) bool  IsDprecated;

 __declspec(property(get=get_LookAt, put=set_LookAt)) ::UnityW<::UnityEngine::Transform>  LookAt;

 __declspec(property(get=get_PreviousStateIsValid, put=set_PreviousStateIsValid)) bool  PreviousStateIsValid;

 __declspec(property(get=get_RigsAreCreated)) bool  RigsAreCreated;

 __declspec(property(get=get_State)) ::Unity::Cinemachine::CameraState  State;

/// @brief Field mBlendA, offset 0x390, size 0x8 
 __declspec(property(get=__cordl_internal_get_mBlendA, put=__cordl_internal_set_mBlendA)) ::Unity::Cinemachine::CinemachineBlend*  mBlendA;

/// @brief Field mBlendB, offset 0x398, size 0x8 
 __declspec(property(get=__cordl_internal_get_mBlendB, put=__cordl_internal_set_mBlendB)) ::Unity::Cinemachine::CinemachineBlend*  mBlendB;

/// @brief Field mIsDestroyed, offset 0x268, size 0x1 
 __declspec(property(get=__cordl_internal_get_mIsDestroyed, put=__cordl_internal_set_mIsDestroyed)) bool  mIsDestroyed;

/// @brief Field mOrbitals, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_mOrbitals, put=__cordl_internal_set_mOrbitals)) ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineOrbitalTransposer>>  mOrbitals;

/// @brief Field mUseLegacyRigDefinitions, offset 0x254, size 0x1 
 __declspec(property(get=__cordl_internal_get_mUseLegacyRigDefinitions, put=__cordl_internal_set_mUseLegacyRigDefinitions)) bool  mUseLegacyRigDefinitions;

/// @brief Field m_BindingMode, offset 0x23c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BindingMode, put=__cordl_internal_set_m_BindingMode)) ::Unity::Cinemachine::TargetTracking::BindingMode  m_BindingMode;

/// @brief Field m_CachedCtrl1, offset 0x418, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedCtrl1, put=__cordl_internal_set_m_CachedCtrl1)) ::ArrayW<::UnityEngine::Vector4>  m_CachedCtrl1;

/// @brief Field m_CachedCtrl2, offset 0x420, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedCtrl2, put=__cordl_internal_set_m_CachedCtrl2)) ::ArrayW<::UnityEngine::Vector4>  m_CachedCtrl2;

/// @brief Field m_CachedKnots, offset 0x410, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedKnots, put=__cordl_internal_set_m_CachedKnots)) ::ArrayW<::UnityEngine::Vector4>  m_CachedKnots;

/// @brief Field m_CachedOrbits, offset 0x400, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedOrbits, put=__cordl_internal_set_m_CachedOrbits)) ::ArrayW<::GlobalNamespace::CinemachineFreeLook_Orbit>  m_CachedOrbits;

/// @brief Field m_CachedTension, offset 0x408, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CachedTension, put=__cordl_internal_set_m_CachedTension)) float_t  m_CachedTension;

/// @brief Field m_CachedXAxisHeading, offset 0x3a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CachedXAxisHeading, put=__cordl_internal_set_m_CachedXAxisHeading)) float_t  m_CachedXAxisHeading;

/// @brief Field m_CommonLens, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CommonLens, put=__cordl_internal_set_m_CommonLens)) bool  m_CommonLens;

/// @brief Field m_Follow, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Follow, put=__cordl_internal_set_m_Follow)) ::UnityW<::UnityEngine::Transform>  m_Follow;

/// @brief Field m_Heading, offset 0x210, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Heading, put=__cordl_internal_set_m_Heading)) ::GlobalNamespace::CinemachineOrbitalTransposer_Heading  m_Heading;

/// @brief Field m_LastHeadingUpdateFrame, offset 0x3a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastHeadingUpdateFrame, put=__cordl_internal_set_m_LastHeadingUpdateFrame)) float_t  m_LastHeadingUpdateFrame;

/// @brief Field m_LegacyHeadingBias, offset 0x250, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LegacyHeadingBias, put=__cordl_internal_set_m_LegacyHeadingBias)) float_t  m_LegacyHeadingBias;

/// @brief Field m_LegacyTransitions, offset 0x258, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_LegacyTransitions, put=__cordl_internal_set_m_LegacyTransitions)) ::GlobalNamespace::CinemachineFreeLook_LegacyTransitionParams  m_LegacyTransitions;

/// @brief Field m_Lens, offset 0xb4, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_Lens, put=__cordl_internal_set_m_Lens)) ::Unity::Cinemachine::LegacyLensSettings  m_Lens;

/// @brief Field m_LensSettings, offset 0x3a8, size 0x58 
 __declspec(property(get=__cordl_internal_get_m_LensSettings, put=__cordl_internal_set_m_LensSettings)) ::Unity::Cinemachine::LensSettings  m_LensSettings;

/// @brief Field m_LookAt, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LookAt, put=__cordl_internal_set_m_LookAt)) ::UnityW<::UnityEngine::Transform>  m_LookAt;

/// @brief Field m_OnCameraLiveEvent, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnCameraLiveEvent, put=__cordl_internal_set_m_OnCameraLiveEvent)) ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*  m_OnCameraLiveEvent;

/// @brief Field m_Orbits, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Orbits, put=__cordl_internal_set_m_Orbits)) ::ArrayW<::GlobalNamespace::CinemachineFreeLook_Orbit>  m_Orbits;

/// @brief Field m_RecenterToTargetHeading, offset 0x21c, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_RecenterToTargetHeading, put=__cordl_internal_set_m_RecenterToTargetHeading)) ::GlobalNamespace::AxisState_Recentering  m_RecenterToTargetHeading;

/// @brief Field m_Rigs, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Rigs, put=__cordl_internal_set_m_Rigs)) ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>>  m_Rigs;

/// @brief Field m_SplineCurvature, offset 0x240, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SplineCurvature, put=__cordl_internal_set_m_SplineCurvature)) float_t  m_SplineCurvature;

/// @brief Field m_State, offset 0x270, size 0x110 
 __declspec(property(get=__cordl_internal_get_m_State, put=__cordl_internal_set_m_State)) ::Unity::Cinemachine::CameraState  m_State;

/// @brief Field m_XAxis, offset 0x1a0, size 0x70 
 __declspec(property(get=__cordl_internal_get_m_XAxis, put=__cordl_internal_set_m_XAxis)) ::Unity::Cinemachine::AxisState  m_XAxis;

/// @brief Field m_YAxis, offset 0x110, size 0x70 
 __declspec(property(get=__cordl_internal_get_m_YAxis, put=__cordl_internal_set_m_YAxis)) ::Unity::Cinemachine::AxisState  m_YAxis;

/// @brief Field m_YAxisRecentering, offset 0x180, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_YAxisRecentering, put=__cordl_internal_set_m_YAxisRecentering)) ::GlobalNamespace::AxisState_Recentering  m_YAxisRecentering;

/// @brief Convert operator to "::Unity::Cinemachine::AxisState_IRequiresInput"
constexpr operator  ::Unity::Cinemachine::AxisState_IRequiresInput*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineCamera"
constexpr operator  ::Unity::Cinemachine::ICinemachineCamera*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineMixer"
constexpr operator  ::Unity::Cinemachine::ICinemachineMixer*() noexcept;

/// @brief Method CalculateNewState, addr 0xaed02e0, size 0x178, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CameraState CalculateNewState(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method CreateRigs, addr 0xaed0ac0, size 0x8d0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>> CreateRigs(::ArrayW<::Unity::Cinemachine::CinemachineVirtualCamera*>  copyFrom) ;

/// @brief Method DestroyRigs, addr 0xaeceb94, size 0x6bc, virtual false, abstract: false, final false
inline void DestroyRigs() ;

/// @brief Method ForceCameraPosition, addr 0xaecf560, size 0x220, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetLocalPositionForCameraFromInput, addr 0xaed1b68, size 0x124, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLocalPositionForCameraFromInput(float_t  t) ;

/// @brief Method GetRig, addr 0xaece094, size 0x58, virtual false, abstract: false, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera> GetRig(int32_t  i) ;

/// @brief Method GetYAxisClosestValue, addr 0xaecf780, size 0x3c4, virtual false, abstract: false, final false
inline float_t GetYAxisClosestValue(::UnityEngine::Vector3  cameraPos, ::UnityEngine::Vector3  up) ;

/// @brief Method GetYAxisValue, addr 0xaecf474, size 0x2c, virtual false, abstract: false, final false
inline float_t GetYAxisValue() ;

/// @brief Method InternalUpdateCameraState, addr 0xaecff68, size 0x378, virtual true, abstract: false, final false
inline void InternalUpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method InvalidateRigCache, addr 0xaece080, size 0x14, virtual false, abstract: false, final false
inline void InvalidateRigCache() ;

/// @brief Method IsLiveChild, addr 0xaecf380, size 0xf4, virtual true, abstract: false, final true
inline bool IsLiveChild(::Unity::Cinemachine::ICinemachineCamera*  vcam, bool  dominantChildOnly) ;

/// @brief Method LocateExistingRigs, addr 0xaed1390, size 0x5f0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>>* LocateExistingRigs(bool  forceOrbital) ;

static inline ::Unity::Cinemachine::CinemachineFreeLook* New_ctor() ;

/// @brief Method OnDestroy, addr 0xaecea28, size 0x130, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0xaece948, size 0x30, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTargetObjectWarped, addr 0xaecf4a0, size 0xc0, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnTransformChildrenChanged, addr 0xaeceb58, size 0x14, virtual false, abstract: false, final false
inline void OnTransformChildrenChanged() ;

/// @brief Method OnTransitionFromCamera, addr 0xaed0458, size 0x370, virtual true, abstract: false, final false
inline void OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method OnValidate, addr 0xaece024, size 0x5c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PerformLegacyUpgrade, addr 0xaecdf38, size 0xe4, virtual true, abstract: false, final false
inline void PerformLegacyUpgrade(int32_t  streamedVersion) ;

/// @brief Method PushSettingsToRigs, addr 0xaecfb44, size 0x424, virtual false, abstract: false, final false
inline void PushSettingsToRigs() ;

/// @brief Method Reset, addr 0xaeceb6c, size 0x28, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SteepestDescent, addr 0xaed07d0, size 0x120, virtual false, abstract: false, final false
inline float_t SteepestDescent(::UnityEngine::Vector3  cameraOffset) ;

/// @brief Method Unity.Cinemachine.AxisState.IRequiresInput.RequiresInput, addr 0xaed07c8, size 0x8, virtual true, abstract: false, final true
inline bool Unity_Cinemachine_AxisState_IRequiresInput_RequiresInput() ;

/// @brief Method UpdateCachedSpline, addr 0xaed1c8c, size 0x35c, virtual false, abstract: false, final false
inline void UpdateCachedSpline() ;

/// @brief Method UpdateInputAxisProvider, addr 0xaece978, size 0xb0, virtual false, abstract: false, final false
inline void UpdateInputAxisProvider() ;

/// @brief Method UpdateRigCache, addr 0xaece0ec, size 0x74c, virtual false, abstract: false, final false
inline bool UpdateRigCache() ;

/// @brief Method UpdateXAxisHeading, addr 0xaed1980, size 0x1e8, virtual false, abstract: false, final false
inline float_t UpdateXAxisHeading(::Unity::Cinemachine::CinemachineOrbitalTransposer*  orbital, float_t  deltaTime, ::UnityEngine::Vector3  up) ;

/// [CompilerGenerated]
/// @brief Method <SteepestDescent>g__AngleFunction|52_0, addr 0xaed09a8, size 0xb0, virtual false, abstract: false, final false
inline float_t _SteepestDescent_g__AngleFunction_52_0(float_t  input, ::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <SteepestDescent>g__ChooseBestAngle|52_3, addr 0xaed236c, size 0x30, virtual false, abstract: false, final false
inline void _SteepestDescent_g__ChooseBestAngle_52_3(float_t  x, ::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>  _cordl_fixed_empty_name_whitespace, ::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_1>  _cordl_fixed_empty_name_whitespace_param_2) ;

/// [CompilerGenerated]
/// @brief Method <SteepestDescent>g__InitialGuess|52_2, addr 0xaed08f0, size 0xb8, virtual false, abstract: false, final false
inline float_t _SteepestDescent_g__InitialGuess_52_2(::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <SteepestDescent>g__SlopeOfAngleFunction|52_1, addr 0xaed0a58, size 0x68, virtual false, abstract: false, final false
inline float_t _SteepestDescent_g__SlopeOfAngleFunction_52_1(float_t  input, ::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::GlobalNamespace::CinemachineCore_BlendHints const& __cordl_internal_get_BlendHint() const;

constexpr ::GlobalNamespace::CinemachineCore_BlendHints& __cordl_internal_get_BlendHint() ;

constexpr ::Unity::Cinemachine::CinemachineBlend* const& __cordl_internal_get_mBlendA() const;

constexpr ::Unity::Cinemachine::CinemachineBlend*& __cordl_internal_get_mBlendA() ;

constexpr ::Unity::Cinemachine::CinemachineBlend* const& __cordl_internal_get_mBlendB() const;

constexpr ::Unity::Cinemachine::CinemachineBlend*& __cordl_internal_get_mBlendB() ;

constexpr bool const& __cordl_internal_get_mIsDestroyed() const;

constexpr bool& __cordl_internal_get_mIsDestroyed() ;

constexpr ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineOrbitalTransposer>> const& __cordl_internal_get_mOrbitals() const;

constexpr ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineOrbitalTransposer>>& __cordl_internal_get_mOrbitals() ;

constexpr bool const& __cordl_internal_get_mUseLegacyRigDefinitions() const;

constexpr bool& __cordl_internal_get_mUseLegacyRigDefinitions() ;

constexpr ::Unity::Cinemachine::TargetTracking::BindingMode const& __cordl_internal_get_m_BindingMode() const;

constexpr ::Unity::Cinemachine::TargetTracking::BindingMode& __cordl_internal_get_m_BindingMode() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_m_CachedCtrl1() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_m_CachedCtrl1() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_m_CachedCtrl2() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_m_CachedCtrl2() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_m_CachedKnots() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_m_CachedKnots() ;

constexpr ::ArrayW<::GlobalNamespace::CinemachineFreeLook_Orbit> const& __cordl_internal_get_m_CachedOrbits() const;

constexpr ::ArrayW<::GlobalNamespace::CinemachineFreeLook_Orbit>& __cordl_internal_get_m_CachedOrbits() ;

constexpr float_t const& __cordl_internal_get_m_CachedTension() const;

constexpr float_t& __cordl_internal_get_m_CachedTension() ;

constexpr float_t const& __cordl_internal_get_m_CachedXAxisHeading() const;

constexpr float_t& __cordl_internal_get_m_CachedXAxisHeading() ;

constexpr bool const& __cordl_internal_get_m_CommonLens() const;

constexpr bool& __cordl_internal_get_m_CommonLens() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_Follow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_Follow() ;

constexpr ::GlobalNamespace::CinemachineOrbitalTransposer_Heading const& __cordl_internal_get_m_Heading() const;

constexpr ::GlobalNamespace::CinemachineOrbitalTransposer_Heading& __cordl_internal_get_m_Heading() ;

constexpr float_t const& __cordl_internal_get_m_LastHeadingUpdateFrame() const;

constexpr float_t& __cordl_internal_get_m_LastHeadingUpdateFrame() ;

constexpr float_t const& __cordl_internal_get_m_LegacyHeadingBias() const;

constexpr float_t& __cordl_internal_get_m_LegacyHeadingBias() ;

constexpr ::GlobalNamespace::CinemachineFreeLook_LegacyTransitionParams const& __cordl_internal_get_m_LegacyTransitions() const;

constexpr ::GlobalNamespace::CinemachineFreeLook_LegacyTransitionParams& __cordl_internal_get_m_LegacyTransitions() ;

constexpr ::Unity::Cinemachine::LegacyLensSettings const& __cordl_internal_get_m_Lens() const;

constexpr ::Unity::Cinemachine::LegacyLensSettings& __cordl_internal_get_m_Lens() ;

constexpr ::Unity::Cinemachine::LensSettings const& __cordl_internal_get_m_LensSettings() const;

constexpr ::Unity::Cinemachine::LensSettings& __cordl_internal_get_m_LensSettings() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_LookAt() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_LookAt() ;

constexpr ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent* const& __cordl_internal_get_m_OnCameraLiveEvent() const;

constexpr ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*& __cordl_internal_get_m_OnCameraLiveEvent() ;

constexpr ::ArrayW<::GlobalNamespace::CinemachineFreeLook_Orbit> const& __cordl_internal_get_m_Orbits() const;

constexpr ::ArrayW<::GlobalNamespace::CinemachineFreeLook_Orbit>& __cordl_internal_get_m_Orbits() ;

constexpr ::GlobalNamespace::AxisState_Recentering const& __cordl_internal_get_m_RecenterToTargetHeading() const;

constexpr ::GlobalNamespace::AxisState_Recentering& __cordl_internal_get_m_RecenterToTargetHeading() ;

constexpr ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>> const& __cordl_internal_get_m_Rigs() const;

constexpr ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>>& __cordl_internal_get_m_Rigs() ;

constexpr float_t const& __cordl_internal_get_m_SplineCurvature() const;

constexpr float_t& __cordl_internal_get_m_SplineCurvature() ;

constexpr ::Unity::Cinemachine::CameraState const& __cordl_internal_get_m_State() const;

constexpr ::Unity::Cinemachine::CameraState& __cordl_internal_get_m_State() ;

constexpr ::Unity::Cinemachine::AxisState const& __cordl_internal_get_m_XAxis() const;

constexpr ::Unity::Cinemachine::AxisState& __cordl_internal_get_m_XAxis() ;

constexpr ::Unity::Cinemachine::AxisState const& __cordl_internal_get_m_YAxis() const;

constexpr ::Unity::Cinemachine::AxisState& __cordl_internal_get_m_YAxis() ;

constexpr ::GlobalNamespace::AxisState_Recentering const& __cordl_internal_get_m_YAxisRecentering() const;

constexpr ::GlobalNamespace::AxisState_Recentering& __cordl_internal_get_m_YAxisRecentering() ;

constexpr void __cordl_internal_set_BlendHint(::GlobalNamespace::CinemachineCore_BlendHints  value) ;

constexpr void __cordl_internal_set_mBlendA(::Unity::Cinemachine::CinemachineBlend*  value) ;

constexpr void __cordl_internal_set_mBlendB(::Unity::Cinemachine::CinemachineBlend*  value) ;

constexpr void __cordl_internal_set_mIsDestroyed(bool  value) ;

constexpr void __cordl_internal_set_mOrbitals(::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineOrbitalTransposer>>  value) ;

constexpr void __cordl_internal_set_mUseLegacyRigDefinitions(bool  value) ;

constexpr void __cordl_internal_set_m_BindingMode(::Unity::Cinemachine::TargetTracking::BindingMode  value) ;

constexpr void __cordl_internal_set_m_CachedCtrl1(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set_m_CachedCtrl2(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set_m_CachedKnots(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set_m_CachedOrbits(::ArrayW<::GlobalNamespace::CinemachineFreeLook_Orbit>  value) ;

constexpr void __cordl_internal_set_m_CachedTension(float_t  value) ;

constexpr void __cordl_internal_set_m_CachedXAxisHeading(float_t  value) ;

constexpr void __cordl_internal_set_m_CommonLens(bool  value) ;

constexpr void __cordl_internal_set_m_Follow(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_Heading(::GlobalNamespace::CinemachineOrbitalTransposer_Heading  value) ;

constexpr void __cordl_internal_set_m_LastHeadingUpdateFrame(float_t  value) ;

constexpr void __cordl_internal_set_m_LegacyHeadingBias(float_t  value) ;

constexpr void __cordl_internal_set_m_LegacyTransitions(::GlobalNamespace::CinemachineFreeLook_LegacyTransitionParams  value) ;

constexpr void __cordl_internal_set_m_Lens(::Unity::Cinemachine::LegacyLensSettings  value) ;

constexpr void __cordl_internal_set_m_LensSettings(::Unity::Cinemachine::LensSettings  value) ;

constexpr void __cordl_internal_set_m_LookAt(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_OnCameraLiveEvent(::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*  value) ;

constexpr void __cordl_internal_set_m_Orbits(::ArrayW<::GlobalNamespace::CinemachineFreeLook_Orbit>  value) ;

constexpr void __cordl_internal_set_m_RecenterToTargetHeading(::GlobalNamespace::AxisState_Recentering  value) ;

constexpr void __cordl_internal_set_m_Rigs(::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>>  value) ;

constexpr void __cordl_internal_set_m_SplineCurvature(float_t  value) ;

constexpr void __cordl_internal_set_m_State(::Unity::Cinemachine::CameraState  value) ;

constexpr void __cordl_internal_set_m_XAxis(::Unity::Cinemachine::AxisState  value) ;

constexpr void __cordl_internal_set_m_YAxis(::Unity::Cinemachine::AxisState  value) ;

constexpr void __cordl_internal_set_m_YAxisRecentering(::GlobalNamespace::AxisState_Recentering  value) ;

/// @brief Method .ctor, addr 0xaed1fe8, size 0x384, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate* getStaticF_CreateRigOverride() ;

static inline ::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate* getStaticF_DestroyRigOverride() ;

/// @brief Method get_Follow, addr 0xaecf36c, size 0xc, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Follow() ;

/// @brief Method get_IsDprecated, addr 0xaece01c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsDprecated() ;

/// @brief Method get_LookAt, addr 0xaecf358, size 0xc, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_LookAt() ;

/// @brief Method get_PreviousStateIsValid, addr 0xaecf250, size 0x8, virtual true, abstract: false, final false
inline bool get_PreviousStateIsValid() ;

/// @brief Method get_RigNames, addr 0xaece858, size 0xf0, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> get_RigNames() ;

/// @brief Method get_RigsAreCreated, addr 0xaece838, size 0x20, virtual false, abstract: false, final false
inline bool get_RigsAreCreated() ;

/// @brief Method get_State, addr 0xaecf348, size 0x10, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::CameraState get_State() ;

/// @brief Convert to "::Unity::Cinemachine::AxisState_IRequiresInput"
constexpr ::Unity::Cinemachine::AxisState_IRequiresInput* i___Unity__Cinemachine__AxisState_IRequiresInput() noexcept;

/// @brief Convert to "::Unity::Cinemachine::ICinemachineCamera"
constexpr ::Unity::Cinemachine::ICinemachineCamera* i___Unity__Cinemachine__ICinemachineCamera() noexcept;

/// @brief Convert to "::Unity::Cinemachine::ICinemachineMixer"
constexpr ::Unity::Cinemachine::ICinemachineMixer* i___Unity__Cinemachine__ICinemachineMixer() noexcept;

static inline void setStaticF_CreateRigOverride(::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*  value) ;

static inline void setStaticF_DestroyRigOverride(::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*  value) ;

/// @brief Method set_Follow, addr 0xaecf378, size 0x8, virtual true, abstract: false, final false
inline void set_Follow(::UnityEngine::Transform*  value) ;

/// @brief Method set_LookAt, addr 0xaecf364, size 0x8, virtual true, abstract: false, final false
inline void set_LookAt(::UnityEngine::Transform*  value) ;

/// @brief Method set_PreviousStateIsValid, addr 0xaecf258, size 0xf0, virtual true, abstract: false, final false
inline void set_PreviousStateIsValid(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFreeLook() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLook", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFreeLook(CinemachineFreeLook && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLook", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLook(CinemachineFreeLook const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22411};

/// [Tooltip("Object for the camera children to look at (the aim target).")]
/// [NoSaveDuringPlay]
/// [VcamTargetProperty]
/// @brief Field m_LookAt, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_LookAt;

/// [Tooltip("Object for the camera children wants to move with (the body target).")]
/// [NoSaveDuringPlay]
/// [VcamTargetProperty]
/// @brief Field m_Follow, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_Follow;

/// [Tooltip("If enabled, this lens setting will apply to all three child rigs, otherwise the child rig lens settings will be used")]
/// [FormerlySerializedAs("m_UseCommonLensSetting")]
/// @brief Field m_CommonLens, offset: 0xb0, size: 0x1, def value: None
 bool  ___m_CommonLens;

/// [Tooltip("Specifies the lens properties of this Virtual Camera.  This generally mirrors the Unity Camera\'s lens settings, and will be used to drive the Unity camera when the vcam is active")]
/// [FormerlySerializedAs("m_LensAttributes")]
/// @brief Field m_Lens, offset: 0xb4, size: 0x50, def value: None
 ::Unity::Cinemachine::LegacyLensSettings  ___m_Lens;

/// [Tooltip("Hint for transitioning to and from this CinemachineCamera.  Hints can be combined, although not all combinations make sense.  In the case of conflicting hints, Cinemachine will make an arbitrary choice.")]
/// @brief Field BlendHint, offset: 0x104, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineCore_BlendHints  ___BlendHint;

/// [Tooltip("This event fires when a transition occurs")]
/// @brief Field m_OnCameraLiveEvent, offset: 0x108, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*  ___m_OnCameraLiveEvent;

/// [Header("Axis Control")]
/// [Tooltip("The Vertical axis.  Value is 0..1.  Chooses how to blend the child rigs")]
/// @brief Field m_YAxis, offset: 0x110, size: 0x70, def value: None
 ::Unity::Cinemachine::AxisState  ___m_YAxis;

/// [Tooltip("Controls how automatic recentering of the Y axis is accomplished")]
/// @brief Field m_YAxisRecentering, offset: 0x180, size: 0x20, def value: None
 ::GlobalNamespace::AxisState_Recentering  ___m_YAxisRecentering;

/// [Tooltip("The Horizontal axis.  Value is -180...180.  This is passed on to the rigs\' OrbitalTransposer component")]
/// @brief Field m_XAxis, offset: 0x1a0, size: 0x70, def value: None
 ::Unity::Cinemachine::AxisState  ___m_XAxis;

/// [Tooltip("The definition of Forward.  Camera will follow behind.")]
/// @brief Field m_Heading, offset: 0x210, size: 0xc, def value: None
 ::GlobalNamespace::CinemachineOrbitalTransposer_Heading  ___m_Heading;

/// [Tooltip("Controls how automatic recentering of the X axis is accomplished")]
/// @brief Field m_RecenterToTargetHeading, offset: 0x21c, size: 0x20, def value: None
 ::GlobalNamespace::AxisState_Recentering  ___m_RecenterToTargetHeading;

/// [Header("Orbits")]
/// [Tooltip("The coordinate space to use when interpreting the offset from the target.  This is also used to set the camera\'s Up vector, which will be maintained when aiming the camera.")]
/// @brief Field m_BindingMode, offset: 0x23c, size: 0x4, def value: None
 ::Unity::Cinemachine::TargetTracking::BindingMode  ___m_BindingMode;

/// [Tooltip("Controls how taut is the line that connects the rigs\' orbits, which determines final placement on the Y axis")]
/// [Range(0, 1)]
/// [FormerlySerializedAs("m_SplineTension")]
/// @brief Field m_SplineCurvature, offset: 0x240, size: 0x4, def value: None
 float_t  ___m_SplineCurvature;

/// [Tooltip("The radius and height of the three orbiting rigs.")]
/// @brief Field m_Orbits, offset: 0x248, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CinemachineFreeLook_Orbit>  ___m_Orbits;

/// [SerializeField]
/// [HideInInspector]
/// [FormerlySerializedAs("m_HeadingBias")]
/// @brief Field m_LegacyHeadingBias, offset: 0x250, size: 0x4, def value: None
 float_t  ___m_LegacyHeadingBias;

/// @brief Field mUseLegacyRigDefinitions, offset: 0x254, size: 0x1, def value: None
 bool  ___mUseLegacyRigDefinitions;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_LegacyTransitions, offset: 0x258, size: 0x10, def value: None
 ::GlobalNamespace::CinemachineFreeLook_LegacyTransitionParams  ___m_LegacyTransitions;

/// @brief Field mIsDestroyed, offset: 0x268, size: 0x1, def value: None
 bool  ___mIsDestroyed;

/// @brief Field m_State, offset: 0x270, size: 0x110, def value: None
 ::Unity::Cinemachine::CameraState  ___m_State;

/// [SerializeField]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// @brief Field m_Rigs, offset: 0x380, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>>  ___m_Rigs;

/// @brief Field mOrbitals, offset: 0x388, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineOrbitalTransposer>>  ___mOrbitals;

/// @brief Field mBlendA, offset: 0x390, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineBlend*  ___mBlendA;

/// @brief Field mBlendB, offset: 0x398, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineBlend*  ___mBlendB;

/// @brief Field m_CachedXAxisHeading, offset: 0x3a0, size: 0x4, def value: None
 float_t  ___m_CachedXAxisHeading;

/// @brief Field m_LastHeadingUpdateFrame, offset: 0x3a4, size: 0x4, def value: None
 float_t  ___m_LastHeadingUpdateFrame;

/// @brief Field m_LensSettings, offset: 0x3a8, size: 0x58, def value: None
 ::Unity::Cinemachine::LensSettings  ___m_LensSettings;

/// @brief Field m_CachedOrbits, offset: 0x400, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CinemachineFreeLook_Orbit>  ___m_CachedOrbits;

/// @brief Field m_CachedTension, offset: 0x408, size: 0x4, def value: None
 float_t  ___m_CachedTension;

/// @brief Field m_CachedKnots, offset: 0x410, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ___m_CachedKnots;

/// @brief Field m_CachedCtrl1, offset: 0x418, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ___m_CachedCtrl1;

/// @brief Field m_CachedCtrl2, offset: 0x420, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ___m_CachedCtrl2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_LookAt) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_Follow) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_CommonLens) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_Lens) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___BlendHint) == 0x104, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_OnCameraLiveEvent) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_YAxis) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_YAxisRecentering) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_XAxis) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_Heading) == 0x210, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_RecenterToTargetHeading) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_BindingMode) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_SplineCurvature) == 0x240, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_Orbits) == 0x248, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_LegacyHeadingBias) == 0x250, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___mUseLegacyRigDefinitions) == 0x254, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_LegacyTransitions) == 0x258, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___mIsDestroyed) == 0x268, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_State) == 0x270, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_Rigs) == 0x380, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___mOrbitals) == 0x388, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___mBlendA) == 0x390, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___mBlendB) == 0x398, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_CachedXAxisHeading) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_LastHeadingUpdateFrame) == 0x3a4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_LensSettings) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_CachedOrbits) == 0x400, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_CachedTension) == 0x408, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_CachedKnots) == 0x410, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_CachedCtrl1) == 0x418, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLook, ___m_CachedCtrl2) == 0x420, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineFreeLook) == 0x428, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.MulticastDelegate
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLook/DestroyRigDelegate
class CORDL_TYPE CinemachineFreeLook_DestroyRigDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xaed25c8, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject*  rig, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xaed25e8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xaed25b4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::GameObject*  rig) ;

static inline ::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xaed2504, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFreeLook_DestroyRigDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLook_DestroyRigDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFreeLook_DestroyRigDelegate(CinemachineFreeLook_DestroyRigDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLook_DestroyRigDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLook_DestroyRigDelegate(CinemachineFreeLook_DestroyRigDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22408};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.MulticastDelegate
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLook/CreateRigDelegate
class CORDL_TYPE CinemachineFreeLook_CreateRigDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xaed24c4, size 0x34, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Unity::Cinemachine::CinemachineFreeLook*  vcam, ::StringW  name, ::Unity::Cinemachine::CinemachineVirtualCamera*  copyFrom, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xaed24f8, size 0xc, virtual true, abstract: false, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera> EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xaed24b0, size 0x14, virtual true, abstract: false, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera> Invoke(::Unity::Cinemachine::CinemachineFreeLook*  vcam, ::StringW  name, ::Unity::Cinemachine::CinemachineVirtualCamera*  copyFrom) ;

static inline ::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xaed23a4, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFreeLook_CreateRigDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLook_CreateRigDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFreeLook_CreateRigDelegate(CinemachineFreeLook_CreateRigDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLook_CreateRigDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLook_CreateRigDelegate(CinemachineFreeLook_CreateRigDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22407};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine

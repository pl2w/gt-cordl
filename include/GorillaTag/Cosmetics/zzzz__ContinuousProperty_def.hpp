#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_EventMode_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_InterpolationMode_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_RotationAxis_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_ThresholdOption_def.hpp"
#include "GorillaTag/zzzz__XformOffset_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemStopBehavior_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxCurve_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ContinuousProperty)
namespace GlobalNamespace {
class BezierCurve;
}
namespace GlobalNamespace {
struct ContinuousProperty_Cast;
}
namespace GlobalNamespace {
struct ContinuousProperty_DataFlags;
}
namespace GlobalNamespace {
struct ContinuousProperty_EventMode;
}
namespace GlobalNamespace {
struct ContinuousProperty_InterpolationMode;
}
namespace GlobalNamespace {
struct ContinuousProperty_RotationAxis;
}
namespace GlobalNamespace {
struct ContinuousProperty_ThresholdOption;
}
namespace GlobalNamespace {
struct ContinuousProperty_ThresholdResult;
}
namespace GlobalNamespace {
struct ContinuousProperty_Type;
}
namespace GlobalNamespace {
struct ParticleSystem_MinMaxCurve;
}
namespace GorillaTag::Cosmetics {
class ContinuousPropertyModeSO;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class ContinuousProperty;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ContinuousProperty*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ContinuousProperty*, "GorillaTag.Cosmetics", "ContinuousProperty");
// Dependencies GorillaTag.Cosmetics.ContinuousProperty::EventMode, GorillaTag.Cosmetics.ContinuousProperty::InterpolationMode, GorillaTag.Cosmetics.ContinuousProperty::RotationAxis, GorillaTag.Cosmetics.ContinuousProperty::ThresholdOption, GorillaTag.XformOffset, System.Object, UnityEngine.ParticleSystem::EmissionModule, UnityEngine.ParticleSystem::MainModule, UnityEngine.ParticleSystem::MinMaxCurve, UnityEngine.ParticleSystemStopBehavior, UnityEngine.Vector2
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ContinuousProperty
class CORDL_TYPE ContinuousProperty : public ::System::Object {
public:
// Declarations
using Cast = ::GlobalNamespace::ContinuousProperty_Cast;

using DataFlags = ::GlobalNamespace::ContinuousProperty_DataFlags;

using EventMode = ::GlobalNamespace::ContinuousProperty_EventMode;

using InterpolationMode = ::GlobalNamespace::ContinuousProperty_InterpolationMode;

using RotationAxis = ::GlobalNamespace::ContinuousProperty_RotationAxis;

using ThresholdOption = ::GlobalNamespace::ContinuousProperty_ThresholdOption;

using ThresholdResult = ::GlobalNamespace::ContinuousProperty_ThresholdResult;

using Type = ::GlobalNamespace::ContinuousProperty_Type;

 __declspec(property(get=get_AxisError)) bool  AxisError;

 __declspec(property(get=get_HasAxisMode)) bool  HasAxisMode;

 __declspec(property(get=get_HasBezier)) bool  HasBezier;

 __declspec(property(get=get_HasCurve)) bool  HasCurve;

 __declspec(property(get=get_HasEventMode)) bool  HasEventMode;

 __declspec(property(get=get_HasGradient)) bool  HasGradient;

 __declspec(property(get=get_HasInt)) bool  HasInt;

 __declspec(property(get=get_HasInterpolationMode)) bool  HasInterpolationMode;

 __declspec(property(get=get_HasOffsets)) bool  HasOffsets;

 __declspec(property(get=get_HasStopAction)) bool  HasStopAction;

 __declspec(property(get=get_HasString)) bool  HasString;

 __declspec(property(get=get_HasTarget)) bool  HasTarget;

 __declspec(property(get=get_HasThreshold)) bool  HasThreshold;

 __declspec(property(get=get_HasUnityEvent)) bool  HasUnityEvent;

 __declspec(property(get=get_HasXforms)) bool  HasXforms;

 __declspec(property(get=get_IntValue)) int32_t  IntValue;

 __declspec(property(get=get_InterpolationError)) bool  InterpolationError;

 __declspec(property(get=get_IsShaderProperty_Cached, put=set_IsShaderProperty_Cached)) bool  IsShaderProperty_Cached;

 __declspec(property(get=get_MissingBezier)) bool  MissingBezier;

 __declspec(property(get=get_MissingXforms)) bool  MissingXforms;

 __declspec(property(get=get_Mode)) ::UnityW<::GorillaTag::Cosmetics::ContinuousPropertyModeSO>  Mode;

 __declspec(property(get=get_ModeErrorMessage)) ::StringW  ModeErrorMessage;

 __declspec(property(get=get_ModeErrorVisible)) bool  ModeErrorVisible;

 __declspec(property(get=get_ModeInfoVisible)) bool  ModeInfoVisible;

 __declspec(property(get=get_ModeTooltip)) ::StringW  ModeTooltip;

 __declspec(property(get=get_MyType)) ::GlobalNamespace::ContinuousProperty_Type  MyType;

 __declspec(property(get=get_RunOnlyLocally)) bool  RunOnlyLocally;

 __declspec(property(get=get_ShiftButtonsVisible)) bool  ShiftButtonsVisible;

 __declspec(property(get=get_StringValue)) ::StringW  StringValue;

 __declspec(property(get=get_Target)) ::UnityW<::UnityEngine::Object>  Target;

 __declspec(property(get=get_TargetInfoVisible)) bool  TargetInfoVisible;

 __declspec(property(get=get_TargetTooltip)) ::StringW  TargetTooltip;

 __declspec(property(get=get_ThresholdError)) bool  ThresholdError;

 __declspec(property(get=get_ThresholdErrorMessage)) ::StringW  ThresholdErrorMessage;

 __declspec(property(get=get_ThresholdTooltip)) ::StringW  ThresholdTooltip;

 __declspec(property(get=get_UsesThreshold_Cached, put=set_UsesThreshold_Cached)) bool  UsesThreshold_Cached;

/// @brief Field <IsShaderProperty_Cached>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsShaderProperty_Cached_k__BackingField, put=__cordl_internal_set__IsShaderProperty_Cached_k__BackingField)) bool  _IsShaderProperty_Cached_k__BackingField;

/// @brief Field <UsesThreshold_Cached>k__BackingField, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__UsesThreshold_Cached_k__BackingField, put=__cordl_internal_set__UsesThreshold_Cached_k__BackingField)) bool  _UsesThreshold_Cached_k__BackingField;

/// @brief Field bezierCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_bezierCurve, put=__cordl_internal_set_bezierCurve)) ::UnityW<::GlobalNamespace::BezierCurve>  bezierCurve;

/// @brief Field color, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Gradient*  color;

/// @brief Field curve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_curve, put=__cordl_internal_set_curve)) ::UnityEngine::AnimationCurve*  curve;

/// @brief Field eventMode, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_eventMode, put=__cordl_internal_set_eventMode)) ::GlobalNamespace::ContinuousProperty_EventMode  eventMode;

/// @brief Field frequencyTimer, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_frequencyTimer, put=__cordl_internal_set_frequencyTimer)) float_t  frequencyTimer;

/// @brief Field intValue, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_intValue, put=__cordl_internal_set_intValue)) int32_t  intValue;

/// @brief Field internalSwitchValue, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_internalSwitchValue, put=__cordl_internal_set_internalSwitchValue)) int32_t  internalSwitchValue;

/// @brief Field interpolationMode, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_interpolationMode, put=__cordl_internal_set_interpolationMode)) ::GlobalNamespace::ContinuousProperty_InterpolationMode  interpolationMode;

/// @brief Field localAxis, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_localAxis, put=__cordl_internal_set_localAxis)) ::GlobalNamespace::ContinuousProperty_RotationAxis  localAxis;

/// @brief Field mode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::UnityW<::GorillaTag::Cosmetics::ContinuousPropertyModeSO>  mode;

/// @brief Field offsetA, offset 0x70, size 0x34 
 __declspec(property(get=__cordl_internal_get_offsetA, put=__cordl_internal_set_offsetA)) ::GorillaTag::XformOffset  offsetA;

/// @brief Field offsetB, offset 0xa4, size 0x34 
 __declspec(property(get=__cordl_internal_get_offsetB, put=__cordl_internal_set_offsetB)) ::GorillaTag::XformOffset  offsetB;

/// @brief Field particleEmission, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleEmission, put=__cordl_internal_set_particleEmission)) ::GlobalNamespace::ParticleSystem_EmissionModule  particleEmission;

/// @brief Field particleMain, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleMain, put=__cordl_internal_set_particleMain)) ::GlobalNamespace::ParticleSystem_MainModule  particleMain;

/// @brief Field previousBoolValue, offset 0x14c, size 0x1 
 __declspec(property(get=__cordl_internal_get_previousBoolValue, put=__cordl_internal_set_previousBoolValue)) bool  previousBoolValue;

/// @brief Field range, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_range, put=__cordl_internal_set_range)) ::UnityEngine::Vector2  range;

/// @brief Field rateCurveCache, offset 0x128, size 0x20 
 __declspec(property(get=__cordl_internal_get_rateCurveCache, put=__cordl_internal_set_rateCurveCache)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  rateCurveCache;

/// @brief Field rigLocal, offset 0xf1, size 0x1 
 __declspec(property(get=__cordl_internal_get_rigLocal, put=__cordl_internal_set_rigLocal)) bool  rigLocal;

/// @brief Field runOnlyLocally, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get_runOnlyLocally, put=__cordl_internal_set_runOnlyLocally)) bool  runOnlyLocally;

/// @brief Field speedCurveCache, offset 0x108, size 0x20 
 __declspec(property(get=__cordl_internal_get_speedCurveCache, put=__cordl_internal_set_speedCurveCache)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  speedCurveCache;

/// @brief Field stopType, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_stopType, put=__cordl_internal_set_stopType)) ::UnityEngine::ParticleSystemStopBehavior  stopType;

/// @brief Field stringHash, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_stringHash, put=__cordl_internal_set_stringHash)) int32_t  stringHash;

/// @brief Field stringValue, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_stringValue, put=__cordl_internal_set_stringValue)) ::StringW  stringValue;

/// @brief Field target, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Object>  target;

/// @brief Field thresholdOption, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_thresholdOption, put=__cordl_internal_set_thresholdOption)) ::GlobalNamespace::ContinuousProperty_ThresholdOption  thresholdOption;

/// @brief Field transformA, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformA, put=__cordl_internal_set_transformA)) ::UnityW<::UnityEngine::Transform>  transformA;

/// @brief Field transformB, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformB, put=__cordl_internal_set_transformB)) ::UnityW<::UnityEngine::Transform>  transformB;

/// @brief Field unityEvent, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_unityEvent, put=__cordl_internal_set_unityEvent)) ::UnityEngine::Events::UnityEvent_1<float_t>*  unityEvent;

/// @brief Method Apply, addr 0x5d83784, size 0x15e4, virtual false, abstract: false, final false
inline void Apply(float_t  f, float_t  deltaTime, ::UnityEngine::MaterialPropertyBlock*  mpb) ;

/// @brief Method CastMatches, addr 0x5d810a0, size 0x74, virtual false, abstract: false, final false
static inline bool CastMatches(::GlobalNamespace::ContinuousProperty_Cast  cast, ::GlobalNamespace::ContinuousProperty_Cast  test) ;

/// @brief Method CheckContinuousEvent, addr 0x5d84e38, size 0xa0, virtual false, abstract: false, final false
inline bool CheckContinuousEvent(float_t  f, float_t  deltaTime) ;

/// @brief Method CheckThreshold, addr 0x5d83704, size 0x80, virtual false, abstract: false, final false
inline ::GlobalNamespace::ContinuousProperty_ThresholdResult CheckThreshold(float_t  f) ;

/// @brief Method DynamicIntLabel, addr 0x5d82a54, size 0x78, virtual false, abstract: false, final false
inline ::StringW DynamicIntLabel() ;

/// @brief Method DynamicStringLabel, addr 0x5d82adc, size 0x94, virtual false, abstract: false, final false
inline ::StringW DynamicStringLabel() ;

/// @brief Method GetAllValidObjectsNonAlloc, addr 0x5d8112c, size 0x1bc, virtual false, abstract: false, final false
static inline void GetAllValidObjectsNonAlloc(::UnityEngine::Transform*  t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  objects) ;

/// @brief Method GetTargetCast, addr 0x5d80e2c, size 0x274, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ContinuousProperty_Cast GetTargetCast(::UnityEngine::Object*  o) ;

/// @brief Method GetTargetInstanceID, addr 0x5d82868, size 0x18, virtual false, abstract: false, final false
inline int32_t GetTargetInstanceID() ;

/// @brief Method HasAllFlags, addr 0x5d81114, size 0xc, virtual false, abstract: false, final false
static inline bool HasAllFlags(::GlobalNamespace::ContinuousProperty_DataFlags  flags, ::GlobalNamespace::ContinuousProperty_DataFlags  test) ;

/// @brief Method HasAllFlags, addr 0x5d82880, size 0xa0, virtual false, abstract: false, final false
inline bool HasAllFlags(::GlobalNamespace::ContinuousProperty_DataFlags  test) ;

/// @brief Method HasAnyFlag, addr 0x5d81120, size 0xc, virtual false, abstract: false, final false
static inline bool HasAnyFlag(::GlobalNamespace::ContinuousProperty_DataFlags  flags, ::GlobalNamespace::ContinuousProperty_DataFlags  test) ;

/// @brief Method HasAnyFlag, addr 0x5d829a4, size 0xa0, virtual false, abstract: false, final false
inline bool HasAnyFlag(::GlobalNamespace::ContinuousProperty_DataFlags  test) ;

/// @brief Method Init, addr 0x5d83274, size 0x358, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method InitThreshold, addr 0x5d836b8, size 0x4c, virtual false, abstract: false, final false
inline void InitThreshold() ;

/// @brief Method IsValid, addr 0x5d82250, size 0xb8, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method IsValidObject, addr 0x5d812e8, size 0xcc, virtual false, abstract: false, final false
static inline bool IsValidObject(::System::Type*  t) ;

static inline ::GorillaTag::Cosmetics::ContinuousProperty* New_ctor() ;

static inline ::GorillaTag::Cosmetics::ContinuousProperty* New_ctor(::GorillaTag::Cosmetics::ContinuousPropertyModeSO*  mode, ::UnityEngine::Transform*  initialTarget, ::UnityEngine::Vector2  range) ;

/// @brief Method NextTarget, addr 0x5d82794, size 0x8, virtual false, abstract: false, final false
inline void NextTarget() ;

/// @brief Method OnModeOrTargetChanged, addr 0x5d82820, size 0x28, virtual false, abstract: false, final false
inline void OnModeOrTargetChanged() ;

/// @brief Method PreviousTarget, addr 0x5d8278c, size 0x8, virtual false, abstract: false, final false
inline void PreviousTarget() ;

/// @brief Method ScaleCurve, addr 0x5d84d68, size 0xd0, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve ScaleCurve(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurve>  inCurve, float_t  scale) ;

/// @brief Method SetRigIsLocal, addr 0x5d8326c, size 0x8, virtual false, abstract: false, final false
inline void SetRigIsLocal(bool  v) ;

/// @brief Method ShiftTarget, addr 0x5d81524, size 0x5b4, virtual false, abstract: false, final false
inline bool ShiftTarget(int32_t  shiftAmount) ;

constexpr bool const& __cordl_internal_get__IsShaderProperty_Cached_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsShaderProperty_Cached_k__BackingField() ;

constexpr bool const& __cordl_internal_get__UsesThreshold_Cached_k__BackingField() const;

constexpr bool& __cordl_internal_get__UsesThreshold_Cached_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::BezierCurve> const& __cordl_internal_get_bezierCurve() const;

constexpr ::UnityW<::GlobalNamespace::BezierCurve>& __cordl_internal_get_bezierCurve() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_color() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_curve() ;

constexpr ::GlobalNamespace::ContinuousProperty_EventMode const& __cordl_internal_get_eventMode() const;

constexpr ::GlobalNamespace::ContinuousProperty_EventMode& __cordl_internal_get_eventMode() ;

constexpr float_t const& __cordl_internal_get_frequencyTimer() const;

constexpr float_t& __cordl_internal_get_frequencyTimer() ;

constexpr int32_t const& __cordl_internal_get_intValue() const;

constexpr int32_t& __cordl_internal_get_intValue() ;

constexpr int32_t const& __cordl_internal_get_internalSwitchValue() const;

constexpr int32_t& __cordl_internal_get_internalSwitchValue() ;

constexpr ::GlobalNamespace::ContinuousProperty_InterpolationMode const& __cordl_internal_get_interpolationMode() const;

constexpr ::GlobalNamespace::ContinuousProperty_InterpolationMode& __cordl_internal_get_interpolationMode() ;

constexpr ::GlobalNamespace::ContinuousProperty_RotationAxis const& __cordl_internal_get_localAxis() const;

constexpr ::GlobalNamespace::ContinuousProperty_RotationAxis& __cordl_internal_get_localAxis() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::ContinuousPropertyModeSO> const& __cordl_internal_get_mode() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::ContinuousPropertyModeSO>& __cordl_internal_get_mode() ;

constexpr ::GorillaTag::XformOffset const& __cordl_internal_get_offsetA() const;

constexpr ::GorillaTag::XformOffset& __cordl_internal_get_offsetA() ;

constexpr ::GorillaTag::XformOffset const& __cordl_internal_get_offsetB() const;

constexpr ::GorillaTag::XformOffset& __cordl_internal_get_offsetB() ;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& __cordl_internal_get_particleEmission() const;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& __cordl_internal_get_particleEmission() ;

constexpr ::GlobalNamespace::ParticleSystem_MainModule const& __cordl_internal_get_particleMain() const;

constexpr ::GlobalNamespace::ParticleSystem_MainModule& __cordl_internal_get_particleMain() ;

constexpr bool const& __cordl_internal_get_previousBoolValue() const;

constexpr bool& __cordl_internal_get_previousBoolValue() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_range() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_range() ;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& __cordl_internal_get_rateCurveCache() const;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& __cordl_internal_get_rateCurveCache() ;

constexpr bool const& __cordl_internal_get_rigLocal() const;

constexpr bool& __cordl_internal_get_rigLocal() ;

constexpr bool const& __cordl_internal_get_runOnlyLocally() const;

constexpr bool& __cordl_internal_get_runOnlyLocally() ;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& __cordl_internal_get_speedCurveCache() const;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& __cordl_internal_get_speedCurveCache() ;

constexpr ::UnityEngine::ParticleSystemStopBehavior const& __cordl_internal_get_stopType() const;

constexpr ::UnityEngine::ParticleSystemStopBehavior& __cordl_internal_get_stopType() ;

constexpr int32_t const& __cordl_internal_get_stringHash() const;

constexpr int32_t& __cordl_internal_get_stringHash() ;

constexpr ::StringW const& __cordl_internal_get_stringValue() const;

constexpr ::StringW& __cordl_internal_get_stringValue() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_target() ;

constexpr ::GlobalNamespace::ContinuousProperty_ThresholdOption const& __cordl_internal_get_thresholdOption() const;

constexpr ::GlobalNamespace::ContinuousProperty_ThresholdOption& __cordl_internal_get_thresholdOption() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transformA() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transformA() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transformB() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transformB() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_unityEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_unityEvent() ;

constexpr void __cordl_internal_set__IsShaderProperty_Cached_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__UsesThreshold_Cached_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_bezierCurve(::UnityW<::GlobalNamespace::BezierCurve>  value) ;

constexpr void __cordl_internal_set_color(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_eventMode(::GlobalNamespace::ContinuousProperty_EventMode  value) ;

constexpr void __cordl_internal_set_frequencyTimer(float_t  value) ;

constexpr void __cordl_internal_set_intValue(int32_t  value) ;

constexpr void __cordl_internal_set_internalSwitchValue(int32_t  value) ;

constexpr void __cordl_internal_set_interpolationMode(::GlobalNamespace::ContinuousProperty_InterpolationMode  value) ;

constexpr void __cordl_internal_set_localAxis(::GlobalNamespace::ContinuousProperty_RotationAxis  value) ;

constexpr void __cordl_internal_set_mode(::UnityW<::GorillaTag::Cosmetics::ContinuousPropertyModeSO>  value) ;

constexpr void __cordl_internal_set_offsetA(::GorillaTag::XformOffset  value) ;

constexpr void __cordl_internal_set_offsetB(::GorillaTag::XformOffset  value) ;

constexpr void __cordl_internal_set_particleEmission(::GlobalNamespace::ParticleSystem_EmissionModule  value) ;

constexpr void __cordl_internal_set_particleMain(::GlobalNamespace::ParticleSystem_MainModule  value) ;

constexpr void __cordl_internal_set_previousBoolValue(bool  value) ;

constexpr void __cordl_internal_set_range(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_rateCurveCache(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

constexpr void __cordl_internal_set_rigLocal(bool  value) ;

constexpr void __cordl_internal_set_runOnlyLocally(bool  value) ;

constexpr void __cordl_internal_set_speedCurveCache(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

constexpr void __cordl_internal_set_stopType(::UnityEngine::ParticleSystemStopBehavior  value) ;

constexpr void __cordl_internal_set_stringHash(int32_t  value) ;

constexpr void __cordl_internal_set_stringValue(::StringW  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_thresholdOption(::GlobalNamespace::ContinuousProperty_ThresholdOption  value) ;

constexpr void __cordl_internal_set_transformA(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_transformB(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_unityEvent(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x5d813b4, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5d81444, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::GorillaTag::Cosmetics::ContinuousPropertyModeSO*  mode, ::UnityEngine::Transform*  initialTarget, ::UnityEngine::Vector2  range) ;

/// @brief Method get_AxisError, addr 0x5d82bf8, size 0xcc, virtual false, abstract: false, final false
inline bool get_AxisError() ;

/// @brief Method get_HasAxisMode, addr 0x5d82cc4, size 0x8, virtual false, abstract: false, final false
inline bool get_HasAxisMode() ;

/// @brief Method get_HasBezier, addr 0x5d82b80, size 0x18, virtual false, abstract: false, final false
inline bool get_HasBezier() ;

/// @brief Method get_HasCurve, addr 0x5d82a4c, size 0x8, virtual false, abstract: false, final false
inline bool get_HasCurve() ;

/// @brief Method get_HasEventMode, addr 0x5d83214, size 0x38, virtual false, abstract: false, final false
inline bool get_HasEventMode() ;

/// @brief Method get_HasGradient, addr 0x5d82a44, size 0x8, virtual false, abstract: false, final false
inline bool get_HasGradient() ;

/// @brief Method get_HasInt, addr 0x5d82acc, size 0x8, virtual false, abstract: false, final false
inline bool get_HasInt() ;

/// @brief Method get_HasInterpolationMode, addr 0x5d82d98, size 0x8, virtual false, abstract: false, final false
inline bool get_HasInterpolationMode() ;

/// @brief Method get_HasOffsets, addr 0x5d82ec0, size 0x18, virtual false, abstract: false, final false
inline bool get_HasOffsets() ;

/// @brief Method get_HasStopAction, addr 0x5d82da0, size 0x70, virtual false, abstract: false, final false
inline bool get_HasStopAction() ;

/// @brief Method get_HasString, addr 0x5d82b70, size 0x8, virtual false, abstract: false, final false
inline bool get_HasString() ;

/// @brief Method get_HasTarget, addr 0x5d825f4, size 0x18, virtual false, abstract: false, final false
inline bool get_HasTarget() ;

/// @brief Method get_HasThreshold, addr 0x5d8320c, size 0x8, virtual false, abstract: false, final false
inline bool get_HasThreshold() ;

/// @brief Method get_HasUnityEvent, addr 0x5d8324c, size 0x18, virtual false, abstract: false, final false
inline bool get_HasUnityEvent() ;

/// @brief Method get_HasXforms, addr 0x5d82e10, size 0x18, virtual false, abstract: false, final false
inline bool get_HasXforms() ;

/// @brief Method get_IntValue, addr 0x5d82ad4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_IntValue() ;

/// @brief Method get_InterpolationError, addr 0x5d82ccc, size 0xcc, virtual false, abstract: false, final false
inline bool get_InterpolationError() ;

/// [CompilerGenerated]
/// @brief Method get_IsShaderProperty_Cached, addr 0x5d82848, size 0x8, virtual false, abstract: false, final false
inline bool get_IsShaderProperty_Cached() ;

/// @brief Method get_MissingBezier, addr 0x5d82b98, size 0x60, virtual false, abstract: false, final false
inline bool get_MissingBezier() ;

/// @brief Method get_MissingXforms, addr 0x5d82e28, size 0x98, virtual false, abstract: false, final false
inline bool get_MissingXforms() ;

/// @brief Method get_Mode, addr 0x5d8256c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaTag::Cosmetics::ContinuousPropertyModeSO> get_Mode() ;

/// @brief Method get_ModeErrorMessage, addr 0x5d82308, size 0xf4, virtual false, abstract: false, final false
inline ::StringW get_ModeErrorMessage() ;

/// @brief Method get_ModeErrorVisible, addr 0x5d82238, size 0x18, virtual false, abstract: false, final false
inline bool get_ModeErrorVisible() ;

/// @brief Method get_ModeInfoVisible, addr 0x5d821d8, size 0x60, virtual false, abstract: false, final false
inline bool get_ModeInfoVisible() ;

/// @brief Method get_ModeTooltip, addr 0x5d81ad8, size 0x108, virtual false, abstract: false, final false
inline ::StringW get_ModeTooltip() ;

/// @brief Method get_MyType, addr 0x5d82574, size 0x80, virtual false, abstract: false, final false
inline ::GlobalNamespace::ContinuousProperty_Type get_MyType() ;

/// @brief Method get_RunOnlyLocally, addr 0x5d83264, size 0x8, virtual false, abstract: false, final false
inline bool get_RunOnlyLocally() ;

/// @brief Method get_ShiftButtonsVisible, addr 0x5d82724, size 0x60, virtual false, abstract: false, final false
inline bool get_ShiftButtonsVisible() ;

/// @brief Method get_StringValue, addr 0x5d82b78, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_StringValue() ;

/// @brief Method get_Target, addr 0x5d82784, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_Target() ;

/// @brief Method get_TargetInfoVisible, addr 0x5d8260c, size 0x80, virtual false, abstract: false, final false
inline bool get_TargetInfoVisible() ;

/// @brief Method get_TargetTooltip, addr 0x5d8268c, size 0x98, virtual false, abstract: false, final false
inline ::StringW get_TargetTooltip() ;

/// @brief Method get_ThresholdError, addr 0x5d831e0, size 0x2c, virtual false, abstract: false, final false
inline bool get_ThresholdError() ;

/// @brief Method get_ThresholdErrorMessage, addr 0x5d82ed8, size 0xa0, virtual false, abstract: false, final false
inline ::StringW get_ThresholdErrorMessage() ;

/// @brief Method get_ThresholdTooltip, addr 0x5d82f78, size 0x268, virtual false, abstract: false, final false
inline ::StringW get_ThresholdTooltip() ;

/// [CompilerGenerated]
/// @brief Method get_UsesThreshold_Cached, addr 0x5d82858, size 0x8, virtual false, abstract: false, final false
inline bool get_UsesThreshold_Cached() ;

/// [CompilerGenerated]
/// @brief Method set_IsShaderProperty_Cached, addr 0x5d82850, size 0x8, virtual false, abstract: false, final false
inline void set_IsShaderProperty_Cached(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_UsesThreshold_Cached, addr 0x5d82860, size 0x8, virtual false, abstract: false, final false
inline void set_UsesThreshold_Cached(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContinuousProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContinuousProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuousProperty(ContinuousProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuousProperty(ContinuousProperty const& ) = delete;

/// @brief Field ENUM_ERROR offset 0xffffffff size 0x8
static constexpr ::ConstString  ENUM_ERROR{u"Internal values were changed at some point. Please select a new value."};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4889};

/// [SerializeField]
/// @brief Field mode, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::ContinuousPropertyModeSO>  ___mode;

/// [FormerlySerializedAs("component")]
/// [SerializeField]
/// @brief Field target, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___target;

/// [CompilerGenerated]
/// @brief Field <IsShaderProperty_Cached>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsShaderProperty_Cached_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <UsesThreshold_Cached>k__BackingField, offset: 0x21, size: 0x1, def value: None
 bool  ____UsesThreshold_Cached_k__BackingField;

/// [SerializeField]
/// @brief Field color, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___color;

/// [SerializeField]
/// @brief Field curve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___curve;

/// [FormerlySerializedAs("materialIndex")]
/// [SerializeField]
/// @brief Field intValue, offset: 0x38, size: 0x4, def value: None
 int32_t  ___intValue;

/// [SerializeField]
/// @brief Field stringValue, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___stringValue;

/// [SerializeField]
/// @brief Field bezierCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BezierCurve>  ___bezierCurve;

/// [SerializeField]
/// @brief Field localAxis, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::ContinuousProperty_RotationAxis  ___localAxis;

/// [SerializeField]
/// @brief Field interpolationMode, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::ContinuousProperty_InterpolationMode  ___interpolationMode;

/// [SerializeField]
/// @brief Field stopType, offset: 0x58, size: 0x4, def value: None
 ::UnityEngine::ParticleSystemStopBehavior  ___stopType;

/// [SerializeField]
/// @brief Field transformA, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transformA;

/// [SerializeField]
/// @brief Field transformB, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transformB;

/// [SerializeField]
/// @brief Field offsetA, offset: 0x70, size: 0x34, def value: None
 ::GorillaTag::XformOffset  ___offsetA;

/// [SerializeField]
/// @brief Field offsetB, offset: 0xa4, size: 0x34, def value: None
 ::GorillaTag::XformOffset  ___offsetB;

/// [SerializeField]
/// @brief Field range, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___range;

/// [SerializeField]
/// @brief Field thresholdOption, offset: 0xe0, size: 0x4, def value: None
 ::GlobalNamespace::ContinuousProperty_ThresholdOption  ___thresholdOption;

/// [SerializeField]
/// @brief Field eventMode, offset: 0xe4, size: 0x4, def value: None
 ::GlobalNamespace::ContinuousProperty_EventMode  ___eventMode;

/// [SerializeField]
/// @brief Field unityEvent, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___unityEvent;

/// [Tooltip("Check this box if only the owner/local player is supposed to run this property.")]
/// [SerializeField]
/// @brief Field runOnlyLocally, offset: 0xf0, size: 0x1, def value: None
 bool  ___runOnlyLocally;

/// @brief Field rigLocal, offset: 0xf1, size: 0x1, def value: None
 bool  ___rigLocal;

/// @brief Field internalSwitchValue, offset: 0xf4, size: 0x4, def value: None
 int32_t  ___internalSwitchValue;

/// @brief Field particleMain, offset: 0xf8, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_MainModule  ___particleMain;

/// @brief Field particleEmission, offset: 0x100, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_EmissionModule  ___particleEmission;

/// @brief Field speedCurveCache, offset: 0x108, size: 0x20, def value: None
 ::GlobalNamespace::ParticleSystem_MinMaxCurve  ___speedCurveCache;

/// @brief Field rateCurveCache, offset: 0x128, size: 0x20, def value: None
 ::GlobalNamespace::ParticleSystem_MinMaxCurve  ___rateCurveCache;

/// @brief Field frequencyTimer, offset: 0x148, size: 0x4, def value: None
 float_t  ___frequencyTimer;

/// @brief Field previousBoolValue, offset: 0x14c, size: 0x1, def value: None
 bool  ___previousBoolValue;

/// @brief Field stringHash, offset: 0x150, size: 0x4, def value: None
 int32_t  ___stringHash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ____IsShaderProperty_Cached_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ____UsesThreshold_Cached_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___color) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___curve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___intValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___stringValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___bezierCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___localAxis) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___interpolationMode) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___stopType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___transformA) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___transformB) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___offsetA) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___offsetB) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___range) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___thresholdOption) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___eventMode) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___unityEvent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___runOnlyLocally) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___rigLocal) == 0xf1, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___internalSwitchValue) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___particleMain) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___particleEmission) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___speedCurveCache) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___rateCurveCache) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___frequencyTimer) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___previousBoolValue) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousProperty, ___stringHash) == 0x150, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ContinuousProperty) == 0x158, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics

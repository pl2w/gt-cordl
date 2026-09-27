#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineAnimate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Splines/zzzz__SplineAnimate_AlignmentMode_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineAnimate_EasingMode_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineAnimate_LoopMode_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineAnimate_Method_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineComponent_AlignAxis_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineComponent_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineAnimate)
namespace GlobalNamespace {
struct SplineAnimate_AlignmentMode;
}
namespace GlobalNamespace {
struct SplineAnimate_EasingMode;
}
namespace GlobalNamespace {
struct SplineAnimate_LoopMode;
}
namespace GlobalNamespace {
struct SplineAnimate_Method;
}
namespace GlobalNamespace {
struct SplineComponent_AlignAxis;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine::Splines {
struct SplineModification;
}
namespace UnityEngine::Splines {
template<typename T>
class SplinePath_1;
}
namespace UnityEngine::Splines {
class Spline;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Splines {
class SplineAnimate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::SplineAnimate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineAnimate*, "UnityEngine.Splines", "SplineAnimate");
// [AddComponentMenu("Splines/Spline Animate")]
// [ExecuteInEditMode]
// Dependencies UnityEngine.Splines.SplineAnimate::AlignmentMode, UnityEngine.Splines.SplineAnimate::EasingMode, UnityEngine.Splines.SplineAnimate::LoopMode, UnityEngine.Splines.SplineAnimate::Method, UnityEngine.Splines.SplineComponent, UnityEngine.Splines.SplineComponent::AlignAxis
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineAnimate
class CORDL_TYPE SplineAnimate : public ::UnityEngine::Splines::SplineComponent {
public:
// Declarations
using AlignmentMode = ::GlobalNamespace::SplineAnimate_AlignmentMode;

using EasingMode = ::GlobalNamespace::SplineAnimate_EasingMode;

using LoopMode = ::GlobalNamespace::SplineAnimate_LoopMode;

using Method = ::GlobalNamespace::SplineAnimate_Method;

 __declspec(property(get=get_Alignment, put=set_Alignment)) ::GlobalNamespace::SplineAnimate_AlignmentMode  Alignment;

 __declspec(property(get=get_AnimationMethod, put=set_AnimationMethod)) ::GlobalNamespace::SplineAnimate_Method  AnimationMethod;

/// @brief Field Completed, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_Completed, put=__cordl_internal_set_Completed)) ::System::Action*  Completed;

 __declspec(property(get=get_Container, put=set_Container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  Container;

 __declspec(property(get=get_Duration, put=set_Duration)) float_t  Duration;

 __declspec(property(get=get_Easing, put=set_Easing)) ::GlobalNamespace::SplineAnimate_EasingMode  Easing;

 __declspec(property(get=get_ElapsedTime, put=set_ElapsedTime)) float_t  ElapsedTime;

 __declspec(property(get=get_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_Loop, put=set_Loop)) ::GlobalNamespace::SplineAnimate_LoopMode  Loop;

 __declspec(property(get=get_MaxSpeed, put=set_MaxSpeed)) float_t  MaxSpeed;

 __declspec(property(get=get_NormalizedTime, put=set_NormalizedTime)) float_t  NormalizedTime;

 __declspec(property(get=get_ObjectForwardAxis, put=set_ObjectForwardAxis)) ::GlobalNamespace::SplineComponent_AlignAxis  ObjectForwardAxis;

 __declspec(property(get=get_ObjectUpAxis, put=set_ObjectUpAxis)) ::GlobalNamespace::SplineComponent_AlignAxis  ObjectUpAxis;

 __declspec(property(get=get_PlayOnAwake, put=set_PlayOnAwake)) bool  PlayOnAwake;

 __declspec(property(get=get_StartOffset, put=set_StartOffset)) float_t  StartOffset;

 __declspec(property(get=get_StartOffsetT)) float_t  StartOffsetT;

/// @brief Field Updated, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_Updated, put=__cordl_internal_set_Updated)) ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  Updated;

/// @brief [Obsolete("Use Alignment instead.", false)]
 __declspec(property(get=get_alignmentMode)) ::GlobalNamespace::SplineAnimate_AlignmentMode  alignmentMode;

/// @brief [Obsolete("Use Duration instead.", false)]
 __declspec(property(get=get_duration)) float_t  duration;

/// @brief [Obsolete("Use Easing instead.", false)]
 __declspec(property(get=get_easingMode)) ::GlobalNamespace::SplineAnimate_EasingMode  easingMode;

/// @brief [Obsolete("Use ElapsedTime instead.", false)]
 __declspec(property(get=get_elapsedTime)) float_t  elapsedTime;

/// @brief [Obsolete("Use IsPlaying instead.", false)]
 __declspec(property(get=get_isPlaying)) bool  isPlaying;

/// @brief Field k_EmptyContainerError, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_EmptyContainerError, put=setStaticF_k_EmptyContainerError)) ::StringW  k_EmptyContainerError;

/// @brief [Obsolete("Use Loop instead.", false)]
 __declspec(property(get=get_loopMode)) ::GlobalNamespace::SplineAnimate_LoopMode  loopMode;

/// @brief Field m_AlignmentMode, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AlignmentMode, put=__cordl_internal_set_m_AlignmentMode)) ::GlobalNamespace::SplineAnimate_AlignmentMode  m_AlignmentMode;

/// @brief Field m_Duration, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Duration, put=__cordl_internal_set_m_Duration)) float_t  m_Duration;

/// @brief Field m_EasingMode, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EasingMode, put=__cordl_internal_set_m_EasingMode)) ::GlobalNamespace::SplineAnimate_EasingMode  m_EasingMode;

/// @brief Field m_ElapsedTime, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ElapsedTime, put=__cordl_internal_set_m_ElapsedTime)) float_t  m_ElapsedTime;

/// @brief Field m_EndReached, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EndReached, put=__cordl_internal_set_m_EndReached)) bool  m_EndReached;

/// @brief Field m_LoopMode, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LoopMode, put=__cordl_internal_set_m_LoopMode)) ::GlobalNamespace::SplineAnimate_LoopMode  m_LoopMode;

/// @brief Field m_MaxSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxSpeed, put=__cordl_internal_set_m_MaxSpeed)) float_t  m_MaxSpeed;

/// @brief Field m_Method, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Method, put=__cordl_internal_set_m_Method)) ::GlobalNamespace::SplineAnimate_Method  m_Method;

/// @brief Field m_NormalizedTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NormalizedTime, put=__cordl_internal_set_m_NormalizedTime)) float_t  m_NormalizedTime;

/// @brief Field m_ObjectForwardAxis, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ObjectForwardAxis, put=__cordl_internal_set_m_ObjectForwardAxis)) ::GlobalNamespace::SplineComponent_AlignAxis  m_ObjectForwardAxis;

/// @brief Field m_ObjectUpAxis, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ObjectUpAxis, put=__cordl_internal_set_m_ObjectUpAxis)) ::GlobalNamespace::SplineComponent_AlignAxis  m_ObjectUpAxis;

/// @brief Field m_PlayOnAwake, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayOnAwake, put=__cordl_internal_set_m_PlayOnAwake)) bool  m_PlayOnAwake;

/// @brief Field m_PlayOnAwakeHandledForSession, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayOnAwakeHandledForSession, put=__cordl_internal_set_m_PlayOnAwakeHandledForSession)) bool  m_PlayOnAwakeHandledForSession;

/// @brief Field m_Playing, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Playing, put=__cordl_internal_set_m_Playing)) bool  m_Playing;

/// @brief Field m_SplineLength, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SplineLength, put=__cordl_internal_set_m_SplineLength)) float_t  m_SplineLength;

/// @brief Field m_SplinePath, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SplinePath, put=__cordl_internal_set_m_SplinePath)) ::UnityEngine::Splines::SplinePath_1<::UnityEngine::Splines::Spline*>*  m_SplinePath;

/// @brief Field m_StartOffset, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StartOffset, put=__cordl_internal_set_m_StartOffset)) float_t  m_StartOffset;

/// @brief Field m_StartOffsetT, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StartOffsetT, put=__cordl_internal_set_m_StartOffsetT)) float_t  m_StartOffsetT;

/// @brief Field m_Target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Target, put=__cordl_internal_set_m_Target)) ::UnityW<::UnityEngine::Splines::SplineContainer>  m_Target;

/// @brief [Obsolete("Use MaxSpeed instead.", false)]
 __declspec(property(get=get_maxSpeed)) float_t  maxSpeed;

/// @brief [Obsolete("Use AnimationMethod instead.", false)]
 __declspec(property(get=get_method)) ::GlobalNamespace::SplineAnimate_Method  method;

/// @brief [Obsolete("Use NormalizedTime instead.", false)]
 __declspec(property(get=get_normalizedTime)) float_t  normalizedTime;

/// @brief [Obsolete("Use ObjectForwardAxis instead.", false)]
 __declspec(property(get=get_objectForwardAxis)) ::GlobalNamespace::SplineComponent_AlignAxis  objectForwardAxis;

/// @brief [Obsolete("Use ObjectUpAxis instead.", false)]
 __declspec(property(get=get_objectUpAxis)) ::GlobalNamespace::SplineComponent_AlignAxis  objectUpAxis;

/// @brief Field onUpdated, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_onUpdated, put=__cordl_internal_set_onUpdated)) ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  onUpdated;

/// @brief [Obsolete("Use PlayOnAwake instead.", false)]
 __declspec(property(get=get_playOnAwake)) bool  playOnAwake;

/// @brief [Obsolete("Use Container instead.", false)]
 __declspec(property(get=get_splineContainer)) ::UnityW<::UnityEngine::Splines::SplineContainer>  splineContainer;

/// @brief Method Awake, addr 0xb319f28, size 0x8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateDuration, addr 0xb3192cc, size 0xfc, virtual false, abstract: false, final false
inline void CalculateDuration() ;

/// @brief Method CalculateMaxSpeed, addr 0xb31919c, size 0xfc, virtual false, abstract: false, final false
inline void CalculateMaxSpeed() ;

/// @brief Method CalculateNormalizedTime, addr 0xb319750, size 0x26c, virtual false, abstract: false, final false
inline void CalculateNormalizedTime(float_t  deltaTime) ;

/// @brief Method EaseInOutQuadratic, addr 0xb31a5b8, size 0x2c, virtual false, abstract: false, final false
inline float_t EaseInOutQuadratic(float_t  t) ;

/// @brief Method EaseInQuadratic, addr 0xb31a5a0, size 0x8, virtual false, abstract: false, final false
inline float_t EaseInQuadratic(float_t  t) ;

/// @brief Method EaseOutQuadratic, addr 0xb31a5a8, size 0x10, virtual false, abstract: false, final false
inline float_t EaseOutQuadratic(float_t  t) ;

/// @brief Method EvaluatePositionAndRotation, addr 0xb31a5e4, size 0x708, virtual false, abstract: false, final false
inline void EvaluatePositionAndRotation(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method GetLoopInterpolation, addr 0xb31acec, size 0x50, virtual false, abstract: false, final false
inline float_t GetLoopInterpolation(bool  offset) ;

/// @brief Method IsNullOrEmptyContainer, addr 0xb31a2bc, size 0x194, virtual false, abstract: false, final false
inline bool IsNullOrEmptyContainer() ;

static inline ::UnityEngine::Splines::SplineAnimate* New_ctor() ;

/// @brief Method OnDisable, addr 0xb31a22c, size 0x7c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb31a01c, size 0xa4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSplineChange, addr 0xb3190b8, size 0x4, virtual false, abstract: false, final false
inline void OnSplineChange(::UnityEngine::Splines::Spline*  spline, int32_t  knotIndex, ::UnityEngine::Splines::SplineModification  modificationType) ;

/// @brief Method OnValidate, addr 0xb31a2a8, size 0x14, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Pause, addr 0xb31a470, size 0x8, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method Play, addr 0xb31a450, size 0x20, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method RebuildSplinePath, addr 0xb319a14, size 0x104, virtual false, abstract: false, final false
inline void RebuildSplinePath() ;

/// @brief Method RecalculateAnimationParameters, addr 0xb319f30, size 0xec, virtual false, abstract: false, final false
inline void RecalculateAnimationParameters() ;

/// @brief Method Restart, addr 0xb31a0c0, size 0x16c, virtual false, abstract: false, final false
inline void Restart(bool  autoplay) ;

/// @brief Method SetObjectAlignAxis, addr 0xb319468, size 0x5c, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineComponent_AlignAxis SetObjectAlignAxis(::GlobalNamespace::SplineComponent_AlignAxis  newValue, ::by_ref<::GlobalNamespace::SplineComponent_AlignAxis>  targetAxis, ::GlobalNamespace::SplineComponent_AlignAxis  otherAxis) ;

/// @brief Method Update, addr 0xb31a478, size 0x4c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateEndReached, addr 0xb31a4c4, size 0xdc, virtual false, abstract: false, final false
inline void UpdateEndReached(float_t  previousTime, float_t  currentDuration) ;

/// @brief Method UpdateStartOffsetT, addr 0xb3190bc, size 0x68, virtual false, abstract: false, final false
inline void UpdateStartOffsetT() ;

/// @brief Method UpdateTransform, addr 0xb31959c, size 0x184, virtual false, abstract: false, final false
inline void UpdateTransform() ;

constexpr ::System::Action* const& __cordl_internal_get_Completed() const;

constexpr ::System::Action*& __cordl_internal_get_Completed() ;

constexpr ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>* const& __cordl_internal_get_Updated() const;

constexpr ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*& __cordl_internal_get_Updated() ;

constexpr ::GlobalNamespace::SplineAnimate_AlignmentMode const& __cordl_internal_get_m_AlignmentMode() const;

constexpr ::GlobalNamespace::SplineAnimate_AlignmentMode& __cordl_internal_get_m_AlignmentMode() ;

constexpr float_t const& __cordl_internal_get_m_Duration() const;

constexpr float_t& __cordl_internal_get_m_Duration() ;

constexpr ::GlobalNamespace::SplineAnimate_EasingMode const& __cordl_internal_get_m_EasingMode() const;

constexpr ::GlobalNamespace::SplineAnimate_EasingMode& __cordl_internal_get_m_EasingMode() ;

constexpr float_t const& __cordl_internal_get_m_ElapsedTime() const;

constexpr float_t& __cordl_internal_get_m_ElapsedTime() ;

constexpr bool const& __cordl_internal_get_m_EndReached() const;

constexpr bool& __cordl_internal_get_m_EndReached() ;

constexpr ::GlobalNamespace::SplineAnimate_LoopMode const& __cordl_internal_get_m_LoopMode() const;

constexpr ::GlobalNamespace::SplineAnimate_LoopMode& __cordl_internal_get_m_LoopMode() ;

constexpr float_t const& __cordl_internal_get_m_MaxSpeed() const;

constexpr float_t& __cordl_internal_get_m_MaxSpeed() ;

constexpr ::GlobalNamespace::SplineAnimate_Method const& __cordl_internal_get_m_Method() const;

constexpr ::GlobalNamespace::SplineAnimate_Method& __cordl_internal_get_m_Method() ;

constexpr float_t const& __cordl_internal_get_m_NormalizedTime() const;

constexpr float_t& __cordl_internal_get_m_NormalizedTime() ;

constexpr ::GlobalNamespace::SplineComponent_AlignAxis const& __cordl_internal_get_m_ObjectForwardAxis() const;

constexpr ::GlobalNamespace::SplineComponent_AlignAxis& __cordl_internal_get_m_ObjectForwardAxis() ;

constexpr ::GlobalNamespace::SplineComponent_AlignAxis const& __cordl_internal_get_m_ObjectUpAxis() const;

constexpr ::GlobalNamespace::SplineComponent_AlignAxis& __cordl_internal_get_m_ObjectUpAxis() ;

constexpr bool const& __cordl_internal_get_m_PlayOnAwake() const;

constexpr bool& __cordl_internal_get_m_PlayOnAwake() ;

constexpr bool const& __cordl_internal_get_m_PlayOnAwakeHandledForSession() const;

constexpr bool& __cordl_internal_get_m_PlayOnAwakeHandledForSession() ;

constexpr bool const& __cordl_internal_get_m_Playing() const;

constexpr bool& __cordl_internal_get_m_Playing() ;

constexpr float_t const& __cordl_internal_get_m_SplineLength() const;

constexpr float_t& __cordl_internal_get_m_SplineLength() ;

constexpr ::UnityEngine::Splines::SplinePath_1<::UnityEngine::Splines::Spline*>* const& __cordl_internal_get_m_SplinePath() const;

constexpr ::UnityEngine::Splines::SplinePath_1<::UnityEngine::Splines::Spline*>*& __cordl_internal_get_m_SplinePath() ;

constexpr float_t const& __cordl_internal_get_m_StartOffset() const;

constexpr float_t& __cordl_internal_get_m_StartOffset() ;

constexpr float_t const& __cordl_internal_get_m_StartOffsetT() const;

constexpr float_t& __cordl_internal_get_m_StartOffsetT() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_m_Target() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_m_Target() ;

constexpr ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>* const& __cordl_internal_get_onUpdated() const;

constexpr ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*& __cordl_internal_get_onUpdated() ;

constexpr void __cordl_internal_set_Completed(::System::Action*  value) ;

constexpr void __cordl_internal_set_Updated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

constexpr void __cordl_internal_set_m_AlignmentMode(::GlobalNamespace::SplineAnimate_AlignmentMode  value) ;

constexpr void __cordl_internal_set_m_Duration(float_t  value) ;

constexpr void __cordl_internal_set_m_EasingMode(::GlobalNamespace::SplineAnimate_EasingMode  value) ;

constexpr void __cordl_internal_set_m_ElapsedTime(float_t  value) ;

constexpr void __cordl_internal_set_m_EndReached(bool  value) ;

constexpr void __cordl_internal_set_m_LoopMode(::GlobalNamespace::SplineAnimate_LoopMode  value) ;

constexpr void __cordl_internal_set_m_MaxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_Method(::GlobalNamespace::SplineAnimate_Method  value) ;

constexpr void __cordl_internal_set_m_NormalizedTime(float_t  value) ;

constexpr void __cordl_internal_set_m_ObjectForwardAxis(::GlobalNamespace::SplineComponent_AlignAxis  value) ;

constexpr void __cordl_internal_set_m_ObjectUpAxis(::GlobalNamespace::SplineComponent_AlignAxis  value) ;

constexpr void __cordl_internal_set_m_PlayOnAwake(bool  value) ;

constexpr void __cordl_internal_set_m_PlayOnAwakeHandledForSession(bool  value) ;

constexpr void __cordl_internal_set_m_Playing(bool  value) ;

constexpr void __cordl_internal_set_m_SplineLength(float_t  value) ;

constexpr void __cordl_internal_set_m_SplinePath(::UnityEngine::Splines::SplinePath_1<::UnityEngine::Splines::Spline*>*  value) ;

constexpr void __cordl_internal_set_m_StartOffset(float_t  value) ;

constexpr void __cordl_internal_set_m_StartOffsetT(float_t  value) ;

constexpr void __cordl_internal_set_m_Target(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_onUpdated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

/// @brief Method .ctor, addr 0xb31ad74, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_Completed, addr 0xb319df0, size 0x9c, virtual false, abstract: false, final false
inline void add_Completed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_Updated, addr 0xb319c90, size 0xb0, virtual false, abstract: false, final false
inline void add_Updated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onUpdated, addr 0xb319b30, size 0xb0, virtual false, abstract: false, final false
inline void add_onUpdated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

static inline ::StringW getStaticF_k_EmptyContainerError() ;

/// @brief Method get_Alignment, addr 0xb3193e8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineAnimate_AlignmentMode get_Alignment() ;

/// @brief Method get_AnimationMethod, addr 0xb31915c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineAnimate_Method get_AnimationMethod() ;

/// @brief Method get_Container, addr 0xb318ed4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Splines::SplineContainer> get_Container() ;

/// @brief Method get_Duration, addr 0xb319174, size 0x8, virtual false, abstract: false, final false
inline float_t get_Duration() ;

/// @brief Method get_Easing, addr 0xb3193d0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineAnimate_EasingMode get_Easing() ;

/// @brief Method get_ElapsedTime, addr 0xb319728, size 0x8, virtual false, abstract: false, final false
inline float_t get_ElapsedTime() ;

/// @brief Method get_IsPlaying, addr 0xb319b28, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Method get_Loop, addr 0xb319144, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineAnimate_LoopMode get_Loop() ;

/// @brief Method get_MaxSpeed, addr 0xb3192a0, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxSpeed() ;

/// @brief Method get_NormalizedTime, addr 0xb31953c, size 0x8, virtual false, abstract: false, final false
inline float_t get_NormalizedTime() ;

/// @brief Method get_ObjectForwardAxis, addr 0xb319400, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineComponent_AlignAxis get_ObjectForwardAxis() ;

/// @brief Method get_ObjectUpAxis, addr 0xb3194cc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineComponent_AlignAxis get_ObjectUpAxis() ;

/// @brief Method get_PlayOnAwake, addr 0xb31912c, size 0x8, virtual false, abstract: false, final false
inline bool get_PlayOnAwake() ;

/// @brief Method get_StartOffset, addr 0xb3199bc, size 0x8, virtual false, abstract: false, final false
inline float_t get_StartOffset() ;

/// @brief Method get_StartOffsetT, addr 0xb319b18, size 0x8, virtual false, abstract: false, final false
inline float_t get_StartOffsetT() ;

/// @brief Method get_alignmentMode, addr 0xb3193e0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineAnimate_AlignmentMode get_alignmentMode() ;

/// @brief Method get_duration, addr 0xb31916c, size 0x8, virtual false, abstract: false, final false
inline float_t get_duration() ;

/// @brief Method get_easingMode, addr 0xb3193c8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineAnimate_EasingMode get_easingMode() ;

/// @brief Method get_elapsedTime, addr 0xb319720, size 0x8, virtual false, abstract: false, final false
inline float_t get_elapsedTime() ;

/// @brief Method get_isPlaying, addr 0xb319b20, size 0x8, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

/// @brief Method get_loopMode, addr 0xb31913c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineAnimate_LoopMode get_loopMode() ;

/// @brief Method get_maxSpeed, addr 0xb319298, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxSpeed() ;

/// @brief Method get_method, addr 0xb319154, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineAnimate_Method get_method() ;

/// @brief Method get_normalizedTime, addr 0xb319534, size 0x8, virtual false, abstract: false, final false
inline float_t get_normalizedTime() ;

/// @brief Method get_objectForwardAxis, addr 0xb3193f8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineComponent_AlignAxis get_objectForwardAxis() ;

/// @brief Method get_objectUpAxis, addr 0xb3194c4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineComponent_AlignAxis get_objectUpAxis() ;

/// @brief Method get_playOnAwake, addr 0xb319124, size 0x8, virtual false, abstract: false, final false
inline bool get_playOnAwake() ;

/// @brief Method get_splineContainer, addr 0xb318ecc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Splines::SplineContainer> get_splineContainer() ;

/// [CompilerGenerated]
/// @brief Method remove_Completed, addr 0xb319e8c, size 0x9c, virtual false, abstract: false, final false
inline void remove_Completed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_Updated, addr 0xb319d40, size 0xb0, virtual false, abstract: false, final false
inline void remove_Updated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onUpdated, addr 0xb319be0, size 0xb0, virtual false, abstract: false, final false
inline void remove_onUpdated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

static inline void setStaticF_k_EmptyContainerError(::StringW  value) ;

/// @brief Method set_Alignment, addr 0xb3193f0, size 0x8, virtual false, abstract: false, final false
inline void set_Alignment(::GlobalNamespace::SplineAnimate_AlignmentMode  value) ;

/// @brief Method set_AnimationMethod, addr 0xb319164, size 0x8, virtual false, abstract: false, final false
inline void set_AnimationMethod(::GlobalNamespace::SplineAnimate_Method  value) ;

/// @brief Method set_Container, addr 0xb318edc, size 0x1dc, virtual false, abstract: false, final false
inline void set_Container(::UnityEngine::Splines::SplineContainer*  value) ;

/// @brief Method set_Duration, addr 0xb31917c, size 0x20, virtual false, abstract: false, final false
inline void set_Duration(float_t  value) ;

/// @brief Method set_Easing, addr 0xb3193d8, size 0x8, virtual false, abstract: false, final false
inline void set_Easing(::GlobalNamespace::SplineAnimate_EasingMode  value) ;

/// @brief Method set_ElapsedTime, addr 0xb319730, size 0x20, virtual false, abstract: false, final false
inline void set_ElapsedTime(float_t  value) ;

/// @brief Method set_Loop, addr 0xb31914c, size 0x8, virtual false, abstract: false, final false
inline void set_Loop(::GlobalNamespace::SplineAnimate_LoopMode  value) ;

/// @brief Method set_MaxSpeed, addr 0xb3192a8, size 0x24, virtual false, abstract: false, final false
inline void set_MaxSpeed(float_t  value) ;

/// @brief Method set_NormalizedTime, addr 0xb319544, size 0x58, virtual false, abstract: false, final false
inline void set_NormalizedTime(float_t  value) ;

/// @brief Method set_ObjectForwardAxis, addr 0xb319408, size 0x60, virtual false, abstract: false, final false
inline void set_ObjectForwardAxis(::GlobalNamespace::SplineComponent_AlignAxis  value) ;

/// @brief Method set_ObjectUpAxis, addr 0xb3194d4, size 0x60, virtual false, abstract: false, final false
inline void set_ObjectUpAxis(::GlobalNamespace::SplineComponent_AlignAxis  value) ;

/// @brief Method set_PlayOnAwake, addr 0xb319134, size 0x8, virtual false, abstract: false, final false
inline void set_PlayOnAwake(bool  value) ;

/// @brief Method set_StartOffset, addr 0xb3199c4, size 0x50, virtual false, abstract: false, final false
inline void set_StartOffset(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineAnimate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineAnimate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineAnimate(SplineAnimate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineAnimate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineAnimate(SplineAnimate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27951};

/// [SerializeField]
/// [Tooltip("The target spline to follow.")]
/// @brief Field m_Target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___m_Target;

/// [SerializeField]
/// [Tooltip("Enable to have the animation start when the GameObject first loads.")]
/// @brief Field m_PlayOnAwake, offset: 0x30, size: 0x1, def value: None
 bool  ___m_PlayOnAwake;

/// [SerializeField]
/// [Tooltip("The loop mode that the animation uses. Loop modes cause the animation to repeat after it finishes. The following loop modes are available:.\nOnce - Traverse the spline once and stop at the end.\nLoop Continuous - Traverse the spline continuously without stopping.\nEase In Then Continuous - Traverse the spline repeatedly without stopping. If Ease In easing is enabled, apply easing to the first loop only.\nPing Pong - Traverse the spline continuously without stopping and reverse direction after an end of the spline is reached.\n")]
/// @brief Field m_LoopMode, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::SplineAnimate_LoopMode  ___m_LoopMode;

/// [SerializeField]
/// [Tooltip("The method used to animate the GameObject along the spline.\nTime - The spline is traversed in a given amount of seconds.\nSpeed - The spline is traversed at a given maximum speed.")]
/// @brief Field m_Method, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::SplineAnimate_Method  ___m_Method;

/// [SerializeField]
/// [Tooltip("The period of time that it takes for the GameObject to complete its animation along the spline.")]
/// @brief Field m_Duration, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m_Duration;

/// [SerializeField]
/// [Tooltip("The speed in meters/second that the GameObject animates along the spline at.")]
/// @brief Field m_MaxSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_MaxSpeed;

/// [SerializeField]
/// [Tooltip("The easing mode used when the GameObject animates along the spline.\nNone - Apply no easing to the animation. The animation speed is linear.\nEase In Only - Apply easing to the beginning of animation.\nEase Out Only - Apply easing to the end of animation.\nEase In-Out - Apply easing to the beginning and end of animation.\n")]
/// @brief Field m_EasingMode, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::SplineAnimate_EasingMode  ___m_EasingMode;

/// [SerializeField]
/// [Tooltip("The coordinate space that the GameObject\'s up and forward axes align to.")]
/// @brief Field m_AlignmentMode, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::SplineAnimate_AlignmentMode  ___m_AlignmentMode;

/// [SerializeField]
/// [Tooltip("Which axis of the GameObject is treated as the forward axis.")]
/// @brief Field m_ObjectForwardAxis, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::SplineComponent_AlignAxis  ___m_ObjectForwardAxis;

/// [SerializeField]
/// [Tooltip("Which axis of the GameObject is treated as the up axis.")]
/// @brief Field m_ObjectUpAxis, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::SplineComponent_AlignAxis  ___m_ObjectUpAxis;

/// [SerializeField]
/// [Tooltip("Normalized distance [0;1] offset along the spline at which the GameObject should be placed when the animation begins.")]
/// @brief Field m_StartOffset, offset: 0x54, size: 0x4, def value: None
 float_t  ___m_StartOffset;

/// @brief Field m_StartOffsetT, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_StartOffsetT;

/// @brief Field m_PlayOnAwakeHandledForSession, offset: 0x5c, size: 0x1, def value: None
 bool  ___m_PlayOnAwakeHandledForSession;

/// @brief Field m_SplineLength, offset: 0x60, size: 0x4, def value: None
 float_t  ___m_SplineLength;

/// @brief Field m_Playing, offset: 0x64, size: 0x1, def value: None
 bool  ___m_Playing;

/// @brief Field m_NormalizedTime, offset: 0x68, size: 0x4, def value: None
 float_t  ___m_NormalizedTime;

/// @brief Field m_ElapsedTime, offset: 0x6c, size: 0x4, def value: None
 float_t  ___m_ElapsedTime;

/// @brief Field m_SplinePath, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Splines::SplinePath_1<::UnityEngine::Splines::Spline*>*  ___m_SplinePath;

/// [CompilerGenerated]
/// @brief Field onUpdated, offset: 0x78, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  ___onUpdated;

/// [CompilerGenerated]
/// @brief Field Updated, offset: 0x80, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  ___Updated;

/// @brief Field m_EndReached, offset: 0x88, size: 0x1, def value: None
 bool  ___m_EndReached;

/// [CompilerGenerated]
/// @brief Field Completed, offset: 0x90, size: 0x8, def value: None
 ::System::Action*  ___Completed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_Target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_PlayOnAwake) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_LoopMode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_Method) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_Duration) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_MaxSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_EasingMode) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_AlignmentMode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_ObjectForwardAxis) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_ObjectUpAxis) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_StartOffset) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_StartOffsetT) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_PlayOnAwakeHandledForSession) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_SplineLength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_Playing) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_NormalizedTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_ElapsedTime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_SplinePath) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___onUpdated) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___Updated) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_EndReached) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___Completed) == 0x90, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineAnimate) == 0x98, "Size mismatch!");

} // namespace end def UnityEngine::Splines

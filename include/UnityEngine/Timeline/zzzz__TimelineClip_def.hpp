#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_BlendCurveMode_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_ClipExtrapolation_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TimelineClip)
namespace GlobalNamespace {
struct TimelineClip_BlendCurveMode;
}
namespace GlobalNamespace {
struct TimelineClip_ClipExtrapolation;
}
namespace GlobalNamespace {
struct TimelineClip_Versions;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class ICurvesOwner;
}
namespace UnityEngine::Timeline {
class TimelineClip_TimelineClipUpgrade;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class TimelineClip_TimelineClipUpgrade;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::TimelineClip*);
MARK_REF_T(::UnityEngine::Timeline::TimelineClip_TimelineClipUpgrade*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::TimelineClip*, "UnityEngine.Timeline", "TimelineClip");
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::TimelineClip_TimelineClipUpgrade*, "UnityEngine.Timeline", "TimelineClip/TimelineClipUpgrade");
// Dependencies System.Object, UnityEngine.Timeline.ClipCaps, UnityEngine.Timeline.TimelineClip::BlendCurveMode, UnityEngine.Timeline.TimelineClip::ClipExtrapolation
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimelineClip
class CORDL_TYPE TimelineClip : public ::System::Object {
public:
// Declarations
using BlendCurveMode = ::GlobalNamespace::TimelineClip_BlendCurveMode;

using ClipExtrapolation = ::GlobalNamespace::TimelineClip_ClipExtrapolation;

using Versions = ::GlobalNamespace::TimelineClip_Versions;

using TimelineClipUpgrade = ::UnityEngine::Timeline::TimelineClip_TimelineClipUpgrade;

 __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_assetOwner)) ::UnityW<::UnityEngine::Object>  UnityEngine_Timeline_ICurvesOwner_assetOwner;

 __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName)) ::StringW  UnityEngine_Timeline_ICurvesOwner_defaultCurvesName;

 __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_targetTrack)) ::UnityW<::UnityEngine::Timeline::TrackAsset>  UnityEngine_Timeline_ICurvesOwner_targetTrack;

 __declspec(property(get=get_animationClip)) ::UnityW<::UnityEngine::AnimationClip>  animationClip;

 __declspec(property(get=get_asset, put=set_asset)) ::UnityW<::UnityEngine::Object>  asset;

 __declspec(property(get=get_blendInCurveMode, put=set_blendInCurveMode)) ::GlobalNamespace::TimelineClip_BlendCurveMode  blendInCurveMode;

 __declspec(property(get=get_blendInDuration, put=set_blendInDuration)) double_t  blendInDuration;

 __declspec(property(get=get_blendOutCurveMode, put=set_blendOutCurveMode)) ::GlobalNamespace::TimelineClip_BlendCurveMode  blendOutCurveMode;

 __declspec(property(get=get_blendOutDuration, put=set_blendOutDuration)) double_t  blendOutDuration;

 __declspec(property(get=get_clipAssetDuration)) double_t  clipAssetDuration;

 __declspec(property(get=get_clipCaps)) ::UnityEngine::Timeline::ClipCaps  clipCaps;

 __declspec(property(get=get_clipIn, put=set_clipIn)) double_t  clipIn;

 __declspec(property(get=get_curves, put=set_curves)) ::UnityW<::UnityEngine::AnimationClip>  curves;

 __declspec(property(get=get_displayName, put=set_displayName)) ::StringW  displayName;

 __declspec(property(get=get_duration, put=set_duration)) double_t  duration;

 __declspec(property(get=get_easeInDuration, put=set_easeInDuration)) double_t  easeInDuration;

 __declspec(property(get=get_easeOutDuration, put=set_easeOutDuration)) double_t  easeOutDuration;

 __declspec(property(get=get_easeOutTime)) double_t  easeOutTime;

/// @brief [Obsolete("Use easeOutTime instead (UnityUpgradable) -> easeOutTime", true)]
 __declspec(property(get=get_eastOutTime)) double_t  eastOutTime;

 __declspec(property(get=get_end)) double_t  end;

/// @brief [Obsolete("exposedParameter is deprecated and will be removed in a future release", true)]
 __declspec(property(get=get_exposedParameters)) ::System::Collections::Generic::List_1<::StringW>*  exposedParameters;

 __declspec(property(get=get_extrapolatedDuration)) double_t  extrapolatedDuration;

 __declspec(property(get=get_extrapolatedStart)) double_t  extrapolatedStart;

 __declspec(property(get=get_hasBlendIn)) bool  hasBlendIn;

 __declspec(property(get=get_hasBlendOut)) bool  hasBlendOut;

 __declspec(property(get=get_hasCurves)) bool  hasCurves;

 __declspec(property(get=get_hasPostExtrapolation)) bool  hasPostExtrapolation;

 __declspec(property(get=get_hasPreExtrapolation)) bool  hasPreExtrapolation;

/// @brief Field kDefaultClipCaps, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kDefaultClipCaps, put=setStaticF_kDefaultClipCaps)) ::UnityEngine::Timeline::ClipCaps  kDefaultClipCaps;

/// @brief Field kDefaultClipDurationInSeconds, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kDefaultClipDurationInSeconds, put=setStaticF_kDefaultClipDurationInSeconds)) float_t  kDefaultClipDurationInSeconds;

/// @brief Field kDefaultCurvesName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kDefaultCurvesName, put=setStaticF_kDefaultCurvesName)) ::StringW  kDefaultCurvesName;

/// @brief Field kMaxTimeValue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kMaxTimeValue, put=setStaticF_kMaxTimeValue)) double_t  kMaxTimeValue;

/// @brief Field kMinDuration, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kMinDuration, put=setStaticF_kMinDuration)) double_t  kMinDuration;

/// @brief Field kTimeScaleMax, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kTimeScaleMax, put=setStaticF_kTimeScaleMax)) double_t  kTimeScaleMax;

/// @brief Field kTimeScaleMin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kTimeScaleMin, put=setStaticF_kTimeScaleMin)) double_t  kTimeScaleMin;

/// @brief Field m_AnimationCurves, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AnimationCurves, put=__cordl_internal_set_m_AnimationCurves)) ::UnityW<::UnityEngine::AnimationClip>  m_AnimationCurves;

/// @brief Field m_Asset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Asset, put=__cordl_internal_set_m_Asset)) ::UnityW<::UnityEngine::Object>  m_Asset;

/// @brief Field m_BlendInCurveMode, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BlendInCurveMode, put=__cordl_internal_set_m_BlendInCurveMode)) ::GlobalNamespace::TimelineClip_BlendCurveMode  m_BlendInCurveMode;

/// @brief Field m_BlendInDuration, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BlendInDuration, put=__cordl_internal_set_m_BlendInDuration)) double_t  m_BlendInDuration;

/// @brief Field m_BlendOutCurveMode, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BlendOutCurveMode, put=__cordl_internal_set_m_BlendOutCurveMode)) ::GlobalNamespace::TimelineClip_BlendCurveMode  m_BlendOutCurveMode;

/// @brief Field m_BlendOutDuration, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BlendOutDuration, put=__cordl_internal_set_m_BlendOutDuration)) double_t  m_BlendOutDuration;

/// @brief Field m_ClipIn, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClipIn, put=__cordl_internal_set_m_ClipIn)) double_t  m_ClipIn;

/// @brief Field m_DisplayName, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DisplayName, put=__cordl_internal_set_m_DisplayName)) ::StringW  m_DisplayName;

/// @brief Field m_Duration, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Duration, put=__cordl_internal_set_m_Duration)) double_t  m_Duration;

/// @brief Field m_EaseInDuration, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_EaseInDuration, put=__cordl_internal_set_m_EaseInDuration)) double_t  m_EaseInDuration;

/// @brief Field m_EaseOutDuration, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_EaseOutDuration, put=__cordl_internal_set_m_EaseOutDuration)) double_t  m_EaseOutDuration;

/// @brief Field m_ExposedParameterNames, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ExposedParameterNames, put=__cordl_internal_set_m_ExposedParameterNames)) ::System::Collections::Generic::List_1<::StringW>*  m_ExposedParameterNames;

/// @brief Field m_MixInCurve, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MixInCurve, put=__cordl_internal_set_m_MixInCurve)) ::UnityEngine::AnimationCurve*  m_MixInCurve;

/// @brief Field m_MixOutCurve, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MixOutCurve, put=__cordl_internal_set_m_MixOutCurve)) ::UnityEngine::AnimationCurve*  m_MixOutCurve;

/// @brief Field m_ParentTrack, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ParentTrack, put=__cordl_internal_set_m_ParentTrack)) ::UnityW<::UnityEngine::Timeline::TrackAsset>  m_ParentTrack;

/// @brief Field m_PostExtrapolationMode, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PostExtrapolationMode, put=__cordl_internal_set_m_PostExtrapolationMode)) ::GlobalNamespace::TimelineClip_ClipExtrapolation  m_PostExtrapolationMode;

/// @brief Field m_PostExtrapolationTime, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PostExtrapolationTime, put=__cordl_internal_set_m_PostExtrapolationTime)) double_t  m_PostExtrapolationTime;

/// @brief Field m_PreExtrapolationMode, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PreExtrapolationMode, put=__cordl_internal_set_m_PreExtrapolationMode)) ::GlobalNamespace::TimelineClip_ClipExtrapolation  m_PreExtrapolationMode;

/// @brief Field m_PreExtrapolationTime, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreExtrapolationTime, put=__cordl_internal_set_m_PreExtrapolationTime)) double_t  m_PreExtrapolationTime;

/// @brief Field m_Recordable, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Recordable, put=__cordl_internal_set_m_Recordable)) bool  m_Recordable;

/// @brief Field m_Start, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Start, put=__cordl_internal_set_m_Start)) double_t  m_Start;

/// @brief Field m_TimeScale, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TimeScale, put=__cordl_internal_set_m_TimeScale)) double_t  m_TimeScale;

/// @brief Field m_Version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Version, put=__cordl_internal_set_m_Version)) int32_t  m_Version;

 __declspec(property(get=get_mixInCurve, put=set_mixInCurve)) ::UnityEngine::AnimationCurve*  mixInCurve;

 __declspec(property(get=get_mixInDuration)) double_t  mixInDuration;

 __declspec(property(get=get_mixInPercentage)) float_t  mixInPercentage;

 __declspec(property(get=get_mixOutCurve, put=set_mixOutCurve)) ::UnityEngine::AnimationCurve*  mixOutCurve;

 __declspec(property(get=get_mixOutDuration)) double_t  mixOutDuration;

 __declspec(property(get=get_mixOutPercentage)) float_t  mixOutPercentage;

 __declspec(property(get=get_mixOutTime)) double_t  mixOutTime;

/// @brief [Obsolete("parentTrack is deprecated and will be removed in a future release. Use GetParentTrack() and TimelineClipExtensions::MoveToTrack() or TimelineClipExtensions::TryMoveToTrack() instead.", false)]
 __declspec(property(get=get_parentTrack, put=set_parentTrack)) ::UnityW<::UnityEngine::Timeline::TrackAsset>  parentTrack;

 __declspec(property(get=get_postExtrapolationMode, put=set_postExtrapolationMode)) ::GlobalNamespace::TimelineClip_ClipExtrapolation  postExtrapolationMode;

 __declspec(property(get=get_preExtrapolationMode, put=set_preExtrapolationMode)) ::GlobalNamespace::TimelineClip_ClipExtrapolation  preExtrapolationMode;

 __declspec(property(get=get_recordable, put=set_recordable)) bool  recordable;

 __declspec(property(get=get_start, put=set_start)) double_t  start;

 __declspec(property(get=get_timeScale, put=set_timeScale)) double_t  timeScale;

/// @brief [Obsolete("underlyingAsset property is obsolete. Use asset property instead", true)]
 __declspec(property(get=get_underlyingAsset, put=set_underlyingAsset)) ::UnityW<::UnityEngine::Object>  underlyingAsset;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::Timeline::ICurvesOwner"
constexpr operator  ::UnityEngine::Timeline::ICurvesOwner*() noexcept;

/// @brief Method CalculateEasingRatio, addr 0xb3b77c8, size 0xc4, virtual false, abstract: false, final false
static inline double_t CalculateEasingRatio(double_t  easeIn, double_t  easeOut) ;

/// @brief Method ConformEaseValues, addr 0xb3b7738, size 0x90, virtual false, abstract: false, final false
inline void ConformEaseValues() ;

/// @brief Method CreateCurves, addr 0xb3b73fc, size 0xe8, virtual true, abstract: false, final true
inline void CreateCurves(::StringW  curvesClipName) ;

/// @brief Method EvaluateMixIn, addr 0xb3b6d6c, size 0xd8, virtual false, abstract: false, final false
inline float_t EvaluateMixIn(double_t  time) ;

/// @brief Method EvaluateMixOut, addr 0xb3b6c74, size 0xf8, virtual false, abstract: false, final false
inline float_t EvaluateMixOut(double_t  time) ;

/// @brief Method FromLocalTimeUnbound, addr 0xb3b7148, size 0x44, virtual false, abstract: false, final false
inline double_t FromLocalTimeUnbound(double_t  time) ;

/// @brief Method GetDefaultMixInCurve, addr 0xb3b693c, size 0x18, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* GetDefaultMixInCurve() ;

/// @brief Method GetDefaultMixOutCurve, addr 0xb3b6a54, size 0x18, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* GetDefaultMixOutCurve() ;

/// @brief Method GetExtrapolatedTime, addr 0xb3b6f84, size 0x11c, virtual false, abstract: false, final false
static inline double_t GetExtrapolatedTime(double_t  time, ::GlobalNamespace::TimelineClip_ClipExtrapolation  mode, double_t  duration) ;

/// @brief Method GetParentTrack, addr 0xb3b619c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Timeline::TrackAsset> GetParentTrack() ;

/// @brief Method Hash, addr 0xb3b6b98, size 0xdc, virtual false, abstract: false, final false
inline int32_t Hash() ;

/// @brief Method IsExtrapolatedTime, addr 0xb3b72dc, size 0x3c, virtual false, abstract: false, final false
inline bool IsExtrapolatedTime(double_t  sequenceTime) ;

/// @brief Method IsPostExtrapolatedTime, addr 0xb3b70a0, size 0x58, virtual false, abstract: false, final false
inline bool IsPostExtrapolatedTime(double_t  sequenceTime) ;

/// @brief Method IsPreExtrapolatedTime, addr 0xb3b6f34, size 0x50, virtual false, abstract: false, final false
inline bool IsPreExtrapolatedTime(double_t  sequenceTime) ;

static inline ::UnityEngine::Timeline::TimelineClip* New_ctor(::UnityEngine::Timeline::TrackAsset*  parent) ;

/// @brief Method SanitizeTimeValue, addr 0xb3b5cc8, size 0x11c, virtual false, abstract: false, final false
static inline double_t SanitizeTimeValue(double_t  value, double_t  defaultValue) ;

/// @brief Method SetParentTrack_Internal, addr 0xb3b58d8, size 0x108, virtual false, abstract: false, final false
inline void SetParentTrack_Internal(::UnityEngine::Timeline::TrackAsset*  newParentTrack) ;

/// @brief Method SetPostExtrapolationTime, addr 0xb3b72cc, size 0x8, virtual false, abstract: false, final false
inline void SetPostExtrapolationTime(double_t  time) ;

/// @brief Method SetPreExtrapolationTime, addr 0xb3b72d4, size 0x8, virtual false, abstract: false, final false
inline void SetPreExtrapolationTime(double_t  time) ;

/// @brief Method ToLocalTime, addr 0xb3b6e44, size 0xf0, virtual false, abstract: false, final false
inline double_t ToLocalTime(double_t  time) ;

/// @brief Method ToLocalTimeUnbound, addr 0xb3b70f8, size 0x50, virtual false, abstract: false, final false
inline double_t ToLocalTimeUnbound(double_t  time) ;

/// @brief Method ToString, addr 0xb3b752c, size 0x20c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0xb3b74f0, size 0x3c, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0xb3b74e4, size 0xc, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_assetOwner, addr 0xb3b6174, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Object> UnityEngine_Timeline_ICurvesOwner_get_assetOwner() ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName, addr 0xb3b6080, size 0x58, virtual true, abstract: false, final true
inline ::StringW UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName() ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_targetTrack, addr 0xb3b617c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Timeline::TrackAsset> UnityEngine_Timeline_ICurvesOwner_get_targetTrack() ;

/// @brief Method UpdateDirty, addr 0xb3b5cbc, size 0x4, virtual false, abstract: false, final false
inline void UpdateDirty(double_t  oldValue, double_t  newValue) ;

/// @brief Method UpgradeToLatestVersion, addr 0xb3b5828, size 0x3c, virtual false, abstract: false, final false
inline void UpgradeToLatestVersion() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_m_AnimationCurves() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_m_AnimationCurves() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_Asset() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_Asset() ;

constexpr ::GlobalNamespace::TimelineClip_BlendCurveMode const& __cordl_internal_get_m_BlendInCurveMode() const;

constexpr ::GlobalNamespace::TimelineClip_BlendCurveMode& __cordl_internal_get_m_BlendInCurveMode() ;

constexpr double_t const& __cordl_internal_get_m_BlendInDuration() const;

constexpr double_t& __cordl_internal_get_m_BlendInDuration() ;

constexpr ::GlobalNamespace::TimelineClip_BlendCurveMode const& __cordl_internal_get_m_BlendOutCurveMode() const;

constexpr ::GlobalNamespace::TimelineClip_BlendCurveMode& __cordl_internal_get_m_BlendOutCurveMode() ;

constexpr double_t const& __cordl_internal_get_m_BlendOutDuration() const;

constexpr double_t& __cordl_internal_get_m_BlendOutDuration() ;

constexpr double_t const& __cordl_internal_get_m_ClipIn() const;

constexpr double_t& __cordl_internal_get_m_ClipIn() ;

constexpr ::StringW const& __cordl_internal_get_m_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_m_DisplayName() ;

constexpr double_t const& __cordl_internal_get_m_Duration() const;

constexpr double_t& __cordl_internal_get_m_Duration() ;

constexpr double_t const& __cordl_internal_get_m_EaseInDuration() const;

constexpr double_t& __cordl_internal_get_m_EaseInDuration() ;

constexpr double_t const& __cordl_internal_get_m_EaseOutDuration() const;

constexpr double_t& __cordl_internal_get_m_EaseOutDuration() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_ExposedParameterNames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_ExposedParameterNames() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_MixInCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_MixInCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_MixOutCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_MixOutCurve() ;

constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset> const& __cordl_internal_get_m_ParentTrack() const;

constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset>& __cordl_internal_get_m_ParentTrack() ;

constexpr ::GlobalNamespace::TimelineClip_ClipExtrapolation const& __cordl_internal_get_m_PostExtrapolationMode() const;

constexpr ::GlobalNamespace::TimelineClip_ClipExtrapolation& __cordl_internal_get_m_PostExtrapolationMode() ;

constexpr double_t const& __cordl_internal_get_m_PostExtrapolationTime() const;

constexpr double_t& __cordl_internal_get_m_PostExtrapolationTime() ;

constexpr ::GlobalNamespace::TimelineClip_ClipExtrapolation const& __cordl_internal_get_m_PreExtrapolationMode() const;

constexpr ::GlobalNamespace::TimelineClip_ClipExtrapolation& __cordl_internal_get_m_PreExtrapolationMode() ;

constexpr double_t const& __cordl_internal_get_m_PreExtrapolationTime() const;

constexpr double_t& __cordl_internal_get_m_PreExtrapolationTime() ;

constexpr bool const& __cordl_internal_get_m_Recordable() const;

constexpr bool& __cordl_internal_get_m_Recordable() ;

constexpr double_t const& __cordl_internal_get_m_Start() const;

constexpr double_t& __cordl_internal_get_m_Start() ;

constexpr double_t const& __cordl_internal_get_m_TimeScale() const;

constexpr double_t& __cordl_internal_get_m_TimeScale() ;

constexpr int32_t const& __cordl_internal_get_m_Version() const;

constexpr int32_t& __cordl_internal_get_m_Version() ;

constexpr void __cordl_internal_set_m_AnimationCurves(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set_m_Asset(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_BlendInCurveMode(::GlobalNamespace::TimelineClip_BlendCurveMode  value) ;

constexpr void __cordl_internal_set_m_BlendInDuration(double_t  value) ;

constexpr void __cordl_internal_set_m_BlendOutCurveMode(::GlobalNamespace::TimelineClip_BlendCurveMode  value) ;

constexpr void __cordl_internal_set_m_BlendOutDuration(double_t  value) ;

constexpr void __cordl_internal_set_m_ClipIn(double_t  value) ;

constexpr void __cordl_internal_set_m_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_m_Duration(double_t  value) ;

constexpr void __cordl_internal_set_m_EaseInDuration(double_t  value) ;

constexpr void __cordl_internal_set_m_EaseOutDuration(double_t  value) ;

constexpr void __cordl_internal_set_m_ExposedParameterNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_m_MixInCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_m_MixOutCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_m_ParentTrack(::UnityW<::UnityEngine::Timeline::TrackAsset>  value) ;

constexpr void __cordl_internal_set_m_PostExtrapolationMode(::GlobalNamespace::TimelineClip_ClipExtrapolation  value) ;

constexpr void __cordl_internal_set_m_PostExtrapolationTime(double_t  value) ;

constexpr void __cordl_internal_set_m_PreExtrapolationMode(::GlobalNamespace::TimelineClip_ClipExtrapolation  value) ;

constexpr void __cordl_internal_set_m_PreExtrapolationTime(double_t  value) ;

constexpr void __cordl_internal_set_m_Recordable(bool  value) ;

constexpr void __cordl_internal_set_m_Start(double_t  value) ;

constexpr void __cordl_internal_set_m_TimeScale(double_t  value) ;

constexpr void __cordl_internal_set_m_Version(int32_t  value) ;

/// @brief Method .ctor, addr 0xb3b589c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Timeline::TrackAsset*  parent) ;

static inline ::UnityEngine::Timeline::ClipCaps getStaticF_kDefaultClipCaps() ;

static inline float_t getStaticF_kDefaultClipDurationInSeconds() ;

static inline ::StringW getStaticF_kDefaultCurvesName() ;

static inline double_t getStaticF_kMaxTimeValue() ;

static inline double_t getStaticF_kMinDuration() ;

static inline double_t getStaticF_kTimeScaleMax() ;

static inline double_t getStaticF_kTimeScaleMin() ;

/// @brief Method get_animationClip, addr 0xb3b718c, size 0xf8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_animationClip() ;

/// @brief Method get_asset, addr 0xb3b6164, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Object> get_asset() ;

/// @brief Method get_blendInCurveMode, addr 0xb3b6888, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TimelineClip_BlendCurveMode get_blendInCurveMode() ;

/// @brief Method get_blendInDuration, addr 0xb3b6738, size 0x20, virtual false, abstract: false, final false
inline double_t get_blendInDuration() ;

/// @brief Method get_blendOutCurveMode, addr 0xb3b6898, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TimelineClip_BlendCurveMode get_blendOutCurveMode() ;

/// @brief Method get_blendOutDuration, addr 0xb3b67e0, size 0x20, virtual false, abstract: false, final false
inline double_t get_blendOutDuration() ;

/// @brief Method get_clipAssetDuration, addr 0xb3b5fb0, size 0xc0, virtual false, abstract: false, final false
inline double_t get_clipAssetDuration() ;

/// @brief Method get_clipCaps, addr 0xb3b5af8, size 0xe4, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method get_clipIn, addr 0xb3b5ea8, size 0x20, virtual false, abstract: false, final false
inline double_t get_clipIn() ;

/// @brief Method get_curves, addr 0xb3b6070, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::AnimationClip> get_curves() ;

/// @brief Method get_displayName, addr 0xb3b5fa0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_displayName() ;

/// @brief Method get_duration, addr 0xb3b5e90, size 0x8, virtual true, abstract: false, final true
inline double_t get_duration() ;

/// @brief Method get_easeInDuration, addr 0xb3b6320, size 0xbc, virtual false, abstract: false, final false
inline double_t get_easeInDuration() ;

/// @brief Method get_easeOutDuration, addr 0xb3b6500, size 0xbc, virtual false, abstract: false, final false
inline double_t get_easeOutDuration() ;

/// @brief Method get_easeOutTime, addr 0xb3b670c, size 0x2c, virtual false, abstract: false, final false
inline double_t get_easeOutTime() ;

/// @brief Method get_eastOutTime, addr 0xb3b66e0, size 0x2c, virtual false, abstract: false, final false
inline double_t get_eastOutTime() ;

/// @brief Method get_end, addr 0xb3b5e98, size 0x10, virtual false, abstract: false, final false
inline double_t get_end() ;

/// @brief Method get_exposedParameters, addr 0xb3b6b14, size 0x84, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_exposedParameters() ;

/// @brief Method get_extrapolatedDuration, addr 0xb3b7330, size 0xcc, virtual false, abstract: false, final false
inline double_t get_extrapolatedDuration() ;

/// @brief Method get_extrapolatedStart, addr 0xb3b7318, size 0x18, virtual false, abstract: false, final false
inline double_t get_extrapolatedStart() ;

/// @brief Method get_hasBlendIn, addr 0xb3b65bc, size 0x2c, virtual false, abstract: false, final false
inline bool get_hasBlendIn() ;

/// @brief Method get_hasBlendOut, addr 0xb3b63dc, size 0x2c, virtual false, abstract: false, final false
inline bool get_hasBlendOut() ;

/// @brief Method get_hasCurves, addr 0xb3b60d8, size 0x8c, virtual true, abstract: false, final true
inline bool get_hasCurves() ;

/// @brief Method get_hasPostExtrapolation, addr 0xb3b5a00, size 0x20, virtual false, abstract: false, final false
inline bool get_hasPostExtrapolation() ;

/// @brief Method get_hasPreExtrapolation, addr 0xb3b59e0, size 0x20, virtual false, abstract: false, final false
inline bool get_hasPreExtrapolation() ;

/// @brief Method get_mixInCurve, addr 0xb3b68a8, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_mixInCurve() ;

/// @brief Method get_mixInDuration, addr 0xb3b697c, size 0x44, virtual false, abstract: false, final false
inline double_t get_mixInDuration() ;

/// @brief Method get_mixInPercentage, addr 0xb3b695c, size 0x20, virtual false, abstract: false, final false
inline float_t get_mixInPercentage() ;

/// @brief Method get_mixOutCurve, addr 0xb3b69c0, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_mixOutCurve() ;

/// @brief Method get_mixOutDuration, addr 0xb3b6aa0, size 0x44, virtual false, abstract: false, final false
inline double_t get_mixOutDuration() ;

/// @brief Method get_mixOutPercentage, addr 0xb3b6ae4, size 0x20, virtual false, abstract: false, final false
inline float_t get_mixOutPercentage() ;

/// @brief Method get_mixOutTime, addr 0xb3b6a74, size 0x2c, virtual false, abstract: false, final false
inline double_t get_mixOutTime() ;

/// @brief Method get_parentTrack, addr 0xb3b6190, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Timeline::TrackAsset> get_parentTrack() ;

/// @brief Method get_postExtrapolationMode, addr 0xb3b7284, size 0x24, virtual false, abstract: false, final false
inline ::GlobalNamespace::TimelineClip_ClipExtrapolation get_postExtrapolationMode() ;

/// @brief Method get_preExtrapolationMode, addr 0xb3b72a8, size 0x24, virtual false, abstract: false, final false
inline ::GlobalNamespace::TimelineClip_ClipExtrapolation get_preExtrapolationMode() ;

/// @brief Method get_recordable, addr 0xb3b6b04, size 0x8, virtual false, abstract: false, final false
inline bool get_recordable() ;

/// @brief Method get_start, addr 0xb3b5cc0, size 0x8, virtual false, abstract: false, final false
inline double_t get_start() ;

/// @brief Method get_timeScale, addr 0xb3b5a20, size 0xd8, virtual false, abstract: false, final false
inline double_t get_timeScale() ;

/// @brief Method get_underlyingAsset, addr 0xb3b6184, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_underlyingAsset() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Convert to "::UnityEngine::Timeline::ICurvesOwner"
constexpr ::UnityEngine::Timeline::ICurvesOwner* i___UnityEngine__Timeline__ICurvesOwner() noexcept;

static inline void setStaticF_kDefaultClipCaps(::UnityEngine::Timeline::ClipCaps  value) ;

static inline void setStaticF_kDefaultClipDurationInSeconds(float_t  value) ;

static inline void setStaticF_kDefaultCurvesName(::StringW  value) ;

static inline void setStaticF_kMaxTimeValue(double_t  value) ;

static inline void setStaticF_kMinDuration(double_t  value) ;

static inline void setStaticF_kTimeScaleMax(double_t  value) ;

static inline void setStaticF_kTimeScaleMin(double_t  value) ;

/// @brief Method set_asset, addr 0xb3b616c, size 0x8, virtual false, abstract: false, final false
inline void set_asset(::UnityEngine::Object*  value) ;

/// @brief Method set_blendInCurveMode, addr 0xb3b6890, size 0x8, virtual false, abstract: false, final false
inline void set_blendInCurveMode(::GlobalNamespace::TimelineClip_BlendCurveMode  value) ;

/// @brief Method set_blendInDuration, addr 0xb3b6758, size 0x88, virtual false, abstract: false, final false
inline void set_blendInDuration(double_t  value) ;

/// @brief Method set_blendOutCurveMode, addr 0xb3b68a0, size 0x8, virtual false, abstract: false, final false
inline void set_blendOutCurveMode(::GlobalNamespace::TimelineClip_BlendCurveMode  value) ;

/// @brief Method set_blendOutDuration, addr 0xb3b6800, size 0x88, virtual false, abstract: false, final false
inline void set_blendOutDuration(double_t  value) ;

/// @brief Method set_clipIn, addr 0xb3b5ec8, size 0xd8, virtual false, abstract: false, final false
inline void set_clipIn(double_t  value) ;

/// @brief Method set_curves, addr 0xb3b6078, size 0x8, virtual false, abstract: false, final false
inline void set_curves(::UnityEngine::AnimationClip*  value) ;

/// @brief Method set_displayName, addr 0xb3b5fa8, size 0x8, virtual false, abstract: false, final false
inline void set_displayName(::StringW  value) ;

/// @brief Method set_duration, addr 0xb3b1ec4, size 0x118, virtual false, abstract: false, final false
inline void set_duration(double_t  value) ;

/// @brief Method set_easeInDuration, addr 0xb3b6408, size 0xf8, virtual false, abstract: false, final false
inline void set_easeInDuration(double_t  value) ;

/// @brief Method set_easeOutDuration, addr 0xb3b65e8, size 0xf8, virtual false, abstract: false, final false
inline void set_easeOutDuration(double_t  value) ;

/// @brief Method set_mixInCurve, addr 0xb3b6954, size 0x8, virtual false, abstract: false, final false
inline void set_mixInCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_mixOutCurve, addr 0xb3b6a6c, size 0x8, virtual false, abstract: false, final false
inline void set_mixOutCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_parentTrack, addr 0xb3b6198, size 0x4, virtual false, abstract: false, final false
inline void set_parentTrack(::UnityEngine::Timeline::TrackAsset*  value) ;

/// @brief Method set_postExtrapolationMode, addr 0xb3b2164, size 0x34, virtual false, abstract: false, final false
inline void set_postExtrapolationMode(::GlobalNamespace::TimelineClip_ClipExtrapolation  value) ;

/// @brief Method set_preExtrapolationMode, addr 0xb3b2130, size 0x34, virtual false, abstract: false, final false
inline void set_preExtrapolationMode(::GlobalNamespace::TimelineClip_ClipExtrapolation  value) ;

/// @brief Method set_recordable, addr 0xb3b6b0c, size 0x8, virtual false, abstract: false, final false
inline void set_recordable(bool  value) ;

/// @brief Method set_start, addr 0xb3b1d84, size 0x140, virtual false, abstract: false, final false
inline void set_start(double_t  value) ;

/// @brief Method set_timeScale, addr 0xb3b5be8, size 0xd4, virtual false, abstract: false, final false
inline void set_timeScale(double_t  value) ;

/// @brief Method set_underlyingAsset, addr 0xb3b618c, size 0x4, virtual false, abstract: false, final false
inline void set_underlyingAsset(::UnityEngine::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimelineClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimelineClip", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimelineClip(TimelineClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimelineClip", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimelineClip(TimelineClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28699};

/// @brief Field k_LatestVersion offset 0xffffffff size 0x4
static constexpr int32_t  k_LatestVersion{static_cast<int32_t>(0x1)};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_Version;

/// [SerializeField]
/// @brief Field m_Start, offset: 0x18, size: 0x8, def value: None
 double_t  ___m_Start;

/// [SerializeField]
/// @brief Field m_ClipIn, offset: 0x20, size: 0x8, def value: None
 double_t  ___m_ClipIn;

/// [SerializeField]
/// @brief Field m_Asset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_Asset;

/// [SerializeField]
/// [FormerlySerializedAs("m_HackDuration")]
/// @brief Field m_Duration, offset: 0x30, size: 0x8, def value: None
 double_t  ___m_Duration;

/// [SerializeField]
/// @brief Field m_TimeScale, offset: 0x38, size: 0x8, def value: None
 double_t  ___m_TimeScale;

/// [SerializeField]
/// @brief Field m_ParentTrack, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Timeline::TrackAsset>  ___m_ParentTrack;

/// [SerializeField]
/// @brief Field m_EaseInDuration, offset: 0x48, size: 0x8, def value: None
 double_t  ___m_EaseInDuration;

/// [SerializeField]
/// @brief Field m_EaseOutDuration, offset: 0x50, size: 0x8, def value: None
 double_t  ___m_EaseOutDuration;

/// [SerializeField]
/// @brief Field m_BlendInDuration, offset: 0x58, size: 0x8, def value: None
 double_t  ___m_BlendInDuration;

/// [SerializeField]
/// @brief Field m_BlendOutDuration, offset: 0x60, size: 0x8, def value: None
 double_t  ___m_BlendOutDuration;

/// [SerializeField]
/// @brief Field m_MixInCurve, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___m_MixInCurve;

/// [SerializeField]
/// @brief Field m_MixOutCurve, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___m_MixOutCurve;

/// [SerializeField]
/// @brief Field m_BlendInCurveMode, offset: 0x78, size: 0x4, def value: None
 ::GlobalNamespace::TimelineClip_BlendCurveMode  ___m_BlendInCurveMode;

/// [SerializeField]
/// @brief Field m_BlendOutCurveMode, offset: 0x7c, size: 0x4, def value: None
 ::GlobalNamespace::TimelineClip_BlendCurveMode  ___m_BlendOutCurveMode;

/// [SerializeField]
/// @brief Field m_ExposedParameterNames, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___m_ExposedParameterNames;

/// [SerializeField]
/// @brief Field m_AnimationCurves, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___m_AnimationCurves;

/// [SerializeField]
/// @brief Field m_Recordable, offset: 0x90, size: 0x1, def value: None
 bool  ___m_Recordable;

/// [SerializeField]
/// @brief Field m_PostExtrapolationMode, offset: 0x94, size: 0x4, def value: None
 ::GlobalNamespace::TimelineClip_ClipExtrapolation  ___m_PostExtrapolationMode;

/// [SerializeField]
/// @brief Field m_PreExtrapolationMode, offset: 0x98, size: 0x4, def value: None
 ::GlobalNamespace::TimelineClip_ClipExtrapolation  ___m_PreExtrapolationMode;

/// [SerializeField]
/// @brief Field m_PostExtrapolationTime, offset: 0xa0, size: 0x8, def value: None
 double_t  ___m_PostExtrapolationTime;

/// [SerializeField]
/// @brief Field m_PreExtrapolationTime, offset: 0xa8, size: 0x8, def value: None
 double_t  ___m_PreExtrapolationTime;

/// [SerializeField]
/// @brief Field m_DisplayName, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___m_DisplayName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_Start) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_ClipIn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_Asset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_Duration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_TimeScale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_ParentTrack) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_EaseInDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_EaseOutDuration) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_BlendInDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_BlendOutDuration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_MixInCurve) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_MixOutCurve) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_BlendInCurveMode) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_BlendOutCurveMode) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_ExposedParameterNames) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_AnimationCurves) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_Recordable) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_PostExtrapolationMode) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_PreExtrapolationMode) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_PostExtrapolationTime) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_PreExtrapolationTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_DisplayName) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Timeline::TimelineClip) == 0xb8, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimelineClip/TimelineClipUpgrade
class CORDL_TYPE TimelineClip_TimelineClipUpgrade : public ::System::Object {
public:
// Declarations
/// @brief Method UpgradeClipInFromGlobalToLocal, addr 0xb3b5864, size 0x38, virtual false, abstract: false, final false
static inline void UpgradeClipInFromGlobalToLocal(::UnityEngine::Timeline::TimelineClip*  clip) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimelineClip_TimelineClipUpgrade() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimelineClip_TimelineClipUpgrade", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimelineClip_TimelineClipUpgrade(TimelineClip_TimelineClipUpgrade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimelineClip_TimelineClipUpgrade", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimelineClip_TimelineClipUpgrade(TimelineClip_TimelineClipUpgrade const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28696};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Timeline::TimelineClip_TimelineClipUpgrade) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Timeline

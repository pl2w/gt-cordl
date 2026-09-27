#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TrackAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Timeline/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/Timeline/zzzz__IMarker_def.hpp"
#include "UnityEngine/Timeline/zzzz__MarkerList_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_TransientBuildData_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackAsset)
namespace GlobalNamespace {
struct TrackAsset_TransientBuildData;
}
namespace GlobalNamespace {
struct TrackAsset_Versions;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
class IPlayableAsset;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
class ICurvesOwner;
}
namespace UnityEngine::Timeline {
class IMarker;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine::Timeline {
class IPropertyPreview;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine::Timeline {
template<typename T>
class IntervalTree_1;
}
namespace UnityEngine::Timeline {
class RuntimeElement;
}
namespace UnityEngine::Timeline {
class TimelineAsset;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class TrackAsset_TrackAssetUpgrade;
}
namespace UnityEngine::Timeline {
class TrackAsset___c;
}
namespace UnityEngine::Timeline {
class TrackAsset__get_outputs_d__69;
}
namespace UnityEngine::Timeline {
class TrackBindingTypeAttribute;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Timeline {
class TrackAsset_TrackAssetUpgrade;
}
namespace UnityEngine::Timeline {
class TrackAsset___c;
}
namespace UnityEngine::Timeline {
class TrackAsset__get_outputs_d__69;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::TrackAsset*);
MARK_REF_T(::UnityEngine::Timeline::TrackAsset_TrackAssetUpgrade*);
MARK_REF_T(::UnityEngine::Timeline::TrackAsset___c*);
MARK_REF_T(::UnityEngine::Timeline::TrackAsset__get_outputs_d__69*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::TrackAsset*, "UnityEngine.Timeline", "TrackAsset");
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::TrackAsset_TrackAssetUpgrade*, "UnityEngine.Timeline", "TrackAsset/TrackAssetUpgrade");
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::TrackAsset___c*, "UnityEngine.Timeline", "TrackAsset/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::TrackAsset__get_outputs_d__69*, "UnityEngine.Timeline", "TrackAsset/<get_outputs>d__69");
// [IgnoreOnPlayableTrack]
// Dependencies System.Nullable`1<T>, UnityEngine.Playables.IPlayableAsset, UnityEngine.Playables.PlayableAsset, UnityEngine.ScriptableObject, UnityEngine.Timeline.DiscreteTime, UnityEngine.Timeline.IMarker, UnityEngine.Timeline.MarkerList, UnityEngine.Timeline.TimelineClip, UnityEngine.Timeline.TrackAsset::TransientBuildData
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TrackAsset
class CORDL_TYPE TrackAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
using TransientBuildData = ::GlobalNamespace::TrackAsset_TransientBuildData;

using Versions = ::GlobalNamespace::TrackAsset_Versions;

using TrackAssetUpgrade = ::UnityEngine::Timeline::TrackAsset_TrackAssetUpgrade;

using __c = ::UnityEngine::Timeline::TrackAsset___c;

using _get_outputs_d__69 = ::UnityEngine::Timeline::TrackAsset__get_outputs_d__69;

/// @brief Field OnClipPlayableCreate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnClipPlayableCreate, put=setStaticF_OnClipPlayableCreate)) ::System::Action_3<::UnityEngine::Timeline::TimelineClip*,::UnityW<::UnityEngine::GameObject>,::UnityEngine::Playables::Playable>*  OnClipPlayableCreate;

/// @brief Field OnTrackAnimationPlayableCreate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnTrackAnimationPlayableCreate, put=setStaticF_OnTrackAnimationPlayableCreate)) ::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>,::UnityW<::UnityEngine::GameObject>,::UnityEngine::Playables::Playable>*  OnTrackAnimationPlayableCreate;

 __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_asset)) ::UnityW<::UnityEngine::Object>  UnityEngine_Timeline_ICurvesOwner_asset;

 __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_assetOwner)) ::UnityW<::UnityEngine::Object>  UnityEngine_Timeline_ICurvesOwner_assetOwner;

 __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName)) ::StringW  UnityEngine_Timeline_ICurvesOwner_defaultCurvesName;

 __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_targetTrack)) ::UnityW<::UnityEngine::Timeline::TrackAsset>  UnityEngine_Timeline_ICurvesOwner_targetTrack;

 __declspec(property(get=get_blendsValid, put=set_blendsValid)) bool  blendsValid;

 __declspec(property(get=get_clips)) ::ArrayW<::UnityEngine::Timeline::TimelineClip*>  clips;

 __declspec(property(get=get_curves, put=set_curves)) ::UnityW<::UnityEngine::AnimationClip>  curves;

 __declspec(property(get=get_customPlayableTypename, put=set_customPlayableTypename)) ::StringW  customPlayableTypename;

 __declspec(property(get=get_duration)) double_t  duration;

 __declspec(property(get=get_end)) double_t  end;

 __declspec(property(get=get_hasClips)) bool  hasClips;

 __declspec(property(get=get_hasCurves)) bool  hasCurves;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

 __declspec(property(get=get_isSubTrack)) bool  isSubTrack;

 __declspec(property(get=get_locked, put=set_locked)) bool  locked;

 __declspec(property(get=get_lockedInHierarchy)) bool  lockedInHierarchy;

/// @brief Field m_AnimClip, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AnimClip, put=__cordl_internal_set_m_AnimClip)) ::UnityW<::UnityEngine::AnimationClip>  m_AnimClip;

/// @brief Field m_BlendsValid, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_BlendsValid, put=__cordl_internal_set_m_BlendsValid)) bool  m_BlendsValid;

/// @brief Field m_CacheSorted, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CacheSorted, put=__cordl_internal_set_m_CacheSorted)) bool  m_CacheSorted;

/// @brief Field m_ChildTrackCache, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ChildTrackCache, put=__cordl_internal_set_m_ChildTrackCache)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*  m_ChildTrackCache;

/// @brief Field m_Children, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Children, put=__cordl_internal_set_m_Children)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>*  m_Children;

/// @brief Field m_Clips, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Clips, put=__cordl_internal_set_m_Clips)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*  m_Clips;

/// @brief Field m_ClipsCache, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClipsCache, put=__cordl_internal_set_m_ClipsCache)) ::ArrayW<::UnityEngine::Timeline::TimelineClip*>  m_ClipsCache;

/// @brief Field m_Curves, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Curves, put=__cordl_internal_set_m_Curves)) ::UnityW<::UnityEngine::AnimationClip>  m_Curves;

/// @brief Field m_CustomPlayableFullTypename, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CustomPlayableFullTypename, put=__cordl_internal_set_m_CustomPlayableFullTypename)) ::StringW  m_CustomPlayableFullTypename;

/// @brief Field m_End, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_End, put=__cordl_internal_set_m_End)) ::UnityEngine::Timeline::DiscreteTime  m_End;

/// @brief Field m_ItemsHash, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ItemsHash, put=__cordl_internal_set_m_ItemsHash)) int32_t  m_ItemsHash;

/// @brief Field m_Locked, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Locked, put=__cordl_internal_set_m_Locked)) bool  m_Locked;

/// @brief Field m_Markers, offset 0x98, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_Markers, put=__cordl_internal_set_m_Markers)) ::UnityEngine::Timeline::MarkerList  m_Markers;

/// @brief Field m_Muted, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Muted, put=__cordl_internal_set_m_Muted)) bool  m_Muted;

/// @brief Field m_Parent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Parent, put=__cordl_internal_set_m_Parent)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  m_Parent;

/// @brief Field m_Start, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Start, put=__cordl_internal_set_m_Start)) ::UnityEngine::Timeline::DiscreteTime  m_Start;

/// @brief Field m_SupportsNotifications, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_SupportsNotifications, put=__cordl_internal_set_m_SupportsNotifications)) ::System::Nullable_1<bool>  m_SupportsNotifications;

/// @brief Field m_Version, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Version, put=__cordl_internal_set_m_Version)) int32_t  m_Version;

 __declspec(property(get=get_muted, put=set_muted)) bool  muted;

 __declspec(property(get=get_mutedInHierarchy)) bool  mutedInHierarchy;

 __declspec(property(get=get_outputs)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*  outputs;

 __declspec(property(get=get_parent, put=set_parent)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  parent;

/// @brief Field s_BuildData, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_s_BuildData, put=setStaticF_s_BuildData)) ::GlobalNamespace::TrackAsset_TransientBuildData  s_BuildData;

/// @brief Field s_EmptyCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_EmptyCache, put=setStaticF_s_EmptyCache)) ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>>  s_EmptyCache;

/// @brief Field s_TrackBindingTypeAttributeCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TrackBindingTypeAttributeCache, put=setStaticF_s_TrackBindingTypeAttributeCache)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Timeline::TrackBindingTypeAttribute*>*  s_TrackBindingTypeAttributeCache;

 __declspec(property(get=get_start)) double_t  start;

 __declspec(property(get=get_subTracksObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>*  subTracksObjects;

 __declspec(property(get=get_supportsNotifications)) bool  supportsNotifications;

 __declspec(property(get=get_timelineAsset)) ::UnityW<::UnityEngine::Timeline::TimelineAsset>  timelineAsset;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::Timeline::ICurvesOwner"
constexpr operator  ::UnityEngine::Timeline::ICurvesOwner*() noexcept;

/// @brief Convert operator to "::UnityEngine::Timeline::IPropertyPreview"
constexpr operator  ::UnityEngine::Timeline::IPropertyPreview*() noexcept;

/// @brief Method AddChild, addr 0xb3bad54, size 0x114, virtual false, abstract: false, final false
inline void AddChild(::UnityEngine::Timeline::TrackAsset*  child) ;

/// @brief Method AddClip, addr 0xb3b6224, size 0xfc, virtual false, abstract: false, final false
inline void AddClip(::UnityEngine::Timeline::TimelineClip*  newClip) ;

/// @brief Method AddMarker, addr 0xb3be580, size 0x8, virtual false, abstract: false, final false
inline void AddMarker(::UnityEngine::ScriptableObject*  e) ;

/// @brief Method CalculateItemsHash, addr 0xb3b22f8, size 0x88, virtual true, abstract: false, final false
inline int32_t CalculateItemsHash() ;

/// @brief Method CanCompileClips, addr 0xb3af27c, size 0x5c, virtual true, abstract: false, final false
inline bool CanCompileClips() ;

/// @brief Method CanCompileNotifications, addr 0xb3bfff0, size 0x34, virtual false, abstract: false, final false
inline bool CanCompileNotifications() ;

/// @brief Method CanCreateMixerRecursive, addr 0xb3bf318, size 0x2e4, virtual false, abstract: false, final false
inline bool CanCreateMixerRecursive() ;

/// @brief Method CanCreateTrackMixer, addr 0xb3c14ac, size 0x10, virtual true, abstract: false, final false
inline bool CanCreateTrackMixer() ;

/// @brief Method ClearClipsInternal, addr 0xb3c0714, size 0x8c, virtual false, abstract: false, final false
inline void ClearClipsInternal() ;

/// @brief Method ClearMarkers, addr 0xb3be508, size 0x8, virtual false, abstract: false, final false
inline void ClearMarkers() ;

/// @brief Method ClearSubTracksInternal, addr 0xb3c07a0, size 0x84, virtual false, abstract: false, final false
inline void ClearSubTracksInternal() ;

/// @brief Method CompileClips, addr 0xb3bf6dc, size 0x424, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CompileClips(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, ::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TimelineClip*>*  timelineClips, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*  tree) ;

/// @brief Method ConfigureTrackAnimation, addr 0xb3bfb00, size 0x158, virtual false, abstract: false, final false
inline void ConfigureTrackAnimation(::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*  tree, ::UnityEngine::GameObject*  go, ::UnityEngine::Playables::Playable  blend) ;

/// @brief Method CreateAndAddNewClipOfType, addr 0xb3bd1c8, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::TimelineClip* CreateAndAddNewClipOfType(::System::Type*  requestedType) ;

/// @brief Method CreateClip, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::ScriptableObject*> && ::cordl_internals::type_constraint<T, ::UnityEngine::Playables::IPlayableAsset*>)
inline ::UnityEngine::Timeline::TimelineClip* CreateClip() ;

/// @brief Method CreateClip, addr 0xb3bd8b8, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::TimelineClip* CreateClip(::System::Type*  requestedType) ;

/// @brief Method CreateClipFromAsset, addr 0xb3bddf0, size 0x27c, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::TimelineClip* CreateClipFromAsset(::UnityEngine::ScriptableObject*  playableAsset) ;

/// @brief Method CreateClipFromPlayableAsset, addr 0xb3be06c, size 0x250, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::TimelineClip* CreateClipFromPlayableAsset(::UnityEngine::Playables::IPlayableAsset*  asset) ;

/// @brief Method CreateClipOfType, addr 0xb3bdc2c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::TimelineClip* CreateClipOfType(::System::Type*  requestedType) ;

/// @brief Method CreateCurves, addr 0xb3bcd78, size 0xd0, virtual true, abstract: false, final true
inline void CreateCurves(::StringW  curvesClipName) ;

/// @brief Method CreateDefaultClip, addr 0xb3bcf08, size 0x2c0, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::TimelineClip* CreateDefaultClip() ;

/// @brief Method CreateMarker, addr 0xb3bd308, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::IMarker* CreateMarker(::System::Type*  type, double_t  time) ;

/// @brief Method CreateMarker, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::ScriptableObject*> && ::cordl_internals::type_constraint<T, ::UnityEngine::Timeline::IMarker*>)
inline T CreateMarker(double_t  time) ;

/// @brief Method CreateMixerPlayableGraph, addr 0xb3c0024, size 0x5c8, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreateMixerPlayableGraph(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*  tree) ;

/// @brief Method CreateNewClipContainerInternal, addr 0xb3be2bc, size 0x244, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::TimelineClip* CreateNewClipContainerInternal() ;

/// @brief Method CreateNotificationsPlayable, addr 0xb3bea08, size 0x2f4, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Playables::Playable  mixerPlayable, ::UnityEngine::GameObject*  go, ::UnityEngine::Playables::Playable  timelinePlayable) ;

/// @brief Method CreatePlayable, addr 0xb3c1210, size 0x29c, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  gameObject, ::UnityEngine::Timeline::TimelineClip*  clip) ;

/// @brief Method CreatePlayable, addr 0xb3bceb8, size 0x50, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go) ;

/// @brief Method CreatePlayableGraph, addr 0xb3bf040, size 0x2d8, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayableGraph(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*  tree, ::UnityEngine::Playables::Playable  timelinePlayable) ;

/// @brief Method CreateTrackMixer, addr 0xb3bce48, size 0x70, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, int32_t  inputCount) ;

/// @brief Method DeleteClip, addr 0xb3bd1f8, size 0x110, virtual false, abstract: false, final false
inline bool DeleteClip(::UnityEngine::Timeline::TimelineClip*  clip) ;

/// @brief Method DeleteMarker, addr 0xb3bd600, size 0x8, virtual false, abstract: false, final false
inline bool DeleteMarker(::UnityEngine::Timeline::IMarker*  marker) ;

/// @brief Method DeleteMarkerRaw, addr 0xb3be67c, size 0x30, virtual false, abstract: false, final false
inline bool DeleteMarkerRaw(::UnityEngine::ScriptableObject*  marker) ;

/// @brief Method GatherCompilableTracks, addr 0xb3bfc58, size 0x398, virtual false, abstract: false, final false
inline void GatherCompilableTracks(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*  tracks) ;

/// @brief Method GatherNotifications, addr 0xb3becfc, size 0x344, virtual false, abstract: false, final false
inline void GatherNotifications(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*  markers) ;

/// @brief Method GatherProperties, addr 0xb3c0a40, size 0x684, virtual true, abstract: false, final false
inline void GatherProperties(::UnityEngine::Playables::PlayableDirector*  director, ::UnityEngine::Timeline::IPropertyCollector*  driver) ;

/// @brief Method GetAnimationClipHash, addr 0xb3b220c, size 0xec, virtual false, abstract: false, final false
static inline int32_t GetAnimationClipHash(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method GetChildTracks, addr 0xb3b3b58, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* GetChildTracks() ;

/// @brief Method GetClips, addr 0xb3b5200, size 0x4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* GetClips() ;

/// @brief Method GetClipsHash, addr 0xb3c10c4, size 0x14c, virtual false, abstract: false, final false
inline int32_t GetClipsHash() ;

/// @brief Method GetEvaluationTime, addr 0xb3b4690, size 0x1f8, virtual true, abstract: false, final false
inline void GetEvaluationTime(::by_ref<double_t>  outStart, ::by_ref<double_t>  outDuration) ;

/// @brief Method GetGameObjectBinding, addr 0xb3af528, size 0x178, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetGameObjectBinding(::UnityEngine::Playables::PlayableDirector*  director) ;

/// @brief Method GetMarker, addr 0xb3bd850, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::IMarker* GetMarker(int32_t  idx) ;

/// @brief Method GetMarkerCount, addr 0xb3bc6c8, size 0x8, virtual false, abstract: false, final false
inline int32_t GetMarkerCount() ;

/// @brief Method GetMarkers, addr 0xb3bbfe0, size 0x1c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* GetMarkers() ;

/// @brief Method GetMarkersRaw, addr 0xb3be500, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ScriptableObject>>* GetMarkersRaw() ;

/// @brief Method GetNotificationDuration, addr 0xb3b4994, size 0x160, virtual false, abstract: false, final false
inline double_t GetNotificationDuration() ;

/// @brief Method GetSequenceTime, addr 0xb3b4984, size 0x10, virtual true, abstract: false, final false
inline void GetSequenceTime(::by_ref<double_t>  outStart, ::by_ref<double_t>  outDuration) ;

/// @brief Method GetTimeRangeHash, addr 0xb3be768, size 0x288, virtual false, abstract: false, final false
inline int32_t GetTimeRangeHash() ;

/// @brief Method HasNotifications, addr 0xb3c0a24, size 0x1c, virtual false, abstract: false, final false
inline bool HasNotifications() ;

/// @brief Method Hash, addr 0xb3c182c, size 0x38, virtual true, abstract: false, final false
inline int32_t Hash() ;

/// @brief Method Invalidate, addr 0xb3bbf40, size 0x9c, virtual false, abstract: false, final false
inline void Invalidate() ;

/// @brief Method IsCompilable, addr 0xb3c14bc, size 0x370, virtual false, abstract: false, final false
inline bool IsCompilable() ;

/// @brief Method MoveLastTrackBefore, addr 0xb3c0824, size 0x200, virtual false, abstract: false, final false
inline void MoveLastTrackBefore(::UnityEngine::Timeline::TrackAsset*  asset) ;

static inline ::UnityEngine::Timeline::TrackAsset* New_ctor() ;

/// @brief Method OnAfterTrackDeserialize, addr 0xb3bb9b0, size 0x4, virtual true, abstract: false, final false
inline void OnAfterTrackDeserialize() ;

/// @brief Method OnBeforeTrackSerialize, addr 0xb3bb9ac, size 0x4, virtual true, abstract: false, final false
inline void OnBeforeTrackSerialize() ;

/// @brief Method OnClipMove, addr 0xb3b5de4, size 0xac, virtual false, abstract: false, final false
inline void OnClipMove(::UnityEngine::Timeline::ITimelineClipAsset*  clip) ;

/// @brief Method OnCreateClip, addr 0xb3af6f4, size 0x4, virtual true, abstract: false, final false
inline void OnCreateClip(::UnityEngine::Timeline::TimelineClip*  clip) ;

/// @brief Method OnUpgradeFromVersion, addr 0xb3bb9b4, size 0x4, virtual true, abstract: false, final false
inline void OnUpgradeFromVersion(int32_t  oldVersion) ;

/// @brief Method RemoveClip, addr 0xb3b61a4, size 0x80, virtual false, abstract: false, final false
inline void RemoveClip(::UnityEngine::Timeline::TimelineClip*  clip) ;

/// @brief Method RemoveSubTrack, addr 0xb3b8fb8, size 0x84, virtual false, abstract: false, final false
inline bool RemoveSubTrack(::UnityEngine::Timeline::TrackAsset*  child) ;

/// @brief Method SortClips, addr 0xb3c05ec, size 0x128, virtual false, abstract: false, final false
inline void SortClips() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0xb3bbbbc, size 0x384, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0xb3bb9b8, size 0x178, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_asset, addr 0xb3bca18, size 0x4, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Object> UnityEngine_Timeline_ICurvesOwner_get_asset() ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_assetOwner, addr 0xb3bca1c, size 0x4, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Object> UnityEngine_Timeline_ICurvesOwner_get_assetOwner() ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName, addr 0xb3bc9d8, size 0x40, virtual true, abstract: false, final true
inline ::StringW UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName() ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_targetTrack, addr 0xb3bca20, size 0x4, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Timeline::TrackAsset> UnityEngine_Timeline_ICurvesOwner_get_targetTrack() ;

/// @brief Method UpdateChildTrackCache, addr 0xb3bc784, size 0x234, virtual false, abstract: false, final false
inline void UpdateChildTrackCache() ;

/// @brief Method UpdateDuration, addr 0xb3bc42c, size 0x10c, virtual false, abstract: false, final false
inline void UpdateDuration() ;

/// @brief Method UpgradeToLatestVersion, addr 0xb3bbfdc, size 0x4, virtual false, abstract: false, final false
inline void UpgradeToLatestVersion() ;

/// @brief Method ValidateClipType, addr 0xb3bd9b8, size 0x274, virtual false, abstract: false, final false
inline bool ValidateClipType(::System::Type*  clipType) ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_m_AnimClip() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_m_AnimClip() ;

constexpr bool const& __cordl_internal_get_m_BlendsValid() const;

constexpr bool& __cordl_internal_get_m_BlendsValid() ;

constexpr bool const& __cordl_internal_get_m_CacheSorted() const;

constexpr bool& __cordl_internal_get_m_CacheSorted() ;

constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* const& __cordl_internal_get_m_ChildTrackCache() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*& __cordl_internal_get_m_ChildTrackCache() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* const& __cordl_internal_get_m_Children() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>*& __cordl_internal_get_m_Children() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* const& __cordl_internal_get_m_Clips() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*& __cordl_internal_get_m_Clips() ;

constexpr ::ArrayW<::UnityEngine::Timeline::TimelineClip*> const& __cordl_internal_get_m_ClipsCache() const;

constexpr ::ArrayW<::UnityEngine::Timeline::TimelineClip*>& __cordl_internal_get_m_ClipsCache() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_m_Curves() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_m_Curves() ;

constexpr ::StringW const& __cordl_internal_get_m_CustomPlayableFullTypename() const;

constexpr ::StringW& __cordl_internal_get_m_CustomPlayableFullTypename() ;

constexpr ::UnityEngine::Timeline::DiscreteTime const& __cordl_internal_get_m_End() const;

constexpr ::UnityEngine::Timeline::DiscreteTime& __cordl_internal_get_m_End() ;

constexpr int32_t const& __cordl_internal_get_m_ItemsHash() const;

constexpr int32_t& __cordl_internal_get_m_ItemsHash() ;

constexpr bool const& __cordl_internal_get_m_Locked() const;

constexpr bool& __cordl_internal_get_m_Locked() ;

constexpr ::UnityEngine::Timeline::MarkerList const& __cordl_internal_get_m_Markers() const;

constexpr ::UnityEngine::Timeline::MarkerList& __cordl_internal_get_m_Markers() ;

constexpr bool const& __cordl_internal_get_m_Muted() const;

constexpr bool& __cordl_internal_get_m_Muted() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& __cordl_internal_get_m_Parent() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& __cordl_internal_get_m_Parent() ;

constexpr ::UnityEngine::Timeline::DiscreteTime const& __cordl_internal_get_m_Start() const;

constexpr ::UnityEngine::Timeline::DiscreteTime& __cordl_internal_get_m_Start() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_m_SupportsNotifications() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_m_SupportsNotifications() ;

constexpr int32_t const& __cordl_internal_get_m_Version() const;

constexpr int32_t& __cordl_internal_get_m_Version() ;

constexpr void __cordl_internal_set_m_AnimClip(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set_m_BlendsValid(bool  value) ;

constexpr void __cordl_internal_set_m_CacheSorted(bool  value) ;

constexpr void __cordl_internal_set_m_ChildTrackCache(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*  value) ;

constexpr void __cordl_internal_set_m_Children(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>*  value) ;

constexpr void __cordl_internal_set_m_Clips(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*  value) ;

constexpr void __cordl_internal_set_m_ClipsCache(::ArrayW<::UnityEngine::Timeline::TimelineClip*>  value) ;

constexpr void __cordl_internal_set_m_Curves(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set_m_CustomPlayableFullTypename(::StringW  value) ;

constexpr void __cordl_internal_set_m_End(::UnityEngine::Timeline::DiscreteTime  value) ;

constexpr void __cordl_internal_set_m_ItemsHash(int32_t  value) ;

constexpr void __cordl_internal_set_m_Locked(bool  value) ;

constexpr void __cordl_internal_set_m_Markers(::UnityEngine::Timeline::MarkerList  value) ;

constexpr void __cordl_internal_set_m_Muted(bool  value) ;

constexpr void __cordl_internal_set_m_Parent(::UnityW<::UnityEngine::Playables::PlayableAsset>  value) ;

constexpr void __cordl_internal_set_m_Start(::UnityEngine::Timeline::DiscreteTime  value) ;

constexpr void __cordl_internal_set_m_SupportsNotifications(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_m_Version(int32_t  value) ;

/// @brief Method __internalAwake, addr 0xb3bcc88, size 0xf0, virtual false, abstract: false, final false
inline void __internalAwake() ;

/// @brief Method .ctor, addr 0xb3af754, size 0xec, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnClipPlayableCreate, addr 0xb3bbffc, size 0xf4, virtual false, abstract: false, final false
static inline void add_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip*,::UnityW<::UnityEngine::GameObject>,::UnityEngine::Playables::Playable>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnTrackAnimationPlayableCreate, addr 0xb3bc1e4, size 0xf4, virtual false, abstract: false, final false
static inline void add_OnTrackAnimationPlayableCreate(::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>,::UnityW<::UnityEngine::GameObject>,::UnityEngine::Playables::Playable>*  value) ;

static inline ::System::Action_3<::UnityEngine::Timeline::TimelineClip*,::UnityW<::UnityEngine::GameObject>,::UnityEngine::Playables::Playable>* getStaticF_OnClipPlayableCreate() ;

static inline ::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>,::UnityW<::UnityEngine::GameObject>,::UnityEngine::Playables::Playable>* getStaticF_OnTrackAnimationPlayableCreate() ;

static inline ::GlobalNamespace::TrackAsset_TransientBuildData getStaticF_s_BuildData() ;

static inline ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>> getStaticF_s_EmptyCache() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Timeline::TrackBindingTypeAttribute*>* getStaticF_s_TrackBindingTypeAttributeCache() ;

/// @brief Method get_blendsValid, addr 0xb3bc5c0, size 0x8, virtual false, abstract: false, final false
inline bool get_blendsValid() ;

/// @brief Method get_clips, addr 0xb3b1618, size 0xd0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Timeline::TimelineClip*> get_clips() ;

/// @brief Method get_curves, addr 0xb3bc9c8, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::AnimationClip> get_curves() ;

/// @brief Method get_customPlayableTypename, addr 0xb3bc9b8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_customPlayableTypename() ;

/// @brief Method get_duration, addr 0xb3bc538, size 0x60, virtual true, abstract: false, final true
inline double_t get_duration() ;

/// @brief Method get_end, addr 0xb3b9a74, size 0x60, virtual false, abstract: false, final false
inline double_t get_end() ;

/// @brief Method get_hasClips, addr 0xb3af228, size 0x54, virtual false, abstract: false, final false
inline bool get_hasClips() ;

/// @brief Method get_hasCurves, addr 0xb3bc63c, size 0x8c, virtual true, abstract: false, final true
inline bool get_hasCurves() ;

/// @brief Method get_isEmpty, addr 0xb3bc5d0, size 0x6c, virtual true, abstract: false, final false
inline bool get_isEmpty() ;

/// @brief Method get_isSubTrack, addr 0xb3b201c, size 0x114, virtual false, abstract: false, final false
inline bool get_isSubTrack() ;

/// @brief Method get_locked, addr 0xb3bca2c, size 0x8, virtual false, abstract: false, final false
inline bool get_locked() ;

/// @brief Method get_lockedInHierarchy, addr 0xb3bca3c, size 0x194, virtual false, abstract: false, final false
inline bool get_lockedInHierarchy() ;

/// @brief Method get_muted, addr 0xb3bc5a0, size 0x8, virtual false, abstract: false, final false
inline bool get_muted() ;

/// @brief Method get_mutedInHierarchy, addr 0xb3b9674, size 0x194, virtual false, abstract: false, final false
inline bool get_mutedInHierarchy() ;

/// [IteratorStateMachine(typeof(UnityEngine.Timeline.TrackAsset::<get_outputs>d__69))]
/// @brief Method get_outputs, addr 0xb3bc6d0, size 0x80, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs() ;

/// @brief Method get_parent, addr 0xb3bc5b0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Playables::PlayableAsset> get_parent() ;

/// @brief Method get_start, addr 0xb3bc3cc, size 0x60, virtual false, abstract: false, final false
inline double_t get_start() ;

/// @brief Method get_subTracksObjects, addr 0xb3bca24, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* get_subTracksObjects() ;

/// @brief Method get_supportsNotifications, addr 0xb3bcbd0, size 0xb8, virtual false, abstract: false, final false
inline bool get_supportsNotifications() ;

/// @brief Method get_timelineAsset, addr 0xb3b9e28, size 0x16c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Timeline::TimelineAsset> get_timelineAsset() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Convert to "::UnityEngine::Timeline::ICurvesOwner"
constexpr ::UnityEngine::Timeline::ICurvesOwner* i___UnityEngine__Timeline__ICurvesOwner() noexcept;

/// @brief Convert to "::UnityEngine::Timeline::IPropertyPreview"
constexpr ::UnityEngine::Timeline::IPropertyPreview* i___UnityEngine__Timeline__IPropertyPreview() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnClipPlayableCreate, addr 0xb3bc0f0, size 0xf4, virtual false, abstract: false, final false
static inline void remove_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip*,::UnityW<::UnityEngine::GameObject>,::UnityEngine::Playables::Playable>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnTrackAnimationPlayableCreate, addr 0xb3bc2d8, size 0xf4, virtual false, abstract: false, final false
static inline void remove_OnTrackAnimationPlayableCreate(::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>,::UnityW<::UnityEngine::GameObject>,::UnityEngine::Playables::Playable>*  value) ;

static inline void setStaticF_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip*,::UnityW<::UnityEngine::GameObject>,::UnityEngine::Playables::Playable>*  value) ;

static inline void setStaticF_OnTrackAnimationPlayableCreate(::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>,::UnityW<::UnityEngine::GameObject>,::UnityEngine::Playables::Playable>*  value) ;

static inline void setStaticF_s_BuildData(::GlobalNamespace::TrackAsset_TransientBuildData  value) ;

static inline void setStaticF_s_EmptyCache(::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>>  value) ;

static inline void setStaticF_s_TrackBindingTypeAttributeCache(::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Timeline::TrackBindingTypeAttribute*>*  value) ;

/// @brief Method set_blendsValid, addr 0xb3bc5c8, size 0x8, virtual false, abstract: false, final false
inline void set_blendsValid(bool  value) ;

/// @brief Method set_curves, addr 0xb3bc9d0, size 0x8, virtual false, abstract: false, final false
inline void set_curves(::UnityEngine::AnimationClip*  value) ;

/// @brief Method set_customPlayableTypename, addr 0xb3bc9c0, size 0x8, virtual false, abstract: false, final false
inline void set_customPlayableTypename(::StringW  value) ;

/// @brief Method set_locked, addr 0xb3bca34, size 0x8, virtual false, abstract: false, final false
inline void set_locked(bool  value) ;

/// @brief Method set_muted, addr 0xb3bc5a8, size 0x8, virtual false, abstract: false, final false
inline void set_muted(bool  value) ;

/// @brief Method set_parent, addr 0xb3bc5b8, size 0x8, virtual false, abstract: false, final false
inline void set_parent(::UnityEngine::Playables::PlayableAsset*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackAsset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackAsset(TrackAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackAsset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackAsset(TrackAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28712};

/// @brief Field kDefaultCurvesName offset 0xffffffff size 0x8
static constexpr ::ConstString  kDefaultCurvesName{u"Track Parameters"};

/// @brief Field k_LatestVersion offset 0xffffffff size 0x4
static constexpr int32_t  k_LatestVersion{static_cast<int32_t>(0x3)};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Version, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_Version;

/// [Obsolete("Please use m_InfiniteClip (on AnimationTrack) instead.", false)]
/// [SerializeField]
/// [HideInInspector]
/// [FormerlySerializedAs("m_animClip")]
/// @brief Field m_AnimClip, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___m_AnimClip;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Locked, offset: 0x28, size: 0x1, def value: None
 bool  ___m_Locked;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Muted, offset: 0x29, size: 0x1, def value: None
 bool  ___m_Muted;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_CustomPlayableFullTypename, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___m_CustomPlayableFullTypename;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Curves, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___m_Curves;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Parent, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableAsset>  ___m_Parent;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Children, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>*  ___m_Children;

/// @brief Field m_ItemsHash, offset: 0x50, size: 0x4, def value: None
 int32_t  ___m_ItemsHash;

/// @brief Field m_ClipsCache, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Timeline::TimelineClip*>  ___m_ClipsCache;

/// @brief Field m_Start, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Timeline::DiscreteTime  ___m_Start;

/// @brief Field m_End, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Timeline::DiscreteTime  ___m_End;

/// @brief Field m_CacheSorted, offset: 0x70, size: 0x1, def value: None
 bool  ___m_CacheSorted;

/// @brief Field m_BlendsValid, offset: 0x71, size: 0x1, def value: None
 bool  ___m_BlendsValid;

/// @brief Field m_SupportsNotifications, offset: 0x78, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___m_SupportsNotifications;

/// @brief Field m_ChildTrackCache, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*  ___m_ChildTrackCache;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Clips, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*  ___m_Clips;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Markers, offset: 0x98, size: 0x18, def value: None
 ::UnityEngine::Timeline::MarkerList  ___m_Markers;

/// @brief Size padding 0xa0 - 0xb0 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_AnimClip) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Locked) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Muted) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_CustomPlayableFullTypename) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Curves) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Parent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Children) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_ItemsHash) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_ClipsCache) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Start) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_End) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_CacheSorted) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_BlendsValid) == 0x71, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_SupportsNotifications) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_ChildTrackCache) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Clips) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Markers) == 0x98, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Timeline::TrackAsset) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Playables.PlayableBinding
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TrackAsset/<get_outputs>d__69
class CORDL_TYPE TrackAsset__get_outputs_d__69 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current)) ::UnityEngine::Playables::PlayableBinding  System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x20 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityEngine::Playables::PlayableBinding  __2__current;

/// @brief Field <>4__this, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::Timeline::TrackAsset>  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb3c1c5c, size 0x240, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::Timeline::TrackAsset__get_outputs_d__69* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator, addr 0xb3c1f44, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current, addr 0xb3c1e9c, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb3c1fe8, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb3c1eac, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb3c1ee4, size 0x60, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb3c1c58, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityEngine::Playables::PlayableBinding const& __cordl_internal_get___2__current() const;

constexpr ::UnityEngine::Playables::PlayableBinding& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityEngine::Playables::PlayableBinding  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::Timeline::TrackAsset>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb3bc750, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__Playables__PlayableBinding_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__Playables__PlayableBinding_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackAsset__get_outputs_d__69() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackAsset__get_outputs_d__69", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackAsset__get_outputs_d__69(TrackAsset__get_outputs_d__69 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackAsset__get_outputs_d__69", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackAsset__get_outputs_d__69(TrackAsset__get_outputs_d__69 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28711};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x20, def value: None
 ::UnityEngine::Playables::PlayableBinding  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x38, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Timeline::TrackAsset>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TrackAsset__get_outputs_d__69, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset__get_outputs_d__69, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset__get_outputs_d__69, _____l__initialThreadId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset__get_outputs_d__69, _____4__this) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Timeline::TrackAsset__get_outputs_d__69) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TrackAsset/<>c
class CORDL_TYPE TrackAsset___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Timeline::TrackAsset___c*  __9;

/// @brief Field <>9__125_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__125_0, put=setStaticF___9__125_0)) ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*  __9__125_0;

static inline ::UnityEngine::Timeline::TrackAsset___c* New_ctor() ;

/// @brief Method <SortClips>b__125_0, addr 0xb3c1c28, size 0x30, virtual false, abstract: false, final false
inline int32_t _SortClips_b__125_0(::UnityEngine::Timeline::TimelineClip*  clip1, ::UnityEngine::Timeline::TimelineClip*  clip2) ;

/// @brief Method .ctor, addr 0xb3c1c20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Timeline::TrackAsset___c* getStaticF___9() ;

static inline ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* getStaticF___9__125_0() ;

static inline void setStaticF___9(::UnityEngine::Timeline::TrackAsset___c*  value) ;

static inline void setStaticF___9__125_0(::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackAsset___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackAsset___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackAsset___c(TrackAsset___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackAsset___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackAsset___c(TrackAsset___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28710};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Timeline::TrackAsset___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TrackAsset/TrackAssetUpgrade
class CORDL_TYPE TrackAsset_TrackAssetUpgrade : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackAsset_TrackAssetUpgrade() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackAsset_TrackAssetUpgrade", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackAsset_TrackAssetUpgrade(TrackAsset_TrackAssetUpgrade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackAsset_TrackAssetUpgrade", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackAsset_TrackAssetUpgrade(TrackAsset_TrackAssetUpgrade const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28708};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Timeline::TrackAsset_TrackAssetUpgrade) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Timeline

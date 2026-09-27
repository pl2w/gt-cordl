#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/AnimationTrack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationPlayableAsset_LoopMode_def.hpp"
#include "UnityEngine/Timeline/zzzz__MatchTargetFields_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_ClipExtrapolation_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackOffset_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationTrack)
namespace GlobalNamespace {
struct AnimationPlayableAsset_LoopMode;
}
namespace GlobalNamespace {
struct TimelineClip_ClipExtrapolation;
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
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Animations {
struct AnimationLayerMixerPlayable;
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
class AnimationTrack_AnimationTrackUpgrade;
}
namespace UnityEngine::Timeline {
class AnimationTrack__get_outputs_d__49;
}
namespace UnityEngine::Timeline {
struct AppliedOffsetMode;
}
namespace UnityEngine::Timeline {
class ILayerable;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine::Timeline {
template<typename T>
class IntervalTree_1;
}
namespace UnityEngine::Timeline {
struct MatchTargetFields;
}
namespace UnityEngine::Timeline {
class RuntimeElement;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
struct TrackOffset;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class AvatarMask;
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
namespace UnityEngine::Timeline {
class AnimationTrack;
}
namespace UnityEngine::Timeline {
class AnimationTrack_AnimationTrackUpgrade;
}
namespace UnityEngine::Timeline {
class AnimationTrack__get_outputs_d__49;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::AnimationTrack*);
MARK_REF_T(::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade*);
MARK_REF_T(::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::AnimationTrack*, "UnityEngine.Timeline", "AnimationTrack");
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade*, "UnityEngine.Timeline", "AnimationTrack/AnimationTrackUpgrade");
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*, "UnityEngine.Timeline", "AnimationTrack/<get_outputs>d__49");
// [TrackClipType(typeof(UnityEngine.Timeline.AnimationPlayableAsset), false)]
// [TrackBindingType(typeof(UnityEngine.Animator))]
// [ExcludeFromPreset]
// Dependencies UnityEngine.Quaternion, UnityEngine.Timeline.AnimationPlayableAsset::LoopMode, UnityEngine.Timeline.MatchTargetFields, UnityEngine.Timeline.TimelineClip::ClipExtrapolation, UnityEngine.Timeline.TrackAsset, UnityEngine.Timeline.TrackOffset, UnityEngine.Vector3
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.AnimationTrack
class CORDL_TYPE AnimationTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
// Declarations
using AnimationTrackUpgrade = ::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade;

using _get_outputs_d__49 = ::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49;

 __declspec(property(get=get_applyAvatarMask, put=set_applyAvatarMask)) bool  applyAvatarMask;

/// @brief [Obsolete("applyOffset is deprecated. Use trackOffset instead", true)]
 __declspec(property(get=get_applyOffsets, put=set_applyOffsets)) bool  applyOffsets;

 __declspec(property(get=get_avatarMask, put=set_avatarMask)) ::UnityW<::UnityEngine::AvatarMask>  avatarMask;

 __declspec(property(get=get_eulerAngles, put=set_eulerAngles)) ::UnityEngine::Vector3  eulerAngles;

 __declspec(property(get=get_inClipMode)) bool  inClipMode;

 __declspec(property(get=get_infiniteClip, put=set_infiniteClip)) ::UnityW<::UnityEngine::AnimationClip>  infiniteClip;

 __declspec(property(get=get_infiniteClipApplyFootIK, put=set_infiniteClipApplyFootIK)) bool  infiniteClipApplyFootIK;

 __declspec(property(get=get_infiniteClipLoop, put=set_infiniteClipLoop)) ::GlobalNamespace::AnimationPlayableAsset_LoopMode  infiniteClipLoop;

 __declspec(property(get=get_infiniteClipOffsetEulerAngles, put=set_infiniteClipOffsetEulerAngles)) ::UnityEngine::Vector3  infiniteClipOffsetEulerAngles;

 __declspec(property(get=get_infiniteClipOffsetPosition, put=set_infiniteClipOffsetPosition)) ::UnityEngine::Vector3  infiniteClipOffsetPosition;

 __declspec(property(get=get_infiniteClipOffsetRotation, put=set_infiniteClipOffsetRotation)) ::UnityEngine::Quaternion  infiniteClipOffsetRotation;

 __declspec(property(get=get_infiniteClipPostExtrapolation, put=set_infiniteClipPostExtrapolation)) ::GlobalNamespace::TimelineClip_ClipExtrapolation  infiniteClipPostExtrapolation;

 __declspec(property(get=get_infiniteClipPreExtrapolation, put=set_infiniteClipPreExtrapolation)) ::GlobalNamespace::TimelineClip_ClipExtrapolation  infiniteClipPreExtrapolation;

 __declspec(property(get=get_infiniteClipRemoveOffset, put=set_infiniteClipRemoveOffset)) bool  infiniteClipRemoveOffset;

 __declspec(property(get=get_infiniteClipTimeOffset, put=set_infiniteClipTimeOffset)) double_t  infiniteClipTimeOffset;

/// @brief Field mInfiniteClipLoop, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_mInfiniteClipLoop, put=__cordl_internal_set_mInfiniteClipLoop)) ::GlobalNamespace::AnimationPlayableAsset_LoopMode  mInfiniteClipLoop;

/// @brief Field m_ApplyAvatarMask, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ApplyAvatarMask, put=__cordl_internal_set_m_ApplyAvatarMask)) bool  m_ApplyAvatarMask;

/// @brief Field m_ApplyOffsets, offset 0x138, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ApplyOffsets, put=__cordl_internal_set_m_ApplyOffsets)) bool  m_ApplyOffsets;

/// @brief Field m_AvatarMask, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AvatarMask, put=__cordl_internal_set_m_AvatarMask)) ::UnityW<::UnityEngine::AvatarMask>  m_AvatarMask;

/// @brief Field m_EulerAngles, offset 0xf0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_EulerAngles, put=__cordl_internal_set_m_EulerAngles)) ::UnityEngine::Vector3  m_EulerAngles;

/// @brief Field m_InfiniteClip, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InfiniteClip, put=__cordl_internal_set_m_InfiniteClip)) ::UnityW<::UnityEngine::AnimationClip>  m_InfiniteClip;

/// @brief Field m_InfiniteClipApplyFootIK, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_InfiniteClipApplyFootIK, put=__cordl_internal_set_m_InfiniteClipApplyFootIK)) bool  m_InfiniteClipApplyFootIK;

/// @brief Field m_InfiniteClipOffsetEulerAngles, offset 0xc4, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_InfiniteClipOffsetEulerAngles, put=__cordl_internal_set_m_InfiniteClipOffsetEulerAngles)) ::UnityEngine::Vector3  m_InfiniteClipOffsetEulerAngles;

/// @brief Field m_InfiniteClipOffsetPosition, offset 0xb8, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_InfiniteClipOffsetPosition, put=__cordl_internal_set_m_InfiniteClipOffsetPosition)) ::UnityEngine::Vector3  m_InfiniteClipOffsetPosition;

/// @brief Field m_InfiniteClipPostExtrapolation, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InfiniteClipPostExtrapolation, put=__cordl_internal_set_m_InfiniteClipPostExtrapolation)) ::GlobalNamespace::TimelineClip_ClipExtrapolation  m_InfiniteClipPostExtrapolation;

/// @brief Field m_InfiniteClipPreExtrapolation, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InfiniteClipPreExtrapolation, put=__cordl_internal_set_m_InfiniteClipPreExtrapolation)) ::GlobalNamespace::TimelineClip_ClipExtrapolation  m_InfiniteClipPreExtrapolation;

/// @brief Field m_InfiniteClipRemoveOffset, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_InfiniteClipRemoveOffset, put=__cordl_internal_set_m_InfiniteClipRemoveOffset)) bool  m_InfiniteClipRemoveOffset;

/// @brief Field m_InfiniteClipTimeOffset, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InfiniteClipTimeOffset, put=__cordl_internal_set_m_InfiniteClipTimeOffset)) double_t  m_InfiniteClipTimeOffset;

/// @brief Field m_MatchTargetFields, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MatchTargetFields, put=__cordl_internal_set_m_MatchTargetFields)) ::UnityEngine::Timeline::MatchTargetFields  m_MatchTargetFields;

/// @brief Field m_OpenClipOffsetRotation, offset 0x118, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_OpenClipOffsetRotation, put=__cordl_internal_set_m_OpenClipOffsetRotation)) ::UnityEngine::Quaternion  m_OpenClipOffsetRotation;

/// @brief Field m_Position, offset 0xe4, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Position, put=__cordl_internal_set_m_Position)) ::UnityEngine::Vector3  m_Position;

/// @brief Field m_Rotation, offset 0x128, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_Rotation, put=__cordl_internal_set_m_Rotation)) ::UnityEngine::Quaternion  m_Rotation;

/// @brief Field m_TrackOffset, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TrackOffset, put=__cordl_internal_set_m_TrackOffset)) ::UnityEngine::Timeline::TrackOffset  m_TrackOffset;

 __declspec(property(get=get_matchTargetFields, put=set_matchTargetFields)) ::UnityEngine::Timeline::MatchTargetFields  matchTargetFields;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief [Obsolete("openClipOffsetEulerAngles has been deprecated. Use infiniteClipOffsetEulerAngles instead. (UnityUpgradable) -> infiniteClipOffsetEulerAngles", true)]
 __declspec(property(get=get_openClipOffsetEulerAngles, put=set_openClipOffsetEulerAngles)) ::UnityEngine::Vector3  openClipOffsetEulerAngles;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief [Obsolete("openClipOffsetPosition has been deprecated. Use infiniteClipOffsetPosition instead. (UnityUpgradable) -> infiniteClipOffsetPosition", true)]
 __declspec(property(get=get_openClipOffsetPosition, put=set_openClipOffsetPosition)) ::UnityEngine::Vector3  openClipOffsetPosition;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief [Obsolete("openClipOffsetRotation has been deprecated. Use infiniteClipOffsetRotation instead. (UnityUpgradable) -> infiniteClipOffsetRotation", true)]
 __declspec(property(get=get_openClipOffsetRotation, put=set_openClipOffsetRotation)) ::UnityEngine::Quaternion  openClipOffsetRotation;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief [Obsolete("openClipPostExtrapolation has been deprecated. Use infiniteClipPostExtrapolation instead. (UnityUpgradable) -> infiniteClipPostExtrapolation", true)]
 __declspec(property(get=get_openClipPostExtrapolation, put=set_openClipPostExtrapolation)) ::GlobalNamespace::TimelineClip_ClipExtrapolation  openClipPostExtrapolation;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief [Obsolete("openClipPreExtrapolation has been deprecated. Use infiniteClipPreExtrapolation instead. (UnityUpgradable) -> infiniteClipPreExtrapolation", true)]
 __declspec(property(get=get_openClipPreExtrapolation, put=set_openClipPreExtrapolation)) ::GlobalNamespace::TimelineClip_ClipExtrapolation  openClipPreExtrapolation;

 __declspec(property(get=get_outputs)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*  outputs;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_rotation, put=set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Field s_CachedQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CachedQueue, put=setStaticF_s_CachedQueue)) ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*  s_CachedQueue;

 __declspec(property(get=get_trackOffset, put=set_trackOffset)) ::UnityEngine::Timeline::TrackOffset  trackOffset;

/// @brief Convert operator to "::UnityEngine::Timeline::ILayerable"
constexpr operator  ::UnityEngine::Timeline::ILayerable*() noexcept;

/// @brief Method AnimatesRootTransform, addr 0xb3b27e0, size 0x39c, virtual false, abstract: false, final false
inline bool AnimatesRootTransform() ;

/// @brief Method ApplyTrackOffset, addr 0xb3b2b7c, size 0x1c0, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::Playable ApplyTrackOffset(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Playables::Playable  root, ::UnityEngine::GameObject*  go, ::UnityEngine::Timeline::AppliedOffsetMode  mode) ;

/// @brief Method AssignAnimationClip, addr 0xb3b18ec, size 0x234, virtual false, abstract: false, final false
inline void AssignAnimationClip(::UnityEngine::Timeline::TimelineClip*  clip, ::UnityEngine::AnimationClip*  animClip) ;

/// @brief Method AttachDefaultBlend, addr 0xb3b4158, size 0x4, virtual false, abstract: false, final false
inline void AttachDefaultBlend(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Animations::AnimationLayerMixerPlayable  mixer, bool  requireOffset) ;

/// @brief Method AttachOffsetPlayable, addr 0xb3b416c, size 0x158, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::Playable AttachOffsetPlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Playables::Playable  playable, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method CalculateItemsHash, addr 0xb3b2198, size 0x74, virtual true, abstract: false, final false
inline int32_t CalculateItemsHash() ;

/// @brief Method CanCompileClips, addr 0xb3b1474, size 0xbc, virtual true, abstract: false, final false
inline bool CanCompileClips() ;

/// @brief Method CompileTrackPlayable, addr 0xb3b2380, size 0x404, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::Playable CompileTrackPlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Timeline::AnimationTrack*  track, ::UnityEngine::GameObject*  go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*  tree, ::UnityEngine::Timeline::AppliedOffsetMode  mode) ;

/// @brief Method CreateClip, addr 0xb3b1844, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::TimelineClip* CreateClip(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method CreateGroupMixer, addr 0xb3b3c5c, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::AnimationLayerMixerPlayable CreateGroupMixer(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, int32_t  inputCount) ;

/// @brief Method CreateInfiniteClip, addr 0xb3b1b20, size 0x118, virtual false, abstract: false, final false
inline void CreateInfiniteClip(::StringW  infiniteClipName) ;

/// @brief Method CreateInfiniteTrackPlayable, addr 0xb3b3cd0, size 0x378, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreateInfiniteTrackPlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*  tree, ::UnityEngine::Timeline::AppliedOffsetMode  mode) ;

/// @brief Method CreateMixerPlayableGraph, addr 0xb3b2d8c, size 0x988, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreateMixerPlayableGraph(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*  tree) ;

/// @brief Method CreateRecordableClip, addr 0xb3b1c38, size 0x14c, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::TimelineClip* CreateRecordableClip(::StringW  animClipName) ;

/// @brief Method FindInHierarchyBreadthFirst, addr 0xb3b502c, size 0x1d4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> FindInHierarchyBreadthFirst(::UnityEngine::Transform*  t, ::StringW  name) ;

/// @brief Method GatherProperties, addr 0xb3b4af4, size 0x4, virtual true, abstract: false, final false
inline void GatherProperties(::UnityEngine::Playables::PlayableDirector*  director, ::UnityEngine::Timeline::IPropertyCollector*  driver) ;

/// @brief Method GetAnimationClips, addr 0xb3b4af8, size 0x534, virtual false, abstract: false, final false
inline void GetAnimationClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*  animClips) ;

/// @brief Method GetBinding, addr 0xb3b42c4, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Animator> GetBinding(::UnityEngine::Playables::PlayableDirector*  director) ;

/// @brief Method GetDefaultBlendCount, addr 0xb3b3c54, size 0x8, virtual false, abstract: false, final false
inline int32_t GetDefaultBlendCount() ;

/// @brief Method GetEvaluationTime, addr 0xb3b45f4, size 0x9c, virtual true, abstract: false, final false
inline void GetEvaluationTime(::by_ref<double_t>  outStart, ::by_ref<double_t>  outDuration) ;

/// @brief Method GetGenericRootNode, addr 0xb3b3714, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetGenericRootNode(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetOffsetMode, addr 0xb3b3b70, size 0xe4, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::AppliedOffsetMode GetOffsetMode(::UnityEngine::GameObject*  go, bool  animatesRootTransform) ;

/// @brief Method GetSequenceTime, addr 0xb3b4888, size 0xfc, virtual true, abstract: false, final false
inline void GetSequenceTime(::by_ref<double_t>  outStart, ::by_ref<double_t>  outDuration) ;

/// @brief Method HasController, addr 0xb3b44a8, size 0x120, virtual false, abstract: false, final false
inline bool HasController(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method IsRootTransformDisabledByMask, addr 0xb3b38fc, size 0x25c, virtual false, abstract: false, final false
inline bool IsRootTransformDisabledByMask(::UnityEngine::GameObject*  gameObject, ::UnityEngine::Transform*  genericRootNode) ;

static inline ::UnityEngine::Timeline::AnimationTrack* New_ctor() ;

/// @brief Method OnCreateClip, addr 0xb3b1fdc, size 0x40, virtual true, abstract: false, final false
inline void OnCreateClip(::UnityEngine::Timeline::TimelineClip*  clip) ;

/// @brief Method OnUpgradeFromVersion, addr 0xb3b5288, size 0x44, virtual true, abstract: false, final false
inline void OnUpgradeFromVersion(int32_t  oldVersion) ;

/// @brief Method RequiresMotionXPlayable, addr 0xb3b4048, size 0x110, virtual false, abstract: false, final false
inline bool RequiresMotionXPlayable(::UnityEngine::Timeline::AppliedOffsetMode  mode, ::UnityEngine::GameObject*  gameObject) ;

/// [ContextMenu("Reset Offsets")]
/// @brief Method ResetOffsets, addr 0xb3b17d4, size 0x6c, virtual false, abstract: false, final false
inline void ResetOffsets() ;

/// @brief Method UnityEngine.Timeline.ILayerable.CreateLayerMixer, addr 0xb3b2d3c, size 0x50, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::Playable UnityEngine_Timeline_ILayerable_CreateLayerMixer(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, int32_t  inputCount) ;

/// @brief Method UpdateClipOffsets, addr 0xb3b1840, size 0x4, virtual false, abstract: false, final false
inline void UpdateClipOffsets() ;

/// @brief Method UsesAbsoluteMotion, addr 0xb3b415c, size 0x10, virtual false, abstract: false, final false
static inline bool UsesAbsoluteMotion(::UnityEngine::Timeline::AppliedOffsetMode  mode) ;

constexpr ::GlobalNamespace::AnimationPlayableAsset_LoopMode const& __cordl_internal_get_mInfiniteClipLoop() const;

constexpr ::GlobalNamespace::AnimationPlayableAsset_LoopMode& __cordl_internal_get_mInfiniteClipLoop() ;

constexpr bool const& __cordl_internal_get_m_ApplyAvatarMask() const;

constexpr bool& __cordl_internal_get_m_ApplyAvatarMask() ;

constexpr bool const& __cordl_internal_get_m_ApplyOffsets() const;

constexpr bool& __cordl_internal_get_m_ApplyOffsets() ;

constexpr ::UnityW<::UnityEngine::AvatarMask> const& __cordl_internal_get_m_AvatarMask() const;

constexpr ::UnityW<::UnityEngine::AvatarMask>& __cordl_internal_get_m_AvatarMask() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_EulerAngles() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_EulerAngles() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_m_InfiniteClip() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_m_InfiniteClip() ;

constexpr bool const& __cordl_internal_get_m_InfiniteClipApplyFootIK() const;

constexpr bool& __cordl_internal_get_m_InfiniteClipApplyFootIK() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InfiniteClipOffsetEulerAngles() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InfiniteClipOffsetEulerAngles() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InfiniteClipOffsetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InfiniteClipOffsetPosition() ;

constexpr ::GlobalNamespace::TimelineClip_ClipExtrapolation const& __cordl_internal_get_m_InfiniteClipPostExtrapolation() const;

constexpr ::GlobalNamespace::TimelineClip_ClipExtrapolation& __cordl_internal_get_m_InfiniteClipPostExtrapolation() ;

constexpr ::GlobalNamespace::TimelineClip_ClipExtrapolation const& __cordl_internal_get_m_InfiniteClipPreExtrapolation() const;

constexpr ::GlobalNamespace::TimelineClip_ClipExtrapolation& __cordl_internal_get_m_InfiniteClipPreExtrapolation() ;

constexpr bool const& __cordl_internal_get_m_InfiniteClipRemoveOffset() const;

constexpr bool& __cordl_internal_get_m_InfiniteClipRemoveOffset() ;

constexpr double_t const& __cordl_internal_get_m_InfiniteClipTimeOffset() const;

constexpr double_t& __cordl_internal_get_m_InfiniteClipTimeOffset() ;

constexpr ::UnityEngine::Timeline::MatchTargetFields const& __cordl_internal_get_m_MatchTargetFields() const;

constexpr ::UnityEngine::Timeline::MatchTargetFields& __cordl_internal_get_m_MatchTargetFields() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_OpenClipOffsetRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_OpenClipOffsetRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Position() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_Rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_Rotation() ;

constexpr ::UnityEngine::Timeline::TrackOffset const& __cordl_internal_get_m_TrackOffset() const;

constexpr ::UnityEngine::Timeline::TrackOffset& __cordl_internal_get_m_TrackOffset() ;

constexpr void __cordl_internal_set_mInfiniteClipLoop(::GlobalNamespace::AnimationPlayableAsset_LoopMode  value) ;

constexpr void __cordl_internal_set_m_ApplyAvatarMask(bool  value) ;

constexpr void __cordl_internal_set_m_ApplyOffsets(bool  value) ;

constexpr void __cordl_internal_set_m_AvatarMask(::UnityW<::UnityEngine::AvatarMask>  value) ;

constexpr void __cordl_internal_set_m_EulerAngles(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_InfiniteClip(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set_m_InfiniteClipApplyFootIK(bool  value) ;

constexpr void __cordl_internal_set_m_InfiniteClipOffsetEulerAngles(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_InfiniteClipOffsetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_InfiniteClipPostExtrapolation(::GlobalNamespace::TimelineClip_ClipExtrapolation  value) ;

constexpr void __cordl_internal_set_m_InfiniteClipPreExtrapolation(::GlobalNamespace::TimelineClip_ClipExtrapolation  value) ;

constexpr void __cordl_internal_set_m_InfiniteClipRemoveOffset(bool  value) ;

constexpr void __cordl_internal_set_m_InfiniteClipTimeOffset(double_t  value) ;

constexpr void __cordl_internal_set_m_MatchTargetFields(::UnityEngine::Timeline::MatchTargetFields  value) ;

constexpr void __cordl_internal_set_m_OpenClipOffsetRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_Position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_Rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_TrackOffset(::UnityEngine::Timeline::TrackOffset  value) ;

/// @brief Method .ctor, addr 0xb3b5418, size 0x190, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>* getStaticF_s_CachedQueue() ;

/// @brief Method get_applyAvatarMask, addr 0xb3b1464, size 0x8, virtual false, abstract: false, final false
inline bool get_applyAvatarMask() ;

/// @brief Method get_applyOffsets, addr 0xb3b1398, size 0x8, virtual false, abstract: false, final false
inline bool get_applyOffsets() ;

/// @brief Method get_avatarMask, addr 0xb3b1454, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AvatarMask> get_avatarMask() ;

/// @brief Method get_eulerAngles, addr 0xb3b1380, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_eulerAngles() ;

/// @brief Method get_inClipMode, addr 0xb3b15e4, size 0x34, virtual false, abstract: false, final false
inline bool get_inClipMode() ;

/// @brief Method get_infiniteClip, addr 0xb3b142c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_infiniteClip() ;

/// @brief Method get_infiniteClipApplyFootIK, addr 0xb3b1784, size 0x8, virtual false, abstract: false, final false
inline bool get_infiniteClipApplyFootIK() ;

/// @brief Method get_infiniteClipLoop, addr 0xb3b17c4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::AnimationPlayableAsset_LoopMode get_infiniteClipLoop() ;

/// @brief Method get_infiniteClipOffsetEulerAngles, addr 0xb3b176c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_infiniteClipOffsetEulerAngles() ;

/// @brief Method get_infiniteClipOffsetPosition, addr 0xb3b16e8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_infiniteClipOffsetPosition() ;

/// @brief Method get_infiniteClipOffsetRotation, addr 0xb3b1700, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_infiniteClipOffsetRotation() ;

/// @brief Method get_infiniteClipPostExtrapolation, addr 0xb3b17b4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TimelineClip_ClipExtrapolation get_infiniteClipPostExtrapolation() ;

/// @brief Method get_infiniteClipPreExtrapolation, addr 0xb3b17a4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TimelineClip_ClipExtrapolation get_infiniteClipPreExtrapolation() ;

/// @brief Method get_infiniteClipRemoveOffset, addr 0xb3b1444, size 0x8, virtual false, abstract: false, final false
inline bool get_infiniteClipRemoveOffset() ;

/// @brief Method get_infiniteClipTimeOffset, addr 0xb3b1794, size 0x8, virtual false, abstract: false, final false
inline double_t get_infiniteClipTimeOffset() ;

/// @brief Method get_matchTargetFields, addr 0xb3b13b4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::MatchTargetFields get_matchTargetFields() ;

/// @brief Method get_openClipOffsetEulerAngles, addr 0xb3b5250, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_openClipOffsetEulerAngles() ;

/// @brief Method get_openClipOffsetPosition, addr 0xb3b5204, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_openClipOffsetPosition() ;

/// @brief Method get_openClipOffsetRotation, addr 0xb3b521c, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_openClipOffsetRotation() ;

/// @brief Method get_openClipPostExtrapolation, addr 0xb3b5278, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TimelineClip_ClipExtrapolation get_openClipPostExtrapolation() ;

/// @brief Method get_openClipPreExtrapolation, addr 0xb3b5268, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TimelineClip_ClipExtrapolation get_openClipPreExtrapolation() ;

/// [IteratorStateMachine(typeof(UnityEngine.Timeline.AnimationTrack::<get_outputs>d__49))]
/// @brief Method get_outputs, addr 0xb3b1530, size 0x80, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs() ;

/// @brief Method get_position, addr 0xb3b12fc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_rotation, addr 0xb3b1314, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_rotation() ;

/// @brief Method get_trackOffset, addr 0xb3b13a4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::TrackOffset get_trackOffset() ;

/// @brief Convert to "::UnityEngine::Timeline::ILayerable"
constexpr ::UnityEngine::Timeline::ILayerable* i___UnityEngine__Timeline__ILayerable() noexcept;

static inline void setStaticF_s_CachedQueue(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*  value) ;

/// @brief Method set_applyAvatarMask, addr 0xb3b146c, size 0x8, virtual false, abstract: false, final false
inline void set_applyAvatarMask(bool  value) ;

/// @brief Method set_applyOffsets, addr 0xb3b13a0, size 0x4, virtual false, abstract: false, final false
inline void set_applyOffsets(bool  value) ;

/// @brief Method set_avatarMask, addr 0xb3b145c, size 0x8, virtual false, abstract: false, final false
inline void set_avatarMask(::UnityEngine::AvatarMask*  value) ;

/// @brief Method set_eulerAngles, addr 0xb3b138c, size 0xc, virtual false, abstract: false, final false
inline void set_eulerAngles(::UnityEngine::Vector3  value) ;

/// @brief Method set_infiniteClip, addr 0xb3b1434, size 0x10, virtual false, abstract: false, final false
inline void set_infiniteClip(::UnityEngine::AnimationClip*  value) ;

/// @brief Method set_infiniteClipApplyFootIK, addr 0xb3b178c, size 0x8, virtual false, abstract: false, final false
inline void set_infiniteClipApplyFootIK(bool  value) ;

/// @brief Method set_infiniteClipLoop, addr 0xb3b17cc, size 0x8, virtual false, abstract: false, final false
inline void set_infiniteClipLoop(::GlobalNamespace::AnimationPlayableAsset_LoopMode  value) ;

/// @brief Method set_infiniteClipOffsetEulerAngles, addr 0xb3b1778, size 0xc, virtual false, abstract: false, final false
inline void set_infiniteClipOffsetEulerAngles(::UnityEngine::Vector3  value) ;

/// @brief Method set_infiniteClipOffsetPosition, addr 0xb3b16f4, size 0xc, virtual false, abstract: false, final false
inline void set_infiniteClipOffsetPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_infiniteClipOffsetRotation, addr 0xb3b1730, size 0x3c, virtual false, abstract: false, final false
inline void set_infiniteClipOffsetRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_infiniteClipPostExtrapolation, addr 0xb3b17bc, size 0x8, virtual false, abstract: false, final false
inline void set_infiniteClipPostExtrapolation(::GlobalNamespace::TimelineClip_ClipExtrapolation  value) ;

/// @brief Method set_infiniteClipPreExtrapolation, addr 0xb3b17ac, size 0x8, virtual false, abstract: false, final false
inline void set_infiniteClipPreExtrapolation(::GlobalNamespace::TimelineClip_ClipExtrapolation  value) ;

/// @brief Method set_infiniteClipRemoveOffset, addr 0xb3b144c, size 0x8, virtual false, abstract: false, final false
inline void set_infiniteClipRemoveOffset(bool  value) ;

/// @brief Method set_infiniteClipTimeOffset, addr 0xb3b179c, size 0x8, virtual false, abstract: false, final false
inline void set_infiniteClipTimeOffset(double_t  value) ;

/// @brief Method set_matchTargetFields, addr 0xb3b13bc, size 0x70, virtual false, abstract: false, final false
inline void set_matchTargetFields(::UnityEngine::Timeline::MatchTargetFields  value) ;

/// @brief Method set_openClipOffsetEulerAngles, addr 0xb3b525c, size 0xc, virtual false, abstract: false, final false
inline void set_openClipOffsetEulerAngles(::UnityEngine::Vector3  value) ;

/// @brief Method set_openClipOffsetPosition, addr 0xb3b5210, size 0xc, virtual false, abstract: false, final false
inline void set_openClipOffsetPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_openClipOffsetRotation, addr 0xb3b524c, size 0x4, virtual false, abstract: false, final false
inline void set_openClipOffsetRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_openClipPostExtrapolation, addr 0xb3b5280, size 0x8, virtual false, abstract: false, final false
inline void set_openClipPostExtrapolation(::GlobalNamespace::TimelineClip_ClipExtrapolation  value) ;

/// @brief Method set_openClipPreExtrapolation, addr 0xb3b5270, size 0x8, virtual false, abstract: false, final false
inline void set_openClipPreExtrapolation(::GlobalNamespace::TimelineClip_ClipExtrapolation  value) ;

/// @brief Method set_position, addr 0xb3b1308, size 0xc, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_rotation, addr 0xb3b1344, size 0x3c, virtual false, abstract: false, final false
inline void set_rotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_trackOffset, addr 0xb3b13ac, size 0x8, virtual false, abstract: false, final false
inline void set_trackOffset(::UnityEngine::Timeline::TrackOffset  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationTrack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationTrack", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationTrack(AnimationTrack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationTrack", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationTrack(AnimationTrack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28693};

/// @brief Field k_DefaultInfiniteClipName offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DefaultInfiniteClipName{u"Recorded"};

/// @brief Field k_DefaultRecordableClipName offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DefaultRecordableClipName{u"Recorded"};

/// [SerializeField]
/// [FormerlySerializedAs("m_OpenClipPreExtrapolation")]
/// @brief Field m_InfiniteClipPreExtrapolation, offset: 0xb0, size: 0x4, def value: None
 ::GlobalNamespace::TimelineClip_ClipExtrapolation  ___m_InfiniteClipPreExtrapolation;

/// [SerializeField]
/// [FormerlySerializedAs("m_OpenClipPostExtrapolation")]
/// @brief Field m_InfiniteClipPostExtrapolation, offset: 0xb4, size: 0x4, def value: None
 ::GlobalNamespace::TimelineClip_ClipExtrapolation  ___m_InfiniteClipPostExtrapolation;

/// [SerializeField]
/// [FormerlySerializedAs("m_OpenClipOffsetPosition")]
/// @brief Field m_InfiniteClipOffsetPosition, offset: 0xb8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_InfiniteClipOffsetPosition;

/// [SerializeField]
/// [FormerlySerializedAs("m_OpenClipOffsetEulerAngles")]
/// @brief Field m_InfiniteClipOffsetEulerAngles, offset: 0xc4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_InfiniteClipOffsetEulerAngles;

/// [SerializeField]
/// [FormerlySerializedAs("m_OpenClipTimeOffset")]
/// @brief Field m_InfiniteClipTimeOffset, offset: 0xd0, size: 0x8, def value: None
 double_t  ___m_InfiniteClipTimeOffset;

/// [SerializeField]
/// [FormerlySerializedAs("m_OpenClipRemoveOffset")]
/// @brief Field m_InfiniteClipRemoveOffset, offset: 0xd8, size: 0x1, def value: None
 bool  ___m_InfiniteClipRemoveOffset;

/// [SerializeField]
/// @brief Field m_InfiniteClipApplyFootIK, offset: 0xd9, size: 0x1, def value: None
 bool  ___m_InfiniteClipApplyFootIK;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field mInfiniteClipLoop, offset: 0xdc, size: 0x4, def value: None
 ::GlobalNamespace::AnimationPlayableAsset_LoopMode  ___mInfiniteClipLoop;

/// [SerializeField]
/// @brief Field m_MatchTargetFields, offset: 0xe0, size: 0x4, def value: None
 ::UnityEngine::Timeline::MatchTargetFields  ___m_MatchTargetFields;

/// [SerializeField]
/// @brief Field m_Position, offset: 0xe4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_Position;

/// [SerializeField]
/// @brief Field m_EulerAngles, offset: 0xf0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_EulerAngles;

/// [SerializeField]
/// @brief Field m_AvatarMask, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AvatarMask>  ___m_AvatarMask;

/// [SerializeField]
/// @brief Field m_ApplyAvatarMask, offset: 0x108, size: 0x1, def value: None
 bool  ___m_ApplyAvatarMask;

/// [SerializeField]
/// @brief Field m_TrackOffset, offset: 0x10c, size: 0x4, def value: None
 ::UnityEngine::Timeline::TrackOffset  ___m_TrackOffset;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_InfiniteClip, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___m_InfiniteClip;

/// [SerializeField]
/// [Obsolete("Use m_InfiniteClipOffsetEulerAngles Instead", false)]
/// [HideInInspector]
/// @brief Field m_OpenClipOffsetRotation, offset: 0x118, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_OpenClipOffsetRotation;

/// [SerializeField]
/// [Obsolete("Use m_RotationEuler Instead", false)]
/// [HideInInspector]
/// @brief Field m_Rotation, offset: 0x128, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_Rotation;

/// @brief Size padding 0x130 - 0x140 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// [SerializeField]
/// [Obsolete("Use m_RootTransformOffsetMode", false)]
/// [HideInInspector]
/// @brief Field m_ApplyOffsets, offset: 0x138, size: 0x1, def value: None
 bool  ___m_ApplyOffsets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_InfiniteClipPreExtrapolation) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_InfiniteClipPostExtrapolation) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_InfiniteClipOffsetPosition) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_InfiniteClipOffsetEulerAngles) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_InfiniteClipTimeOffset) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_InfiniteClipRemoveOffset) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_InfiniteClipApplyFootIK) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___mInfiniteClipLoop) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_MatchTargetFields) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_Position) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_EulerAngles) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_AvatarMask) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_ApplyAvatarMask) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_TrackOffset) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_InfiniteClip) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_OpenClipOffsetRotation) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_Rotation) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_ApplyOffsets) == 0x138, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Timeline::AnimationTrack) == 0x130, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Playables.PlayableBinding
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49
class CORDL_TYPE AnimationTrack__get_outputs_d__49 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current)) ::UnityEngine::Playables::PlayableBinding  System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x20 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityEngine::Playables::PlayableBinding  __2__current;

/// @brief Field <>4__this, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::Timeline::AnimationTrack>  __4__this;

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

/// @brief Method MoveNext, addr 0xb3b5648, size 0x90, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator, addr 0xb3b5780, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current, addr 0xb3b56d8, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb3b5824, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb3b56e8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb3b5720, size 0x60, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb3b5644, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityEngine::Playables::PlayableBinding const& __cordl_internal_get___2__current() const;

constexpr ::UnityEngine::Playables::PlayableBinding& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::Timeline::AnimationTrack> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::Timeline::AnimationTrack>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityEngine::Playables::PlayableBinding  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::Timeline::AnimationTrack>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb3b15b0, size 0x34, virtual false, abstract: false, final false
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
constexpr AnimationTrack__get_outputs_d__49() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationTrack__get_outputs_d__49", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationTrack__get_outputs_d__49(AnimationTrack__get_outputs_d__49 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationTrack__get_outputs_d__49", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationTrack__get_outputs_d__49(AnimationTrack__get_outputs_d__49 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28692};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x20, def value: None
 ::UnityEngine::Playables::PlayableBinding  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x38, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Timeline::AnimationTrack>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49, _____l__initialThreadId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49, _____4__this) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.AnimationTrack/AnimationTrackUpgrade
class CORDL_TYPE AnimationTrack_AnimationTrackUpgrade : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertInfiniteTrack, addr 0xb3b53e4, size 0x34, virtual false, abstract: false, final false
static inline void ConvertInfiniteTrack(::UnityEngine::Timeline::AnimationTrack*  track) ;

/// @brief Method ConvertRootMotion, addr 0xb3b5360, size 0x84, virtual false, abstract: false, final false
static inline void ConvertRootMotion(::UnityEngine::Timeline::AnimationTrack*  track) ;

/// @brief Method ConvertRotationsToEuler, addr 0xb3b52cc, size 0x94, virtual false, abstract: false, final false
static inline void ConvertRotationsToEuler(::UnityEngine::Timeline::AnimationTrack*  track) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationTrack_AnimationTrackUpgrade() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationTrack_AnimationTrackUpgrade", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationTrack_AnimationTrackUpgrade(AnimationTrack_AnimationTrackUpgrade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationTrack_AnimationTrackUpgrade", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationTrack_AnimationTrackUpgrade(AnimationTrack_AnimationTrackUpgrade const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28691};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Timeline

#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ActivationTrack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__ActivationTrack_PostPlaybackState_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ActivationTrack)
namespace GlobalNamespace {
struct ActivationTrack_PostPlaybackState;
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
class ActivationMixerPlayable;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ActivationTrack;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::ActivationTrack*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::ActivationTrack*, "UnityEngine.Timeline", "ActivationTrack");
// [TrackClipType(typeof(UnityEngine.Timeline.ActivationPlayableAsset))]
// [TrackBindingType(typeof(UnityEngine.GameObject))]
// [ExcludeFromPreset]
// Dependencies UnityEngine.Timeline.ActivationTrack::PostPlaybackState, UnityEngine.Timeline.TrackAsset
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.ActivationTrack
class CORDL_TYPE ActivationTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
// Declarations
using PostPlaybackState = ::GlobalNamespace::ActivationTrack_PostPlaybackState;

/// @brief Field m_ActivationMixer, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActivationMixer, put=__cordl_internal_set_m_ActivationMixer)) ::UnityEngine::Timeline::ActivationMixerPlayable*  m_ActivationMixer;

/// @brief Field m_PostPlaybackState, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PostPlaybackState, put=__cordl_internal_set_m_PostPlaybackState)) ::GlobalNamespace::ActivationTrack_PostPlaybackState  m_PostPlaybackState;

 __declspec(property(get=get_postPlaybackState, put=set_postPlaybackState)) ::GlobalNamespace::ActivationTrack_PostPlaybackState  postPlaybackState;

/// @brief Method CanCompileClips, addr 0xb3af1cc, size 0x5c, virtual true, abstract: false, final false
inline bool CanCompileClips() ;

/// @brief Method CreateTrackMixer, addr 0xb3af308, size 0xf4, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, int32_t  inputCount) ;

/// @brief Method GatherProperties, addr 0xb3af3fc, size 0x12c, virtual true, abstract: false, final false
inline void GatherProperties(::UnityEngine::Playables::PlayableDirector*  director, ::UnityEngine::Timeline::IPropertyCollector*  driver) ;

static inline ::UnityEngine::Timeline::ActivationTrack* New_ctor() ;

/// @brief Method OnCreateClip, addr 0xb3af6a0, size 0x54, virtual true, abstract: false, final false
inline void OnCreateClip(::UnityEngine::Timeline::TimelineClip*  clip) ;

/// @brief Method UpdateTrackMode, addr 0xb3af2f4, size 0x14, virtual false, abstract: false, final false
inline void UpdateTrackMode() ;

constexpr ::UnityEngine::Timeline::ActivationMixerPlayable* const& __cordl_internal_get_m_ActivationMixer() const;

constexpr ::UnityEngine::Timeline::ActivationMixerPlayable*& __cordl_internal_get_m_ActivationMixer() ;

constexpr ::GlobalNamespace::ActivationTrack_PostPlaybackState const& __cordl_internal_get_m_PostPlaybackState() const;

constexpr ::GlobalNamespace::ActivationTrack_PostPlaybackState& __cordl_internal_get_m_PostPlaybackState() ;

constexpr void __cordl_internal_set_m_ActivationMixer(::UnityEngine::Timeline::ActivationMixerPlayable*  value) ;

constexpr void __cordl_internal_set_m_PostPlaybackState(::GlobalNamespace::ActivationTrack_PostPlaybackState  value) ;

/// @brief Method .ctor, addr 0xb3af6f8, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_postPlaybackState, addr 0xb3af2d8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ActivationTrack_PostPlaybackState get_postPlaybackState() ;

/// @brief Method set_postPlaybackState, addr 0xb3af2e0, size 0x14, virtual false, abstract: false, final false
inline void set_postPlaybackState(::GlobalNamespace::ActivationTrack_PostPlaybackState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActivationTrack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActivationTrack", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActivationTrack(ActivationTrack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActivationTrack", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActivationTrack(ActivationTrack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28678};

/// [SerializeField]
/// @brief Field m_PostPlaybackState, offset: 0xb0, size: 0x4, def value: None
 ::GlobalNamespace::ActivationTrack_PostPlaybackState  ___m_PostPlaybackState;

/// @brief Size padding 0xb0 - 0xc0 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field m_ActivationMixer, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::Timeline::ActivationMixerPlayable*  ___m_ActivationMixer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::ActivationTrack, ___m_PostPlaybackState) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ActivationTrack, ___m_ActivationMixer) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Timeline::ActivationTrack) == 0xb0, "Size mismatch!");

} // namespace end def UnityEngine::Timeline

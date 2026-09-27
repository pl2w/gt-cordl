#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTrack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineTrack)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineTrack;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineTrack*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineTrack*, "Unity.Cinemachine", "CinemachineTrack");
// [TrackClipType(typeof(Unity.Cinemachine.CinemachineShot))]
// [TrackBindingType(typeof(Unity.Cinemachine.CinemachineBrain), (UnityEngine.Timeline.TrackBindingFlags)0)]
// [TrackColor(0.53, 0, 0.08)]
// Dependencies UnityEngine.Timeline.TrackAsset
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineTrack
class CORDL_TYPE CinemachineTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
// Declarations
/// @brief Field TrackPriority, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_TrackPriority, put=__cordl_internal_set_TrackPriority)) int32_t  TrackPriority;

/// @brief Method CreateTrackMixer, addr 0xaf011c0, size 0x118, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, int32_t  inputCount) ;

static inline ::Unity::Cinemachine::CinemachineTrack* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_TrackPriority() const;

constexpr int32_t& __cordl_internal_get_TrackPriority() ;

constexpr void __cordl_internal_set_TrackPriority(int32_t  value) ;

/// @brief Method .ctor, addr 0xaf012d8, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineTrack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineTrack", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineTrack(CinemachineTrack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineTrack", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineTrack(CinemachineTrack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22534};

/// @brief Size padding 0xa8 - 0xb8 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// [Tooltip("The priority controls the precedence that this track takes over other CinemachineTracks.  Tracks with higher priority will override tracks with lower priority.  If two simultaneous tracks have the same priority, then the more-recently instanced track will take precedence.  Track priority is unrelated to Cinemachine Camera priority.")]
/// @brief Field TrackPriority, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___TrackPriority;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineTrack, ___TrackPriority) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineTrack) == 0xa8, "Size mismatch!");

} // namespace end def Unity::Cinemachine

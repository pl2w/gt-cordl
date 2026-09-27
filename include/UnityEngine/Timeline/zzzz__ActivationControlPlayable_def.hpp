#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ActivationControlPlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationControlPlayable_InitialState_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationControlPlayable_PostPlaybackState_def.hpp"
CORDL_MODULE_EXPORT(ActivationControlPlayable)
namespace GlobalNamespace {
struct ActivationControlPlayable_InitialState;
}
namespace GlobalNamespace {
struct ActivationControlPlayable_PostPlaybackState;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
template<typename T>
struct ScriptPlayable_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ActivationControlPlayable;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::ActivationControlPlayable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::ActivationControlPlayable*, "UnityEngine.Timeline", "ActivationControlPlayable");
// Dependencies UnityEngine.Playables.PlayableBehaviour, UnityEngine.Timeline.ActivationControlPlayable::InitialState, UnityEngine.Timeline.ActivationControlPlayable::PostPlaybackState
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.ActivationControlPlayable
class CORDL_TYPE ActivationControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using InitialState = ::GlobalNamespace::ActivationControlPlayable_InitialState;

using PostPlaybackState = ::GlobalNamespace::ActivationControlPlayable_PostPlaybackState;

/// @brief Field gameObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field m_InitialState, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InitialState, put=__cordl_internal_set_m_InitialState)) ::GlobalNamespace::ActivationControlPlayable_InitialState  m_InitialState;

/// @brief Field postPlayback, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_postPlayback, put=__cordl_internal_set_postPlayback)) ::GlobalNamespace::ActivationControlPlayable_PostPlaybackState  postPlayback;

/// @brief Method Create, addr 0xb3c57f0, size 0x150, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  gameObject, ::GlobalNamespace::ActivationControlPlayable_PostPlaybackState  postPlaybackState) ;

static inline ::UnityEngine::Timeline::ActivationControlPlayable* New_ctor() ;

/// @brief Method OnBehaviourPause, addr 0xb3caa70, size 0xa8, virtual true, abstract: false, final false
inline void OnBehaviourPause(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method OnBehaviourPlay, addr 0xb3ca9e8, size 0x88, virtual true, abstract: false, final false
inline void OnBehaviourPlay(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method OnGraphStart, addr 0xb3caba0, size 0x94, virtual true, abstract: false, final false
inline void OnGraphStart(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method OnPlayableDestroy, addr 0xb3cac34, size 0xcc, virtual true, abstract: false, final false
inline void OnPlayableDestroy(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method ProcessFrame, addr 0xb3cab18, size 0x88, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  userData) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr ::GlobalNamespace::ActivationControlPlayable_InitialState const& __cordl_internal_get_m_InitialState() const;

constexpr ::GlobalNamespace::ActivationControlPlayable_InitialState& __cordl_internal_get_m_InitialState() ;

constexpr ::GlobalNamespace::ActivationControlPlayable_PostPlaybackState const& __cordl_internal_get_postPlayback() const;

constexpr ::GlobalNamespace::ActivationControlPlayable_PostPlaybackState& __cordl_internal_get_postPlayback() ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_InitialState(::GlobalNamespace::ActivationControlPlayable_InitialState  value) ;

constexpr void __cordl_internal_set_postPlayback(::GlobalNamespace::ActivationControlPlayable_PostPlaybackState  value) ;

/// @brief Method .ctor, addr 0xb3cad00, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActivationControlPlayable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActivationControlPlayable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActivationControlPlayable(ActivationControlPlayable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActivationControlPlayable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActivationControlPlayable(ActivationControlPlayable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28753};

/// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

/// @brief Field postPlayback, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::ActivationControlPlayable_PostPlaybackState  ___postPlayback;

/// @brief Field m_InitialState, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::ActivationControlPlayable_InitialState  ___m_InitialState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::ActivationControlPlayable, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ActivationControlPlayable, ___postPlayback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ActivationControlPlayable, ___m_InitialState) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Timeline::ActivationControlPlayable) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Timeline

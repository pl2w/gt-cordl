#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/DirectorControlPlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/Timeline/zzzz__DirectorControlPlayable_PauseAction_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DirectorControlPlayable)
namespace GlobalNamespace {
struct DirectorControlPlayable_PauseAction;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
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
namespace UnityEngine::Playables {
template<typename T>
struct ScriptPlayable_1;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class DirectorControlPlayable;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::DirectorControlPlayable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::DirectorControlPlayable*, "UnityEngine.Timeline", "DirectorControlPlayable");
// Dependencies UnityEngine.Playables.PlayableBehaviour, UnityEngine.Timeline.DirectorControlPlayable::PauseAction
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.DirectorControlPlayable
class CORDL_TYPE DirectorControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using PauseAction = ::GlobalNamespace::DirectorControlPlayable_PauseAction;

/// @brief Field director, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_director, put=__cordl_internal_set_director)) ::UnityW<::UnityEngine::Playables::PlayableDirector>  director;

/// @brief Field m_AssetDuration, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AssetDuration, put=__cordl_internal_set_m_AssetDuration)) double_t  m_AssetDuration;

/// @brief Field m_SyncTime, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SyncTime, put=__cordl_internal_set_m_SyncTime)) bool  m_SyncTime;

/// @brief Field pauseAction, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_pauseAction, put=__cordl_internal_set_pauseAction)) ::GlobalNamespace::DirectorControlPlayable_PauseAction  pauseAction;

/// @brief Method Create, addr 0xb3c5940, size 0x138, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::DirectorControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Playables::PlayableDirector*  director) ;

/// @brief Method DetectDiscontinuity, addr 0xb3cb100, size 0x114, virtual false, abstract: false, final false
inline bool DetectDiscontinuity(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method DetectOutOfSync, addr 0xb3cb7f8, size 0x150, virtual false, abstract: false, final false
inline bool DetectOutOfSync(::UnityEngine::Playables::Playable  playable) ;

static inline ::UnityEngine::Timeline::DirectorControlPlayable* New_ctor() ;

/// @brief Method OnBehaviourPause, addr 0xb3cb4d4, size 0x11c, virtual true, abstract: false, final false
inline void OnBehaviourPause(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method OnBehaviourPlay, addr 0xb3cb400, size 0xd4, virtual true, abstract: false, final false
inline void OnBehaviourPlay(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method OnPlayableDestroy, addr 0xb3cae8c, size 0xc0, virtual true, abstract: false, final false
inline void OnPlayableDestroy(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method PrepareFrame, addr 0xb3caf4c, size 0x1b4, virtual true, abstract: false, final false
inline void PrepareFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method ProcessFrame, addr 0xb3cb5f0, size 0x208, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method SyncSpeed, addr 0xb3cb214, size 0x12c, virtual false, abstract: false, final false
inline void SyncSpeed(double_t  speed) ;

/// @brief Method SyncStart, addr 0xb3cb340, size 0xc0, virtual false, abstract: false, final false
inline void SyncStart(::UnityEngine::Playables::PlayableGraph  graph, double_t  time) ;

/// @brief Method SyncStop, addr 0xb3cbae0, size 0xcc, virtual false, abstract: false, final false
inline void SyncStop(::UnityEngine::Playables::PlayableGraph  graph, double_t  time) ;

/// @brief Method UpdateTime, addr 0xb3cb948, size 0x198, virtual false, abstract: false, final false
inline void UpdateTime(::UnityEngine::Playables::Playable  playable) ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get_director() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get_director() ;

constexpr double_t const& __cordl_internal_get_m_AssetDuration() const;

constexpr double_t& __cordl_internal_get_m_AssetDuration() ;

constexpr bool const& __cordl_internal_get_m_SyncTime() const;

constexpr bool& __cordl_internal_get_m_SyncTime() ;

constexpr ::GlobalNamespace::DirectorControlPlayable_PauseAction const& __cordl_internal_get_pauseAction() const;

constexpr ::GlobalNamespace::DirectorControlPlayable_PauseAction& __cordl_internal_get_pauseAction() ;

constexpr void __cordl_internal_set_director(::UnityW<::UnityEngine::Playables::PlayableDirector>  value) ;

constexpr void __cordl_internal_set_m_AssetDuration(double_t  value) ;

constexpr void __cordl_internal_set_m_SyncTime(bool  value) ;

constexpr void __cordl_internal_set_pauseAction(::GlobalNamespace::DirectorControlPlayable_PauseAction  value) ;

/// @brief Method .ctor, addr 0xb3cbbac, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectorControlPlayable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectorControlPlayable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectorControlPlayable(DirectorControlPlayable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectorControlPlayable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectorControlPlayable(DirectorControlPlayable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28756};

/// @brief Field director, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableDirector>  ___director;

/// @brief Field pauseAction, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::DirectorControlPlayable_PauseAction  ___pauseAction;

/// @brief Field m_SyncTime, offset: 0x1c, size: 0x1, def value: None
 bool  ___m_SyncTime;

/// @brief Field m_AssetDuration, offset: 0x20, size: 0x8, def value: None
 double_t  ___m_AssetDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::DirectorControlPlayable, ___director) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::DirectorControlPlayable, ___pauseAction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::DirectorControlPlayable, ___m_SyncTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::DirectorControlPlayable, ___m_AssetDuration) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Timeline::DirectorControlPlayable) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Timeline

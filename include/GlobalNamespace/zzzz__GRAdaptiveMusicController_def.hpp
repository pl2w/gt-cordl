#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAdaptiveMusicController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRAdaptiveMusicController)
namespace GlobalNamespace {
class GRAdaptiveMusicController_SingleTrack;
}
namespace GlobalNamespace {
class GRAdaptiveMusicController__TryFinish_d__28;
}
namespace GlobalNamespace {
class SynchedMusicController;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRAdaptiveMusicController;
}
namespace GlobalNamespace {
class GRAdaptiveMusicController_SingleTrack;
}
namespace GlobalNamespace {
class GRAdaptiveMusicController__TryFinish_d__28;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAdaptiveMusicController*);
MARK_REF_T(::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*);
MARK_REF_T(::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAdaptiveMusicController*, "", "GRAdaptiveMusicController");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*, "", "GRAdaptiveMusicController/SingleTrack");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28*, "", "GRAdaptiveMusicController/<TryFinish>d__28");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAdaptiveMusicController
class CORDL_TYPE GRAdaptiveMusicController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SingleTrack = ::GlobalNamespace::GRAdaptiveMusicController_SingleTrack;

using _TryFinish_d__28 = ::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28;

/// @brief Field AdjustedSourceVolume, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_AdjustedSourceVolume, put=__cordl_internal_set_AdjustedSourceVolume)) float_t  AdjustedSourceVolume;

/// @brief Field AudioSources, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_AudioSources, put=__cordl_internal_set_AudioSources)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  AudioSources;

/// @brief Field BAR_DURATION, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BAR_DURATION, put=setStaticF_BAR_DURATION)) double_t  BAR_DURATION;

/// @brief Field CurrentTrack, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CurrentTrack, put=__cordl_internal_set_CurrentTrack)) ::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*  CurrentTrack;

 __declspec(property(get=get_NextAudioSourceIndex)) int32_t  NextAudioSourceIndex;

/// @brief Field RepositionAudioSourcePoint, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_RepositionAudioSourcePoint, put=__cordl_internal_set_RepositionAudioSourcePoint)) ::UnityW<::UnityEngine::Transform>  RepositionAudioSourcePoint;

/// @brief Field Tracks, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tracks, put=__cordl_internal_set_Tracks)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*>*  Tracks;

/// @brief Field cachedSourcePosition, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_cachedSourcePosition, put=__cordl_internal_set_cachedSourcePosition)) ::UnityEngine::Vector3  cachedSourcePosition;

/// @brief Field cachedSourceVolume, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_cachedSourceVolume, put=__cordl_internal_set_cachedSourceVolume)) float_t  cachedSourceVolume;

/// @brief Field currentAudioSourceIndex, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentAudioSourceIndex, put=__cordl_internal_set_currentAudioSourceIndex)) int32_t  currentAudioSourceIndex;

/// @brief Field finishCoroutine, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_finishCoroutine, put=__cordl_internal_set_finishCoroutine)) ::UnityEngine::Coroutine*  finishCoroutine;

/// @brief Field synchedMusicController, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_synchedMusicController, put=__cordl_internal_set_synchedMusicController)) ::UnityW<::GlobalNamespace::SynchedMusicController>  synchedMusicController;

/// @brief Field trackIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_trackIndex, put=__cordl_internal_set_trackIndex)) int32_t  trackIndex;

/// @brief Method Finish, addr 0x5947a44, size 0x50, virtual false, abstract: false, final false
inline void Finish(float_t  delay) ;

/// @brief Method GetCurrentAudioSource, addr 0x5947598, size 0x54, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioSource> GetCurrentAudioSource() ;

/// @brief Method GetNextAudioSource, addr 0x59475ec, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioSource> GetNextAudioSource() ;

/// @brief Method GoToTrack, addr 0x59476b4, size 0x33c, virtual false, abstract: false, final false
inline void GoToTrack(int32_t  nextIndex, bool  force) ;

static inline ::GlobalNamespace::GRAdaptiveMusicController* New_ctor() ;

/// @brief Method PlayCurrentTrack, addr 0x5947440, size 0x158, virtual false, abstract: false, final false
inline void PlayCurrentTrack() ;

/// [ContextMenu("Restart")]
/// @brief Method Restart, addr 0x5947a94, size 0x134, virtual false, abstract: false, final false
inline void Restart() ;

/// @brief Method RestartAt, addr 0x5947dd4, size 0x188, virtual false, abstract: false, final false
inline void RestartAt(int32_t  index) ;

/// @brief Method Start, addr 0x59473c8, size 0x78, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StopAllAudioSources, addr 0x5947bc8, size 0x8c, virtual false, abstract: false, final false
inline void StopAllAudioSources() ;

/// @brief Method TransitionToLastTrack, addr 0x59479f0, size 0x54, virtual false, abstract: false, final false
inline void TransitionToLastTrack() ;

/// [ContextMenu("Transition Next Track")]
/// @brief Method TransitionToNextTrack, addr 0x59476a4, size 0x10, virtual false, abstract: false, final false
inline void TransitionToNextTrack() ;

/// [IteratorStateMachine(typeof(GRAdaptiveMusicController::<TryFinish>d__28))]
/// @brief Method TryFinish, addr 0x5947f5c, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TryFinish(float_t  delay) ;

/// @brief Method UpdateAudioSourcesPosition, addr 0x5947d14, size 0xc0, virtual false, abstract: false, final false
inline void UpdateAudioSourcesPosition(::UnityEngine::Vector3  position) ;

/// @brief Method UpdateAudioSourcesVolume, addr 0x5947c54, size 0xc0, virtual false, abstract: false, final false
inline void UpdateAudioSourcesVolume(float_t  volume) ;

constexpr float_t const& __cordl_internal_get_AdjustedSourceVolume() const;

constexpr float_t& __cordl_internal_get_AdjustedSourceVolume() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>* const& __cordl_internal_get_AudioSources() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*& __cordl_internal_get_AudioSources() ;

constexpr ::GlobalNamespace::GRAdaptiveMusicController_SingleTrack* const& __cordl_internal_get_CurrentTrack() const;

constexpr ::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*& __cordl_internal_get_CurrentTrack() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_RepositionAudioSourcePoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_RepositionAudioSourcePoint() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*>* const& __cordl_internal_get_Tracks() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*>*& __cordl_internal_get_Tracks() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cachedSourcePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cachedSourcePosition() ;

constexpr float_t const& __cordl_internal_get_cachedSourceVolume() const;

constexpr float_t& __cordl_internal_get_cachedSourceVolume() ;

constexpr int32_t const& __cordl_internal_get_currentAudioSourceIndex() const;

constexpr int32_t& __cordl_internal_get_currentAudioSourceIndex() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_finishCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_finishCoroutine() ;

constexpr ::UnityW<::GlobalNamespace::SynchedMusicController> const& __cordl_internal_get_synchedMusicController() const;

constexpr ::UnityW<::GlobalNamespace::SynchedMusicController>& __cordl_internal_get_synchedMusicController() ;

constexpr int32_t const& __cordl_internal_get_trackIndex() const;

constexpr int32_t& __cordl_internal_get_trackIndex() ;

constexpr void __cordl_internal_set_AdjustedSourceVolume(float_t  value) ;

constexpr void __cordl_internal_set_AudioSources(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  value) ;

constexpr void __cordl_internal_set_CurrentTrack(::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*  value) ;

constexpr void __cordl_internal_set_RepositionAudioSourcePoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_Tracks(::System::Collections::Generic::List_1<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*>*  value) ;

constexpr void __cordl_internal_set_cachedSourcePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_cachedSourceVolume(float_t  value) ;

constexpr void __cordl_internal_set_currentAudioSourceIndex(int32_t  value) ;

constexpr void __cordl_internal_set_finishCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_synchedMusicController(::UnityW<::GlobalNamespace::SynchedMusicController>  value) ;

constexpr void __cordl_internal_set_trackIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x5948000, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

static inline double_t getStaticF_BAR_DURATION() ;

/// @brief Method get_NextAudioSourceIndex, addr 0x594764c, size 0x58, virtual false, abstract: false, final false
inline int32_t get_NextAudioSourceIndex() ;

static inline void setStaticF_BAR_DURATION(double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAdaptiveMusicController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAdaptiveMusicController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAdaptiveMusicController(GRAdaptiveMusicController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAdaptiveMusicController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAdaptiveMusicController(GRAdaptiveMusicController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2282};

/// @brief Field Tracks, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*>*  ___Tracks;

/// @brief Field CurrentTrack, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::GRAdaptiveMusicController_SingleTrack*  ___CurrentTrack;

/// [SerializeField]
/// @brief Field trackIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ___trackIndex;

/// @brief Field AudioSources, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  ___AudioSources;

/// @brief Field RepositionAudioSourcePoint, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___RepositionAudioSourcePoint;

/// @brief Field AdjustedSourceVolume, offset: 0x48, size: 0x4, def value: None
 float_t  ___AdjustedSourceVolume;

/// @brief Field currentAudioSourceIndex, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___currentAudioSourceIndex;

/// @brief Field cachedSourceVolume, offset: 0x50, size: 0x4, def value: None
 float_t  ___cachedSourceVolume;

/// @brief Field cachedSourcePosition, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cachedSourcePosition;

/// [SerializeField]
/// @brief Field synchedMusicController, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SynchedMusicController>  ___synchedMusicController;

/// @brief Field finishCoroutine, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___finishCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController, ___Tracks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController, ___CurrentTrack) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController, ___trackIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController, ___AudioSources) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController, ___RepositionAudioSourcePoint) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController, ___AdjustedSourceVolume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController, ___currentAudioSourceIndex) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController, ___cachedSourceVolume) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController, ___cachedSourcePosition) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController, ___synchedMusicController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController, ___finishCoroutine) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAdaptiveMusicController) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAdaptiveMusicController/<TryFinish>d__28
class CORDL_TYPE GRAdaptiveMusicController__TryFinish_d__28 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GRAdaptiveMusicController>  __4__this;

/// @brief Field delay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59480dc, size 0x128, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5948204, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x594820c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5948244, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59480d8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GRAdaptiveMusicController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GRAdaptiveMusicController>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GRAdaptiveMusicController>  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5947fd8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAdaptiveMusicController__TryFinish_d__28() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAdaptiveMusicController__TryFinish_d__28", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAdaptiveMusicController__TryFinish_d__28(GRAdaptiveMusicController__TryFinish_d__28 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAdaptiveMusicController__TryFinish_d__28", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAdaptiveMusicController__TryFinish_d__28(GRAdaptiveMusicController__TryFinish_d__28 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2281};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field delay, offset: 0x20, size: 0x4, def value: None
 float_t  ___delay;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAdaptiveMusicController>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28, _____4__this) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAdaptiveMusicController__TryFinish_d__28) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAdaptiveMusicController/SingleTrack
class CORDL_TYPE GRAdaptiveMusicController_SingleTrack : public ::System::Object {
public:
// Declarations
/// @brief Field IntroClip, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_IntroClip, put=__cordl_internal_set_IntroClip)) ::UnityW<::UnityEngine::AudioClip>  IntroClip;

/// @brief Field LoopedClip, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_LoopedClip, put=__cordl_internal_set_LoopedClip)) ::UnityW<::UnityEngine::AudioClip>  LoopedClip;

static inline ::GlobalNamespace::GRAdaptiveMusicController_SingleTrack* New_ctor() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_IntroClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_IntroClip() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_LoopedClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_LoopedClip() ;

constexpr void __cordl_internal_set_IntroClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_LoopedClip(::UnityW<::UnityEngine::AudioClip>  value) ;

/// @brief Method .ctor, addr 0x59480d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAdaptiveMusicController_SingleTrack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAdaptiveMusicController_SingleTrack", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAdaptiveMusicController_SingleTrack(GRAdaptiveMusicController_SingleTrack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAdaptiveMusicController_SingleTrack", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAdaptiveMusicController_SingleTrack(GRAdaptiveMusicController_SingleTrack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2280};

/// @brief Field IntroClip, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___IntroClip;

/// @brief Field LoopedClip, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___LoopedClip;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController_SingleTrack, ___IntroClip) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAdaptiveMusicController_SingleTrack, ___LoopedClip) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAdaptiveMusicController_SingleTrack) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

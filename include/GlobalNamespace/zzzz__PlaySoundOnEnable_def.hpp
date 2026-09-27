#pragma once
// IWYU pragma private; include "GlobalNamespace/PlaySoundOnEnable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlaySoundOnEnable)
namespace GlobalNamespace {
class PlaySoundOnEnable__DoLoop_d__8;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
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
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class PlaySoundOnEnable;
}
namespace GlobalNamespace {
class PlaySoundOnEnable__DoLoop_d__8;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlaySoundOnEnable*);
MARK_REF_T(::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlaySoundOnEnable*, "", "PlaySoundOnEnable");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8*, "", "PlaySoundOnEnable/<DoLoop>d__8");
// Dependencies UnityEngine.AudioClip, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlaySoundOnEnable
class CORDL_TYPE PlaySoundOnEnable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DoLoop_d__8 = ::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8;

/// @brief Field _clips, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__clips, put=__cordl_internal_set__clips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  _clips;

/// @brief Field _loop, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__loop, put=__cordl_internal_set__loop)) bool  _loop;

/// @brief Field _loopDelay, offset 0x34, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopDelay, put=__cordl_internal_set__loopDelay)) ::UnityEngine::Vector2  _loopDelay;

/// @brief Field _source, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__source, put=__cordl_internal_set__source)) ::UnityW<::UnityEngine::AudioSource>  _source;

/// [IteratorStateMachine(typeof(PlaySoundOnEnable::<DoLoop>d__8))]
/// @brief Method DoLoop, addr 0x5646d4c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoLoop() ;

static inline ::GlobalNamespace::PlaySoundOnEnable* New_ctor() ;

/// @brief Method OnDisable, addr 0x5646d14, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5646bb0, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Play, addr 0x5646bb4, size 0x160, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Reset, addr 0x5646af0, size 0xc0, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Stop, addr 0x5646d18, size 0x34, virtual false, abstract: false, final false
inline void Stop() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get__clips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get__clips() ;

constexpr bool const& __cordl_internal_get__loop() const;

constexpr bool& __cordl_internal_get__loop() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__loopDelay() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__loopDelay() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__source() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__source() ;

constexpr void __cordl_internal_set__clips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set__loop(bool  value) ;

constexpr void __cordl_internal_set__loopDelay(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__source(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0x5646de0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlaySoundOnEnable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlaySoundOnEnable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlaySoundOnEnable(PlaySoundOnEnable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlaySoundOnEnable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlaySoundOnEnable(PlaySoundOnEnable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{690};

/// [SerializeField]
/// @brief Field _source, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____source;

/// [SerializeField]
/// @brief Field _clips, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ____clips;

/// [SerializeField]
/// @brief Field _loop, offset: 0x30, size: 0x1, def value: None
 bool  ____loop;

/// [SerializeField]
/// @brief Field _loopDelay, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____loopDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlaySoundOnEnable, ____source) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaySoundOnEnable, ____clips) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaySoundOnEnable, ____loop) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaySoundOnEnable, ____loopDelay) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlaySoundOnEnable) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlaySoundOnEnable/<DoLoop>d__8
class CORDL_TYPE PlaySoundOnEnable__DoLoop_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PlaySoundOnEnable>  __4__this;

/// @brief Field <waitEndTime>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__waitEndTime_5__2, put=__cordl_internal_set__waitEndTime_5__2)) float_t  _waitEndTime_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5646dec, size 0x158, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5646f44, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5646f4c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5646f84, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5646de8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::PlaySoundOnEnable> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PlaySoundOnEnable>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__waitEndTime_5__2() const;

constexpr float_t& __cordl_internal_get__waitEndTime_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlaySoundOnEnable>  value) ;

constexpr void __cordl_internal_set__waitEndTime_5__2(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5646db8, size 0x28, virtual false, abstract: false, final false
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
constexpr PlaySoundOnEnable__DoLoop_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlaySoundOnEnable__DoLoop_d__8", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlaySoundOnEnable__DoLoop_d__8(PlaySoundOnEnable__DoLoop_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlaySoundOnEnable__DoLoop_d__8", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlaySoundOnEnable__DoLoop_d__8(PlaySoundOnEnable__DoLoop_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{689};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlaySoundOnEnable>  _____4__this;

/// @brief Field <waitEndTime>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____waitEndTime_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8, ____waitEndTime_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

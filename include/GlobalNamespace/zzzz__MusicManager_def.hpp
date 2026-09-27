#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MusicManager)
namespace GlobalNamespace {
class MusicManager__FadeInVolumeCoroutine_d__7;
}
namespace GlobalNamespace {
class MusicManager__FadeOutVolumeCoroutine_d__8;
}
namespace GlobalNamespace {
class MusicSource;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class MusicManager;
}
namespace GlobalNamespace {
class MusicManager__FadeInVolumeCoroutine_d__7;
}
namespace GlobalNamespace {
class MusicManager__FadeOutVolumeCoroutine_d__8;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MusicManager*);
MARK_REF_T(::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7*);
MARK_REF_T(::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MusicManager*, "", "MusicManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7*, "", "MusicManager/<FadeInVolumeCoroutine>d__7");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8*, "", "MusicManager/<FadeOutVolumeCoroutine>d__8");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MusicManager
class CORDL_TYPE MusicManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _FadeInVolumeCoroutine_d__7 = ::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7;

using _FadeOutVolumeCoroutine_d__8 = ::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::MusicManager>  Instance;

/// @brief Field activeSources, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeSources, put=__cordl_internal_set_activeSources)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicSource>>*  activeSources;

/// @brief Method Awake, addr 0x596d244, size 0xd4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FadeInMusic, addr 0x596ca44, size 0x180, virtual false, abstract: false, final false
inline void FadeInMusic(float_t  duration) ;

/// [IteratorStateMachine(typeof(MusicManager::<FadeInVolumeCoroutine>d__7))]
/// @brief Method FadeInVolumeCoroutine, addr 0x596d594, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FadeInVolumeCoroutine(float_t  duration) ;

/// @brief Method FadeOutMusic, addr 0x596c6d8, size 0x184, virtual false, abstract: false, final false
inline void FadeOutMusic(float_t  duration) ;

/// [IteratorStateMachine(typeof(MusicManager::<FadeOutVolumeCoroutine>d__8))]
/// @brief Method FadeOutVolumeCoroutine, addr 0x596d468, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FadeOutVolumeCoroutine(float_t  duration) ;

static inline ::GlobalNamespace::MusicManager* New_ctor() ;

/// @brief Method RegisterMusicSource, addr 0x596d318, size 0x90, virtual false, abstract: false, final false
inline void RegisterMusicSource(::GlobalNamespace::MusicSource*  musicSource) ;

/// @brief Method StopAllMusic, addr 0x596d660, size 0x8, virtual false, abstract: false, final false
static inline void StopAllMusic() ;

/// @brief Method StopAllMusic, addr 0x596d668, size 0x248, virtual false, abstract: false, final false
static inline void StopAllMusic(::UnityEngine::AudioClip*  clip) ;

/// @brief Method UnregisterMusicSource, addr 0x596d3a8, size 0x9c, virtual false, abstract: false, final false
inline void UnregisterMusicSource(::GlobalNamespace::MusicSource*  musicSource) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicSource>>* const& __cordl_internal_get_activeSources() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicSource>>*& __cordl_internal_get_activeSources() ;

constexpr void __cordl_internal_set_activeSources(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicSource>>*  value) ;

/// @brief Method .ctor, addr 0x596d8b0, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::MusicManager> getStaticF_Instance() ;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::MusicManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MusicManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MusicManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MusicManager(MusicManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MusicManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MusicManager(MusicManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2395};

/// @brief Field activeSources, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicSource>>*  ___activeSources;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MusicManager, ___activeSources) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MusicManager) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MusicManager/<FadeOutVolumeCoroutine>d__8
class CORDL_TYPE MusicManager__FadeOutVolumeCoroutine_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MusicManager>  __4__this;

/// @brief Field <complete>5__2, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__complete_5__2, put=__cordl_internal_set__complete_5__2)) bool  _complete_5__2;

/// @brief Field duration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x596dc98, size 0x23c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x596ded4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x596dedc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x596df14, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x596dc94, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MusicManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MusicManager>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get__complete_5__2() const;

constexpr bool& __cordl_internal_get__complete_5__2() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MusicManager>  value) ;

constexpr void __cordl_internal_set__complete_5__2(bool  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x596d638, size 0x28, virtual false, abstract: false, final false
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
constexpr MusicManager__FadeOutVolumeCoroutine_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MusicManager__FadeOutVolumeCoroutine_d__8", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MusicManager__FadeOutVolumeCoroutine_d__8(MusicManager__FadeOutVolumeCoroutine_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MusicManager__FadeOutVolumeCoroutine_d__8", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MusicManager__FadeOutVolumeCoroutine_d__8(MusicManager__FadeOutVolumeCoroutine_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2394};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MusicManager>  _____4__this;

/// @brief Field duration, offset: 0x28, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field <complete>5__2, offset: 0x2c, size: 0x1, def value: None
 bool  ____complete_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8, ____complete_5__2) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MusicManager__FadeOutVolumeCoroutine_d__8) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MusicManager/<FadeInVolumeCoroutine>d__7
class CORDL_TYPE MusicManager__FadeInVolumeCoroutine_d__7 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MusicManager>  __4__this;

/// @brief Field <complete>5__2, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__complete_5__2, put=__cordl_internal_set__complete_5__2)) bool  _complete_5__2;

/// @brief Field duration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x596d93c, size 0x310, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x596dc4c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x596dc54, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x596dc8c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x596d938, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MusicManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MusicManager>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get__complete_5__2() const;

constexpr bool& __cordl_internal_get__complete_5__2() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MusicManager>  value) ;

constexpr void __cordl_internal_set__complete_5__2(bool  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x596d610, size 0x28, virtual false, abstract: false, final false
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
constexpr MusicManager__FadeInVolumeCoroutine_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MusicManager__FadeInVolumeCoroutine_d__7", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MusicManager__FadeInVolumeCoroutine_d__7(MusicManager__FadeInVolumeCoroutine_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MusicManager__FadeInVolumeCoroutine_d__7", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MusicManager__FadeInVolumeCoroutine_d__7(MusicManager__FadeInVolumeCoroutine_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2393};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MusicManager>  _____4__this;

/// @brief Field duration, offset: 0x28, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field <complete>5__2, offset: 0x2c, size: 0x1, def value: None
 bool  ____complete_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7, ____complete_5__2) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MusicManager__FadeInVolumeCoroutine_d__7) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

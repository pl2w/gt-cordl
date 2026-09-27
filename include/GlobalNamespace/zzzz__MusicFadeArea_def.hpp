#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicFadeArea.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MusicFadeArea)
namespace GlobalNamespace {
struct MusicFadeArea_AudioSourceEntry;
}
namespace GlobalNamespace {
class MusicFadeArea__FadeInSources_d__8;
}
namespace GlobalNamespace {
class MusicFadeArea__FadeOutSources_d__9;
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
class Collider;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class MusicFadeArea;
}
namespace GlobalNamespace {
class MusicFadeArea__FadeInSources_d__8;
}
namespace GlobalNamespace {
class MusicFadeArea__FadeOutSources_d__9;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MusicFadeArea*);
MARK_REF_T(::GlobalNamespace::MusicFadeArea__FadeInSources_d__8*);
MARK_REF_T(::GlobalNamespace::MusicFadeArea__FadeOutSources_d__9*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MusicFadeArea*, "", "MusicFadeArea");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MusicFadeArea__FadeInSources_d__8*, "", "MusicFadeArea/<FadeInSources>d__8");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MusicFadeArea__FadeOutSources_d__9*, "", "MusicFadeArea/<FadeOutSources>d__9");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MusicFadeArea
class CORDL_TYPE MusicFadeArea : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AudioSourceEntry = ::GlobalNamespace::MusicFadeArea_AudioSourceEntry;

using _FadeInSources_d__8 = ::GlobalNamespace::MusicFadeArea__FadeInSources_d__8;

using _FadeOutSources_d__9 = ::GlobalNamespace::MusicFadeArea__FadeOutSources_d__9;

/// @brief Field fadeCoroutine, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_fadeCoroutine, put=__cordl_internal_set_fadeCoroutine)) ::UnityEngine::Coroutine*  fadeCoroutine;

/// @brief Field fadeDuration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeDuration, put=__cordl_internal_set_fadeDuration)) float_t  fadeDuration;

/// @brief Field fadeProgress, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeProgress, put=__cordl_internal_set_fadeProgress)) float_t  fadeProgress;

/// @brief Field sourcesToFadeIn, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourcesToFadeIn, put=__cordl_internal_set_sourcesToFadeIn)) ::System::Collections::Generic::List_1<::GlobalNamespace::MusicFadeArea_AudioSourceEntry>*  sourcesToFadeIn;

/// @brief Method Awake, addr 0x596c4ac, size 0xb0, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(MusicFadeArea::<FadeInSources>d__8))]
/// @brief Method FadeInSources, addr 0x596c85c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FadeInSources() ;

/// [IteratorStateMachine(typeof(MusicFadeArea::<FadeOutSources>d__9))]
/// @brief Method FadeOutSources, addr 0x596cbc4, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FadeOutSources() ;

static inline ::GlobalNamespace::MusicFadeArea* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x596c55c, size 0x17c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x596c8c8, size 0x17c, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_fadeCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_fadeCoroutine() ;

constexpr float_t const& __cordl_internal_get_fadeDuration() const;

constexpr float_t& __cordl_internal_get_fadeDuration() ;

constexpr float_t const& __cordl_internal_get_fadeProgress() const;

constexpr float_t& __cordl_internal_get_fadeProgress() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MusicFadeArea_AudioSourceEntry>* const& __cordl_internal_get_sourcesToFadeIn() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MusicFadeArea_AudioSourceEntry>*& __cordl_internal_get_sourcesToFadeIn() ;

constexpr void __cordl_internal_set_fadeCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_fadeDuration(float_t  value) ;

constexpr void __cordl_internal_set_fadeProgress(float_t  value) ;

constexpr void __cordl_internal_set_sourcesToFadeIn(::System::Collections::Generic::List_1<::GlobalNamespace::MusicFadeArea_AudioSourceEntry>*  value) ;

/// @brief Method .ctor, addr 0x596cc80, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MusicFadeArea() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MusicFadeArea", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MusicFadeArea(MusicFadeArea && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MusicFadeArea", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MusicFadeArea(MusicFadeArea const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2392};

/// [SerializeField]
/// @brief Field sourcesToFadeIn, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MusicFadeArea_AudioSourceEntry>*  ___sourcesToFadeIn;

/// [SerializeField]
/// @brief Field fadeDuration, offset: 0x28, size: 0x4, def value: None
 float_t  ___fadeDuration;

/// @brief Field fadeProgress, offset: 0x2c, size: 0x4, def value: None
 float_t  ___fadeProgress;

/// @brief Field fadeCoroutine, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___fadeCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MusicFadeArea, ___sourcesToFadeIn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicFadeArea, ___fadeDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicFadeArea, ___fadeProgress) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicFadeArea, ___fadeCoroutine) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MusicFadeArea) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MusicFadeArea/<FadeOutSources>d__9
class CORDL_TYPE MusicFadeArea__FadeOutSources_d__9 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MusicFadeArea>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x596cfc0, size 0x23c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MusicFadeArea__FadeOutSources_d__9* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x596d1fc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x596d204, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x596d23c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x596cfbc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MusicFadeArea> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MusicFadeArea>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MusicFadeArea>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x596cc58, size 0x28, virtual false, abstract: false, final false
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
constexpr MusicFadeArea__FadeOutSources_d__9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MusicFadeArea__FadeOutSources_d__9", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MusicFadeArea__FadeOutSources_d__9(MusicFadeArea__FadeOutSources_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MusicFadeArea__FadeOutSources_d__9", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MusicFadeArea__FadeOutSources_d__9(MusicFadeArea__FadeOutSources_d__9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2391};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MusicFadeArea>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MusicFadeArea__FadeOutSources_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicFadeArea__FadeOutSources_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicFadeArea__FadeOutSources_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MusicFadeArea__FadeOutSources_d__9) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MusicFadeArea/<FadeInSources>d__8
class CORDL_TYPE MusicFadeArea__FadeInSources_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MusicFadeArea>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x596cd14, size 0x260, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MusicFadeArea__FadeInSources_d__8* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x596cf74, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x596cf7c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x596cfb4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x596cd10, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MusicFadeArea> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MusicFadeArea>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MusicFadeArea>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x596cc30, size 0x28, virtual false, abstract: false, final false
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
constexpr MusicFadeArea__FadeInSources_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MusicFadeArea__FadeInSources_d__8", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MusicFadeArea__FadeInSources_d__8(MusicFadeArea__FadeInSources_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MusicFadeArea__FadeInSources_d__8", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MusicFadeArea__FadeInSources_d__8(MusicFadeArea__FadeInSources_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2390};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MusicFadeArea>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MusicFadeArea__FadeInSources_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicFadeArea__FadeInSources_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicFadeArea__FadeInSources_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MusicFadeArea__FadeInSources_d__8) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

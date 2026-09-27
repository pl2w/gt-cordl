#pragma once
// IWYU pragma private; include "GlobalNamespace/PartyGameModeWarning.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PartyGameModeWarning)
namespace GlobalNamespace {
class PartyGameModeWarning__HideCo_d__9;
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
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class PartyGameModeWarning;
}
namespace GlobalNamespace {
class PartyGameModeWarning__HideCo_d__9;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PartyGameModeWarning*);
MARK_REF_T(::GlobalNamespace::PartyGameModeWarning__HideCo_d__9*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PartyGameModeWarning*, "", "PartyGameModeWarning");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PartyGameModeWarning__HideCo_d__9*, "", "PartyGameModeWarning/<HideCo>d__9");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PartyGameModeWarning
class CORDL_TYPE PartyGameModeWarning : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _HideCo_d__9 = ::GlobalNamespace::PartyGameModeWarning__HideCo_d__9;

 __declspec(property(get=get_ShouldShowWarning)) bool  ShouldShowWarning;

/// @brief Field hideCoroutine, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_hideCoroutine, put=__cordl_internal_set_hideCoroutine)) ::UnityEngine::Coroutine*  hideCoroutine;

/// @brief Field hideParts, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_hideParts, put=__cordl_internal_set_hideParts)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  hideParts;

/// @brief Field showParts, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_showParts, put=__cordl_internal_set_showParts)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  showParts;

/// @brief Field visibleDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_visibleDuration, put=__cordl_internal_set_visibleDuration)) float_t  visibleDuration;

/// @brief Field visibleUntilTimestamp, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_visibleUntilTimestamp, put=__cordl_internal_set_visibleUntilTimestamp)) float_t  visibleUntilTimestamp;

/// @brief Method Awake, addr 0x567cec0, size 0x64, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(PartyGameModeWarning::<HideCo>d__9))]
/// @brief Method HideCo, addr 0x567cf8c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* HideCo() ;

static inline ::GlobalNamespace::PartyGameModeWarning* New_ctor() ;

/// @brief Method Show, addr 0x567cf24, size 0x68, virtual false, abstract: false, final false
inline void Show() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_hideCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_hideCoroutine() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_hideParts() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_hideParts() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_showParts() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_showParts() ;

constexpr float_t const& __cordl_internal_get_visibleDuration() const;

constexpr float_t& __cordl_internal_get_visibleDuration() ;

constexpr float_t const& __cordl_internal_get_visibleUntilTimestamp() const;

constexpr float_t& __cordl_internal_get_visibleUntilTimestamp() ;

constexpr void __cordl_internal_set_hideCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_hideParts(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_showParts(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_visibleDuration(float_t  value) ;

constexpr void __cordl_internal_set_visibleUntilTimestamp(float_t  value) ;

/// @brief Method .ctor, addr 0x567d020, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ShouldShowWarning, addr 0x567cdc4, size 0xfc, virtual false, abstract: false, final false
inline bool get_ShouldShowWarning() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PartyGameModeWarning() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PartyGameModeWarning", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PartyGameModeWarning(PartyGameModeWarning && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PartyGameModeWarning", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PartyGameModeWarning(PartyGameModeWarning const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{867};

/// [SerializeField]
/// @brief Field showParts, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___showParts;

/// [SerializeField]
/// @brief Field hideParts, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___hideParts;

/// [SerializeField]
/// @brief Field visibleDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ___visibleDuration;

/// @brief Field visibleUntilTimestamp, offset: 0x34, size: 0x4, def value: None
 float_t  ___visibleUntilTimestamp;

/// @brief Field hideCoroutine, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___hideCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PartyGameModeWarning, ___showParts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyGameModeWarning, ___hideParts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyGameModeWarning, ___visibleDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyGameModeWarning, ___visibleUntilTimestamp) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyGameModeWarning, ___hideCoroutine) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PartyGameModeWarning) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PartyGameModeWarning/<HideCo>d__9
class CORDL_TYPE PartyGameModeWarning__HideCo_d__9 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PartyGameModeWarning>  __4__this;

/// @brief Field <lastVisible>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastVisible_5__2, put=__cordl_internal_set__lastVisible_5__2)) float_t  _lastVisible_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x567d02c, size 0x214, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::PartyGameModeWarning__HideCo_d__9* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x567d240, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x567d248, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x567d280, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x567d028, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::PartyGameModeWarning> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PartyGameModeWarning>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__lastVisible_5__2() const;

constexpr float_t& __cordl_internal_get__lastVisible_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PartyGameModeWarning>  value) ;

constexpr void __cordl_internal_set__lastVisible_5__2(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x567cff8, size 0x28, virtual false, abstract: false, final false
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
constexpr PartyGameModeWarning__HideCo_d__9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PartyGameModeWarning__HideCo_d__9", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PartyGameModeWarning__HideCo_d__9(PartyGameModeWarning__HideCo_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PartyGameModeWarning__HideCo_d__9", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PartyGameModeWarning__HideCo_d__9(PartyGameModeWarning__HideCo_d__9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{866};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PartyGameModeWarning>  _____4__this;

/// @brief Field <lastVisible>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____lastVisible_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PartyGameModeWarning__HideCo_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyGameModeWarning__HideCo_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyGameModeWarning__HideCo_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyGameModeWarning__HideCo_d__9, ____lastVisible_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PartyGameModeWarning__HideCo_d__9) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

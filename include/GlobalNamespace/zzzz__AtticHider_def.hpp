#pragma once
// IWYU pragma private; include "GlobalNamespace/AtticHider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AtticHider)
namespace GlobalNamespace {
class AtticHider__WaitForAtticLoad_d__5;
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
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class AtticHider;
}
namespace GlobalNamespace {
class AtticHider__WaitForAtticLoad_d__5;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AtticHider*);
MARK_REF_T(::GlobalNamespace::AtticHider__WaitForAtticLoad_d__5*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AtticHider*, "", "AtticHider");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AtticHider__WaitForAtticLoad_d__5*, "", "AtticHider/<WaitForAtticLoad>d__5");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AtticHider
class CORDL_TYPE AtticHider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _WaitForAtticLoad_d__5 = ::GlobalNamespace::AtticHider__WaitForAtticLoad_d__5;

/// @brief Field AtticRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AtticRenderer, put=__cordl_internal_set_AtticRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  AtticRenderer;

/// @brief Field _coroutine, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__coroutine, put=__cordl_internal_set__coroutine)) ::UnityEngine::Coroutine*  _coroutine;

static inline ::GlobalNamespace::AtticHider* New_ctor() ;

/// @brief Method OnDestroy, addr 0x579ff44, size 0xf0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnZoneChanged, addr 0x579fe10, size 0x134, virtual false, abstract: false, final false
inline void OnZoneChanged() ;

/// @brief Method Start, addr 0x579fd18, size 0xf8, virtual false, abstract: false, final false
inline void Start() ;

/// [IteratorStateMachine(typeof(AtticHider::<WaitForAtticLoad>d__5))]
/// @brief Method WaitForAtticLoad, addr 0x57a0034, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitForAtticLoad() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_AtticRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_AtticRenderer() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__coroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__coroutine() ;

constexpr void __cordl_internal_set_AtticRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__coroutine(::UnityEngine::Coroutine*  value) ;

/// @brief Method .ctor, addr 0x57a00c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AtticHider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AtticHider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AtticHider(AtticHider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AtticHider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AtticHider(AtticHider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1527};

/// [SerializeField]
/// @brief Field AtticRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___AtticRenderer;

/// @brief Field _coroutine, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____coroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AtticHider, ___AtticRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AtticHider, ____coroutine) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AtticHider) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AtticHider/<WaitForAtticLoad>d__5
class CORDL_TYPE AtticHider__WaitForAtticLoad_d__5 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::AtticHider>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x57a00d4, size 0x120, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::AtticHider__WaitForAtticLoad_d__5* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x57a01f4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x57a01fc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x57a0234, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x57a00d0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::AtticHider> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::AtticHider>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AtticHider>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x57a00a0, size 0x28, virtual false, abstract: false, final false
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
constexpr AtticHider__WaitForAtticLoad_d__5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AtticHider__WaitForAtticLoad_d__5", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AtticHider__WaitForAtticLoad_d__5(AtticHider__WaitForAtticLoad_d__5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AtticHider__WaitForAtticLoad_d__5", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AtticHider__WaitForAtticLoad_d__5(AtticHider__WaitForAtticLoad_d__5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1526};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AtticHider>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AtticHider__WaitForAtticLoad_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AtticHider__WaitForAtticLoad_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AtticHider__WaitForAtticLoad_d__5, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AtticHider__WaitForAtticLoad_d__5) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

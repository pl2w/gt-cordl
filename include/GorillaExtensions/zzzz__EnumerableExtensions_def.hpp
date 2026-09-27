#pragma once
// IWYU pragma private; include "GorillaExtensions/EnumerableExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumerableExtensions)
namespace GorillaExtensions {
template<typename T>
class EnumerableExtensions__Peek_d__1_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GorillaExtensions {
class EnumerableExtensions;
}
namespace GorillaExtensions {
template<typename T>
class EnumerableExtensions__Peek_d__1_1;
}
// Write type traits
MARK_REF_T(::GorillaExtensions::EnumerableExtensions*);
MARK_GEN_REF_T_PTR(::GorillaExtensions::EnumerableExtensions__Peek_d__1_1);
DEFINE_IL2CPP_CLASS(::GorillaExtensions::EnumerableExtensions*, "GorillaExtensions", "EnumerableExtensions");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GorillaExtensions::EnumerableExtensions__Peek_d__1_1, "GorillaExtensions", "EnumerableExtensions/<Peek>d__1`1");
// [Extension]
// Dependencies System.IComparable`1<T>, System.Object
namespace GorillaExtensions {
// Is value type: false
// CS Name: GorillaExtensions.EnumerableExtensions
class CORDL_TYPE EnumerableExtensions : public ::System::Object {
public:
// Declarations
template<typename T>
using _Peek_d__1_1 = ::GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>;

/// [Extension]
/// @brief Method MinBy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue,typename TKey>
requires(::cordl_internals::type_constraint<TKey, ::System::IComparable_1<TKey>*> && ::cordl_internals::value_type_constraint<TKey> && ::cordl_internals::default_constructor_constraint<TKey>)
static inline TValue MinBy(::System::Collections::Generic::IEnumerable_1<TValue>*  ts, ::System::Func_2<TValue,TKey>*  keyGetter) ;

/// [IteratorStateMachine(typeof(GorillaExtensions.EnumerableExtensions::<Peek>d__1`1<T>))]
/// [Extension]
/// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* Peek(::System::Collections::Generic::IEnumerable_1<T>*  ts, ::System::Action_1<T>*  action) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumerableExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumerableExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableExtensions(EnumerableExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableExtensions(EnumerableExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4556};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaExtensions::EnumerableExtensions) == 0x10, "Size mismatch!");

} // namespace end def GorillaExtensions
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaExtensions {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GorillaExtensions.EnumerableExtensions/<Peek>d__1`1<T>
class CORDL_TYPE EnumerableExtensions__Peek_d__1_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current)) T  System_Collections_Generic_IEnumerator_T__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) T  __2__current;

/// @brief Field <>3__action, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__action, put=__cordl_internal_set___3__action)) ::System::Action_1<T>*  __3__action;

/// @brief Field <>3__ts, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__ts, put=__cordl_internal_set___3__ts)) ::System::Collections::Generic::IEnumerable_1<T>*  __3__ts;

/// @brief Field <>7__wrap1, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<T>*  __7__wrap1;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field action, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::System::Action_1<T>*  action;

/// @brief Field ts, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ts, put=__cordl_internal_set_ts)) ::System::Collections::Generic::IEnumerable_1<T>*  ts;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr T const& __cordl_internal_get___2__current() const;

constexpr T& __cordl_internal_get___2__current() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get___3__action() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get___3__action() ;

constexpr ::System::Collections::Generic::IEnumerable_1<T>* const& __cordl_internal_get___3__ts() const;

constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __cordl_internal_get___3__ts() ;

constexpr ::System::Collections::Generic::IEnumerator_1<T>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<T>*& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_action() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_action() ;

constexpr ::System::Collections::Generic::IEnumerable_1<T>* const& __cordl_internal_get_ts() const;

constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __cordl_internal_get_ts() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(T  value) ;

constexpr void __cordl_internal_set___3__action(::System::Action_1<T>*  value) ;

constexpr void __cordl_internal_set___3__ts(::System::Collections::Generic::IEnumerable_1<T>*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<T>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_action(::System::Action_1<T>*  value) ;

constexpr void __cordl_internal_set_ts(::System::Collections::Generic::IEnumerable_1<T>*  value) ;

/// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumerableExtensions__Peek_d__1_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumerableExtensions__Peek_d__1_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableExtensions__Peek_d__1_1(EnumerableExtensions__Peek_d__1_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableExtensions__Peek_d__1_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableExtensions__Peek_d__1_1(EnumerableExtensions__Peek_d__1_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4555};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 T  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field ts, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<T>*  ___ts;

/// @brief Field <>3__ts, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<T>*  _____3__ts;

/// @brief Field action, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<T>*  ___action;

/// @brief Field <>3__action, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<T>*  _____3__action;

/// @brief Field <>7__wrap1, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<T>*  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaExtensions

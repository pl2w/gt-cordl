#pragma once
// IWYU pragma private; include "GlobalNamespace/LinqUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinqUtils)
namespace GlobalNamespace {
template<typename TSource,typename TResult>
class LinqUtils__DistinctBy_d__1_2;
}
namespace GlobalNamespace {
template<typename TSource,typename TResult>
class LinqUtils__SelectManyNullSafe_d__0_2;
}
namespace GlobalNamespace {
template<typename T>
class LinqUtils__Self_d__6_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
namespace GlobalNamespace {
class LinqUtils;
}
namespace GlobalNamespace {
template<typename TSource,typename TResult>
class LinqUtils__DistinctBy_d__1_2;
}
namespace GlobalNamespace {
template<typename TSource,typename TResult>
class LinqUtils__SelectManyNullSafe_d__0_2;
}
namespace GlobalNamespace {
template<typename T>
class LinqUtils__Self_d__6_1;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LinqUtils*);
MARK_GEN_REF_T_PTR(::GlobalNamespace::LinqUtils__DistinctBy_d__1_2);
MARK_GEN_REF_T_PTR(::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2);
MARK_GEN_REF_T_PTR(::GlobalNamespace::LinqUtils__Self_d__6_1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LinqUtils*, "", "LinqUtils");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::LinqUtils__DistinctBy_d__1_2, "", "LinqUtils/<DistinctBy>d__1`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2, "", "LinqUtils/<SelectManyNullSafe>d__0`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::LinqUtils__Self_d__6_1, "", "LinqUtils/<Self>d__6`1");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LinqUtils
class CORDL_TYPE LinqUtils : public ::System::Object {
public:
// Declarations
template<typename TSource,typename TResult>
using _DistinctBy_d__1_2 = ::GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource, TResult>;

template<typename TSource,typename TResult>
using _SelectManyNullSafe_d__0_2 = ::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource, TResult>;

template<typename T>
using _Self_d__6_1 = ::GlobalNamespace::LinqUtils__Self_d__6_1<T>;

/// [Extension]
/// @brief Method AsArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> AsArray(::System::Collections::Generic::IEnumerable_1<T>*  source) ;

/// [Extension]
/// @brief Method AsList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* AsList(::System::Collections::Generic::IEnumerable_1<T>*  source) ;

/// [IteratorStateMachine(typeof(LinqUtils::<DistinctBy>d__1`2<TSource, TResult>))]
/// [Extension]
/// @brief Method DistinctBy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TResult>
static inline ::System::Collections::Generic::IEnumerable_1<TSource>* DistinctBy(::System::Collections::Generic::IEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TResult>*  selector) ;

/// [Extension]
/// @brief Method ForEach, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* ForEach(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Action_1<T>*  action) ;

/// [IteratorStateMachine(typeof(LinqUtils::<SelectManyNullSafe>d__0`2<TSource, TResult>))]
/// [Extension]
/// @brief Method SelectManyNullSafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TResult>
static inline ::System::Collections::Generic::IEnumerable_1<TResult>* SelectManyNullSafe(::System::Collections::Generic::IEnumerable_1<TSource>*  sources, ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>*  selector) ;

/// [IteratorStateMachine(typeof(LinqUtils::<Self>d__6`1<T>))]
/// [Extension]
/// @brief Method Self, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* Self(T  value) ;

/// [Extension]
/// @brief Method Transform, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IList_1<T>* Transform(::System::Collections::Generic::IList_1<T>*  list, ::System::Func_2<T,T>*  action) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinqUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinqUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinqUtils(LinqUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinqUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinqUtils(LinqUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3510};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LinqUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: LinqUtils/<Self>d__6`1<T>
class CORDL_TYPE LinqUtils__Self_d__6_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current)) T  System_Collections_Generic_IEnumerator_T__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) T  __2__current;

/// @brief Field <>3__value, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__value, put=__cordl_internal_set___3__value)) T  __3__value;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field value, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) T  value;

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
static inline ::GlobalNamespace::LinqUtils__Self_d__6_1<T>* New_ctor(int32_t  __1__state) ;

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

constexpr T const& __cordl_internal_get___3__value() const;

constexpr T& __cordl_internal_get___3__value() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr T const& __cordl_internal_get_value() const;

constexpr T& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(T  value) ;

constexpr void __cordl_internal_set___3__value(T  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_value(T  value) ;

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
constexpr LinqUtils__Self_d__6_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinqUtils__Self_d__6_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinqUtils__Self_d__6_1(LinqUtils__Self_d__6_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinqUtils__Self_d__6_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinqUtils__Self_d__6_1(LinqUtils__Self_d__6_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3509};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 T  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field value, offset: 0x28, size: 0x8, def value: None
 T  ___value;

/// @brief Field <>3__value, offset: 0x30, size: 0x8, def value: None
 T  _____3__value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename TSource,typename TResult>
// Is value type: false
// CS Name: LinqUtils/<SelectManyNullSafe>d__0`2<TSource,TResult>
class CORDL_TYPE LinqUtils__SelectManyNullSafe_d__0_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_TResult__get_Current)) TResult  System_Collections_Generic_IEnumerator_TResult__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) TResult  __2__current;

/// @brief Field <>3__selector, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__selector, put=__cordl_internal_set___3__selector)) ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>*  __3__selector;

/// @brief Field <>3__sources, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__sources, put=__cordl_internal_set___3__sources)) ::System::Collections::Generic::IEnumerable_1<TSource>*  __3__sources;

/// @brief Field <>7__wrap1, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<TSource>*  __7__wrap1;

/// @brief Field <>7__wrap2, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<TResult>*  __7__wrap2;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field selector, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector, put=__cordl_internal_set_selector)) ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>*  selector;

/// @brief Field sources, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sources, put=__cordl_internal_set_sources)) ::System::Collections::Generic::IEnumerable_1<TSource>*  sources;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TResult>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TResult>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<TResult>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<TResult>* System_Collections_Generic_IEnumerable_TResult__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<TResult>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TResult System_Collections_Generic_IEnumerator_TResult__get_Current() ;

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

constexpr TResult const& __cordl_internal_get___2__current() const;

constexpr TResult& __cordl_internal_get___2__current() ;

constexpr ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>* const& __cordl_internal_get___3__selector() const;

constexpr ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>*& __cordl_internal_get___3__selector() ;

constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get___3__sources() const;

constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get___3__sources() ;

constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& __cordl_internal_get___7__wrap1() ;

constexpr ::System::Collections::Generic::IEnumerator_1<TResult>* const& __cordl_internal_get___7__wrap2() const;

constexpr ::System::Collections::Generic::IEnumerator_1<TResult>*& __cordl_internal_get___7__wrap2() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>* const& __cordl_internal_get_selector() const;

constexpr ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>*& __cordl_internal_get_selector() ;

constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_sources() const;

constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_sources() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(TResult  value) ;

constexpr void __cordl_internal_set___3__selector(::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>*  value) ;

constexpr void __cordl_internal_set___3__sources(::System::Collections::Generic::IEnumerable_1<TSource>*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<TSource>*  value) ;

constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TResult>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_selector(::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>*  value) ;

constexpr void __cordl_internal_set_sources(::System::Collections::Generic::IEnumerable_1<TSource>*  value) ;

/// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TResult>"
constexpr ::System::Collections::Generic::IEnumerable_1<TResult>* i___System__Collections__Generic__IEnumerable_1_TResult_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TResult>"
constexpr ::System::Collections::Generic::IEnumerator_1<TResult>* i___System__Collections__Generic__IEnumerator_1_TResult_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinqUtils__SelectManyNullSafe_d__0_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinqUtils__SelectManyNullSafe_d__0_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinqUtils__SelectManyNullSafe_d__0_2(LinqUtils__SelectManyNullSafe_d__0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinqUtils__SelectManyNullSafe_d__0_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinqUtils__SelectManyNullSafe_d__0_2(LinqUtils__SelectManyNullSafe_d__0_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3508};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 TResult  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field sources, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<TSource>*  ___sources;

/// @brief Field <>3__sources, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<TSource>*  _____3__sources;

/// @brief Field selector, offset: 0x38, size: 0x8, def value: None
 ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>*  ___selector;

/// @brief Field <>3__selector, offset: 0x40, size: 0x8, def value: None
 ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>*  _____3__selector;

/// @brief Field <>7__wrap1, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<TSource>*  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<TResult>*  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename TSource,typename TResult>
// Is value type: false
// CS Name: LinqUtils/<DistinctBy>d__1`2<TSource,TResult>
class CORDL_TYPE LinqUtils__DistinctBy_d__1_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_TSource__get_Current)) TSource  System_Collections_Generic_IEnumerator_TSource__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) TSource  __2__current;

/// @brief Field <>3__selector, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__selector, put=__cordl_internal_set___3__selector)) ::System::Func_2<TSource,TResult>*  __3__selector;

/// @brief Field <>3__source, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__source, put=__cordl_internal_set___3__source)) ::System::Collections::Generic::IEnumerable_1<TSource>*  __3__source;

/// @brief Field <>7__wrap2, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<TSource>*  __7__wrap2;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <set>5__2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__set_5__2, put=__cordl_internal_set__set_5__2)) ::System::Collections::Generic::HashSet_1<TResult>*  _set_5__2;

/// @brief Field selector, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector, put=__cordl_internal_set_selector)) ::System::Func_2<TSource,TResult>*  selector;

/// @brief Field source, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::System::Collections::Generic::IEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<TSource>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System_Collections_Generic_IEnumerable_TSource__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<TSource>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TSource System_Collections_Generic_IEnumerator_TSource__get_Current() ;

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

constexpr TSource const& __cordl_internal_get___2__current() const;

constexpr TSource& __cordl_internal_get___2__current() ;

constexpr ::System::Func_2<TSource,TResult>* const& __cordl_internal_get___3__selector() const;

constexpr ::System::Func_2<TSource,TResult>*& __cordl_internal_get___3__selector() ;

constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get___3__source() const;

constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get___3__source() ;

constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* const& __cordl_internal_get___7__wrap2() const;

constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& __cordl_internal_get___7__wrap2() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Collections::Generic::HashSet_1<TResult>* const& __cordl_internal_get__set_5__2() const;

constexpr ::System::Collections::Generic::HashSet_1<TResult>*& __cordl_internal_get__set_5__2() ;

constexpr ::System::Func_2<TSource,TResult>* const& __cordl_internal_get_selector() const;

constexpr ::System::Func_2<TSource,TResult>*& __cordl_internal_get_selector() ;

constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(TSource  value) ;

constexpr void __cordl_internal_set___3__selector(::System::Func_2<TSource,TResult>*  value) ;

constexpr void __cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>*  value) ;

constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TSource>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__set_5__2(::System::Collections::Generic::HashSet_1<TResult>*  value) ;

constexpr void __cordl_internal_set_selector(::System::Func_2<TSource,TResult>*  value) ;

constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>*  value) ;

/// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinqUtils__DistinctBy_d__1_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinqUtils__DistinctBy_d__1_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinqUtils__DistinctBy_d__1_2(LinqUtils__DistinctBy_d__1_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinqUtils__DistinctBy_d__1_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinqUtils__DistinctBy_d__1_2(LinqUtils__DistinctBy_d__1_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3507};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 TSource  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field source, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<TSource>*  ___source;

/// @brief Field <>3__source, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<TSource>*  _____3__source;

/// @brief Field selector, offset: 0x38, size: 0x8, def value: None
 ::System::Func_2<TSource,TResult>*  ___selector;

/// @brief Field <>3__selector, offset: 0x40, size: 0x8, def value: None
 ::System::Func_2<TSource,TResult>*  _____3__selector;

/// @brief Field <set>5__2, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<TResult>*  ____set_5__2;

/// @brief Field <>7__wrap2, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<TSource>*  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace

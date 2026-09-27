#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/BufferSkip_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferSkip_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class BufferSkip_1__BufferSkip;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskAsyncDisposable;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerator_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class BufferSkip_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class BufferSkip_1__BufferSkip;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::BufferSkip_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::BufferSkip_1__BufferSkip);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::BufferSkip_1, "Cysharp.Threading.Tasks.Linq", "BufferSkip`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::BufferSkip_1__BufferSkip, "Cysharp.Threading.Tasks.Linq", "BufferSkip`1/_BufferSkip");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.BufferSkip`1<TSource>
class CORDL_TYPE BufferSkip_1 : public ::System::Object {
public:
// Declarations
using _BufferSkip = ::Cysharp::Threading::Tasks::Linq::BufferSkip_1__BufferSkip<TSource>;

/// @brief Field count, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field skip, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_skip, put=__cordl_internal_set_skip)) int32_t  skip;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Collections::Generic::IList_1<TSource>*>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Collections::Generic::IList_1<TSource>*>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Collections::Generic::IList_1<TSource>*>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::BufferSkip_1<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  count, int32_t  skip) ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr int32_t const& __cordl_internal_get_skip() const;

constexpr int32_t& __cordl_internal_get_skip() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_skip(int32_t  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  count, int32_t  skip) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Collections::Generic::IList_1<TSource>*>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Collections::Generic::IList_1<TSource>*>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1___System__Collections__Generic__IList_1_TSource___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferSkip_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferSkip_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferSkip_1(BufferSkip_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferSkip_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferSkip_1(BufferSkip_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20448};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field count, offset: 0x18, size: 0x4, def value: None
 int32_t  ___count;

/// @brief Field skip, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___skip;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.BufferSkip`1/_BufferSkip<TSource>
class CORDL_TYPE BufferSkip_1__BufferSkip : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
 __declspec(property(get=get_Current, put=set_Current)) ::System::Collections::Generic::IList_1<TSource>*  Current;

/// @brief Field MoveNextCoreDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MoveNextCoreDelegate, put=setStaticF_MoveNextCoreDelegate)) ::System::Action_1<::System::Object*>*  MoveNextCoreDelegate;

/// @brief Field <Current>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) ::System::Collections::Generic::IList_1<TSource>*  _Current_k__BackingField;

/// @brief Field awaiter, offset 0x58, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter, put=__cordl_internal_set_awaiter)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter;

/// @brief Field buffers, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffers, put=__cordl_internal_set_buffers)) ::System::Collections::Generic::Queue_1<::System::Collections::Generic::List_1<TSource>*>*  buffers;

/// @brief Field cancellationToken, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field completed, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) bool  completed;

/// @brief Field continueNext, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_continueNext, put=__cordl_internal_set_continueNext)) bool  continueNext;

/// @brief Field count, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field enumerator, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator, put=__cordl_internal_set_enumerator)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  enumerator;

/// @brief Field index, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field skip, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_skip, put=__cordl_internal_set_skip)) int32_t  skip;

/// @brief Field source, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Collections::Generic::IList_1<TSource>*>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Collections::Generic::IList_1<TSource>*>*() noexcept;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

/// @brief Method MoveNextCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void MoveNextCore(::System::Object*  state) ;

static inline ::Cysharp::Threading::Tasks::Linq::BufferSkip_1__BufferSkip<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  count, int32_t  skip, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SourceMoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SourceMoveNext() ;

constexpr ::System::Collections::Generic::IList_1<TSource>* const& __cordl_internal_get__Current_k__BackingField() const;

constexpr ::System::Collections::Generic::IList_1<TSource>*& __cordl_internal_get__Current_k__BackingField() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter() ;

constexpr ::System::Collections::Generic::Queue_1<::System::Collections::Generic::List_1<TSource>*>* const& __cordl_internal_get_buffers() const;

constexpr ::System::Collections::Generic::Queue_1<::System::Collections::Generic::List_1<TSource>*>*& __cordl_internal_get_buffers() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr bool const& __cordl_internal_get_completed() const;

constexpr bool& __cordl_internal_get_completed() ;

constexpr bool const& __cordl_internal_get_continueNext() const;

constexpr bool& __cordl_internal_get_continueNext() ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& __cordl_internal_get_enumerator() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& __cordl_internal_get_enumerator() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr int32_t const& __cordl_internal_get_skip() const;

constexpr int32_t& __cordl_internal_get_skip() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set__Current_k__BackingField(::System::Collections::Generic::IList_1<TSource>*  value) ;

constexpr void __cordl_internal_set_awaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_buffers(::System::Collections::Generic::Queue_1<::System::Collections::Generic::List_1<TSource>*>*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_completed(bool  value) ;

constexpr void __cordl_internal_set_continueNext(bool  value) ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_skip(int32_t  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  count, int32_t  skip, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_MoveNextCoreDelegate() ;

/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IList_1<TSource>* get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Collections::Generic::IList_1<TSource>*>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Collections::Generic::IList_1<TSource>*>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1___System__Collections__Generic__IList_1_TSource___() noexcept;

static inline void setStaticF_MoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(::System::Collections::Generic::IList_1<TSource>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferSkip_1__BufferSkip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferSkip_1__BufferSkip", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferSkip_1__BufferSkip(BufferSkip_1__BufferSkip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferSkip_1__BufferSkip", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferSkip_1__BufferSkip(BufferSkip_1__BufferSkip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20447};

/// @brief Field source, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field count, offset: 0x40, size: 0x4, def value: None
 int32_t  ___count;

/// @brief Field skip, offset: 0x44, size: 0x4, def value: None
 int32_t  ___skip;

/// @brief Field cancellationToken, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field enumerator, offset: 0x50, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  ___enumerator;

/// @brief Field awaiter, offset: 0x58, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter;

/// @brief Field continueNext, offset: 0x70, size: 0x1, def value: None
 bool  ___continueNext;

/// @brief Field completed, offset: 0x71, size: 0x1, def value: None
 bool  ___completed;

/// @brief Field buffers, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::Collections::Generic::List_1<TSource>*>*  ___buffers;

/// @brief Field index, offset: 0x80, size: 0x4, def value: None
 int32_t  ___index;

/// [CompilerGenerated]
/// @brief Field <Current>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<TSource>*  ____Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq

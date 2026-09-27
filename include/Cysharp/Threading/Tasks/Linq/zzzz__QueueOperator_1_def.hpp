#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/QueueOperator_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(QueueOperator_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class QueueOperator_1__Queue;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class ChannelWriter_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class Channel_1;
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
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
template<typename TSource>
struct _Queue_QueueOperator_1__ConsumeAll_d__10;
}
namespace GlobalNamespace {
template<typename TSource>
struct _Queue_QueueOperator_1__DisposeAsync_d__11;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class QueueOperator_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class QueueOperator_1__Queue;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::QueueOperator_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::QueueOperator_1, "Cysharp.Threading.Tasks.Linq", "QueueOperator`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue, "Cysharp.Threading.Tasks.Linq", "QueueOperator`1/_Queue");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.QueueOperator`1<TSource>
class CORDL_TYPE QueueOperator_1 : public ::System::Object {
public:
// Declarations
using _Queue = ::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::QueueOperator_1<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source) ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QueueOperator_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QueueOperator_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QueueOperator_1(QueueOperator_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QueueOperator_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QueueOperator_1(QueueOperator_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20713};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.QueueOperator`1/_Queue<TSource>
class CORDL_TYPE QueueOperator_1__Queue : public ::System::Object {
public:
// Declarations
using _ConsumeAll_d__10 = ::GlobalNamespace::_Queue_QueueOperator_1__ConsumeAll_d__10<TSource>;

using _DisposeAsync_d__11 = ::GlobalNamespace::_Queue_QueueOperator_1__DisposeAsync_d__11<TSource>;

 __declspec(property(get=get_Current)) TSource  Current;

/// @brief Field cancellationToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field channel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_channel, put=__cordl_internal_set_channel)) ::Cysharp::Threading::Tasks::Channel_1<TSource>*  channel;

/// @brief Field channelClosed, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_channelClosed, put=__cordl_internal_set_channelClosed)) bool  channelClosed;

/// @brief Field channelEnumerator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_channelEnumerator, put=__cordl_internal_set_channelEnumerator)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  channelEnumerator;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Field sourceEnumerator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceEnumerator, put=__cordl_internal_set_sourceEnumerator)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  sourceEnumerator;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*() noexcept;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.QueueOperator`1::_Queue::<ConsumeAll>d__10<TSource>))]
/// @brief Method ConsumeAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTaskVoid ConsumeAll(::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>*  self, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  enumerator, ::Cysharp::Threading::Tasks::ChannelWriter_1<TSource>*  writer) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.QueueOperator`1::_Queue::<DisposeAsync>d__11<TSource>))]
/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::Channel_1<TSource>* const& __cordl_internal_get_channel() const;

constexpr ::Cysharp::Threading::Tasks::Channel_1<TSource>*& __cordl_internal_get_channel() ;

constexpr bool const& __cordl_internal_get_channelClosed() const;

constexpr bool& __cordl_internal_get_channelClosed() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& __cordl_internal_get_channelEnumerator() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& __cordl_internal_get_channelEnumerator() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& __cordl_internal_get_sourceEnumerator() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& __cordl_internal_get_sourceEnumerator() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_channel(::Cysharp::Threading::Tasks::Channel_1<TSource>*  value) ;

constexpr void __cordl_internal_set_channelClosed(bool  value) ;

constexpr void __cordl_internal_set_channelEnumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

constexpr void __cordl_internal_set_sourceEnumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TSource get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TSource_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QueueOperator_1__Queue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QueueOperator_1__Queue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QueueOperator_1__Queue(QueueOperator_1__Queue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QueueOperator_1__Queue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QueueOperator_1__Queue(QueueOperator_1__Queue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20712};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field channel, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Channel_1<TSource>*  ___channel;

/// @brief Field channelEnumerator, offset: 0x28, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  ___channelEnumerator;

/// @brief Field sourceEnumerator, offset: 0x30, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  ___sourceEnumerator;

/// @brief Field channelClosed, offset: 0x38, size: 0x1, def value: None
 bool  ___channelClosed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq

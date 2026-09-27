#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToUniTaskAsyncEnumerableObservable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ToUniTaskAsyncEnumerableObservable_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable;
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
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace System {
template<typename T>
class IObserver_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class ToUniTaskAsyncEnumerableObservable_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1, "Cysharp.Threading.Tasks.Linq", "ToUniTaskAsyncEnumerableObservable`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable, "Cysharp.Threading.Tasks.Linq", "ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1<T>
class CORDL_TYPE ToUniTaskAsyncEnumerableObservable_1 : public ::System::Object {
public:
// Declarations
using _ToUniTaskAsyncEnumerableObservable = ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::System::IObservable_1<T>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1<T>* New_ctor(::System::IObservable_1<T>*  source) ;

constexpr ::System::IObservable_1<T>* const& __cordl_internal_get_source() const;

constexpr ::System::IObservable_1<T>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_source(::System::IObservable_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::IObservable_1<T>*  source) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToUniTaskAsyncEnumerableObservable_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToUniTaskAsyncEnumerableObservable_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToUniTaskAsyncEnumerableObservable_1(ToUniTaskAsyncEnumerableObservable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToUniTaskAsyncEnumerableObservable_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToUniTaskAsyncEnumerableObservable_1(ToUniTaskAsyncEnumerableObservable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20883};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::System::IObservable_1<T>*  ___source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<T>
class CORDL_TYPE ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
 __declspec(property(get=get_Current)) T  Current;

/// @brief Field OnCanceledDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCanceledDelegate, put=setStaticF_OnCanceledDelegate)) ::System::Action_1<::System::Object*>*  OnCanceledDelegate;

/// @brief Field cancellationToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field cancellationTokenRegistration, offset 0x78, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration, put=__cordl_internal_set_cancellationTokenRegistration)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration;

/// @brief Field current, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_current, put=__cordl_internal_set_current)) T  current;

/// @brief Field error, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_error, put=__cordl_internal_set_error)) ::System::Exception*  error;

/// @brief Field queuedResult, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_queuedResult, put=__cordl_internal_set_queuedResult)) ::System::Collections::Generic::Queue_1<T>*  queuedResult;

/// @brief Field source, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::System::IObservable_1<T>*  source;

/// @brief Field subscribeCompleted, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_subscribeCompleted, put=__cordl_internal_set_subscribeCompleted)) bool  subscribeCompleted;

/// @brief Field subscription, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_subscription, put=__cordl_internal_set_subscription)) ::System::IDisposable*  subscription;

/// @brief Field useCachedCurrent, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCachedCurrent, put=__cordl_internal_set_useCachedCurrent)) bool  useCachedCurrent;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*() noexcept;

/// @brief Convert operator to "::System::IObserver_1<T>"
constexpr operator  ::System::IObserver_1<T>*() noexcept;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>* New_ctor(::System::IObservable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnCanceled(::System::Object*  state) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted() ;

/// @brief Method OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnError(::System::Exception*  error) ;

/// @brief Method OnNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnNext(T  value) ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration() ;

constexpr T const& __cordl_internal_get_current() const;

constexpr T& __cordl_internal_get_current() ;

constexpr ::System::Exception* const& __cordl_internal_get_error() const;

constexpr ::System::Exception*& __cordl_internal_get_error() ;

constexpr ::System::Collections::Generic::Queue_1<T>* const& __cordl_internal_get_queuedResult() const;

constexpr ::System::Collections::Generic::Queue_1<T>*& __cordl_internal_get_queuedResult() ;

constexpr ::System::IObservable_1<T>* const& __cordl_internal_get_source() const;

constexpr ::System::IObservable_1<T>*& __cordl_internal_get_source() ;

constexpr bool const& __cordl_internal_get_subscribeCompleted() const;

constexpr bool& __cordl_internal_get_subscribeCompleted() ;

constexpr ::System::IDisposable* const& __cordl_internal_get_subscription() const;

constexpr ::System::IDisposable*& __cordl_internal_get_subscription() ;

constexpr bool const& __cordl_internal_get_useCachedCurrent() const;

constexpr bool& __cordl_internal_get_useCachedCurrent() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_current(T  value) ;

constexpr void __cordl_internal_set_error(::System::Exception*  value) ;

constexpr void __cordl_internal_set_queuedResult(::System::Collections::Generic::Queue_1<T>*  value) ;

constexpr void __cordl_internal_set_source(::System::IObservable_1<T>*  value) ;

constexpr void __cordl_internal_set_subscribeCompleted(bool  value) ;

constexpr void __cordl_internal_set_subscription(::System::IDisposable*  value) ;

constexpr void __cordl_internal_set_useCachedCurrent(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::IObservable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_OnCanceledDelegate() ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_T_() noexcept;

/// @brief Convert to "::System::IObserver_1<T>"
constexpr ::System::IObserver_1<T>* i___System__IObserver_1_T_() noexcept;

static inline void setStaticF_OnCanceledDelegate(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable(ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable(ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20882};

/// @brief Field source, offset: 0x38, size: 0x8, def value: None
 ::System::IObservable_1<T>*  ___source;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field useCachedCurrent, offset: 0x48, size: 0x1, def value: None
 bool  ___useCachedCurrent;

/// @brief Field current, offset: 0x50, size: 0x8, def value: None
 T  ___current;

/// @brief Field subscribeCompleted, offset: 0x58, size: 0x1, def value: None
 bool  ___subscribeCompleted;

/// @brief Field queuedResult, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<T>*  ___queuedResult;

/// @brief Field error, offset: 0x68, size: 0x8, def value: None
 ::System::Exception*  ___error;

/// @brief Field subscription, offset: 0x70, size: 0x8, def value: None
 ::System::IDisposable*  ___subscription;

/// @brief Field cancellationTokenRegistration, offset: 0x78, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq

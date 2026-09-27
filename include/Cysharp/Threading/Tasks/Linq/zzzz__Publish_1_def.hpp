#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Publish_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TriggerEvent_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Publish_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Publish_1_ConnectDisposable;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Publish_1__Publish;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IConnectableUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class ITriggerHandler_1;
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
struct Publish_1__ConsumeEnumerator_d__8;
}
namespace System::Threading {
class CancellationTokenSource;
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
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Publish_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Publish_1_ConnectDisposable;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Publish_1__Publish;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Publish_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Publish_1__Publish);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Publish_1, "Cysharp.Threading.Tasks.Linq", "Publish`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable, "Cysharp.Threading.Tasks.Linq", "Publish`1/ConnectDisposable");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Publish_1__Publish, "Cysharp.Threading.Tasks.Linq", "Publish`1/_Publish");
// Dependencies Cysharp.Threading.Tasks.TriggerEvent`1<T>, System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Publish`1<TSource>
class CORDL_TYPE Publish_1 : public ::System::Object {
public:
// Declarations
using ConnectDisposable = ::Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable<TSource>;

using _Publish = ::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>;

using _ConsumeEnumerator_d__8 = ::GlobalNamespace::Publish_1__ConsumeEnumerator_d__8<TSource>;

/// @brief Field cancellationTokenSource, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationTokenSource, put=__cordl_internal_set_cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  cancellationTokenSource;

/// @brief Field connectedDisposable, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectedDisposable, put=__cordl_internal_set_connectedDisposable)) ::System::IDisposable*  connectedDisposable;

/// @brief Field enumerator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator, put=__cordl_internal_set_enumerator)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  enumerator;

/// @brief Field isCompleted, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCompleted, put=__cordl_internal_set_isCompleted)) bool  isCompleted;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Field trigger, offset 0x20, size 0x20 
 __declspec(property(get=__cordl_internal_get_trigger, put=__cordl_internal_set_trigger)) ::Cysharp::Threading::Tasks::TriggerEvent_1<TSource>  trigger;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1<TSource>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept;

/// @brief Method Connect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::IDisposable* Connect() ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Publish`1::<ConsumeEnumerator>d__8<TSource>))]
/// @brief Method ConsumeEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid ConsumeEnumerator() ;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source) ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_cancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_cancellationTokenSource() ;

constexpr ::System::IDisposable* const& __cordl_internal_get_connectedDisposable() const;

constexpr ::System::IDisposable*& __cordl_internal_get_connectedDisposable() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& __cordl_internal_get_enumerator() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& __cordl_internal_get_enumerator() ;

constexpr bool const& __cordl_internal_get_isCompleted() const;

constexpr bool& __cordl_internal_get_isCompleted() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr ::Cysharp::Threading::Tasks::TriggerEvent_1<TSource> const& __cordl_internal_get_trigger() const;

constexpr ::Cysharp::Threading::Tasks::TriggerEvent_1<TSource>& __cordl_internal_get_trigger() ;

constexpr void __cordl_internal_set_cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set_connectedDisposable(::System::IDisposable*  value) ;

constexpr void __cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value) ;

constexpr void __cordl_internal_set_isCompleted(bool  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

constexpr void __cordl_internal_set_trigger(::Cysharp::Threading::Tasks::TriggerEvent_1<TSource>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1<TSource>* i___Cysharp__Threading__Tasks__IConnectableUniTaskAsyncEnumerable_1_TSource_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Publish_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Publish_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Publish_1(Publish_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Publish_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Publish_1(Publish_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20709};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field cancellationTokenSource, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___cancellationTokenSource;

/// @brief Field trigger, offset: 0x20, size: 0x20, def value: None
 ::Cysharp::Threading::Tasks::TriggerEvent_1<TSource>  ___trigger;

/// @brief Field enumerator, offset: 0x40, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  ___enumerator;

/// @brief Field connectedDisposable, offset: 0x48, size: 0x8, def value: None
 ::System::IDisposable*  ___connectedDisposable;

/// @brief Field isCompleted, offset: 0x50, size: 0x1, def value: None
 bool  ___isCompleted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Publish`1/_Publish<TSource>
class CORDL_TYPE Publish_1__Publish : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
/// @brief Field CancelDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CancelDelegate, put=setStaticF_CancelDelegate)) ::System::Action_1<::System::Object*>*  CancelDelegate;

 __declspec(property(get=get_Current, put=set_Current)) TSource  Current;

 __declspec(property(get=Cysharp_Threading_Tasks_ITriggerHandler_TSource__get_Next, put=Cysharp_Threading_Tasks_ITriggerHandler_TSource__set_Next)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*  Cysharp_Threading_Tasks_ITriggerHandler_TSource__Next;

 __declspec(property(get=Cysharp_Threading_Tasks_ITriggerHandler_TSource__get_Prev, put=Cysharp_Threading_Tasks_ITriggerHandler_TSource__set_Prev)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*  Cysharp_Threading_Tasks_ITriggerHandler_TSource__Prev;

/// @brief Field <Current>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) TSource  _Current_k__BackingField;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<TSource>.Next>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_TSource__Next_k__BackingField, put=__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_TSource__Next_k__BackingField)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*  _Cysharp_Threading_Tasks_ITriggerHandler_TSource__Next_k__BackingField;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<TSource>.Prev>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_TSource__Prev_k__BackingField, put=__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_TSource__Prev_k__BackingField)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*  _Cysharp_Threading_Tasks_ITriggerHandler_TSource__Prev_k__BackingField;

/// @brief Field cancellationToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field cancellationTokenRegistration, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration, put=__cordl_internal_set_cancellationTokenRegistration)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration;

/// @brief Field isDisposed, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDisposed, put=__cordl_internal_set_isDisposed)) bool  isDisposed;

/// @brief Field parent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>*  parent;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*() noexcept;

/// [CompilerGenerated]
/// @brief Method Cysharp.Threading.Tasks.ITriggerHandler<TSource>.get_Next, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>* Cysharp_Threading_Tasks_ITriggerHandler_TSource__get_Next() ;

/// [CompilerGenerated]
/// @brief Method Cysharp.Threading.Tasks.ITriggerHandler<TSource>.get_Prev, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>* Cysharp_Threading_Tasks_ITriggerHandler_TSource__get_Prev() ;

/// [CompilerGenerated]
/// @brief Method Cysharp.Threading.Tasks.ITriggerHandler<TSource>.set_Next, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_ITriggerHandler_TSource__set_Next(::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*  value) ;

/// [CompilerGenerated]
/// @brief Method Cysharp.Threading.Tasks.ITriggerHandler<TSource>.set_Prev, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_ITriggerHandler_TSource__set_Prev(::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*  value) ;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>* New_ctor(::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>*  parent, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnCanceled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnCanceled(::System::Object*  state) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted() ;

/// @brief Method OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnError(::System::Exception*  ex) ;

/// @brief Method OnNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnNext(TSource  value) ;

constexpr TSource const& __cordl_internal_get__Current_k__BackingField() const;

constexpr TSource& __cordl_internal_get__Current_k__BackingField() ;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>* const& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_TSource__Next_k__BackingField() const;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_TSource__Next_k__BackingField() ;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>* const& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_TSource__Prev_k__BackingField() const;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_TSource__Prev_k__BackingField() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration() ;

constexpr bool const& __cordl_internal_get_isDisposed() const;

constexpr bool& __cordl_internal_get_isDisposed() ;

constexpr ::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>* const& __cordl_internal_get_parent() const;

constexpr ::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>*& __cordl_internal_get_parent() ;

constexpr void __cordl_internal_set__Current_k__BackingField(TSource  value) ;

constexpr void __cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_TSource__Next_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*  value) ;

constexpr void __cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_TSource__Prev_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_isDisposed(bool  value) ;

constexpr void __cordl_internal_set_parent(::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>*  parent, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_CancelDelegate() ;

/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TSource get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>* i___Cysharp__Threading__Tasks__ITriggerHandler_1_TSource_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TSource_() noexcept;

static inline void setStaticF_CancelDelegate(::System::Action_1<::System::Object*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(TSource  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Publish_1__Publish() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Publish_1__Publish", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Publish_1__Publish(Publish_1__Publish && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Publish_1__Publish", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Publish_1__Publish(Publish_1__Publish const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20707};

/// @brief Field parent, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>*  ___parent;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field cancellationTokenRegistration, offset: 0x48, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration;

/// @brief Field isDisposed, offset: 0x60, size: 0x1, def value: None
 bool  ___isDisposed;

/// [CompilerGenerated]
/// @brief Field <Current>k__BackingField, offset: 0x68, size: 0x8, def value: None
 TSource  ____Current_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<TSource>.Prev>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*  ____Cysharp_Threading_Tasks_ITriggerHandler_TSource__Prev_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<TSource>.Next>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*  ____Cysharp_Threading_Tasks_ITriggerHandler_TSource__Next_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Publish`1/ConnectDisposable<TSource>
class CORDL_TYPE Publish_1_ConnectDisposable : public ::System::Object {
public:
// Declarations
/// @brief Field cancellationTokenSource, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationTokenSource, put=__cordl_internal_set_cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  cancellationTokenSource;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable<TSource>* New_ctor(::System::Threading::CancellationTokenSource*  cancellationTokenSource) ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_cancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_cancellationTokenSource() ;

constexpr void __cordl_internal_set_cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::CancellationTokenSource*  cancellationTokenSource) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Publish_1_ConnectDisposable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Publish_1_ConnectDisposable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Publish_1_ConnectDisposable(Publish_1_ConnectDisposable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Publish_1_ConnectDisposable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Publish_1_ConnectDisposable(Publish_1_ConnectDisposable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20706};

/// @brief Field cancellationTokenSource, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___cancellationTokenSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq

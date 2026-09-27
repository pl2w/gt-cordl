#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Subscribe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Subscribe)
namespace Cysharp::Threading::Tasks::Linq {
class Subscribe___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
template<typename TSource>
struct Subscribe__SubscribeAwaitCore_d__6_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Subscribe__SubscribeAwaitCore_d__7_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Subscribe__SubscribeCore_d__2_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Subscribe__SubscribeCore_d__3_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Subscribe__SubscribeCore_d__4_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Subscribe__SubscribeCore_d__5_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T>
class IObserver_1;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
class Subscribe;
}
namespace Cysharp::Threading::Tasks::Linq {
class Subscribe___c;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::Subscribe*);
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::Subscribe___c*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::Subscribe*, "Cysharp.Threading.Tasks.Linq", "Subscribe");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::Subscribe___c*, "Cysharp.Threading.Tasks.Linq", "Subscribe/<>c");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Subscribe
class CORDL_TYPE Subscribe : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::Linq::Subscribe___c;

template<typename TSource>
using _SubscribeAwaitCore_d__6_1 = ::GlobalNamespace::Subscribe__SubscribeAwaitCore_d__6_1<TSource>;

template<typename TSource>
using _SubscribeAwaitCore_d__7_1 = ::GlobalNamespace::Subscribe__SubscribeAwaitCore_d__7_1<TSource>;

template<typename TSource>
using _SubscribeCore_d__2_1 = ::GlobalNamespace::Subscribe__SubscribeCore_d__2_1<TSource>;

template<typename TSource>
using _SubscribeCore_d__3_1 = ::GlobalNamespace::Subscribe__SubscribeCore_d__3_1<TSource>;

template<typename TSource>
using _SubscribeCore_d__4_1 = ::GlobalNamespace::Subscribe__SubscribeCore_d__4_1<TSource>;

template<typename TSource>
using _SubscribeCore_d__5_1 = ::GlobalNamespace::Subscribe__SubscribeCore_d__5_1<TSource>;

/// @brief Field NopCompleted, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NopCompleted, put=setStaticF_NopCompleted)) ::System::Action*  NopCompleted;

/// @brief Field NopError, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NopError, put=setStaticF_NopError)) ::System::Action_1<::System::Exception*>*  NopError;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Subscribe::<SubscribeAwaitCore>d__6`1<TSource>))]
/// @brief Method SubscribeAwaitCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTaskVoid SubscribeAwaitCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Action*  onCompleted, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Subscribe::<SubscribeAwaitCore>d__7`1<TSource>))]
/// @brief Method SubscribeAwaitCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTaskVoid SubscribeAwaitCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Action*  onCompleted, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Subscribe::<SubscribeCore>d__5`1<TSource>))]
/// @brief Method SubscribeCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTaskVoid SubscribeCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::IObserver_1<TSource>*  observer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Subscribe::<SubscribeCore>d__2`1<TSource>))]
/// @brief Method SubscribeCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTaskVoid SubscribeCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Action*  onCompleted, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Subscribe::<SubscribeCore>d__3`1<TSource>))]
/// @brief Method SubscribeCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTaskVoid SubscribeCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTaskVoid>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Action*  onCompleted, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Subscribe::<SubscribeCore>d__4`1<TSource>))]
/// @brief Method SubscribeCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTaskVoid SubscribeCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Action*  onCompleted, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action* getStaticF_NopCompleted() ;

static inline ::System::Action_1<::System::Exception*>* getStaticF_NopError() ;

static inline void setStaticF_NopCompleted(::System::Action*  value) ;

static inline void setStaticF_NopError(::System::Action_1<::System::Exception*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Subscribe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Subscribe", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Subscribe(Subscribe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Subscribe", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Subscribe(Subscribe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20780};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::Subscribe) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Subscribe/<>c
class CORDL_TYPE Subscribe___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::Linq::Subscribe___c*  __9;

static inline ::Cysharp::Threading::Tasks::Linq::Subscribe___c* New_ctor() ;

/// @brief Method <.cctor>b__8_0, addr 0xae1fa4c, size 0x4, virtual false, abstract: false, final false
inline void __cctor_b__8_0(::System::Exception*  _) ;

/// @brief Method <.cctor>b__8_1, addr 0xae1fa50, size 0x4, virtual false, abstract: false, final false
inline void __cctor_b__8_1() ;

/// @brief Method .ctor, addr 0xae1fa44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::Linq::Subscribe___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::Linq::Subscribe___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Subscribe___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Subscribe___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Subscribe___c(Subscribe___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Subscribe___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Subscribe___c(Subscribe___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20773};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::Subscribe___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq

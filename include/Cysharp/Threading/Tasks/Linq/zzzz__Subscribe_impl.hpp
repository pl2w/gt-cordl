#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Subscribe.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Subscribe_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Subscribe__SubscribeAwaitCore_d__6_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Subscribe__SubscribeAwaitCore_d__7_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Subscribe__SubscribeCore_d__2_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Subscribe__SubscribeCore_d__3_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Subscribe__SubscribeCore_d__4_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Subscribe__SubscribeCore_d__5_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Subscribe_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
inline void Cysharp::Threading::Tasks::Linq::Subscribe::setStaticF_NopError(::System::Action_1<::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Exception*>*, "NopError", ::Cysharp::Threading::Tasks::Linq::Subscribe*>(std::forward<::System::Action_1<::System::Exception*>*>(value));
}
inline ::System::Action_1<::System::Exception*>* Cysharp::Threading::Tasks::Linq::Subscribe::getStaticF_NopError()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Exception*>*, "NopError", ::Cysharp::Threading::Tasks::Linq::Subscribe*>();
}
inline void Cysharp::Threading::Tasks::Linq::Subscribe::setStaticF_NopCompleted(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "NopCompleted", ::Cysharp::Threading::Tasks::Linq::Subscribe*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Cysharp::Threading::Tasks::Linq::Subscribe::getStaticF_NopCompleted()  {
return ::cordl_internals::getStaticField<::System::Action*, "NopCompleted", ::Cysharp::Threading::Tasks::Linq::Subscribe*>();
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::Linq::Subscribe::SubscribeCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Action*  onCompleted, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Subscribe*>(),
                    {"SubscribeCore", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_1<TSource>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, source, onNext, onError, onCompleted, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::Linq::Subscribe::SubscribeCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTaskVoid>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Action*  onCompleted, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Subscribe*>(),
                    {"SubscribeCore", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTaskVoid>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, source, onNext, onError, onCompleted, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::Linq::Subscribe::SubscribeCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Action*  onCompleted, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Subscribe*>(),
                    {"SubscribeCore", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, source, onNext, onError, onCompleted, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::Linq::Subscribe::SubscribeCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::IObserver_1<TSource>*  observer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Subscribe*>(),
                    {"SubscribeCore", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::IObserver_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, source, observer, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::Linq::Subscribe::SubscribeAwaitCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Action*  onCompleted, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Subscribe*>(),
                    {"SubscribeAwaitCore", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, source, onNext, onError, onCompleted, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::Linq::Subscribe::SubscribeAwaitCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Action*  onCompleted, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Subscribe*>(),
                    {"SubscribeAwaitCore", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, source, onNext, onError, onCompleted, cancellationToken);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Linq::Subscribe::Subscribe()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::Subscribe___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Linq::Subscribe___c::*)()>(&::Cysharp::Threading::Tasks::Linq::Subscribe___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae1fa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Subscribe___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::Subscribe___c.__cctor_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Linq::Subscribe___c::*)(::System::Exception*)>(&::Cysharp::Threading::Tasks::Linq::Subscribe___c::__cctor_b__8_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae1fa4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Subscribe___c*>(),
                        {"<.cctor>b__8_0", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::Subscribe___c.__cctor_b__8_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Linq::Subscribe___c::*)()>(&::Cysharp::Threading::Tasks::Linq::Subscribe___c::__cctor_b__8_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae1fa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Subscribe___c*>(),
                        {"<.cctor>b__8_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Linq::Subscribe___c::setStaticF___9(::Cysharp::Threading::Tasks::Linq::Subscribe___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::Subscribe___c*, "<>9", ::Cysharp::Threading::Tasks::Linq::Subscribe___c*>(std::forward<::Cysharp::Threading::Tasks::Linq::Subscribe___c*>(value));
}
inline ::Cysharp::Threading::Tasks::Linq::Subscribe___c* Cysharp::Threading::Tasks::Linq::Subscribe___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::Subscribe___c*, "<>9", ::Cysharp::Threading::Tasks::Linq::Subscribe___c*>();
}
inline void Cysharp::Threading::Tasks::Linq::Subscribe___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Subscribe___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Linq::Subscribe___c::__cctor_b__8_0(::System::Exception*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Subscribe___c*>(),
                        {"<.cctor>b__8_0", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void Cysharp::Threading::Tasks::Linq::Subscribe___c::__cctor_b__8_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Subscribe___c*>(),
                        {"<.cctor>b__8_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Linq::Subscribe___c* Cysharp::Threading::Tasks::Linq::Subscribe___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Subscribe___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Linq::Subscribe___c::Subscribe___c()   {
}

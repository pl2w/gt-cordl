#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CancellationTokenExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__CancellationTokenExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__CancellationTokenAwaitable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__CancellationTokenExtensions__ToCancellationTokenCore_d__6_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.ToCancellationToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (*)(::Cysharp::Threading::Tasks::UniTask)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::ToCancellationToken)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xade40c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"ToCancellationToken", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.ToCancellationToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (*)(::Cysharp::Threading::Tasks::UniTask, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::ToCancellationToken)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xade423c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"ToCancellationToken", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.ToCancellationTokenCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (*)(::Cysharp::Threading::Tasks::UniTask, ::System::Threading::CancellationTokenSource*)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::ToCancellationTokenCore)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xade4188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"ToCancellationTokenCore", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>(), ::i2c::type_of<::System::Threading::CancellationTokenSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask,::System::Threading::CancellationTokenRegistration> (*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xade43e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.Callback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::Callback)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xade4818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"Callback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.WaitUntilCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::CancellationTokenAwaitable (*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::WaitUntilCanceled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xade489c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"WaitUntilCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.RegisterWithoutCaptureExecutionContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationTokenRegistration (*)(::System::Threading::CancellationToken, ::System::Action*)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::RegisterWithoutCaptureExecutionContext)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xade48b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"RegisterWithoutCaptureExecutionContext", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.RegisterWithoutCaptureExecutionContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationTokenRegistration (*)(::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::RegisterWithoutCaptureExecutionContext)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xade467c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"RegisterWithoutCaptureExecutionContext", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.AddTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationTokenRegistration (*)(::System::IDisposable*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::AddTo)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xade4a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"AddTo", {}, {::i2c::type_of<::System::IDisposable*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.DisposeCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::DisposeCallback)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xade4ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"DisposeCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::CancellationTokenExtensions::setStaticF_cancellationTokenCallback(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "cancellationTokenCallback", ::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::CancellationTokenExtensions::getStaticF_cancellationTokenCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "cancellationTokenCallback", ::Cysharp::Threading::Tasks::CancellationTokenExtensions*>();
}
inline void Cysharp::Threading::Tasks::CancellationTokenExtensions::setStaticF_disposeCallback(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "disposeCallback", ::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::CancellationTokenExtensions::getStaticF_disposeCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "disposeCallback", ::Cysharp::Threading::Tasks::CancellationTokenExtensions*>();
}
inline ::System::Threading::CancellationToken Cysharp::Threading::Tasks::CancellationTokenExtensions::ToCancellationToken(::Cysharp::Threading::Tasks::UniTask  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"ToCancellationToken", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(nullptr, ___internal_method, task);
}
inline ::System::Threading::CancellationToken Cysharp::Threading::Tasks::CancellationTokenExtensions::ToCancellationToken(::Cysharp::Threading::Tasks::UniTask  task, ::System::Threading::CancellationToken  linkToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"ToCancellationToken", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(nullptr, ___internal_method, task, linkToken);
}
template<typename T>
inline ::System::Threading::CancellationToken Cysharp::Threading::Tasks::CancellationTokenExtensions::ToCancellationToken(::Cysharp::Threading::Tasks::UniTask_1<T>  task)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                    {"ToCancellationToken", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(nullptr, ___internal_method, task);
}
template<typename T>
inline ::System::Threading::CancellationToken Cysharp::Threading::Tasks::CancellationTokenExtensions::ToCancellationToken(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Threading::CancellationToken  linkToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                    {"ToCancellationToken", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask_1<T>>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(nullptr, ___internal_method, task, linkToken);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::CancellationTokenExtensions::ToCancellationTokenCore(::Cysharp::Threading::Tasks::UniTask  task, ::System::Threading::CancellationTokenSource*  cts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"ToCancellationTokenCore", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>(), ::i2c::type_of<::System::Threading::CancellationTokenSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, task, cts);
}
inline ::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask,::System::Threading::CancellationTokenRegistration> Cysharp::Threading::Tasks::CancellationTokenExtensions::ToUniTask(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask,::System::Threading::CancellationTokenRegistration>>(nullptr, ___internal_method, cancellationToken);
}
inline void Cysharp::Threading::Tasks::CancellationTokenExtensions::Callback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"Callback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline ::Cysharp::Threading::Tasks::CancellationTokenAwaitable Cysharp::Threading::Tasks::CancellationTokenExtensions::WaitUntilCanceled(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"WaitUntilCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::CancellationTokenAwaitable>(nullptr, ___internal_method, cancellationToken);
}
inline ::System::Threading::CancellationTokenRegistration Cysharp::Threading::Tasks::CancellationTokenExtensions::RegisterWithoutCaptureExecutionContext(::System::Threading::CancellationToken  cancellationToken, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"RegisterWithoutCaptureExecutionContext", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenRegistration>(nullptr, ___internal_method, cancellationToken, callback);
}
inline ::System::Threading::CancellationTokenRegistration Cysharp::Threading::Tasks::CancellationTokenExtensions::RegisterWithoutCaptureExecutionContext(::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"RegisterWithoutCaptureExecutionContext", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenRegistration>(nullptr, ___internal_method, cancellationToken, callback, state);
}
inline ::System::Threading::CancellationTokenRegistration Cysharp::Threading::Tasks::CancellationTokenExtensions::AddTo(::System::IDisposable*  disposable, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"AddTo", {}, {::i2c::type_of<::System::IDisposable*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenRegistration>(nullptr, ___internal_method, disposable, cancellationToken);
}
inline void Cysharp::Threading::Tasks::CancellationTokenExtensions::DisposeCallback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"DisposeCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::CancellationTokenExtensions::CancellationTokenExtensions()   {
}

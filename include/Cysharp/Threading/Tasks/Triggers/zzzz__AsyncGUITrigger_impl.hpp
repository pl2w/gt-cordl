#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncGUITrigger.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_impl.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncGUITrigger_def.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__IAsyncOnGUIHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::OnGUI)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xae3b9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger.GetOnGUIAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::GetOnGUIAsyncHandler)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xae3ba20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger*>(),
                        {"GetOnGUIAsyncHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger.GetOnGUIAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::GetOnGUIAsyncHandler)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae3ba9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger*>(),
                        {"GetOnGUIAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger.OnGUIAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::OnGUIAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xae3bb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger*>(),
                        {"OnGUIAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger.OnGUIAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::OnGUIAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xae3bc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger*>(),
                        {"OnGUIAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xae3bcf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler* Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::GetOnGUIAsyncHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger*>(),
                        {"GetOnGUIAsyncHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler* Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::GetOnGUIAsyncHandler(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger*>(),
                        {"GetOnGUIAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler*>(this, ___internal_method, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::OnGUIAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger*>(),
                        {"OnGUIAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::OnGUIAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger*>(),
                        {"OnGUIAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, cancellationToken);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger* Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncGUITrigger::AsyncGUITrigger()   {
}

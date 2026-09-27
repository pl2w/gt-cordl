#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncApplicationFocusTrigger.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_impl.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncApplicationFocusTrigger_def.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__IAsyncOnApplicationFocusHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::*)(bool)>(&::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae37408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger.GetOnApplicationFocusAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::GetOnApplicationFocusAsyncHandler)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xae37460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger*>(),
                        {"GetOnApplicationFocusAsyncHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger.GetOnApplicationFocusAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::GetOnApplicationFocusAsyncHandler)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae374dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger*>(),
                        {"GetOnApplicationFocusAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger.OnApplicationFocusAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<bool> (::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::OnApplicationFocusAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xae37560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger*>(),
                        {"OnApplicationFocusAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger.OnApplicationFocusAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<bool> (::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::OnApplicationFocusAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xae37648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger*>(),
                        {"OnApplicationFocusAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xae37738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::OnApplicationFocus(bool  hasFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFocus);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler* Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::GetOnApplicationFocusAsyncHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger*>(),
                        {"GetOnApplicationFocusAsyncHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler* Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::GetOnApplicationFocusAsyncHandler(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger*>(),
                        {"GetOnApplicationFocusAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler*>(this, ___internal_method, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::OnApplicationFocusAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger*>(),
                        {"OnApplicationFocusAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::OnApplicationFocusAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger*>(),
                        {"OnApplicationFocusAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method, cancellationToken);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger* Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger::AsyncApplicationFocusTrigger()   {
}

#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncResetTrigger.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_impl.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncResetTrigger_def.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__IAsyncResetHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::Reset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xae41578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger.GetResetAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::GetResetAsyncHandler)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xae415f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger*>(),
                        {"GetResetAsyncHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger.GetResetAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::GetResetAsyncHandler)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae4166c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger*>(),
                        {"GetResetAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger.ResetAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::ResetAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xae416f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger*>(),
                        {"ResetAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger.ResetAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::ResetAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xae417d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger*>(),
                        {"ResetAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xae418c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler* Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::GetResetAsyncHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger*>(),
                        {"GetResetAsyncHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler* Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::GetResetAsyncHandler(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger*>(),
                        {"GetResetAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler*>(this, ___internal_method, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::ResetAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger*>(),
                        {"ResetAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::ResetAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger*>(),
                        {"ResetAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, cancellationToken);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger* Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncResetTrigger::AsyncResetTrigger()   {
}

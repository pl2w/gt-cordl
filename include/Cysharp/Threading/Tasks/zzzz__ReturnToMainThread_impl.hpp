#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ReturnToMainThread.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ReturnToMainThread_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ReturnToMainThread_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::ReturnToMainThread._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::ReturnToMainThread::*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::ReturnToMainThread::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xadee9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReturnToMainThread>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::ReturnToMainThread.DisposeAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReturnToMainThread_Awaiter (::Cysharp::Threading::Tasks::ReturnToMainThread::*)()>(&::Cysharp::Threading::Tasks::ReturnToMainThread::DisposeAsync)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xadf81b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReturnToMainThread>(),
                        {"DisposeAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::ReturnToMainThread::_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReturnToMainThread>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, playerLoopTiming, cancellationToken);
}
inline ::GlobalNamespace::ReturnToMainThread_Awaiter Cysharp::Threading::Tasks::ReturnToMainThread::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReturnToMainThread>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReturnToMainThread_Awaiter>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "playerLoopTiming", ty: "::Cysharp::Threading::Tasks::PlayerLoopTiming", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Cysharp::Threading::Tasks::ReturnToMainThread::ReturnToMainThread(::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken) noexcept  {
this->playerLoopTiming = playerLoopTiming;
this->cancellationToken = cancellationToken;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::ReturnToMainThread::ReturnToMainThread()   {
}

#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToMainThreadAwaitable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToMainThreadAwaitable_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable::*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xadee940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter (::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable::*)()>(&::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xadf7f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable::_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, playerLoopTiming, cancellationToken);
}
inline ::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "playerLoopTiming", ty: "::Cysharp::Threading::Tasks::PlayerLoopTiming", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable::SwitchToMainThreadAwaitable(::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken) noexcept  {
this->playerLoopTiming = playerLoopTiming;
this->cancellationToken = cancellationToken;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable::SwitchToMainThreadAwaitable()   {
}

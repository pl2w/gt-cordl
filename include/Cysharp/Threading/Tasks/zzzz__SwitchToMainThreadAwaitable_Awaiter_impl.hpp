#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable_Awaiter.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToMainThreadAwaitable_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xadf7fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::*)()>(&::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xadf7fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::*)()>(&::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::GetResult)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xadf8088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::*)(::System::Action*)>(&::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xadf80e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::*)(::System::Action*)>(&::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xadf8148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, playerLoopTiming, cancellationToken);
}
inline bool GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "playerLoopTiming", ty: "::Cysharp::Threading::Tasks::PlayerLoopTiming", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::SwitchToMainThreadAwaitable_Awaiter(::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken) noexcept  {
this->playerLoopTiming = playerLoopTiming;
this->cancellationToken = cancellationToken;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter::SwitchToMainThreadAwaitable_Awaiter()   {
}

#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ReturnToMainThread_Awaiter.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ReturnToMainThread_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ReturnToMainThread_Awaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReturnToMainThread_Awaiter::*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::GlobalNamespace::ReturnToMainThread_Awaiter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xadf81e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToMainThread_Awaiter>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReturnToMainThread_Awaiter.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReturnToMainThread_Awaiter (::GlobalNamespace::ReturnToMainThread_Awaiter::*)()>(&::GlobalNamespace::ReturnToMainThread_Awaiter::GetAwaiter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xadf81f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToMainThread_Awaiter>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReturnToMainThread_Awaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ReturnToMainThread_Awaiter::*)()>(&::GlobalNamespace::ReturnToMainThread_Awaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xadf8204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToMainThread_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReturnToMainThread_Awaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReturnToMainThread_Awaiter::*)()>(&::GlobalNamespace::ReturnToMainThread_Awaiter::GetResult)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xadf82ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToMainThread_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReturnToMainThread_Awaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReturnToMainThread_Awaiter::*)(::System::Action*)>(&::GlobalNamespace::ReturnToMainThread_Awaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xadf8304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToMainThread_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReturnToMainThread_Awaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReturnToMainThread_Awaiter::*)(::System::Action*)>(&::GlobalNamespace::ReturnToMainThread_Awaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xadf836c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToMainThread_Awaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ReturnToMainThread_Awaiter::_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToMainThread_Awaiter>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, timing, cancellationToken);
}
inline ::GlobalNamespace::ReturnToMainThread_Awaiter GlobalNamespace::ReturnToMainThread_Awaiter::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToMainThread_Awaiter>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReturnToMainThread_Awaiter>(*this, ___internal_method);
}
inline bool GlobalNamespace::ReturnToMainThread_Awaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToMainThread_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::ReturnToMainThread_Awaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToMainThread_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ReturnToMainThread_Awaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToMainThread_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void GlobalNamespace::ReturnToMainThread_Awaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToMainThread_Awaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  GlobalNamespace::ReturnToMainThread_Awaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* GlobalNamespace::ReturnToMainThread_Awaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  GlobalNamespace::ReturnToMainThread_Awaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::ReturnToMainThread_Awaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "timing", ty: "::Cysharp::Threading::Tasks::PlayerLoopTiming", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ReturnToMainThread_Awaiter::ReturnToMainThread_Awaiter(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) noexcept  {
this->timing = timing;
this->cancellationToken = cancellationToken;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReturnToMainThread_Awaiter::ReturnToMainThread_Awaiter()   {
}

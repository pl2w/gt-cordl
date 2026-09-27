#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/YieldAwaitable_YieldAwaiter.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::YieldAwaitable_YieldAwaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::YieldAwaitable_YieldAwaiter::*)()>(&::GlobalNamespace::YieldAwaitable_YieldAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa1e7ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YieldAwaitable_YieldAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::YieldAwaitable_YieldAwaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::YieldAwaitable_YieldAwaiter::*)(::System::Action*)>(&::GlobalNamespace::YieldAwaitable_YieldAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa1e7f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YieldAwaitable_YieldAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::YieldAwaitable_YieldAwaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::YieldAwaitable_YieldAwaiter::*)(::System::Action*)>(&::GlobalNamespace::YieldAwaitable_YieldAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa1e81f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YieldAwaitable_YieldAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::YieldAwaitable_YieldAwaiter.QueueContinuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*, bool)>(&::GlobalNamespace::YieldAwaitable_YieldAwaiter::QueueContinuation)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xa1e7f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YieldAwaitable_YieldAwaiter>(),
                        {"QueueContinuation", {}, {::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::YieldAwaitable_YieldAwaiter.RunAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::GlobalNamespace::YieldAwaitable_YieldAwaiter::RunAction)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa1e8250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YieldAwaitable_YieldAwaiter>(),
                        {"RunAction", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::YieldAwaitable_YieldAwaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::YieldAwaitable_YieldAwaiter::*)()>(&::GlobalNamespace::YieldAwaitable_YieldAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa1e82bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YieldAwaitable_YieldAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::YieldAwaitable_YieldAwaiter::setStaticF_s_waitCallbackRunAction(::System::Threading::WaitCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "s_waitCallbackRunAction", ::GlobalNamespace::YieldAwaitable_YieldAwaiter>(std::forward<::System::Threading::WaitCallback*>(value));
}
inline ::System::Threading::WaitCallback* GlobalNamespace::YieldAwaitable_YieldAwaiter::getStaticF_s_waitCallbackRunAction()  {
return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "s_waitCallbackRunAction", ::GlobalNamespace::YieldAwaitable_YieldAwaiter>();
}
inline void GlobalNamespace::YieldAwaitable_YieldAwaiter::setStaticF_s_sendOrPostCallbackRunAction(::System::Threading::SendOrPostCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback*, "s_sendOrPostCallbackRunAction", ::GlobalNamespace::YieldAwaitable_YieldAwaiter>(std::forward<::System::Threading::SendOrPostCallback*>(value));
}
inline ::System::Threading::SendOrPostCallback* GlobalNamespace::YieldAwaitable_YieldAwaiter::getStaticF_s_sendOrPostCallbackRunAction()  {
return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback*, "s_sendOrPostCallbackRunAction", ::GlobalNamespace::YieldAwaitable_YieldAwaiter>();
}
inline bool GlobalNamespace::YieldAwaitable_YieldAwaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YieldAwaitable_YieldAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::YieldAwaitable_YieldAwaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YieldAwaitable_YieldAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void GlobalNamespace::YieldAwaitable_YieldAwaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YieldAwaitable_YieldAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void GlobalNamespace::YieldAwaitable_YieldAwaiter::QueueContinuation(::System::Action*  continuation, bool  flowContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YieldAwaitable_YieldAwaiter>(),
                        {"QueueContinuation", {}, {::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, continuation, flowContext);
}
inline void GlobalNamespace::YieldAwaitable_YieldAwaiter::RunAction(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YieldAwaitable_YieldAwaiter>(),
                        {"RunAction", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline void GlobalNamespace::YieldAwaitable_YieldAwaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YieldAwaitable_YieldAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  GlobalNamespace::YieldAwaitable_YieldAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* GlobalNamespace::YieldAwaitable_YieldAwaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  GlobalNamespace::YieldAwaitable_YieldAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::YieldAwaitable_YieldAwaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::YieldAwaitable_YieldAwaiter::YieldAwaitable_YieldAwaiter()   {
}

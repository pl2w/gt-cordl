#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToThreadPoolAwaitable_Awaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::*)()>(&::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadf6428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::*)()>(&::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::GetResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xadf6430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::*)(::System::Action*)>(&::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xadf83d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::*)(::System::Action*)>(&::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xadf8438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter.Callback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::Callback)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xadf849c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter>(),
                        {"Callback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::setStaticF_switchToCallback(::System::Threading::WaitCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "switchToCallback", ::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter>(std::forward<::System::Threading::WaitCallback*>(value));
}
inline ::System::Threading::WaitCallback* GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::getStaticF_switchToCallback()  {
return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "switchToCallback", ::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter>();
}
inline bool GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::Callback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter>(),
                        {"Callback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter::SwitchToThreadPoolAwaitable_Awaiter()   {
}

#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ReturnToSynchronizationContext_Awaiter.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ReturnToSynchronizationContext_Awaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ReturnToSynchronizationContext_Awaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReturnToSynchronizationContext_Awaiter::*)(::System::Threading::SynchronizationContext*, bool, ::System::Threading::CancellationToken)>(&::GlobalNamespace::ReturnToSynchronizationContext_Awaiter::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xadf8d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReturnToSynchronizationContext_Awaiter.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter (::GlobalNamespace::ReturnToSynchronizationContext_Awaiter::*)()>(&::GlobalNamespace::ReturnToSynchronizationContext_Awaiter::GetAwaiter)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xadf8d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReturnToSynchronizationContext_Awaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ReturnToSynchronizationContext_Awaiter::*)()>(&::GlobalNamespace::ReturnToSynchronizationContext_Awaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xadf8d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReturnToSynchronizationContext_Awaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReturnToSynchronizationContext_Awaiter::*)()>(&::GlobalNamespace::ReturnToSynchronizationContext_Awaiter::GetResult)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xadf8d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReturnToSynchronizationContext_Awaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReturnToSynchronizationContext_Awaiter::*)(::System::Action*)>(&::GlobalNamespace::ReturnToSynchronizationContext_Awaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xadf8de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReturnToSynchronizationContext_Awaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReturnToSynchronizationContext_Awaiter::*)(::System::Action*)>(&::GlobalNamespace::ReturnToSynchronizationContext_Awaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xadf8e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReturnToSynchronizationContext_Awaiter.Callback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::GlobalNamespace::ReturnToSynchronizationContext_Awaiter::Callback)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xadf8ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(),
                        {"Callback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ReturnToSynchronizationContext_Awaiter::setStaticF_switchToCallback(::System::Threading::SendOrPostCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback*, "switchToCallback", ::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(std::forward<::System::Threading::SendOrPostCallback*>(value));
}
inline ::System::Threading::SendOrPostCallback* GlobalNamespace::ReturnToSynchronizationContext_Awaiter::getStaticF_switchToCallback()  {
return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback*, "switchToCallback", ::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>();
}
inline void GlobalNamespace::ReturnToSynchronizationContext_Awaiter::_ctor(::System::Threading::SynchronizationContext*  synchronizationContext, bool  dontPostWhenSameContext, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, synchronizationContext, dontPostWhenSameContext, cancellationToken);
}
inline ::GlobalNamespace::ReturnToSynchronizationContext_Awaiter GlobalNamespace::ReturnToSynchronizationContext_Awaiter::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(*this, ___internal_method);
}
inline bool GlobalNamespace::ReturnToSynchronizationContext_Awaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::ReturnToSynchronizationContext_Awaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ReturnToSynchronizationContext_Awaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void GlobalNamespace::ReturnToSynchronizationContext_Awaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void GlobalNamespace::ReturnToSynchronizationContext_Awaiter::Callback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(),
                        {"Callback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  GlobalNamespace::ReturnToSynchronizationContext_Awaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* GlobalNamespace::ReturnToSynchronizationContext_Awaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  GlobalNamespace::ReturnToSynchronizationContext_Awaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::ReturnToSynchronizationContext_Awaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "synchronizationContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dontPostWhenSameContext", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ReturnToSynchronizationContext_Awaiter::ReturnToSynchronizationContext_Awaiter(::System::Threading::SynchronizationContext*  synchronizationContext, bool  dontPostWhenSameContext, ::System::Threading::CancellationToken  cancellationToken) noexcept  {
this->synchronizationContext = synchronizationContext;
this->dontPostWhenSameContext = dontPostWhenSameContext;
this->cancellationToken = cancellationToken;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReturnToSynchronizationContext_Awaiter::ReturnToSynchronizationContext_Awaiter()   {
}

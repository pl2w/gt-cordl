#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/SwitchToSynchronizationContextAwaitable.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToSynchronizationContextAwaitable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToSynchronizationContextAwaitable_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable::*)(::System::Threading::SynchronizationContext*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xadeeaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SwitchToSynchronizationContextAwaitable_Awaiter (::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable::*)()>(&::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xadf89d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable::_ctor(::System::Threading::SynchronizationContext*  synchronizationContext, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, synchronizationContext, cancellationToken);
}
inline ::GlobalNamespace::SwitchToSynchronizationContextAwaitable_Awaiter Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SwitchToSynchronizationContextAwaitable_Awaiter>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "synchronizationContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable::SwitchToSynchronizationContextAwaitable(::System::Threading::SynchronizationContext*  synchronizationContext, ::System::Threading::CancellationToken  cancellationToken) noexcept  {
this->synchronizationContext = synchronizationContext;
this->cancellationToken = cancellationToken;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable::SwitchToSynchronizationContextAwaitable()   {
}

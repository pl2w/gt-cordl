#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ReturnToSynchronizationContext.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ReturnToSynchronizationContext_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ReturnToSynchronizationContext_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::ReturnToSynchronizationContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::ReturnToSynchronizationContext::*)(::System::Threading::SynchronizationContext*, bool, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::ReturnToSynchronizationContext::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xadeeb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReturnToSynchronizationContext>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::ReturnToSynchronizationContext.DisposeAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter (::Cysharp::Threading::Tasks::ReturnToSynchronizationContext::*)()>(&::Cysharp::Threading::Tasks::ReturnToSynchronizationContext::DisposeAsync)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xadf8cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReturnToSynchronizationContext>(),
                        {"DisposeAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::ReturnToSynchronizationContext::_ctor(::System::Threading::SynchronizationContext*  syncContext, bool  dontPostWhenSameContext, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReturnToSynchronizationContext>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, syncContext, dontPostWhenSameContext, cancellationToken);
}
inline ::GlobalNamespace::ReturnToSynchronizationContext_Awaiter Cysharp::Threading::Tasks::ReturnToSynchronizationContext::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReturnToSynchronizationContext>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReturnToSynchronizationContext_Awaiter>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "syncContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dontPostWhenSameContext", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Cysharp::Threading::Tasks::ReturnToSynchronizationContext::ReturnToSynchronizationContext(::System::Threading::SynchronizationContext*  syncContext, bool  dontPostWhenSameContext, ::System::Threading::CancellationToken  cancellationToken) noexcept  {
this->syncContext = syncContext;
this->dontPostWhenSameContext = dontPostWhenSameContext;
this->cancellationToken = cancellationToken;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::ReturnToSynchronizationContext::ReturnToSynchronizationContext()   {
}

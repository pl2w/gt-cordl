#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskSynchronizationContext_Callback.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskSynchronizationContext_Callback_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UniTaskSynchronizationContext_Callback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UniTaskSynchronizationContext_Callback::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(&::GlobalNamespace::UniTaskSynchronizationContext_Callback::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xae29998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTaskSynchronizationContext_Callback>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UniTaskSynchronizationContext_Callback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UniTaskSynchronizationContext_Callback::*)()>(&::GlobalNamespace::UniTaskSynchronizationContext_Callback::Invoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xae299c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTaskSynchronizationContext_Callback>(),
                        {"Invoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UniTaskSynchronizationContext_Callback::_ctor(::System::Threading::SendOrPostCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTaskSynchronizationContext_Callback>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback, state);
}
inline void GlobalNamespace::UniTaskSynchronizationContext_Callback::Invoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTaskSynchronizationContext_Callback>(),
                        {"Invoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "callback", ty: "::System::Threading::SendOrPostCallback*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "state", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UniTaskSynchronizationContext_Callback::UniTaskSynchronizationContext_Callback(::System::Threading::SendOrPostCallback*  callback, ::System::Object*  state) noexcept  {
this->callback = callback;
this->state = state;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UniTaskSynchronizationContext_Callback::UniTaskSynchronizationContext_Callback()   {
}

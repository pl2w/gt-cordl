#pragma once
// IWYU pragma private; include "UnityEngine/UnitySynchronizationContext_WorkRequest.hpp"
#include "UnityEngine/zzzz__UnitySynchronizationContext_WorkRequest_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnitySynchronizationContext_WorkRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnitySynchronizationContext_WorkRequest::*)(::System::Threading::SendOrPostCallback*, ::System::Object*, ::System::Threading::ManualResetEvent*)>(&::GlobalNamespace::UnitySynchronizationContext_WorkRequest::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5e9ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnitySynchronizationContext_WorkRequest>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::ManualResetEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnitySynchronizationContext_WorkRequest.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnitySynchronizationContext_WorkRequest::*)()>(&::GlobalNamespace::UnitySynchronizationContext_WorkRequest::Invoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb5ea428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnitySynchronizationContext_WorkRequest>(),
                        {"Invoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UnitySynchronizationContext_WorkRequest::_ctor(::System::Threading::SendOrPostCallback*  callback, ::System::Object*  state, ::System::Threading::ManualResetEvent*  waitHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnitySynchronizationContext_WorkRequest>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::ManualResetEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback, state, waitHandle);
}
inline void GlobalNamespace::UnitySynchronizationContext_WorkRequest::Invoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnitySynchronizationContext_WorkRequest>(),
                        {"Invoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_DelagateCallback", ty: "::System::Threading::SendOrPostCallback*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DelagateState", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_WaitHandle", ty: "::System::Threading::ManualResetEvent*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UnitySynchronizationContext_WorkRequest::UnitySynchronizationContext_WorkRequest(::System::Threading::SendOrPostCallback*  m_DelagateCallback, ::System::Object*  m_DelagateState, ::System::Threading::ManualResetEvent*  m_WaitHandle) noexcept  {
this->m_DelagateCallback = m_DelagateCallback;
this->m_DelagateState = m_DelagateState;
this->m_WaitHandle = m_WaitHandle;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnitySynchronizationContext_WorkRequest::UnitySynchronizationContext_WorkRequest()   {
}

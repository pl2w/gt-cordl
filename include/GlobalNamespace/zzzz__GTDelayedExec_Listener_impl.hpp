#pragma once
// IWYU pragma private; include "GlobalNamespace/GTDelayedExec_Listener.hpp"
#include "GlobalNamespace/zzzz__GTDelayedExec_Listener_def.hpp"
#include "GlobalNamespace/zzzz__IDelayedExecListener_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTDelayedExec_Listener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDelayedExec_Listener::*)(::GlobalNamespace::IDelayedExecListener*, int32_t)>(&::GlobalNamespace::GTDelayedExec_Listener::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ac6ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec_Listener>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::IDelayedExecListener*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GTDelayedExec_Listener::_ctor(::GlobalNamespace::IDelayedExecListener*  listener, int32_t  contextId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec_Listener>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::IDelayedExecListener*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, listener, contextId);
}
// Ctor Parameters [CppParam { name: "listener", ty: "::GlobalNamespace::IDelayedExecListener*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "contextId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTDelayedExec_Listener::GTDelayedExec_Listener(::GlobalNamespace::IDelayedExecListener*  listener, int32_t  contextId) noexcept  {
this->listener = listener;
this->contextId = contextId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTDelayedExec_Listener::GTDelayedExec_Listener()   {
}

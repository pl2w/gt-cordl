#pragma once
// IWYU pragma private; include "GlobalNamespace/IDelayedExecListener.hpp"
#include "GlobalNamespace/zzzz__IDelayedExecListener_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IDelayedExecListener.OnDelayedAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IDelayedExecListener::*)(int32_t)>(&::GlobalNamespace::IDelayedExecListener::OnDelayedAction)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IDelayedExecListener*>(),
                    {::i2c::class_of<::GlobalNamespace::IDelayedExecListener*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IDelayedExecListener::OnDelayedAction(int32_t  contextId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IDelayedExecListener*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contextId);
}

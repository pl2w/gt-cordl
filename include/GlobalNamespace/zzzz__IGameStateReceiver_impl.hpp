#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameStateReceiver.hpp"
#include "GlobalNamespace/zzzz__IGameStateReceiver_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IGameStateReceiver.GameStateReceiverOnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameStateReceiver::*)(int64_t, int64_t)>(&::GlobalNamespace::IGameStateReceiver::GameStateReceiverOnStateChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameStateReceiver*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameStateReceiver*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IGameStateReceiver::GameStateReceiverOnStateChanged(int64_t  oldState, int64_t  newState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameStateReceiver*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldState, newState);
}

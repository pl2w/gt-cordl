#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameStateProvider.hpp"
#include "GlobalNamespace/zzzz__IGameStateProvider_def.hpp"
#include "GlobalNamespace/zzzz__IGameStateReceiver_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IGameStateProvider.GameStateReceiverRegister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameStateProvider::*)(::GlobalNamespace::IGameStateReceiver*)>(&::GlobalNamespace::IGameStateProvider::GameStateReceiverRegister)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameStateProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameStateProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameStateProvider.GameStateReceiverUnregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameStateProvider::*)(::GlobalNamespace::IGameStateReceiver*)>(&::GlobalNamespace::IGameStateProvider::GameStateReceiverUnregister)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameStateProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameStateProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IGameStateProvider::GameStateReceiverRegister(::GlobalNamespace::IGameStateReceiver*  receiver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameStateProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
inline void GlobalNamespace::IGameStateProvider::GameStateReceiverUnregister(::GlobalNamespace::IGameStateReceiver*  receiver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameStateProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}

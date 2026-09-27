#pragma once
// IWYU pragma private; include "Fusion/ICallbacksExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__ICallbacksExtensions_def.hpp"
#include "Fusion/zzzz__SimulationInput_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
//  Writing Method size for method: ::Fusion::ICallbacksExtensions.InvokeOnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Simulation_ICallbacks*, ::Fusion::SimulationInput*)>(&::Fusion::ICallbacksExtensions::InvokeOnInput)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x60018f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ICallbacksExtensions*>(),
                        {"InvokeOnInput", {}, {::i2c::type_of<::Fusion::Simulation_ICallbacks*>(), ::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ICallbacksExtensions.InvokeOnInputMissing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Simulation_ICallbacks*, ::Fusion::SimulationInput*)>(&::Fusion::ICallbacksExtensions::InvokeOnInputMissing)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6001998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ICallbacksExtensions*>(),
                        {"InvokeOnInputMissing", {}, {::i2c::type_of<::Fusion::Simulation_ICallbacks*>(), ::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::ICallbacksExtensions::InvokeOnInput(::Fusion::Simulation_ICallbacks*  callbacks, ::Fusion::SimulationInput*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ICallbacksExtensions*>(),
                        {"InvokeOnInput", {}, {::i2c::type_of<::Fusion::Simulation_ICallbacks*>(), ::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callbacks, input);
}
inline void Fusion::ICallbacksExtensions::InvokeOnInputMissing(::Fusion::Simulation_ICallbacks*  callbacks, ::Fusion::SimulationInput*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ICallbacksExtensions*>(),
                        {"InvokeOnInputMissing", {}, {::i2c::type_of<::Fusion::Simulation_ICallbacks*>(), ::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callbacks, input);
}
// Ctor Parameters []
constexpr ::Fusion::ICallbacksExtensions::ICallbacksExtensions()   {
}

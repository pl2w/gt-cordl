#pragma once
// IWYU pragma private; include "Fusion/SimulationRenderSequencer.hpp"
#include "Fusion/zzzz__SimulationRenderSequencer_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationRenderSequencer.ConsumeRenderUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationRenderSequencer::*)(::Fusion::NetworkRunner*)>(&::Fusion::SimulationRenderSequencer::ConsumeRenderUpdate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60066e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationRenderSequencer>(),
                        {"ConsumeRenderUpdate", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationRenderSequencer.ConsumeRenderUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationRenderSequencer::*)(::Fusion::Simulation*)>(&::Fusion::SimulationRenderSequencer::ConsumeRenderUpdate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6006720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationRenderSequencer>(),
                        {"ConsumeRenderUpdate", {}, {::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::SimulationRenderSequencer::ConsumeRenderUpdate(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationRenderSequencer>(),
                        {"ConsumeRenderUpdate", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, runner);
}
inline bool Fusion::SimulationRenderSequencer::ConsumeRenderUpdate(::Fusion::Simulation*  simulation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationRenderSequencer>(),
                        {"ConsumeRenderUpdate", {}, {::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, simulation);
}
// Ctor Parameters [CppParam { name: "_sequence", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationRenderSequencer::SimulationRenderSequencer(uint64_t  _sequence) noexcept  {
this->_sequence = _sequence;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationRenderSequencer::SimulationRenderSequencer()   {
}

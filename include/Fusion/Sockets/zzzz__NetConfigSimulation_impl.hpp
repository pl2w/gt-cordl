#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConfigSimulation.hpp"
#include "Fusion/Sockets/zzzz__NetConfigSimulationOscillator_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConfigSimulation_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetConfigSimulation.get_Defaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConfigSimulation (*)()>(&::Fusion::Sockets::NetConfigSimulation::get_Defaults)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6029ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConfigSimulation>(),
                        {"get_Defaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::Sockets::NetConfigSimulation Fusion::Sockets::NetConfigSimulation::get_Defaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConfigSimulation>(),
                        {"get_Defaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConfigSimulation>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "LossNotifySequences", ty: "int16_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LossNotifySequencesLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DelayOscillator", ty: "::Fusion::Sockets::NetConfigSimulationOscillator", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LossOscillator", ty: "::Fusion::Sockets::NetConfigSimulationOscillator", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DuplicateChance", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetConfigSimulation::NetConfigSimulation(int16_t*  LossNotifySequences, int32_t  LossNotifySequencesLength, ::Fusion::Sockets::NetConfigSimulationOscillator  DelayOscillator, ::Fusion::Sockets::NetConfigSimulationOscillator  LossOscillator, double_t  DuplicateChance) noexcept  {
this->LossNotifySequences = LossNotifySequences;
this->LossNotifySequencesLength = LossNotifySequencesLength;
this->DelayOscillator = DelayOscillator;
this->LossOscillator = LossOscillator;
this->DuplicateChance = DuplicateChance;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetConfigSimulation::NetConfigSimulation()   {
}

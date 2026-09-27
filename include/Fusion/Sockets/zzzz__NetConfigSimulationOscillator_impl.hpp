#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConfigSimulationOscillator.hpp"
#include "Fusion/Sockets/zzzz__NetConfigSimulationOscillator_WaveShape_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConfigSimulationOscillator_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfigSimulationOscillator_WaveShape_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetConfigSimulationOscillator.GetCurveValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Sockets::NetConfigSimulationOscillator::*)(::System::Random*, double_t)>(&::Fusion::Sockets::NetConfigSimulationOscillator::GetCurveValue)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6029f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConfigSimulationOscillator>(),
                        {"GetCurveValue", {}, {::i2c::type_of<::System::Random*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline double_t Fusion::Sockets::NetConfigSimulationOscillator::GetCurveValue(::System::Random*  rng, double_t  elapsedSecs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConfigSimulationOscillator>(),
                        {"GetCurveValue", {}, {::i2c::type_of<::System::Random*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, rng, elapsedSecs);
}
// Ctor Parameters [CppParam { name: "Shape", ty: "::GlobalNamespace::NetConfigSimulationOscillator_WaveShape", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Min", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Max", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Period", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Threshold", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Additional", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetConfigSimulationOscillator::NetConfigSimulationOscillator(::GlobalNamespace::NetConfigSimulationOscillator_WaveShape  Shape, double_t  Min, double_t  Max, double_t  Period, double_t  Threshold, double_t  Additional) noexcept  {
this->Shape = Shape;
this->Min = Min;
this->Max = Max;
this->Period = Period;
this->Threshold = Threshold;
this->Additional = Additional;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetConfigSimulationOscillator::NetConfigSimulationOscillator()   {
}

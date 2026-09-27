#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineOrbitalTransposer_Heading.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalTransposer_Heading_HeadingDefinition_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalTransposer_Heading_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalTransposer_Heading_HeadingDefinition_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineOrbitalTransposer_Heading._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CinemachineOrbitalTransposer_Heading::*)(::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition, int32_t, float_t)>(&::GlobalNamespace::CinemachineOrbitalTransposer_Heading::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaed66a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineOrbitalTransposer_Heading>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CinemachineOrbitalTransposer_Heading::_ctor(::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition  def, int32_t  filterStrength, float_t  bias)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineOrbitalTransposer_Heading>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, def, filterStrength, bias);
}
// Ctor Parameters [CppParam { name: "m_Definition", ty: "::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_VelocityFilterStrength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Bias", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineOrbitalTransposer_Heading::CinemachineOrbitalTransposer_Heading(::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition  m_Definition, int32_t  m_VelocityFilterStrength, float_t  m_Bias) noexcept  {
this->m_Definition = m_Definition;
this->m_VelocityFilterStrength = m_VelocityFilterStrength;
this->m_Bias = m_Bias;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineOrbitalTransposer_Heading::CinemachineOrbitalTransposer_Heading()   {
}

#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFreeLook_Orbit.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLook_Orbit_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineFreeLook_Orbit._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CinemachineFreeLook_Orbit::*)(float_t, float_t)>(&::GlobalNamespace::CinemachineFreeLook_Orbit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaed239c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineFreeLook_Orbit>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CinemachineFreeLook_Orbit::_ctor(float_t  h, float_t  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineFreeLook_Orbit>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, h, r);
}
// Ctor Parameters [CppParam { name: "m_Height", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Radius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineFreeLook_Orbit::CinemachineFreeLook_Orbit(float_t  m_Height, float_t  m_Radius) noexcept  {
this->m_Height = m_Height;
this->m_Radius = m_Radius;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineFreeLook_Orbit::CinemachineFreeLook_Orbit()   {
}

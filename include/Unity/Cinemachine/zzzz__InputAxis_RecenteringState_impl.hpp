#pragma once
// IWYU pragma private; include "Unity/Cinemachine/InputAxis_RecenteringState.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_RecenteringState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputAxis_RecenteringState.get_CurrentTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::InputAxis_RecenteringState::get_CurrentTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaeb7fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputAxis_RecenteringState>(),
                        {"get_CurrentTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::InputAxis_RecenteringState::get_CurrentTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputAxis_RecenteringState>(),
                        {"get_CurrentTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_RecenteringVelocity", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ForceRecenter", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LastValueChangeTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LastValue", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputAxis_RecenteringState::InputAxis_RecenteringState(float_t  m_RecenteringVelocity, bool  m_ForceRecenter, float_t  m_LastValueChangeTime, float_t  m_LastValue) noexcept  {
this->m_RecenteringVelocity = m_RecenteringVelocity;
this->m_ForceRecenter = m_ForceRecenter;
this->m_LastValueChangeTime = m_LastValueChangeTime;
this->m_LastValue = m_LastValue;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputAxis_RecenteringState::InputAxis_RecenteringState()   {
}

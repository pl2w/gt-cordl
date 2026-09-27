#pragma once
// IWYU pragma private; include "Unity/Cinemachine/AxisBase.hpp"
#include "Unity/Cinemachine/zzzz__AxisBase_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::AxisBase.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::AxisBase::*)()>(&::Unity::Cinemachine::AxisBase::Validate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaed3520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisBase>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::AxisBase::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisBase>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MinValue", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MaxValue", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Wrap", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::AxisBase::AxisBase(float_t  m_Value, float_t  m_MinValue, float_t  m_MaxValue, bool  m_Wrap) noexcept  {
this->m_Value = m_Value;
this->m_MinValue = m_MinValue;
this->m_MaxValue = m_MaxValue;
this->m_Wrap = m_Wrap;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::AxisBase::AxisBase()   {
}

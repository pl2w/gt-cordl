#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandFilterParameterBlock.hpp"
#include "Oculus/Interaction/Input/zzzz__OneEuroFilterPropertyBlock_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFilterParameterBlock_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::HandFilterParameterBlock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandFilterParameterBlock::*)()>(&::Oculus::Interaction::Input::HandFilterParameterBlock::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa513a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandFilterParameterBlock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock& Oculus::Interaction::Input::HandFilterParameterBlock::__cordl_internal_get_wristPositionParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wristPositionParameters;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock const& Oculus::Interaction::Input::HandFilterParameterBlock::__cordl_internal_get_wristPositionParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wristPositionParameters;
}
constexpr void Oculus::Interaction::Input::HandFilterParameterBlock::__cordl_internal_set_wristPositionParameters(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wristPositionParameters = value;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock& Oculus::Interaction::Input::HandFilterParameterBlock::__cordl_internal_get_wristRotationParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wristRotationParameters;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock const& Oculus::Interaction::Input::HandFilterParameterBlock::__cordl_internal_get_wristRotationParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wristRotationParameters;
}
constexpr void Oculus::Interaction::Input::HandFilterParameterBlock::__cordl_internal_set_wristRotationParameters(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wristRotationParameters = value;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock& Oculus::Interaction::Input::HandFilterParameterBlock::__cordl_internal_get_fingerRotationParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerRotationParameters;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock const& Oculus::Interaction::Input::HandFilterParameterBlock::__cordl_internal_get_fingerRotationParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerRotationParameters;
}
constexpr void Oculus::Interaction::Input::HandFilterParameterBlock::__cordl_internal_set_fingerRotationParameters(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerRotationParameters = value;
}
constexpr float_t& Oculus::Interaction::Input::HandFilterParameterBlock::__cordl_internal_get_frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frequency;
}
constexpr float_t const& Oculus::Interaction::Input::HandFilterParameterBlock::__cordl_internal_get_frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frequency;
}
constexpr void Oculus::Interaction::Input::HandFilterParameterBlock::__cordl_internal_set_frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frequency = value;
}
inline void Oculus::Interaction::Input::HandFilterParameterBlock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandFilterParameterBlock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandFilterParameterBlock* Oculus::Interaction::Input::HandFilterParameterBlock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::HandFilterParameterBlock*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandFilterParameterBlock::HandFilterParameterBlock()   {
}

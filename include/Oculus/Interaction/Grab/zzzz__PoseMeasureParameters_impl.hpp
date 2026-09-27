#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/PoseMeasureParameters.hpp"
#include "Oculus/Interaction/Grab/zzzz__PoseMeasureParameters_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Grab::PoseMeasureParameters.get_PositionRotationWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Grab::PoseMeasureParameters::*)()>(&::Oculus::Interaction::Grab::PoseMeasureParameters::get_PositionRotationWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e6ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::PoseMeasureParameters>(),
                        {"get_PositionRotationWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::PoseMeasureParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::PoseMeasureParameters::*)(float_t)>(&::Oculus::Interaction::Grab::PoseMeasureParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e6ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::PoseMeasureParameters>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::PoseMeasureParameters.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::PoseMeasureParameters (*)(::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, float_t)>(&::Oculus::Interaction::Grab::PoseMeasureParameters::Lerp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4e6a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::PoseMeasureParameters>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Grab::PoseMeasureParameters::setStaticF_DEFAULT(::Oculus::Interaction::Grab::PoseMeasureParameters  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Grab::PoseMeasureParameters, "DEFAULT", ::Oculus::Interaction::Grab::PoseMeasureParameters>(std::forward<::Oculus::Interaction::Grab::PoseMeasureParameters>(value));
}
inline ::Oculus::Interaction::Grab::PoseMeasureParameters Oculus::Interaction::Grab::PoseMeasureParameters::getStaticF_DEFAULT()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Grab::PoseMeasureParameters, "DEFAULT", ::Oculus::Interaction::Grab::PoseMeasureParameters>();
}
inline float_t Oculus::Interaction::Grab::PoseMeasureParameters::get_PositionRotationWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::PoseMeasureParameters>(),
                        {"get_PositionRotationWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Oculus::Interaction::Grab::PoseMeasureParameters::_ctor(float_t  positionRotationWeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::PoseMeasureParameters>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, positionRotationWeight);
}
inline ::Oculus::Interaction::Grab::PoseMeasureParameters Oculus::Interaction::Grab::PoseMeasureParameters::Lerp(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  from, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  to, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::PoseMeasureParameters>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::PoseMeasureParameters>(nullptr, ___internal_method, from, to, t);
}
// Ctor Parameters [CppParam { name: "_positionRotationWeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Grab::PoseMeasureParameters::PoseMeasureParameters(float_t  _positionRotationWeight) noexcept  {
this->_positionRotationWeight = _positionRotationWeight;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grab::PoseMeasureParameters::PoseMeasureParameters()   {
}

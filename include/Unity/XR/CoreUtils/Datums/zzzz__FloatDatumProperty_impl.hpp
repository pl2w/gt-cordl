#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/FloatDatumProperty.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__FloatDatumProperty_def.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__FloatDatum_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::FloatDatumProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Datums::FloatDatumProperty::*)(float_t)>(&::Unity::XR::CoreUtils::Datums::FloatDatumProperty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb3fd134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::FloatDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::FloatDatumProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Datums::FloatDatumProperty::*)(::Unity::XR::CoreUtils::Datums::FloatDatum*)>(&::Unity::XR::CoreUtils::Datums::FloatDatumProperty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb3fd18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::FloatDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Datums::FloatDatum*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::Datums::FloatDatumProperty::_ctor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::FloatDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::XR::CoreUtils::Datums::FloatDatumProperty::_ctor(::Unity::XR::CoreUtils::Datums::FloatDatum*  datum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::FloatDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Datums::FloatDatum*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, datum);
}
inline ::Unity::XR::CoreUtils::Datums::FloatDatumProperty* Unity::XR::CoreUtils::Datums::FloatDatumProperty::New_ctor(float_t  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Datums::FloatDatumProperty*>(value));
}
inline ::Unity::XR::CoreUtils::Datums::FloatDatumProperty* Unity::XR::CoreUtils::Datums::FloatDatumProperty::New_ctor(::Unity::XR::CoreUtils::Datums::FloatDatum*  datum)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Datums::FloatDatumProperty*>(datum));
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Datums::FloatDatumProperty::FloatDatumProperty()   {
}

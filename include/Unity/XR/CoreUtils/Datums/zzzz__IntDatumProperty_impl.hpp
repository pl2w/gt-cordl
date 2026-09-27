#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/IntDatumProperty.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__IntDatumProperty_def.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__IntDatum_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::IntDatumProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Datums::IntDatumProperty::*)(int32_t)>(&::Unity::XR::CoreUtils::Datums::IntDatumProperty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb3fd33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::IntDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::IntDatumProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Datums::IntDatumProperty::*)(::Unity::XR::CoreUtils::Datums::IntDatum*)>(&::Unity::XR::CoreUtils::Datums::IntDatumProperty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb3fd394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::IntDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Datums::IntDatum*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::Datums::IntDatumProperty::_ctor(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::IntDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::XR::CoreUtils::Datums::IntDatumProperty::_ctor(::Unity::XR::CoreUtils::Datums::IntDatum*  datum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::IntDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Datums::IntDatum*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, datum);
}
inline ::Unity::XR::CoreUtils::Datums::IntDatumProperty* Unity::XR::CoreUtils::Datums::IntDatumProperty::New_ctor(int32_t  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Datums::IntDatumProperty*>(value));
}
inline ::Unity::XR::CoreUtils::Datums::IntDatumProperty* Unity::XR::CoreUtils::Datums::IntDatumProperty::New_ctor(::Unity::XR::CoreUtils::Datums::IntDatum*  datum)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Datums::IntDatumProperty*>(datum));
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Datums::IntDatumProperty::IntDatumProperty()   {
}

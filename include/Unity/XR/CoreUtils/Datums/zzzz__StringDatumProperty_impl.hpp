#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/StringDatumProperty.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__StringDatumProperty_def.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__StringDatum_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::StringDatumProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Datums::StringDatumProperty::*)(::StringW)>(&::Unity::XR::CoreUtils::Datums::StringDatumProperty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb3fd434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::StringDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::StringDatumProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Datums::StringDatumProperty::*)(::Unity::XR::CoreUtils::Datums::StringDatum*)>(&::Unity::XR::CoreUtils::Datums::StringDatumProperty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb3fd48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::StringDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Datums::StringDatum*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::Datums::StringDatumProperty::_ctor(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::StringDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::XR::CoreUtils::Datums::StringDatumProperty::_ctor(::Unity::XR::CoreUtils::Datums::StringDatum*  datum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::StringDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Datums::StringDatum*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, datum);
}
inline ::Unity::XR::CoreUtils::Datums::StringDatumProperty* Unity::XR::CoreUtils::Datums::StringDatumProperty::New_ctor(::StringW  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Datums::StringDatumProperty*>(value));
}
inline ::Unity::XR::CoreUtils::Datums::StringDatumProperty* Unity::XR::CoreUtils::Datums::StringDatumProperty::New_ctor(::Unity::XR::CoreUtils::Datums::StringDatum*  datum)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Datums::StringDatumProperty*>(datum));
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Datums::StringDatumProperty::StringDatumProperty()   {
}

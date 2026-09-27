#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/FloatDatum.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__FloatDatum_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::FloatDatum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Datums::FloatDatum::*)()>(&::Unity::XR::CoreUtils::Datums::FloatDatum::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb3fd0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::FloatDatum*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::Datums::FloatDatum::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::FloatDatum*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::Datums::FloatDatum* Unity::XR::CoreUtils::Datums::FloatDatum::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Datums::FloatDatum*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Datums::FloatDatum::FloatDatum()   {
}

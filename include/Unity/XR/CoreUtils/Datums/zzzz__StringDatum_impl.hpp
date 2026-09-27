#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/StringDatum.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__StringDatum_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::StringDatum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Datums::StringDatum::*)()>(&::Unity::XR::CoreUtils::Datums::StringDatum::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb3fd3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::StringDatum*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::Datums::StringDatum::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::StringDatum*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::Datums::StringDatum* Unity::XR::CoreUtils::Datums::StringDatum::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Datums::StringDatum*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Datums::StringDatum::StringDatum()   {
}

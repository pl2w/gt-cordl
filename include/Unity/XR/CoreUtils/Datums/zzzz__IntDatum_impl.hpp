#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/IntDatum.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__IntDatum_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::IntDatum.SetValueRounded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Datums::IntDatum::*)(float_t)>(&::Unity::XR::CoreUtils::Datums::IntDatum::SetValueRounded)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb3fd1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::IntDatum*>(),
                        {"SetValueRounded", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::IntDatum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Datums::IntDatum::*)()>(&::Unity::XR::CoreUtils::Datums::IntDatum::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb3fd2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::IntDatum*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::Datums::IntDatum::SetValueRounded(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::IntDatum*>(),
                        {"SetValueRounded", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::XR::CoreUtils::Datums::IntDatum::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::IntDatum*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::Datums::IntDatum* Unity::XR::CoreUtils::Datums::IntDatum::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Datums::IntDatum*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Datums::IntDatum::IntDatum()   {
}

#pragma once
// IWYU pragma private; include "POpusCodec/OpusLib.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "POpusCodec/zzzz__OpusLib_def.hpp"
//  Writing Method size for method: ::POpusCodec::OpusLib.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::POpusCodec::OpusLib::get_Version)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa742254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusLib*>(),
                        {"get_Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW POpusCodec::OpusLib::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusLib*>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::POpusCodec::OpusLib::OpusLib()   {
}

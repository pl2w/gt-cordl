#pragma once
// IWYU pragma private; include "Modio/API/AotTypeEnforcer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/API/zzzz__AotTypeEnforcer_def.hpp"
//  Writing Method size for method: ::Modio::API::AotTypeEnforcer.Hello
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::API::AotTypeEnforcer::Hello)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0xa064518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::AotTypeEnforcer*>(),
                        {"Hello", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::AotTypeEnforcer::Hello()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::AotTypeEnforcer*>(),
                        {"Hello", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Modio::API::AotTypeEnforcer::AotTypeEnforcer()   {
}

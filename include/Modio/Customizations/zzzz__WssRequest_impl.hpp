#pragma once
// IWYU pragma private; include "Modio/Customizations/WssRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Customizations/zzzz__WssRequest_def.hpp"
#include "Modio/Customizations/zzzz__WssMessage_def.hpp"
//  Writing Method size for method: ::Modio::Customizations::WssRequest.DeviceLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Customizations::WssMessage (*)()>(&::Modio::Customizations::WssRequest::DeviceLogin)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa05b260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssRequest*>(),
                        {"DeviceLogin", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Modio::Customizations::WssMessage Modio::Customizations::WssRequest::DeviceLogin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssRequest*>(),
                        {"DeviceLogin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Customizations::WssMessage>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Modio::Customizations::WssRequest::WssRequest()   {
}

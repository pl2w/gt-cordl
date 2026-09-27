#pragma once
// IWYU pragma private; include "Modio/Authentication/IPotentialModioEmailAuthService.hpp"
#include "Modio/Authentication/zzzz__IPotentialModioEmailAuthService_def.hpp"
//  Writing Method size for method: ::Modio::Authentication::IPotentialModioEmailAuthService.get_IsEmailPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Authentication::IPotentialModioEmailAuthService::*)()>(&::Modio::Authentication::IPotentialModioEmailAuthService::get_IsEmailPlatform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Authentication::IPotentialModioEmailAuthService*>(),
                    {::i2c::class_of<::Modio::Authentication::IPotentialModioEmailAuthService*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool Modio::Authentication::IPotentialModioEmailAuthService::get_IsEmailPlatform()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Authentication::IPotentialModioEmailAuthService*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}

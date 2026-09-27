#pragma once
// IWYU pragma private; include "Modio/Customizations/ISteamCredentialProvider.hpp"
#include "Modio/Customizations/zzzz__ISteamCredentialProvider_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::Modio::Customizations::ISteamCredentialProvider.RequestEncryptedAppTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::ISteamCredentialProvider::*)(::System::Action_2<bool,::StringW>*)>(&::Modio::Customizations::ISteamCredentialProvider::RequestEncryptedAppTicket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Customizations::ISteamCredentialProvider*>(),
                    {::i2c::class_of<::Modio::Customizations::ISteamCredentialProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Modio::Customizations::ISteamCredentialProvider::RequestEncryptedAppTicket(::System::Action_2<bool,::StringW>*  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Customizations::ISteamCredentialProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}

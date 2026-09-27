#pragma once
// IWYU pragma private; include "System/Net/ICredentialPolicy.hpp"
#include "System/Net/zzzz__ICredentialPolicy_def.hpp"
#include "System/Net/zzzz__IAuthenticationModule_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::ICredentialPolicy.ShouldSendCredential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ICredentialPolicy::*)(::System::Uri*, ::System::Net::WebRequest*, ::System::Net::NetworkCredential*, ::System::Net::IAuthenticationModule*)>(&::System::Net::ICredentialPolicy::ShouldSendCredential)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::ICredentialPolicy*>(),
                    {::i2c::class_of<::System::Net::ICredentialPolicy*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool System::Net::ICredentialPolicy::ShouldSendCredential(::System::Uri*  challengeUri, ::System::Net::WebRequest*  request, ::System::Net::NetworkCredential*  credential, ::System::Net::IAuthenticationModule*  authenticationModule)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::ICredentialPolicy*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, challengeUri, request, credential, authenticationModule);
}

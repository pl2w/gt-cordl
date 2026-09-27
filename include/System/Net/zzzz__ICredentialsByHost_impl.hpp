#pragma once
// IWYU pragma private; include "System/Net/ICredentialsByHost.hpp"
#include "System/Net/zzzz__ICredentialsByHost_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
//  Writing Method size for method: ::System::Net::ICredentialsByHost.GetCredential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkCredential* (::System::Net::ICredentialsByHost::*)(::StringW, int32_t, ::StringW)>(&::System::Net::ICredentialsByHost::GetCredential)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::ICredentialsByHost*>(),
                    {::i2c::class_of<::System::Net::ICredentialsByHost*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Net::NetworkCredential* System::Net::ICredentialsByHost::GetCredential(::StringW  host, int32_t  port, ::StringW  authenticationType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::ICredentialsByHost*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkCredential*>(this, ___internal_method, host, port, authenticationType);
}

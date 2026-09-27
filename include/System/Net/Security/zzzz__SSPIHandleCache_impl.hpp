#pragma once
// IWYU pragma private; include "System/Net/Security/SSPIHandleCache.hpp"
#include "System/Net/Security/zzzz__SafeCredentialReference_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Security/zzzz__SSPIHandleCache_def.hpp"
#include "System/Net/Security/zzzz__SafeFreeCredentials_def.hpp"
//  Writing Method size for method: ::System::Net::Security::SSPIHandleCache.CacheCredential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Security::SafeFreeCredentials*)>(&::System::Net::Security::SSPIHandleCache::CacheCredential)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xacf4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SSPIHandleCache*>(),
                        {"CacheCredential", {}, {::i2c::type_of<::System::Net::Security::SafeFreeCredentials*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::Security::SSPIHandleCache::setStaticF_s_cacheSlots(::ArrayW<::System::Net::Security::SafeCredentialReference*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Net::Security::SafeCredentialReference*>, "s_cacheSlots", ::System::Net::Security::SSPIHandleCache*>(std::forward<::ArrayW<::System::Net::Security::SafeCredentialReference*>>(value));
}
inline ::ArrayW<::System::Net::Security::SafeCredentialReference*> System::Net::Security::SSPIHandleCache::getStaticF_s_cacheSlots()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Net::Security::SafeCredentialReference*>, "s_cacheSlots", ::System::Net::Security::SSPIHandleCache*>();
}
inline void System::Net::Security::SSPIHandleCache::setStaticF_s_current(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_current", ::System::Net::Security::SSPIHandleCache*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::Security::SSPIHandleCache::getStaticF_s_current()  {
return ::cordl_internals::getStaticField<int32_t, "s_current", ::System::Net::Security::SSPIHandleCache*>();
}
inline void System::Net::Security::SSPIHandleCache::CacheCredential(::System::Net::Security::SafeFreeCredentials*  newHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SSPIHandleCache*>(),
                        {"CacheCredential", {}, {::i2c::type_of<::System::Net::Security::SafeFreeCredentials*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newHandle);
}
// Ctor Parameters []
constexpr ::System::Net::Security::SSPIHandleCache::SSPIHandleCache()   {
}

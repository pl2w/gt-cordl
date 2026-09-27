#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaAuthenticator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MetaAuthenticator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaAuthenticator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaAuthenticator::*)()>(&::GlobalNamespace::MetaAuthenticator::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5aafd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MetaAuthenticator::__cordl_internal_get_MaxAppEntitlementCheckAttempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxAppEntitlementCheckAttempts;
}
constexpr int32_t const& GlobalNamespace::MetaAuthenticator::__cordl_internal_get_MaxAppEntitlementCheckAttempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxAppEntitlementCheckAttempts;
}
constexpr void GlobalNamespace::MetaAuthenticator::__cordl_internal_set_MaxAppEntitlementCheckAttempts(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxAppEntitlementCheckAttempts = value;
}
constexpr int32_t& GlobalNamespace::MetaAuthenticator::__cordl_internal_get_MaxGetUserNonceAttempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxGetUserNonceAttempts;
}
constexpr int32_t const& GlobalNamespace::MetaAuthenticator::__cordl_internal_get_MaxGetUserNonceAttempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxGetUserNonceAttempts;
}
constexpr void GlobalNamespace::MetaAuthenticator::__cordl_internal_set_MaxGetUserNonceAttempts(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxGetUserNonceAttempts = value;
}
constexpr int32_t& GlobalNamespace::MetaAuthenticator::__cordl_internal_get_MaxGetDeviceAttestationTokenAttempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxGetDeviceAttestationTokenAttempts;
}
constexpr int32_t const& GlobalNamespace::MetaAuthenticator::__cordl_internal_get_MaxGetDeviceAttestationTokenAttempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxGetDeviceAttestationTokenAttempts;
}
constexpr void GlobalNamespace::MetaAuthenticator::__cordl_internal_set_MaxGetDeviceAttestationTokenAttempts(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxGetDeviceAttestationTokenAttempts = value;
}
inline void GlobalNamespace::MetaAuthenticator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaAuthenticator* GlobalNamespace::MetaAuthenticator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaAuthenticator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaAuthenticator::MetaAuthenticator()   {
}

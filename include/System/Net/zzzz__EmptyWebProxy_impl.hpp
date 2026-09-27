#pragma once
// IWYU pragma private; include "System/Net/EmptyWebProxy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__EmptyWebProxy_def.hpp"
#include "System/Net/zzzz__IAutoWebProxy_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__ProxyChain_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::EmptyWebProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::EmptyWebProxy::*)()>(&::System::Net::EmptyWebProxy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac77d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EmptyWebProxy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EmptyWebProxy.GetProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::EmptyWebProxy::*)(::System::Uri*)>(&::System::Net::EmptyWebProxy::GetProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac77d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EmptyWebProxy*>(),
                        {"GetProxy", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EmptyWebProxy.IsBypassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::EmptyWebProxy::*)(::System::Uri*)>(&::System::Net::EmptyWebProxy::IsBypassed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac77d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EmptyWebProxy*>(),
                        {"IsBypassed", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EmptyWebProxy.get_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ICredentials* (::System::Net::EmptyWebProxy::*)()>(&::System::Net::EmptyWebProxy::get_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac77d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EmptyWebProxy*>(),
                        {"get_Credentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EmptyWebProxy.set_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::EmptyWebProxy::*)(::System::Net::ICredentials*)>(&::System::Net::EmptyWebProxy::set_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac77d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EmptyWebProxy*>(),
                        {"set_Credentials", {}, {::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EmptyWebProxy.System_Net_IAutoWebProxy_GetProxies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ProxyChain* (::System::Net::EmptyWebProxy::*)(::System::Uri*)>(&::System::Net::EmptyWebProxy::System_Net_IAutoWebProxy_GetProxies)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xac77d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EmptyWebProxy*>(),
                        {"System.Net.IAutoWebProxy.GetProxies", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::ICredentials*& System::Net::EmptyWebProxy::__cordl_internal_get_m_credentials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_credentials;
}
constexpr ::System::Net::ICredentials* const& System::Net::EmptyWebProxy::__cordl_internal_get_m_credentials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_credentials;
}
constexpr void System::Net::EmptyWebProxy::__cordl_internal_set_m_credentials(::System::Net::ICredentials*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_credentials = value;
}
inline void System::Net::EmptyWebProxy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EmptyWebProxy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Uri* System::Net::EmptyWebProxy::GetProxy(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EmptyWebProxy*>(),
                        {"GetProxy", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method, uri);
}
inline bool System::Net::EmptyWebProxy::IsBypassed(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EmptyWebProxy*>(),
                        {"IsBypassed", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uri);
}
inline ::System::Net::ICredentials* System::Net::EmptyWebProxy::get_Credentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EmptyWebProxy*>(),
                        {"get_Credentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*>(this, ___internal_method);
}
inline void System::Net::EmptyWebProxy::set_Credentials(::System::Net::ICredentials*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EmptyWebProxy*>(),
                        {"set_Credentials", {}, {::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::ProxyChain* System::Net::EmptyWebProxy::System_Net_IAutoWebProxy_GetProxies(::System::Uri*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EmptyWebProxy*>(),
                        {"System.Net.IAutoWebProxy.GetProxies", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ProxyChain*>(this, ___internal_method, destination);
}
inline ::System::Net::EmptyWebProxy* System::Net::EmptyWebProxy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::EmptyWebProxy*>());
}
/// @brief Convert operator to "::System::Net::IAutoWebProxy"
constexpr  System::Net::EmptyWebProxy::operator ::System::Net::IAutoWebProxy*() noexcept {
return static_cast<::System::Net::IAutoWebProxy*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::IAutoWebProxy"
constexpr ::System::Net::IAutoWebProxy* System::Net::EmptyWebProxy::i___System__Net__IAutoWebProxy() noexcept {
return static_cast<::System::Net::IAutoWebProxy*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Net::IWebProxy"
constexpr  System::Net::EmptyWebProxy::operator ::System::Net::IWebProxy*() noexcept {
return static_cast<::System::Net::IWebProxy*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::IWebProxy"
constexpr ::System::Net::IWebProxy* System::Net::EmptyWebProxy::i___System__Net__IWebProxy() noexcept {
return static_cast<::System::Net::IWebProxy*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::EmptyWebProxy::EmptyWebProxy()   {
}

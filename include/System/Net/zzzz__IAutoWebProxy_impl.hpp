#pragma once
// IWYU pragma private; include "System/Net/IAutoWebProxy.hpp"
#include "System/Net/zzzz__IAutoWebProxy_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__ProxyChain_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::IAutoWebProxy.GetProxies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ProxyChain* (::System::Net::IAutoWebProxy::*)(::System::Uri*)>(&::System::Net::IAutoWebProxy::GetProxies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::IAutoWebProxy*>(),
                    {::i2c::class_of<::System::Net::IAutoWebProxy*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Net::ProxyChain* System::Net::IAutoWebProxy::GetProxies(::System::Uri*  destination)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::IAutoWebProxy*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ProxyChain*>(this, ___internal_method, destination);
}
/// @brief Convert operator to "::System::Net::IWebProxy"
constexpr  System::Net::IAutoWebProxy::operator ::System::Net::IWebProxy*() noexcept {
return static_cast<::System::Net::IWebProxy*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::IWebProxy"
constexpr ::System::Net::IWebProxy* System::Net::IAutoWebProxy::i___System__Net__IWebProxy() noexcept {
return static_cast<::System::Net::IWebProxy*>(static_cast<void*>(this));
}

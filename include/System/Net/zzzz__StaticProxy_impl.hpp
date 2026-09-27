#pragma once
// IWYU pragma private; include "System/Net/StaticProxy.hpp"
#include "System/Net/zzzz__ProxyChain_impl.hpp"
#include "System/Net/zzzz__StaticProxy_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::StaticProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::StaticProxy::*)(::System::Uri*, ::System::Uri*)>(&::System::Net::StaticProxy::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xac73aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::StaticProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::StaticProxy.GetNextProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::StaticProxy::*)(::by_ref<::System::Uri*>)>(&::System::Net::StaticProxy::GetNextProxy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xac73b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::StaticProxy*>(),
                    {::i2c::class_of<::System::Net::StaticProxy*>(), 9}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Net::StaticProxy::__cordl_internal_get_m_Proxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Proxy;
}
constexpr ::System::Uri* const& System::Net::StaticProxy::__cordl_internal_get_m_Proxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Proxy;
}
constexpr void System::Net::StaticProxy::__cordl_internal_set_m_Proxy(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Proxy = value;
}
inline void System::Net::StaticProxy::_ctor(::System::Uri*  destination, ::System::Uri*  proxy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::StaticProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, proxy);
}
inline bool System::Net::StaticProxy::GetNextProxy(::by_ref<::System::Uri*>  proxy)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::StaticProxy*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, proxy);
}
inline ::System::Net::StaticProxy* System::Net::StaticProxy::New_ctor(::System::Uri*  destination, ::System::Uri*  proxy)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::StaticProxy*>(destination, proxy));
}
// Ctor Parameters []
constexpr ::System::Net::StaticProxy::StaticProxy()   {
}

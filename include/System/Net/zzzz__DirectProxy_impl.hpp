#pragma once
// IWYU pragma private; include "System/Net/DirectProxy.hpp"
#include "System/Net/zzzz__ProxyChain_impl.hpp"
#include "System/Net/zzzz__DirectProxy_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::DirectProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DirectProxy::*)(::System::Uri*)>(&::System::Net::DirectProxy::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac73a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DirectProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DirectProxy.GetNextProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::DirectProxy::*)(::by_ref<::System::Uri*>)>(&::System::Net::DirectProxy::GetNextProxy)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xac73a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DirectProxy*>(),
                    {::i2c::class_of<::System::Net::DirectProxy*>(), 9}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::Net::DirectProxy::__cordl_internal_get_m_ProxyRetrieved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProxyRetrieved;
}
constexpr bool const& System::Net::DirectProxy::__cordl_internal_get_m_ProxyRetrieved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProxyRetrieved;
}
constexpr void System::Net::DirectProxy::__cordl_internal_set_m_ProxyRetrieved(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ProxyRetrieved = value;
}
inline void System::Net::DirectProxy::_ctor(::System::Uri*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DirectProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline bool System::Net::DirectProxy::GetNextProxy(::by_ref<::System::Uri*>  proxy)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DirectProxy*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, proxy);
}
inline ::System::Net::DirectProxy* System::Net::DirectProxy::New_ctor(::System::Uri*  destination)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::DirectProxy*>(destination));
}
// Ctor Parameters []
constexpr ::System::Net::DirectProxy::DirectProxy()   {
}

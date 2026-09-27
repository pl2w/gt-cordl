#pragma once
// IWYU pragma private; include "System/Net/ProxyScriptChain.hpp"
#include "System/Net/zzzz__ProxyChain_impl.hpp"
#include "System/zzzz__Uri_impl.hpp"
#include "System/Net/zzzz__ProxyScriptChain_def.hpp"
#include "System/Net/zzzz__WebProxy_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::ProxyScriptChain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ProxyScriptChain::*)(::System::Net::WebProxy*, ::System::Uri*)>(&::System::Net::ProxyScriptChain::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac73938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyScriptChain*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::WebProxy*>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ProxyScriptChain.GetNextProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ProxyScriptChain::*)(::by_ref<::System::Uri*>)>(&::System::Net::ProxyScriptChain::GetNextProxy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xac73968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::ProxyScriptChain*>(),
                    {::i2c::class_of<::System::Net::ProxyScriptChain*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ProxyScriptChain.Abort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ProxyScriptChain::*)()>(&::System::Net::ProxyScriptChain::Abort)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac73a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::ProxyScriptChain*>(),
                    {::i2c::class_of<::System::Net::ProxyScriptChain*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebProxy*& System::Net::ProxyScriptChain::__cordl_internal_get_m_Proxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Proxy;
}
constexpr ::System::Net::WebProxy* const& System::Net::ProxyScriptChain::__cordl_internal_get_m_Proxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Proxy;
}
constexpr void System::Net::ProxyScriptChain::__cordl_internal_set_m_Proxy(::System::Net::WebProxy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Proxy = value;
}
constexpr ::ArrayW<::System::Uri*>& System::Net::ProxyScriptChain::__cordl_internal_get_m_ScriptProxies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScriptProxies;
}
constexpr ::ArrayW<::System::Uri*> const& System::Net::ProxyScriptChain::__cordl_internal_get_m_ScriptProxies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScriptProxies;
}
constexpr void System::Net::ProxyScriptChain::__cordl_internal_set_m_ScriptProxies(::ArrayW<::System::Uri*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScriptProxies = value;
}
constexpr int32_t& System::Net::ProxyScriptChain::__cordl_internal_get_m_CurrentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentIndex;
}
constexpr int32_t const& System::Net::ProxyScriptChain::__cordl_internal_get_m_CurrentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentIndex;
}
constexpr void System::Net::ProxyScriptChain::__cordl_internal_set_m_CurrentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentIndex = value;
}
constexpr int32_t& System::Net::ProxyScriptChain::__cordl_internal_get_m_SyncStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SyncStatus;
}
constexpr int32_t const& System::Net::ProxyScriptChain::__cordl_internal_get_m_SyncStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SyncStatus;
}
constexpr void System::Net::ProxyScriptChain::__cordl_internal_set_m_SyncStatus(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SyncStatus = value;
}
inline void System::Net::ProxyScriptChain::_ctor(::System::Net::WebProxy*  proxy, ::System::Uri*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyScriptChain*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::WebProxy*>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, proxy, destination);
}
inline bool System::Net::ProxyScriptChain::GetNextProxy(::by_ref<::System::Uri*>  proxy)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::ProxyScriptChain*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, proxy);
}
inline void System::Net::ProxyScriptChain::Abort()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::ProxyScriptChain*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::ProxyScriptChain* System::Net::ProxyScriptChain::New_ctor(::System::Net::WebProxy*  proxy, ::System::Uri*  destination)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ProxyScriptChain*>(proxy, destination));
}
// Ctor Parameters []
constexpr ::System::Net::ProxyScriptChain::ProxyScriptChain()   {
}

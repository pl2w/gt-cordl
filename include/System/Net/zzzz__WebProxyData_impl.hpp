#pragma once
// IWYU pragma private; include "System/Net/WebProxyData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebProxyData_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::WebProxyData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxyData::*)()>(&::System::Net::WebProxyData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac8641c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::Net::WebProxyData::__cordl_internal_get_bypassOnLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassOnLocal;
}
constexpr bool const& System::Net::WebProxyData::__cordl_internal_get_bypassOnLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassOnLocal;
}
constexpr void System::Net::WebProxyData::__cordl_internal_set_bypassOnLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bypassOnLocal = value;
}
constexpr bool& System::Net::WebProxyData::__cordl_internal_get_automaticallyDetectSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___automaticallyDetectSettings;
}
constexpr bool const& System::Net::WebProxyData::__cordl_internal_get_automaticallyDetectSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___automaticallyDetectSettings;
}
constexpr void System::Net::WebProxyData::__cordl_internal_set_automaticallyDetectSettings(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___automaticallyDetectSettings = value;
}
constexpr ::System::Uri*& System::Net::WebProxyData::__cordl_internal_get_proxyAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proxyAddress;
}
constexpr ::System::Uri* const& System::Net::WebProxyData::__cordl_internal_get_proxyAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proxyAddress;
}
constexpr void System::Net::WebProxyData::__cordl_internal_set_proxyAddress(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proxyAddress = value;
}
constexpr ::System::Collections::Hashtable*& System::Net::WebProxyData::__cordl_internal_get_proxyHostAddresses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proxyHostAddresses;
}
constexpr ::System::Collections::Hashtable* const& System::Net::WebProxyData::__cordl_internal_get_proxyHostAddresses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proxyHostAddresses;
}
constexpr void System::Net::WebProxyData::__cordl_internal_set_proxyHostAddresses(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proxyHostAddresses = value;
}
constexpr ::System::Uri*& System::Net::WebProxyData::__cordl_internal_get_scriptLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scriptLocation;
}
constexpr ::System::Uri* const& System::Net::WebProxyData::__cordl_internal_get_scriptLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scriptLocation;
}
constexpr void System::Net::WebProxyData::__cordl_internal_set_scriptLocation(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scriptLocation = value;
}
constexpr ::System::Collections::ArrayList*& System::Net::WebProxyData::__cordl_internal_get_bypassList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassList;
}
constexpr ::System::Collections::ArrayList* const& System::Net::WebProxyData::__cordl_internal_get_bypassList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassList;
}
constexpr void System::Net::WebProxyData::__cordl_internal_set_bypassList(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bypassList = value;
}
inline void System::Net::WebProxyData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::WebProxyData* System::Net::WebProxyData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxyData*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebProxyData::WebProxyData()   {
}

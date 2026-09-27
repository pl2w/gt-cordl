#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayFabSharedSettings.hpp"
#include "PlayFab/zzzz__PlayFabLogLevel_impl.hpp"
#include "PlayFab/zzzz__WebRequestType_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PlayFabSharedSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayFabSharedSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayFabSharedSettings::*)()>(&::GlobalNamespace::PlayFabSharedSettings::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa78d908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabSharedSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
constexpr ::StringW& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_VerticalName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerticalName;
}
constexpr ::StringW const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_VerticalName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerticalName;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_VerticalName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VerticalName = value;
}
constexpr ::StringW& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_ProductionEnvironmentUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProductionEnvironmentUrl;
}
constexpr ::StringW const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_ProductionEnvironmentUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProductionEnvironmentUrl;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_ProductionEnvironmentUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProductionEnvironmentUrl = value;
}
constexpr ::PlayFab::WebRequestType& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_RequestType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestType;
}
constexpr ::PlayFab::WebRequestType const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_RequestType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestType;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_RequestType(::PlayFab::WebRequestType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequestType = value;
}
constexpr ::StringW& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_AdvertisingIdType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdvertisingIdType;
}
constexpr ::StringW const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_AdvertisingIdType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdvertisingIdType;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_AdvertisingIdType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AdvertisingIdType = value;
}
constexpr ::StringW& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_AdvertisingIdValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdvertisingIdValue;
}
constexpr ::StringW const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_AdvertisingIdValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdvertisingIdValue;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_AdvertisingIdValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AdvertisingIdValue = value;
}
constexpr bool& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_DisableAdvertising()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableAdvertising;
}
constexpr bool const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_DisableAdvertising() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableAdvertising;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_DisableAdvertising(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisableAdvertising = value;
}
constexpr bool& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_DisableDeviceInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableDeviceInfo;
}
constexpr bool const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_DisableDeviceInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableDeviceInfo;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_DisableDeviceInfo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisableDeviceInfo = value;
}
constexpr bool& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_DisableFocusTimeCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableFocusTimeCollection;
}
constexpr bool const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_DisableFocusTimeCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableFocusTimeCollection;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_DisableFocusTimeCollection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisableFocusTimeCollection = value;
}
constexpr int32_t& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_RequestTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestTimeout;
}
constexpr int32_t const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_RequestTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestTimeout;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_RequestTimeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequestTimeout = value;
}
constexpr bool& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_RequestKeepAlive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestKeepAlive;
}
constexpr bool const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_RequestKeepAlive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestKeepAlive;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_RequestKeepAlive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequestKeepAlive = value;
}
constexpr bool& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_CompressApiData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompressApiData;
}
constexpr bool const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_CompressApiData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompressApiData;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_CompressApiData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CompressApiData = value;
}
constexpr ::PlayFab::PlayFabLogLevel& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_LogLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogLevel;
}
constexpr ::PlayFab::PlayFabLogLevel const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_LogLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogLevel;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_LogLevel(::PlayFab::PlayFabLogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogLevel = value;
}
constexpr ::StringW& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_LoggerHost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoggerHost;
}
constexpr ::StringW const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_LoggerHost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoggerHost;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_LoggerHost(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LoggerHost = value;
}
constexpr int32_t& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_LoggerPort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoggerPort;
}
constexpr int32_t const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_LoggerPort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoggerPort;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_LoggerPort(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LoggerPort = value;
}
constexpr bool& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_EnableRealTimeLogging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableRealTimeLogging;
}
constexpr bool const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_EnableRealTimeLogging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableRealTimeLogging;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_EnableRealTimeLogging(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableRealTimeLogging = value;
}
constexpr int32_t& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_LogCapLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogCapLimit;
}
constexpr int32_t const& GlobalNamespace::PlayFabSharedSettings::__cordl_internal_get_LogCapLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogCapLimit;
}
constexpr void GlobalNamespace::PlayFabSharedSettings::__cordl_internal_set_LogCapLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogCapLimit = value;
}
inline void GlobalNamespace::PlayFabSharedSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabSharedSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayFabSharedSettings* GlobalNamespace::PlayFabSharedSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayFabSharedSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayFabSharedSettings::PlayFabSharedSettings()   {
}

#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Configuration/WitConfiguration.hpp"
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfigurationAssetData_impl.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitAppInfo_impl.hpp"
#include "Meta/WitAi/zzzz__WitRequestType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfiguration_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWitWebSocketClientProvider_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWitWebSocketClient_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketClient_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitEndpointConfig_def.hpp"
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfigurationAssetData_def.hpp"
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfiguration_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitAppInfo_def.hpp"
#include "Meta/WitAi/zzzz__IWitRequestConfiguration_def.hpp"
#include "Meta/WitAi/zzzz__IWitRequestEndpointInfo_def.hpp"
#include "Meta/WitAi/zzzz__WitRequestType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.GetVersionTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&::Meta::WitAi::Data::Configuration::WitConfiguration::GetVersionTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9c388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"GetVersionTag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.get_RequestType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::WitRequestType (::Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&::Meta::WitAi::Data::Configuration::WitConfiguration::get_RequestType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9c390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"get_RequestType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.set_RequestType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Configuration::WitConfiguration::*)(::Meta::WitAi::WitRequestType)>(&::Meta::WitAi::Data::Configuration::WitConfiguration::set_RequestType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9c398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"set_RequestType", {}, {::i2c::type_of<::Meta::WitAi::WitRequestType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.get_RequestTimeoutMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&::Meta::WitAi::Data::Configuration::WitConfiguration::get_RequestTimeoutMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9c3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"get_RequestTimeoutMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.set_RequestTimeoutMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Configuration::WitConfiguration::*)(int32_t)>(&::Meta::WitAi::Data::Configuration::WitConfiguration::set_RequestTimeoutMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9c3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"set_RequestTimeoutMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.get_timeoutMS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&::Meta::WitAi::Data::Configuration::WitConfiguration::get_timeoutMS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9c3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"get_timeoutMS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.set_timeoutMS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Configuration::WitConfiguration::*)(int32_t)>(&::Meta::WitAi::Data::Configuration::WitConfiguration::set_timeoutMS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9c3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"set_timeoutMS", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.get_ManifestLocalPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&::Meta::WitAi::Data::Configuration::WitConfiguration::get_ManifestLocalPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9c3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"get_ManifestLocalPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.ResetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&::Meta::WitAi::Data::Configuration::WitConfiguration::ResetData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e9c3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"ResetData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.UpdateDataAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&::Meta::WitAi::Data::Configuration::WitConfiguration::UpdateDataAssets)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e9c44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"UpdateDataAssets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.GetLoggerAppId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&::Meta::WitAi::Data::Configuration::WitConfiguration::GetLoggerAppId)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e9c450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"GetLoggerAppId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.get_WebSocketClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::WebSockets::IWitWebSocketClient* (::Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&::Meta::WitAi::Data::Configuration::WitConfiguration::get_WebSocketClient)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e9c4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"get_WebSocketClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.GetConfigurationId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&::Meta::WitAi::Data::Configuration::WitConfiguration::GetConfigurationId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9c554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"GetConfigurationId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.GetApplicationId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&::Meta::WitAi::Data::Configuration::WitConfiguration::GetApplicationId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9c4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"GetApplicationId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.GetApplicationInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::Info::WitAppInfo (::Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&::Meta::WitAi::Data::Configuration::WitConfiguration::GetApplicationInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e9c55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"GetApplicationInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.GetConfigData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>> (::Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&::Meta::WitAi::Data::Configuration::WitConfiguration::GetConfigData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e9c56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"GetConfigData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.GetEndpointInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::IWitRequestEndpointInfo* (::Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&::Meta::WitAi::Data::Configuration::WitConfiguration::GetEndpointInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9c61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"GetEndpointInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.GetClientAccessToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&::Meta::WitAi::Data::Configuration::WitConfiguration::GetClientAccessToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9c624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"GetClientAccessToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.SetApplicationInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Configuration::WitConfiguration::*)(::Meta::WitAi::Data::Info::WitAppInfo)>(&::Meta::WitAi::Data::Configuration::WitConfiguration::SetApplicationInfo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9e9c62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"SetApplicationInfo", {}, {::i2c::type_of<::Meta::WitAi::Data::Info::WitAppInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration.SetClientAccessToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Configuration::WitConfiguration::*)(::StringW)>(&::Meta::WitAi::Data::Configuration::WitConfiguration::SetClientAccessToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9c650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"SetClientAccessToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfiguration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&::Meta::WitAi::Data::Configuration::WitConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x9e9c658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get__clientAccessToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientAccessToken;
}
constexpr ::StringW const& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get__clientAccessToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientAccessToken;
}
constexpr void Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_set__clientAccessToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clientAccessToken = value;
}
constexpr ::StringW& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get_editorVersionTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorVersionTag;
}
constexpr ::StringW const& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get_editorVersionTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorVersionTag;
}
constexpr void Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_set_editorVersionTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___editorVersionTag = value;
}
constexpr ::StringW& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get_buildVersionTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buildVersionTag;
}
constexpr ::StringW const& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get_buildVersionTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buildVersionTag;
}
constexpr void Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_set_buildVersionTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buildVersionTag = value;
}
constexpr ::Meta::WitAi::Data::Info::WitAppInfo& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get__appInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appInfo;
}
constexpr ::Meta::WitAi::Data::Info::WitAppInfo const& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get__appInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appInfo;
}
constexpr void Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_set__appInfo(::Meta::WitAi::Data::Info::WitAppInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____appInfo = value;
}
constexpr ::ArrayW<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>>& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get__configData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configData;
}
constexpr ::ArrayW<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>> const& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get__configData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configData;
}
constexpr void Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_set__configData(::ArrayW<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____configData = value;
}
constexpr ::StringW& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get__configurationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configurationId;
}
constexpr ::StringW const& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get__configurationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configurationId;
}
constexpr void Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_set__configurationId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____configurationId = value;
}
constexpr ::Meta::WitAi::WitRequestType& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get__requestType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestType;
}
constexpr ::Meta::WitAi::WitRequestType const& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get__requestType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestType;
}
constexpr void Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_set__requestType(::Meta::WitAi::WitRequestType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestType = value;
}
constexpr int32_t& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get__requestTimeoutMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestTimeoutMs;
}
constexpr int32_t const& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get__requestTimeoutMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestTimeoutMs;
}
constexpr void Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_set__requestTimeoutMs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestTimeoutMs = value;
}
constexpr ::Meta::WitAi::Configuration::WitEndpointConfig*& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get_endpointConfiguration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endpointConfiguration;
}
constexpr ::Meta::WitAi::Configuration::WitEndpointConfig* const& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get_endpointConfiguration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endpointConfiguration;
}
constexpr void Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_set_endpointConfiguration(::Meta::WitAi::Configuration::WitEndpointConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endpointConfiguration = value;
}
constexpr bool& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get_isDemoOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDemoOnly;
}
constexpr bool const& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get_isDemoOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDemoOnly;
}
constexpr void Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_set_isDemoOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDemoOnly = value;
}
constexpr bool& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get_useIntentAttributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useIntentAttributes;
}
constexpr bool const& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get_useIntentAttributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useIntentAttributes;
}
constexpr void Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_set_useIntentAttributes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useIntentAttributes = value;
}
constexpr bool& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get_useConduit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useConduit;
}
constexpr bool const& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get_useConduit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useConduit;
}
constexpr void Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_set_useConduit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useConduit = value;
}
constexpr ::StringW& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get__manifestLocalPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manifestLocalPath;
}
constexpr ::StringW const& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get__manifestLocalPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manifestLocalPath;
}
constexpr void Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_set__manifestLocalPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____manifestLocalPath = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get_excludedAssemblies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___excludedAssemblies;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get_excludedAssemblies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___excludedAssemblies;
}
constexpr void Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_set_excludedAssemblies(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___excludedAssemblies = value;
}
constexpr bool& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get_relaxedResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relaxedResolution;
}
constexpr bool const& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get_relaxedResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relaxedResolution;
}
constexpr void Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_set_relaxedResolution(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___relaxedResolution = value;
}
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketClient*& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get__client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____client;
}
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketClient* const& Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_get__client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____client;
}
constexpr void Meta::WitAi::Data::Configuration::WitConfiguration::__cordl_internal_set__client(::Meta::Voice::Net::WebSockets::WitWebSocketClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____client = value;
}
inline ::StringW Meta::WitAi::Data::Configuration::WitConfiguration::GetVersionTag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"GetVersionTag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::WitAi::WitRequestType Meta::WitAi::Data::Configuration::WitConfiguration::get_RequestType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"get_RequestType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::WitRequestType>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Configuration::WitConfiguration::set_RequestType(::Meta::WitAi::WitRequestType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"set_RequestType", {}, {::i2c::type_of<::Meta::WitAi::WitRequestType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::WitAi::Data::Configuration::WitConfiguration::get_RequestTimeoutMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"get_RequestTimeoutMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Configuration::WitConfiguration::set_RequestTimeoutMs(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"set_RequestTimeoutMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::WitAi::Data::Configuration::WitConfiguration::get_timeoutMS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"get_timeoutMS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Configuration::WitConfiguration::set_timeoutMS(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"set_timeoutMS", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::WitAi::Data::Configuration::WitConfiguration::get_ManifestLocalPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"get_ManifestLocalPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Configuration::WitConfiguration::ResetData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"ResetData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Configuration::WitConfiguration::UpdateDataAssets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"UpdateDataAssets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::Data::Configuration::WitConfiguration::GetLoggerAppId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"GetLoggerAppId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::IWitWebSocketClient* Meta::WitAi::Data::Configuration::WitConfiguration::get_WebSocketClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"get_WebSocketClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::Data::Configuration::WitConfiguration::GetConfigurationId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"GetConfigurationId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::Data::Configuration::WitConfiguration::GetApplicationId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"GetApplicationId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::Info::WitAppInfo Meta::WitAi::Data::Configuration::WitConfiguration::GetApplicationInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"GetApplicationInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::Info::WitAppInfo>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>> Meta::WitAi::Data::Configuration::WitConfiguration::GetConfigData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"GetConfigData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>>>(this, ___internal_method);
}
template<typename TConfigData>
requires(::cordl_internals::type_constraint<TConfigData, ::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*>)
inline TConfigData Meta::WitAi::Data::Configuration::WitConfiguration::GetConfigData()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                    {"GetConfigData", {::i2c::class_of<TConfigData>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TConfigData>()}
                )));
return ::cordl_internals::RunMethodRethrow<TConfigData>(this, ___internal_method);
}
inline ::Meta::WitAi::IWitRequestEndpointInfo* Meta::WitAi::Data::Configuration::WitConfiguration::GetEndpointInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"GetEndpointInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::IWitRequestEndpointInfo*>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::Data::Configuration::WitConfiguration::GetClientAccessToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"GetClientAccessToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Configuration::WitConfiguration::SetApplicationInfo(::Meta::WitAi::Data::Info::WitAppInfo  newInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"SetApplicationInfo", {}, {::i2c::type_of<::Meta::WitAi::Data::Info::WitAppInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newInfo);
}
inline void Meta::WitAi::Data::Configuration::WitConfiguration::SetClientAccessToken(::StringW  newToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {"SetClientAccessToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newToken);
}
inline void Meta::WitAi::Data::Configuration::WitConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::Configuration::WitConfiguration* Meta::WitAi::Data::Configuration::WitConfiguration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Configuration::WitConfiguration*>());
}
/// @brief Convert operator to "::Meta::WitAi::IWitRequestConfiguration"
constexpr  Meta::WitAi::Data::Configuration::WitConfiguration::operator ::Meta::WitAi::IWitRequestConfiguration*() noexcept {
return static_cast<::Meta::WitAi::IWitRequestConfiguration*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IWitRequestConfiguration"
constexpr ::Meta::WitAi::IWitRequestConfiguration* Meta::WitAi::Data::Configuration::WitConfiguration::i___Meta__WitAi__IWitRequestConfiguration() noexcept {
return static_cast<::Meta::WitAi::IWitRequestConfiguration*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider"
constexpr  Meta::WitAi::Data::Configuration::WitConfiguration::operator ::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider*() noexcept {
return static_cast<::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider"
constexpr ::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider* Meta::WitAi::Data::Configuration::WitConfiguration::i___Meta__Voice__Net__WebSockets__IWitWebSocketClientProvider() noexcept {
return static_cast<::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Configuration::WitConfiguration::WitConfiguration()   {
}
template<typename TConfigData>
inline void Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>::setStaticF___9(::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>*  value)  {
::cordl_internals::setStaticField<::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>*, "<>9", ::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>*>(std::forward<::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>*>(value));
}
template<typename TConfigData>
inline ::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>* Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>*, "<>9", ::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>*>();
}
template<typename TConfigData>
inline void Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>::setStaticF___9__39_0(::System::Func_2<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>,bool>*, "<>9__39_0", ::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>*>(std::forward<::System::Func_2<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>,bool>*>(value));
}
template<typename TConfigData>
inline ::System::Func_2<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>,bool>* Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>::getStaticF___9__39_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>,bool>*, "<>9__39_0", ::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>*>();
}
template<typename TConfigData>
inline void Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TConfigData>
inline bool Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>::_GetConfigData_b__39_0(::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>*>(),
                        {"<GetConfigData>b__39_0", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
template<typename TConfigData>
inline ::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>* Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>*>());
}
// Ctor Parameters []
template<typename TConfigData>
constexpr ::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>::WitConfiguration___c__39_1()   {
}

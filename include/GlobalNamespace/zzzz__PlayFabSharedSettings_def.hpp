#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayFabSharedSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/zzzz__PlayFabLogLevel_def.hpp"
#include "PlayFab/zzzz__WebRequestType_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayFabSharedSettings)
// Forward declare root types
namespace GlobalNamespace {
class PlayFabSharedSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayFabSharedSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayFabSharedSettings*, "", "PlayFabSharedSettings");
// [CreateAssetMenu(fileName = "PlayFabSharedSettings", menuName = "PlayFab/CreateSharedSettings", order = 1)]
// Dependencies PlayFab.PlayFabLogLevel, PlayFab.WebRequestType, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayFabSharedSettings
class CORDL_TYPE PlayFabSharedSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field AdvertisingIdType, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_AdvertisingIdType, put=__cordl_internal_set_AdvertisingIdType)) ::StringW  AdvertisingIdType;

/// @brief Field AdvertisingIdValue, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_AdvertisingIdValue, put=__cordl_internal_set_AdvertisingIdValue)) ::StringW  AdvertisingIdValue;

/// @brief Field CompressApiData, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_CompressApiData, put=__cordl_internal_set_CompressApiData)) bool  CompressApiData;

/// @brief Field DisableAdvertising, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisableAdvertising, put=__cordl_internal_set_DisableAdvertising)) bool  DisableAdvertising;

/// @brief Field DisableDeviceInfo, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisableDeviceInfo, put=__cordl_internal_set_DisableDeviceInfo)) bool  DisableDeviceInfo;

/// @brief Field DisableFocusTimeCollection, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisableFocusTimeCollection, put=__cordl_internal_set_DisableFocusTimeCollection)) bool  DisableFocusTimeCollection;

/// @brief Field EnableRealTimeLogging, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableRealTimeLogging, put=__cordl_internal_set_EnableRealTimeLogging)) bool  EnableRealTimeLogging;

/// @brief Field LogCapLimit, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_LogCapLimit, put=__cordl_internal_set_LogCapLimit)) int32_t  LogCapLimit;

/// @brief Field LogLevel, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_LogLevel, put=__cordl_internal_set_LogLevel)) ::PlayFab::PlayFabLogLevel  LogLevel;

/// @brief Field LoggerHost, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_LoggerHost, put=__cordl_internal_set_LoggerHost)) ::StringW  LoggerHost;

/// @brief Field LoggerPort, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_LoggerPort, put=__cordl_internal_set_LoggerPort)) int32_t  LoggerPort;

/// @brief Field ProductionEnvironmentUrl, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProductionEnvironmentUrl, put=__cordl_internal_set_ProductionEnvironmentUrl)) ::StringW  ProductionEnvironmentUrl;

/// @brief Field RequestKeepAlive, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_RequestKeepAlive, put=__cordl_internal_set_RequestKeepAlive)) bool  RequestKeepAlive;

/// @brief Field RequestTimeout, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RequestTimeout, put=__cordl_internal_set_RequestTimeout)) int32_t  RequestTimeout;

/// @brief Field RequestType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_RequestType, put=__cordl_internal_set_RequestType)) ::PlayFab::WebRequestType  RequestType;

/// @brief Field TitleId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

/// @brief Field VerticalName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_VerticalName, put=__cordl_internal_set_VerticalName)) ::StringW  VerticalName;

static inline ::GlobalNamespace::PlayFabSharedSettings* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AdvertisingIdType() const;

constexpr ::StringW& __cordl_internal_get_AdvertisingIdType() ;

constexpr ::StringW const& __cordl_internal_get_AdvertisingIdValue() const;

constexpr ::StringW& __cordl_internal_get_AdvertisingIdValue() ;

constexpr bool const& __cordl_internal_get_CompressApiData() const;

constexpr bool& __cordl_internal_get_CompressApiData() ;

constexpr bool const& __cordl_internal_get_DisableAdvertising() const;

constexpr bool& __cordl_internal_get_DisableAdvertising() ;

constexpr bool const& __cordl_internal_get_DisableDeviceInfo() const;

constexpr bool& __cordl_internal_get_DisableDeviceInfo() ;

constexpr bool const& __cordl_internal_get_DisableFocusTimeCollection() const;

constexpr bool& __cordl_internal_get_DisableFocusTimeCollection() ;

constexpr bool const& __cordl_internal_get_EnableRealTimeLogging() const;

constexpr bool& __cordl_internal_get_EnableRealTimeLogging() ;

constexpr int32_t const& __cordl_internal_get_LogCapLimit() const;

constexpr int32_t& __cordl_internal_get_LogCapLimit() ;

constexpr ::PlayFab::PlayFabLogLevel const& __cordl_internal_get_LogLevel() const;

constexpr ::PlayFab::PlayFabLogLevel& __cordl_internal_get_LogLevel() ;

constexpr ::StringW const& __cordl_internal_get_LoggerHost() const;

constexpr ::StringW& __cordl_internal_get_LoggerHost() ;

constexpr int32_t const& __cordl_internal_get_LoggerPort() const;

constexpr int32_t& __cordl_internal_get_LoggerPort() ;

constexpr ::StringW const& __cordl_internal_get_ProductionEnvironmentUrl() const;

constexpr ::StringW& __cordl_internal_get_ProductionEnvironmentUrl() ;

constexpr bool const& __cordl_internal_get_RequestKeepAlive() const;

constexpr bool& __cordl_internal_get_RequestKeepAlive() ;

constexpr int32_t const& __cordl_internal_get_RequestTimeout() const;

constexpr int32_t& __cordl_internal_get_RequestTimeout() ;

constexpr ::PlayFab::WebRequestType const& __cordl_internal_get_RequestType() const;

constexpr ::PlayFab::WebRequestType& __cordl_internal_get_RequestType() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr ::StringW const& __cordl_internal_get_VerticalName() const;

constexpr ::StringW& __cordl_internal_get_VerticalName() ;

constexpr void __cordl_internal_set_AdvertisingIdType(::StringW  value) ;

constexpr void __cordl_internal_set_AdvertisingIdValue(::StringW  value) ;

constexpr void __cordl_internal_set_CompressApiData(bool  value) ;

constexpr void __cordl_internal_set_DisableAdvertising(bool  value) ;

constexpr void __cordl_internal_set_DisableDeviceInfo(bool  value) ;

constexpr void __cordl_internal_set_DisableFocusTimeCollection(bool  value) ;

constexpr void __cordl_internal_set_EnableRealTimeLogging(bool  value) ;

constexpr void __cordl_internal_set_LogCapLimit(int32_t  value) ;

constexpr void __cordl_internal_set_LogLevel(::PlayFab::PlayFabLogLevel  value) ;

constexpr void __cordl_internal_set_LoggerHost(::StringW  value) ;

constexpr void __cordl_internal_set_LoggerPort(int32_t  value) ;

constexpr void __cordl_internal_set_ProductionEnvironmentUrl(::StringW  value) ;

constexpr void __cordl_internal_set_RequestKeepAlive(bool  value) ;

constexpr void __cordl_internal_set_RequestTimeout(int32_t  value) ;

constexpr void __cordl_internal_set_RequestType(::PlayFab::WebRequestType  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

constexpr void __cordl_internal_set_VerticalName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa78d908, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabSharedSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabSharedSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabSharedSettings(PlayFabSharedSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabSharedSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabSharedSettings(PlayFabSharedSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19446};

/// @brief Field TitleId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___TitleId;

/// @brief Field VerticalName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___VerticalName;

/// @brief Field ProductionEnvironmentUrl, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ProductionEnvironmentUrl;

/// @brief Field RequestType, offset: 0x30, size: 0x4, def value: None
 ::PlayFab::WebRequestType  ___RequestType;

/// @brief Field AdvertisingIdType, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___AdvertisingIdType;

/// @brief Field AdvertisingIdValue, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___AdvertisingIdValue;

/// @brief Field DisableAdvertising, offset: 0x48, size: 0x1, def value: None
 bool  ___DisableAdvertising;

/// @brief Field DisableDeviceInfo, offset: 0x49, size: 0x1, def value: None
 bool  ___DisableDeviceInfo;

/// @brief Field DisableFocusTimeCollection, offset: 0x4a, size: 0x1, def value: None
 bool  ___DisableFocusTimeCollection;

/// @brief Field RequestTimeout, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___RequestTimeout;

/// @brief Field RequestKeepAlive, offset: 0x50, size: 0x1, def value: None
 bool  ___RequestKeepAlive;

/// @brief Field CompressApiData, offset: 0x51, size: 0x1, def value: None
 bool  ___CompressApiData;

/// @brief Field LogLevel, offset: 0x54, size: 0x4, def value: None
 ::PlayFab::PlayFabLogLevel  ___LogLevel;

/// @brief Field LoggerHost, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___LoggerHost;

/// @brief Field LoggerPort, offset: 0x60, size: 0x4, def value: None
 int32_t  ___LoggerPort;

/// @brief Field EnableRealTimeLogging, offset: 0x64, size: 0x1, def value: None
 bool  ___EnableRealTimeLogging;

/// @brief Field LogCapLimit, offset: 0x68, size: 0x4, def value: None
 int32_t  ___LogCapLimit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___TitleId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___VerticalName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___ProductionEnvironmentUrl) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___RequestType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___AdvertisingIdType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___AdvertisingIdValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___DisableAdvertising) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___DisableDeviceInfo) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___DisableFocusTimeCollection) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___RequestTimeout) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___RequestKeepAlive) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___CompressApiData) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___LogLevel) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___LoggerHost) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___LoggerPort) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___EnableRealTimeLogging) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabSharedSettings, ___LogCapLimit) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayFabSharedSettings) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace

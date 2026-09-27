#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Configuration/WitConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfigurationAssetData_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitAppInfo_def.hpp"
#include "Meta/WitAi/zzzz__WitRequestType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitConfiguration)
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketClientProvider;
}
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketClient;
}
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketClient;
}
namespace Meta::WitAi::Configuration {
class WitEndpointConfig;
}
namespace Meta::WitAi::Data::Configuration {
class WitConfigurationAssetData;
}
namespace Meta::WitAi::Data::Configuration {
template<typename TConfigData>
class WitConfiguration___c__39_1;
}
namespace Meta::WitAi::Data::Info {
struct WitAppInfo;
}
namespace Meta::WitAi {
class IWitRequestConfiguration;
}
namespace Meta::WitAi {
class IWitRequestEndpointInfo;
}
namespace Meta::WitAi {
struct WitRequestType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Meta::WitAi::Data::Configuration {
class WitConfiguration;
}
namespace Meta::WitAi::Data::Configuration {
template<typename TConfigData>
class WitConfiguration___c__39_1;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::Configuration::WitConfiguration*);
MARK_GEN_REF_T_PTR(::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Configuration::WitConfiguration*, "Meta.WitAi.Data.Configuration", "WitConfiguration");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1, "Meta.WitAi.Data.Configuration", "WitConfiguration/<>c__39`1");
// Dependencies Meta.WitAi.Data.Configuration.WitConfigurationAssetData, Meta.WitAi.Data.Info.WitAppInfo, Meta.WitAi.WitRequestType, UnityEngine.ScriptableObject
namespace Meta::WitAi::Data::Configuration {
// Is value type: false
// CS Name: Meta.WitAi.Data.Configuration.WitConfiguration
class CORDL_TYPE WitConfiguration : public ::UnityEngine::ScriptableObject {
public:
// Declarations
template<typename TConfigData>
using __c__39_1 = ::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>;

 __declspec(property(get=get_ManifestLocalPath)) ::StringW  ManifestLocalPath;

 __declspec(property(get=get_RequestTimeoutMs, put=set_RequestTimeoutMs)) int32_t  RequestTimeoutMs;

 __declspec(property(get=get_RequestType, put=set_RequestType)) ::Meta::WitAi::WitRequestType  RequestType;

 __declspec(property(get=get_WebSocketClient)) ::Meta::Voice::Net::WebSockets::IWitWebSocketClient*  WebSocketClient;

/// @brief Field _appInfo, offset 0x30, size 0x68 
 __declspec(property(get=__cordl_internal_get__appInfo, put=__cordl_internal_set__appInfo)) ::Meta::WitAi::Data::Info::WitAppInfo  _appInfo;

/// @brief Field _client, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__client, put=__cordl_internal_set__client)) ::Meta::Voice::Net::WebSockets::WitWebSocketClient*  _client;

/// @brief Field _clientAccessToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__clientAccessToken, put=__cordl_internal_set__clientAccessToken)) ::StringW  _clientAccessToken;

/// @brief Field _configData, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__configData, put=__cordl_internal_set__configData)) ::ArrayW<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>>  _configData;

/// @brief Field _configurationId, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__configurationId, put=__cordl_internal_set__configurationId)) ::StringW  _configurationId;

/// @brief Field _manifestLocalPath, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__manifestLocalPath, put=__cordl_internal_set__manifestLocalPath)) ::StringW  _manifestLocalPath;

/// @brief Field _requestTimeoutMs, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__requestTimeoutMs, put=__cordl_internal_set__requestTimeoutMs)) int32_t  _requestTimeoutMs;

/// @brief Field _requestType, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__requestType, put=__cordl_internal_set__requestType)) ::Meta::WitAi::WitRequestType  _requestType;

/// @brief Field buildVersionTag, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_buildVersionTag, put=__cordl_internal_set_buildVersionTag)) ::StringW  buildVersionTag;

/// @brief Field editorVersionTag, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_editorVersionTag, put=__cordl_internal_set_editorVersionTag)) ::StringW  editorVersionTag;

/// @brief Field endpointConfiguration, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_endpointConfiguration, put=__cordl_internal_set_endpointConfiguration)) ::Meta::WitAi::Configuration::WitEndpointConfig*  endpointConfiguration;

/// @brief Field excludedAssemblies, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_excludedAssemblies, put=__cordl_internal_set_excludedAssemblies)) ::System::Collections::Generic::List_1<::StringW>*  excludedAssemblies;

/// @brief Field isDemoOnly, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDemoOnly, put=__cordl_internal_set_isDemoOnly)) bool  isDemoOnly;

/// @brief Field relaxedResolution, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_relaxedResolution, put=__cordl_internal_set_relaxedResolution)) bool  relaxedResolution;

/// @brief [Obsolete("Deprecated in favor of \'RequestTimeoutMs\'. Access will be removed in the future.")]
 __declspec(property(get=get_timeoutMS, put=set_timeoutMS)) int32_t  timeoutMS;

/// @brief Field useConduit, offset 0xba, size 0x1 
 __declspec(property(get=__cordl_internal_get_useConduit, put=__cordl_internal_set_useConduit)) bool  useConduit;

/// @brief Field useIntentAttributes, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get_useIntentAttributes, put=__cordl_internal_set_useIntentAttributes)) bool  useIntentAttributes;

/// @brief Convert operator to "::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider"
constexpr operator  ::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::IWitRequestConfiguration"
constexpr operator  ::Meta::WitAi::IWitRequestConfiguration*() noexcept;

/// @brief Method GetApplicationId, addr 0x9e9c4d4, size 0x8, virtual true, abstract: false, final true
inline ::StringW GetApplicationId() ;

/// @brief Method GetApplicationInfo, addr 0x9e9c55c, size 0x10, virtual true, abstract: false, final true
inline ::Meta::WitAi::Data::Info::WitAppInfo GetApplicationInfo() ;

/// @brief Method GetClientAccessToken, addr 0x9e9c624, size 0x8, virtual true, abstract: false, final true
inline ::StringW GetClientAccessToken() ;

/// @brief Method GetConfigData, addr 0x9e9c56c, size 0xb0, virtual true, abstract: false, final true
inline ::ArrayW<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>> GetConfigData() ;

/// @brief Method GetConfigData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TConfigData>
requires(::cordl_internals::type_constraint<TConfigData, ::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*>)
inline TConfigData GetConfigData() ;

/// @brief Method GetConfigurationId, addr 0x9e9c554, size 0x8, virtual true, abstract: false, final true
inline ::StringW GetConfigurationId() ;

/// @brief Method GetEndpointInfo, addr 0x9e9c61c, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::IWitRequestEndpointInfo* GetEndpointInfo() ;

/// @brief Method GetLoggerAppId, addr 0x9e9c450, size 0x84, virtual false, abstract: false, final false
inline ::StringW GetLoggerAppId() ;

/// @brief Method GetVersionTag, addr 0x9e9c388, size 0x8, virtual true, abstract: false, final true
inline ::StringW GetVersionTag() ;

static inline ::Meta::WitAi::Data::Configuration::WitConfiguration* New_ctor() ;

/// @brief Method ResetData, addr 0x9e9c3c8, size 0x84, virtual false, abstract: false, final false
inline void ResetData() ;

/// @brief Method SetApplicationInfo, addr 0x9e9c62c, size 0x24, virtual false, abstract: false, final false
inline void SetApplicationInfo(::Meta::WitAi::Data::Info::WitAppInfo  newInfo) ;

/// @brief Method SetClientAccessToken, addr 0x9e9c650, size 0x8, virtual false, abstract: false, final false
inline void SetClientAccessToken(::StringW  newToken) ;

/// @brief Method UpdateDataAssets, addr 0x9e9c44c, size 0x4, virtual true, abstract: false, final true
inline void UpdateDataAssets() ;

constexpr ::Meta::WitAi::Data::Info::WitAppInfo const& __cordl_internal_get__appInfo() const;

constexpr ::Meta::WitAi::Data::Info::WitAppInfo& __cordl_internal_get__appInfo() ;

constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketClient* const& __cordl_internal_get__client() const;

constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketClient*& __cordl_internal_get__client() ;

constexpr ::StringW const& __cordl_internal_get__clientAccessToken() const;

constexpr ::StringW& __cordl_internal_get__clientAccessToken() ;

constexpr ::ArrayW<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>> const& __cordl_internal_get__configData() const;

constexpr ::ArrayW<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>>& __cordl_internal_get__configData() ;

constexpr ::StringW const& __cordl_internal_get__configurationId() const;

constexpr ::StringW& __cordl_internal_get__configurationId() ;

constexpr ::StringW const& __cordl_internal_get__manifestLocalPath() const;

constexpr ::StringW& __cordl_internal_get__manifestLocalPath() ;

constexpr int32_t const& __cordl_internal_get__requestTimeoutMs() const;

constexpr int32_t& __cordl_internal_get__requestTimeoutMs() ;

constexpr ::Meta::WitAi::WitRequestType const& __cordl_internal_get__requestType() const;

constexpr ::Meta::WitAi::WitRequestType& __cordl_internal_get__requestType() ;

constexpr ::StringW const& __cordl_internal_get_buildVersionTag() const;

constexpr ::StringW& __cordl_internal_get_buildVersionTag() ;

constexpr ::StringW const& __cordl_internal_get_editorVersionTag() const;

constexpr ::StringW& __cordl_internal_get_editorVersionTag() ;

constexpr ::Meta::WitAi::Configuration::WitEndpointConfig* const& __cordl_internal_get_endpointConfiguration() const;

constexpr ::Meta::WitAi::Configuration::WitEndpointConfig*& __cordl_internal_get_endpointConfiguration() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_excludedAssemblies() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_excludedAssemblies() ;

constexpr bool const& __cordl_internal_get_isDemoOnly() const;

constexpr bool& __cordl_internal_get_isDemoOnly() ;

constexpr bool const& __cordl_internal_get_relaxedResolution() const;

constexpr bool& __cordl_internal_get_relaxedResolution() ;

constexpr bool const& __cordl_internal_get_useConduit() const;

constexpr bool& __cordl_internal_get_useConduit() ;

constexpr bool const& __cordl_internal_get_useIntentAttributes() const;

constexpr bool& __cordl_internal_get_useIntentAttributes() ;

constexpr void __cordl_internal_set__appInfo(::Meta::WitAi::Data::Info::WitAppInfo  value) ;

constexpr void __cordl_internal_set__client(::Meta::Voice::Net::WebSockets::WitWebSocketClient*  value) ;

constexpr void __cordl_internal_set__clientAccessToken(::StringW  value) ;

constexpr void __cordl_internal_set__configData(::ArrayW<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>>  value) ;

constexpr void __cordl_internal_set__configurationId(::StringW  value) ;

constexpr void __cordl_internal_set__manifestLocalPath(::StringW  value) ;

constexpr void __cordl_internal_set__requestTimeoutMs(int32_t  value) ;

constexpr void __cordl_internal_set__requestType(::Meta::WitAi::WitRequestType  value) ;

constexpr void __cordl_internal_set_buildVersionTag(::StringW  value) ;

constexpr void __cordl_internal_set_editorVersionTag(::StringW  value) ;

constexpr void __cordl_internal_set_endpointConfiguration(::Meta::WitAi::Configuration::WitEndpointConfig*  value) ;

constexpr void __cordl_internal_set_excludedAssemblies(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_isDemoOnly(bool  value) ;

constexpr void __cordl_internal_set_relaxedResolution(bool  value) ;

constexpr void __cordl_internal_set_useConduit(bool  value) ;

constexpr void __cordl_internal_set_useIntentAttributes(bool  value) ;

/// @brief Method .ctor, addr 0x9e9c658, size 0x1c8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ManifestLocalPath, addr 0x9e9c3c0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ManifestLocalPath() ;

/// @brief Method get_RequestTimeoutMs, addr 0x9e9c3a0, size 0x8, virtual true, abstract: false, final true
inline int32_t get_RequestTimeoutMs() ;

/// @brief Method get_RequestType, addr 0x9e9c390, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::WitRequestType get_RequestType() ;

/// @brief Method get_WebSocketClient, addr 0x9e9c4dc, size 0x78, virtual true, abstract: false, final true
inline ::Meta::Voice::Net::WebSockets::IWitWebSocketClient* get_WebSocketClient() ;

/// @brief Method get_timeoutMS, addr 0x9e9c3b0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_timeoutMS() ;

/// @brief Convert to "::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider"
constexpr ::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider* i___Meta__Voice__Net__WebSockets__IWitWebSocketClientProvider() noexcept;

/// @brief Convert to "::Meta::WitAi::IWitRequestConfiguration"
constexpr ::Meta::WitAi::IWitRequestConfiguration* i___Meta__WitAi__IWitRequestConfiguration() noexcept;

/// @brief Method set_RequestTimeoutMs, addr 0x9e9c3a8, size 0x8, virtual false, abstract: false, final false
inline void set_RequestTimeoutMs(int32_t  value) ;

/// @brief Method set_RequestType, addr 0x9e9c398, size 0x8, virtual false, abstract: false, final false
inline void set_RequestType(::Meta::WitAi::WitRequestType  value) ;

/// @brief Method set_timeoutMS, addr 0x9e9c3b8, size 0x8, virtual false, abstract: false, final false
inline void set_timeoutMS(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitConfiguration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitConfiguration(WitConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitConfiguration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitConfiguration(WitConfiguration const& ) = delete;

/// @brief Field INVALID_APP_ID_NO_CLIENT_TOKEN offset 0xffffffff size 0x8
static constexpr ::ConstString  INVALID_APP_ID_NO_CLIENT_TOKEN{u"App Info Not Set - No Client Token"};

/// @brief Field INVALID_APP_ID_WITH_CLIENT_TOKEN offset 0xffffffff size 0x8
static constexpr ::ConstString  INVALID_APP_ID_WITH_CLIENT_TOKEN{u"App Info Not Set - Has Client Token"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25723};

/// [Tooltip("Access token used in builds to make requests for data from Wit.ai")]
/// [FormerlySerializedAs("clientAccessToken")]
/// [SerializeField]
/// @brief Field _clientAccessToken, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____clientAccessToken;

/// [Tooltip("Which deployed version to use in editor (defaults to current when empty)")]
/// [VersionTagDropdown]
/// @brief Field editorVersionTag, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___editorVersionTag;

/// [Tooltip("Which deployed version to use in a build (defaults to current when empty)")]
/// [VersionTagDropdown]
/// @brief Field buildVersionTag, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___buildVersionTag;

/// [FormerlySerializedAs("application")]
/// [SerializeField]
/// @brief Field _appInfo, offset: 0x30, size: 0x68, def value: None
 ::Meta::WitAi::Data::Info::WitAppInfo  ____appInfo;

/// [SerializeField]
/// @brief Field _configData, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>>  ____configData;

/// [FormerlySerializedAs("configId")]
/// [HideInInspector]
/// [SerializeField]
/// @brief Field _configurationId, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____configurationId;

/// [Tooltip("The request connection type to be used by all requests made with this configuration.")]
/// [SerializeField]
/// @brief Field _requestType, offset: 0xa8, size: 0x4, def value: None
 ::Meta::WitAi::WitRequestType  ____requestType;

/// [Tooltip("The number of milliseconds to wait before requests to Wit.ai will timeout")]
/// [FormerlySerializedAs("timeoutMS")]
/// [SerializeField]
/// @brief Field _requestTimeoutMs, offset: 0xac, size: 0x4, def value: None
 int32_t  ____requestTimeoutMs;

/// [Tooltip("Configuration parameters to set up a custom endpoint for testing purposes and request forwarding. The default values here will work for most.")]
/// [SerializeField]
/// @brief Field endpointConfiguration, offset: 0xb0, size: 0x8, def value: None
 ::Meta::WitAi::Configuration::WitEndpointConfig*  ___endpointConfiguration;

/// [SerializeField]
/// @brief Field isDemoOnly, offset: 0xb8, size: 0x1, def value: None
 bool  ___isDemoOnly;

/// [Tooltip("Intent attributes (ex: [MatchIntent(\'change-color\')] void ChangeColor(string color) are useful for quickly addressing voice commands in code, but they come at the cost of reflection. If you don\'t  need these or don\'t want to pay the reflection cost it is recommended you turn these off.")]
/// [SerializeField]
/// @brief Field useIntentAttributes, offset: 0xb9, size: 0x1, def value: None
 bool  ___useIntentAttributes;

/// [Tooltip("Conduit enables manifest-based dispatching to invoke callbacks with native types directly without requiring manual parsing.")]
/// [SerializeField]
/// @brief Field useConduit, offset: 0xba, size: 0x1, def value: None
 bool  ___useConduit;

/// [SerializeField]
/// @brief Field _manifestLocalPath, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ____manifestLocalPath;

/// [SerializeField]
/// @brief Field excludedAssemblies, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___excludedAssemblies;

/// [Tooltip("When true, Conduit will attempt to match incoming requests by type when no exact matches are found. This increases tolerance but reduces runtime performance.")]
/// [SerializeField]
/// @brief Field relaxedResolution, offset: 0xd0, size: 0x1, def value: None
 bool  ___relaxedResolution;

/// @brief Field _client, offset: 0xd8, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::WitWebSocketClient*  ____client;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Configuration::WitConfiguration, ____clientAccessToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Configuration::WitConfiguration, ___editorVersionTag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Configuration::WitConfiguration, ___buildVersionTag) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Configuration::WitConfiguration, ____appInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Configuration::WitConfiguration, ____configData) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Configuration::WitConfiguration, ____configurationId) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Configuration::WitConfiguration, ____requestType) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Configuration::WitConfiguration, ____requestTimeoutMs) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Configuration::WitConfiguration, ___endpointConfiguration) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Configuration::WitConfiguration, ___isDemoOnly) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Configuration::WitConfiguration, ___useIntentAttributes) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Configuration::WitConfiguration, ___useConduit) == 0xba, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Configuration::WitConfiguration, ____manifestLocalPath) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Configuration::WitConfiguration, ___excludedAssemblies) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Configuration::WitConfiguration, ___relaxedResolution) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Configuration::WitConfiguration, ____client) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Configuration::WitConfiguration) == 0xe0, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Configuration
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Data::Configuration {
// cpp template
template<typename TConfigData>
// Is value type: false
// CS Name: Meta.WitAi.Data.Configuration.WitConfiguration/<>c__39`1<TConfigData>
class CORDL_TYPE WitConfiguration___c__39_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>*  __9;

/// @brief Field <>9__39_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__39_0, put=setStaticF___9__39_0)) ::System::Func_2<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>,bool>*  __9__39_0;

static inline ::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>* New_ctor() ;

/// @brief Method <GetConfigData>b__39_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _GetConfigData_b__39_0(::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*  data) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>,bool>* getStaticF___9__39_0() ;

static inline void setStaticF___9(::Meta::WitAi::Data::Configuration::WitConfiguration___c__39_1<TConfigData>*  value) ;

static inline void setStaticF___9__39_0(::System::Func_2<::UnityW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitConfiguration___c__39_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitConfiguration___c__39_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitConfiguration___c__39_1(WitConfiguration___c__39_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitConfiguration___c__39_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitConfiguration___c__39_1(WitConfiguration___c__39_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25722};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Data::Configuration

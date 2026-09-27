#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/WitWebSocketSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WitWebSocketSettings)
namespace Meta::Voice::Net::WebSockets {
class IWebSocketProvider;
}
namespace Meta::WitAi {
class IWitRequestConfiguration;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketSettings;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::WitWebSocketSettings*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::WitWebSocketSettings*, "Meta.Voice.Net.WebSockets", "WitWebSocketSettings");
// Dependencies System.Object
namespace Meta::Voice::Net::WebSockets {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.WitWebSocketSettings
class CORDL_TYPE WitWebSocketSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AdditionalAuthParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  AdditionalAuthParameters;

 __declspec(property(get=get_Configuration)) ::Meta::WitAi::IWitRequestConfiguration*  Configuration;

 __declspec(property(get=get_ReconnectAttempts, put=set_ReconnectAttempts)) int32_t  ReconnectAttempts;

 __declspec(property(get=get_ReconnectInterval)) float_t  ReconnectInterval;

 __declspec(property(get=get_RequestTimeoutMs)) int32_t  RequestTimeoutMs;

 __declspec(property(get=get_ServerConnectionTimeoutMs)) int32_t  ServerConnectionTimeoutMs;

 __declspec(property(get=get_ServerUrl)) ::StringW  ServerUrl;

 __declspec(property(get=get_VerboseJsonLogging)) bool  VerboseJsonLogging;

 __declspec(property(get=get_WebSocketProvider)) ::Meta::Voice::Net::WebSockets::IWebSocketProvider*  WebSocketProvider;

/// @brief Field <AdditionalAuthParameters>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__AdditionalAuthParameters_k__BackingField, put=__cordl_internal_set__AdditionalAuthParameters_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _AdditionalAuthParameters_k__BackingField;

/// @brief Field <Configuration>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Configuration_k__BackingField, put=__cordl_internal_set__Configuration_k__BackingField)) ::Meta::WitAi::IWitRequestConfiguration*  _Configuration_k__BackingField;

/// @brief Field <Debug>k__BackingField, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__Debug_k__BackingField, put=__cordl_internal_set__Debug_k__BackingField)) bool  _Debug_k__BackingField;

/// @brief Field <ReconnectAttempts>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__ReconnectAttempts_k__BackingField, put=__cordl_internal_set__ReconnectAttempts_k__BackingField)) int32_t  _ReconnectAttempts_k__BackingField;

/// @brief Field <ReconnectInterval>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__ReconnectInterval_k__BackingField, put=__cordl_internal_set__ReconnectInterval_k__BackingField)) float_t  _ReconnectInterval_k__BackingField;

/// @brief Field <ServerConnectionTimeoutMs>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__ServerConnectionTimeoutMs_k__BackingField, put=__cordl_internal_set__ServerConnectionTimeoutMs_k__BackingField)) int32_t  _ServerConnectionTimeoutMs_k__BackingField;

/// @brief Field <ServerUrl>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ServerUrl_k__BackingField, put=__cordl_internal_set__ServerUrl_k__BackingField)) ::StringW  _ServerUrl_k__BackingField;

/// @brief Field <VerboseJsonLogging>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__VerboseJsonLogging_k__BackingField, put=__cordl_internal_set__VerboseJsonLogging_k__BackingField)) bool  _VerboseJsonLogging_k__BackingField;

/// @brief Field <WebSocketProvider>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__WebSocketProvider_k__BackingField, put=__cordl_internal_set__WebSocketProvider_k__BackingField)) ::Meta::Voice::Net::WebSockets::IWebSocketProvider*  _WebSocketProvider_k__BackingField;

static inline ::Meta::Voice::Net::WebSockets::WitWebSocketSettings* New_ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__AdditionalAuthParameters_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__AdditionalAuthParameters_k__BackingField() ;

constexpr ::Meta::WitAi::IWitRequestConfiguration* const& __cordl_internal_get__Configuration_k__BackingField() const;

constexpr ::Meta::WitAi::IWitRequestConfiguration*& __cordl_internal_get__Configuration_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Debug_k__BackingField() const;

constexpr bool& __cordl_internal_get__Debug_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ReconnectAttempts_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ReconnectAttempts_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ReconnectInterval_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ReconnectInterval_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ServerConnectionTimeoutMs_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ServerConnectionTimeoutMs_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ServerUrl_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ServerUrl_k__BackingField() ;

constexpr bool const& __cordl_internal_get__VerboseJsonLogging_k__BackingField() const;

constexpr bool& __cordl_internal_get__VerboseJsonLogging_k__BackingField() ;

constexpr ::Meta::Voice::Net::WebSockets::IWebSocketProvider* const& __cordl_internal_get__WebSocketProvider_k__BackingField() const;

constexpr ::Meta::Voice::Net::WebSockets::IWebSocketProvider*& __cordl_internal_get__WebSocketProvider_k__BackingField() ;

constexpr void __cordl_internal_set__AdditionalAuthParameters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__Configuration_k__BackingField(::Meta::WitAi::IWitRequestConfiguration*  value) ;

constexpr void __cordl_internal_set__Debug_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ReconnectAttempts_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ReconnectInterval_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ServerConnectionTimeoutMs_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ServerUrl_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__VerboseJsonLogging_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__WebSocketProvider_k__BackingField(::Meta::Voice::Net::WebSockets::IWebSocketProvider*  value) ;

/// @brief Method .ctor, addr 0x9e2af80, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration) ;

/// [CompilerGenerated]
/// @brief Method get_AdditionalAuthParameters, addr 0x9e33400, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_AdditionalAuthParameters() ;

/// [CompilerGenerated]
/// @brief Method get_Configuration, addr 0x9e33408, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::IWitRequestConfiguration* get_Configuration() ;

/// [CompilerGenerated]
/// @brief Method get_ReconnectAttempts, addr 0x9e333e8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ReconnectAttempts() ;

/// [CompilerGenerated]
/// @brief Method get_ReconnectInterval, addr 0x9e333f8, size 0x8, virtual false, abstract: false, final false
inline float_t get_ReconnectInterval() ;

/// @brief Method get_RequestTimeoutMs, addr 0x9e2e90c, size 0xa0, virtual false, abstract: false, final false
inline int32_t get_RequestTimeoutMs() ;

/// [CompilerGenerated]
/// @brief Method get_ServerConnectionTimeoutMs, addr 0x9e333e0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ServerConnectionTimeoutMs() ;

/// [CompilerGenerated]
/// @brief Method get_ServerUrl, addr 0x9e333d8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ServerUrl() ;

/// [CompilerGenerated]
/// @brief Method get_VerboseJsonLogging, addr 0x9e333d0, size 0x8, virtual false, abstract: false, final false
inline bool get_VerboseJsonLogging() ;

/// [CompilerGenerated]
/// @brief Method get_WebSocketProvider, addr 0x9e33410, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::Net::WebSockets::IWebSocketProvider* get_WebSocketProvider() ;

/// [CompilerGenerated]
/// @brief Method set_ReconnectAttempts, addr 0x9e333f0, size 0x8, virtual false, abstract: false, final false
inline void set_ReconnectAttempts(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitWebSocketSettings(WitWebSocketSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitWebSocketSettings(WitWebSocketSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25484};

/// [CompilerGenerated]
/// @brief Field <VerboseJsonLogging>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____VerboseJsonLogging_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ServerUrl>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____ServerUrl_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ServerConnectionTimeoutMs>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____ServerConnectionTimeoutMs_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ReconnectAttempts>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____ReconnectAttempts_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ReconnectInterval>k__BackingField, offset: 0x28, size: 0x4, def value: None
 float_t  ____ReconnectInterval_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Debug>k__BackingField, offset: 0x2c, size: 0x1, def value: None
 bool  ____Debug_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AdditionalAuthParameters>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____AdditionalAuthParameters_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Configuration>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::IWitRequestConfiguration*  ____Configuration_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <WebSocketProvider>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::IWebSocketProvider*  ____WebSocketProvider_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketSettings, ____VerboseJsonLogging_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketSettings, ____ServerUrl_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketSettings, ____ServerConnectionTimeoutMs_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketSettings, ____ReconnectAttempts_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketSettings, ____ReconnectInterval_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketSettings, ____Debug_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketSettings, ____AdditionalAuthParameters_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketSettings, ____Configuration_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketSettings, ____WebSocketProvider_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::WebSockets::WitWebSocketSettings) == 0x48, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets

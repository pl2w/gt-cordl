#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSWit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWitRequestSettings_def.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWitVoiceSettings_def.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TTSWit)
namespace GlobalNamespace {
struct TTSWit__IsDownloadedToDisk_d__31;
}
namespace GlobalNamespace {
struct TTSWit__RequestDownloadFromWebSocket_d__29;
}
namespace GlobalNamespace {
struct TTSWit__RequestStreamFromDisk_d__32;
}
namespace GlobalNamespace {
struct TTSWit__RequestStreamFromWebSocket_d__26;
}
namespace GlobalNamespace {
struct TTSWit__RequestStreamFromWeb_d__25;
}
namespace GlobalNamespace {
struct __c__DisplayClass27_0_TTSWit___RequestStreamViaHttp_b__0_d;
}
namespace GlobalNamespace {
struct __c__DisplayClass30_0_TTSWit___RequestDownloadViaHttp_b__0_d;
}
namespace GlobalNamespace {
struct __c__DisplayClass31_0_TTSWit___IsDownloadedToDisk_b__0_d;
}
namespace GlobalNamespace {
struct __c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d;
}
namespace Meta::Voice::Audio {
class IAudioClipStream;
}
namespace Meta::Voice::Net::WebSockets::Requests {
class WitWebSocketTtsRequest;
}
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketRequest;
}
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketAdapter;
}
namespace Meta::WitAi::Data::Configuration {
class WitConfiguration;
}
namespace Meta::WitAi::Interfaces {
class IWitConfigurationProvider;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::Requests {
class WitTTSVRequest;
}
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS::Data {
class TTSDiskCacheSettings;
}
namespace Meta::WitAi::TTS::Data {
class TTSVoiceSettings;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWitVoiceSettings;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass25_0;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass26_0;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass27_0;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass29_0;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass30_0;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass31_0;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass32_0;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass33_0;
}
namespace Meta::WitAi::TTS::Interfaces {
class ITTSVoiceProvider;
}
namespace Meta::WitAi::TTS::Interfaces {
class ITTSWebHandler;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Integrations {
class TTSWit;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass25_0;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass26_0;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass27_0;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass29_0;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass30_0;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass31_0;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass32_0;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass33_0;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Integrations::TTSWit*);
MARK_REF_T(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0*);
MARK_REF_T(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0*);
MARK_REF_T(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0*);
MARK_REF_T(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0*);
MARK_REF_T(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0*);
MARK_REF_T(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0*);
MARK_REF_T(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0*);
MARK_REF_T(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Integrations::TTSWit*, "Meta.WitAi.TTS.Integrations", "TTSWit");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0*, "Meta.WitAi.TTS.Integrations", "TTSWit/<>c__DisplayClass25_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0*, "Meta.WitAi.TTS.Integrations", "TTSWit/<>c__DisplayClass26_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0*, "Meta.WitAi.TTS.Integrations", "TTSWit/<>c__DisplayClass27_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0*, "Meta.WitAi.TTS.Integrations", "TTSWit/<>c__DisplayClass29_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0*, "Meta.WitAi.TTS.Integrations", "TTSWit/<>c__DisplayClass30_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0*, "Meta.WitAi.TTS.Integrations", "TTSWit/<>c__DisplayClass31_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0*, "Meta.WitAi.TTS.Integrations", "TTSWit/<>c__DisplayClass32_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0*, "Meta.WitAi.TTS.Integrations", "TTSWit/<>c__DisplayClass33_0");
// Dependencies Meta.WitAi.TTS.Integrations.TTSWitRequestSettings, Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings, Meta.WitAi.TTS.TTSService
namespace Meta::WitAi::TTS::Integrations {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Integrations.TTSWit
class CORDL_TYPE TTSWit : public ::Meta::WitAi::TTS::TTSService {
public:
// Declarations
using _IsDownloadedToDisk_d__31 = ::GlobalNamespace::TTSWit__IsDownloadedToDisk_d__31;

using _RequestDownloadFromWebSocket_d__29 = ::GlobalNamespace::TTSWit__RequestDownloadFromWebSocket_d__29;

using _RequestStreamFromDisk_d__32 = ::GlobalNamespace::TTSWit__RequestStreamFromDisk_d__32;

using _RequestStreamFromWebSocket_d__26 = ::GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26;

using _RequestStreamFromWeb_d__25 = ::GlobalNamespace::TTSWit__RequestStreamFromWeb_d__25;

using __c__DisplayClass25_0 = ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0;

using __c__DisplayClass26_0 = ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0;

using __c__DisplayClass27_0 = ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0;

using __c__DisplayClass29_0 = ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0;

using __c__DisplayClass30_0 = ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0;

using __c__DisplayClass31_0 = ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0;

using __c__DisplayClass32_0 = ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0;

using __c__DisplayClass33_0 = ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0;

 __declspec(property(get=get_Configuration, put=set_Configuration)) ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  Configuration;

/// @brief Field OnConfigurationUpdated, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConfigurationUpdated, put=__cordl_internal_set_OnConfigurationUpdated)) ::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>*  OnConfigurationUpdated;

 __declspec(property(get=get_PresetVoiceSettings)) ::ArrayW<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>  PresetVoiceSettings;

 __declspec(property(get=get_PresetWitVoiceSettings)) ::ArrayW<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>  PresetWitVoiceSettings;

/// @brief Field RequestSettings, offset 0x68, size 0x20 
 __declspec(property(get=__cordl_internal_get_RequestSettings, put=__cordl_internal_set_RequestSettings)) ::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings  RequestSettings;

 __declspec(property(get=get_VoiceDefaultSettings)) ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  VoiceDefaultSettings;

 __declspec(property(get=get_VoiceProvider)) ::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*  VoiceProvider;

 __declspec(property(get=get_WebHandler)) ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*  WebHandler;

/// @brief Field _httpRequests, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__httpRequests, put=__cordl_internal_set__httpRequests)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Requests::WitTTSVRequest*>*  _httpRequests;

/// @brief Field _presetVoiceSettings, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__presetVoiceSettings, put=__cordl_internal_set__presetVoiceSettings)) ::ArrayW<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>  _presetVoiceSettings;

/// @brief Field _webSocketAdapter, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__webSocketAdapter, put=__cordl_internal_set__webSocketAdapter)) ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>  _webSocketAdapter;

/// @brief Field _webSocketRequests, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__webSocketRequests, put=__cordl_internal_set__webSocketRequests)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>*  _webSocketRequests;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IWitConfigurationProvider"
constexpr operator  ::Meta::WitAi::Interfaces::IWitConfigurationProvider*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider"
constexpr operator  ::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::TTS::Interfaces::ITTSWebHandler"
constexpr operator  ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*() noexcept;

/// @brief Method CancelRequests, addr 0x9e574bc, size 0xe0, virtual true, abstract: false, final true
inline bool CancelRequests(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method CreateClipData, addr 0x9e56760, size 0x150, virtual true, abstract: false, final true
inline ::Meta::WitAi::TTS::Data::TTSClipData* CreateClipData(::StringW  clipId, ::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings) ;

/// @brief Method CreateClipStream, addr 0x9e568b0, size 0x118, virtual false, abstract: false, final false
inline ::Meta::Voice::Audio::IAudioClipStream* CreateClipStream() ;

/// @brief Method CreateHttpRequest, addr 0x9e569c8, size 0x104, virtual false, abstract: false, final false
inline ::Meta::WitAi::Requests::WitTTSVRequest* CreateHttpRequest(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method CreateWebSocketRequest, addr 0x9e56acc, size 0x220, virtual false, abstract: false, final false
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest* CreateWebSocketRequest(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  downloadPath) ;

/// @brief Method DecodeTtsFromJson, addr 0x9e56cec, size 0x144, virtual true, abstract: false, final true
inline bool DecodeTtsFromJson(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::by_ref<::StringW>  textToSpeak, ::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>  voiceSettings) ;

/// @brief Method GetInvalidError, addr 0x9e565fc, size 0xe4, virtual true, abstract: false, final false
inline ::StringW GetInvalidError() ;

/// @brief Method GetWebErrors, addr 0x9e566e0, size 0x80, virtual true, abstract: false, final true
inline ::StringW GetWebErrors(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.Integrations.TTSWit::<IsDownloadedToDisk>d__31))]
/// @brief Method IsDownloadedToDisk, addr 0x9e5785c, size 0x11c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::StringW>* IsDownloadedToDisk(::StringW  diskPath) ;

/// @brief Method IsRequestValid, addr 0x9e57d28, size 0x84, virtual false, abstract: false, final false
inline ::StringW IsRequestValid(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::Meta::WitAi::Data::Configuration::WitConfiguration*  configuration) ;

static inline ::Meta::WitAi::TTS::Integrations::TTSWit* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e56560, size 0x9c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e562d0, size 0xf0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshAudioSystemSettings, addr 0x9e563c0, size 0xd0, virtual false, abstract: false, final false
inline void RefreshAudioSystemSettings() ;

/// @brief Method RefreshWebSocketSettings, addr 0x9e56490, size 0xd0, virtual true, abstract: false, final false
inline void RefreshWebSocketSettings() ;

/// @brief Method RequestDownloadFromWeb, addr 0x9e573d4, size 0xe8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::StringW>* RequestDownloadFromWeb(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  diskPath) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.Integrations.TTSWit::<RequestDownloadFromWebSocket>d__29))]
/// @brief Method RequestDownloadFromWebSocket, addr 0x9e5759c, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* RequestDownloadFromWebSocket(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  diskPath) ;

/// @brief Method RequestDownloadViaHttp, addr 0x9e576d8, size 0x17c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* RequestDownloadViaHttp(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  diskPath) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.Integrations.TTSWit::<RequestStreamFromDisk>d__32))]
/// @brief Method RequestStreamFromDisk, addr 0x9e57978, size 0x150, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::StringW>* RequestStreamFromDisk(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  diskPath, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onReady) ;

/// @brief Method RequestStreamFromDiskViaVRequest, addr 0x9e57ac8, size 0x194, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* RequestStreamFromDiskViaVRequest(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  diskPath) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.Integrations.TTSWit::<RequestStreamFromWeb>d__25))]
/// @brief Method RequestStreamFromWeb, addr 0x9e56ff4, size 0x13c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::StringW>* RequestStreamFromWeb(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onReady) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.Integrations.TTSWit::<RequestStreamFromWebSocket>d__26))]
/// @brief Method RequestStreamFromWebSocket, addr 0x9e57130, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* RequestStreamFromWebSocket(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method RequestStreamViaHttp, addr 0x9e5724c, size 0x180, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* RequestStreamViaHttp(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

constexpr ::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>* const& __cordl_internal_get_OnConfigurationUpdated() const;

constexpr ::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>*& __cordl_internal_get_OnConfigurationUpdated() ;

constexpr ::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings const& __cordl_internal_get_RequestSettings() const;

constexpr ::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings& __cordl_internal_get_RequestSettings() ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Requests::WitTTSVRequest*>* const& __cordl_internal_get__httpRequests() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Requests::WitTTSVRequest*>*& __cordl_internal_get__httpRequests() ;

constexpr ::ArrayW<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*> const& __cordl_internal_get__presetVoiceSettings() const;

constexpr ::ArrayW<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>& __cordl_internal_get__presetVoiceSettings() ;

constexpr ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter> const& __cordl_internal_get__webSocketAdapter() const;

constexpr ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>& __cordl_internal_get__webSocketAdapter() ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>* const& __cordl_internal_get__webSocketRequests() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>*& __cordl_internal_get__webSocketRequests() ;

constexpr void __cordl_internal_set_OnConfigurationUpdated(::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>*  value) ;

constexpr void __cordl_internal_set_RequestSettings(::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings  value) ;

constexpr void __cordl_internal_set__httpRequests(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Requests::WitTTSVRequest*>*  value) ;

constexpr void __cordl_internal_set__presetVoiceSettings(::ArrayW<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>  value) ;

constexpr void __cordl_internal_set__webSocketAdapter(::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>  value) ;

constexpr void __cordl_internal_set__webSocketRequests(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>*  value) ;

/// @brief Method .ctor, addr 0x9e57dac, size 0x10c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnConfigurationUpdated, addr 0x9e56170, size 0xb0, virtual true, abstract: false, final true
inline void add_OnConfigurationUpdated(::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>*  value) ;

/// @brief Method get_Configuration, addr 0x9e56114, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> get_Configuration() ;

/// @brief Method get_PresetVoiceSettings, addr 0x9e57c6c, size 0x68, virtual true, abstract: false, final true
inline ::ArrayW<::Meta::WitAi::TTS::Data::TTSVoiceSettings*> get_PresetVoiceSettings() ;

/// @brief Method get_PresetWitVoiceSettings, addr 0x9e57c64, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*> get_PresetWitVoiceSettings() ;

/// @brief Method get_VoiceDefaultSettings, addr 0x9e57cd4, size 0x54, virtual true, abstract: false, final true
inline ::Meta::WitAi::TTS::Data::TTSVoiceSettings* get_VoiceDefaultSettings() ;

/// @brief Method get_VoiceProvider, addr 0x9e5610c, size 0x4, virtual true, abstract: false, final false
inline ::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider* get_VoiceProvider() ;

/// @brief Method get_WebHandler, addr 0x9e56110, size 0x4, virtual true, abstract: false, final false
inline ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler* get_WebHandler() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IWitConfigurationProvider"
constexpr ::Meta::WitAi::Interfaces::IWitConfigurationProvider* i___Meta__WitAi__Interfaces__IWitConfigurationProvider() noexcept;

/// @brief Convert to "::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider"
constexpr ::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider* i___Meta__WitAi__TTS__Interfaces__ITTSVoiceProvider() noexcept;

/// @brief Convert to "::Meta::WitAi::TTS::Interfaces::ITTSWebHandler"
constexpr ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler* i___Meta__WitAi__TTS__Interfaces__ITTSWebHandler() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnConfigurationUpdated, addr 0x9e56220, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnConfigurationUpdated(::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>*  value) ;

/// @brief Method set_Configuration, addr 0x9e5611c, size 0x54, virtual true, abstract: false, final true
inline void set_Configuration(::Meta::WitAi::Data::Configuration::WitConfiguration*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSWit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSWit", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSWit(TTSWit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSWit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSWit(TTSWit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29132};

/// [CompilerGenerated]
/// @brief Field OnConfigurationUpdated, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>*  ___OnConfigurationUpdated;

/// @brief Field _webSocketAdapter, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>  ____webSocketAdapter;

/// [Header("Web Request Settings")]
/// [FormerlySerializedAs("_settings")]
/// @brief Field RequestSettings, offset: 0x68, size: 0x20, def value: None
 ::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings  ___RequestSettings;

/// @brief Field _httpRequests, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Requests::WitTTSVRequest*>*  ____httpRequests;

/// @brief Field _webSocketRequests, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>*  ____webSocketRequests;

/// [Header("Voice Settings")]
/// [SerializeField]
/// @brief Field _presetVoiceSettings, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>  ____presetVoiceSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit, ___OnConfigurationUpdated) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit, ____webSocketAdapter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit, ___RequestSettings) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit, ____httpRequests) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit, ____webSocketRequests) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit, ____presetVoiceSettings) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Integrations::TTSWit) == 0xa0, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Integrations
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Integrations {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass33_0
class CORDL_TYPE TTSWit___c__DisplayClass33_0 : public ::System::Object {
public:
// Declarations
using __RequestStreamFromDiskViaVRequest_b__0_d = ::GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>  __4__this;

/// @brief Field clipData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

/// @brief Field clipId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipId, put=__cordl_internal_set_clipId)) ::StringW  clipId;

/// @brief Field diskPath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_diskPath, put=__cordl_internal_set_diskPath)) ::StringW  diskPath;

/// @brief Field request, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::Meta::WitAi::Requests::WitTTSVRequest*  request;

static inline ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0* New_ctor() ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.Integrations.TTSWit::<>c__DisplayClass33_0::<<RequestStreamFromDiskViaVRequest>b__0>d))]
/// @brief Method <RequestStreamFromDiskViaVRequest>b__0, addr 0x9e58f54, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* _RequestStreamFromDiskViaVRequest_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_clipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_clipData() ;

constexpr ::StringW const& __cordl_internal_get_clipId() const;

constexpr ::StringW& __cordl_internal_get_clipId() ;

constexpr ::StringW const& __cordl_internal_get_diskPath() const;

constexpr ::StringW& __cordl_internal_get_diskPath() ;

constexpr ::Meta::WitAi::Requests::WitTTSVRequest* const& __cordl_internal_get_request() const;

constexpr ::Meta::WitAi::Requests::WitTTSVRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>  value) ;

constexpr void __cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

constexpr void __cordl_internal_set_clipId(::StringW  value) ;

constexpr void __cordl_internal_set_diskPath(::StringW  value) ;

constexpr void __cordl_internal_set_request(::Meta::WitAi::Requests::WitTTSVRequest*  value) ;

/// @brief Method .ctor, addr 0x9e57c5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSWit___c__DisplayClass33_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSWit___c__DisplayClass33_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSWit___c__DisplayClass33_0(TTSWit___c__DisplayClass33_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSWit___c__DisplayClass33_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSWit___c__DisplayClass33_0(TTSWit___c__DisplayClass33_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29126};

/// @brief Field request, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Requests::WitTTSVRequest*  ___request;

/// @brief Field diskPath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___diskPath;

/// @brief Field clipData, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___clipData;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>  _____4__this;

/// @brief Field clipId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___clipId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0, ___diskPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0, ___clipData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0, ___clipId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Integrations
// [CompilerGenerated]
// Dependencies System.DateTime, System.Object
namespace Meta::WitAi::TTS::Integrations {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass32_0
class CORDL_TYPE TTSWit___c__DisplayClass32_0 : public ::System::Object {
public:
// Declarations
/// @brief Field clipData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

/// @brief Field onReady, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onReady, put=__cordl_internal_set_onReady)) ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onReady;

/// @brief Field startTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) ::System::DateTime  startTime;

static inline ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0* New_ctor() ;

/// @brief Method <RequestStreamFromDisk>b__0, addr 0x9e58e7c, size 0xd8, virtual false, abstract: false, final false
inline void _RequestStreamFromDisk_b__0(::Meta::Voice::Audio::IAudioClipStream*  stream) ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_clipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_clipData() ;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& __cordl_internal_get_onReady() const;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& __cordl_internal_get_onReady() ;

constexpr ::System::DateTime const& __cordl_internal_get_startTime() const;

constexpr ::System::DateTime& __cordl_internal_get_startTime() ;

constexpr void __cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

constexpr void __cordl_internal_set_onReady(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value) ;

constexpr void __cordl_internal_set_startTime(::System::DateTime  value) ;

/// @brief Method .ctor, addr 0x9e58e74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSWit___c__DisplayClass32_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSWit___c__DisplayClass32_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSWit___c__DisplayClass32_0(TTSWit___c__DisplayClass32_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSWit___c__DisplayClass32_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSWit___c__DisplayClass32_0(TTSWit___c__DisplayClass32_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29124};

/// @brief Field clipData, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___clipData;

/// @brief Field startTime, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ___startTime;

/// @brief Field onReady, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  ___onReady;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0, ___clipData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0, ___startTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0, ___onReady) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Integrations
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Integrations {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass31_0
class CORDL_TYPE TTSWit___c__DisplayClass31_0 : public ::System::Object {
public:
// Declarations
using __IsDownloadedToDisk_b__0_d = ::GlobalNamespace::__c__DisplayClass31_0_TTSWit___IsDownloadedToDisk_b__0_d;

/// @brief Field diskPath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_diskPath, put=__cordl_internal_set_diskPath)) ::StringW  diskPath;

/// @brief Field error, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_error, put=__cordl_internal_set_error)) ::StringW  error;

static inline ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0* New_ctor() ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.Integrations.TTSWit::<>c__DisplayClass31_0::<<IsDownloadedToDisk>b__0>d))]
/// @brief Method <IsDownloadedToDisk>b__0, addr 0x9e58a50, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _IsDownloadedToDisk_b__0() ;

constexpr ::StringW const& __cordl_internal_get_diskPath() const;

constexpr ::StringW& __cordl_internal_get_diskPath() ;

constexpr ::StringW const& __cordl_internal_get_error() const;

constexpr ::StringW& __cordl_internal_get_error() ;

constexpr void __cordl_internal_set_diskPath(::StringW  value) ;

constexpr void __cordl_internal_set_error(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e58a48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSWit___c__DisplayClass31_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSWit___c__DisplayClass31_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSWit___c__DisplayClass31_0(TTSWit___c__DisplayClass31_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSWit___c__DisplayClass31_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSWit___c__DisplayClass31_0(TTSWit___c__DisplayClass31_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29123};

/// @brief Field diskPath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___diskPath;

/// @brief Field error, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0, ___diskPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0, ___error) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Integrations
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Integrations {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass30_0
class CORDL_TYPE TTSWit___c__DisplayClass30_0 : public ::System::Object {
public:
// Declarations
using __RequestDownloadViaHttp_b__0_d = ::GlobalNamespace::__c__DisplayClass30_0_TTSWit___RequestDownloadViaHttp_b__0_d;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>  __4__this;

/// @brief Field clipId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipId, put=__cordl_internal_set_clipId)) ::StringW  clipId;

/// @brief Field diskPath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_diskPath, put=__cordl_internal_set_diskPath)) ::StringW  diskPath;

/// @brief Field request, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::Meta::WitAi::Requests::WitTTSVRequest*  request;

static inline ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0* New_ctor() ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.Integrations.TTSWit::<>c__DisplayClass30_0::<<RequestDownloadViaHttp>b__0>d))]
/// @brief Method <RequestDownloadViaHttp>b__0, addr 0x9e585f0, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* _RequestDownloadViaHttp_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_clipId() const;

constexpr ::StringW& __cordl_internal_get_clipId() ;

constexpr ::StringW const& __cordl_internal_get_diskPath() const;

constexpr ::StringW& __cordl_internal_get_diskPath() ;

constexpr ::Meta::WitAi::Requests::WitTTSVRequest* const& __cordl_internal_get_request() const;

constexpr ::Meta::WitAi::Requests::WitTTSVRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>  value) ;

constexpr void __cordl_internal_set_clipId(::StringW  value) ;

constexpr void __cordl_internal_set_diskPath(::StringW  value) ;

constexpr void __cordl_internal_set_request(::Meta::WitAi::Requests::WitTTSVRequest*  value) ;

/// @brief Method .ctor, addr 0x9e57854, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSWit___c__DisplayClass30_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSWit___c__DisplayClass30_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSWit___c__DisplayClass30_0(TTSWit___c__DisplayClass30_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSWit___c__DisplayClass30_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSWit___c__DisplayClass30_0(TTSWit___c__DisplayClass30_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29121};

/// @brief Field request, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Requests::WitTTSVRequest*  ___request;

/// @brief Field diskPath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___diskPath;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>  _____4__this;

/// @brief Field clipId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___clipId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0, ___diskPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0, ___clipId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Integrations
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Integrations {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass29_0
class CORDL_TYPE TTSWit___c__DisplayClass29_0 : public ::System::Object {
public:
// Declarations
/// @brief Field completion, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_completion, put=__cordl_internal_set_completion)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  completion;

static inline ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0* New_ctor() ;

/// @brief Method <RequestDownloadFromWebSocket>b__0, addr 0x9e5859c, size 0x54, virtual false, abstract: false, final false
inline void _RequestDownloadFromWebSocket_b__0(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  r) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_completion() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_completion() ;

constexpr void __cordl_internal_set_completion(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x9e58594, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSWit___c__DisplayClass29_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSWit___c__DisplayClass29_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSWit___c__DisplayClass29_0(TTSWit___c__DisplayClass29_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSWit___c__DisplayClass29_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSWit___c__DisplayClass29_0(TTSWit___c__DisplayClass29_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29119};

/// @brief Field completion, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___completion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0, ___completion) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Integrations
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Integrations {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass27_0
class CORDL_TYPE TTSWit___c__DisplayClass27_0 : public ::System::Object {
public:
// Declarations
using __RequestStreamViaHttp_b__0_d = ::GlobalNamespace::__c__DisplayClass27_0_TTSWit___RequestStreamViaHttp_b__0_d;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>  __4__this;

/// @brief Field clipData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

/// @brief Field clipId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipId, put=__cordl_internal_set_clipId)) ::StringW  clipId;

/// @brief Field request, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::Meta::WitAi::Requests::WitTTSVRequest*  request;

static inline ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0* New_ctor() ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.Integrations.TTSWit::<>c__DisplayClass27_0::<<RequestStreamViaHttp>b__0>d))]
/// @brief Method <RequestStreamViaHttp>b__0, addr 0x9e57ff4, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* _RequestStreamViaHttp_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_clipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_clipData() ;

constexpr ::StringW const& __cordl_internal_get_clipId() const;

constexpr ::StringW& __cordl_internal_get_clipId() ;

constexpr ::Meta::WitAi::Requests::WitTTSVRequest* const& __cordl_internal_get_request() const;

constexpr ::Meta::WitAi::Requests::WitTTSVRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>  value) ;

constexpr void __cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

constexpr void __cordl_internal_set_clipId(::StringW  value) ;

constexpr void __cordl_internal_set_request(::Meta::WitAi::Requests::WitTTSVRequest*  value) ;

/// @brief Method .ctor, addr 0x9e573cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSWit___c__DisplayClass27_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSWit___c__DisplayClass27_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSWit___c__DisplayClass27_0(TTSWit___c__DisplayClass27_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSWit___c__DisplayClass27_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSWit___c__DisplayClass27_0(TTSWit___c__DisplayClass27_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29118};

/// @brief Field request, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Requests::WitTTSVRequest*  ___request;

/// @brief Field clipData, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___clipData;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>  _____4__this;

/// @brief Field clipId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___clipId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0, ___clipData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0, ___clipId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Integrations
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Integrations {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass26_0
class CORDL_TYPE TTSWit___c__DisplayClass26_0 : public ::System::Object {
public:
// Declarations
/// @brief Field completion, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_completion, put=__cordl_internal_set_completion)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  completion;

static inline ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0* New_ctor() ;

/// @brief Method <RequestStreamFromWebSocket>b__0, addr 0x9e57fa0, size 0x54, virtual false, abstract: false, final false
inline void _RequestStreamFromWebSocket_b__0(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  r) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_completion() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_completion() ;

constexpr void __cordl_internal_set_completion(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x9e57f98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSWit___c__DisplayClass26_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSWit___c__DisplayClass26_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSWit___c__DisplayClass26_0(TTSWit___c__DisplayClass26_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSWit___c__DisplayClass26_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSWit___c__DisplayClass26_0(TTSWit___c__DisplayClass26_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29116};

/// @brief Field completion, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___completion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0, ___completion) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Integrations
// [CompilerGenerated]
// Dependencies System.DateTime, System.Object
namespace Meta::WitAi::TTS::Integrations {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0
class CORDL_TYPE TTSWit___c__DisplayClass25_0 : public ::System::Object {
public:
// Declarations
/// @brief Field clipData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

/// @brief Field onReady, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onReady, put=__cordl_internal_set_onReady)) ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onReady;

/// @brief Field startTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) ::System::DateTime  startTime;

static inline ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0* New_ctor() ;

/// @brief Method <RequestStreamFromWeb>b__0, addr 0x9e57ec0, size 0xd8, virtual false, abstract: false, final false
inline void _RequestStreamFromWeb_b__0(::Meta::Voice::Audio::IAudioClipStream*  stream) ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_clipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_clipData() ;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& __cordl_internal_get_onReady() const;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& __cordl_internal_get_onReady() ;

constexpr ::System::DateTime const& __cordl_internal_get_startTime() const;

constexpr ::System::DateTime& __cordl_internal_get_startTime() ;

constexpr void __cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

constexpr void __cordl_internal_set_onReady(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value) ;

constexpr void __cordl_internal_set_startTime(::System::DateTime  value) ;

/// @brief Method .ctor, addr 0x9e57eb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSWit___c__DisplayClass25_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSWit___c__DisplayClass25_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSWit___c__DisplayClass25_0(TTSWit___c__DisplayClass25_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSWit___c__DisplayClass25_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSWit___c__DisplayClass25_0(TTSWit___c__DisplayClass25_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29115};

/// @brief Field clipData, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___clipData;

/// @brief Field startTime, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ___startTime;

/// @brief Field onReady, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  ___onReady;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0, ___clipData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0, ___startTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0, ___onReady) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Integrations

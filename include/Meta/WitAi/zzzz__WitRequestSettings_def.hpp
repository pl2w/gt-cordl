#pragma once
// IWYU pragma private; include "Meta/WitAi/WitRequestSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitRequestSettings)
namespace Meta::Voice::Audio::Decoding {
class AudioJsonDecodeDelegate;
}
namespace Meta::Voice::Audio::Decoding {
class IAudioDecoder;
}
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi {
class IWitRequestConfiguration;
}
namespace Meta::WitAi {
struct TTSWitAudioType;
}
namespace Meta::WitAi {
class WitRequestSettings___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class UriBuilder;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Meta::WitAi {
class WitRequestSettings;
}
namespace Meta::WitAi {
class WitRequestSettings___c;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::WitRequestSettings*);
MARK_REF_T(::Meta::WitAi::WitRequestSettings___c*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitRequestSettings*, "Meta.WitAi", "WitRequestSettings");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitRequestSettings___c*, "Meta.WitAi", "WitRequestSettings/<>c");
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitRequestSettings
class CORDL_TYPE WitRequestSettings : public ::System::Object {
public:
// Declarations
using __c = ::Meta::WitAi::WitRequestSettings___c;

/// @brief Field OnProvideCustomHeaders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnProvideCustomHeaders, put=setStaticF_OnProvideCustomHeaders)) ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  OnProvideCustomHeaders;

/// @brief Field OnProvideCustomUri, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnProvideCustomUri, put=setStaticF_OnProvideCustomUri)) ::System::Func_2<::System::UriBuilder*,::System::UriBuilder*>*  OnProvideCustomUri;

/// @brief Field OnProvideCustomUserAgent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnProvideCustomUserAgent, put=setStaticF_OnProvideCustomUserAgent)) ::System::Action_1<::System::Text::StringBuilder*>*  OnProvideCustomUserAgent;

/// @brief Field _appIdentifier, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__appIdentifier, put=setStaticF__appIdentifier)) ::StringW  _appIdentifier;

/// @brief Field _deviceModel, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__deviceModel, put=setStaticF__deviceModel)) ::StringW  _deviceModel;

/// @brief Field _localClientUserId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__localClientUserId, put=setStaticF__localClientUserId)) ::StringW  _localClientUserId;

/// @brief Field _operatingSystem, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__operatingSystem, put=setStaticF__operatingSystem)) ::StringW  _operatingSystem;

/// @brief Field _unityVersion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__unityVersion, put=setStaticF__unityVersion)) ::StringW  _unityVersion;

/// @brief Method CanStreamAudio, addr 0x9e7432c, size 0xc, virtual false, abstract: false, final false
static inline bool CanStreamAudio(::Meta::WitAi::TTSWitAudioType  witAudioType) ;

/// @brief Method GetAudioExtension, addr 0x9e6a9b8, size 0x128, virtual false, abstract: false, final false
static inline ::StringW GetAudioExtension(::Meta::WitAi::TTSWitAudioType  witAudioType, bool  includeEvents) ;

/// @brief Method GetAudioMimeType, addr 0x9e69ed0, size 0xdc, virtual false, abstract: false, final false
static inline ::StringW GetAudioMimeType(::Meta::WitAi::TTSWitAudioType  witAudioType) ;

/// @brief Method GetAuthorizationHeader, addr 0x9e73dbc, size 0x124, virtual false, abstract: false, final false
static inline ::StringW GetAuthorizationHeader(::Meta::WitAi::IWitRequestConfiguration*  configuration, bool  useServerToken) ;

/// @brief Method GetByteString, addr 0x9e6bad8, size 0x8, virtual false, abstract: false, final false
static inline ::StringW GetByteString(::ArrayW<uint8_t>  bytes, int32_t  start, int32_t  length) ;

/// @brief Method GetHeaders, addr 0x9e73aa0, size 0x31c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GetHeaders(::Meta::WitAi::IWitRequestConfiguration*  configuration, ::Meta::WitAi::Configuration::WitRequestOptions*  options, bool  useServerToken) ;

/// @brief Method GetTtsAudioDecoder, addr 0x9e69d5c, size 0x174, virtual false, abstract: false, final false
static inline ::Meta::Voice::Audio::Decoding::IAudioDecoder* GetTtsAudioDecoder(::Meta::WitAi::TTSWitAudioType  witAudioType) ;

/// @brief Method GetTtsAudioDecoder, addr 0x9e74338, size 0x78, virtual false, abstract: false, final false
static inline ::Meta::Voice::Audio::Decoding::IAudioDecoder* GetTtsAudioDecoder(::Meta::WitAi::TTSWitAudioType  witAudioType, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  onEventsDecoded) ;

/// @brief Method GetTtsErrors, addr 0x9e74210, size 0x11c, virtual false, abstract: false, final false
static inline ::StringW GetTtsErrors(::StringW  textToSpeak, ::Meta::WitAi::IWitRequestConfiguration*  configuration) ;

/// @brief Method GetUri, addr 0x9e733d0, size 0x6d0, virtual false, abstract: false, final false
static inline ::System::Uri* GetUri(::Meta::WitAi::IWitRequestConfiguration*  configuration, ::StringW  path, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  queryParams) ;

/// @brief Method GetUserAgentHeader, addr 0x9e73ee0, size 0x330, virtual false, abstract: false, final false
static inline ::StringW GetUserAgentHeader(::Meta::WitAi::IWitRequestConfiguration*  configuration) ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method Init, addr 0x9e73080, size 0x180, virtual false, abstract: false, final false
static inline void Init() ;

static inline ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* getStaticF_OnProvideCustomHeaders() ;

static inline ::System::Func_2<::System::UriBuilder*,::System::UriBuilder*>* getStaticF_OnProvideCustomUri() ;

static inline ::System::Action_1<::System::Text::StringBuilder*>* getStaticF_OnProvideCustomUserAgent() ;

static inline ::StringW getStaticF__appIdentifier() ;

static inline ::StringW getStaticF__deviceModel() ;

static inline ::StringW getStaticF__localClientUserId() ;

static inline ::StringW getStaticF__operatingSystem() ;

static inline ::StringW getStaticF__unityVersion() ;

/// @brief Method get_LocalClientUserId, addr 0x9e73388, size 0x48, virtual false, abstract: false, final false
static inline ::StringW get_LocalClientUserId() ;

static inline void setStaticF_OnProvideCustomHeaders(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  value) ;

static inline void setStaticF_OnProvideCustomUri(::System::Func_2<::System::UriBuilder*,::System::UriBuilder*>*  value) ;

static inline void setStaticF_OnProvideCustomUserAgent(::System::Action_1<::System::Text::StringBuilder*>*  value) ;

static inline void setStaticF__appIdentifier(::StringW  value) ;

static inline void setStaticF__deviceModel(::StringW  value) ;

static inline void setStaticF__localClientUserId(::StringW  value) ;

static inline void setStaticF__operatingSystem(::StringW  value) ;

static inline void setStaticF__unityVersion(::StringW  value) ;

/// @brief Method set_LocalClientUserId, addr 0x9e73200, size 0x188, virtual false, abstract: false, final false
static inline void set_LocalClientUserId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitRequestSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitRequestSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitRequestSettings(WitRequestSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitRequestSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitRequestSettings(WitRequestSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25537};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::WitRequestSettings) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitRequestSettings/<>c
class CORDL_TYPE WitRequestSettings___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Meta::WitAi::WitRequestSettings___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::System::Action*  __9__10_0;

static inline ::Meta::WitAi::WitRequestSettings___c* New_ctor() ;

/// @brief Method .ctor, addr 0x9e74418, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <set_LocalClientUserId>b__10_0, addr 0x9e74420, size 0x6c, virtual false, abstract: false, final false
inline void _set_LocalClientUserId_b__10_0() ;

static inline ::Meta::WitAi::WitRequestSettings___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__10_0() ;

static inline void setStaticF___9(::Meta::WitAi::WitRequestSettings___c*  value) ;

static inline void setStaticF___9__10_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitRequestSettings___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitRequestSettings___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitRequestSettings___c(WitRequestSettings___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitRequestSettings___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitRequestSettings___c(WitRequestSettings___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25536};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::WitRequestSettings___c) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi

#pragma once
// IWYU pragma private; include "PlayFab/PlayFabSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayFabSettings)
namespace GlobalNamespace {
class PlayFabSharedSettings;
}
namespace PlayFab {
class PlayFabApiSettings;
}
namespace PlayFab {
class PlayFabAuthenticationContext;
}
namespace PlayFab {
struct PlayFabLogLevel;
}
namespace PlayFab {
class PlayFabSettings___c;
}
namespace PlayFab {
struct WebRequestType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab {
class PlayFabSettings;
}
namespace PlayFab {
class PlayFabSettings___c;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabSettings*);
MARK_REF_T(::PlayFab::PlayFabSettings___c*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabSettings*, "PlayFab", "PlayFabSettings");
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabSettings___c*, "PlayFab", "PlayFabSettings/<>c");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabSettings
class CORDL_TYPE PlayFabSettings : public ::System::Object {
public:
// Declarations
using __c = ::PlayFab::PlayFabSettings___c;

/// @brief Field _localApiServer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__localApiServer, put=setStaticF__localApiServer)) ::StringW  _localApiServer;

/// @brief Field _playFabShared, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__playFabShared, put=setStaticF__playFabShared)) ::UnityW<::GlobalNamespace::PlayFabSharedSettings>  _playFabShared;

/// @brief Field staticPlayer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_staticPlayer, put=setStaticF_staticPlayer)) ::PlayFab::PlayFabAuthenticationContext*  staticPlayer;

/// @brief Field staticSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_staticSettings, put=setStaticF_staticSettings)) ::PlayFab::PlayFabApiSettings*  staticSettings;

/// @brief Method GetFullUrl, addr 0xa7dc1ec, size 0x4dc, virtual false, abstract: false, final false
static inline ::StringW GetFullUrl(::StringW  apiCall, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  getParams, ::PlayFab::PlayFabApiSettings*  apiSettings) ;

/// @brief Method GetSharedSettingsObjectPrivate, addr 0xa7ddbd4, size 0x120, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::PlayFabSharedSettings> GetSharedSettingsObjectPrivate() ;

static inline ::StringW getStaticF__localApiServer() ;

static inline ::UnityW<::GlobalNamespace::PlayFabSharedSettings> getStaticF__playFabShared() ;

static inline ::PlayFab::PlayFabAuthenticationContext* getStaticF_staticPlayer() ;

static inline ::PlayFab::PlayFabApiSettings* getStaticF_staticSettings() ;

/// @brief Method get_CompressApiData, addr 0xa7de438, size 0x5c, virtual false, abstract: false, final false
static inline bool get_CompressApiData() ;

/// @brief Method get_DeviceUniqueIdentifier, addr 0xa7dd5b8, size 0x27c, virtual false, abstract: false, final false
static inline ::StringW get_DeviceUniqueIdentifier() ;

/// @brief Method get_DisableAdvertising, addr 0xa7ddea4, size 0x6c, virtual false, abstract: false, final false
static inline bool get_DisableAdvertising() ;

/// @brief Method get_DisableDeviceInfo, addr 0xa7ddf84, size 0x6c, virtual false, abstract: false, final false
static inline bool get_DisableDeviceInfo() ;

/// @brief Method get_DisableFocusTimeCollection, addr 0xa7de064, size 0x6c, virtual false, abstract: false, final false
static inline bool get_DisableFocusTimeCollection() ;

/// @brief Method get_EnableRealTimeLogging, addr 0xa7de674, size 0x5c, virtual false, abstract: false, final false
static inline bool get_EnableRealTimeLogging() ;

/// @brief Method get_LocalApiServer, addr 0xa7c1d20, size 0xa8, virtual false, abstract: false, final false
static inline ::StringW get_LocalApiServer() ;

/// @brief Method get_LogCapLimit, addr 0xa7de734, size 0x5c, virtual false, abstract: false, final false
static inline int32_t get_LogCapLimit() ;

/// @brief Method get_LogLevel, addr 0xa7de144, size 0x5c, virtual false, abstract: false, final false
static inline ::PlayFab::PlayFabLogLevel get_LogLevel() ;

/// @brief Method get_LoggerHost, addr 0xa7de4f8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW get_LoggerHost() ;

/// @brief Method get_LoggerPort, addr 0xa7de5b8, size 0x5c, virtual false, abstract: false, final false
static inline int32_t get_LoggerPort() ;

/// @brief Method get_PlayFabSharedPrivate, addr 0xa7ddaf4, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::PlayFabSharedSettings> get_PlayFabSharedPrivate() ;

/// @brief Method get_RequestKeepAlive, addr 0xa7de378, size 0x5c, virtual false, abstract: false, final false
static inline bool get_RequestKeepAlive() ;

/// @brief Method get_RequestTimeout, addr 0xa7de2bc, size 0x5c, virtual false, abstract: false, final false
static inline int32_t get_RequestTimeout() ;

/// @brief Method get_RequestType, addr 0xa7de200, size 0x5c, virtual false, abstract: false, final false
static inline ::PlayFab::WebRequestType get_RequestType() ;

/// @brief Method get_TitleId, addr 0xa7ddcf4, size 0x68, virtual false, abstract: false, final false
static inline ::StringW get_TitleId() ;

/// @brief Method get_VerticalName, addr 0xa7dddcc, size 0x68, virtual false, abstract: false, final false
static inline ::StringW get_VerticalName() ;

static inline void setStaticF__localApiServer(::StringW  value) ;

static inline void setStaticF__playFabShared(::UnityW<::GlobalNamespace::PlayFabSharedSettings>  value) ;

static inline void setStaticF_staticPlayer(::PlayFab::PlayFabAuthenticationContext*  value) ;

static inline void setStaticF_staticSettings(::PlayFab::PlayFabApiSettings*  value) ;

/// @brief Method set_CompressApiData, addr 0xa7de494, size 0x64, virtual false, abstract: false, final false
static inline void set_CompressApiData(bool  value) ;

/// @brief Method set_DisableAdvertising, addr 0xa7ddf10, size 0x74, virtual false, abstract: false, final false
static inline void set_DisableAdvertising(bool  value) ;

/// @brief Method set_DisableDeviceInfo, addr 0xa7ddff0, size 0x74, virtual false, abstract: false, final false
static inline void set_DisableDeviceInfo(bool  value) ;

/// @brief Method set_DisableFocusTimeCollection, addr 0xa7de0d0, size 0x74, virtual false, abstract: false, final false
static inline void set_DisableFocusTimeCollection(bool  value) ;

/// @brief Method set_EnableRealTimeLogging, addr 0xa7de6d0, size 0x64, virtual false, abstract: false, final false
static inline void set_EnableRealTimeLogging(bool  value) ;

/// @brief Method set_LocalApiServer, addr 0xa7de7f0, size 0x60, virtual false, abstract: false, final false
static inline void set_LocalApiServer(::StringW  value) ;

/// @brief Method set_LogCapLimit, addr 0xa7de790, size 0x60, virtual false, abstract: false, final false
static inline void set_LogCapLimit(int32_t  value) ;

/// @brief Method set_LogLevel, addr 0xa7de1a0, size 0x60, virtual false, abstract: false, final false
static inline void set_LogLevel(::PlayFab::PlayFabLogLevel  value) ;

/// @brief Method set_LoggerHost, addr 0xa7de554, size 0x64, virtual false, abstract: false, final false
static inline void set_LoggerHost(::StringW  value) ;

/// @brief Method set_LoggerPort, addr 0xa7de614, size 0x60, virtual false, abstract: false, final false
static inline void set_LoggerPort(int32_t  value) ;

/// @brief Method set_RequestKeepAlive, addr 0xa7de3d4, size 0x64, virtual false, abstract: false, final false
static inline void set_RequestKeepAlive(bool  value) ;

/// @brief Method set_RequestTimeout, addr 0xa7de318, size 0x60, virtual false, abstract: false, final false
static inline void set_RequestTimeout(int32_t  value) ;

/// @brief Method set_RequestType, addr 0xa7de25c, size 0x60, virtual false, abstract: false, final false
static inline void set_RequestType(::PlayFab::WebRequestType  value) ;

/// @brief Method set_TitleId, addr 0xa7ddd5c, size 0x70, virtual false, abstract: false, final false
static inline void set_TitleId(::StringW  value) ;

/// @brief Method set_VerticalName, addr 0xa7dde34, size 0x70, virtual false, abstract: false, final false
static inline void set_VerticalName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabSettings(PlayFabSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabSettings(PlayFabSettings const& ) = delete;

/// @brief Field AD_TYPE_ANDROID_ID offset 0xffffffff size 0x8
static constexpr ::ConstString  AD_TYPE_ANDROID_ID{u"Adid"};

/// @brief Field AD_TYPE_IDFA offset 0xffffffff size 0x8
static constexpr ::ConstString  AD_TYPE_IDFA{u"Idfa"};

/// @brief Field BuildIdentifier offset 0xffffffff size 0x8
static constexpr ::ConstString  BuildIdentifier{u"jbuild_unitysdk__sdk-unity-3-slave_0"};

/// @brief Field DefaultPlayFabApiUrl offset 0xffffffff size 0x8
static constexpr ::ConstString  DefaultPlayFabApiUrl{u"playfabapi.com"};

/// @brief Field SdkVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  SdkVersion{u"2.87.200602"};

/// @brief Field VersionString offset 0xffffffff size 0x8
static constexpr ::ConstString  VersionString{u"UnitySDK-2.87.200602"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19524};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::PlayFabSettings) == 0x10, "Size mismatch!");

} // namespace end def PlayFab
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabSettings/<>c
class CORDL_TYPE PlayFabSettings___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayFab::PlayFabSettings___c*  __9;

static inline ::PlayFab::PlayFabSettings___c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0xa7de8c0, size 0x4c, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayFabSharedSettings> __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0xa7de8b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayFab::PlayFabSettings___c* getStaticF___9() ;

static inline void setStaticF___9(::PlayFab::PlayFabSettings___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabSettings___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabSettings___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabSettings___c(PlayFabSettings___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabSettings___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabSettings___c(PlayFabSettings___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19523};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::PlayFabSettings___c) == 0x10, "Size mismatch!");

} // namespace end def PlayFab

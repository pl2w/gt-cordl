#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayFabAuthenticatorSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabAuthenticatorSettings)
// Forward declare root types
namespace GlobalNamespace {
class PlayFabAuthenticatorSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayFabAuthenticatorSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayFabAuthenticatorSettings*, "", "PlayFabAuthenticatorSettings");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayFabAuthenticatorSettings
class CORDL_TYPE PlayFabAuthenticatorSettings : public ::System::Object {
public:
// Declarations
/// @brief Field AuthApiBaseUrl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AuthApiBaseUrl, put=setStaticF_AuthApiBaseUrl)) ::StringW  AuthApiBaseUrl;

/// @brief Field DailyQuestsApiBaseUrl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DailyQuestsApiBaseUrl, put=setStaticF_DailyQuestsApiBaseUrl)) ::StringW  DailyQuestsApiBaseUrl;

/// @brief Field FriendApiBaseUrl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FriendApiBaseUrl, put=setStaticF_FriendApiBaseUrl)) ::StringW  FriendApiBaseUrl;

/// @brief Field HpPromoApiBaseUrl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HpPromoApiBaseUrl, put=setStaticF_HpPromoApiBaseUrl)) ::StringW  HpPromoApiBaseUrl;

/// @brief Field IapApiBaseUrl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_IapApiBaseUrl, put=setStaticF_IapApiBaseUrl)) ::StringW  IapApiBaseUrl;

/// @brief Field KidApiBaseUrl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_KidApiBaseUrl, put=setStaticF_KidApiBaseUrl)) ::StringW  KidApiBaseUrl;

/// @brief Field MmrApiBaseUrl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MmrApiBaseUrl, put=setStaticF_MmrApiBaseUrl)) ::StringW  MmrApiBaseUrl;

/// @brief Field ModerationApiBaseUrl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ModerationApiBaseUrl, put=setStaticF_ModerationApiBaseUrl)) ::StringW  ModerationApiBaseUrl;

/// @brief Field ProgressionApiBaseUrl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ProgressionApiBaseUrl, put=setStaticF_ProgressionApiBaseUrl)) ::StringW  ProgressionApiBaseUrl;

/// @brief Field TitleDataApiBaseUrl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TitleDataApiBaseUrl, put=setStaticF_TitleDataApiBaseUrl)) ::StringW  TitleDataApiBaseUrl;

/// @brief Field TitleId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TitleId, put=setStaticF_TitleId)) ::StringW  TitleId;

/// @brief Field VotingApiBaseUrl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VotingApiBaseUrl, put=setStaticF_VotingApiBaseUrl)) ::StringW  VotingApiBaseUrl;

/// @brief Method Load, addr 0x5ab20c8, size 0x174, virtual false, abstract: false, final false
static inline void Load(::StringW  path) ;

static inline ::GlobalNamespace::PlayFabAuthenticatorSettings* New_ctor() ;

/// @brief Method .ctor, addr 0x5ab223c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_AuthApiBaseUrl() ;

static inline ::StringW getStaticF_DailyQuestsApiBaseUrl() ;

static inline ::StringW getStaticF_FriendApiBaseUrl() ;

static inline ::StringW getStaticF_HpPromoApiBaseUrl() ;

static inline ::StringW getStaticF_IapApiBaseUrl() ;

static inline ::StringW getStaticF_KidApiBaseUrl() ;

static inline ::StringW getStaticF_MmrApiBaseUrl() ;

static inline ::StringW getStaticF_ModerationApiBaseUrl() ;

static inline ::StringW getStaticF_ProgressionApiBaseUrl() ;

static inline ::StringW getStaticF_TitleDataApiBaseUrl() ;

static inline ::StringW getStaticF_TitleId() ;

static inline ::StringW getStaticF_VotingApiBaseUrl() ;

static inline void setStaticF_AuthApiBaseUrl(::StringW  value) ;

static inline void setStaticF_DailyQuestsApiBaseUrl(::StringW  value) ;

static inline void setStaticF_FriendApiBaseUrl(::StringW  value) ;

static inline void setStaticF_HpPromoApiBaseUrl(::StringW  value) ;

static inline void setStaticF_IapApiBaseUrl(::StringW  value) ;

static inline void setStaticF_KidApiBaseUrl(::StringW  value) ;

static inline void setStaticF_MmrApiBaseUrl(::StringW  value) ;

static inline void setStaticF_ModerationApiBaseUrl(::StringW  value) ;

static inline void setStaticF_ProgressionApiBaseUrl(::StringW  value) ;

static inline void setStaticF_TitleDataApiBaseUrl(::StringW  value) ;

static inline void setStaticF_TitleId(::StringW  value) ;

static inline void setStaticF_VotingApiBaseUrl(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabAuthenticatorSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticatorSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticatorSettings(PlayFabAuthenticatorSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticatorSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticatorSettings(PlayFabAuthenticatorSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3293};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PlayFabAuthenticatorSettings) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

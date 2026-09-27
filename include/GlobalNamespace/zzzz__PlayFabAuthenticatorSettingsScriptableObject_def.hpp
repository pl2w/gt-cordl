#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayFabAuthenticatorSettingsScriptableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabAuthenticatorSettingsScriptableObject)
// Forward declare root types
namespace GlobalNamespace {
class PlayFabAuthenticatorSettingsScriptableObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayFabAuthenticatorSettingsScriptableObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayFabAuthenticatorSettingsScriptableObject*, "", "PlayFabAuthenticatorSettingsScriptableObject");
// [CreateAssetMenu(fileName = "PlayFabAuthenticatorSettings", menuName = "ScriptableObjects/PlayFabAuthenticatorSettings")]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayFabAuthenticatorSettingsScriptableObject
class CORDL_TYPE PlayFabAuthenticatorSettingsScriptableObject : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field AuthApiBaseUrl, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AuthApiBaseUrl, put=__cordl_internal_set_AuthApiBaseUrl)) ::StringW  AuthApiBaseUrl;

/// @brief Field DailyQuestsApiBaseUrl, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DailyQuestsApiBaseUrl, put=__cordl_internal_set_DailyQuestsApiBaseUrl)) ::StringW  DailyQuestsApiBaseUrl;

/// @brief Field FriendApiBaseUrl, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_FriendApiBaseUrl, put=__cordl_internal_set_FriendApiBaseUrl)) ::StringW  FriendApiBaseUrl;

/// @brief Field HpPromoApiBaseUrl, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_HpPromoApiBaseUrl, put=__cordl_internal_set_HpPromoApiBaseUrl)) ::StringW  HpPromoApiBaseUrl;

/// @brief Field IapApiBaseUrl, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_IapApiBaseUrl, put=__cordl_internal_set_IapApiBaseUrl)) ::StringW  IapApiBaseUrl;

/// @brief Field KidApiBaseUrl, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_KidApiBaseUrl, put=__cordl_internal_set_KidApiBaseUrl)) ::StringW  KidApiBaseUrl;

/// @brief Field MmrApiBaseUrl, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_MmrApiBaseUrl, put=__cordl_internal_set_MmrApiBaseUrl)) ::StringW  MmrApiBaseUrl;

/// @brief Field ModerationApiBaseUrl, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ModerationApiBaseUrl, put=__cordl_internal_set_ModerationApiBaseUrl)) ::StringW  ModerationApiBaseUrl;

/// @brief Field ProgressionApiBaseUrl, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProgressionApiBaseUrl, put=__cordl_internal_set_ProgressionApiBaseUrl)) ::StringW  ProgressionApiBaseUrl;

/// @brief Field TitleDataApiBaseUrl, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleDataApiBaseUrl, put=__cordl_internal_set_TitleDataApiBaseUrl)) ::StringW  TitleDataApiBaseUrl;

/// @brief Field TitleId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

/// @brief Field VotingApiBaseUrl, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_VotingApiBaseUrl, put=__cordl_internal_set_VotingApiBaseUrl)) ::StringW  VotingApiBaseUrl;

static inline ::GlobalNamespace::PlayFabAuthenticatorSettingsScriptableObject* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AuthApiBaseUrl() const;

constexpr ::StringW& __cordl_internal_get_AuthApiBaseUrl() ;

constexpr ::StringW const& __cordl_internal_get_DailyQuestsApiBaseUrl() const;

constexpr ::StringW& __cordl_internal_get_DailyQuestsApiBaseUrl() ;

constexpr ::StringW const& __cordl_internal_get_FriendApiBaseUrl() const;

constexpr ::StringW& __cordl_internal_get_FriendApiBaseUrl() ;

constexpr ::StringW const& __cordl_internal_get_HpPromoApiBaseUrl() const;

constexpr ::StringW& __cordl_internal_get_HpPromoApiBaseUrl() ;

constexpr ::StringW const& __cordl_internal_get_IapApiBaseUrl() const;

constexpr ::StringW& __cordl_internal_get_IapApiBaseUrl() ;

constexpr ::StringW const& __cordl_internal_get_KidApiBaseUrl() const;

constexpr ::StringW& __cordl_internal_get_KidApiBaseUrl() ;

constexpr ::StringW const& __cordl_internal_get_MmrApiBaseUrl() const;

constexpr ::StringW& __cordl_internal_get_MmrApiBaseUrl() ;

constexpr ::StringW const& __cordl_internal_get_ModerationApiBaseUrl() const;

constexpr ::StringW& __cordl_internal_get_ModerationApiBaseUrl() ;

constexpr ::StringW const& __cordl_internal_get_ProgressionApiBaseUrl() const;

constexpr ::StringW& __cordl_internal_get_ProgressionApiBaseUrl() ;

constexpr ::StringW const& __cordl_internal_get_TitleDataApiBaseUrl() const;

constexpr ::StringW& __cordl_internal_get_TitleDataApiBaseUrl() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr ::StringW const& __cordl_internal_get_VotingApiBaseUrl() const;

constexpr ::StringW& __cordl_internal_get_VotingApiBaseUrl() ;

constexpr void __cordl_internal_set_AuthApiBaseUrl(::StringW  value) ;

constexpr void __cordl_internal_set_DailyQuestsApiBaseUrl(::StringW  value) ;

constexpr void __cordl_internal_set_FriendApiBaseUrl(::StringW  value) ;

constexpr void __cordl_internal_set_HpPromoApiBaseUrl(::StringW  value) ;

constexpr void __cordl_internal_set_IapApiBaseUrl(::StringW  value) ;

constexpr void __cordl_internal_set_KidApiBaseUrl(::StringW  value) ;

constexpr void __cordl_internal_set_MmrApiBaseUrl(::StringW  value) ;

constexpr void __cordl_internal_set_ModerationApiBaseUrl(::StringW  value) ;

constexpr void __cordl_internal_set_ProgressionApiBaseUrl(::StringW  value) ;

constexpr void __cordl_internal_set_TitleDataApiBaseUrl(::StringW  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

constexpr void __cordl_internal_set_VotingApiBaseUrl(::StringW  value) ;

/// @brief Method .ctor, addr 0x5ab2244, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabAuthenticatorSettingsScriptableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticatorSettingsScriptableObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticatorSettingsScriptableObject(PlayFabAuthenticatorSettingsScriptableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticatorSettingsScriptableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticatorSettingsScriptableObject(PlayFabAuthenticatorSettingsScriptableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3294};

/// @brief Field TitleId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___TitleId;

/// @brief Field AuthApiBaseUrl, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___AuthApiBaseUrl;

/// @brief Field DailyQuestsApiBaseUrl, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___DailyQuestsApiBaseUrl;

/// @brief Field FriendApiBaseUrl, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___FriendApiBaseUrl;

/// @brief Field HpPromoApiBaseUrl, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___HpPromoApiBaseUrl;

/// @brief Field IapApiBaseUrl, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___IapApiBaseUrl;

/// @brief Field KidApiBaseUrl, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___KidApiBaseUrl;

/// @brief Field MmrApiBaseUrl, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___MmrApiBaseUrl;

/// @brief Field ModerationApiBaseUrl, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___ModerationApiBaseUrl;

/// @brief Field ProgressionApiBaseUrl, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___ProgressionApiBaseUrl;

/// @brief Field TitleDataApiBaseUrl, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___TitleDataApiBaseUrl;

/// @brief Field VotingApiBaseUrl, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___VotingApiBaseUrl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayFabAuthenticatorSettingsScriptableObject, ___TitleId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabAuthenticatorSettingsScriptableObject, ___AuthApiBaseUrl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabAuthenticatorSettingsScriptableObject, ___DailyQuestsApiBaseUrl) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabAuthenticatorSettingsScriptableObject, ___FriendApiBaseUrl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabAuthenticatorSettingsScriptableObject, ___HpPromoApiBaseUrl) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabAuthenticatorSettingsScriptableObject, ___IapApiBaseUrl) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabAuthenticatorSettingsScriptableObject, ___KidApiBaseUrl) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabAuthenticatorSettingsScriptableObject, ___MmrApiBaseUrl) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabAuthenticatorSettingsScriptableObject, ___ModerationApiBaseUrl) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabAuthenticatorSettingsScriptableObject, ___ProgressionApiBaseUrl) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabAuthenticatorSettingsScriptableObject, ___TitleDataApiBaseUrl) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabAuthenticatorSettingsScriptableObject, ___VotingApiBaseUrl) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayFabAuthenticatorSettingsScriptableObject) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace

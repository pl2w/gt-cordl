#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserTitleInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__UserOrigination_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserTitleInfo)
namespace PlayFab::ClientModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class UserTitleInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserTitleInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserTitleInfo*, "PlayFab.ClientModels", "UserTitleInfo");
// Dependencies PlayFab.ClientModels.UserOrigination, PlayFab.SharedModels.PlayFabBaseModel, System.DateTime, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserTitleInfo
class CORDL_TYPE UserTitleInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field AvatarUrl, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AvatarUrl, put=__cordl_internal_set_AvatarUrl)) ::StringW  AvatarUrl;

/// @brief Field Created, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Created, put=__cordl_internal_set_Created)) ::System::DateTime  Created;

/// @brief Field DisplayName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field FirstLogin, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_FirstLogin, put=__cordl_internal_set_FirstLogin)) ::System::Nullable_1<::System::DateTime>  FirstLogin;

/// @brief Field LastLogin, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_LastLogin, put=__cordl_internal_set_LastLogin)) ::System::Nullable_1<::System::DateTime>  LastLogin;

/// @brief Field Origination, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_Origination, put=__cordl_internal_set_Origination)) ::System::Nullable_1<::PlayFab::ClientModels::UserOrigination>  Origination;

/// @brief Field TitlePlayerAccount, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitlePlayerAccount, put=__cordl_internal_set_TitlePlayerAccount)) ::PlayFab::ClientModels::EntityKey*  TitlePlayerAccount;

/// @brief Field isBanned, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_isBanned, put=__cordl_internal_set_isBanned)) ::System::Nullable_1<bool>  isBanned;

static inline ::PlayFab::ClientModels::UserTitleInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AvatarUrl() const;

constexpr ::StringW& __cordl_internal_get_AvatarUrl() ;

constexpr ::System::DateTime const& __cordl_internal_get_Created() const;

constexpr ::System::DateTime& __cordl_internal_get_Created() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_FirstLogin() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_FirstLogin() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_LastLogin() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_LastLogin() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::UserOrigination> const& __cordl_internal_get_Origination() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::UserOrigination>& __cordl_internal_get_Origination() ;

constexpr ::PlayFab::ClientModels::EntityKey* const& __cordl_internal_get_TitlePlayerAccount() const;

constexpr ::PlayFab::ClientModels::EntityKey*& __cordl_internal_get_TitlePlayerAccount() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_isBanned() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_isBanned() ;

constexpr void __cordl_internal_set_AvatarUrl(::StringW  value) ;

constexpr void __cordl_internal_set_Created(::System::DateTime  value) ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_FirstLogin(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_LastLogin(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_Origination(::System::Nullable_1<::PlayFab::ClientModels::UserOrigination>  value) ;

constexpr void __cordl_internal_set_TitlePlayerAccount(::PlayFab::ClientModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_isBanned(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0xa84e4e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserTitleInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserTitleInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserTitleInfo(UserTitleInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserTitleInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserTitleInfo(UserTitleInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20311};

/// @brief Field AvatarUrl, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___AvatarUrl;

/// @brief Field Created, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ___Created;

/// @brief Field DisplayName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field FirstLogin, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___FirstLogin;

/// @brief Field isBanned, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___isBanned;

/// @brief Field LastLogin, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___LastLogin;

/// @brief Field Origination, offset: 0x58, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::UserOrigination>  ___Origination;

/// @brief Size padding 0x60 - 0x70 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field TitlePlayerAccount, offset: 0x68, size: 0x8, def value: None
 ::PlayFab::ClientModels::EntityKey*  ___TitlePlayerAccount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserTitleInfo, ___AvatarUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserTitleInfo, ___Created) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserTitleInfo, ___DisplayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserTitleInfo, ___FirstLogin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserTitleInfo, ___isBanned) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserTitleInfo, ___LastLogin) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserTitleInfo, ___Origination) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserTitleInfo, ___TitlePlayerAccount) == 0x68, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserTitleInfo) == 0x60, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

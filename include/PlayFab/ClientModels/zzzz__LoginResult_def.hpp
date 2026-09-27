#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LoginResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabLoginResultCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LoginResult)
namespace PlayFab::ClientModels {
class EntityTokenResponse;
}
namespace PlayFab::ClientModels {
class GetPlayerCombinedInfoResultPayload;
}
namespace PlayFab::ClientModels {
class TreatmentAssignment;
}
namespace PlayFab::ClientModels {
class UserSettings;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class LoginResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LoginResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LoginResult*, "PlayFab.ClientModels", "LoginResult");
// Dependencies PlayFab.SharedModels.PlayFabLoginResultCommon, System.DateTime, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LoginResult
class CORDL_TYPE LoginResult : public ::PlayFab::SharedModels::PlayFabLoginResultCommon {
public:
// Declarations
/// @brief Field EntityToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_EntityToken, put=__cordl_internal_set_EntityToken)) ::PlayFab::ClientModels::EntityTokenResponse*  EntityToken;

/// @brief Field InfoResultPayload, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_InfoResultPayload, put=__cordl_internal_set_InfoResultPayload)) ::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*  InfoResultPayload;

/// @brief Field LastLoginTime, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_LastLoginTime, put=__cordl_internal_set_LastLoginTime)) ::System::Nullable_1<::System::DateTime>  LastLoginTime;

/// @brief Field NewlyCreated, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_NewlyCreated, put=__cordl_internal_set_NewlyCreated)) bool  NewlyCreated;

/// @brief Field PlayFabId, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field SessionTicket, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionTicket, put=__cordl_internal_set_SessionTicket)) ::StringW  SessionTicket;

/// @brief Field SettingsForUser, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_SettingsForUser, put=__cordl_internal_set_SettingsForUser)) ::PlayFab::ClientModels::UserSettings*  SettingsForUser;

/// @brief Field TreatmentAssignment, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_TreatmentAssignment, put=__cordl_internal_set_TreatmentAssignment)) ::PlayFab::ClientModels::TreatmentAssignment*  TreatmentAssignment;

static inline ::PlayFab::ClientModels::LoginResult* New_ctor() ;

constexpr ::PlayFab::ClientModels::EntityTokenResponse* const& __cordl_internal_get_EntityToken() const;

constexpr ::PlayFab::ClientModels::EntityTokenResponse*& __cordl_internal_get_EntityToken() ;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload* const& __cordl_internal_get_InfoResultPayload() const;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*& __cordl_internal_get_InfoResultPayload() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_LastLoginTime() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_LastLoginTime() ;

constexpr bool const& __cordl_internal_get_NewlyCreated() const;

constexpr bool& __cordl_internal_get_NewlyCreated() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::StringW const& __cordl_internal_get_SessionTicket() const;

constexpr ::StringW& __cordl_internal_get_SessionTicket() ;

constexpr ::PlayFab::ClientModels::UserSettings* const& __cordl_internal_get_SettingsForUser() const;

constexpr ::PlayFab::ClientModels::UserSettings*& __cordl_internal_get_SettingsForUser() ;

constexpr ::PlayFab::ClientModels::TreatmentAssignment* const& __cordl_internal_get_TreatmentAssignment() const;

constexpr ::PlayFab::ClientModels::TreatmentAssignment*& __cordl_internal_get_TreatmentAssignment() ;

constexpr void __cordl_internal_set_EntityToken(::PlayFab::ClientModels::EntityTokenResponse*  value) ;

constexpr void __cordl_internal_set_InfoResultPayload(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*  value) ;

constexpr void __cordl_internal_set_LastLoginTime(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_NewlyCreated(bool  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_SessionTicket(::StringW  value) ;

constexpr void __cordl_internal_set_SettingsForUser(::PlayFab::ClientModels::UserSettings*  value) ;

constexpr void __cordl_internal_set_TreatmentAssignment(::PlayFab::ClientModels::TreatmentAssignment*  value) ;

/// @brief Method .ctor, addr 0xa84e000, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginResult(LoginResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginResult(LoginResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20144};

/// @brief Field EntityToken, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::ClientModels::EntityTokenResponse*  ___EntityToken;

/// @brief Field InfoResultPayload, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*  ___InfoResultPayload;

/// @brief Field LastLoginTime, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___LastLoginTime;

/// @brief Field NewlyCreated, offset: 0x48, size: 0x1, def value: None
 bool  ___NewlyCreated;

/// @brief Field PlayFabId, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field SessionTicket, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___SessionTicket;

/// @brief Field SettingsForUser, offset: 0x60, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserSettings*  ___SettingsForUser;

/// @brief Field TreatmentAssignment, offset: 0x68, size: 0x8, def value: None
 ::PlayFab::ClientModels::TreatmentAssignment*  ___TreatmentAssignment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LoginResult, ___EntityToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginResult, ___InfoResultPayload) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginResult, ___LastLoginTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginResult, ___NewlyCreated) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginResult, ___PlayFabId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginResult, ___SessionTicket) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginResult, ___SettingsForUser) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginResult, ___TreatmentAssignment) == 0x68, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LoginResult) == 0x70, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RegisterPlayFabUserResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabLoginResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RegisterPlayFabUserResult)
namespace PlayFab::ClientModels {
class EntityTokenResponse;
}
namespace PlayFab::ClientModels {
class UserSettings;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class RegisterPlayFabUserResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RegisterPlayFabUserResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RegisterPlayFabUserResult*, "PlayFab.ClientModels", "RegisterPlayFabUserResult");
// Dependencies PlayFab.SharedModels.PlayFabLoginResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RegisterPlayFabUserResult
class CORDL_TYPE RegisterPlayFabUserResult : public ::PlayFab::SharedModels::PlayFabLoginResultCommon {
public:
// Declarations
/// @brief Field EntityToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_EntityToken, put=__cordl_internal_set_EntityToken)) ::PlayFab::ClientModels::EntityTokenResponse*  EntityToken;

/// @brief Field PlayFabId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field SessionTicket, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionTicket, put=__cordl_internal_set_SessionTicket)) ::StringW  SessionTicket;

/// @brief Field SettingsForUser, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_SettingsForUser, put=__cordl_internal_set_SettingsForUser)) ::PlayFab::ClientModels::UserSettings*  SettingsForUser;

/// @brief Field Username, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

static inline ::PlayFab::ClientModels::RegisterPlayFabUserResult* New_ctor() ;

constexpr ::PlayFab::ClientModels::EntityTokenResponse* const& __cordl_internal_get_EntityToken() const;

constexpr ::PlayFab::ClientModels::EntityTokenResponse*& __cordl_internal_get_EntityToken() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::StringW const& __cordl_internal_get_SessionTicket() const;

constexpr ::StringW& __cordl_internal_get_SessionTicket() ;

constexpr ::PlayFab::ClientModels::UserSettings* const& __cordl_internal_get_SettingsForUser() const;

constexpr ::PlayFab::ClientModels::UserSettings*& __cordl_internal_get_SettingsForUser() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr void __cordl_internal_set_EntityToken(::PlayFab::ClientModels::EntityTokenResponse*  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_SessionTicket(::StringW  value) ;

constexpr void __cordl_internal_set_SettingsForUser(::PlayFab::ClientModels::UserSettings*  value) ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e180, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegisterPlayFabUserResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegisterPlayFabUserResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegisterPlayFabUserResult(RegisterPlayFabUserResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegisterPlayFabUserResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegisterPlayFabUserResult(RegisterPlayFabUserResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20195};

/// @brief Field EntityToken, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::ClientModels::EntityTokenResponse*  ___EntityToken;

/// @brief Field PlayFabId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field SessionTicket, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___SessionTicket;

/// @brief Field SettingsForUser, offset: 0x40, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserSettings*  ___SettingsForUser;

/// @brief Field Username, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___Username;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::RegisterPlayFabUserResult, ___EntityToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterPlayFabUserResult, ___PlayFabId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterPlayFabUserResult, ___SessionTicket) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterPlayFabUserResult, ___SettingsForUser) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterPlayFabUserResult, ___Username) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::RegisterPlayFabUserResult) == 0x50, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

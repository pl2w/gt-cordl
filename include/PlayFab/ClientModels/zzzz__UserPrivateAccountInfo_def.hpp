#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserPrivateAccountInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserPrivateAccountInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserPrivateAccountInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserPrivateAccountInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserPrivateAccountInfo*, "PlayFab.ClientModels", "UserPrivateAccountInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserPrivateAccountInfo
class CORDL_TYPE UserPrivateAccountInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Email, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Email, put=__cordl_internal_set_Email)) ::StringW  Email;

static inline ::PlayFab::ClientModels::UserPrivateAccountInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Email() const;

constexpr ::StringW& __cordl_internal_get_Email() ;

constexpr void __cordl_internal_set_Email(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e4c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserPrivateAccountInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserPrivateAccountInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserPrivateAccountInfo(UserPrivateAccountInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserPrivateAccountInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserPrivateAccountInfo(UserPrivateAccountInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20307};

/// @brief Field Email, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Email;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserPrivateAccountInfo, ___Email) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserPrivateAccountInfo) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

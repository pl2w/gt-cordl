#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserFacebookInstantGamesIdInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserFacebookInstantGamesIdInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserFacebookInstantGamesIdInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo*, "PlayFab.ClientModels", "UserFacebookInstantGamesIdInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserFacebookInstantGamesIdInfo
class CORDL_TYPE UserFacebookInstantGamesIdInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field FacebookInstantGamesId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_FacebookInstantGamesId, put=__cordl_internal_set_FacebookInstantGamesId)) ::StringW  FacebookInstantGamesId;

static inline ::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_FacebookInstantGamesId() const;

constexpr ::StringW& __cordl_internal_get_FacebookInstantGamesId() ;

constexpr void __cordl_internal_set_FacebookInstantGamesId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e488, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserFacebookInstantGamesIdInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserFacebookInstantGamesIdInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserFacebookInstantGamesIdInfo(UserFacebookInstantGamesIdInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserFacebookInstantGamesIdInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserFacebookInstantGamesIdInfo(UserFacebookInstantGamesIdInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20298};

/// @brief Field FacebookInstantGamesId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___FacebookInstantGamesId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo, ___FacebookInstantGamesId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

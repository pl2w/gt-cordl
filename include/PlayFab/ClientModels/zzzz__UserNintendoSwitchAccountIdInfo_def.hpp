#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserNintendoSwitchAccountIdInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserNintendoSwitchAccountIdInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserNintendoSwitchAccountIdInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserNintendoSwitchAccountIdInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserNintendoSwitchAccountIdInfo*, "PlayFab.ClientModels", "UserNintendoSwitchAccountIdInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserNintendoSwitchAccountIdInfo
class CORDL_TYPE UserNintendoSwitchAccountIdInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field NintendoSwitchAccountSubjectId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_NintendoSwitchAccountSubjectId, put=__cordl_internal_set_NintendoSwitchAccountSubjectId)) ::StringW  NintendoSwitchAccountSubjectId;

static inline ::PlayFab::ClientModels::UserNintendoSwitchAccountIdInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_NintendoSwitchAccountSubjectId() const;

constexpr ::StringW& __cordl_internal_get_NintendoSwitchAccountSubjectId() ;

constexpr void __cordl_internal_set_NintendoSwitchAccountSubjectId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e4b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserNintendoSwitchAccountIdInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserNintendoSwitchAccountIdInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserNintendoSwitchAccountIdInfo(UserNintendoSwitchAccountIdInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserNintendoSwitchAccountIdInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserNintendoSwitchAccountIdInfo(UserNintendoSwitchAccountIdInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20303};

/// @brief Field NintendoSwitchAccountSubjectId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___NintendoSwitchAccountSubjectId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserNintendoSwitchAccountIdInfo, ___NintendoSwitchAccountSubjectId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserNintendoSwitchAccountIdInfo) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

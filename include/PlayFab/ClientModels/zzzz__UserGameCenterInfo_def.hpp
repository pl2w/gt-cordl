#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserGameCenterInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserGameCenterInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserGameCenterInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserGameCenterInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserGameCenterInfo*, "PlayFab.ClientModels", "UserGameCenterInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserGameCenterInfo
class CORDL_TYPE UserGameCenterInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field GameCenterId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameCenterId, put=__cordl_internal_set_GameCenterId)) ::StringW  GameCenterId;

static inline ::PlayFab::ClientModels::UserGameCenterInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_GameCenterId() const;

constexpr ::StringW& __cordl_internal_get_GameCenterId() ;

constexpr void __cordl_internal_set_GameCenterId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e490, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserGameCenterInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserGameCenterInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserGameCenterInfo(UserGameCenterInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserGameCenterInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserGameCenterInfo(UserGameCenterInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20299};

/// @brief Field GameCenterId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___GameCenterId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserGameCenterInfo, ___GameCenterId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserGameCenterInfo) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

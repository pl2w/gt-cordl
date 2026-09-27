#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerProfileResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetPlayerProfileResult)
namespace PlayFab::ClientModels {
class PlayerProfileModel;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayerProfileResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayerProfileResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayerProfileResult*, "PlayFab.ClientModels", "GetPlayerProfileResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayerProfileResult
class CORDL_TYPE GetPlayerProfileResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field PlayerProfile, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerProfile, put=__cordl_internal_set_PlayerProfile)) ::PlayFab::ClientModels::PlayerProfileModel*  PlayerProfile;

static inline ::PlayFab::ClientModels::GetPlayerProfileResult* New_ctor() ;

constexpr ::PlayFab::ClientModels::PlayerProfileModel* const& __cordl_internal_get_PlayerProfile() const;

constexpr ::PlayFab::ClientModels::PlayerProfileModel*& __cordl_internal_get_PlayerProfile() ;

constexpr void __cordl_internal_set_PlayerProfile(::PlayFab::ClientModels::PlayerProfileModel*  value) ;

/// @brief Method .ctor, addr 0xa84dce8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerProfileResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerProfileResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerProfileResult(GetPlayerProfileResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerProfileResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerProfileResult(GetPlayerProfileResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20044};

/// @brief Field PlayerProfile, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::ClientModels::PlayerProfileModel*  ___PlayerProfile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayerProfileResult, ___PlayerProfile) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayerProfileResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

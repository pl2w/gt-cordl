#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetAccountInfoResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetAccountInfoResult)
namespace PlayFab::ClientModels {
class UserAccountInfo;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetAccountInfoResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetAccountInfoResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetAccountInfoResult*, "PlayFab.ClientModels", "GetAccountInfoResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetAccountInfoResult
class CORDL_TYPE GetAccountInfoResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field AccountInfo, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AccountInfo, put=__cordl_internal_set_AccountInfo)) ::PlayFab::ClientModels::UserAccountInfo*  AccountInfo;

static inline ::PlayFab::ClientModels::GetAccountInfoResult* New_ctor() ;

constexpr ::PlayFab::ClientModels::UserAccountInfo* const& __cordl_internal_get_AccountInfo() const;

constexpr ::PlayFab::ClientModels::UserAccountInfo*& __cordl_internal_get_AccountInfo() ;

constexpr void __cordl_internal_set_AccountInfo(::PlayFab::ClientModels::UserAccountInfo*  value) ;

/// @brief Method .ctor, addr 0xa84dbc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetAccountInfoResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetAccountInfoResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetAccountInfoResult(GetAccountInfoResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetAccountInfoResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetAccountInfoResult(GetAccountInfoResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20007};

/// @brief Field AccountInfo, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserAccountInfo*  ___AccountInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetAccountInfoResult, ___AccountInfo) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetAccountInfoResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

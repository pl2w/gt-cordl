#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetLeaderboardForUsersCharactersRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetLeaderboardForUsersCharactersRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetLeaderboardForUsersCharactersRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest*, "PlayFab.ClientModels", "GetLeaderboardForUsersCharactersRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetLeaderboardForUsersCharactersRequest
class CORDL_TYPE GetLeaderboardForUsersCharactersRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field MaxResultsCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxResultsCount, put=__cordl_internal_set_MaxResultsCount)) int32_t  MaxResultsCount;

/// @brief Field StatisticName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticName, put=__cordl_internal_set_StatisticName)) ::StringW  StatisticName;

static inline ::PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_MaxResultsCount() const;

constexpr int32_t& __cordl_internal_get_MaxResultsCount() ;

constexpr ::StringW const& __cordl_internal_get_StatisticName() const;

constexpr ::StringW& __cordl_internal_get_StatisticName() ;

constexpr void __cordl_internal_set_MaxResultsCount(int32_t  value) ;

constexpr void __cordl_internal_set_StatisticName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dc80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetLeaderboardForUsersCharactersRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetLeaderboardForUsersCharactersRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetLeaderboardForUsersCharactersRequest(GetLeaderboardForUsersCharactersRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetLeaderboardForUsersCharactersRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetLeaderboardForUsersCharactersRequest(GetLeaderboardForUsersCharactersRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20031};

/// @brief Field MaxResultsCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___MaxResultsCount;

/// @brief Field StatisticName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___StatisticName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest, ___MaxResultsCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest, ___StatisticName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetFriendLeaderboardAroundPlayerResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetFriendLeaderboardAroundPlayerResult)
namespace PlayFab::ClientModels {
class PlayerLeaderboardEntry;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetFriendLeaderboardAroundPlayerResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult*, "PlayFab.ClientModels", "GetFriendLeaderboardAroundPlayerResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.DateTime, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerResult
class CORDL_TYPE GetFriendLeaderboardAroundPlayerResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Leaderboard, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Leaderboard, put=__cordl_internal_set_Leaderboard)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PlayerLeaderboardEntry*>*  Leaderboard;

/// @brief Field NextReset, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_NextReset, put=__cordl_internal_set_NextReset)) ::System::Nullable_1<::System::DateTime>  NextReset;

/// @brief Field Version, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) int32_t  Version;

static inline ::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PlayerLeaderboardEntry*>* const& __cordl_internal_get_Leaderboard() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PlayerLeaderboardEntry*>*& __cordl_internal_get_Leaderboard() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_NextReset() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_NextReset() ;

constexpr int32_t const& __cordl_internal_get_Version() const;

constexpr int32_t& __cordl_internal_get_Version() ;

constexpr void __cordl_internal_set_Leaderboard(::System::Collections::Generic::List_1<::PlayFab::ClientModels::PlayerLeaderboardEntry*>*  value) ;

constexpr void __cordl_internal_set_NextReset(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_Version(int32_t  value) ;

/// @brief Method .ctor, addr 0xa84dc40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetFriendLeaderboardAroundPlayerResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetFriendLeaderboardAroundPlayerResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetFriendLeaderboardAroundPlayerResult(GetFriendLeaderboardAroundPlayerResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetFriendLeaderboardAroundPlayerResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetFriendLeaderboardAroundPlayerResult(GetFriendLeaderboardAroundPlayerResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20023};

/// @brief Field Leaderboard, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PlayerLeaderboardEntry*>*  ___Leaderboard;

/// @brief Field NextReset, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___NextReset;

/// @brief Field Version, offset: 0x38, size: 0x4, def value: None
 int32_t  ___Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult, ___Leaderboard) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult, ___NextReset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult, ___Version) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetLeaderboardForUsersCharactersResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetLeaderboardForUsersCharactersResult)
namespace PlayFab::ClientModels {
class CharacterLeaderboardEntry;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetLeaderboardForUsersCharactersResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult*, "PlayFab.ClientModels", "GetLeaderboardForUsersCharactersResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetLeaderboardForUsersCharactersResult
class CORDL_TYPE GetLeaderboardForUsersCharactersResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Leaderboard, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Leaderboard, put=__cordl_internal_set_Leaderboard)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterLeaderboardEntry*>*  Leaderboard;

static inline ::PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterLeaderboardEntry*>* const& __cordl_internal_get_Leaderboard() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterLeaderboardEntry*>*& __cordl_internal_get_Leaderboard() ;

constexpr void __cordl_internal_set_Leaderboard(::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterLeaderboardEntry*>*  value) ;

/// @brief Method .ctor, addr 0xa84dc88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetLeaderboardForUsersCharactersResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetLeaderboardForUsersCharactersResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetLeaderboardForUsersCharactersResult(GetLeaderboardForUsersCharactersResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetLeaderboardForUsersCharactersResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetLeaderboardForUsersCharactersResult(GetLeaderboardForUsersCharactersResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20032};

/// @brief Field Leaderboard, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterLeaderboardEntry*>*  ___Leaderboard;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult, ___Leaderboard) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

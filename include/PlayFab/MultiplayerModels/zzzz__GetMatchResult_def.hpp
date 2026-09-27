#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMatchResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetMatchResult)
namespace PlayFab::MultiplayerModels {
class MatchmakingPlayerWithTeamAssignment;
}
namespace PlayFab::MultiplayerModels {
class ServerDetails;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetMatchResult;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetMatchResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetMatchResult*, "PlayFab.MultiplayerModels", "GetMatchResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetMatchResult
class CORDL_TYPE GetMatchResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field MatchId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MatchId, put=__cordl_internal_set_MatchId)) ::StringW  MatchId;

/// @brief Field Members, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Members, put=__cordl_internal_set_Members)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*  Members;

/// @brief Field RegionPreferences, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RegionPreferences, put=__cordl_internal_set_RegionPreferences)) ::System::Collections::Generic::List_1<::StringW>*  RegionPreferences;

/// @brief Field ServerDetails, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerDetails, put=__cordl_internal_set_ServerDetails)) ::PlayFab::MultiplayerModels::ServerDetails*  ServerDetails;

static inline ::PlayFab::MultiplayerModels::GetMatchResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_MatchId() const;

constexpr ::StringW& __cordl_internal_get_MatchId() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>* const& __cordl_internal_get_Members() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*& __cordl_internal_get_Members() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_RegionPreferences() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_RegionPreferences() ;

constexpr ::PlayFab::MultiplayerModels::ServerDetails* const& __cordl_internal_get_ServerDetails() const;

constexpr ::PlayFab::MultiplayerModels::ServerDetails*& __cordl_internal_get_ServerDetails() ;

constexpr void __cordl_internal_set_MatchId(::StringW  value) ;

constexpr void __cordl_internal_set_Members(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*  value) ;

constexpr void __cordl_internal_set_RegionPreferences(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_ServerDetails(::PlayFab::MultiplayerModels::ServerDetails*  value) ;

/// @brief Method .ctor, addr 0xa8409b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetMatchResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetMatchResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetMatchResult(GetMatchResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetMatchResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetMatchResult(GetMatchResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19657};

/// @brief Field MatchId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___MatchId;

/// @brief Field Members, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*  ___Members;

/// @brief Field RegionPreferences, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___RegionPreferences;

/// @brief Field ServerDetails, offset: 0x38, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::ServerDetails*  ___ServerDetails;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchResult, ___MatchId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchResult, ___Members) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchResult, ___RegionPreferences) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchResult, ___ServerDetails) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetMatchResult) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

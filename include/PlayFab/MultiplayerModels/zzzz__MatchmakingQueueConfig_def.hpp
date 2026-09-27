#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/MatchmakingQueueConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatchmakingQueueConfig)
namespace PlayFab::MultiplayerModels {
class DifferenceRule;
}
namespace PlayFab::MultiplayerModels {
class MatchTotalRule;
}
namespace PlayFab::MultiplayerModels {
class MatchmakingQueueTeam;
}
namespace PlayFab::MultiplayerModels {
class RegionSelectionRule;
}
namespace PlayFab::MultiplayerModels {
class SetIntersectionRule;
}
namespace PlayFab::MultiplayerModels {
class StatisticsVisibilityToPlayers;
}
namespace PlayFab::MultiplayerModels {
class StringEqualityRule;
}
namespace PlayFab::MultiplayerModels {
class TeamDifferenceRule;
}
namespace PlayFab::MultiplayerModels {
class TeamSizeBalanceRule;
}
namespace PlayFab::MultiplayerModels {
class TeamTicketSizeSimilarityRule;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class MatchmakingQueueConfig;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::MatchmakingQueueConfig*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::MatchmakingQueueConfig*, "PlayFab.MultiplayerModels", "MatchmakingQueueConfig");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.MatchmakingQueueConfig
class CORDL_TYPE MatchmakingQueueConfig : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field BuildId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildId, put=__cordl_internal_set_BuildId)) ::StringW  BuildId;

/// @brief Field DifferenceRules, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DifferenceRules, put=__cordl_internal_set_DifferenceRules)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DifferenceRule*>*  DifferenceRules;

/// @brief Field MatchTotalRules, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MatchTotalRules, put=__cordl_internal_set_MatchTotalRules)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchTotalRule*>*  MatchTotalRules;

/// @brief Field MaxMatchSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxMatchSize, put=__cordl_internal_set_MaxMatchSize)) uint32_t  MaxMatchSize;

/// @brief Field MaxTicketSize, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_MaxTicketSize, put=__cordl_internal_set_MaxTicketSize)) ::System::Nullable_1<uint32_t>  MaxTicketSize;

/// @brief Field MinMatchSize, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinMatchSize, put=__cordl_internal_set_MinMatchSize)) uint32_t  MinMatchSize;

/// @brief Field Name, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field RegionSelectionRule, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_RegionSelectionRule, put=__cordl_internal_set_RegionSelectionRule)) ::PlayFab::MultiplayerModels::RegionSelectionRule*  RegionSelectionRule;

/// @brief Field ServerAllocationEnabled, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_ServerAllocationEnabled, put=__cordl_internal_set_ServerAllocationEnabled)) bool  ServerAllocationEnabled;

/// @brief Field SetIntersectionRules, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_SetIntersectionRules, put=__cordl_internal_set_SetIntersectionRules)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::SetIntersectionRule*>*  SetIntersectionRules;

/// @brief Field StatisticsVisibilityToPlayers, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticsVisibilityToPlayers, put=__cordl_internal_set_StatisticsVisibilityToPlayers)) ::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers*  StatisticsVisibilityToPlayers;

/// @brief Field StringEqualityRules, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_StringEqualityRules, put=__cordl_internal_set_StringEqualityRules)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::StringEqualityRule*>*  StringEqualityRules;

/// @brief Field TeamDifferenceRules, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_TeamDifferenceRules, put=__cordl_internal_set_TeamDifferenceRules)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::TeamDifferenceRule*>*  TeamDifferenceRules;

/// @brief Field TeamSizeBalanceRule, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_TeamSizeBalanceRule, put=__cordl_internal_set_TeamSizeBalanceRule)) ::PlayFab::MultiplayerModels::TeamSizeBalanceRule*  TeamSizeBalanceRule;

/// @brief Field TeamTicketSizeSimilarityRule, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_TeamTicketSizeSimilarityRule, put=__cordl_internal_set_TeamTicketSizeSimilarityRule)) ::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule*  TeamTicketSizeSimilarityRule;

/// @brief Field Teams, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_Teams, put=__cordl_internal_set_Teams)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingQueueTeam*>*  Teams;

static inline ::PlayFab::MultiplayerModels::MatchmakingQueueConfig* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BuildId() const;

constexpr ::StringW& __cordl_internal_get_BuildId() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DifferenceRule*>* const& __cordl_internal_get_DifferenceRules() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DifferenceRule*>*& __cordl_internal_get_DifferenceRules() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchTotalRule*>* const& __cordl_internal_get_MatchTotalRules() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchTotalRule*>*& __cordl_internal_get_MatchTotalRules() ;

constexpr uint32_t const& __cordl_internal_get_MaxMatchSize() const;

constexpr uint32_t& __cordl_internal_get_MaxMatchSize() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_MaxTicketSize() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_MaxTicketSize() ;

constexpr uint32_t const& __cordl_internal_get_MinMatchSize() const;

constexpr uint32_t& __cordl_internal_get_MinMatchSize() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::PlayFab::MultiplayerModels::RegionSelectionRule* const& __cordl_internal_get_RegionSelectionRule() const;

constexpr ::PlayFab::MultiplayerModels::RegionSelectionRule*& __cordl_internal_get_RegionSelectionRule() ;

constexpr bool const& __cordl_internal_get_ServerAllocationEnabled() const;

constexpr bool& __cordl_internal_get_ServerAllocationEnabled() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::SetIntersectionRule*>* const& __cordl_internal_get_SetIntersectionRules() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::SetIntersectionRule*>*& __cordl_internal_get_SetIntersectionRules() ;

constexpr ::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers* const& __cordl_internal_get_StatisticsVisibilityToPlayers() const;

constexpr ::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers*& __cordl_internal_get_StatisticsVisibilityToPlayers() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::StringEqualityRule*>* const& __cordl_internal_get_StringEqualityRules() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::StringEqualityRule*>*& __cordl_internal_get_StringEqualityRules() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::TeamDifferenceRule*>* const& __cordl_internal_get_TeamDifferenceRules() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::TeamDifferenceRule*>*& __cordl_internal_get_TeamDifferenceRules() ;

constexpr ::PlayFab::MultiplayerModels::TeamSizeBalanceRule* const& __cordl_internal_get_TeamSizeBalanceRule() const;

constexpr ::PlayFab::MultiplayerModels::TeamSizeBalanceRule*& __cordl_internal_get_TeamSizeBalanceRule() ;

constexpr ::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule* const& __cordl_internal_get_TeamTicketSizeSimilarityRule() const;

constexpr ::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule*& __cordl_internal_get_TeamTicketSizeSimilarityRule() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingQueueTeam*>* const& __cordl_internal_get_Teams() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingQueueTeam*>*& __cordl_internal_get_Teams() ;

constexpr void __cordl_internal_set_BuildId(::StringW  value) ;

constexpr void __cordl_internal_set_DifferenceRules(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DifferenceRule*>*  value) ;

constexpr void __cordl_internal_set_MatchTotalRules(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchTotalRule*>*  value) ;

constexpr void __cordl_internal_set_MaxMatchSize(uint32_t  value) ;

constexpr void __cordl_internal_set_MaxTicketSize(::System::Nullable_1<uint32_t>  value) ;

constexpr void __cordl_internal_set_MinMatchSize(uint32_t  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_RegionSelectionRule(::PlayFab::MultiplayerModels::RegionSelectionRule*  value) ;

constexpr void __cordl_internal_set_ServerAllocationEnabled(bool  value) ;

constexpr void __cordl_internal_set_SetIntersectionRules(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::SetIntersectionRule*>*  value) ;

constexpr void __cordl_internal_set_StatisticsVisibilityToPlayers(::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers*  value) ;

constexpr void __cordl_internal_set_StringEqualityRules(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::StringEqualityRule*>*  value) ;

constexpr void __cordl_internal_set_TeamDifferenceRules(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::TeamDifferenceRule*>*  value) ;

constexpr void __cordl_internal_set_TeamSizeBalanceRule(::PlayFab::MultiplayerModels::TeamSizeBalanceRule*  value) ;

constexpr void __cordl_internal_set_TeamTicketSizeSimilarityRule(::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule*  value) ;

constexpr void __cordl_internal_set_Teams(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingQueueTeam*>*  value) ;

/// @brief Method .ctor, addr 0xa840b68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchmakingQueueConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingQueueConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchmakingQueueConfig(MatchmakingQueueConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingQueueConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchmakingQueueConfig(MatchmakingQueueConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19711};

/// @brief Field BuildId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___BuildId;

/// @brief Field DifferenceRules, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DifferenceRule*>*  ___DifferenceRules;

/// @brief Field MatchTotalRules, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchTotalRule*>*  ___MatchTotalRules;

/// @brief Field MaxMatchSize, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___MaxMatchSize;

/// @brief Field MaxTicketSize, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___MaxTicketSize;

/// @brief Field MinMatchSize, offset: 0x40, size: 0x4, def value: None
 uint32_t  ___MinMatchSize;

/// @brief Field Name, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field RegionSelectionRule, offset: 0x50, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::RegionSelectionRule*  ___RegionSelectionRule;

/// @brief Field ServerAllocationEnabled, offset: 0x58, size: 0x1, def value: None
 bool  ___ServerAllocationEnabled;

/// @brief Field SetIntersectionRules, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::SetIntersectionRule*>*  ___SetIntersectionRules;

/// @brief Field StatisticsVisibilityToPlayers, offset: 0x68, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers*  ___StatisticsVisibilityToPlayers;

/// @brief Field StringEqualityRules, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::StringEqualityRule*>*  ___StringEqualityRules;

/// @brief Field TeamDifferenceRules, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::TeamDifferenceRule*>*  ___TeamDifferenceRules;

/// @brief Field Teams, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingQueueTeam*>*  ___Teams;

/// @brief Field TeamSizeBalanceRule, offset: 0x88, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::TeamSizeBalanceRule*  ___TeamSizeBalanceRule;

/// @brief Size padding 0x88 - 0x98 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field TeamTicketSizeSimilarityRule, offset: 0x90, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule*  ___TeamTicketSizeSimilarityRule;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig, ___BuildId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig, ___DifferenceRules) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig, ___MatchTotalRules) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig, ___MaxMatchSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig, ___MaxTicketSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig, ___MinMatchSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig, ___Name) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig, ___RegionSelectionRule) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig, ___ServerAllocationEnabled) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig, ___SetIntersectionRules) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig, ___StatisticsVisibilityToPlayers) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig, ___StringEqualityRules) == 0x70, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig, ___TeamDifferenceRules) == 0x78, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig, ___Teams) == 0x80, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig, ___TeamSizeBalanceRule) == 0x88, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig, ___TeamTicketSizeSimilarityRule) == 0x90, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::MatchmakingQueueConfig) == 0x88, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

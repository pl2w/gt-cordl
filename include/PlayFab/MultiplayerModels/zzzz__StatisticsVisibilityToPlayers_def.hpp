#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/StatisticsVisibilityToPlayers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
CORDL_MODULE_EXPORT(StatisticsVisibilityToPlayers)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class StatisticsVisibilityToPlayers;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers*, "PlayFab.MultiplayerModels", "StatisticsVisibilityToPlayers");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.StatisticsVisibilityToPlayers
class CORDL_TYPE StatisticsVisibilityToPlayers : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field ShowNumberOfPlayersMatching, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowNumberOfPlayersMatching, put=__cordl_internal_set_ShowNumberOfPlayersMatching)) bool  ShowNumberOfPlayersMatching;

/// @brief Field ShowTimeToMatch, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowTimeToMatch, put=__cordl_internal_set_ShowTimeToMatch)) bool  ShowTimeToMatch;

static inline ::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers* New_ctor() ;

constexpr bool const& __cordl_internal_get_ShowNumberOfPlayersMatching() const;

constexpr bool& __cordl_internal_get_ShowNumberOfPlayersMatching() ;

constexpr bool const& __cordl_internal_get_ShowTimeToMatch() const;

constexpr bool& __cordl_internal_get_ShowTimeToMatch() ;

constexpr void __cordl_internal_set_ShowNumberOfPlayersMatching(bool  value) ;

constexpr void __cordl_internal_set_ShowTimeToMatch(bool  value) ;

/// @brief Method .ctor, addr 0xa840c28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StatisticsVisibilityToPlayers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StatisticsVisibilityToPlayers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StatisticsVisibilityToPlayers(StatisticsVisibilityToPlayers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StatisticsVisibilityToPlayers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StatisticsVisibilityToPlayers(StatisticsVisibilityToPlayers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19738};

/// @brief Field ShowNumberOfPlayersMatching, offset: 0x10, size: 0x1, def value: None
 bool  ___ShowNumberOfPlayersMatching;

/// @brief Field ShowTimeToMatch, offset: 0x11, size: 0x1, def value: None
 bool  ___ShowTimeToMatch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers, ___ShowNumberOfPlayersMatching) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers, ___ShowTimeToMatch) == 0x11, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

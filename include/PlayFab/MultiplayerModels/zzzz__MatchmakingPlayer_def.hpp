#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/MatchmakingPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
CORDL_MODULE_EXPORT(MatchmakingPlayer)
namespace PlayFab::MultiplayerModels {
class EntityKey;
}
namespace PlayFab::MultiplayerModels {
class MatchmakingPlayerAttributes;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class MatchmakingPlayer;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::MatchmakingPlayer*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::MatchmakingPlayer*, "PlayFab.MultiplayerModels", "MatchmakingPlayer");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.MatchmakingPlayer
class CORDL_TYPE MatchmakingPlayer : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Attributes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Attributes, put=__cordl_internal_set_Attributes)) ::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes*  Attributes;

/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::MultiplayerModels::EntityKey*  Entity;

static inline ::PlayFab::MultiplayerModels::MatchmakingPlayer* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes* const& __cordl_internal_get_Attributes() const;

constexpr ::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes*& __cordl_internal_get_Attributes() ;

constexpr ::PlayFab::MultiplayerModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::MultiplayerModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr void __cordl_internal_set_Attributes(::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes*  value) ;

constexpr void __cordl_internal_set_Entity(::PlayFab::MultiplayerModels::EntityKey*  value) ;

/// @brief Method .ctor, addr 0xa840b50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchmakingPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchmakingPlayer(MatchmakingPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchmakingPlayer(MatchmakingPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19708};

/// @brief Field Attributes, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes*  ___Attributes;

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::EntityKey*  ___Entity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingPlayer, ___Attributes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingPlayer, ___Entity) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::MatchmakingPlayer) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/MatchmakingPlayerWithTeamAssignment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MatchmakingPlayerWithTeamAssignment)
namespace PlayFab::MultiplayerModels {
class EntityKey;
}
namespace PlayFab::MultiplayerModels {
class MatchmakingPlayerAttributes;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class MatchmakingPlayerWithTeamAssignment;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*, "PlayFab.MultiplayerModels", "MatchmakingPlayerWithTeamAssignment");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.MatchmakingPlayerWithTeamAssignment
class CORDL_TYPE MatchmakingPlayerWithTeamAssignment : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Attributes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Attributes, put=__cordl_internal_set_Attributes)) ::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes*  Attributes;

/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::MultiplayerModels::EntityKey*  Entity;

/// @brief Field TeamId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TeamId, put=__cordl_internal_set_TeamId)) ::StringW  TeamId;

static inline ::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes* const& __cordl_internal_get_Attributes() const;

constexpr ::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes*& __cordl_internal_get_Attributes() ;

constexpr ::PlayFab::MultiplayerModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::MultiplayerModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::StringW const& __cordl_internal_get_TeamId() const;

constexpr ::StringW& __cordl_internal_get_TeamId() ;

constexpr void __cordl_internal_set_Attributes(::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes*  value) ;

constexpr void __cordl_internal_set_Entity(::PlayFab::MultiplayerModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_TeamId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840b60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchmakingPlayerWithTeamAssignment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingPlayerWithTeamAssignment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchmakingPlayerWithTeamAssignment(MatchmakingPlayerWithTeamAssignment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingPlayerWithTeamAssignment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchmakingPlayerWithTeamAssignment(MatchmakingPlayerWithTeamAssignment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19710};

/// @brief Field Attributes, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes*  ___Attributes;

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::EntityKey*  ___Entity;

/// @brief Field TeamId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TeamId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment, ___Attributes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment, ___Entity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment, ___TeamId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

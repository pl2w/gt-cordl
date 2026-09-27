#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/TeamExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TeamExtensions)
namespace GlobalNamespace {
struct PunTeams_Team;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class TeamExtensions;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::TeamExtensions*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::TeamExtensions*, "Photon.Pun.UtilityScripts", "TeamExtensions");
// [Extension]
// Dependencies System.Object
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.TeamExtensions
class CORDL_TYPE TeamExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// [Obsolete("Use player.GetPhotonTeam")]
/// @brief Method GetTeam, addr 0xa738e0c, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PunTeams_Team GetTeam(::Photon::Realtime::Player*  player) ;

/// [Extension]
/// [Obsolete("Use player.JoinTeam")]
/// @brief Method SetTeam, addr 0xa738ed8, size 0x1e8, virtual false, abstract: false, final false
static inline void SetTeam(::Photon::Realtime::Player*  player, ::GlobalNamespace::PunTeams_Team  team) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeamExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeamExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeamExtensions(TeamExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeamExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeamExtensions(TeamExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31221};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::UtilityScripts::TeamExtensions) == 0x10, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts

#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PhotonTeamExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonTeamExtensions)
namespace Photon::Pun::UtilityScripts {
class PhotonTeam;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PhotonTeamExtensions;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::PhotonTeamExtensions*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::PhotonTeamExtensions*, "Photon.Pun.UtilityScripts", "PhotonTeamExtensions");
// [Extension]
// Dependencies System.Object
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.PhotonTeamExtensions
class CORDL_TYPE PhotonTeamExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetPhotonTeam, addr 0xa735a74, size 0xe8, virtual false, abstract: false, final false
static inline ::Photon::Pun::UtilityScripts::PhotonTeam* GetPhotonTeam(::Photon::Realtime::Player*  player) ;

/// [Extension]
/// @brief Method JoinTeam, addr 0xa736960, size 0x214, virtual false, abstract: false, final false
static inline bool JoinTeam(::Photon::Realtime::Player*  player, ::Photon::Pun::UtilityScripts::PhotonTeam*  team) ;

/// [Extension]
/// @brief Method JoinTeam, addr 0xa736b74, size 0x54, virtual false, abstract: false, final false
static inline bool JoinTeam(::Photon::Realtime::Player*  player, uint8_t  teamCode) ;

/// [Extension]
/// @brief Method JoinTeam, addr 0xa736bc8, size 0x54, virtual false, abstract: false, final false
static inline bool JoinTeam(::Photon::Realtime::Player*  player, ::StringW  teamName) ;

/// [Extension]
/// @brief Method LeaveCurrentTeam, addr 0xa736fbc, size 0x1d8, virtual false, abstract: false, final false
static inline bool LeaveCurrentTeam(::Photon::Realtime::Player*  player) ;

/// [Extension]
/// @brief Method SwitchTeam, addr 0xa736c1c, size 0x2f8, virtual false, abstract: false, final false
static inline bool SwitchTeam(::Photon::Realtime::Player*  player, ::Photon::Pun::UtilityScripts::PhotonTeam*  team) ;

/// [Extension]
/// @brief Method SwitchTeam, addr 0xa736f14, size 0x54, virtual false, abstract: false, final false
static inline bool SwitchTeam(::Photon::Realtime::Player*  player, uint8_t  teamCode) ;

/// [Extension]
/// @brief Method SwitchTeam, addr 0xa736f68, size 0x54, virtual false, abstract: false, final false
static inline bool SwitchTeam(::Photon::Realtime::Player*  player, ::StringW  teamName) ;

/// [Extension]
/// @brief Method TryGetTeamMates, addr 0xa737194, size 0x30, virtual false, abstract: false, final false
static inline bool TryGetTeamMates(::Photon::Realtime::Player*  player, ::by_ref<::ArrayW<::Photon::Realtime::Player*>>  teamMates) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonTeamExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonTeamExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonTeamExtensions(PhotonTeamExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonTeamExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonTeamExtensions(PhotonTeamExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31212};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::UtilityScripts::PhotonTeamExtensions) == 0x10, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts

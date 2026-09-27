#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PlayerNumberingExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerNumberingExtensions)
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PlayerNumberingExtensions;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::PlayerNumberingExtensions*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::PlayerNumberingExtensions*, "Photon.Pun.UtilityScripts", "PlayerNumberingExtensions");
// [Extension]
// Dependencies System.Object
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.PlayerNumberingExtensions
class CORDL_TYPE PlayerNumberingExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetPlayerNumber, addr 0xa737d48, size 0x144, virtual false, abstract: false, final false
static inline int32_t GetPlayerNumber(::Photon::Realtime::Player*  player) ;

/// [Extension]
/// @brief Method SetPlayerNumber, addr 0xa737e8c, size 0x330, virtual false, abstract: false, final false
static inline void SetPlayerNumber(::Photon::Realtime::Player*  player, int32_t  playerNumber) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerNumberingExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerNumberingExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerNumberingExtensions(PlayerNumberingExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerNumberingExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerNumberingExtensions(PlayerNumberingExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31216};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::UtilityScripts::PlayerNumberingExtensions) == 0x10, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts

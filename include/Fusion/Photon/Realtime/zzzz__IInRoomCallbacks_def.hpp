#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/IInRoomCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInRoomCallbacks)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Fusion::Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class IInRoomCallbacks;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::IInRoomCallbacks*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::IInRoomCallbacks*, "Fusion.Photon.Realtime", "IInRoomCallbacks");
// Dependencies 
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.IInRoomCallbacks
class CORDL_TYPE IInRoomCallbacks {
public:
// Declarations
/// @brief Method OnMasterClientSwitched, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnMasterClientSwitched(::Fusion::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPlayerEnteredRoom(::Fusion::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPlayerLeftRoom(::Fusion::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method OnPlayerPropertiesUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPlayerPropertiesUpdate(::Fusion::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps) ;

/// @brief Method OnRoomPropertiesUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged) ;

// Ctor Parameters [CppParam { name: "", ty: "IInRoomCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInRoomCallbacks(IInRoomCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28057};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Photon::Realtime

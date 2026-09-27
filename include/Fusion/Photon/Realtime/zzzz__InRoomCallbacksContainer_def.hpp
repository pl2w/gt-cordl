#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/InRoomCallbacksContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
CORDL_MODULE_EXPORT(InRoomCallbacksContainer)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Fusion::Photon::Realtime {
class IInRoomCallbacks;
}
namespace Fusion::Photon::Realtime {
class LoadBalancingClient;
}
namespace Fusion::Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class InRoomCallbacksContainer;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::InRoomCallbacksContainer*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::InRoomCallbacksContainer*, "Fusion.Photon.Realtime", "InRoomCallbacksContainer");
// Dependencies System.Collections.Generic.List`1<T>
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.InRoomCallbacksContainer
class CORDL_TYPE InRoomCallbacksContainer : public ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::IInRoomCallbacks*> {
public:
// Declarations
/// @brief Field client, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::Fusion::Photon::Realtime::LoadBalancingClient*  client;

/// @brief Convert operator to "::Fusion::Photon::Realtime::IInRoomCallbacks"
constexpr operator  ::Fusion::Photon::Realtime::IInRoomCallbacks*() noexcept;

static inline ::Fusion::Photon::Realtime::InRoomCallbacksContainer* New_ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client) ;

/// @brief Method OnMasterClientSwitched, addr 0x5f58fdc, size 0x1bc, virtual true, abstract: false, final true
inline void OnMasterClientSwitched(::Fusion::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x5f588e8, size 0x1b8, virtual true, abstract: false, final true
inline void OnPlayerEnteredRoom(::Fusion::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x5f58aa0, size 0x1bc, virtual true, abstract: false, final true
inline void OnPlayerLeftRoom(::Fusion::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method OnPlayerPropertiesUpdate, addr 0x5f58e18, size 0x1c4, virtual true, abstract: false, final true
inline void OnPlayerPropertiesUpdate(::Fusion::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProp) ;

/// @brief Method OnRoomPropertiesUpdate, addr 0x5f58c5c, size 0x1bc, virtual true, abstract: false, final true
inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged) ;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& __cordl_internal_get_client() const;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client() ;

constexpr void __cordl_internal_set_client(::Fusion::Photon::Realtime::LoadBalancingClient*  value) ;

/// @brief Method .ctor, addr 0x5f58860, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client) ;

/// @brief Convert to "::Fusion::Photon::Realtime::IInRoomCallbacks"
constexpr ::Fusion::Photon::Realtime::IInRoomCallbacks* i___Fusion__Photon__Realtime__IInRoomCallbacks() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InRoomCallbacksContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InRoomCallbacksContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InRoomCallbacksContainer(InRoomCallbacksContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InRoomCallbacksContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InRoomCallbacksContainer(InRoomCallbacksContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28063};

/// @brief Field client, offset: 0x28, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::LoadBalancingClient*  ___client;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::InRoomCallbacksContainer, ___client) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::InRoomCallbacksContainer) == 0x30, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime

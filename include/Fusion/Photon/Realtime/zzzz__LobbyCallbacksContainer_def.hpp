#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/LobbyCallbacksContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
CORDL_MODULE_EXPORT(LobbyCallbacksContainer)
namespace Fusion::Photon::Realtime {
class ILobbyCallbacks;
}
namespace Fusion::Photon::Realtime {
class LoadBalancingClient;
}
namespace Fusion::Photon::Realtime {
class RoomInfo;
}
namespace Fusion::Photon::Realtime {
class TypedLobbyInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class LobbyCallbacksContainer;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::LobbyCallbacksContainer*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::LobbyCallbacksContainer*, "Fusion.Photon.Realtime", "LobbyCallbacksContainer");
// Dependencies System.Collections.Generic.List`1<T>
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.LobbyCallbacksContainer
class CORDL_TYPE LobbyCallbacksContainer : public ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::ILobbyCallbacks*> {
public:
// Declarations
/// @brief Field client, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::Fusion::Photon::Realtime::LoadBalancingClient*  client;

/// @brief Convert operator to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr operator  ::Fusion::Photon::Realtime::ILobbyCallbacks*() noexcept;

static inline ::Fusion::Photon::Realtime::LobbyCallbacksContainer* New_ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client) ;

/// @brief Method OnJoinedLobby, addr 0x5f59220, size 0x1a8, virtual true, abstract: false, final true
inline void OnJoinedLobby() ;

/// @brief Method OnLeftLobby, addr 0x5f593c8, size 0x1ac, virtual true, abstract: false, final true
inline void OnLeftLobby() ;

/// @brief Method OnLobbyStatisticsUpdate, addr 0x5f59730, size 0x1bc, virtual true, abstract: false, final true
inline void OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics) ;

/// @brief Method OnRoomListUpdate, addr 0x5f59574, size 0x1bc, virtual true, abstract: false, final true
inline void OnRoomListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*  roomList) ;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& __cordl_internal_get_client() const;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client() ;

constexpr void __cordl_internal_set_client(::Fusion::Photon::Realtime::LoadBalancingClient*  value) ;

/// @brief Method .ctor, addr 0x5f59198, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client) ;

/// @brief Convert to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr ::Fusion::Photon::Realtime::ILobbyCallbacks* i___Fusion__Photon__Realtime__ILobbyCallbacks() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbyCallbacksContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbyCallbacksContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyCallbacksContainer(LobbyCallbacksContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyCallbacksContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyCallbacksContainer(LobbyCallbacksContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28064};

/// @brief Field client, offset: 0x28, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::LoadBalancingClient*  ___client;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::LobbyCallbacksContainer, ___client) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::LobbyCallbacksContainer) == 0x30, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime

#pragma once
// IWYU pragma private; include "Photon/Realtime/LobbyCallbacksContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
CORDL_MODULE_EXPORT(LobbyCallbacksContainer)
namespace Photon::Realtime {
class ILobbyCallbacks;
}
namespace Photon::Realtime {
class LoadBalancingClient;
}
namespace Photon::Realtime {
class RoomInfo;
}
namespace Photon::Realtime {
class TypedLobbyInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Photon::Realtime {
class LobbyCallbacksContainer;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::LobbyCallbacksContainer*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::LobbyCallbacksContainer*, "Photon.Realtime", "LobbyCallbacksContainer");
// Dependencies System.Collections.Generic.List`1<T>
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.LobbyCallbacksContainer
class CORDL_TYPE LobbyCallbacksContainer : public ::System::Collections::Generic::List_1<::Photon::Realtime::ILobbyCallbacks*> {
public:
// Declarations
/// @brief Field client, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::Photon::Realtime::LoadBalancingClient*  client;

/// @brief Convert operator to "::Photon::Realtime::ILobbyCallbacks"
constexpr operator  ::Photon::Realtime::ILobbyCallbacks*() noexcept;

static inline ::Photon::Realtime::LobbyCallbacksContainer* New_ctor(::Photon::Realtime::LoadBalancingClient*  client) ;

/// @brief Method OnJoinedLobby, addr 0xa702ce0, size 0x1a4, virtual true, abstract: false, final true
inline void OnJoinedLobby() ;

/// @brief Method OnLeftLobby, addr 0xa702e84, size 0x1a8, virtual true, abstract: false, final true
inline void OnLeftLobby() ;

/// @brief Method OnLobbyStatisticsUpdate, addr 0xa705334, size 0x1b8, virtual true, abstract: false, final true
inline void OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics) ;

/// @brief Method OnRoomListUpdate, addr 0xa702b28, size 0x1b8, virtual true, abstract: false, final true
inline void OnRoomListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>*  roomList) ;

constexpr ::Photon::Realtime::LoadBalancingClient* const& __cordl_internal_get_client() const;

constexpr ::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client() ;

constexpr void __cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient*  value) ;

/// @brief Method .ctor, addr 0xa6fa6f4, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Photon::Realtime::LoadBalancingClient*  client) ;

/// @brief Convert to "::Photon::Realtime::ILobbyCallbacks"
constexpr ::Photon::Realtime::ILobbyCallbacks* i___Photon__Realtime__ILobbyCallbacks() noexcept;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29861};

/// @brief Field client, offset: 0x28, size: 0x8, def value: None
 ::Photon::Realtime::LoadBalancingClient*  ___client;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::LobbyCallbacksContainer, ___client) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::LobbyCallbacksContainer) == 0x30, "Size mismatch!");

} // namespace end def Photon::Realtime

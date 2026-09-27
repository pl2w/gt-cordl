#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/ILobbyCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILobbyCallbacks)
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
class ILobbyCallbacks;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::ILobbyCallbacks*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::ILobbyCallbacks*, "Fusion.Photon.Realtime", "ILobbyCallbacks");
// Dependencies 
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.ILobbyCallbacks
class CORDL_TYPE ILobbyCallbacks {
public:
// Declarations
/// @brief Method OnJoinedLobby, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnJoinedLobby() ;

/// @brief Method OnLeftLobby, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnLeftLobby() ;

/// @brief Method OnLobbyStatisticsUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics) ;

/// @brief Method OnRoomListUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnRoomListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*  roomList) ;

// Ctor Parameters [CppParam { name: "", ty: "ILobbyCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILobbyCallbacks(ILobbyCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28055};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Photon::Realtime

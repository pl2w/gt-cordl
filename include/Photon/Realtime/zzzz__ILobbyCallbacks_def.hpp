#pragma once
// IWYU pragma private; include "Photon/Realtime/ILobbyCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILobbyCallbacks)
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
class ILobbyCallbacks;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::ILobbyCallbacks*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::ILobbyCallbacks*, "Photon.Realtime", "ILobbyCallbacks");
// Dependencies 
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.ILobbyCallbacks
class CORDL_TYPE ILobbyCallbacks {
public:
// Declarations
/// @brief Method OnJoinedLobby, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnJoinedLobby() ;

/// @brief Method OnLeftLobby, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnLeftLobby() ;

/// @brief Method OnLobbyStatisticsUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics) ;

/// @brief Method OnRoomListUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnRoomListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>*  roomList) ;

// Ctor Parameters [CppParam { name: "", ty: "ILobbyCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILobbyCallbacks(ILobbyCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29852};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Realtime

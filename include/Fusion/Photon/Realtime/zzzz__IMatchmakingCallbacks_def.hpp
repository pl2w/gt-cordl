#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/IMatchmakingCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IMatchmakingCallbacks)
namespace Fusion::Photon::Realtime {
class FriendInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class IMatchmakingCallbacks;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::IMatchmakingCallbacks*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::IMatchmakingCallbacks*, "Fusion.Photon.Realtime", "IMatchmakingCallbacks");
// Dependencies 
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.IMatchmakingCallbacks
class CORDL_TYPE IMatchmakingCallbacks {
public:
// Declarations
/// @brief Method OnCreateRoomFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnCreateRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnCreatedRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnCreatedRoom() ;

/// @brief Method OnFriendListUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*  friendList) ;

/// @brief Method OnJoinRandomFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnJoinRandomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinRoomFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnJoinRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinedRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnLeftRoom() ;

// Ctor Parameters [CppParam { name: "", ty: "IMatchmakingCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMatchmakingCallbacks(IMatchmakingCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28056};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Photon::Realtime

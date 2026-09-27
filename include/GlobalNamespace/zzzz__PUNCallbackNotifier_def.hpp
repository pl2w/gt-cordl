#pragma once
// IWYU pragma private; include "GlobalNamespace/PUNCallbackNotifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PUNCallbackNotifier)
namespace ExitGames::Client::Photon {
class EventData;
}
namespace GlobalNamespace {
class NetworkSystemPUN;
}
namespace Photon::Realtime {
struct DisconnectCause;
}
namespace Photon::Realtime {
class IOnEventCallback;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class PUNCallbackNotifier;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PUNCallbackNotifier*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PUNCallbackNotifier*, "", "PUNCallbackNotifier");
// Dependencies Photon.Pun.MonoBehaviourPunCallbacks
namespace GlobalNamespace {
// Is value type: false
// CS Name: PUNCallbackNotifier
class CORDL_TYPE PUNCallbackNotifier : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
// Declarations
/// @brief Field parentSystem, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentSystem, put=__cordl_internal_set_parentSystem)) ::UnityW<::GlobalNamespace::NetworkSystemPUN>  parentSystem;

/// @brief Convert operator to "::Photon::Realtime::IOnEventCallback"
constexpr operator  ::Photon::Realtime::IOnEventCallback*() noexcept;

static inline ::GlobalNamespace::PUNCallbackNotifier* New_ctor() ;

/// @brief Method OnConnectedToMaster, addr 0x570d51c, size 0x18, virtual true, abstract: false, final false
inline void OnConnectedToMaster() ;

/// @brief Method OnCreateRoomFailed, addr 0x570d57c, size 0x18, virtual true, abstract: false, final false
inline void OnCreateRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnCustomAuthenticationFailed, addr 0x570d688, size 0x18, virtual true, abstract: false, final false
inline void OnCustomAuthenticationFailed(::StringW  debugMessage) ;

/// @brief Method OnCustomAuthenticationResponse, addr 0x570d670, size 0x18, virtual true, abstract: false, final false
inline void OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method OnDisconnected, addr 0x570d5c4, size 0x18, virtual true, abstract: false, final false
inline void OnDisconnected(::Photon::Realtime::DisconnectCause  cause) ;

/// @brief Method OnEvent, addr 0x570d5dc, size 0x64, virtual true, abstract: false, final true
inline void OnEvent(::ExitGames::Client::Photon::EventData*  photonEvent) ;

/// @brief Method OnJoinRandomFailed, addr 0x570d564, size 0x18, virtual true, abstract: false, final false
inline void OnJoinRandomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinRoomFailed, addr 0x570d54c, size 0x18, virtual true, abstract: false, final false
inline void OnJoinRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinedRoom, addr 0x570d534, size 0x18, virtual true, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnMasterClientSwitched, addr 0x570d658, size 0x18, virtual true, abstract: false, final false
inline void OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x570d594, size 0x18, virtual true, abstract: false, final false
inline void OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x570d5ac, size 0x18, virtual true, abstract: false, final false
inline void OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method OnPreLeavingRoom, addr 0x570d640, size 0x18, virtual true, abstract: false, final false
inline void OnPreLeavingRoom() ;

/// @brief Method Start, addr 0x570d4c0, size 0x58, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x570d518, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::NetworkSystemPUN> const& __cordl_internal_get_parentSystem() const;

constexpr ::UnityW<::GlobalNamespace::NetworkSystemPUN>& __cordl_internal_get_parentSystem() ;

constexpr void __cordl_internal_set_parentSystem(::UnityW<::GlobalNamespace::NetworkSystemPUN>  value) ;

/// @brief Method .ctor, addr 0x570d6a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Realtime::IOnEventCallback"
constexpr ::Photon::Realtime::IOnEventCallback* i___Photon__Realtime__IOnEventCallback() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PUNCallbackNotifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PUNCallbackNotifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PUNCallbackNotifier(PUNCallbackNotifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PUNCallbackNotifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PUNCallbackNotifier(PUNCallbackNotifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1159};

/// @brief Field parentSystem, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkSystemPUN>  ___parentSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PUNCallbackNotifier, ___parentSystem) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PUNCallbackNotifier) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "Photon/Realtime/MatchMakingCallbacksContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatchMakingCallbacksContainer)
namespace Photon::Realtime {
class FriendInfo;
}
namespace Photon::Realtime {
class IMatchmakingCallbacks;
}
namespace Photon::Realtime {
class LoadBalancingClient;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Photon::Realtime {
class MatchMakingCallbacksContainer;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::MatchMakingCallbacksContainer*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::MatchMakingCallbacksContainer*, "Photon.Realtime", "MatchMakingCallbacksContainer");
// Dependencies System.Collections.Generic.List`1<T>
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.MatchMakingCallbacksContainer
class CORDL_TYPE MatchMakingCallbacksContainer : public ::System::Collections::Generic::List_1<::Photon::Realtime::IMatchmakingCallbacks*> {
public:
// Declarations
/// @brief Field client, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::Photon::Realtime::LoadBalancingClient*  client;

/// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr operator  ::Photon::Realtime::IMatchmakingCallbacks*() noexcept;

static inline ::Photon::Realtime::MatchMakingCallbacksContainer* New_ctor(::Photon::Realtime::LoadBalancingClient*  client) ;

/// @brief Method OnCreateRoomFailed, addr 0xa700240, size 0x1c0, virtual true, abstract: false, final true
inline void OnCreateRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnCreatedRoom, addr 0xa6ff6b0, size 0x1a8, virtual true, abstract: false, final true
inline void OnCreatedRoom() ;

/// @brief Method OnFriendListUpdate, addr 0xa70302c, size 0x1b4, virtual true, abstract: false, final true
inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*  friendList) ;

/// @brief Method OnJoinRandomFailed, addr 0xa700400, size 0x1c0, virtual true, abstract: false, final true
inline void OnJoinRandomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinRoomFailed, addr 0xa700080, size 0x1c0, virtual true, abstract: false, final true
inline void OnJoinRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinedRoom, addr 0xa6ff858, size 0x1a8, virtual true, abstract: false, final true
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0xa703d58, size 0x284, virtual true, abstract: false, final true
inline void OnLeftRoom() ;

/// @brief Method OnPreLeavingRoom, addr 0xa6fbdbc, size 0x284, virtual true, abstract: false, final true
inline void OnPreLeavingRoom() ;

constexpr ::Photon::Realtime::LoadBalancingClient* const& __cordl_internal_get_client() const;

constexpr ::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client() ;

constexpr void __cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient*  value) ;

/// @brief Method .ctor, addr 0xa6fa5e4, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Photon::Realtime::LoadBalancingClient*  client) ;

/// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Photon::Realtime::IMatchmakingCallbacks* i___Photon__Realtime__IMatchmakingCallbacks() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchMakingCallbacksContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchMakingCallbacksContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchMakingCallbacksContainer(MatchMakingCallbacksContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchMakingCallbacksContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchMakingCallbacksContainer(MatchMakingCallbacksContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29859};

/// @brief Field client, offset: 0x28, size: 0x8, def value: None
 ::Photon::Realtime::LoadBalancingClient*  ___client;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::MatchMakingCallbacksContainer, ___client) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::MatchMakingCallbacksContainer) == 0x30, "Size mismatch!");

} // namespace end def Photon::Realtime

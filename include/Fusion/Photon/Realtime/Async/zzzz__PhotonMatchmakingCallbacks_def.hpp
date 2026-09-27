#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/PhotonMatchmakingCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonMatchmakingCallbacks)
namespace Fusion::Photon::Realtime {
class FriendInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Fusion::Photon::Realtime::Async {
class PhotonMatchmakingCallbacks;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks*, "Fusion.Photon.Realtime.Async", "PhotonMatchmakingCallbacks");
// Dependencies System.Object
namespace Fusion::Photon::Realtime::Async {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Async.PhotonMatchmakingCallbacks
class CORDL_TYPE PhotonMatchmakingCallbacks : public ::System::Object {
public:
// Declarations
/// @brief Field CreateRoomFailed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_CreateRoomFailed, put=__cordl_internal_set_CreateRoomFailed)) ::System::Action_2<int16_t,::StringW>*  CreateRoomFailed;

/// @brief Field CreatedRoom, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CreatedRoom, put=__cordl_internal_set_CreatedRoom)) ::System::Action*  CreatedRoom;

/// @brief Field FriendListUpdate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_FriendListUpdate, put=__cordl_internal_set_FriendListUpdate)) ::System::Action_1<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*>*  FriendListUpdate;

/// @brief Field JoinRoomFailed, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_JoinRoomFailed, put=__cordl_internal_set_JoinRoomFailed)) ::System::Action_2<int16_t,::StringW>*  JoinRoomFailed;

/// @brief Field JoinRoomRandomFailed, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_JoinRoomRandomFailed, put=__cordl_internal_set_JoinRoomRandomFailed)) ::System::Action_2<int16_t,::StringW>*  JoinRoomRandomFailed;

/// @brief Field JoinedRoom, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_JoinedRoom, put=__cordl_internal_set_JoinedRoom)) ::System::Action*  JoinedRoom;

/// @brief Field LeftRoom, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_LeftRoom, put=__cordl_internal_set_LeftRoom)) ::System::Action*  LeftRoom;

static inline ::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks* New_ctor() ;

constexpr ::System::Action_2<int16_t,::StringW>* const& __cordl_internal_get_CreateRoomFailed() const;

constexpr ::System::Action_2<int16_t,::StringW>*& __cordl_internal_get_CreateRoomFailed() ;

constexpr ::System::Action* const& __cordl_internal_get_CreatedRoom() const;

constexpr ::System::Action*& __cordl_internal_get_CreatedRoom() ;

constexpr ::System::Action_1<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*>* const& __cordl_internal_get_FriendListUpdate() const;

constexpr ::System::Action_1<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*>*& __cordl_internal_get_FriendListUpdate() ;

constexpr ::System::Action_2<int16_t,::StringW>* const& __cordl_internal_get_JoinRoomFailed() const;

constexpr ::System::Action_2<int16_t,::StringW>*& __cordl_internal_get_JoinRoomFailed() ;

constexpr ::System::Action_2<int16_t,::StringW>* const& __cordl_internal_get_JoinRoomRandomFailed() const;

constexpr ::System::Action_2<int16_t,::StringW>*& __cordl_internal_get_JoinRoomRandomFailed() ;

constexpr ::System::Action* const& __cordl_internal_get_JoinedRoom() const;

constexpr ::System::Action*& __cordl_internal_get_JoinedRoom() ;

constexpr ::System::Action* const& __cordl_internal_get_LeftRoom() const;

constexpr ::System::Action*& __cordl_internal_get_LeftRoom() ;

constexpr void __cordl_internal_set_CreateRoomFailed(::System::Action_2<int16_t,::StringW>*  value) ;

constexpr void __cordl_internal_set_CreatedRoom(::System::Action*  value) ;

constexpr void __cordl_internal_set_FriendListUpdate(::System::Action_1<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*>*  value) ;

constexpr void __cordl_internal_set_JoinRoomFailed(::System::Action_2<int16_t,::StringW>*  value) ;

constexpr void __cordl_internal_set_JoinRoomRandomFailed(::System::Action_2<int16_t,::StringW>*  value) ;

constexpr void __cordl_internal_set_JoinedRoom(::System::Action*  value) ;

constexpr void __cordl_internal_set_LeftRoom(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x5f69114, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonMatchmakingCallbacks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonMatchmakingCallbacks", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonMatchmakingCallbacks(PhotonMatchmakingCallbacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonMatchmakingCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonMatchmakingCallbacks(PhotonMatchmakingCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28119};

/// @brief Field FriendListUpdate, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*>*  ___FriendListUpdate;

/// @brief Field JoinedRoom, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___JoinedRoom;

/// @brief Field CreatedRoom, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___CreatedRoom;

/// @brief Field JoinRoomFailed, offset: 0x28, size: 0x8, def value: None
 ::System::Action_2<int16_t,::StringW>*  ___JoinRoomFailed;

/// @brief Field JoinRoomRandomFailed, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<int16_t,::StringW>*  ___JoinRoomRandomFailed;

/// @brief Field CreateRoomFailed, offset: 0x38, size: 0x8, def value: None
 ::System::Action_2<int16_t,::StringW>*  ___CreateRoomFailed;

/// @brief Field LeftRoom, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___LeftRoom;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks, ___FriendListUpdate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks, ___JoinedRoom) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks, ___CreatedRoom) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks, ___JoinRoomFailed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks, ___JoinRoomRandomFailed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks, ___CreateRoomFailed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks, ___LeftRoom) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks) == 0x48, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime::Async

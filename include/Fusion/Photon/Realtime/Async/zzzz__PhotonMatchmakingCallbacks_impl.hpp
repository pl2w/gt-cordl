#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/PhotonMatchmakingCallbacks.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/Async/zzzz__PhotonMatchmakingCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__FriendInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::*)()>(&::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f69114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*>*& Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_get_FriendListUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FriendListUpdate;
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*>* const& Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_get_FriendListUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FriendListUpdate;
}
constexpr void Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_set_FriendListUpdate(::System::Action_1<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FriendListUpdate = value;
}
constexpr ::System::Action*& Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_get_JoinedRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinedRoom;
}
constexpr ::System::Action* const& Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_get_JoinedRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinedRoom;
}
constexpr void Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_set_JoinedRoom(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JoinedRoom = value;
}
constexpr ::System::Action*& Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_get_CreatedRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreatedRoom;
}
constexpr ::System::Action* const& Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_get_CreatedRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreatedRoom;
}
constexpr void Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_set_CreatedRoom(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreatedRoom = value;
}
constexpr ::System::Action_2<int16_t,::StringW>*& Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_get_JoinRoomFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinRoomFailed;
}
constexpr ::System::Action_2<int16_t,::StringW>* const& Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_get_JoinRoomFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinRoomFailed;
}
constexpr void Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_set_JoinRoomFailed(::System::Action_2<int16_t,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JoinRoomFailed = value;
}
constexpr ::System::Action_2<int16_t,::StringW>*& Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_get_JoinRoomRandomFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinRoomRandomFailed;
}
constexpr ::System::Action_2<int16_t,::StringW>* const& Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_get_JoinRoomRandomFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinRoomRandomFailed;
}
constexpr void Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_set_JoinRoomRandomFailed(::System::Action_2<int16_t,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JoinRoomRandomFailed = value;
}
constexpr ::System::Action_2<int16_t,::StringW>*& Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_get_CreateRoomFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateRoomFailed;
}
constexpr ::System::Action_2<int16_t,::StringW>* const& Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_get_CreateRoomFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateRoomFailed;
}
constexpr void Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_set_CreateRoomFailed(::System::Action_2<int16_t,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreateRoomFailed = value;
}
constexpr ::System::Action*& Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_get_LeftRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeftRoom;
}
constexpr ::System::Action* const& Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_get_LeftRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeftRoom;
}
constexpr void Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::__cordl_internal_set_LeftRoom(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LeftRoom = value;
}
inline void Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks* Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks::PhotonMatchmakingCallbacks()   {
}

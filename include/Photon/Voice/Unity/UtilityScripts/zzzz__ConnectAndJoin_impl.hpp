#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/ConnectAndJoin.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Voice/Unity/UtilityScripts/zzzz__ConnectAndJoin_def.hpp"
#include "Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Photon/Realtime/zzzz__EnterRoomParams_def.hpp"
#include "Photon/Realtime/zzzz__FriendInfo_def.hpp"
#include "Photon/Realtime/zzzz__IConnectionCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__IMatchmakingCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceConnection_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)()>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::get_IsConnected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa788468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"get_IsConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)()>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa788490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)()>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnEnable)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa7884e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)()>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa78854c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.ConnectNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)()>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::ConnectNow)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa788530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"ConnectNow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.OnCreatedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)()>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnCreatedRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa78857c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnCreatedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.OnCreateRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)(int16_t, ::StringW)>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnCreateRoomFailed)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa788580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnCreateRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.OnFriendListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*)>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnFriendListUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa7886bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnFriendListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)()>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnJoinedRoom)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa7886c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.OnJoinRandomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)(int16_t, ::StringW)>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnJoinRandomFailed)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa7887b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnJoinRandomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.OnJoinRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)(int16_t, ::StringW)>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnJoinRoomFailed)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa7888f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnJoinRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)()>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa788a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.OnPreLeavingRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)()>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnPreLeavingRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa788a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnPreLeavingRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)()>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnConnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa788a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.OnConnectedToMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)()>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnConnectedToMaster)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa788a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnConnectedToMaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)(::Photon::Realtime::DisconnectCause)>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnDisconnected)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa788b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnDisconnected", {}, {::i2c::type_of<::Photon::Realtime::DisconnectCause>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.OnRegionListReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)(::Photon::Realtime::RegionHandler*)>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnRegionListReceived)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa788c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnRegionListReceived", {}, {::i2c::type_of<::Photon::Realtime::RegionHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa788c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin.OnCustomAuthenticationFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)(::StringW)>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnCustomAuthenticationFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa788c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnCustomAuthenticationFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::*)()>(&::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa788c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_get_voiceConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceConnection;
}
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_get_voiceConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceConnection;
}
constexpr void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_set_voiceConnection(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceConnection = value;
}
constexpr bool& Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_get_RandomRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RandomRoom;
}
constexpr bool const& Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_get_RandomRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RandomRoom;
}
constexpr void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_set_RandomRoom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RandomRoom = value;
}
constexpr bool& Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_get_autoConnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoConnect;
}
constexpr bool const& Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_get_autoConnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoConnect;
}
constexpr void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_set_autoConnect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoConnect = value;
}
constexpr bool& Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_get_autoTransmit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoTransmit;
}
constexpr bool const& Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_get_autoTransmit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoTransmit;
}
constexpr void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_set_autoTransmit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoTransmit = value;
}
constexpr bool& Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_get_publishUserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publishUserId;
}
constexpr bool const& Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_get_publishUserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publishUserId;
}
constexpr void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_set_publishUserId(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___publishUserId = value;
}
constexpr ::StringW& Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_get_RoomName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomName;
}
constexpr ::StringW const& Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_get_RoomName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomName;
}
constexpr void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_set_RoomName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomName = value;
}
constexpr ::Photon::Realtime::EnterRoomParams*& Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_get_enterRoomParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterRoomParams;
}
constexpr ::Photon::Realtime::EnterRoomParams* const& Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_get_enterRoomParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterRoomParams;
}
constexpr void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::__cordl_internal_set_enterRoomParams(::Photon::Realtime::EnterRoomParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterRoomParams = value;
}
inline bool Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::ConnectNow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"ConnectNow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnCreatedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnCreatedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnCreateRoomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnCreateRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*  friendList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnFriendListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, friendList);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnJoinRandomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnJoinRandomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnJoinRoomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnJoinRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnPreLeavingRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnPreLeavingRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnConnectedToMaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnConnectedToMaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnDisconnected(::Photon::Realtime::DisconnectCause  cause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnDisconnected", {}, {::i2c::type_of<::Photon::Realtime::DisconnectCause>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnRegionListReceived(::Photon::Realtime::RegionHandler*  regionHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnRegionListReceived", {}, {::i2c::type_of<::Photon::Realtime::RegionHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, regionHandler);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::OnCustomAuthenticationFailed(::StringW  debugMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {"OnCustomAuthenticationFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugMessage);
}
inline void Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin* Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*>());
}
/// @brief Convert operator to "::Photon::Realtime::IConnectionCallbacks"
constexpr  Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::operator ::Photon::Realtime::IConnectionCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IConnectionCallbacks"
constexpr ::Photon::Realtime::IConnectionCallbacks* Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::i___Photon__Realtime__IConnectionCallbacks() noexcept {
return static_cast<::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr  Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::operator ::Photon::Realtime::IMatchmakingCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Photon::Realtime::IMatchmakingCallbacks* Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::i___Photon__Realtime__IMatchmakingCallbacks() noexcept {
return static_cast<::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin::ConnectAndJoin()   {
}

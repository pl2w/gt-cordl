#pragma once
// IWYU pragma private; include "Photon/Voice/PUN/PhotonVoiceNetwork.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceConnection_impl.hpp"
#include "Photon/Voice/PUN/zzzz__PhotonVoiceNetwork_def.hpp"
#include "Photon/Realtime/zzzz__ClientState_def.hpp"
#include "Photon/Realtime/zzzz__EnterRoomParams_def.hpp"
#include "Photon/Voice/Unity/zzzz__Speaker_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork> (*)()>(&::Photon::Voice::PUN::PhotonVoiceNetwork::get_Instance)> {
  constexpr static std::size_t size = 0x76c;
  constexpr static std::size_t addrs = 0xa77c80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Voice::PUN::PhotonVoiceNetwork*)>(&::Photon::Voice::PUN::PhotonVoiceNetwork::set_Instance)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0xa77cf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"set_Instance", {}, {::i2c::type_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.get_UsePunAuthValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceNetwork::*)()>(&::Photon::Voice::PUN::PhotonVoiceNetwork::get_UsePunAuthValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77d508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"get_UsePunAuthValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.set_UsePunAuthValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceNetwork::*)(bool)>(&::Photon::Voice::PUN::PhotonVoiceNetwork::set_UsePunAuthValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77d510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"set_UsePunAuthValues", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.ConnectAndJoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceNetwork::*)()>(&::Photon::Voice::PUN::PhotonVoiceNetwork::ConnectAndJoinRoom)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa77d518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"ConnectAndJoinRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceNetwork::*)()>(&::Photon::Voice::PUN::PhotonVoiceNetwork::Disconnect)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa77d9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"Disconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceNetwork::*)()>(&::Photon::Voice::PUN::PhotonVoiceNetwork::Awake)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa77daec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                    {::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceNetwork::*)()>(&::Photon::Voice::PUN::PhotonVoiceNetwork::OnEnable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa77dc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceNetwork::*)()>(&::Photon::Voice::PUN::PhotonVoiceNetwork::OnDisable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa77e1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                    {::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceNetwork::*)()>(&::Photon::Voice::PUN::PhotonVoiceNetwork::OnDestroy)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xa77e28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                    {::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.OnPunStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceNetwork::*)(::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState)>(&::Photon::Voice::PUN::PhotonVoiceNetwork::OnPunStateChanged)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa77e54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"OnPunStateChanged", {}, {::i2c::type_of<::Photon::Realtime::ClientState>(), ::i2c::type_of<::Photon::Realtime::ClientState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.OnVoiceStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceNetwork::*)(::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState)>(&::Photon::Voice::PUN::PhotonVoiceNetwork::OnVoiceStateChanged)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa77e710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                    {::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.FollowPun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceNetwork::*)(::Photon::Realtime::ClientState)>(&::Photon::Voice::PUN::PhotonVoiceNetwork::FollowPun)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa77e6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"FollowPun", {}, {::i2c::type_of<::Photon::Realtime::ClientState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.SimpleSpeakerFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Voice::Unity::Speaker> (::Photon::Voice::PUN::PhotonVoiceNetwork::*)(int32_t, uint8_t, ::System::Object*)>(&::Photon::Voice::PUN::PhotonVoiceNetwork::SimpleSpeakerFactory)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0xa77e884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                    {::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.GetVoiceRoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Photon::Voice::PUN::PhotonVoiceNetwork::GetVoiceRoomName)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa77f060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"GetVoiceRoomName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.ConnectOrJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceNetwork::*)()>(&::Photon::Voice::PUN::PhotonVoiceNetwork::ConnectOrJoin)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0xa77f124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"ConnectOrJoin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceNetwork::*)()>(&::Photon::Voice::PUN::PhotonVoiceNetwork::Connect)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xa77d6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"Connect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.JoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceNetwork::*)(::StringW)>(&::Photon::Voice::PUN::PhotonVoiceNetwork::JoinRoom)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa77f5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"JoinRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.FollowPun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceNetwork::*)()>(&::Photon::Voice::PUN::PhotonVoiceNetwork::FollowPun)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0xa77dd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"FollowPun", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork.CheckLateLinking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceNetwork::*)(::Photon::Voice::Unity::Speaker*, int32_t)>(&::Photon::Voice::PUN::PhotonVoiceNetwork::CheckLateLinking)> {
  constexpr static std::size_t size = 0x7c4;
  constexpr static std::size_t addrs = 0xa77f700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"CheckLateLinking", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceNetwork._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceNetwork::*)()>(&::Photon::Voice::PUN::PhotonVoiceNetwork::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa77fec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_AutoConnectAndJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoConnectAndJoin;
}
constexpr bool const& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_AutoConnectAndJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoConnectAndJoin;
}
constexpr void Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_set_AutoConnectAndJoin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoConnectAndJoin = value;
}
constexpr bool& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_AutoLeaveAndDisconnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoLeaveAndDisconnect;
}
constexpr bool const& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_AutoLeaveAndDisconnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoLeaveAndDisconnect;
}
constexpr void Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_set_AutoLeaveAndDisconnect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoLeaveAndDisconnect = value;
}
constexpr bool& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_WorkInOfflineMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorkInOfflineMode;
}
constexpr bool const& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_WorkInOfflineMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorkInOfflineMode;
}
constexpr void Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_set_WorkInOfflineMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WorkInOfflineMode = value;
}
constexpr ::Photon::Realtime::EnterRoomParams*& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_voiceRoomParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceRoomParams;
}
constexpr ::Photon::Realtime::EnterRoomParams* const& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_voiceRoomParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceRoomParams;
}
constexpr void Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_set_voiceRoomParams(::Photon::Realtime::EnterRoomParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceRoomParams = value;
}
constexpr bool& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_clientCalledConnectAndJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientCalledConnectAndJoin;
}
constexpr bool const& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_clientCalledConnectAndJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientCalledConnectAndJoin;
}
constexpr void Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_set_clientCalledConnectAndJoin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientCalledConnectAndJoin = value;
}
constexpr bool& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_clientCalledDisconnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientCalledDisconnect;
}
constexpr bool const& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_clientCalledDisconnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientCalledDisconnect;
}
constexpr void Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_set_clientCalledDisconnect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientCalledDisconnect = value;
}
constexpr bool& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_clientCalledConnectOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientCalledConnectOnly;
}
constexpr bool const& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_clientCalledConnectOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientCalledConnectOnly;
}
constexpr void Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_set_clientCalledConnectOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientCalledConnectOnly = value;
}
constexpr bool& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_internalDisconnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalDisconnect;
}
constexpr bool const& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_internalDisconnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalDisconnect;
}
constexpr void Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_set_internalDisconnect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___internalDisconnect = value;
}
constexpr bool& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_internalConnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalConnect;
}
constexpr bool const& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_internalConnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalConnect;
}
constexpr void Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_set_internalConnect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___internalConnect = value;
}
constexpr bool& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_usePunAppSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usePunAppSettings;
}
constexpr bool const& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_usePunAppSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usePunAppSettings;
}
constexpr void Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_set_usePunAppSettings(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usePunAppSettings = value;
}
constexpr bool& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_usePunAuthValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usePunAuthValues;
}
constexpr bool const& Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_get_usePunAuthValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usePunAuthValues;
}
constexpr void Photon::Voice::PUN::PhotonVoiceNetwork::__cordl_internal_set_usePunAuthValues(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usePunAuthValues = value;
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::setStaticF_instanceLock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "instanceLock", ::Photon::Voice::PUN::PhotonVoiceNetwork*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Voice::PUN::PhotonVoiceNetwork::getStaticF_instanceLock()  {
return ::cordl_internals::getStaticField<::System::Object*, "instanceLock", ::Photon::Voice::PUN::PhotonVoiceNetwork*>();
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::setStaticF_instance(::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork>  value)  {
::cordl_internals::setStaticField<::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork>, "instance", ::Photon::Voice::PUN::PhotonVoiceNetwork*>(std::forward<::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork>>(value));
}
inline ::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork> Photon::Voice::PUN::PhotonVoiceNetwork::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork>, "instance", ::Photon::Voice::PUN::PhotonVoiceNetwork*>();
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::setStaticF_instantiated(bool  value)  {
::cordl_internals::setStaticField<bool, "instantiated", ::Photon::Voice::PUN::PhotonVoiceNetwork*>(std::forward<bool>(value));
}
inline bool Photon::Voice::PUN::PhotonVoiceNetwork::getStaticF_instantiated()  {
return ::cordl_internals::getStaticField<bool, "instantiated", ::Photon::Voice::PUN::PhotonVoiceNetwork*>();
}
inline ::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork> Photon::Voice::PUN::PhotonVoiceNetwork::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork>>(nullptr, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::set_Instance(::Photon::Voice::PUN::PhotonVoiceNetwork*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"set_Instance", {}, {::i2c::type_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Photon::Voice::PUN::PhotonVoiceNetwork::get_UsePunAuthValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"get_UsePunAuthValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::set_UsePunAuthValues(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"set_UsePunAuthValues", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::PUN::PhotonVoiceNetwork::ConnectAndJoinRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"ConnectAndJoinRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"Disconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::OnPunStateChanged(::Photon::Realtime::ClientState  fromState, ::Photon::Realtime::ClientState  toState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"OnPunStateChanged", {}, {::i2c::type_of<::Photon::Realtime::ClientState>(), ::i2c::type_of<::Photon::Realtime::ClientState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromState, toState);
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::OnVoiceStateChanged(::Photon::Realtime::ClientState  fromState, ::Photon::Realtime::ClientState  toState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromState, toState);
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::FollowPun(::Photon::Realtime::ClientState  toState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"FollowPun", {}, {::i2c::type_of<::Photon::Realtime::ClientState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toState);
}
inline ::UnityW<::Photon::Voice::Unity::Speaker> Photon::Voice::PUN::PhotonVoiceNetwork::SimpleSpeakerFactory(int32_t  playerId, uint8_t  voiceId, ::System::Object*  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Voice::Unity::Speaker>>(this, ___internal_method, playerId, voiceId, userData);
}
inline ::StringW Photon::Voice::PUN::PhotonVoiceNetwork::GetVoiceRoomName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"GetVoiceRoomName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::ConnectOrJoin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"ConnectOrJoin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::PUN::PhotonVoiceNetwork::Connect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"Connect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::PUN::PhotonVoiceNetwork::JoinRoom(::StringW  voiceRoomName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"JoinRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, voiceRoomName);
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::FollowPun()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"FollowPun", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::CheckLateLinking(::Photon::Voice::Unity::Speaker*  speaker, int32_t  viewId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {"CheckLateLinking", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speaker, viewId);
}
inline void Photon::Voice::PUN::PhotonVoiceNetwork::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceNetwork*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::PUN::PhotonVoiceNetwork* Photon::Voice::PUN::PhotonVoiceNetwork::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::PUN::PhotonVoiceNetwork*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::PUN::PhotonVoiceNetwork::PhotonVoiceNetwork()   {
}

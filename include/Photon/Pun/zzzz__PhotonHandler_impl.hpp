#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonHandler.hpp"
#include "Photon/Realtime/zzzz__ConnectionHandler_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/zzzz__PhotonHandler_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Photon/Pun/zzzz__PhotonHandler_def.hpp"
#include "Photon/Realtime/zzzz__FriendInfo_def.hpp"
#include "Photon/Realtime/zzzz__IInRoomCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__IMatchmakingCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "Photon/Realtime/zzzz__SupportLogger_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_2_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Pun::PhotonHandler> (*)()>(&::Photon::Pun::PhotonHandler::get_Instance)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa7122bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)()>(&::Photon::Pun::PhotonHandler::Awake)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa712490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                    {::i2c::class_of<::Photon::Pun::PhotonHandler*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)()>(&::Photon::Pun::PhotonHandler::OnEnable)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0xa7125b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                    {::i2c::class_of<::Photon::Pun::PhotonHandler*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)()>(&::Photon::Pun::PhotonHandler::Start)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa712d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)()>(&::Photon::Pun::PhotonHandler::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa712e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                    {::i2c::class_of<::Photon::Pun::PhotonHandler*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)()>(&::Photon::Pun::PhotonHandler::FixedUpdate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa71311c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)()>(&::Photon::Pun::PhotonHandler::LateUpdate)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xa713440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.Dispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)()>(&::Photon::Pun::PhotonHandler::Dispatch)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xa7131a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"Dispatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.OnCreatedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)()>(&::Photon::Pun::PhotonHandler::OnCreatedRoom)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa713b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnCreatedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.OnRoomPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)(::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Pun::PhotonHandler::OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa71407c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.OnPlayerPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Pun::PhotonHandler::OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa714300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonHandler::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa714304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.OnFriendListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*)>(&::Photon::Pun::PhotonHandler::OnFriendListUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa71497c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnFriendListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.OnCreateRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)(int16_t, ::StringW)>(&::Photon::Pun::PhotonHandler::OnCreateRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa714980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnCreateRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.OnJoinRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)(int16_t, ::StringW)>(&::Photon::Pun::PhotonHandler::OnJoinRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa714984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnJoinRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.OnJoinRandomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)(int16_t, ::StringW)>(&::Photon::Pun::PhotonHandler::OnJoinRandomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa714988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnJoinRandomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)()>(&::Photon::Pun::PhotonHandler::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa71498c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)()>(&::Photon::Pun::PhotonHandler::OnLeftRoom)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa714c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.OnPreLeavingRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)()>(&::Photon::Pun::PhotonHandler::OnPreLeavingRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa714ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnPreLeavingRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonHandler::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa715000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonHandler::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xa715004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler::*)()>(&::Photon::Pun::PhotonHandler::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa715424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Pun::PhotonHandler::__cordl_internal_get_UpdateInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateInterval;
}
constexpr int32_t const& Photon::Pun::PhotonHandler::__cordl_internal_get_UpdateInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateInterval;
}
constexpr void Photon::Pun::PhotonHandler::__cordl_internal_set_UpdateInterval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateInterval = value;
}
constexpr int32_t& Photon::Pun::PhotonHandler::__cordl_internal_get_UpdateIntervalOnSerialize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateIntervalOnSerialize;
}
constexpr int32_t const& Photon::Pun::PhotonHandler::__cordl_internal_get_UpdateIntervalOnSerialize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateIntervalOnSerialize;
}
constexpr void Photon::Pun::PhotonHandler::__cordl_internal_set_UpdateIntervalOnSerialize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateIntervalOnSerialize = value;
}
constexpr int32_t& Photon::Pun::PhotonHandler::__cordl_internal_get_nextSendTickCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSendTickCount;
}
constexpr int32_t const& Photon::Pun::PhotonHandler::__cordl_internal_get_nextSendTickCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSendTickCount;
}
constexpr void Photon::Pun::PhotonHandler::__cordl_internal_set_nextSendTickCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSendTickCount = value;
}
constexpr int32_t& Photon::Pun::PhotonHandler::__cordl_internal_get_nextSendTickCountOnSerialize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSendTickCountOnSerialize;
}
constexpr int32_t const& Photon::Pun::PhotonHandler::__cordl_internal_get_nextSendTickCountOnSerialize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSendTickCountOnSerialize;
}
constexpr void Photon::Pun::PhotonHandler::__cordl_internal_set_nextSendTickCountOnSerialize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSendTickCountOnSerialize = value;
}
constexpr ::UnityW<::Photon::Realtime::SupportLogger>& Photon::Pun::PhotonHandler::__cordl_internal_get_supportLoggerComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___supportLoggerComponent;
}
constexpr ::UnityW<::Photon::Realtime::SupportLogger> const& Photon::Pun::PhotonHandler::__cordl_internal_get_supportLoggerComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___supportLoggerComponent;
}
constexpr void Photon::Pun::PhotonHandler::__cordl_internal_set_supportLoggerComponent(::UnityW<::Photon::Realtime::SupportLogger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___supportLoggerComponent = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Photon::Pun::PhotonHandler::__cordl_internal_get_reusableIntList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reusableIntList;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Photon::Pun::PhotonHandler::__cordl_internal_get_reusableIntList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reusableIntList;
}
constexpr void Photon::Pun::PhotonHandler::__cordl_internal_set_reusableIntList(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reusableIntList = value;
}
inline void Photon::Pun::PhotonHandler::setStaticF_instance(::UnityW<::Photon::Pun::PhotonHandler>  value)  {
::cordl_internals::setStaticField<::UnityW<::Photon::Pun::PhotonHandler>, "instance", ::Photon::Pun::PhotonHandler*>(std::forward<::UnityW<::Photon::Pun::PhotonHandler>>(value));
}
inline ::UnityW<::Photon::Pun::PhotonHandler> Photon::Pun::PhotonHandler::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Photon::Pun::PhotonHandler>, "instance", ::Photon::Pun::PhotonHandler*>();
}
inline void Photon::Pun::PhotonHandler::setStaticF_MaxDatagrams(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MaxDatagrams", ::Photon::Pun::PhotonHandler*>(std::forward<int32_t>(value));
}
inline int32_t Photon::Pun::PhotonHandler::getStaticF_MaxDatagrams()  {
return ::cordl_internals::getStaticField<int32_t, "MaxDatagrams", ::Photon::Pun::PhotonHandler*>();
}
inline void Photon::Pun::PhotonHandler::setStaticF_SendAsap(bool  value)  {
::cordl_internals::setStaticField<bool, "SendAsap", ::Photon::Pun::PhotonHandler*>(std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonHandler::getStaticF_SendAsap()  {
return ::cordl_internals::getStaticField<bool, "SendAsap", ::Photon::Pun::PhotonHandler*>();
}
inline ::UnityW<::Photon::Pun::PhotonHandler> Photon::Pun::PhotonHandler::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::PhotonHandler>>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonHandler::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::PhotonHandler*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonHandler::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::PhotonHandler*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonHandler::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonHandler::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::PhotonHandler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonHandler::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonHandler::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonHandler::Dispatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"Dispatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonHandler::OnCreatedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnCreatedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonHandler::OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesThatChanged);
}
inline void Photon::Pun::PhotonHandler::OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, changedProps);
}
inline void Photon::Pun::PhotonHandler::OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void Photon::Pun::PhotonHandler::OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*  friendList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnFriendListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, friendList);
}
inline void Photon::Pun::PhotonHandler::OnCreateRoomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnCreateRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::PhotonHandler::OnJoinRoomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnJoinRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::PhotonHandler::OnJoinRandomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnJoinRandomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::PhotonHandler::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonHandler::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonHandler::OnPreLeavingRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnPreLeavingRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonHandler::OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void Photon::Pun::PhotonHandler::OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void Photon::Pun::PhotonHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::PhotonHandler* Photon::Pun::PhotonHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonHandler*>());
}
/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr  Photon::Pun::PhotonHandler::operator ::Photon::Realtime::IInRoomCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* Photon::Pun::PhotonHandler::i___Photon__Realtime__IInRoomCallbacks() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr  Photon::Pun::PhotonHandler::operator ::Photon::Realtime::IMatchmakingCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Photon::Realtime::IMatchmakingCallbacks* Photon::Pun::PhotonHandler::i___Photon__Realtime__IMatchmakingCallbacks() noexcept {
return static_cast<::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonHandler::PhotonHandler()   {
}
//  Writing Method size for method: ::Photon::Pun::PhotonHandler___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler___c::*)()>(&::Photon::Pun::PhotonHandler___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa715560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonHandler___c._Start_b__13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonHandler___c::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::Photon::Pun::PhotonHandler___c::_Start_b__13_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa715568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler___c*>(),
                        {"<Start>b__13_0", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::PhotonHandler___c::setStaticF___9(::Photon::Pun::PhotonHandler___c*  value)  {
::cordl_internals::setStaticField<::Photon::Pun::PhotonHandler___c*, "<>9", ::Photon::Pun::PhotonHandler___c*>(std::forward<::Photon::Pun::PhotonHandler___c*>(value));
}
inline ::Photon::Pun::PhotonHandler___c* Photon::Pun::PhotonHandler___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Photon::Pun::PhotonHandler___c*, "<>9", ::Photon::Pun::PhotonHandler___c*>();
}
inline void Photon::Pun::PhotonHandler___c::setStaticF___9__13_0(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*, "<>9__13_0", ::Photon::Pun::PhotonHandler___c*>(std::forward<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*>(value));
}
inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>* Photon::Pun::PhotonHandler___c::getStaticF___9__13_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*, "<>9__13_0", ::Photon::Pun::PhotonHandler___c*>();
}
inline void Photon::Pun::PhotonHandler___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonHandler___c::_Start_b__13_0(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  loadingMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonHandler___c*>(),
                        {"<Start>b__13_0", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, loadingMode);
}
inline ::Photon::Pun::PhotonHandler___c* Photon::Pun::PhotonHandler___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonHandler___c*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonHandler___c::PhotonHandler___c()   {
}

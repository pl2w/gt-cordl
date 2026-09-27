#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/CustomMatchmaking.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomCreationOptions_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomOperationResult_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking__CreateRoom_d__25_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking__CreateRoom_d__26_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking__JoinOpenRoom_d__28_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking__JoinRoom_d__27_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.get_LobbyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::get_LobbyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6a864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"get_LobbyName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.set_LobbyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)(::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::set_LobbyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6a86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"set_LobbyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.get_IsPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::get_IsPrivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6a874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"get_IsPrivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.set_IsPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)(bool)>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::set_IsPrivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6a87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"set_IsPrivate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.get_MaxPlayersPerRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::get_MaxPlayersPerRoom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6a884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"get_MaxPlayersPerRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.set_MaxPlayersPerRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)(int32_t)>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::set_MaxPlayersPerRoom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6a88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"set_MaxPlayersPerRoom", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.get_IsPasswordProtected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::get_IsPasswordProtected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6a894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"get_IsPasswordProtected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.set_IsPasswordProtected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)(bool)>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::set_IsPasswordProtected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6a89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"set_IsPasswordProtected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::OnEnable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9f6a8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.CreateRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::CreateRoom)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9f6a980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"CreateRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.CreateRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)(::GlobalNamespace::CustomMatchmaking_RoomCreationOptions)>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::CreateRoom)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9f6aa88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"CreateRoom", {}, {::i2c::type_of<::GlobalNamespace::CustomMatchmaking_RoomCreationOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.JoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)(::StringW, ::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::JoinRoom)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9f6abb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"JoinRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.JoinOpenRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)(::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::JoinOpenRoom)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9f6acec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"JoinOpenRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.LeaveRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::LeaveRoom)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9f6ae0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"LeaveRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::get_IsConnected)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f6aecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"get_IsConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.get_ConnectedRoomToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::get_ConnectedRoomToken)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9f6af7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"get_ConnectedRoomToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.GenerateRoomPassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::GenerateRoomPassword)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f6b038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking.get_SupportsRoomPassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::get_SupportsRoomPassword)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f6b054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"get_SupportsRoomPassword", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9f6b104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*& Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_get_onRoomCreationFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRoomCreationFinished;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* const& Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_get_onRoomCreationFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRoomCreationFinished;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_set_onRoomCreationFinished(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onRoomCreationFinished = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*& Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_get_onRoomJoinFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRoomJoinFinished;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* const& Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_get_onRoomJoinFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRoomJoinFinished;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_set_onRoomJoinFinished(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onRoomJoinFinished = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_get_onRoomLeaveFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRoomLeaveFinished;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_get_onRoomLeaveFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRoomLeaveFinished;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_set_onRoomLeaveFinished(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onRoomLeaveFinished = value;
}
constexpr ::StringW& Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_get_lobbyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyName;
}
constexpr ::StringW const& Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_get_lobbyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyName;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_set_lobbyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyName = value;
}
constexpr bool& Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_get_isPrivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPrivate;
}
constexpr bool const& Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_get_isPrivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPrivate;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_set_isPrivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPrivate = value;
}
constexpr int32_t& Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_get_maxPlayersPerRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPlayersPerRoom;
}
constexpr int32_t const& Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_get_maxPlayersPerRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPlayersPerRoom;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_set_maxPlayersPerRoom(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxPlayersPerRoom = value;
}
constexpr bool& Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_get_isPasswordProtected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPasswordProtected;
}
constexpr bool const& Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_get_isPasswordProtected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPasswordProtected;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_set_isPasswordProtected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPasswordProtected = value;
}
constexpr ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*& Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_get_MatchmakingBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchmakingBehaviour;
}
constexpr ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour* const& Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_get_MatchmakingBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchmakingBehaviour;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::__cordl_internal_set_MatchmakingBehaviour(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MatchmakingBehaviour = value;
}
inline ::StringW Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::get_LobbyName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"get_LobbyName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::set_LobbyName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"set_LobbyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::get_IsPrivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"get_IsPrivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::set_IsPrivate(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"set_IsPrivate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::get_MaxPlayersPerRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"get_MaxPlayersPerRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::set_MaxPlayersPerRoom(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"set_MaxPlayersPerRoom", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::get_IsPasswordProtected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"get_IsPasswordProtected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::set_IsPasswordProtected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"set_IsPasswordProtected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::CreateRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"CreateRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::CreateRoom(::GlobalNamespace::CustomMatchmaking_RoomCreationOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"CreateRoom", {}, {::i2c::type_of<::GlobalNamespace::CustomMatchmaking_RoomCreationOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*>(this, ___internal_method, options);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::JoinRoom(::StringW  roomToken, ::StringW  roomPassword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"JoinRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*>(this, ___internal_method, roomToken, roomPassword);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::JoinOpenRoom(::StringW  roomLobby)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"JoinOpenRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*>(this, ___internal_method, roomLobby);
}
inline void Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::LeaveRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"LeaveRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::get_ConnectedRoomToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"get_ConnectedRoomToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::GenerateRoomPassword()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::get_SupportsRoomPassword()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {"get_SupportsRoomPassword", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking* Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking::CustomMatchmaking()   {
}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour.CreateRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::*)(::GlobalNamespace::CustomMatchmaking_RoomCreationOptions)>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::CreateRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour.JoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::*)(::StringW, ::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::JoinRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour.JoinOpenRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::*)(::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::JoinOpenRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour.LeaveRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::LeaveRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::get_IsConnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour.get_ConnectedRoomToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::get_ConnectedRoomToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour.get_SupportsRoomPassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::get_SupportsRoomPassword)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(), 6}
                ));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::CreateRoom(::GlobalNamespace::CustomMatchmaking_RoomCreationOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*>(this, ___internal_method, options);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::JoinRoom(::StringW  roomToken, ::StringW  roomPassword)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*>(this, ___internal_method, roomToken, roomPassword);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::JoinOpenRoom(::StringW  lobbyName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*>(this, ___internal_method, lobbyName);
}
inline void Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::LeaveRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::get_IsConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::get_ConnectedRoomToken()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour::get_SupportsRoomPassword()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}

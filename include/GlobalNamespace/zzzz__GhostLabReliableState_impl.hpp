#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostLabReliableState.hpp"
#include "GlobalNamespace/zzzz__GhostLabData_impl.hpp"
#include "GlobalNamespace/zzzz__GhostLab_EntranceDoorsState_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__GhostLabReliableState_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__RpcInfo_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "GlobalNamespace/zzzz__GhostLabData_def.hpp"
#include "GlobalNamespace/zzzz__GhostLab_EntranceDoorsState_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.get_NetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GhostLabData (::GlobalNamespace::GhostLabReliableState::*)()>(&::GlobalNamespace::GhostLabReliableState::get_NetData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d0b36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"get_NetData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.set_NetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabReliableState::*)(::GlobalNamespace::GhostLabData)>(&::GlobalNamespace::GhostLabReliableState::set_NetData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d0b3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"set_NetData", {}, {::i2c::type_of<::GlobalNamespace::GhostLabData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabReliableState::*)()>(&::GlobalNamespace::GhostLabReliableState::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d0b428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.OnOwnerChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabReliableState::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*)>(&::GlobalNamespace::GhostLabReliableState::OnOwnerChange)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d0b48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabReliableState::*)()>(&::GlobalNamespace::GhostLabReliableState::WriteDataFusion)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d0b504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabReliableState::*)()>(&::GlobalNamespace::GhostLabReliableState::ReadDataFusion)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5d0b588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabReliableState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostLabReliableState::WriteDataPUN)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5d0b6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabReliableState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostLabReliableState::ReadDataPUN)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5d0b7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.UpdateEntranceDoorsState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabReliableState::*)(::GlobalNamespace::GhostLab_EntranceDoorsState)>(&::GlobalNamespace::GhostLabReliableState::UpdateEntranceDoorsState)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5d0a908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"UpdateEntranceDoorsState", {}, {::i2c::type_of<::GlobalNamespace::GhostLab_EntranceDoorsState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.UpdateSingleDoorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabReliableState::*)(int32_t)>(&::GlobalNamespace::GhostLabReliableState::UpdateSingleDoorState)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5d0a718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"UpdateSingleDoorState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.RPC_RemoteEntranceDoorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabReliableState::*)(::GlobalNamespace::GhostLab_EntranceDoorsState, ::Fusion::RpcInfo)>(&::GlobalNamespace::GhostLabReliableState::RPC_RemoteEntranceDoorState)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5d0b918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"RPC_RemoteEntranceDoorState", {}, {::i2c::type_of<::GlobalNamespace::GhostLab_EntranceDoorsState>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.RPC_RemoteSingleDoorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabReliableState::*)(int32_t, ::Fusion::RpcInfo)>(&::GlobalNamespace::GhostLabReliableState::RPC_RemoteSingleDoorState)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5d0bb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"RPC_RemoteSingleDoorState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.RemoteEntranceDoorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabReliableState::*)(::GlobalNamespace::GhostLab_EntranceDoorsState, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostLabReliableState::RemoteEntranceDoorState)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d0be00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"RemoteEntranceDoorState", {}, {::i2c::type_of<::GlobalNamespace::GhostLab_EntranceDoorsState>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.RemoteSingleDoorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabReliableState::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GhostLabReliableState::RemoteSingleDoorState)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d0bec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"RemoteSingleDoorState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabReliableState::*)()>(&::GlobalNamespace::GhostLabReliableState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d0bfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabReliableState::*)(bool)>(&::GlobalNamespace::GhostLabReliableState::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d0bfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabReliableState::*)()>(&::GlobalNamespace::GhostLabReliableState::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d0c020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.RPC_RemoteEntranceDoorState@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::GhostLabReliableState::RPC_RemoteEntranceDoorState@Invoker)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d0c084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"RPC_RemoteEntranceDoorState@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabReliableState.RPC_RemoteSingleDoorState@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::GhostLabReliableState::RPC_RemoteSingleDoorState@Invoker)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d0c13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"RPC_RemoteSingleDoorState@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GhostLab_EntranceDoorsState& GlobalNamespace::GhostLabReliableState::__cordl_internal_get_doorState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorState;
}
constexpr ::GlobalNamespace::GhostLab_EntranceDoorsState const& GlobalNamespace::GhostLabReliableState::__cordl_internal_get_doorState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorState;
}
constexpr void GlobalNamespace::GhostLabReliableState::__cordl_internal_set_doorState(::GlobalNamespace::GhostLab_EntranceDoorsState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorState = value;
}
constexpr int32_t& GlobalNamespace::GhostLabReliableState::__cordl_internal_get_singleDoorCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleDoorCount;
}
constexpr int32_t const& GlobalNamespace::GhostLabReliableState::__cordl_internal_get_singleDoorCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleDoorCount;
}
constexpr void GlobalNamespace::GhostLabReliableState::__cordl_internal_set_singleDoorCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___singleDoorCount = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::GhostLabReliableState::__cordl_internal_get_singleDoorOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleDoorOpen;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::GhostLabReliableState::__cordl_internal_get_singleDoorOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleDoorOpen;
}
constexpr void GlobalNamespace::GhostLabReliableState::__cordl_internal_set_singleDoorOpen(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___singleDoorOpen = value;
}
constexpr ::GlobalNamespace::GhostLabData& GlobalNamespace::GhostLabReliableState::__cordl_internal_get__NetData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NetData;
}
constexpr ::GlobalNamespace::GhostLabData const& GlobalNamespace::GhostLabReliableState::__cordl_internal_get__NetData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NetData;
}
constexpr void GlobalNamespace::GhostLabReliableState::__cordl_internal_set__NetData(::GlobalNamespace::GhostLabData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NetData = value;
}
inline ::GlobalNamespace::GhostLabData GlobalNamespace::GhostLabReliableState::get_NetData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"get_NetData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GhostLabData>(this, ___internal_method);
}
inline void GlobalNamespace::GhostLabReliableState::set_NetData(::GlobalNamespace::GhostLabData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"set_NetData", {}, {::i2c::type_of<::GlobalNamespace::GhostLabData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GhostLabReliableState::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostLabReliableState::OnOwnerChange(::Photon::Realtime::Player*  newOwner, ::Photon::Realtime::Player*  previousOwner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOwner, previousOwner);
}
inline void GlobalNamespace::GhostLabReliableState::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostLabReliableState::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostLabReliableState::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GhostLabReliableState::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GhostLabReliableState::UpdateEntranceDoorsState(::GlobalNamespace::GhostLab_EntranceDoorsState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"UpdateEntranceDoorsState", {}, {::i2c::type_of<::GlobalNamespace::GhostLab_EntranceDoorsState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GhostLabReliableState::UpdateSingleDoorState(int32_t  singleDoorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"UpdateSingleDoorState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, singleDoorIndex);
}
inline void GlobalNamespace::GhostLabReliableState::RPC_RemoteEntranceDoorState(::GlobalNamespace::GhostLab_EntranceDoorsState  newState, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"RPC_RemoteEntranceDoorState", {}, {::i2c::type_of<::GlobalNamespace::GhostLab_EntranceDoorsState>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, info);
}
inline void GlobalNamespace::GhostLabReliableState::RPC_RemoteSingleDoorState(int32_t  doorIndex, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"RPC_RemoteSingleDoorState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, doorIndex, info);
}
inline void GlobalNamespace::GhostLabReliableState::RemoteEntranceDoorState(::GlobalNamespace::GhostLab_EntranceDoorsState  newState, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"RemoteEntranceDoorState", {}, {::i2c::type_of<::GlobalNamespace::GhostLab_EntranceDoorsState>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, info);
}
inline void GlobalNamespace::GhostLabReliableState::RemoteSingleDoorState(int32_t  doorIndex, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"RemoteSingleDoorState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, doorIndex, info);
}
inline void GlobalNamespace::GhostLabReliableState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostLabReliableState::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::GhostLabReliableState::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostLabReliableState::RPC_RemoteEntranceDoorState@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"RPC_RemoteEntranceDoorState@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline void GlobalNamespace::GhostLabReliableState::RPC_RemoteSingleDoorState@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabReliableState*>(),
                        {"RPC_RemoteSingleDoorState@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline ::GlobalNamespace::GhostLabReliableState* GlobalNamespace::GhostLabReliableState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostLabReliableState*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostLabReliableState::GhostLabReliableState()   {
}

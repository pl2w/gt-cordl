#pragma once
// IWYU pragma private; include "GlobalNamespace/SecondLookSkeletonSynchValues.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__SecondLookSkeleton_GhostState_impl.hpp"
#include "GlobalNamespace/zzzz__SkeletonNetData_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SecondLookSkeletonSynchValues_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__RpcInfo_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SecondLookSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__SkeletonNetData_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.get_NetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SkeletonNetData (::GlobalNamespace::SecondLookSkeletonSynchValues::*)()>(&::GlobalNamespace::SecondLookSkeletonSynchValues::get_NetData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d105c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"get_NetData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.set_NetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonSynchValues::*)(::GlobalNamespace::SkeletonNetData)>(&::GlobalNamespace::SecondLookSkeletonSynchValues::set_NetData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d1062c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"set_NetData", {}, {::i2c::type_of<::GlobalNamespace::SkeletonNetData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.OnOwnerSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonSynchValues::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::SecondLookSkeletonSynchValues::OnOwnerSwitched)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d1069c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                    {::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonSynchValues::*)()>(&::GlobalNamespace::SecondLookSkeletonSynchValues::WriteDataFusion)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d1070c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                    {::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonSynchValues::*)()>(&::GlobalNamespace::SecondLookSkeletonSynchValues::ReadDataFusion)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5d107e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                    {::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonSynchValues::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SecondLookSkeletonSynchValues::WriteDataPUN)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5d10a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                    {::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonSynchValues::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SecondLookSkeletonSynchValues::ReadDataPUN)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5d10c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                    {::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.RPC_RemoteActiveGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonSynchValues::*)(::Fusion::RpcInfo)>(&::GlobalNamespace::SecondLookSkeletonSynchValues::RPC_RemoteActiveGhost)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5d10fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RPC_RemoteActiveGhost", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.RPC_RemotePlayerSeen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonSynchValues::*)(::Fusion::RpcInfo)>(&::GlobalNamespace::SecondLookSkeletonSynchValues::RPC_RemotePlayerSeen)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5d11228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RPC_RemotePlayerSeen", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.RPC_RemotePlayerCaught
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonSynchValues::*)(::Fusion::RpcInfo)>(&::GlobalNamespace::SecondLookSkeletonSynchValues::RPC_RemotePlayerCaught)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5d114d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RPC_RemotePlayerCaught", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.RemoteActivateGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonSynchValues::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SecondLookSkeletonSynchValues::RemoteActivateGhost)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d11778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RemoteActivateGhost", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.RemotePlayerSeen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonSynchValues::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SecondLookSkeletonSynchValues::RemotePlayerSeen)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5d11840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RemotePlayerSeen", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.RemotePlayerCaught
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonSynchValues::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SecondLookSkeletonSynchValues::RemotePlayerCaught)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5d11974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RemotePlayerCaught", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonSynchValues::*)()>(&::GlobalNamespace::SecondLookSkeletonSynchValues::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d11a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonSynchValues::*)(bool)>(&::GlobalNamespace::SecondLookSkeletonSynchValues::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d11a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                    {::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonSynchValues::*)()>(&::GlobalNamespace::SecondLookSkeletonSynchValues::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d11b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                    {::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.RPC_RemoteActiveGhost@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::SecondLookSkeletonSynchValues::RPC_RemoteActiveGhost@Invoker)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d11b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RPC_RemoteActiveGhost@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.RPC_RemotePlayerSeen@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::SecondLookSkeletonSynchValues::RPC_RemotePlayerSeen@Invoker)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d11c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RPC_RemotePlayerSeen@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonSynchValues.RPC_RemotePlayerCaught@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::SecondLookSkeletonSynchValues::RPC_RemotePlayerCaught@Invoker)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d11ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RPC_RemotePlayerCaught@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState& GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState const& GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_set_currentState(::GlobalNamespace::SecondLookSkeleton_GhostState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_get_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_get_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr void GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_set_position(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___position = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_get_rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_get_rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr void GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_set_rotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotation = value;
}
constexpr ::UnityW<::GlobalNamespace::SecondLookSkeleton>& GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_get_mySkeleton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mySkeleton;
}
constexpr ::UnityW<::GlobalNamespace::SecondLookSkeleton> const& GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_get_mySkeleton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mySkeleton;
}
constexpr void GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_set_mySkeleton(::UnityW<::GlobalNamespace::SecondLookSkeleton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mySkeleton = value;
}
constexpr int32_t& GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_get_currentNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNode;
}
constexpr int32_t const& GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_get_currentNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNode;
}
constexpr void GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_set_currentNode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentNode = value;
}
constexpr int32_t& GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr int32_t const& GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_set_nextNode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr int32_t& GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_get_angerPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angerPoint;
}
constexpr int32_t const& GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_get_angerPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angerPoint;
}
constexpr void GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_set_angerPoint(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angerPoint = value;
}
constexpr ::GlobalNamespace::SkeletonNetData& GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_get__NetData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NetData;
}
constexpr ::GlobalNamespace::SkeletonNetData const& GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_get__NetData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NetData;
}
constexpr void GlobalNamespace::SecondLookSkeletonSynchValues::__cordl_internal_set__NetData(::GlobalNamespace::SkeletonNetData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NetData = value;
}
inline ::GlobalNamespace::SkeletonNetData GlobalNamespace::SecondLookSkeletonSynchValues::get_NetData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"get_NetData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SkeletonNetData>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::set_NetData(::GlobalNamespace::SkeletonNetData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"set_NetData", {}, {::i2c::type_of<::GlobalNamespace::SkeletonNetData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::OnOwnerSwitched(::GlobalNamespace::NetPlayer*  newOwningPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOwningPlayer);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::RPC_RemoteActiveGhost(::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RPC_RemoteActiveGhost", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::RPC_RemotePlayerSeen(::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RPC_RemotePlayerSeen", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::RPC_RemotePlayerCaught(::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RPC_RemotePlayerCaught", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::RemoteActivateGhost(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RemoteActivateGhost", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::RemotePlayerSeen(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RemotePlayerSeen", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::RemotePlayerCaught(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RemotePlayerCaught", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::RPC_RemoteActiveGhost@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RPC_RemoteActiveGhost@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::RPC_RemotePlayerSeen@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RPC_RemotePlayerSeen@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline void GlobalNamespace::SecondLookSkeletonSynchValues::RPC_RemotePlayerCaught@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonSynchValues*>(),
                        {"RPC_RemotePlayerCaught@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline ::GlobalNamespace::SecondLookSkeletonSynchValues* GlobalNamespace::SecondLookSkeletonSynchValues::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SecondLookSkeletonSynchValues*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SecondLookSkeletonSynchValues::SecondLookSkeletonSynchValues()   {
}

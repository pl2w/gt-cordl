#pragma once
// IWYU pragma private; include "GlobalNamespace/GameModeSerializer.hpp"
#include "GlobalNamespace/zzzz__GorillaSerializerMasterOnly_impl.hpp"
#include "GorillaGameModes/zzzz__GameModeType_impl.hpp"
#include "GlobalNamespace/zzzz__GameModeSerializer_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
#include "Fusion/zzzz__IStateAuthorityChanged_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__RpcInfo_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__FusionGameModeData_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGameManager_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__RpcTarget_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.get_gameModeKeyInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameModeSerializer::*)()>(&::GlobalNamespace::GameModeSerializer::get_gameModeKeyInt)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58f10a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"get_gameModeKeyInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.set_gameModeKeyInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)(int32_t)>(&::GlobalNamespace::GameModeSerializer::set_gameModeKeyInt)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58f1100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"set_gameModeKeyInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.get_GameModeInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaGameManager> (::GlobalNamespace::GameModeSerializer::*)()>(&::GlobalNamespace::GameModeSerializer::get_GameModeInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f115c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"get_GameModeInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.OnSpawnSetupCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameModeSerializer::*)(::GlobalNamespace::PhotonMessageInfoWrapped, ::by_ref<::UnityEngine::GameObject*>, ::by_ref<::System::Type*>)>(&::GlobalNamespace::GameModeSerializer::OnSpawnSetupCheck)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0x58f1164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)(int32_t)>(&::GlobalNamespace::GameModeSerializer::Init)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58f1920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"Init", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.OnSuccesfullySpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)(::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::GameModeSerializer::OnSuccesfullySpawned)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58f19a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.OnBeforeDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)()>(&::GlobalNamespace::GameModeSerializer::OnBeforeDespawn)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58f1a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.OnFailedSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)()>(&::GlobalNamespace::GameModeSerializer::OnFailedSpawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f1a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.RPC_ReportTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameModeSerializer::RPC_ReportTag)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x58f1a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"RPC_ReportTag", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.RPC_ReportHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameModeSerializer::RPC_ReportHit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58f1c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"RPC_ReportHit", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.RPC_ReportTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)(int32_t, ::Fusion::RpcInfo)>(&::GlobalNamespace::GameModeSerializer::RPC_ReportTag)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x58f1fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"RPC_ReportTag", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.RPC_ReportHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)(::Fusion::RpcInfo)>(&::GlobalNamespace::GameModeSerializer::RPC_ReportHit)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x58f2208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"RPC_ReportHit", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.ReportTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::GameModeSerializer::ReportTag)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x58f1b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"ReportTag", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.ReportHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)(::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::GameModeSerializer::ReportHit)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x58f1c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"ReportHit", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.RPC_BroadcastRoundComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameModeSerializer::RPC_BroadcastRoundComplete)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58f2848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"RPC_BroadcastRoundComplete", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.BroadcastRoundComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)(::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::GameModeSerializer::BroadcastRoundComplete)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x58f28a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"BroadcastRoundComplete", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.RPC_BroadcastTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)(int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameModeSerializer::RPC_BroadcastTag)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x58f2980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"RPC_BroadcastTag", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.BroadcastTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GameModeSerializer::BroadcastTag)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x58f2a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"BroadcastTag", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.FusionDataRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)(::StringW, ::GlobalNamespace::NetPlayer*, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GameModeSerializer::FusionDataRPC)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58f2b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.FusionDataRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)(::StringW, ::Photon::Pun::RpcTarget, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GameModeSerializer::FusionDataRPC)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f2c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.Fusion_IStateAuthorityChanged_StateAuthorityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)()>(&::GlobalNamespace::GameModeSerializer::Fusion_IStateAuthorityChanged_StateAuthorityChanged)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58f2c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"Fusion.IStateAuthorityChanged.StateAuthorityChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)()>(&::GlobalNamespace::GameModeSerializer::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58f2cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)(bool)>(&::GlobalNamespace::GameModeSerializer::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f2d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSerializer::*)()>(&::GlobalNamespace::GameModeSerializer::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58f2d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.RPC_ReportTag@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::GameModeSerializer::RPC_ReportTag@Invoker)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x58f2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"RPC_ReportTag@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSerializer.RPC_ReportHit@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::GameModeSerializer::RPC_ReportHit@Invoker)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58f2e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"RPC_ReportHit@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GameModeSerializer::__cordl_internal_get__gameModeKeyInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameModeKeyInt;
}
constexpr int32_t const& GlobalNamespace::GameModeSerializer::__cordl_internal_get__gameModeKeyInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameModeKeyInt;
}
constexpr void GlobalNamespace::GameModeSerializer::__cordl_internal_set__gameModeKeyInt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameModeKeyInt = value;
}
constexpr ::GorillaGameModes::GameModeType& GlobalNamespace::GameModeSerializer::__cordl_internal_get_gameModeKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeKey;
}
constexpr ::GorillaGameModes::GameModeType const& GlobalNamespace::GameModeSerializer::__cordl_internal_get_gameModeKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeKey;
}
constexpr void GlobalNamespace::GameModeSerializer::__cordl_internal_set_gameModeKey(::GorillaGameModes::GameModeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeKey = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaGameManager>& GlobalNamespace::GameModeSerializer::__cordl_internal_get_gameModeInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeInstance;
}
constexpr ::UnityW<::GlobalNamespace::GorillaGameManager> const& GlobalNamespace::GameModeSerializer::__cordl_internal_get_gameModeInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeInstance;
}
constexpr void GlobalNamespace::GameModeSerializer::__cordl_internal_set_gameModeInstance(::UnityW<::GlobalNamespace::GorillaGameManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeInstance = value;
}
constexpr ::UnityW<::GlobalNamespace::FusionGameModeData>& GlobalNamespace::GameModeSerializer::__cordl_internal_get_gameModeData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeData;
}
constexpr ::UnityW<::GlobalNamespace::FusionGameModeData> const& GlobalNamespace::GameModeSerializer::__cordl_internal_get_gameModeData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeData;
}
constexpr void GlobalNamespace::GameModeSerializer::__cordl_internal_set_gameModeData(::UnityW<::GlobalNamespace::FusionGameModeData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeData = value;
}
constexpr ::System::Type*& GlobalNamespace::GameModeSerializer::__cordl_internal_get_currentGameDataType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGameDataType;
}
constexpr ::System::Type* const& GlobalNamespace::GameModeSerializer::__cordl_internal_get_currentGameDataType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGameDataType;
}
constexpr void GlobalNamespace::GameModeSerializer::__cordl_internal_set_currentGameDataType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentGameDataType = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GameModeSerializer::__cordl_internal_get_broadcastTagCallLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broadcastTagCallLimit;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GameModeSerializer::__cordl_internal_get_broadcastTagCallLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broadcastTagCallLimit;
}
constexpr void GlobalNamespace::GameModeSerializer::__cordl_internal_set_broadcastTagCallLimit(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___broadcastTagCallLimit = value;
}
inline void GlobalNamespace::GameModeSerializer::setStaticF_FusionGameModeOwnerChanged(::System::Action_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::NetPlayer*>*, "FusionGameModeOwnerChanged", ::GlobalNamespace::GameModeSerializer*>(std::forward<::System::Action_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::GameModeSerializer::getStaticF_FusionGameModeOwnerChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::NetPlayer*>*, "FusionGameModeOwnerChanged", ::GlobalNamespace::GameModeSerializer*>();
}
inline int32_t GlobalNamespace::GameModeSerializer::get_gameModeKeyInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"get_gameModeKeyInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameModeSerializer::set_gameModeKeyInt(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"set_gameModeKeyInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::GorillaGameManager> GlobalNamespace::GameModeSerializer::get_GameModeInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"get_GameModeInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaGameManager>>(this, ___internal_method);
}
inline bool GlobalNamespace::GameModeSerializer::OnSpawnSetupCheck(::GlobalNamespace::PhotonMessageInfoWrapped  wrappedInfo, ::by_ref<::UnityEngine::GameObject*>  outTargetObject, ::by_ref<::System::Type*>  outTargetType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, wrappedInfo, outTargetObject, outTargetType);
}
inline void GlobalNamespace::GameModeSerializer::Init(int32_t  gameModeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"Init", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameModeType);
}
inline void GlobalNamespace::GameModeSerializer::OnSuccesfullySpawned(::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::GameModeSerializer::OnBeforeDespawn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModeSerializer::OnFailedSpawn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModeSerializer::RPC_ReportTag(int32_t  taggedPlayer, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"RPC_ReportTag", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, info);
}
inline void GlobalNamespace::GameModeSerializer::RPC_ReportHit(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"RPC_ReportHit", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::GameModeSerializer::RPC_ReportTag(int32_t  taggedPlayer, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"RPC_ReportTag", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, info);
}
inline void GlobalNamespace::GameModeSerializer::RPC_ReportHit(::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"RPC_ReportHit", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::GameModeSerializer::ReportTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"ReportTag", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, info);
}
inline void GlobalNamespace::GameModeSerializer::ReportHit(::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"ReportHit", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::GameModeSerializer::RPC_BroadcastRoundComplete(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"RPC_BroadcastRoundComplete", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::GameModeSerializer::BroadcastRoundComplete(::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"BroadcastRoundComplete", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::GameModeSerializer::RPC_BroadcastTag(int32_t  taggedPlayer, int32_t  taggingPlayer, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"RPC_BroadcastTag", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer, info);
}
inline void GlobalNamespace::GameModeSerializer::BroadcastTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"BroadcastTag", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer, info);
}
inline void GlobalNamespace::GameModeSerializer::FusionDataRPC(::StringW  method, ::GlobalNamespace::NetPlayer*  targetPlayer, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, targetPlayer, parameters);
}
inline void GlobalNamespace::GameModeSerializer::FusionDataRPC(::StringW  method, ::Photon::Pun::RpcTarget  target, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, target, parameters);
}
inline void GlobalNamespace::GameModeSerializer::Fusion_IStateAuthorityChanged_StateAuthorityChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"Fusion.IStateAuthorityChanged.StateAuthorityChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModeSerializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModeSerializer::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::GameModeSerializer::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModeSerializer::RPC_ReportTag@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"RPC_ReportTag@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline void GlobalNamespace::GameModeSerializer::RPC_ReportHit@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSerializer*>(),
                        {"RPC_ReportHit@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline ::GlobalNamespace::GameModeSerializer* GlobalNamespace::GameModeSerializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameModeSerializer*>());
}
/// @brief Convert operator to "::Fusion::IStateAuthorityChanged"
constexpr  GlobalNamespace::GameModeSerializer::operator ::Fusion::IStateAuthorityChanged*() noexcept {
return static_cast<::Fusion::IStateAuthorityChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IStateAuthorityChanged"
constexpr ::Fusion::IStateAuthorityChanged* GlobalNamespace::GameModeSerializer::i___Fusion__IStateAuthorityChanged() noexcept {
return static_cast<::Fusion::IStateAuthorityChanged*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  GlobalNamespace::GameModeSerializer::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* GlobalNamespace::GameModeSerializer::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameModeSerializer::GameModeSerializer()   {
}

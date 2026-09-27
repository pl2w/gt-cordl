#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaWrappedSerializer.hpp"
#include "Fusion/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RPCNetworkBase_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaWrappedSerializer_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "GlobalNamespace/zzzz__IWrappedSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetworkView_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "Photon/Pun/zzzz__IOnPhotonViewPreNetDestroy_def.hpp"
#include "Photon/Pun/zzzz__IPhotonViewCallback_def.hpp"
#include "Photon/Pun/zzzz__IPunInstantiateMagicCallback_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Pun/zzzz__RpcTarget_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.get_NetView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::NetworkView> (::GlobalNamespace::GorillaWrappedSerializer::*)()>(&::GlobalNamespace::GorillaWrappedSerializer::get_NetView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f52cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"get_NetView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.get_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaWrappedSerializer::*)()>(&::GlobalNamespace::GorillaWrappedSerializer::get_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f52d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.set_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)(::System::Object*)>(&::GlobalNamespace::GorillaWrappedSerializer::set_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f52dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.get_IsLocallyOwned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaWrappedSerializer::*)()>(&::GlobalNamespace::GorillaWrappedSerializer::get_IsLocallyOwned)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58f52e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"get_IsLocallyOwned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaWrappedSerializer::*)()>(&::GlobalNamespace::GorillaWrappedSerializer::get_IsValid)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58f52fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)()>(&::GlobalNamespace::GorillaWrappedSerializer::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58f5314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.Photon_Pun_IPunInstantiateMagicCallback_OnPhotonInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaWrappedSerializer::Photon_Pun_IPunInstantiateMagicCallback_OnPhotonInstantiate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58f53b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"Photon.Pun.IPunInstantiateMagicCallback.OnPhotonInstantiate", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.Spawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)()>(&::GlobalNamespace::GorillaWrappedSerializer::Spawned)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x58f5594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.ProcessSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)(::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::GorillaWrappedSerializer::ProcessSpawn)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x58f5494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"ProcessSpawn", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.OnSpawnSetupCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaWrappedSerializer::*)(::GlobalNamespace::PhotonMessageInfoWrapped, ::by_ref<::UnityEngine::GameObject*>, ::by_ref<::System::Type*>)>(&::GlobalNamespace::GorillaWrappedSerializer::OnSpawnSetupCheck)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58f5750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.OnSuccesfullySpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)(::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::GorillaWrappedSerializer::OnSuccesfullySpawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.FailedToSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)()>(&::GlobalNamespace::GorillaWrappedSerializer::FailedToSpawn)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x58f566c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"FailedToSpawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.OnFailedSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)()>(&::GlobalNamespace::GorillaWrappedSerializer::OnFailedSpawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.ValidOnSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaWrappedSerializer::*)(::Photon::Pun::PhotonStream*, ::by_ref<::Photon::Pun::PhotonMessageInfo>)>(&::GlobalNamespace::GorillaWrappedSerializer::ValidOnSerialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58f57f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.FixedUpdateNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)()>(&::GlobalNamespace::GorillaWrappedSerializer::FixedUpdateNetwork)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x58f581c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)()>(&::GlobalNamespace::GorillaWrappedSerializer::Render)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58f58d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.Photon_Pun_IPunObservable_OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaWrappedSerializer::Photon_Pun_IPunObservable_OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x58f59b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"Photon.Pun.IPunObservable.OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.Despawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)(::Fusion::NetworkRunner*, bool)>(&::GlobalNamespace::GorillaWrappedSerializer::Despawned)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58f5b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.Photon_Pun_IOnPhotonViewPreNetDestroy_OnPreNetDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)(::Photon::Pun::PhotonView*)>(&::GlobalNamespace::GorillaWrappedSerializer::Photon_Pun_IOnPhotonViewPreNetDestroy_OnPreNetDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58f5b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"Photon.Pun.IOnPhotonViewPreNetDestroy.OnPreNetDestroy", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.OnBeforeDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)()>(&::GlobalNamespace::GorillaWrappedSerializer::OnBeforeDespawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.SendRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)(::StringW, bool, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GorillaWrappedSerializer::SendRPC)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58f5b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"SendRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.FusionDataRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)(::StringW, ::Photon::Pun::RpcTarget, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GorillaWrappedSerializer::FusionDataRPC)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f2c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.FusionDataRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)(::StringW, ::GlobalNamespace::NetPlayer*, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GorillaWrappedSerializer::FusionDataRPC)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f5b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.SendRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)(::StringW, ::GlobalNamespace::NetPlayer*, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GorillaWrappedSerializer::SendRPC)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58f5b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"SendRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)()>(&::GlobalNamespace::GorillaWrappedSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f4d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)(bool)>(&::GlobalNamespace::GorillaWrappedSerializer::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f4d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaWrappedSerializer.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaWrappedSerializer::*)()>(&::GlobalNamespace::GorillaWrappedSerializer::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f4d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_get_successfullInstantiate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successfullInstantiate;
}
constexpr bool const& GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_get_successfullInstantiate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successfullInstantiate;
}
constexpr void GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_set_successfullInstantiate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successfullInstantiate = value;
}
constexpr ::GlobalNamespace::IWrappedSerializable*& GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_get_serializeTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeTarget;
}
constexpr ::GlobalNamespace::IWrappedSerializable* const& GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_get_serializeTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeTarget;
}
constexpr void GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_set_serializeTarget(::GlobalNamespace::IWrappedSerializable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializeTarget = value;
}
constexpr ::System::Type*& GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_get_targetType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetType;
}
constexpr ::System::Type* const& GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_get_targetType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetType;
}
constexpr void GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_set_targetType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetType = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_get_targetObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_get_targetObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetObject;
}
constexpr void GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_set_targetObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetObject = value;
}
constexpr ::UnityW<::GlobalNamespace::NetworkView>& GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_get_netView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netView;
}
constexpr ::UnityW<::GlobalNamespace::NetworkView> const& GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_get_netView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netView;
}
constexpr void GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_set_netView(::UnityW<::GlobalNamespace::NetworkView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netView = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_get__data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data_k__BackingField;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_get__data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data_k__BackingField;
}
constexpr void GlobalNamespace::GorillaWrappedSerializer::__cordl_internal_set__data_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data_k__BackingField = value;
}
inline ::UnityW<::GlobalNamespace::NetworkView> GlobalNamespace::GorillaWrappedSerializer::get_NetView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"get_NetView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NetworkView>>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaWrappedSerializer::get_data()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaWrappedSerializer::set_data(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GorillaWrappedSerializer::get_IsLocallyOwned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"get_IsLocallyOwned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaWrappedSerializer::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaWrappedSerializer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaWrappedSerializer::Photon_Pun_IPunInstantiateMagicCallback_OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"Photon.Pun.IPunInstantiateMagicCallback.OnPhotonInstantiate", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::GorillaWrappedSerializer::Spawned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaWrappedSerializer::ProcessSpawn(::GlobalNamespace::PhotonMessageInfoWrapped  wrappedInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"ProcessSpawn", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrappedInfo);
}
inline bool GlobalNamespace::GorillaWrappedSerializer::OnSpawnSetupCheck(::GlobalNamespace::PhotonMessageInfoWrapped  wrappedInfo, ::by_ref<::UnityEngine::GameObject*>  outTargetObject, ::by_ref<::System::Type*>  outTargetType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, wrappedInfo, outTargetObject, outTargetType);
}
inline void GlobalNamespace::GorillaWrappedSerializer::OnSuccesfullySpawned(::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::GorillaWrappedSerializer::FailedToSpawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"FailedToSpawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaWrappedSerializer::OnFailedSpawn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaWrappedSerializer::ValidOnSerialize(::Photon::Pun::PhotonStream*  stream, /* [IsReadOnly] */ ::by_ref<::Photon::Pun::PhotonMessageInfo>  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaWrappedSerializer::FixedUpdateNetwork()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaWrappedSerializer::Render()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaWrappedSerializer::Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"Photon.Pun.IPunObservable.OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaWrappedSerializer::Despawned(::Fusion::NetworkRunner*  runner, bool  hasState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hasState);
}
inline void GlobalNamespace::GorillaWrappedSerializer::Photon_Pun_IOnPhotonViewPreNetDestroy_OnPreNetDestroy(::Photon::Pun::PhotonView*  rootView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"Photon.Pun.IOnPhotonViewPreNetDestroy.OnPreNetDestroy", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rootView);
}
inline void GlobalNamespace::GorillaWrappedSerializer::OnBeforeDespawn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::RPCNetworkBase*>)
inline T GlobalNamespace::GorillaWrappedSerializer::AddRPCComponent()  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 38}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaWrappedSerializer::SendRPC(::StringW  rpcName, bool  targetOthers, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"SendRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rpcName, targetOthers, data);
}
inline void GlobalNamespace::GorillaWrappedSerializer::FusionDataRPC(::StringW  method, ::Photon::Pun::RpcTarget  target, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, target, parameters);
}
inline void GlobalNamespace::GorillaWrappedSerializer::FusionDataRPC(::StringW  method, ::GlobalNamespace::NetPlayer*  targetPlayer, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, targetPlayer, parameters);
}
inline void GlobalNamespace::GorillaWrappedSerializer::SendRPC(::StringW  rpcName, ::GlobalNamespace::NetPlayer*  targetPlayer, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {"SendRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rpcName, targetPlayer, data);
}
inline void GlobalNamespace::GorillaWrappedSerializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaWrappedSerializer::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::GorillaWrappedSerializer::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaWrappedSerializer*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaWrappedSerializer* GlobalNamespace::GorillaWrappedSerializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaWrappedSerializer*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  GlobalNamespace::GorillaWrappedSerializer::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* GlobalNamespace::GorillaWrappedSerializer::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr  GlobalNamespace::GorillaWrappedSerializer::operator ::Photon::Pun::IPunInstantiateMagicCallback*() noexcept {
return static_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr ::Photon::Pun::IPunInstantiateMagicCallback* GlobalNamespace::GorillaWrappedSerializer::i___Photon__Pun__IPunInstantiateMagicCallback() noexcept {
return static_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Pun::IOnPhotonViewPreNetDestroy"
constexpr  GlobalNamespace::GorillaWrappedSerializer::operator ::Photon::Pun::IOnPhotonViewPreNetDestroy*() noexcept {
return static_cast<::Photon::Pun::IOnPhotonViewPreNetDestroy*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IOnPhotonViewPreNetDestroy"
constexpr ::Photon::Pun::IOnPhotonViewPreNetDestroy* GlobalNamespace::GorillaWrappedSerializer::i___Photon__Pun__IOnPhotonViewPreNetDestroy() noexcept {
return static_cast<::Photon::Pun::IOnPhotonViewPreNetDestroy*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Pun::IPhotonViewCallback"
constexpr  GlobalNamespace::GorillaWrappedSerializer::operator ::Photon::Pun::IPhotonViewCallback*() noexcept {
return static_cast<::Photon::Pun::IPhotonViewCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPhotonViewCallback"
constexpr ::Photon::Pun::IPhotonViewCallback* GlobalNamespace::GorillaWrappedSerializer::i___Photon__Pun__IPhotonViewCallback() noexcept {
return static_cast<::Photon::Pun::IPhotonViewCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaWrappedSerializer::GorillaWrappedSerializer()   {
}

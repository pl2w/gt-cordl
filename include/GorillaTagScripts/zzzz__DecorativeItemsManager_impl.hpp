#pragma once
// IWYU pragma private; include "GorillaTagScripts/DecorativeItemsManager.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GorillaTagScripts/zzzz__DecorativeItemsManager_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__RpcInfo_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__ZoneBasedObject_def.hpp"
#include "GorillaTagScripts/zzzz__AttachPoint_def.hpp"
#include "GorillaTagScripts/zzzz__DecorativeItem_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTagScripts::DecorativeItemsManager> (*)()>(&::GorillaTagScripts::DecorativeItemsManager::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5bb7610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemsManager::*)()>(&::GorillaTagScripts::DecorativeItemsManager::Awake)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0x5bb7658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemsManager::*)()>(&::GorillaTagScripts::DecorativeItemsManager::OnDestroy)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5bb7ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemsManager::*)()>(&::GorillaTagScripts::DecorativeItemsManager::Update)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5bb802c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.SpawnItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemsManager::*)(int32_t)>(&::GorillaTagScripts::DecorativeItemsManager::SpawnItem)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5bb829c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"SpawnItem", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.RespawnItemRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemsManager::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::DecorativeItemsManager::RespawnItemRPC)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5bb8788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"RespawnItemRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.RPC_RespawnItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemsManager::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Fusion::RpcInfo)>(&::GorillaTagScripts::DecorativeItemsManager::RPC_RespawnItem)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5bb8ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"RPC_RespawnItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.RespawnItemShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemsManager::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTagScripts::DecorativeItemsManager::RespawnItemShared)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5bb8848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"RespawnItemShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.RandomSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GorillaTagScripts::DecorativeItemsManager::*)()>(&::GorillaTagScripts::DecorativeItemsManager::RandomSpawn)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5bb8650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"RandomSpawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.UpdateListPerFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::DecorativeItemsManager::*)()>(&::GorillaTagScripts::DecorativeItemsManager::UpdateListPerFrame)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bb85e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"UpdateListPerFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.OnRequestToRespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemsManager::*)(::GorillaTagScripts::DecorativeItem*)>(&::GorillaTagScripts::DecorativeItemsManager::OnRequestToRespawn)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5bb8e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"OnRequestToRespawn", {}, {::i2c::type_of<::GorillaTagScripts::DecorativeItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.getCurrentAttachPointByPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTagScripts::AttachPoint> (::GorillaTagScripts::DecorativeItemsManager::*)(::UnityEngine::Vector3)>(&::GorillaTagScripts::DecorativeItemsManager::getCurrentAttachPointByPosition)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5bb6ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"getCurrentAttachPointByPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::DecorativeItemsManager::*)()>(&::GorillaTagScripts::DecorativeItemsManager::get_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bb8ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemsManager::*)(int32_t)>(&::GorillaTagScripts::DecorativeItemsManager::set_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bb8f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"set_Data", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemsManager::*)()>(&::GorillaTagScripts::DecorativeItemsManager::WriteDataFusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb8f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemsManager::*)()>(&::GorillaTagScripts::DecorativeItemsManager::ReadDataFusion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bb8f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemsManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::DecorativeItemsManager::WriteDataPUN)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bb8f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemsManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::DecorativeItemsManager::ReadDataPUN)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5bb9044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemsManager::*)()>(&::GorillaTagScripts::DecorativeItemsManager::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5bb9100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemsManager::*)(bool)>(&::GorillaTagScripts::DecorativeItemsManager::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bb925c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemsManager::*)()>(&::GorillaTagScripts::DecorativeItemsManager::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bb927c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemsManager.RPC_RespawnItem@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::GorillaTagScripts::DecorativeItemsManager::RPC_RespawnItem@Invoker)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5bb92a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"RPC_RespawnItem@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_decorativeItemsContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decorativeItemsContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_decorativeItemsContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decorativeItemsContainer;
}
constexpr void GorillaTagScripts::DecorativeItemsManager::__cordl_internal_set_decorativeItemsContainer(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decorativeItemsContainer = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_respawnableHooksContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnableHooksContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_respawnableHooksContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnableHooksContainer;
}
constexpr void GorillaTagScripts::DecorativeItemsManager::__cordl_internal_set_respawnableHooksContainer(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnableHooksContainer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_nonRespawnableHooksContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonRespawnableHooksContainer;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_nonRespawnableHooksContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonRespawnableHooksContainer;
}
constexpr void GorillaTagScripts::DecorativeItemsManager::__cordl_internal_set_nonRespawnableHooksContainer(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nonRespawnableHooksContainer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::DecorativeItem>>*& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_itemsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemsList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::DecorativeItem>>* const& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_itemsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemsList;
}
constexpr void GorillaTagScripts::DecorativeItemsManager::__cordl_internal_set_itemsList(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::DecorativeItem>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemsList = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_respawnableHooks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnableHooks;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>* const& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_respawnableHooks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnableHooks;
}
constexpr void GorillaTagScripts::DecorativeItemsManager::__cordl_internal_set_respawnableHooks(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnableHooks = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_allHooks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allHooks;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>* const& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_allHooks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allHooks;
}
constexpr void GorillaTagScripts::DecorativeItemsManager::__cordl_internal_set_allHooks(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allHooks = value;
}
constexpr int32_t& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_lastIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastIndex;
}
constexpr int32_t const& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_lastIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastIndex;
}
constexpr void GorillaTagScripts::DecorativeItemsManager::__cordl_internal_set_lastIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastIndex = value;
}
constexpr int32_t& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GorillaTagScripts::DecorativeItemsManager::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr int32_t& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_arrayIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrayIndex;
}
constexpr int32_t const& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_arrayIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrayIndex;
}
constexpr void GorillaTagScripts::DecorativeItemsManager::__cordl_internal_set_arrayIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arrayIndex = value;
}
constexpr bool& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_shouldRunUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldRunUpdate;
}
constexpr bool const& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_shouldRunUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldRunUpdate;
}
constexpr void GorillaTagScripts::DecorativeItemsManager::__cordl_internal_set_shouldRunUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shouldRunUpdate = value;
}
constexpr ::UnityW<::GlobalNamespace::ZoneBasedObject>& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::UnityW<::GlobalNamespace::ZoneBasedObject> const& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GorillaTagScripts::DecorativeItemsManager::__cordl_internal_set_zone(::UnityW<::GlobalNamespace::ZoneBasedObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr bool& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_wasInZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasInZone;
}
constexpr bool const& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get_wasInZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasInZone;
}
constexpr void GorillaTagScripts::DecorativeItemsManager::__cordl_internal_set_wasInZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasInZone = value;
}
constexpr int32_t& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr int32_t const& GorillaTagScripts::DecorativeItemsManager::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GorillaTagScripts::DecorativeItemsManager::__cordl_internal_set__Data(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GorillaTagScripts::DecorativeItemsManager::setStaticF__instance(::UnityW<::GorillaTagScripts::DecorativeItemsManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::DecorativeItemsManager>, "_instance", ::GorillaTagScripts::DecorativeItemsManager*>(std::forward<::UnityW<::GorillaTagScripts::DecorativeItemsManager>>(value));
}
inline ::UnityW<::GorillaTagScripts::DecorativeItemsManager> GorillaTagScripts::DecorativeItemsManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::DecorativeItemsManager>, "_instance", ::GorillaTagScripts::DecorativeItemsManager*>();
}
inline ::UnityW<::GorillaTagScripts::DecorativeItemsManager> GorillaTagScripts::DecorativeItemsManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTagScripts::DecorativeItemsManager>>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItemsManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItemsManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItemsManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItemsManager::SpawnItem(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"SpawnItem", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GorillaTagScripts::DecorativeItemsManager::RespawnItemRPC(int32_t  index, ::UnityEngine::Vector3  _transformPos, ::UnityEngine::Quaternion  _transformRot, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"RespawnItemRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, _transformPos, _transformRot, info);
}
inline void GorillaTagScripts::DecorativeItemsManager::RPC_RespawnItem(int32_t  index, ::UnityEngine::Vector3  _transformPos, ::UnityEngine::Quaternion  _transformRot, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"RPC_RespawnItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, _transformPos, _transformRot, info);
}
inline void GorillaTagScripts::DecorativeItemsManager::RespawnItemShared(int32_t  index, ::UnityEngine::Vector3  _transformPos, ::UnityEngine::Quaternion  _transformRot, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"RespawnItemShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, _transformPos, _transformRot, info);
}
inline ::UnityW<::UnityEngine::Transform> GorillaTagScripts::DecorativeItemsManager::RandomSpawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"RandomSpawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::DecorativeItemsManager::UpdateListPerFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"UpdateListPerFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItemsManager::OnRequestToRespawn(::GorillaTagScripts::DecorativeItem*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"OnRequestToRespawn", {}, {::i2c::type_of<::GorillaTagScripts::DecorativeItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline ::UnityW<::GorillaTagScripts::AttachPoint> GorillaTagScripts::DecorativeItemsManager::getCurrentAttachPointByPosition(::UnityEngine::Vector3  _attachPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"getCurrentAttachPointByPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTagScripts::AttachPoint>>(this, ___internal_method, _attachPoint);
}
inline int32_t GorillaTagScripts::DecorativeItemsManager::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItemsManager::set_Data(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"set_Data", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::DecorativeItemsManager::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItemsManager::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItemsManager::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTagScripts::DecorativeItemsManager::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTagScripts::DecorativeItemsManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItemsManager::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GorillaTagScripts::DecorativeItemsManager::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItemsManager::RPC_RespawnItem@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemsManager*>(),
                        {"RPC_RespawnItem@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline ::GorillaTagScripts::DecorativeItemsManager* GorillaTagScripts::DecorativeItemsManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::DecorativeItemsManager*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::DecorativeItemsManager::DecorativeItemsManager()   {
}

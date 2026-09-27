#pragma once
// IWYU pragma private; include "GlobalNamespace/WorldShareableItem.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_ItemStates_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__WorldShareableItem_def.hpp"
#include "GlobalNamespace/zzzz__IRequestableOwnershipGuardCallbacks_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RequestableOwnershipGuard_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_ItemStates_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__TransformViewTeleportSerializer_def.hpp"
#include "GlobalNamespace/zzzz__WorldShareableItem_CachedData_def.hpp"
#include "GlobalNamespace/zzzz__WorldShareableItem_def.hpp"
#include "GlobalNamespace/zzzz__WorldTargetItem_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.get_transferableObjectState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TransferrableObject_PositionState (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::get_transferableObjectState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573e7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"get_transferableObjectState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.set_transferableObjectState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(::GlobalNamespace::TransferrableObject_PositionState)>(&::GlobalNamespace::WorldShareableItem::set_transferableObjectState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573e7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"set_transferableObjectState", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.get_transferableObjectItemState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TransferrableObject_ItemStates (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::get_transferableObjectItemState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573e7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"get_transferableObjectItemState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.set_transferableObjectItemState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(::GlobalNamespace::TransferrableObject_ItemStates)>(&::GlobalNamespace::WorldShareableItem::set_transferableObjectItemState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573e7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"set_transferableObjectItemState", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_ItemStates>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.get_transferableObjectStateNetworked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TransferrableObject_PositionState (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::get_transferableObjectStateNetworked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573e7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"get_transferableObjectStateNetworked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.set_transferableObjectStateNetworked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(::GlobalNamespace::TransferrableObject_PositionState)>(&::GlobalNamespace::WorldShareableItem::set_transferableObjectStateNetworked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573e7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"set_transferableObjectStateNetworked", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.get_transferableObjectItemStateNetworked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TransferrableObject_ItemStates (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::get_transferableObjectItemStateNetworked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573e7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"get_transferableObjectItemStateNetworked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.set_transferableObjectItemStateNetworked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(::GlobalNamespace::TransferrableObject_ItemStates)>(&::GlobalNamespace::WorldShareableItem::set_transferableObjectItemStateNetworked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573e7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"set_transferableObjectItemStateNetworked", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_ItemStates>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.get_target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::WorldTargetItem* (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::get_target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573e804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"get_target", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.set_target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(::GlobalNamespace::WorldTargetItem*)>(&::GlobalNamespace::WorldShareableItem::set_target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573e80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"set_target", {}, {::i2c::type_of<::GlobalNamespace::WorldTargetItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::Awake)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x573e814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::OnEnable)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x573e904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::OnDisable)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x573ec38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::OnDestroy)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x573ef4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.SetupSharableViewIDs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(::GlobalNamespace::NetPlayer*, int32_t)>(&::GlobalNamespace::WorldShareableItem::SetupSharableViewIDs)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x573f040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"SetupSharableViewIDs", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.ResetViews
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::ResetViews)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x573f178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"ResetViews", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.SetupSharableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(int32_t, ::GlobalNamespace::NetPlayer*, ::UnityEngine::Transform*)>(&::GlobalNamespace::WorldShareableItem::SetupSharableObject)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x573f250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"SetupSharableObject", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.OnPhotonInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::WorldShareableItem::OnPhotonInstantiate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x573f714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.OnOwnerChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*)>(&::GlobalNamespace::WorldShareableItem::OnOwnerChange)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x573f744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.get_EnableRemoteSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::get_EnableRemoteSync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573f81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"get_EnableRemoteSync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.set_EnableRemoteSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(bool)>(&::GlobalNamespace::WorldShareableItem::set_EnableRemoteSync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573f824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"set_EnableRemoteSync", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.TriggeredUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::TriggeredUpdate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x573f82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"TriggeredUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.SyncToSceneObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(::GlobalNamespace::TransferrableObject*)>(&::GlobalNamespace::WorldShareableItem::SyncToSceneObject)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x573f938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"SyncToSceneObject", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.SetupSceneObjectOnNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::WorldShareableItem::SetupSceneObjectOnNetwork)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x573f994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"SetupSceneObjectOnNetwork", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.IsTargetValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::IsTargetValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x573f928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"IsTargetValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.Invalidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::Invalidate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x573f6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"Invalidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.OnOwnershipTransferred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::WorldShareableItem::OnOwnershipTransferred)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x573f9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"OnOwnershipTransferred", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::WriteDataFusion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x573fa58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::ReadDataFusion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x573fa64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::WorldShareableItem::WriteDataPUN)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x573fa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::WorldShareableItem::ReadDataPUN)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x573fb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.RPCWorldShareable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::WorldShareableItem::RPCWorldShareable)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x573fd58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"RPCWorldShareable", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.OnMasterClientAssistedTakeoverRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::WorldShareableItem::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::WorldShareableItem::OnMasterClientAssistedTakeoverRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573fe5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"OnMasterClientAssistedTakeoverRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.OnMyCreatorLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::OnMyCreatorLeft)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x573fe64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"OnMyCreatorLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.OnOwnershipRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::WorldShareableItem::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::WorldShareableItem::OnOwnershipRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573fe68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"OnOwnershipRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.OnMyOwnerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::OnMyOwnerLeft)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x573fe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"OnMyOwnerLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.SetWillTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::SetWillTeleport)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x573fe74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"SetWillTeleport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x573fe8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)(bool)>(&::GlobalNamespace::WorldShareableItem::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573ff20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem::*)()>(&::GlobalNamespace::WorldShareableItem::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573ff28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TransferrableObject_PositionState& GlobalNamespace::WorldShareableItem::__cordl_internal_get__transferableObjectState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transferableObjectState_k__BackingField;
}
constexpr ::GlobalNamespace::TransferrableObject_PositionState const& GlobalNamespace::WorldShareableItem::__cordl_internal_get__transferableObjectState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transferableObjectState_k__BackingField;
}
constexpr void GlobalNamespace::WorldShareableItem::__cordl_internal_set__transferableObjectState_k__BackingField(::GlobalNamespace::TransferrableObject_PositionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transferableObjectState_k__BackingField = value;
}
constexpr ::GlobalNamespace::TransferrableObject_ItemStates& GlobalNamespace::WorldShareableItem::__cordl_internal_get__transferableObjectItemState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transferableObjectItemState_k__BackingField;
}
constexpr ::GlobalNamespace::TransferrableObject_ItemStates const& GlobalNamespace::WorldShareableItem::__cordl_internal_get__transferableObjectItemState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transferableObjectItemState_k__BackingField;
}
constexpr void GlobalNamespace::WorldShareableItem::__cordl_internal_set__transferableObjectItemState_k__BackingField(::GlobalNamespace::TransferrableObject_ItemStates  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transferableObjectItemState_k__BackingField = value;
}
constexpr ::GlobalNamespace::TransferrableObject_PositionState& GlobalNamespace::WorldShareableItem::__cordl_internal_get__transferableObjectStateNetworked_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transferableObjectStateNetworked_k__BackingField;
}
constexpr ::GlobalNamespace::TransferrableObject_PositionState const& GlobalNamespace::WorldShareableItem::__cordl_internal_get__transferableObjectStateNetworked_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transferableObjectStateNetworked_k__BackingField;
}
constexpr void GlobalNamespace::WorldShareableItem::__cordl_internal_set__transferableObjectStateNetworked_k__BackingField(::GlobalNamespace::TransferrableObject_PositionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transferableObjectStateNetworked_k__BackingField = value;
}
constexpr ::GlobalNamespace::TransferrableObject_ItemStates& GlobalNamespace::WorldShareableItem::__cordl_internal_get__transferableObjectItemStateNetworked_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transferableObjectItemStateNetworked_k__BackingField;
}
constexpr ::GlobalNamespace::TransferrableObject_ItemStates const& GlobalNamespace::WorldShareableItem::__cordl_internal_get__transferableObjectItemStateNetworked_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transferableObjectItemStateNetworked_k__BackingField;
}
constexpr void GlobalNamespace::WorldShareableItem::__cordl_internal_set__transferableObjectItemStateNetworked_k__BackingField(::GlobalNamespace::TransferrableObject_ItemStates  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transferableObjectItemStateNetworked_k__BackingField = value;
}
constexpr bool& GlobalNamespace::WorldShareableItem::__cordl_internal_get_validShareable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validShareable;
}
constexpr bool const& GlobalNamespace::WorldShareableItem::__cordl_internal_get_validShareable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validShareable;
}
constexpr void GlobalNamespace::WorldShareableItem::__cordl_internal_set_validShareable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validShareable = value;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& GlobalNamespace::WorldShareableItem::__cordl_internal_get_guard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guard;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& GlobalNamespace::WorldShareableItem::__cordl_internal_get_guard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guard;
}
constexpr void GlobalNamespace::WorldShareableItem::__cordl_internal_set_guard(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___guard = value;
}
constexpr ::UnityW<::GlobalNamespace::TransformViewTeleportSerializer>& GlobalNamespace::WorldShareableItem::__cordl_internal_get_teleportSerializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportSerializer;
}
constexpr ::UnityW<::GlobalNamespace::TransformViewTeleportSerializer> const& GlobalNamespace::WorldShareableItem::__cordl_internal_get_teleportSerializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportSerializer;
}
constexpr void GlobalNamespace::WorldShareableItem::__cordl_internal_set_teleportSerializer(::UnityW<::GlobalNamespace::TransformViewTeleportSerializer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportSerializer = value;
}
constexpr ::GlobalNamespace::WorldTargetItem*& GlobalNamespace::WorldShareableItem::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::GlobalNamespace::WorldTargetItem* const& GlobalNamespace::WorldShareableItem::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void GlobalNamespace::WorldShareableItem::__cordl_internal_set__target(::GlobalNamespace::WorldTargetItem*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr ::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*& GlobalNamespace::WorldShareableItem::__cordl_internal_get_onOwnerChangeCb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOwnerChangeCb;
}
constexpr ::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate* const& GlobalNamespace::WorldShareableItem::__cordl_internal_get_onOwnerChangeCb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOwnerChangeCb;
}
constexpr void GlobalNamespace::WorldShareableItem::__cordl_internal_set_onOwnerChangeCb(::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onOwnerChangeCb = value;
}
constexpr ::System::Action*& GlobalNamespace::WorldShareableItem::__cordl_internal_get_rpcCallBack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rpcCallBack;
}
constexpr ::System::Action* const& GlobalNamespace::WorldShareableItem::__cordl_internal_get_rpcCallBack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rpcCallBack;
}
constexpr void GlobalNamespace::WorldShareableItem::__cordl_internal_set_rpcCallBack(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rpcCallBack = value;
}
constexpr bool& GlobalNamespace::WorldShareableItem::__cordl_internal_get_enableRemoteSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableRemoteSync;
}
constexpr bool const& GlobalNamespace::WorldShareableItem::__cordl_internal_get_enableRemoteSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableRemoteSync;
}
constexpr void GlobalNamespace::WorldShareableItem::__cordl_internal_set_enableRemoteSync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableRemoteSync = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::WorldShareableItem_CachedData>*& GlobalNamespace::WorldShareableItem::__cordl_internal_get_cachedDatas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedDatas;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::WorldShareableItem_CachedData>* const& GlobalNamespace::WorldShareableItem::__cordl_internal_get_cachedDatas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedDatas;
}
constexpr void GlobalNamespace::WorldShareableItem::__cordl_internal_set_cachedDatas(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::WorldShareableItem_CachedData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedDatas = value;
}
inline ::GlobalNamespace::TransferrableObject_PositionState GlobalNamespace::WorldShareableItem::get_transferableObjectState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"get_transferableObjectState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TransferrableObject_PositionState>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::set_transferableObjectState(::GlobalNamespace::TransferrableObject_PositionState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"set_transferableObjectState", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TransferrableObject_ItemStates GlobalNamespace::WorldShareableItem::get_transferableObjectItemState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"get_transferableObjectItemState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TransferrableObject_ItemStates>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::set_transferableObjectItemState(::GlobalNamespace::TransferrableObject_ItemStates  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"set_transferableObjectItemState", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_ItemStates>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TransferrableObject_PositionState GlobalNamespace::WorldShareableItem::get_transferableObjectStateNetworked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"get_transferableObjectStateNetworked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TransferrableObject_PositionState>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::set_transferableObjectStateNetworked(::GlobalNamespace::TransferrableObject_PositionState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"set_transferableObjectStateNetworked", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TransferrableObject_ItemStates GlobalNamespace::WorldShareableItem::get_transferableObjectItemStateNetworked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"get_transferableObjectItemStateNetworked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TransferrableObject_ItemStates>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::set_transferableObjectItemStateNetworked(::GlobalNamespace::TransferrableObject_ItemStates  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"set_transferableObjectItemStateNetworked", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_ItemStates>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::WorldTargetItem* GlobalNamespace::WorldShareableItem::get_target()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"get_target", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WorldTargetItem*>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::set_target(::GlobalNamespace::WorldTargetItem*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"set_target", {}, {::i2c::type_of<::GlobalNamespace::WorldTargetItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::WorldShareableItem::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::SetupSharableViewIDs(::GlobalNamespace::NetPlayer*  player, int32_t  slotID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"SetupSharableViewIDs", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, slotID);
}
inline void GlobalNamespace::WorldShareableItem::ResetViews()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"ResetViews", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::SetupSharableObject(int32_t  itemIDx, ::GlobalNamespace::NetPlayer*  owner, ::UnityEngine::Transform*  targetXform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"SetupSharableObject", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemIDx, owner, targetXform);
}
inline void GlobalNamespace::WorldShareableItem::OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::WorldShareableItem::OnOwnerChange(::Photon::Realtime::Player*  newOwner, ::Photon::Realtime::Player*  previousOwner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOwner, previousOwner);
}
inline bool GlobalNamespace::WorldShareableItem::get_EnableRemoteSync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"get_EnableRemoteSync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::set_EnableRemoteSync(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"set_EnableRemoteSync", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::WorldShareableItem::TriggeredUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"TriggeredUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::SyncToSceneObject(::GlobalNamespace::TransferrableObject*  transferrableObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"SyncToSceneObject", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transferrableObject);
}
inline void GlobalNamespace::WorldShareableItem::SetupSceneObjectOnNetwork(::GlobalNamespace::NetPlayer*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"SetupSceneObjectOnNetwork", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline bool GlobalNamespace::WorldShareableItem::IsTargetValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"IsTargetValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::Invalidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"Invalidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"OnOwnershipTransferred", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toPlayer, fromPlayer);
}
inline void GlobalNamespace::WorldShareableItem::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::WorldShareableItem::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::WorldShareableItem::RPCWorldShareable(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"RPCWorldShareable", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline bool GlobalNamespace::WorldShareableItem::OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"OnMasterClientAssistedTakeoverRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromPlayer, toPlayer);
}
inline void GlobalNamespace::WorldShareableItem::OnMyCreatorLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"OnMyCreatorLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::WorldShareableItem::OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"OnOwnershipRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromPlayer);
}
inline void GlobalNamespace::WorldShareableItem::OnMyOwnerLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"OnMyOwnerLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::SetWillTeleport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {"SetWillTeleport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItem::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::WorldShareableItem::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WorldShareableItem* GlobalNamespace::WorldShareableItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WorldShareableItem*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr  GlobalNamespace::WorldShareableItem::operator ::GlobalNamespace::IRequestableOwnershipGuardCallbacks*() noexcept {
return static_cast<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr ::GlobalNamespace::IRequestableOwnershipGuardCallbacks* GlobalNamespace::WorldShareableItem::i___GlobalNamespace__IRequestableOwnershipGuardCallbacks() noexcept {
return static_cast<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WorldShareableItem::WorldShareableItem()   {
}
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5740008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5740114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5740128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5740150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate::Invoke(::GlobalNamespace::NetPlayer*  newOwner, ::GlobalNamespace::NetPlayer*  prevOwner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOwner, prevOwner);
}
inline ::System::IAsyncResult* GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate::BeginInvoke(::GlobalNamespace::NetPlayer*  newOwner, ::GlobalNamespace::NetPlayer*  prevOwner, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, newOwner, prevOwner, callback, object);
}
inline void GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate* GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate::WorldShareableItem_OnOwnerChangeDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem_Delegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem_Delegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::WorldShareableItem_Delegate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x573ff30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem_Delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem_Delegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem_Delegate::*)()>(&::GlobalNamespace::WorldShareableItem_Delegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x573ffcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem_Delegate*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem_Delegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem_Delegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::WorldShareableItem_Delegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::WorldShareableItem_Delegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x573ffe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem_Delegate*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem_Delegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItem_Delegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItem_Delegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::WorldShareableItem_Delegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x573fffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldShareableItem_Delegate*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldShareableItem_Delegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WorldShareableItem_Delegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItem_Delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::WorldShareableItem_Delegate::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem_Delegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::WorldShareableItem_Delegate::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem_Delegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::WorldShareableItem_Delegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldShareableItem_Delegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::WorldShareableItem_Delegate* GlobalNamespace::WorldShareableItem_Delegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WorldShareableItem_Delegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WorldShareableItem_Delegate::WorldShareableItem_Delegate()   {
}

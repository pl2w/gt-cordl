#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonView.hpp"
#include "Photon/Pun/zzzz__IPhotonViewCallback_impl.hpp"
#include "Photon/Pun/zzzz__OwnershipOption_impl.hpp"
#include "Photon/Pun/zzzz__PhotonView_ObservableSearch_impl.hpp"
#include "Photon/Pun/zzzz__ViewSynchronization_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Pun/zzzz__IOnPhotonViewControllerChange_def.hpp"
#include "Photon/Pun/zzzz__IOnPhotonViewOwnerChange_def.hpp"
#include "Photon/Pun/zzzz__IOnPhotonViewPreNetDestroy_def.hpp"
#include "Photon/Pun/zzzz__IPhotonViewCallback_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_CallbackTargetChange_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_ObservableSearch_def.hpp"
#include "Photon/Pun/zzzz__RpcTarget_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_Prefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_Prefix)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa7244a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_Prefix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_Prefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(int32_t)>(&::Photon::Pun::PhotonView::set_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_Prefix", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_InstantiationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_InstantiationData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_InstantiationData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_InstantiationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(::ArrayW<::System::Object*>)>(&::Photon::Pun::PhotonView::set_InstantiationData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_InstantiationData", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_IsSceneView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_IsSceneView)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa72a438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_IsSceneView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_IsRoomView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_IsRoomView)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa71451c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_IsRoomView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_IsOwnerActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_IsOwnerActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa72a448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_IsOwnerActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_IsMine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_IsMine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_IsMine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_IsMine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(bool)>(&::Photon::Pun::PhotonView::set_IsMine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_IsMine", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_AmController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_AmController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_AmController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_Controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::Player* (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_Controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_Controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_Controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonView::set_Controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_Controller", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_CreatorActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_CreatorActorNr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_CreatorActorNr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_CreatorActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(int32_t)>(&::Photon::Pun::PhotonView::set_CreatorActorNr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_CreatorActorNr", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_AmOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_AmOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_AmOwner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_AmOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(bool)>(&::Photon::Pun::PhotonView::set_AmOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_AmOwner", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_Owner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::Player* (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_Owner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_Owner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_Owner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonView::set_Owner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_Owner", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_OwnerActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_OwnerActorNr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_OwnerActorNr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_OwnerActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(int32_t)>(&::Photon::Pun::PhotonView::set_OwnerActorNr)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa71452c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_OwnerActorNr", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_ControllerActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_ControllerActorNr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_ControllerActorNr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_ControllerActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(int32_t)>(&::Photon::Pun::PhotonView::set_ControllerActorNr)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa71473c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_ControllerActorNr", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.get_ViewID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::get_ViewID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72a7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_ViewID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.set_ViewID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(int32_t)>(&::Photon::Pun::PhotonView::set_ViewID)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa71df24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_ViewID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::Awake)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa72a7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.ResetPhotonView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(bool)>(&::Photon::Pun::PhotonView::ResetPhotonView)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa723270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"ResetPhotonView", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.RebuildControllerCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(bool)>(&::Photon::Pun::PhotonView::RebuildControllerCache)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa714b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"RebuildControllerCache", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.OnPreNetDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonView::OnPreNetDestroy)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa724db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"OnPreNetDestroy", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::OnDestroy)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa72a960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.RequestOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::RequestOwnership)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72aab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"RequestOwnership", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.TransferOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonView::TransferOwnership)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72aab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"TransferOwnership", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.TransferOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(int32_t)>(&::Photon::Pun::PhotonView::TransferOwnership)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72aabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"TransferOwnership", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.FindObservables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(bool)>(&::Photon::Pun::PhotonView::FindObservables)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa72a80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"FindObservables", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.SerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonView::SerializeView)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa727b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"SerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.DeserializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonView::DeserializeView)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa728460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"DeserializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.DeserializeComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(::UnityEngine::Component*, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonView::DeserializeComponent)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa72ac94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"DeserializeComponent", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.SerializeComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(::UnityEngine::Component*, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonView::SerializeComponent)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa72aac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"SerializeComponent", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.RefreshRpcMonoBehaviourCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::RefreshRpcMonoBehaviourCache)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa724530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"RefreshRpcMonoBehaviourCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(::StringW, ::Photon::Pun::RpcTarget, ::ArrayW<::System::Object*>)>(&::Photon::Pun::PhotonView::RPC)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa72ae68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"RPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::RpcTarget>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.RpcSecure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(::StringW, ::Photon::Pun::RpcTarget, bool, ::ArrayW<::System::Object*>)>(&::Photon::Pun::PhotonView::RpcSecure)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa72aee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"RpcSecure", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::RpcTarget>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(::StringW, ::Photon::Realtime::Player*, ::ArrayW<::System::Object*>)>(&::Photon::Pun::PhotonView::RPC)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa72af6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"RPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.RpcSecure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(::StringW, ::Photon::Realtime::Player*, bool, ::ArrayW<::System::Object*>)>(&::Photon::Pun::PhotonView::RpcSecure)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa72afec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"RpcSecure", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Pun::PhotonView> (*)(::UnityEngine::Component*)>(&::Photon::Pun::PhotonView::Get)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa72b070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Pun::PhotonView> (*)(::UnityEngine::GameObject*)>(&::Photon::Pun::PhotonView::Get)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa72b0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.Find
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Pun::PhotonView> (*)(int32_t)>(&::Photon::Pun::PhotonView::Find)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa72b180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"Find", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.AddCallbackTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(::Photon::Pun::IPhotonViewCallback*)>(&::Photon::Pun::PhotonView::AddCallbackTarget)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa72b1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"AddCallbackTarget", {}, {::i2c::type_of<::Photon::Pun::IPhotonViewCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.RemoveCallbackTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)(::Photon::Pun::IPhotonViewCallback*)>(&::Photon::Pun::PhotonView::RemoveCallbackTarget)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa72b2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"RemoveCallbackTarget", {}, {::i2c::type_of<::Photon::Pun::IPhotonViewCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.UpdateCallbackLists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::UpdateCallbackLists)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xa72a4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"UpdateCallbackLists", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::ToString)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xa72b35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                    {::i2c::class_of<::Photon::Pun::PhotonView*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonView._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonView::*)()>(&::Photon::Pun::PhotonView::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa72b614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& Photon::Pun::PhotonView::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr uint8_t const& Photon::Pun::PhotonView::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_Group(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
constexpr int32_t& Photon::Pun::PhotonView::__cordl_internal_get_prefixField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefixField;
}
constexpr int32_t const& Photon::Pun::PhotonView::__cordl_internal_get_prefixField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefixField;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_prefixField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefixField = value;
}
constexpr ::ArrayW<::System::Object*>& Photon::Pun::PhotonView::__cordl_internal_get_instantiationDataField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instantiationDataField;
}
constexpr ::ArrayW<::System::Object*> const& Photon::Pun::PhotonView::__cordl_internal_get_instantiationDataField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instantiationDataField;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_instantiationDataField(::ArrayW<::System::Object*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instantiationDataField = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Photon::Pun::PhotonView::__cordl_internal_get_lastOnSerializeDataSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastOnSerializeDataSent;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& Photon::Pun::PhotonView::__cordl_internal_get_lastOnSerializeDataSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastOnSerializeDataSent;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_lastOnSerializeDataSent(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastOnSerializeDataSent = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Photon::Pun::PhotonView::__cordl_internal_get_syncValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncValues;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& Photon::Pun::PhotonView::__cordl_internal_get_syncValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncValues;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_syncValues(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncValues = value;
}
constexpr ::ArrayW<::System::Object*>& Photon::Pun::PhotonView::__cordl_internal_get_lastOnSerializeDataReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastOnSerializeDataReceived;
}
constexpr ::ArrayW<::System::Object*> const& Photon::Pun::PhotonView::__cordl_internal_get_lastOnSerializeDataReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastOnSerializeDataReceived;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_lastOnSerializeDataReceived(::ArrayW<::System::Object*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastOnSerializeDataReceived = value;
}
constexpr ::Photon::Pun::ViewSynchronization& Photon::Pun::PhotonView::__cordl_internal_get_Synchronization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Synchronization;
}
constexpr ::Photon::Pun::ViewSynchronization const& Photon::Pun::PhotonView::__cordl_internal_get_Synchronization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Synchronization;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_Synchronization(::Photon::Pun::ViewSynchronization  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Synchronization = value;
}
constexpr bool& Photon::Pun::PhotonView::__cordl_internal_get_mixedModeIsReliable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixedModeIsReliable;
}
constexpr bool const& Photon::Pun::PhotonView::__cordl_internal_get_mixedModeIsReliable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixedModeIsReliable;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_mixedModeIsReliable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mixedModeIsReliable = value;
}
constexpr ::Photon::Pun::OwnershipOption& Photon::Pun::PhotonView::__cordl_internal_get_OwnershipTransfer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OwnershipTransfer;
}
constexpr ::Photon::Pun::OwnershipOption const& Photon::Pun::PhotonView::__cordl_internal_get_OwnershipTransfer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OwnershipTransfer;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_OwnershipTransfer(::Photon::Pun::OwnershipOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OwnershipTransfer = value;
}
constexpr ::GlobalNamespace::PhotonView_ObservableSearch& Photon::Pun::PhotonView::__cordl_internal_get_observableSearch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observableSearch;
}
constexpr ::GlobalNamespace::PhotonView_ObservableSearch const& Photon::Pun::PhotonView::__cordl_internal_get_observableSearch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observableSearch;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_observableSearch(::GlobalNamespace::PhotonView_ObservableSearch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___observableSearch = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*& Photon::Pun::PhotonView::__cordl_internal_get_ObservedComponents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObservedComponents;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* const& Photon::Pun::PhotonView::__cordl_internal_get_ObservedComponents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObservedComponents;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_ObservedComponents(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ObservedComponents = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>& Photon::Pun::PhotonView::__cordl_internal_get_RpcMonoBehaviours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RpcMonoBehaviours;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>> const& Photon::Pun::PhotonView::__cordl_internal_get_RpcMonoBehaviours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RpcMonoBehaviours;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_RpcMonoBehaviours(::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RpcMonoBehaviours = value;
}
constexpr bool& Photon::Pun::PhotonView::__cordl_internal_get__IsMine_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMine_k__BackingField;
}
constexpr bool const& Photon::Pun::PhotonView::__cordl_internal_get__IsMine_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMine_k__BackingField;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set__IsMine_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsMine_k__BackingField = value;
}
constexpr ::Photon::Realtime::Player*& Photon::Pun::PhotonView::__cordl_internal_get__Controller_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller_k__BackingField;
}
constexpr ::Photon::Realtime::Player* const& Photon::Pun::PhotonView::__cordl_internal_get__Controller_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller_k__BackingField;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set__Controller_k__BackingField(::Photon::Realtime::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Controller_k__BackingField = value;
}
constexpr int32_t& Photon::Pun::PhotonView::__cordl_internal_get__CreatorActorNr_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CreatorActorNr_k__BackingField;
}
constexpr int32_t const& Photon::Pun::PhotonView::__cordl_internal_get__CreatorActorNr_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CreatorActorNr_k__BackingField;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set__CreatorActorNr_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CreatorActorNr_k__BackingField = value;
}
constexpr bool& Photon::Pun::PhotonView::__cordl_internal_get__AmOwner_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AmOwner_k__BackingField;
}
constexpr bool const& Photon::Pun::PhotonView::__cordl_internal_get__AmOwner_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AmOwner_k__BackingField;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set__AmOwner_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AmOwner_k__BackingField = value;
}
constexpr ::Photon::Realtime::Player*& Photon::Pun::PhotonView::__cordl_internal_get__Owner_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Owner_k__BackingField;
}
constexpr ::Photon::Realtime::Player* const& Photon::Pun::PhotonView::__cordl_internal_get__Owner_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Owner_k__BackingField;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set__Owner_k__BackingField(::Photon::Realtime::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Owner_k__BackingField = value;
}
constexpr int32_t& Photon::Pun::PhotonView::__cordl_internal_get_ownerActorNr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerActorNr;
}
constexpr int32_t const& Photon::Pun::PhotonView::__cordl_internal_get_ownerActorNr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerActorNr;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_ownerActorNr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownerActorNr = value;
}
constexpr int32_t& Photon::Pun::PhotonView::__cordl_internal_get_controllerActorNr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerActorNr;
}
constexpr int32_t const& Photon::Pun::PhotonView::__cordl_internal_get_controllerActorNr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerActorNr;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_controllerActorNr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerActorNr = value;
}
constexpr int32_t& Photon::Pun::PhotonView::__cordl_internal_get_sceneViewId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneViewId;
}
constexpr int32_t const& Photon::Pun::PhotonView::__cordl_internal_get_sceneViewId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneViewId;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_sceneViewId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneViewId = value;
}
constexpr int32_t& Photon::Pun::PhotonView::__cordl_internal_get_viewIdField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___viewIdField;
}
constexpr int32_t const& Photon::Pun::PhotonView::__cordl_internal_get_viewIdField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___viewIdField;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_viewIdField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___viewIdField = value;
}
constexpr int32_t& Photon::Pun::PhotonView::__cordl_internal_get_InstantiationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstantiationId;
}
constexpr int32_t const& Photon::Pun::PhotonView::__cordl_internal_get_InstantiationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstantiationId;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_InstantiationId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InstantiationId = value;
}
constexpr bool& Photon::Pun::PhotonView::__cordl_internal_get_isRuntimeInstantiated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRuntimeInstantiated;
}
constexpr bool const& Photon::Pun::PhotonView::__cordl_internal_get_isRuntimeInstantiated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRuntimeInstantiated;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_isRuntimeInstantiated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRuntimeInstantiated = value;
}
constexpr bool& Photon::Pun::PhotonView::__cordl_internal_get_removedFromLocalViewList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removedFromLocalViewList;
}
constexpr bool const& Photon::Pun::PhotonView::__cordl_internal_get_removedFromLocalViewList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removedFromLocalViewList;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_removedFromLocalViewList(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___removedFromLocalViewList = value;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::PhotonView_CallbackTargetChange>*& Photon::Pun::PhotonView::__cordl_internal_get_CallbackChangeQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CallbackChangeQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::PhotonView_CallbackTargetChange>* const& Photon::Pun::PhotonView::__cordl_internal_get_CallbackChangeQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CallbackChangeQueue;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_CallbackChangeQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::PhotonView_CallbackTargetChange>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CallbackChangeQueue = value;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewPreNetDestroy*>*& Photon::Pun::PhotonView::__cordl_internal_get_OnPreNetDestroyCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPreNetDestroyCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewPreNetDestroy*>* const& Photon::Pun::PhotonView::__cordl_internal_get_OnPreNetDestroyCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPreNetDestroyCallbacks;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_OnPreNetDestroyCallbacks(::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewPreNetDestroy*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPreNetDestroyCallbacks = value;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewOwnerChange*>*& Photon::Pun::PhotonView::__cordl_internal_get_OnOwnerChangeCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOwnerChangeCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewOwnerChange*>* const& Photon::Pun::PhotonView::__cordl_internal_get_OnOwnerChangeCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOwnerChangeCallbacks;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_OnOwnerChangeCallbacks(::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewOwnerChange*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnOwnerChangeCallbacks = value;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewControllerChange*>*& Photon::Pun::PhotonView::__cordl_internal_get_OnControllerChangeCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnControllerChangeCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewControllerChange*>* const& Photon::Pun::PhotonView::__cordl_internal_get_OnControllerChangeCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnControllerChangeCallbacks;
}
constexpr void Photon::Pun::PhotonView::__cordl_internal_set_OnControllerChangeCallbacks(::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewControllerChange*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnControllerChangeCallbacks = value;
}
inline int32_t Photon::Pun::PhotonView::get_Prefix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_Prefix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_Prefix(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_Prefix", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Object*> Photon::Pun::PhotonView::get_InstantiationData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_InstantiationData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_InstantiationData(::ArrayW<::System::Object*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_InstantiationData", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Pun::PhotonView::get_IsSceneView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_IsSceneView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Pun::PhotonView::get_IsRoomView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_IsRoomView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Pun::PhotonView::get_IsOwnerActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_IsOwnerActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Pun::PhotonView::get_IsMine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_IsMine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_IsMine(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_IsMine", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Pun::PhotonView::get_AmController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_AmController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Photon::Realtime::Player* Photon::Pun::PhotonView::get_Controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_Controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_Controller(::Photon::Realtime::Player*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_Controller", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Pun::PhotonView::get_CreatorActorNr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_CreatorActorNr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_CreatorActorNr(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_CreatorActorNr", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Pun::PhotonView::get_AmOwner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_AmOwner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_AmOwner(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_AmOwner", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Photon::Realtime::Player* Photon::Pun::PhotonView::get_Owner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_Owner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_Owner(::Photon::Realtime::Player*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_Owner", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Pun::PhotonView::get_OwnerActorNr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_OwnerActorNr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_OwnerActorNr(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_OwnerActorNr", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Pun::PhotonView::get_ControllerActorNr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_ControllerActorNr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_ControllerActorNr(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_ControllerActorNr", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Pun::PhotonView::get_ViewID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"get_ViewID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::set_ViewID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"set_ViewID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Pun::PhotonView::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::ResetPhotonView(bool  resetOwner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"ResetPhotonView", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resetOwner);
}
inline void Photon::Pun::PhotonView::RebuildControllerCache(bool  ownerHasChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"RebuildControllerCache", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ownerHasChanged);
}
inline void Photon::Pun::PhotonView::OnPreNetDestroy(::Photon::Pun::PhotonView*  rootView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"OnPreNetDestroy", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rootView);
}
inline void Photon::Pun::PhotonView::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::RequestOwnership()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"RequestOwnership", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::TransferOwnership(::Photon::Realtime::Player*  newOwner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"TransferOwnership", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOwner);
}
inline void Photon::Pun::PhotonView::TransferOwnership(int32_t  newOwnerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"TransferOwnership", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOwnerId);
}
inline void Photon::Pun::PhotonView::FindObservables(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"FindObservables", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void Photon::Pun::PhotonView::SerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"SerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void Photon::Pun::PhotonView::DeserializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"DeserializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void Photon::Pun::PhotonView::DeserializeComponent(::UnityEngine::Component*  component, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"DeserializeComponent", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, stream, info);
}
inline void Photon::Pun::PhotonView::SerializeComponent(::UnityEngine::Component*  component, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"SerializeComponent", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, stream, info);
}
inline void Photon::Pun::PhotonView::RefreshRpcMonoBehaviourCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"RefreshRpcMonoBehaviourCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::RPC(::StringW  methodName, ::Photon::Pun::RpcTarget  target, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"RPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::RpcTarget>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, target, parameters);
}
inline void Photon::Pun::PhotonView::RpcSecure(::StringW  methodName, ::Photon::Pun::RpcTarget  target, bool  encrypt, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"RpcSecure", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::RpcTarget>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, target, encrypt, parameters);
}
inline void Photon::Pun::PhotonView::RPC(::StringW  methodName, ::Photon::Realtime::Player*  targetPlayer, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"RPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, targetPlayer, parameters);
}
inline void Photon::Pun::PhotonView::RpcSecure(::StringW  methodName, ::Photon::Realtime::Player*  targetPlayer, bool  encrypt, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"RpcSecure", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, targetPlayer, encrypt, parameters);
}
inline ::UnityW<::Photon::Pun::PhotonView> Photon::Pun::PhotonView::Get(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::PhotonView>>(nullptr, ___internal_method, component);
}
inline ::UnityW<::Photon::Pun::PhotonView> Photon::Pun::PhotonView::Get(::UnityEngine::GameObject*  gameObj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::PhotonView>>(nullptr, ___internal_method, gameObj);
}
inline ::UnityW<::Photon::Pun::PhotonView> Photon::Pun::PhotonView::Find(int32_t  viewID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"Find", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::PhotonView>>(nullptr, ___internal_method, viewID);
}
inline void Photon::Pun::PhotonView::AddCallbackTarget(::Photon::Pun::IPhotonViewCallback*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"AddCallbackTarget", {}, {::i2c::type_of<::Photon::Pun::IPhotonViewCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Photon::Pun::PhotonView::RemoveCallbackTarget(::Photon::Pun::IPhotonViewCallback*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"RemoveCallbackTarget", {}, {::i2c::type_of<::Photon::Pun::IPhotonViewCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Photon::Pun::IPhotonViewCallback*> && ::cordl_internals::reference_type_constraint<T>)
inline void Photon::Pun::PhotonView::AddCallback(::Photon::Pun::IPhotonViewCallback*  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                    {"AddCallback", {::i2c::class_of<T>()}, {::i2c::type_of<::Photon::Pun::IPhotonViewCallback*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Photon::Pun::IPhotonViewCallback*> && ::cordl_internals::reference_type_constraint<T>)
inline void Photon::Pun::PhotonView::RemoveCallback(::Photon::Pun::IPhotonViewCallback*  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                    {"RemoveCallback", {::i2c::class_of<T>()}, {::i2c::type_of<::Photon::Pun::IPhotonViewCallback*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Photon::Pun::PhotonView::UpdateCallbackLists()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {"UpdateCallbackLists", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Photon::Pun::IPhotonViewCallback*> && ::cordl_internals::reference_type_constraint<T>)
inline void Photon::Pun::PhotonView::TryRegisterCallback(::Photon::Pun::IPhotonViewCallback*  obj, ::by_ref<::System::Collections::Generic::List_1<T>*>  list, bool  add)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                    {"TryRegisterCallback", {::i2c::class_of<T>()}, {::i2c::type_of<::Photon::Pun::IPhotonViewCallback*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, list, add);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Photon::Pun::IPhotonViewCallback*> && ::cordl_internals::reference_type_constraint<T>)
inline void Photon::Pun::PhotonView::RegisterCallback(T  obj, ::by_ref<::System::Collections::Generic::List_1<T>*>  list, bool  add)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                    {"RegisterCallback", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, list, add);
}
inline ::StringW Photon::Pun::PhotonView::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::PhotonView*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Pun::PhotonView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonView*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::PhotonView* Photon::Pun::PhotonView::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonView*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonView::PhotonView()   {
}

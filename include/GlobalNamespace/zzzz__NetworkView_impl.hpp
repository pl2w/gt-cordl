#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkView.hpp"
#include "Fusion/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkView_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
#include "Fusion/zzzz__IStateAuthorityChanged_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "Photon/Pun/zzzz__IPunOwnershipCallbacks_def.hpp"
#include "Photon/Pun/zzzz__OwnershipOption_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Pun/zzzz__RpcTarget_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkView.get_IsMine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::get_IsMine)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x56e8674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_IsMine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::get_IsValid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x56ebcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.get_HasView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::get_HasView)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x56ebd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_HasView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.get_IsRoomView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::get_IsRoomView)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56ebd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_IsRoomView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.get_GetView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Pun::PhotonView> (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::get_GetView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ebd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_GetView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.get_Owner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::get_Owner)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56ebd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_Owner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.get_ViewID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::get_ViewID)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56ebe08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_ViewID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.get_OwnershipTransfer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Pun::OwnershipOption (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::get_OwnershipTransfer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56ebe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_OwnershipTransfer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.set_OwnershipTransfer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)(::Photon::Pun::OwnershipOption)>(&::GlobalNamespace::NetworkView::set_OwnershipTransfer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x56ebe38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"set_OwnershipTransfer", {}, {::i2c::type_of<::Photon::Pun::OwnershipOption>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.get_OwnerActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::get_OwnerActorNr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56ebec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_OwnerActorNr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.set_OwnerActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)(int32_t)>(&::GlobalNamespace::NetworkView::set_OwnerActorNr)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56ebed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"set_OwnerActorNr", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.get_ControllerActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::get_ControllerActorNr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56ebf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_ControllerActorNr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.set_ControllerActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)(int32_t)>(&::GlobalNamespace::NetworkView::set_ControllerActorNr)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56ebf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"set_ControllerActorNr", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.GetViews
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::GetViews)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x56ec030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"GetViews", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56ec1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::Start)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56e8214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.SendRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)(::StringW, ::GlobalNamespace::NetPlayer*, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::NetworkView::SendRPC)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56ec1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"SendRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.SendRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)(::StringW, ::Photon::Pun::RpcTarget, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::NetworkView::SendRPC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56ec294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"SendRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::RpcTarget>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.SendRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)(::StringW, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::NetworkView::SendRPC)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x56ec2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"SendRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.Spawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::Spawned)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56ec3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.RequestOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::RequestOwnership)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56ec3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"RequestOwnership", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.ReleaseOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::ReleaseOwnership)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x56ec3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"ReleaseOwnership", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.StateAuthorityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::StateAuthorityChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56e863c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.OnOwnershipRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&::GlobalNamespace::NetworkView::OnOwnershipRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56ec40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.OnOwnershipTransfered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&::GlobalNamespace::NetworkView::OnOwnershipTransfered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56ec410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.OnOwnershipTransferFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&::GlobalNamespace::NetworkView::OnOwnershipTransferFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56ec414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e8890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)(bool)>(&::GlobalNamespace::NetworkView::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56e889c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkView.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkView::*)()>(&::GlobalNamespace::NetworkView::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56e88a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::NetworkView::__cordl_internal_get_punView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___punView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::NetworkView::__cordl_internal_get_punView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___punView;
}
constexpr void GlobalNamespace::NetworkView::__cordl_internal_set_punView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___punView = value;
}
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::NetworkView::__cordl_internal_get_reliableView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::NetworkView::__cordl_internal_get_reliableView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableView;
}
constexpr void GlobalNamespace::NetworkView::__cordl_internal_set_reliableView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableView = value;
}
constexpr ::UnityW<::Fusion::NetworkObject>& GlobalNamespace::NetworkView::__cordl_internal_get_fusionView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fusionView;
}
constexpr ::UnityW<::Fusion::NetworkObject> const& GlobalNamespace::NetworkView::__cordl_internal_get_fusionView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fusionView;
}
constexpr void GlobalNamespace::NetworkView::__cordl_internal_set_fusionView(::UnityW<::Fusion::NetworkObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fusionView = value;
}
constexpr bool& GlobalNamespace::NetworkView::__cordl_internal_get__sceneObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneObject;
}
constexpr bool const& GlobalNamespace::NetworkView::__cordl_internal_get__sceneObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneObject;
}
constexpr void GlobalNamespace::NetworkView::__cordl_internal_set__sceneObject(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneObject = value;
}
constexpr bool& GlobalNamespace::NetworkView::__cordl_internal_get__spawned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawned;
}
constexpr bool const& GlobalNamespace::NetworkView::__cordl_internal_get__spawned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawned;
}
constexpr void GlobalNamespace::NetworkView::__cordl_internal_set__spawned(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawned = value;
}
constexpr bool& GlobalNamespace::NetworkView::__cordl_internal_get_changingStatAuth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changingStatAuth;
}
constexpr bool const& GlobalNamespace::NetworkView::__cordl_internal_get_changingStatAuth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changingStatAuth;
}
constexpr void GlobalNamespace::NetworkView::__cordl_internal_set_changingStatAuth(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changingStatAuth = value;
}
inline bool GlobalNamespace::NetworkView::get_IsMine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_IsMine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkView::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkView::get_HasView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_HasView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkView::get_IsRoomView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_IsRoomView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::Photon::Pun::PhotonView> GlobalNamespace::NetworkView::get_GetView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_GetView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::PhotonView>>(this, ___internal_method);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetworkView::get_Owner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_Owner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkView::get_ViewID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_ViewID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Photon::Pun::OwnershipOption GlobalNamespace::NetworkView::get_OwnershipTransfer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_OwnershipTransfer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Pun::OwnershipOption>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkView::set_OwnershipTransfer(::Photon::Pun::OwnershipOption  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"set_OwnershipTransfer", {}, {::i2c::type_of<::Photon::Pun::OwnershipOption>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::NetworkView::get_OwnerActorNr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_OwnerActorNr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkView::set_OwnerActorNr(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"set_OwnerActorNr", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::NetworkView::get_ControllerActorNr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"get_ControllerActorNr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkView::set_ControllerActorNr(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"set_ControllerActorNr", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NetworkView::GetViews()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"GetViews", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkView::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkView::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkView::SendRPC(::StringW  method, ::GlobalNamespace::NetPlayer*  targetPlayer, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"SendRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, targetPlayer, parameters);
}
inline void GlobalNamespace::NetworkView::SendRPC(::StringW  method, ::Photon::Pun::RpcTarget  target, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"SendRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::RpcTarget>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, target, parameters);
}
inline void GlobalNamespace::NetworkView::SendRPC(::StringW  method, int32_t  target, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"SendRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, target, parameters);
}
inline void GlobalNamespace::NetworkView::Spawned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkView::RequestOwnership()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"RequestOwnership", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkView::ReleaseOwnership()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {"ReleaseOwnership", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkView::StateAuthorityChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkView::OnOwnershipRequest(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  requestingPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetView, requestingPlayer);
}
inline void GlobalNamespace::NetworkView::OnOwnershipTransfered(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  previousOwner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetView, previousOwner);
}
inline void GlobalNamespace::NetworkView::OnOwnershipTransferFailed(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  senderOfFailedRequest)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetView, senderOfFailedRequest);
}
inline void GlobalNamespace::NetworkView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkView*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkView::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::NetworkView::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkView*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkView* GlobalNamespace::NetworkView::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkView*>());
}
/// @brief Convert operator to "::Fusion::IStateAuthorityChanged"
constexpr  GlobalNamespace::NetworkView::operator ::Fusion::IStateAuthorityChanged*() noexcept {
return static_cast<::Fusion::IStateAuthorityChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IStateAuthorityChanged"
constexpr ::Fusion::IStateAuthorityChanged* GlobalNamespace::NetworkView::i___Fusion__IStateAuthorityChanged() noexcept {
return static_cast<::Fusion::IStateAuthorityChanged*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  GlobalNamespace::NetworkView::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* GlobalNamespace::NetworkView::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Pun::IPunOwnershipCallbacks"
constexpr  GlobalNamespace::NetworkView::operator ::Photon::Pun::IPunOwnershipCallbacks*() noexcept {
return static_cast<::Photon::Pun::IPunOwnershipCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunOwnershipCallbacks"
constexpr ::Photon::Pun::IPunOwnershipCallbacks* GlobalNamespace::NetworkView::i___Photon__Pun__IPunOwnershipCallbacks() noexcept {
return static_cast<::Photon::Pun::IPunOwnershipCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkView::NetworkView()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcadeMachineJoystick.hpp"
#include "GlobalNamespace/zzzz__ArcadeButtons_impl.hpp"
#include "GlobalNamespace/zzzz__HandHold_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "GlobalNamespace/zzzz__ArcadeMachineJoystick_def.hpp"
#include "GlobalNamespace/zzzz__ArcadeButtons_def.hpp"
#include "GlobalNamespace/zzzz__ArcadeMachine_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGrabber_def.hpp"
#include "GlobalNamespace/zzzz__IRequestableOwnershipGuardCallbacks_def.hpp"
#include "GlobalNamespace/zzzz__ISnapTurnOverride_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RequestableOwnershipGuard_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__GorillaSnapTurn_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.get_heldByLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArcadeMachineJoystick::*)()>(&::GlobalNamespace::ArcadeMachineJoystick::get_heldByLocalPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e5154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"get_heldByLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.set_heldByLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)(bool)>(&::GlobalNamespace::ArcadeMachineJoystick::set_heldByLocalPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e515c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"set_heldByLocalPlayer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.get_IsHeldLeftHanded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArcadeMachineJoystick::*)()>(&::GlobalNamespace::ArcadeMachineJoystick::get_IsHeldLeftHanded)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x55e5164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"get_IsHeldLeftHanded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.get_currentButtonState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ArcadeButtons (::GlobalNamespace::ArcadeMachineJoystick::*)()>(&::GlobalNamespace::ArcadeMachineJoystick::get_currentButtonState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e5184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"get_currentButtonState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.set_currentButtonState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)(::GlobalNamespace::ArcadeButtons)>(&::GlobalNamespace::ArcadeMachineJoystick::set_currentButtonState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e518c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"set_currentButtonState", {}, {::i2c::type_of<::GlobalNamespace::ArcadeButtons>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.get_player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ArcadeMachineJoystick::*)()>(&::GlobalNamespace::ArcadeMachineJoystick::get_player)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e5194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"get_player", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.set_player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)(int32_t)>(&::GlobalNamespace::ArcadeMachineJoystick::set_player)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e519c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"set_player", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)(::GlobalNamespace::ArcadeMachine*, int32_t)>(&::GlobalNamespace::ArcadeMachineJoystick::Init)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55e51a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::ArcadeMachine*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.BindController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)(bool)>(&::GlobalNamespace::ArcadeMachineJoystick::BindController)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x55e523c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"BindController", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.OnOwnershipSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)()>(&::GlobalNamespace::ArcadeMachineJoystick::OnOwnershipSuccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55e5550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"OnOwnershipSuccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.OnOwnershipFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)()>(&::GlobalNamespace::ArcadeMachineJoystick::OnOwnershipFail)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x55e5554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"OnOwnershipFail", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.UnbindController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)()>(&::GlobalNamespace::ArcadeMachineJoystick::UnbindController)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x55e556c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"UnbindController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.OnInputUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)()>(&::GlobalNamespace::ArcadeMachineJoystick::OnInputUpdate)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x55e5640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"OnInputUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::ArcadeMachineJoystick::ReadDataPUN)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x55e5818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"ReadDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::ArcadeMachineJoystick::WriteDataPUN)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x55e5948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"WriteDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.ReceiveRemoteState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)(::GlobalNamespace::ArcadeButtons)>(&::GlobalNamespace::ArcadeMachineJoystick::ReceiveRemoteState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55e59d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"ReceiveRemoteState", {}, {::i2c::type_of<::GlobalNamespace::ArcadeButtons>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.TurnOverrideActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArcadeMachineJoystick::*)()>(&::GlobalNamespace::ArcadeMachineJoystick::TurnOverrideActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e59d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"TurnOverrideActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.CanBeGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArcadeMachineJoystick::*)(::GlobalNamespace::GorillaGrabber*)>(&::GlobalNamespace::ArcadeMachineJoystick::CanBeGrabbed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x55e59dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.ForceRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)()>(&::GlobalNamespace::ArcadeMachineJoystick::ForceRelease)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x55e5560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"ForceRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.OnOwnershipTransferred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::ArcadeMachineJoystick::OnOwnershipTransferred)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x55e5a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"OnOwnershipTransferred", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.OnOwnershipRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArcadeMachineJoystick::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::ArcadeMachineJoystick::OnOwnershipRequest)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55e5a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"OnOwnershipRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.OnMasterClientAssistedTakeoverRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArcadeMachineJoystick::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::ArcadeMachineJoystick::OnMasterClientAssistedTakeoverRequest)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55e5a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"OnMasterClientAssistedTakeoverRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.OnMyOwnerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)()>(&::GlobalNamespace::ArcadeMachineJoystick::OnMyOwnerLeft)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55e5a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"OnMyOwnerLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick.OnMyCreatorLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)()>(&::GlobalNamespace::ArcadeMachineJoystick::OnMyCreatorLeft)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55e5a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"OnMyCreatorLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystick._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystick::*)()>(&::GlobalNamespace::ArcadeMachineJoystick::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e5a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::XRNode& GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_get_xrNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrNode;
}
constexpr ::UnityEngine::XR::XRNode const& GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_get_xrNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrNode;
}
constexpr void GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_set_xrNode(::UnityEngine::XR::XRNode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xrNode = value;
}
constexpr bool& GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_get__heldByLocalPlayer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heldByLocalPlayer_k__BackingField;
}
constexpr bool const& GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_get__heldByLocalPlayer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heldByLocalPlayer_k__BackingField;
}
constexpr void GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_set__heldByLocalPlayer_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____heldByLocalPlayer_k__BackingField = value;
}
constexpr ::GlobalNamespace::ArcadeButtons& GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_get__currentButtonState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentButtonState_k__BackingField;
}
constexpr ::GlobalNamespace::ArcadeButtons const& GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_get__currentButtonState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentButtonState_k__BackingField;
}
constexpr void GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_set__currentButtonState_k__BackingField(::GlobalNamespace::ArcadeButtons  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentButtonState_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_get__player_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_get__player_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player_k__BackingField;
}
constexpr void GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_set__player_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____player_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::ArcadeMachine>& GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_get_machine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___machine;
}
constexpr ::UnityW<::GlobalNamespace::ArcadeMachine> const& GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_get_machine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___machine;
}
constexpr void GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_set_machine(::UnityW<::GlobalNamespace::ArcadeMachine>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___machine = value;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_get_guard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guard;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_get_guard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guard;
}
constexpr void GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_set_guard(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___guard = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>& GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_get_snapTurn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapTurn;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn> const& GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_get_snapTurn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapTurn;
}
constexpr void GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_set_snapTurn(::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapTurn = value;
}
constexpr bool& GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_get_snapTurnOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapTurnOverride;
}
constexpr bool const& GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_get_snapTurnOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapTurnOverride;
}
constexpr void GlobalNamespace::ArcadeMachineJoystick::__cordl_internal_set_snapTurnOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapTurnOverride = value;
}
inline bool GlobalNamespace::ArcadeMachineJoystick::get_heldByLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"get_heldByLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachineJoystick::set_heldByLocalPlayer(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"set_heldByLocalPlayer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::ArcadeMachineJoystick::get_IsHeldLeftHanded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"get_IsHeldLeftHanded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::ArcadeButtons GlobalNamespace::ArcadeMachineJoystick::get_currentButtonState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"get_currentButtonState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ArcadeButtons>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachineJoystick::set_currentButtonState(::GlobalNamespace::ArcadeButtons  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"set_currentButtonState", {}, {::i2c::type_of<::GlobalNamespace::ArcadeButtons>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::ArcadeMachineJoystick::get_player()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"get_player", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachineJoystick::set_player(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"set_player", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ArcadeMachineJoystick::Init(::GlobalNamespace::ArcadeMachine*  machine, int32_t  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::ArcadeMachine*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, machine, player);
}
inline void GlobalNamespace::ArcadeMachineJoystick::BindController(bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"BindController", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand);
}
inline void GlobalNamespace::ArcadeMachineJoystick::OnOwnershipSuccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"OnOwnershipSuccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachineJoystick::OnOwnershipFail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"OnOwnershipFail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachineJoystick::UnbindController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"UnbindController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachineJoystick::OnInputUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"OnInputUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachineJoystick::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"ReadDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::ArcadeMachineJoystick::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"WriteDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::ArcadeMachineJoystick::ReceiveRemoteState(::GlobalNamespace::ArcadeButtons  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"ReceiveRemoteState", {}, {::i2c::type_of<::GlobalNamespace::ArcadeButtons>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline bool GlobalNamespace::ArcadeMachineJoystick::TurnOverrideActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"TurnOverrideActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ArcadeMachineJoystick::CanBeGrabbed(::GlobalNamespace::GorillaGrabber*  grabber)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, grabber);
}
inline void GlobalNamespace::ArcadeMachineJoystick::ForceRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"ForceRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachineJoystick::OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"OnOwnershipTransferred", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toPlayer, fromPlayer);
}
inline bool GlobalNamespace::ArcadeMachineJoystick::OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"OnOwnershipRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromPlayer);
}
inline bool GlobalNamespace::ArcadeMachineJoystick::OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"OnMasterClientAssistedTakeoverRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromPlayer, toPlayer);
}
inline void GlobalNamespace::ArcadeMachineJoystick::OnMyOwnerLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"OnMyOwnerLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachineJoystick::OnMyCreatorLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {"OnMyCreatorLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachineJoystick::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystick*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ArcadeMachineJoystick* GlobalNamespace::ArcadeMachineJoystick::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ArcadeMachineJoystick*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISnapTurnOverride"
constexpr  GlobalNamespace::ArcadeMachineJoystick::operator ::GlobalNamespace::ISnapTurnOverride*() noexcept {
return static_cast<::GlobalNamespace::ISnapTurnOverride*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISnapTurnOverride"
constexpr ::GlobalNamespace::ISnapTurnOverride* GlobalNamespace::ArcadeMachineJoystick::i___GlobalNamespace__ISnapTurnOverride() noexcept {
return static_cast<::GlobalNamespace::ISnapTurnOverride*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr  GlobalNamespace::ArcadeMachineJoystick::operator ::GlobalNamespace::IRequestableOwnershipGuardCallbacks*() noexcept {
return static_cast<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr ::GlobalNamespace::IRequestableOwnershipGuardCallbacks* GlobalNamespace::ArcadeMachineJoystick::i___GlobalNamespace__IRequestableOwnershipGuardCallbacks() noexcept {
return static_cast<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArcadeMachineJoystick::ArcadeMachineJoystick()   {
}

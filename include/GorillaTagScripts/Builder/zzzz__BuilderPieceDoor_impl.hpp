#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceDoor.hpp"
#include "BoingKit/zzzz__FloatSpring_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceDoor_DoorState_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallHandTrigger_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallMonkeTrigger_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LineRenderer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceDoor_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceComponent_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceFunctional_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceDoor_DoorState_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoor::Awake)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5c25ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoor::OnDestroy)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5c26094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.SetDoorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)(::GlobalNamespace::BuilderPieceDoor_DoorState)>(&::GorillaTagScripts::Builder::BuilderPieceDoor::SetDoorState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c26240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"SetDoorState", {}, {::i2c::type_of<::GlobalNamespace::BuilderPieceDoor_DoorState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.UpdateDoorStateMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoor::UpdateDoorStateMaster)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x5c262f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"UpdateDoorStateMaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.UpdateDoorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoor::UpdateDoorState)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5c26b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"UpdateDoorState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.CloseDoor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoor::CloseDoor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c26d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"CloseDoor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.OpenDoor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoor::OpenDoor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c26d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OpenDoor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.UpdateDoorAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoor::UpdateDoorAnimation)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5c26e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"UpdateDoorAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.OnDoorButtonTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoor::OnDoorButtonTriggered)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5c26fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnDoorButtonTriggered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.OnHoldTriggerEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoor::OnHoldTriggerEntered)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5c27220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnHoldTriggerEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.OnHoldTriggerExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoor::OnHoldTriggerExited)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5c27404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnHoldTriggerExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.OnPieceCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)(int32_t, int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceDoor::OnPieceCreate)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5c275a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.OnPieceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoor::OnPieceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c27788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.OnPiecePlacementDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoor::OnPiecePlacementDeserialized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c2778c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.OnPieceActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoor::OnPieceActivate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c27790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.OnPieceDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoor::OnPieceDeactivate)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5c277f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.OnStateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceDoor::OnStateRequest)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c2799c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceDoor::OnStateChanged)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c27aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.IsStateValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderPieceDoor::*)(uint8_t)>(&::GorillaTagScripts::Builder::BuilderPieceDoor::IsStateValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c27a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor.FunctionalPieceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoor::FunctionalPieceUpdate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c27b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoor::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoor::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c27c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_myPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_myPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPiece = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_rotateAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateAxis;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_rotateAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateAxis;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_rotateAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateAxis = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_IsToggled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsToggled;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_IsToggled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsToggled;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_IsToggled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsToggled = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_isAutomatic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAutomatic;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_isAutomatic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAutomatic;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_isAutomatic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAutomatic = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_doorTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_doorTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorTransform;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_doorTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorTransform = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_triggerVolumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerVolumes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_triggerVolumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerVolumes;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_triggerVolumes(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerVolumes = value;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_doorButtonTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorButtonTriggers;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>> const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_doorButtonTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorButtonTriggers;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_doorButtonTriggers(::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorButtonTriggers = value;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_doorHoldTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorHoldTriggers;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>> const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_doorHoldTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorHoldTriggers;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_doorHoldTriggers(::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorHoldTriggers = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_openSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_openSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openSound;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_openSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_closeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_closeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeSound;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_closeSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeSound = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_doorOpenSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenSpeed;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_doorOpenSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenSpeed;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_doorOpenSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorOpenSpeed = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_doorCloseSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseSpeed;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_doorCloseSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseSpeed;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_doorCloseSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorCloseSpeed = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_timeUntilDoorCloses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUntilDoorCloses;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_timeUntilDoorCloses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUntilDoorCloses;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_timeUntilDoorCloses(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeUntilDoorCloses = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_isDoubleDoor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDoubleDoor;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_isDoubleDoor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDoubleDoor;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_isDoubleDoor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDoubleDoor = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_rotateAxisB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateAxisB;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_rotateAxisB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateAxisB;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_rotateAxisB(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateAxisB = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_doorTransformB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorTransformB;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_doorTransformB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorTransformB;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_doorTransformB(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorTransformB = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>>& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_lineRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>> const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_lineRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineRenderers;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_lineRenderers(::ArrayW<::UnityW<::UnityEngine::LineRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineRenderers = value;
}
constexpr ::GlobalNamespace::BuilderPieceDoor_DoorState& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::BuilderPieceDoor_DoorState const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_currentState(::GlobalNamespace::BuilderPieceDoor_DoorState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_tLastOpened()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tLastOpened;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_tLastOpened() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tLastOpened;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_tLastOpened(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tLastOpened = value;
}
constexpr ::BoingKit::FloatSpring& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_doorSpring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorSpring;
}
constexpr ::BoingKit::FloatSpring const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_doorSpring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorSpring;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_doorSpring(::BoingKit::FloatSpring  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorSpring = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_peopleInHoldOpenVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peopleInHoldOpenVolume;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_peopleInHoldOpenVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peopleInHoldOpenVolume;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_peopleInHoldOpenVolume(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peopleInHoldOpenVolume = value;
}
constexpr double_t& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_CheckHoldTriggersTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CheckHoldTriggersTime;
}
constexpr double_t const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_CheckHoldTriggersTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CheckHoldTriggersTime;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_CheckHoldTriggersTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CheckHoldTriggersTime = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_checkHoldTriggersDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkHoldTriggersDelay;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_get_checkHoldTriggersDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkHoldTriggersDelay;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoor::__cordl_internal_set_checkHoldTriggersDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkHoldTriggersDelay = value;
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::SetDoorState(::GlobalNamespace::BuilderPieceDoor_DoorState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"SetDoorState", {}, {::i2c::type_of<::GlobalNamespace::BuilderPieceDoor_DoorState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::UpdateDoorStateMaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"UpdateDoorStateMaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::UpdateDoorState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"UpdateDoorState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::CloseDoor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"CloseDoor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::OpenDoor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OpenDoor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::UpdateDoorAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"UpdateDoorAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::OnDoorButtonTriggered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnDoorButtonTriggered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::OnHoldTriggerEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnHoldTriggerEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::OnHoldTriggerExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnHoldTriggerExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::OnPieceCreate(int32_t  pieceType, int32_t  pieceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::OnPieceDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::OnPiecePlacementDeserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::OnPieceActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::OnPieceDeactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline bool GorillaTagScripts::Builder::BuilderPieceDoor::IsStateValid(uint8_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::FunctionalPieceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderPieceDoor* GorillaTagScripts::Builder::BuilderPieceDoor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderPieceDoor*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr  GorillaTagScripts::Builder::BuilderPieceDoor::operator ::GlobalNamespace::IBuilderPieceComponent*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* GorillaTagScripts::Builder::BuilderPieceDoor::i___GlobalNamespace__IBuilderPieceComponent() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr  GorillaTagScripts::Builder::BuilderPieceDoor::operator ::GlobalNamespace::IBuilderPieceFunctional*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* GorillaTagScripts::Builder::BuilderPieceDoor::i___GlobalNamespace__IBuilderPieceFunctional() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderPieceDoor::BuilderPieceDoor()   {
}

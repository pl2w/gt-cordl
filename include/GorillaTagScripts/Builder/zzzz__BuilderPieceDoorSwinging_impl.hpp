#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceDoorSwinging.hpp"
#include "BoingKit/zzzz__FloatSpring_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceDoorSwinging_SwingingDoorState_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallMonkeTrigger_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceDoorSwinging_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceComponent_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceFunctional_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceDoorSwinging_SwingingDoorState_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallHandTrigger_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::Awake)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5c27d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnDestroy)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5c27ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.OnFrontTriggerEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnFrontTriggerEntered)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5c280b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnFrontTriggerEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.OnBackTriggerEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnBackTriggerEntered)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5c28210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnBackTriggerEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.OnHoldTriggerEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnHoldTriggerEntered)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5c2836c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnHoldTriggerEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.OnHoldTriggerExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnHoldTriggerExited)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5c28554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnHoldTriggerExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.SetDoorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)(::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState)>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::SetDoorState)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c2878c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"SetDoorState", {}, {::i2c::type_of<::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.UpdateDoorStateMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::UpdateDoorStateMaster)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5c28850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"UpdateDoorStateMaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.UpdateDoorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::UpdateDoorState)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c28c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"UpdateDoorState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.CloseDoor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::CloseDoor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c28cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"CloseDoor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.OpenDoor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)(bool)>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OpenDoor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c28d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OpenDoor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.UpdateDoorAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::UpdateDoorAnimation)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5c28dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"UpdateDoorAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.OnPieceCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)(int32_t, int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnPieceCreate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c28fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.OnPieceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnPieceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c29090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.OnPiecePlacementDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnPiecePlacementDeserialized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c29094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.OnPieceActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnPieceActivate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c29098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.OnPieceDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnPieceDeactivate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5c290fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnStateChanged)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c292bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.OnStateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnStateRequest)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5c293d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.IsStateValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)(uint8_t)>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::IsStateValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c293c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging.FunctionalPieceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::FunctionalPieceUpdate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c294dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::*)()>(&::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c29608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_myPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_myPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPiece = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_rotateAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateAxis;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_rotateAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateAxis;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_rotateAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateAxis = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_doorTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_doorTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorTransform;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_doorTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorTransform = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_triggerVolumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerVolumes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_triggerVolumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerVolumes;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_triggerVolumes(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerVolumes = value;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_doorHoldTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorHoldTriggers;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>> const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_doorHoldTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorHoldTriggers;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_doorHoldTriggers(::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorHoldTriggers = value;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_frontTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontTrigger;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger> const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_frontTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontTrigger;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_frontTrigger(::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frontTrigger = value;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_backTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backTrigger;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger> const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_backTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backTrigger;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_backTrigger(::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backTrigger = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_openSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_openSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openSound;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_openSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_closeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_closeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeSound;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_closeSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeSound = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_doorOpenSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenSpeed;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_doorOpenSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenSpeed;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_doorOpenSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorOpenSpeed = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_doorCloseSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseSpeed;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_doorCloseSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseSpeed;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_doorCloseSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorCloseSpeed = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_timeUntilDoorCloses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUntilDoorCloses;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_timeUntilDoorCloses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUntilDoorCloses;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_timeUntilDoorCloses(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeUntilDoorCloses = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_doorClosedVelocityMag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorClosedVelocityMag;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_doorClosedVelocityMag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorClosedVelocityMag;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_doorClosedVelocityMag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorClosedVelocityMag = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_dampingRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampingRatio;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_dampingRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampingRatio;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_dampingRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampingRatio = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_isDoubleDoor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDoubleDoor;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_isDoubleDoor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDoubleDoor;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_isDoubleDoor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDoubleDoor = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_rotateAxisB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateAxisB;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_rotateAxisB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateAxisB;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_rotateAxisB(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateAxisB = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_doorTransformB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorTransformB;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_doorTransformB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorTransformB;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_doorTransformB(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorTransformB = value;
}
constexpr ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_currentState(::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_tLastOpened()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tLastOpened;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_tLastOpened() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tLastOpened;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_tLastOpened(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tLastOpened = value;
}
constexpr ::BoingKit::FloatSpring& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_doorSpring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorSpring;
}
constexpr ::BoingKit::FloatSpring const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_doorSpring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorSpring;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_doorSpring(::BoingKit::FloatSpring  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorSpring = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_peopleInHoldOpenVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peopleInHoldOpenVolume;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_peopleInHoldOpenVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peopleInHoldOpenVolume;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_peopleInHoldOpenVolume(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peopleInHoldOpenVolume = value;
}
constexpr double_t& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_checkHoldTriggersTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkHoldTriggersTime;
}
constexpr double_t const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_checkHoldTriggersTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkHoldTriggersTime;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_checkHoldTriggersTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkHoldTriggersTime = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_checkHoldTriggersDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkHoldTriggersDelay;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_checkHoldTriggersDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkHoldTriggersDelay;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_checkHoldTriggersDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkHoldTriggersDelay = value;
}
constexpr int32_t& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_pushDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pushDirection;
}
constexpr int32_t const& GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_get_pushDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pushDirection;
}
constexpr void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::__cordl_internal_set_pushDirection(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pushDirection = value;
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnFrontTriggerEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnFrontTriggerEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnBackTriggerEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnBackTriggerEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnHoldTriggerEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnHoldTriggerEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnHoldTriggerExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnHoldTriggerExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::SetDoorState(::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"SetDoorState", {}, {::i2c::type_of<::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::UpdateDoorStateMaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"UpdateDoorStateMaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::UpdateDoorState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"UpdateDoorState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::CloseDoor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"CloseDoor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OpenDoor(bool  openIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OpenDoor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, openIn);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::UpdateDoorAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"UpdateDoorAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnPieceCreate(int32_t  pieceType, int32_t  pieceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnPieceDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnPiecePlacementDeserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnPieceActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnPieceDeactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline bool GorillaTagScripts::Builder::BuilderPieceDoorSwinging::IsStateValid(uint8_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::FunctionalPieceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderPieceDoorSwinging::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging* GorillaTagScripts::Builder::BuilderPieceDoorSwinging::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderPieceDoorSwinging*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr  GorillaTagScripts::Builder::BuilderPieceDoorSwinging::operator ::GlobalNamespace::IBuilderPieceComponent*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* GorillaTagScripts::Builder::BuilderPieceDoorSwinging::i___GlobalNamespace__IBuilderPieceComponent() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr  GorillaTagScripts::Builder::BuilderPieceDoorSwinging::operator ::GlobalNamespace::IBuilderPieceFunctional*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* GorillaTagScripts::Builder::BuilderPieceDoorSwinging::i___GlobalNamespace__IBuilderPieceFunctional() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderPieceDoorSwinging::BuilderPieceDoorSwinging()   {
}

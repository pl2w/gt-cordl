#pragma once
// IWYU pragma private; include "GlobalNamespace/GRElevator.hpp"
#include "GlobalNamespace/zzzz__GRElevatorManager_ElevatorLocation_impl.hpp"
#include "GlobalNamespace/zzzz__GRElevator_ElevatorState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRElevator_def.hpp"
#include "GlobalNamespace/zzzz__GRElevatorButton_def.hpp"
#include "GlobalNamespace/zzzz__GRElevator_ButtonType_def.hpp"
#include "GlobalNamespace/zzzz__GRElevator_ElevatorState_def.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendCollider_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRElevator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::OnEnable)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5877cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5877dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::Awake)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5877eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.PressButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)(int32_t)>(&::GlobalNamespace::GRElevator::PressButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x587822c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PressButton", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.PressButtonVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)(::GlobalNamespace::GRElevator_ButtonType)>(&::GlobalNamespace::GRElevator::PressButtonVisuals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5878468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PressButtonVisuals", {}, {::i2c::type_of<::GlobalNamespace::GRElevator_ButtonType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.PlayDing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::PlayDing)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5878500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayDing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.PlayButtonPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::PlayButtonPress)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5878520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayButtonPress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.PlayElevatorMoving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::PlayElevatorMoving)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5878538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayElevatorMoving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.PlayElevatorStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::PlayElevatorStopped)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5878624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayElevatorStopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.PlayElevatorMusic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)(float_t)>(&::GlobalNamespace::GRElevator::PlayElevatorMusic)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5878710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayElevatorMusic", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.PlayDoorOpenBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::PlayDoorOpenBegin)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5878770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayDoorOpenBegin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.PlayDoorCloseBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::PlayDoorCloseBegin)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58787b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayDoorCloseBegin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.PlayDoorOpenTravel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::PlayDoorOpenTravel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5878800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayDoorOpenTravel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.PlayDoorCloseTravel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::PlayDoorCloseTravel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5878828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayDoorCloseTravel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.DoorsFullyClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::DoorsFullyClosed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5878850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"DoorsFullyClosed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.DoorsFullyOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::DoorsFullyOpen)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58788d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"DoorsFullyOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.UpdateLocalState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)(::GlobalNamespace::GRElevator_ElevatorState)>(&::GlobalNamespace::GRElevator::UpdateLocalState)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x58780b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"UpdateLocalState", {}, {::i2c::type_of<::GlobalNamespace::GRElevator_ElevatorState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.UpdateRemoteState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)(::GlobalNamespace::GRElevator_ElevatorState)>(&::GlobalNamespace::GRElevator::UpdateRemoteState)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5878b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"UpdateRemoteState", {}, {::i2c::type_of<::GlobalNamespace::GRElevator_ElevatorState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.SetDoorOpenBeginTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::SetDoorOpenBeginTime)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5878a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"SetDoorOpenBeginTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.SetDoorClosedBeginTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::SetDoorClosedBeginTime)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5878950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"SetDoorClosedBeginTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.StateIsOpeningState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GRElevator_ElevatorState)>(&::GlobalNamespace::GRElevator::StateIsOpeningState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5878b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"StateIsOpeningState", {}, {::i2c::type_of<::GlobalNamespace::GRElevator_ElevatorState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.StateIsClosingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GRElevator_ElevatorState)>(&::GlobalNamespace::GRElevator::StateIsClosingState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5878b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"StateIsClosingState", {}, {::i2c::type_of<::GlobalNamespace::GRElevator_ElevatorState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.DoorIsOpening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::DoorIsOpening)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5878b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"DoorIsOpening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.DoorIsClosing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::DoorIsClosing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5878b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"DoorIsClosing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator.PhysicalElevatorUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::PhysicalElevatorUpdate)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5878bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PhysicalElevatorUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevator::*)()>(&::GlobalNamespace::GRElevator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5878fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation& GlobalNamespace::GRElevator::__cordl_internal_get_location()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___location;
}
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation const& GlobalNamespace::GRElevator::__cordl_internal_get_location() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___location;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_location(::GlobalNamespace::GRElevatorManager_ElevatorLocation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___location = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRElevator::__cordl_internal_get_upperDoor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upperDoor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRElevator::__cordl_internal_get_upperDoor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upperDoor;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_upperDoor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upperDoor = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRElevator::__cordl_internal_get_lowerDoor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowerDoor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRElevator::__cordl_internal_get_lowerDoor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowerDoor;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_lowerDoor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowerDoor = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRElevator::__cordl_internal_get_closedTargetTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedTargetTop;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRElevator::__cordl_internal_get_closedTargetTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedTargetTop;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_closedTargetTop(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedTargetTop = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRElevator::__cordl_internal_get_closedTargetBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedTargetBottom;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRElevator::__cordl_internal_get_closedTargetBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedTargetBottom;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_closedTargetBottom(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedTargetBottom = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRElevator::__cordl_internal_get_openTargetTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openTargetTop;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRElevator::__cordl_internal_get_openTargetTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openTargetTop;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_openTargetTop(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openTargetTop = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRElevator::__cordl_internal_get_openTargetBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openTargetBottom;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRElevator::__cordl_internal_get_openTargetBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openTargetBottom;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_openTargetBottom(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openTargetBottom = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::GRElevator::__cordl_internal_get_outerText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outerText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::GRElevator::__cordl_internal_get_outerText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outerText;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_outerText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outerText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::GRElevator::__cordl_internal_get_innerText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::GRElevator::__cordl_internal_get_innerText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerText;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_innerText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___innerText = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRElevatorButton>>*& GlobalNamespace::GRElevator::__cordl_internal_get_elevatorButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elevatorButtons;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRElevatorButton>>* const& GlobalNamespace::GRElevator::__cordl_internal_get_elevatorButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elevatorButtons;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_elevatorButtons(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRElevatorButton>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elevatorButtons = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRElevator_ButtonType,::UnityW<::GlobalNamespace::GRElevatorButton>>*& GlobalNamespace::GRElevator::__cordl_internal_get_typeButtonDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeButtonDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRElevator_ButtonType,::UnityW<::GlobalNamespace::GRElevatorButton>>* const& GlobalNamespace::GRElevator::__cordl_internal_get_typeButtonDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeButtonDict;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_typeButtonDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRElevator_ButtonType,::UnityW<::GlobalNamespace::GRElevatorButton>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___typeButtonDict = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& GlobalNamespace::GRElevator::__cordl_internal_get_friendCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendCollider;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& GlobalNamespace::GRElevator::__cordl_internal_get_friendCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendCollider;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_friendCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendCollider = value;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& GlobalNamespace::GRElevator::__cordl_internal_get_joinTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinTrigger;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& GlobalNamespace::GRElevator::__cordl_internal_get_joinTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinTrigger;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_joinTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinTrigger = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::GRElevator::__cordl_internal_get_buttonBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::GRElevator::__cordl_internal_get_buttonBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonBank;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_buttonBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonBank = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRElevator::__cordl_internal_get_doorAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRElevator::__cordl_internal_get_doorAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorAudio;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_doorAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRElevator::__cordl_internal_get_ambientAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRElevator::__cordl_internal_get_ambientAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientAudio;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_ambientAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRElevator::__cordl_internal_get_musicAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRElevator::__cordl_internal_get_musicAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicAudio;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_musicAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___musicAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRElevator::__cordl_internal_get_travellingLoopClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___travellingLoopClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRElevator::__cordl_internal_get_travellingLoopClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___travellingLoopClip;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_travellingLoopClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___travellingLoopClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRElevator::__cordl_internal_get_ambientLoopClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientLoopClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRElevator::__cordl_internal_get_ambientLoopClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientLoopClip;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_ambientLoopClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientLoopClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRElevator::__cordl_internal_get_dingClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dingClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRElevator::__cordl_internal_get_dingClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dingClip;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_dingClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dingClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRElevator::__cordl_internal_get_doorOpenClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRElevator::__cordl_internal_get_doorOpenClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenClip;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_doorOpenClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorOpenClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRElevator::__cordl_internal_get_doorCloseClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRElevator::__cordl_internal_get_doorCloseClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseClip;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_doorCloseClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorCloseClip = value;
}
constexpr float_t& GlobalNamespace::GRElevator::__cordl_internal_get_adjustedOffsetTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adjustedOffsetTime;
}
constexpr float_t const& GlobalNamespace::GRElevator::__cordl_internal_get_adjustedOffsetTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adjustedOffsetTime;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_adjustedOffsetTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___adjustedOffsetTime = value;
}
constexpr float_t& GlobalNamespace::GRElevator::__cordl_internal_get_doorMoveBeginTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorMoveBeginTime;
}
constexpr float_t const& GlobalNamespace::GRElevator::__cordl_internal_get_doorMoveBeginTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorMoveBeginTime;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_doorMoveBeginTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorMoveBeginTime = value;
}
constexpr float_t& GlobalNamespace::GRElevator::__cordl_internal_get_doorOpenSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenSpeed;
}
constexpr float_t const& GlobalNamespace::GRElevator::__cordl_internal_get_doorOpenSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenSpeed;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_doorOpenSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorOpenSpeed = value;
}
constexpr float_t& GlobalNamespace::GRElevator::__cordl_internal_get_doorCloseSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseSpeed;
}
constexpr float_t const& GlobalNamespace::GRElevator::__cordl_internal_get_doorCloseSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseSpeed;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_doorCloseSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorCloseSpeed = value;
}
constexpr float_t& GlobalNamespace::GRElevator::__cordl_internal_get_closeBeginDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeBeginDuration;
}
constexpr float_t const& GlobalNamespace::GRElevator::__cordl_internal_get_closeBeginDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeBeginDuration;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_closeBeginDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeBeginDuration = value;
}
constexpr float_t& GlobalNamespace::GRElevator::__cordl_internal_get_closeTravelDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeTravelDuration;
}
constexpr float_t const& GlobalNamespace::GRElevator::__cordl_internal_get_closeTravelDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeTravelDuration;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_closeTravelDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeTravelDuration = value;
}
constexpr float_t& GlobalNamespace::GRElevator::__cordl_internal_get_closeEndDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeEndDuration;
}
constexpr float_t const& GlobalNamespace::GRElevator::__cordl_internal_get_closeEndDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeEndDuration;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_closeEndDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeEndDuration = value;
}
constexpr float_t& GlobalNamespace::GRElevator::__cordl_internal_get_openBeginDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openBeginDuration;
}
constexpr float_t const& GlobalNamespace::GRElevator::__cordl_internal_get_openBeginDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openBeginDuration;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_openBeginDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openBeginDuration = value;
}
constexpr float_t& GlobalNamespace::GRElevator::__cordl_internal_get_openTravelDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openTravelDuration;
}
constexpr float_t const& GlobalNamespace::GRElevator::__cordl_internal_get_openTravelDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openTravelDuration;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_openTravelDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openTravelDuration = value;
}
constexpr float_t& GlobalNamespace::GRElevator::__cordl_internal_get_openEndDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openEndDuration;
}
constexpr float_t const& GlobalNamespace::GRElevator::__cordl_internal_get_openEndDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openEndDuration;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_openEndDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openEndDuration = value;
}
constexpr float_t& GlobalNamespace::GRElevator::__cordl_internal_get_travelDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___travelDistance;
}
constexpr float_t const& GlobalNamespace::GRElevator::__cordl_internal_get_travelDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___travelDistance;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_travelDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___travelDistance = value;
}
constexpr ::GlobalNamespace::GRElevator_ElevatorState& GlobalNamespace::GRElevator::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRElevator_ElevatorState const& GlobalNamespace::GRElevator::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_state(::GlobalNamespace::GRElevator_ElevatorState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRElevator::__cordl_internal_get_collidersAndVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersAndVisuals;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRElevator::__cordl_internal_get_collidersAndVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersAndVisuals;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_collidersAndVisuals(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidersAndVisuals = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRElevator::__cordl_internal_get_videoDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___videoDisplay;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRElevator::__cordl_internal_get_videoDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___videoDisplay;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_videoDisplay(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___videoDisplay = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRElevator::__cordl_internal_get_videoAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___videoAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRElevator::__cordl_internal_get_videoAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___videoAudio;
}
constexpr void GlobalNamespace::GRElevator::__cordl_internal_set_videoAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___videoAudio = value;
}
inline void GlobalNamespace::GRElevator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevator::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevator::PressButton(int32_t  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PressButton", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void GlobalNamespace::GRElevator::PressButtonVisuals(::GlobalNamespace::GRElevator_ButtonType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PressButtonVisuals", {}, {::i2c::type_of<::GlobalNamespace::GRElevator_ButtonType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void GlobalNamespace::GRElevator::PlayDing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayDing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevator::PlayButtonPress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayButtonPress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevator::PlayElevatorMoving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayElevatorMoving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevator::PlayElevatorStopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayElevatorStopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevator::PlayElevatorMusic(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayElevatorMusic", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void GlobalNamespace::GRElevator::PlayDoorOpenBegin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayDoorOpenBegin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevator::PlayDoorCloseBegin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayDoorCloseBegin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevator::PlayDoorOpenTravel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayDoorOpenTravel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevator::PlayDoorCloseTravel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PlayDoorCloseTravel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRElevator::DoorsFullyClosed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"DoorsFullyClosed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GRElevator::DoorsFullyOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"DoorsFullyOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevator::UpdateLocalState(::GlobalNamespace::GRElevator_ElevatorState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"UpdateLocalState", {}, {::i2c::type_of<::GlobalNamespace::GRElevator_ElevatorState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GRElevator::UpdateRemoteState(::GlobalNamespace::GRElevator_ElevatorState  remoteNewState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"UpdateRemoteState", {}, {::i2c::type_of<::GlobalNamespace::GRElevator_ElevatorState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteNewState);
}
inline void GlobalNamespace::GRElevator::SetDoorOpenBeginTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"SetDoorOpenBeginTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevator::SetDoorClosedBeginTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"SetDoorClosedBeginTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRElevator::StateIsOpeningState(::GlobalNamespace::GRElevator_ElevatorState  checkState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"StateIsOpeningState", {}, {::i2c::type_of<::GlobalNamespace::GRElevator_ElevatorState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, checkState);
}
inline bool GlobalNamespace::GRElevator::StateIsClosingState(::GlobalNamespace::GRElevator_ElevatorState  checkState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"StateIsClosingState", {}, {::i2c::type_of<::GlobalNamespace::GRElevator_ElevatorState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, checkState);
}
inline bool GlobalNamespace::GRElevator::DoorIsOpening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"DoorIsOpening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GRElevator::DoorIsClosing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"DoorIsClosing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevator::PhysicalElevatorUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {"PhysicalElevatorUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRElevator* GlobalNamespace::GRElevator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRElevator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRElevator::GRElevator()   {
}

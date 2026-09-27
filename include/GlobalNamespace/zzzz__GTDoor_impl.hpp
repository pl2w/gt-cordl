#pragma once
// IWYU pragma private; include "GlobalNamespace/GTDoor.hpp"
#include "BoingKit/zzzz__FloatSpring_impl.hpp"
#include "GlobalNamespace/zzzz__GTDoorTrigger_impl.hpp"
#include "GlobalNamespace/zzzz__GTDoor_DoorState_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkSceneObject_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "GlobalNamespace/zzzz__GTDoor_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "GlobalNamespace/zzzz__GTDoor_DoorState_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTDoor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDoor::*)()>(&::GlobalNamespace::GTDoor::Start)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x56773a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                    {::i2c::class_of<::GlobalNamespace::GTDoor*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoor.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDoor::*)()>(&::GlobalNamespace::GTDoor::Update)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x56774e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoor.UpdateDoorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDoor::*)()>(&::GlobalNamespace::GTDoor::UpdateDoorState)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x56775dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"UpdateDoorState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoor.DoorButtonTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDoor::*)()>(&::GlobalNamespace::GTDoor::DoorButtonTriggered)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5677ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"DoorButtonTriggered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoor.OpenDoor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDoor::*)()>(&::GlobalNamespace::GTDoor::OpenDoor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5677e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"OpenDoor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoor.CloseDoor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDoor::*)()>(&::GlobalNamespace::GTDoor::CloseDoor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5677ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"CloseDoor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoor.UpdateDoorAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDoor::*)()>(&::GlobalNamespace::GTDoor::UpdateDoorAnimation)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5677b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"UpdateDoorAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoor.ResetDoorOpenedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDoor::*)()>(&::GlobalNamespace::GTDoor::ResetDoorOpenedTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5677f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"ResetDoorOpenedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoor.ChangeDoorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDoor::*)(::GlobalNamespace::GTDoor_DoorState, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GTDoor::ChangeDoorState)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5677f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"ChangeDoorState", {}, {::i2c::type_of<::GlobalNamespace::GTDoor_DoorState>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoor.RPC_ChangeDoorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, ::GlobalNamespace::GTDoor_DoorState, int32_t)>(&::GlobalNamespace::GTDoor::RPC_ChangeDoorState)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x567809c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"RPC_ChangeDoorState", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::GlobalNamespace::GTDoor_DoorState>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoor.ChangeDoorStateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDoor::*)(::GlobalNamespace::GTDoor_DoorState)>(&::GlobalNamespace::GTDoor::ChangeDoorStateShared)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5677fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"ChangeDoorStateShared", {}, {::i2c::type_of<::GlobalNamespace::GTDoor_DoorState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoor.SetupDoorIDs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDoor::*)()>(&::GlobalNamespace::GTDoor::SetupDoorIDs)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56782c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"SetupDoorIDs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDoor::*)()>(&::GlobalNamespace::GTDoor::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5678374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoor.RPC_ChangeDoorState@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::GTDoor::RPC_ChangeDoorState@Invoker)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5678394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"RPC_ChangeDoorState@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GTDoor::__cordl_internal_get_doorTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GTDoor::__cordl_internal_get_doorTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorTransform;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_doorTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorTransform = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::GTDoor::__cordl_internal_get_doorColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::GTDoor::__cordl_internal_get_doorColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorColliders;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_doorColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorColliders = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GTDoorTrigger>>& GlobalNamespace::GTDoor::__cordl_internal_get_doorButtonTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorButtonTriggers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GTDoorTrigger>> const& GlobalNamespace::GTDoor::__cordl_internal_get_doorButtonTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorButtonTriggers;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_doorButtonTriggers(::ArrayW<::UnityW<::GlobalNamespace::GTDoorTrigger>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorButtonTriggers = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GTDoorTrigger>>& GlobalNamespace::GTDoor::__cordl_internal_get_doorHoldOpenTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorHoldOpenTriggers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GTDoorTrigger>> const& GlobalNamespace::GTDoor::__cordl_internal_get_doorHoldOpenTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorHoldOpenTriggers;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_doorHoldOpenTriggers(::ArrayW<::UnityW<::GlobalNamespace::GTDoorTrigger>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorHoldOpenTriggers = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GTDoor::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GTDoor::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GTDoor::__cordl_internal_get_openSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GTDoor::__cordl_internal_get_openSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openSound;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_openSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GTDoor::__cordl_internal_get_closeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GTDoor::__cordl_internal_get_closeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeSound;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_closeSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeSound = value;
}
constexpr float_t& GlobalNamespace::GTDoor::__cordl_internal_get_doorOpenSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenSpeed;
}
constexpr float_t const& GlobalNamespace::GTDoor::__cordl_internal_get_doorOpenSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenSpeed;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_doorOpenSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorOpenSpeed = value;
}
constexpr float_t& GlobalNamespace::GTDoor::__cordl_internal_get_doorCloseSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseSpeed;
}
constexpr float_t const& GlobalNamespace::GTDoor::__cordl_internal_get_doorCloseSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseSpeed;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_doorCloseSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorCloseSpeed = value;
}
constexpr float_t& GlobalNamespace::GTDoor::__cordl_internal_get_timeUntilDoorCloses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUntilDoorCloses;
}
constexpr float_t const& GlobalNamespace::GTDoor::__cordl_internal_get_timeUntilDoorCloses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUntilDoorCloses;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_timeUntilDoorCloses(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeUntilDoorCloses = value;
}
constexpr int32_t& GlobalNamespace::GTDoor::__cordl_internal_get_GTDoorID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GTDoorID;
}
constexpr int32_t const& GlobalNamespace::GTDoor::__cordl_internal_get_GTDoorID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GTDoorID;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_GTDoorID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GTDoorID = value;
}
constexpr ::GlobalNamespace::GTDoor_DoorState& GlobalNamespace::GTDoor::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::GTDoor_DoorState const& GlobalNamespace::GTDoor::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_currentState(::GlobalNamespace::GTDoor_DoorState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr float_t& GlobalNamespace::GTDoor::__cordl_internal_get_tLastOpened()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tLastOpened;
}
constexpr float_t const& GlobalNamespace::GTDoor::__cordl_internal_get_tLastOpened() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tLastOpened;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_tLastOpened(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tLastOpened = value;
}
constexpr ::BoingKit::FloatSpring& GlobalNamespace::GTDoor::__cordl_internal_get_doorSpring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorSpring;
}
constexpr ::BoingKit::FloatSpring const& GlobalNamespace::GTDoor::__cordl_internal_get_doorSpring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorSpring;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_doorSpring(::BoingKit::FloatSpring  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorSpring = value;
}
constexpr bool& GlobalNamespace::GTDoor::__cordl_internal_get_peopleInHoldOpenVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peopleInHoldOpenVolume;
}
constexpr bool const& GlobalNamespace::GTDoor::__cordl_internal_get_peopleInHoldOpenVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peopleInHoldOpenVolume;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_peopleInHoldOpenVolume(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peopleInHoldOpenVolume = value;
}
constexpr bool& GlobalNamespace::GTDoor::__cordl_internal_get_buttonTriggeredThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonTriggeredThisFrame;
}
constexpr bool const& GlobalNamespace::GTDoor::__cordl_internal_get_buttonTriggeredThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonTriggeredThisFrame;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_buttonTriggeredThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonTriggeredThisFrame = value;
}
constexpr float_t& GlobalNamespace::GTDoor::__cordl_internal_get_lastChecked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastChecked;
}
constexpr float_t const& GlobalNamespace::GTDoor::__cordl_internal_get_lastChecked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastChecked;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_lastChecked(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastChecked = value;
}
constexpr float_t& GlobalNamespace::GTDoor::__cordl_internal_get_secondsCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondsCheck;
}
constexpr float_t const& GlobalNamespace::GTDoor::__cordl_internal_get_secondsCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondsCheck;
}
constexpr void GlobalNamespace::GTDoor::__cordl_internal_set_secondsCheck(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondsCheck = value;
}
inline void GlobalNamespace::GTDoor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTDoor*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTDoor::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTDoor::UpdateDoorState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"UpdateDoorState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTDoor::DoorButtonTriggered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"DoorButtonTriggered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTDoor::OpenDoor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"OpenDoor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTDoor::CloseDoor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"CloseDoor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTDoor::UpdateDoorAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"UpdateDoorAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTDoor::ResetDoorOpenedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"ResetDoorOpenedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTDoor::ChangeDoorState(::GlobalNamespace::GTDoor_DoorState  shouldOpenState, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"ChangeDoorState", {}, {::i2c::type_of<::GlobalNamespace::GTDoor_DoorState>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shouldOpenState, info);
}
inline void GlobalNamespace::GTDoor::RPC_ChangeDoorState(::Fusion::NetworkRunner*  runner, ::GlobalNamespace::GTDoor_DoorState  shouldOpenState, int32_t  doorId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"RPC_ChangeDoorState", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::GlobalNamespace::GTDoor_DoorState>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, shouldOpenState, doorId);
}
inline void GlobalNamespace::GTDoor::ChangeDoorStateShared(::GlobalNamespace::GTDoor_DoorState  shouldOpenState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"ChangeDoorStateShared", {}, {::i2c::type_of<::GlobalNamespace::GTDoor_DoorState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shouldOpenState);
}
inline void GlobalNamespace::GTDoor::SetupDoorIDs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"SetupDoorIDs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTDoor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTDoor::RPC_ChangeDoorState@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoor*>(),
                        {"RPC_ChangeDoorState@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, message);
}
inline ::GlobalNamespace::GTDoor* GlobalNamespace::GTDoor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTDoor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTDoor::GTDoor()   {
}

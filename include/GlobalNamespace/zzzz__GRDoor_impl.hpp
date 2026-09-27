#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDoor.hpp"
#include "GlobalNamespace/zzzz__GRDoor_DoorState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GRDoor_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__GRDoor_DoorState_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRDoor.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDoor::*)()>(&::GlobalNamespace::GRDoor::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b483c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDoor*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDoor.SetDoorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDoor::*)(::GlobalNamespace::GRDoor_DoorState)>(&::GlobalNamespace::GRDoor::SetDoorState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58b4844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDoor*>(),
                        {"SetDoorState", {}, {::i2c::type_of<::GlobalNamespace::GRDoor_DoorState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDoor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDoor::*)()>(&::GlobalNamespace::GRDoor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b48d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDoor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GRDoor_DoorState& GlobalNamespace::GRDoor::__cordl_internal_get_doorState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorState;
}
constexpr ::GlobalNamespace::GRDoor_DoorState const& GlobalNamespace::GRDoor::__cordl_internal_get_doorState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorState;
}
constexpr void GlobalNamespace::GRDoor::__cordl_internal_set_doorState(::GlobalNamespace::GRDoor_DoorState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorState = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::GRDoor::__cordl_internal_get_animation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animation;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::GRDoor::__cordl_internal_get_animation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animation;
}
constexpr void GlobalNamespace::GRDoor::__cordl_internal_set_animation(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animation = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& GlobalNamespace::GRDoor::__cordl_internal_get_openAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openAnim;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& GlobalNamespace::GRDoor::__cordl_internal_get_openAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openAnim;
}
constexpr void GlobalNamespace::GRDoor::__cordl_internal_set_openAnim(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openAnim = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& GlobalNamespace::GRDoor::__cordl_internal_get_closeAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeAnim;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& GlobalNamespace::GRDoor::__cordl_internal_get_closeAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeAnim;
}
constexpr void GlobalNamespace::GRDoor::__cordl_internal_set_closeAnim(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeAnim = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRDoor::__cordl_internal_get_openDoorSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openDoorSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRDoor::__cordl_internal_get_openDoorSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openDoorSound;
}
constexpr void GlobalNamespace::GRDoor::__cordl_internal_set_openDoorSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openDoorSound = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRDoor::__cordl_internal_get_closeDoorSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeDoorSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRDoor::__cordl_internal_get_closeDoorSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeDoorSound;
}
constexpr void GlobalNamespace::GRDoor::__cordl_internal_set_closeDoorSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeDoorSound = value;
}
inline void GlobalNamespace::GRDoor::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDoor*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRDoor::SetDoorState(::GlobalNamespace::GRDoor_DoorState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDoor*>(),
                        {"SetDoorState", {}, {::i2c::type_of<::GlobalNamespace::GRDoor_DoorState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GRDoor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDoor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRDoor* GlobalNamespace::GRDoor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRDoor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRDoor::GRDoor()   {
}

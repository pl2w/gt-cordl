#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostLab.hpp"
#include "GlobalNamespace/zzzz__GhostLab_EntranceDoorsState_impl.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GhostLab_def.hpp"
#include "GlobalNamespace/zzzz__GhostLabReliableState_def.hpp"
#include "GlobalNamespace/zzzz__GhostLab_EntranceDoorsState_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostLab.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLab::*)()>(&::GlobalNamespace::GhostLab::Awake)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d0a1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLab.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostLab::*)()>(&::GlobalNamespace::GhostLab::BuildValidationCheck)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d0a2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLab.DoorButtonPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLab::*)(int32_t, bool)>(&::GlobalNamespace::GhostLab::DoorButtonPress)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d0a2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                        {"DoorButtonPress", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLab.UpdateDoorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLab::*)(int32_t)>(&::GlobalNamespace::GhostLab::UpdateDoorState)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5d0a578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                        {"UpdateDoorState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLab.UpdateEntranceDoorsState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLab::*)(int32_t)>(&::GlobalNamespace::GhostLab::UpdateEntranceDoorsState)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5d0a300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                        {"UpdateEntranceDoorsState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLab.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLab::*)()>(&::GlobalNamespace::GhostLab::Tick)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x5d0aae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostLab*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLab.SynchStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLab::*)()>(&::GlobalNamespace::GhostLab::SynchStates)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d0b020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                        {"SynchStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLab.IsDoorMoving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostLab::*)(bool, int32_t)>(&::GlobalNamespace::GhostLab::IsDoorMoving)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5d09f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                        {"IsDoorMoving", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLab._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLab::*)()>(&::GlobalNamespace::GhostLab::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d0b09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GhostLab::__cordl_internal_get_outerDoor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outerDoor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GhostLab::__cordl_internal_get_outerDoor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outerDoor;
}
constexpr void GlobalNamespace::GhostLab::__cordl_internal_set_outerDoor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outerDoor = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GhostLab::__cordl_internal_get_innerDoor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerDoor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GhostLab::__cordl_internal_get_innerDoor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerDoor;
}
constexpr void GlobalNamespace::GhostLab::__cordl_internal_set_innerDoor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___innerDoor = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GhostLab::__cordl_internal_get_doorTravelDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorTravelDistance;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GhostLab::__cordl_internal_get_doorTravelDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorTravelDistance;
}
constexpr void GlobalNamespace::GhostLab::__cordl_internal_set_doorTravelDistance(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorTravelDistance = value;
}
constexpr float_t& GlobalNamespace::GhostLab::__cordl_internal_get_doorMoveSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorMoveSpeed;
}
constexpr float_t const& GlobalNamespace::GhostLab::__cordl_internal_get_doorMoveSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorMoveSpeed;
}
constexpr void GlobalNamespace::GhostLab::__cordl_internal_set_doorMoveSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorMoveSpeed = value;
}
constexpr float_t& GlobalNamespace::GhostLab::__cordl_internal_get_singleDoorMoveSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleDoorMoveSpeed;
}
constexpr float_t const& GlobalNamespace::GhostLab::__cordl_internal_get_singleDoorMoveSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleDoorMoveSpeed;
}
constexpr void GlobalNamespace::GhostLab::__cordl_internal_set_singleDoorMoveSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___singleDoorMoveSpeed = value;
}
constexpr ::GlobalNamespace::GhostLab_EntranceDoorsState& GlobalNamespace::GhostLab::__cordl_internal_get_doorState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorState;
}
constexpr ::GlobalNamespace::GhostLab_EntranceDoorsState const& GlobalNamespace::GhostLab::__cordl_internal_get_doorState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorState;
}
constexpr void GlobalNamespace::GhostLab::__cordl_internal_set_doorState(::GlobalNamespace::GhostLab_EntranceDoorsState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorState = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostLabReliableState>& GlobalNamespace::GhostLab::__cordl_internal_get_relState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relState;
}
constexpr ::UnityW<::GlobalNamespace::GhostLabReliableState> const& GlobalNamespace::GhostLab::__cordl_internal_get_relState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relState;
}
constexpr void GlobalNamespace::GhostLab::__cordl_internal_set_relState(::UnityW<::GlobalNamespace::GhostLabReliableState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___relState = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::GhostLab::__cordl_internal_get_slidingDoor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slidingDoor;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::GhostLab::__cordl_internal_get_slidingDoor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slidingDoor;
}
constexpr void GlobalNamespace::GhostLab::__cordl_internal_set_slidingDoor(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slidingDoor = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GhostLab::__cordl_internal_get_singleDoorTravelDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleDoorTravelDistance;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GhostLab::__cordl_internal_get_singleDoorTravelDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleDoorTravelDistance;
}
constexpr void GlobalNamespace::GhostLab::__cordl_internal_set_singleDoorTravelDistance(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___singleDoorTravelDistance = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::GhostLab::__cordl_internal_get_doorOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpen;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::GhostLab::__cordl_internal_get_doorOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpen;
}
constexpr void GlobalNamespace::GhostLab::__cordl_internal_set_doorOpen(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorOpen = value;
}
inline void GlobalNamespace::GhostLab::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GhostLab::BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GhostLab::DoorButtonPress(int32_t  buttonIndex, bool  forSingleDoor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                        {"DoorButtonPress", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonIndex, forSingleDoor);
}
inline void GlobalNamespace::GhostLab::UpdateDoorState(int32_t  buttonIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                        {"UpdateDoorState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonIndex);
}
inline void GlobalNamespace::GhostLab::UpdateEntranceDoorsState(int32_t  buttonIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                        {"UpdateEntranceDoorsState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonIndex);
}
inline void GlobalNamespace::GhostLab::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostLab*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostLab::SynchStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                        {"SynchStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GhostLab::IsDoorMoving(bool  singleDoor, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                        {"IsDoorMoving", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, singleDoor, index);
}
inline void GlobalNamespace::GhostLab::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLab*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostLab* GlobalNamespace::GhostLab::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostLab*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::GhostLab::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::GhostLab::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostLab::GhostLab()   {
}

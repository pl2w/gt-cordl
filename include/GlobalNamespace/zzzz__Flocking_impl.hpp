#pragma once
// IWYU pragma private; include "GlobalNamespace/Flocking.hpp"
#include "GlobalNamespace/zzzz__Flocking_FishState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Flocking_def.hpp"
#include "GlobalNamespace/zzzz__FlockingManager_def.hpp"
#include "GlobalNamespace/zzzz__Flocking_FishState_def.hpp"
#include "GorillaTagScripts/zzzz__GameObjectManagerWithId_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Flocking.get_FishArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FlockingManager_FishArea* (::GlobalNamespace::Flocking::*)()>(&::GlobalNamespace::Flocking::get_FishArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5806264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"get_FishArea", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Flocking.set_FishArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Flocking::*)(::GlobalNamespace::FlockingManager_FishArea*)>(&::GlobalNamespace::Flocking::set_FishArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580626c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"set_FishArea", {}, {::i2c::type_of<::GlobalNamespace::FlockingManager_FishArea*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Flocking.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Flocking::*)()>(&::GlobalNamespace::Flocking::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5806274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Flocking.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Flocking::*)()>(&::GlobalNamespace::Flocking::Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58062cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Flocking.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Flocking::*)()>(&::GlobalNamespace::Flocking::OnDisable)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x58062f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Flocking.InvokeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Flocking::*)()>(&::GlobalNamespace::Flocking::InvokeUpdate)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x58065ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"InvokeUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Flocking.MaybeTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Flocking::*)()>(&::GlobalNamespace::Flocking::MaybeTurn)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5806b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"MaybeTurn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Flocking.Turn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Flocking::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::Flocking::Turn)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5807810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"Turn", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Flocking.SwitchState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Flocking::*)(::GlobalNamespace::Flocking_FishState)>(&::GlobalNamespace::Flocking::SwitchState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58079b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"SwitchState", {}, {::i2c::type_of<::GlobalNamespace::Flocking_FishState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Flocking.Flock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Flocking::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::Flocking::Flock)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x5806d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"Flock", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Flocking.HandleOnFoodDetected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Flocking::*)(::GlobalNamespace::FlockingManager_FishFood*)>(&::GlobalNamespace::Flocking::HandleOnFoodDetected)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x58079bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"HandleOnFoodDetected", {}, {::i2c::type_of<::GlobalNamespace::FlockingManager_FishFood*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Flocking.HandleOnFoodDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Flocking::*)(::UnityEngine::BoxCollider*)>(&::GlobalNamespace::Flocking::HandleOnFoodDestroyed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5807ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"HandleOnFoodDestroyed", {}, {::i2c::type_of<::UnityEngine::BoxCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Flocking.FollowFood
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Flocking::*)()>(&::GlobalNamespace::Flocking::FollowFood)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x58073c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"FollowFood", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Flocking.AvoidPlayerHands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Flocking::*)()>(&::GlobalNamespace::Flocking::AvoidPlayerHands)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x580691c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"AvoidPlayerHands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Flocking.SetSyncPosRot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Flocking::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::Flocking::SetSyncPosRot)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5807cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"SetSyncPosRot", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Flocking.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Flocking::*)()>(&::GlobalNamespace::Flocking::OnEnable)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5808298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Flocking._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Flocking::*)()>(&::GlobalNamespace::Flocking::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5808624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::Flocking::__cordl_internal_get_minSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSpeed;
}
constexpr float_t const& GlobalNamespace::Flocking::__cordl_internal_get_minSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSpeed;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_minSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minSpeed = value;
}
constexpr float_t& GlobalNamespace::Flocking::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& GlobalNamespace::Flocking::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr float_t& GlobalNamespace::Flocking::__cordl_internal_get_rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr float_t const& GlobalNamespace::Flocking::__cordl_internal_get_rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationSpeed = value;
}
constexpr float_t& GlobalNamespace::Flocking::__cordl_internal_get_maxNeighbourDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNeighbourDistance;
}
constexpr float_t const& GlobalNamespace::Flocking::__cordl_internal_get_maxNeighbourDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNeighbourDistance;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_maxNeighbourDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxNeighbourDistance = value;
}
constexpr float_t& GlobalNamespace::Flocking::__cordl_internal_get_eatFoodDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eatFoodDuration;
}
constexpr float_t const& GlobalNamespace::Flocking::__cordl_internal_get_eatFoodDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eatFoodDuration;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_eatFoodDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eatFoodDuration = value;
}
constexpr float_t& GlobalNamespace::Flocking::__cordl_internal_get_followFoodSpeedMult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followFoodSpeedMult;
}
constexpr float_t const& GlobalNamespace::Flocking::__cordl_internal_get_followFoodSpeedMult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followFoodSpeedMult;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_followFoodSpeedMult(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___followFoodSpeedMult = value;
}
constexpr float_t& GlobalNamespace::Flocking::__cordl_internal_get_avoidHandSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___avoidHandSpeed;
}
constexpr float_t const& GlobalNamespace::Flocking::__cordl_internal_get_avoidHandSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___avoidHandSpeed;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_avoidHandSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___avoidHandSpeed = value;
}
constexpr float_t& GlobalNamespace::Flocking::__cordl_internal_get_flockingAvoidanceDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flockingAvoidanceDistance;
}
constexpr float_t const& GlobalNamespace::Flocking::__cordl_internal_get_flockingAvoidanceDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flockingAvoidanceDistance;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_flockingAvoidanceDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flockingAvoidanceDistance = value;
}
constexpr double_t& GlobalNamespace::Flocking::__cordl_internal_get_FollowFoodStopDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FollowFoodStopDistance;
}
constexpr double_t const& GlobalNamespace::Flocking::__cordl_internal_get_FollowFoodStopDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FollowFoodStopDistance;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_FollowFoodStopDistance(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FollowFoodStopDistance = value;
}
constexpr float_t& GlobalNamespace::Flocking::__cordl_internal_get_FollowFakeFoodStopDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FollowFakeFoodStopDistance;
}
constexpr float_t const& GlobalNamespace::Flocking::__cordl_internal_get_FollowFakeFoodStopDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FollowFakeFoodStopDistance;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_FollowFakeFoodStopDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FollowFakeFoodStopDistance = value;
}
constexpr float_t& GlobalNamespace::Flocking::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& GlobalNamespace::Flocking::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Flocking::__cordl_internal_get_averageHeading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averageHeading;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Flocking::__cordl_internal_get_averageHeading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averageHeading;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_averageHeading(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___averageHeading = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Flocking::__cordl_internal_get_averagePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averagePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Flocking::__cordl_internal_get_averagePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averagePosition;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_averagePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___averagePosition = value;
}
constexpr float_t& GlobalNamespace::Flocking::__cordl_internal_get_feedingTimeStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___feedingTimeStarted;
}
constexpr float_t const& GlobalNamespace::Flocking::__cordl_internal_get_feedingTimeStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___feedingTimeStarted;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_feedingTimeStarted(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___feedingTimeStarted = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::Flocking::__cordl_internal_get_projectileGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::Flocking::__cordl_internal_get_projectileGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileGameObject;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_projectileGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileGameObject = value;
}
constexpr bool& GlobalNamespace::Flocking::__cordl_internal_get_followingFood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followingFood;
}
constexpr bool const& GlobalNamespace::Flocking::__cordl_internal_get_followingFood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followingFood;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_followingFood(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___followingFood = value;
}
constexpr ::UnityW<::GlobalNamespace::FlockingManager>& GlobalNamespace::Flocking::__cordl_internal_get_manager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr ::UnityW<::GlobalNamespace::FlockingManager> const& GlobalNamespace::Flocking::__cordl_internal_get_manager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_manager(::UnityW<::GlobalNamespace::FlockingManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manager = value;
}
constexpr ::UnityW<::GorillaTagScripts::GameObjectManagerWithId>& GlobalNamespace::Flocking::__cordl_internal_get__fishSceneGameObjectsManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fishSceneGameObjectsManager;
}
constexpr ::UnityW<::GorillaTagScripts::GameObjectManagerWithId> const& GlobalNamespace::Flocking::__cordl_internal_get__fishSceneGameObjectsManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fishSceneGameObjectsManager;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set__fishSceneGameObjectsManager(::UnityW<::GorillaTagScripts::GameObjectManagerWithId>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fishSceneGameObjectsManager = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::StringW,::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::Flocking::__cordl_internal_get_sendIdEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendIdEvent;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::StringW,::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::Flocking::__cordl_internal_get_sendIdEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendIdEvent;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_sendIdEvent(::UnityEngine::Events::UnityEvent_2<::StringW,::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendIdEvent = value;
}
constexpr ::GlobalNamespace::Flocking_FishState& GlobalNamespace::Flocking::__cordl_internal_get_fishState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fishState;
}
constexpr ::GlobalNamespace::Flocking_FishState const& GlobalNamespace::Flocking::__cordl_internal_get_fishState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fishState;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_fishState(::GlobalNamespace::Flocking_FishState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fishState = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Flocking::__cordl_internal_get_pos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Flocking::__cordl_internal_get_pos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_pos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::Flocking::__cordl_internal_get_rot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::Flocking::__cordl_internal_get_rot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rot;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_rot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rot = value;
}
constexpr float_t& GlobalNamespace::Flocking::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr float_t const& GlobalNamespace::Flocking::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_velocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr bool& GlobalNamespace::Flocking::__cordl_internal_get_isTurning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTurning;
}
constexpr bool const& GlobalNamespace::Flocking::__cordl_internal_get_isTurning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTurning;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_isTurning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTurning = value;
}
constexpr bool& GlobalNamespace::Flocking::__cordl_internal_get_isRealFood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRealFood;
}
constexpr bool const& GlobalNamespace::Flocking::__cordl_internal_get_isRealFood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRealFood;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_isRealFood(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRealFood = value;
}
constexpr float_t& GlobalNamespace::Flocking::__cordl_internal_get_avointPointRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___avointPointRadius;
}
constexpr float_t const& GlobalNamespace::Flocking::__cordl_internal_get_avointPointRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___avointPointRadius;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_avointPointRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___avointPointRadius = value;
}
constexpr float_t& GlobalNamespace::Flocking::__cordl_internal_get_cacheSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cacheSpeed;
}
constexpr float_t const& GlobalNamespace::Flocking::__cordl_internal_get_cacheSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cacheSpeed;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set_cacheSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cacheSpeed = value;
}
constexpr ::GlobalNamespace::FlockingManager_FishArea*& GlobalNamespace::Flocking::__cordl_internal_get__FishArea_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FishArea_k__BackingField;
}
constexpr ::GlobalNamespace::FlockingManager_FishArea* const& GlobalNamespace::Flocking::__cordl_internal_get__FishArea_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FishArea_k__BackingField;
}
constexpr void GlobalNamespace::Flocking::__cordl_internal_set__FishArea_k__BackingField(::GlobalNamespace::FlockingManager_FishArea*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FishArea_k__BackingField = value;
}
inline ::GlobalNamespace::FlockingManager_FishArea* GlobalNamespace::Flocking::get_FishArea()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"get_FishArea", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FlockingManager_FishArea*>(this, ___internal_method);
}
inline void GlobalNamespace::Flocking::set_FishArea(::GlobalNamespace::FlockingManager_FishArea*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"set_FishArea", {}, {::i2c::type_of<::GlobalNamespace::FlockingManager_FishArea*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::Flocking::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Flocking::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Flocking::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Flocking::InvokeUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"InvokeUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Flocking::MaybeTurn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"MaybeTurn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Flocking::Turn(::UnityEngine::Vector3  towardPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"Turn", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, towardPoint);
}
inline void GlobalNamespace::Flocking::SwitchState(::GlobalNamespace::Flocking_FishState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"SwitchState", {}, {::i2c::type_of<::GlobalNamespace::Flocking_FishState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::Flocking::Flock(::UnityEngine::Vector3  nextGoal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"Flock", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextGoal);
}
inline void GlobalNamespace::Flocking::HandleOnFoodDetected(::GlobalNamespace::FlockingManager_FishFood*  fishFood)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"HandleOnFoodDetected", {}, {::i2c::type_of<::GlobalNamespace::FlockingManager_FishFood*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fishFood);
}
inline void GlobalNamespace::Flocking::HandleOnFoodDestroyed(::UnityEngine::BoxCollider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"HandleOnFoodDestroyed", {}, {::i2c::type_of<::UnityEngine::BoxCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::Flocking::FollowFood()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"FollowFood", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Flocking::AvoidPlayerHands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"AvoidPlayerHands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Flocking::SetSyncPosRot(::UnityEngine::Vector3  syncPos, ::UnityEngine::Quaternion  syncRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"SetSyncPosRot", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, syncPos, syncRot);
}
inline void GlobalNamespace::Flocking::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Flocking::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Flocking*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Flocking* GlobalNamespace::Flocking::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Flocking*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Flocking::Flocking()   {
}

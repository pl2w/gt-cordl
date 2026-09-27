#pragma once
// IWYU pragma private; include "GorillaTagScripts/AI/AIEntity.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/AI/zzzz__AIEntity_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GorillaTagScripts/AI/zzzz__AIEntity_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshAgent_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::AI::AIEntity.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::AIEntity::*)()>(&::GorillaTagScripts::AI::AIEntity::Awake)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5c470f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::AIEntity*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::AIEntity.ChooseRandomTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::AIEntity::*)()>(&::GorillaTagScripts::AI::AIEntity::ChooseRandomTarget)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x5c472bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::AIEntity*>(),
                        {"ChooseRandomTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::AIEntity.ChooseClosestTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::AIEntity::*)()>(&::GorillaTagScripts::AI::AIEntity::ChooseClosestTarget)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x5c47884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::AIEntity*>(),
                        {"ChooseClosestTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::AIEntity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::AIEntity::*)()>(&::GorillaTagScripts::AI::AIEntity::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c47d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::AIEntity*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_waypointsContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waypointsContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_waypointsContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waypointsContainer;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_waypointsContainer(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waypointsContainer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_circleCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___circleCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_circleCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___circleCenter;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_circleCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___circleCenter = value;
}
constexpr float_t& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_circleRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___circleRadius;
}
constexpr float_t const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_circleRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___circleRadius;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_circleRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___circleRadius = value;
}
constexpr float_t& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_angularSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularSpeed;
}
constexpr float_t const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_angularSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularSpeed;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_angularSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angularSpeed = value;
}
constexpr float_t& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_patrolSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolSpeed;
}
constexpr float_t const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_patrolSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolSpeed;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_patrolSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolSpeed = value;
}
constexpr float_t& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_fleeSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeSpeed;
}
constexpr float_t const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_fleeSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeSpeed;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_fleeSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fleeSpeed = value;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_navMeshAgent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navMeshAgent;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_navMeshAgent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navMeshAgent;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_navMeshAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navMeshAgent = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr float_t& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_fleeRang()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeRang;
}
constexpr float_t const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_fleeRang() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeRang;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_fleeRang(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fleeRang = value;
}
constexpr float_t& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_fleeSpeedMult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeSpeedMult;
}
constexpr float_t const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_fleeSpeedMult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeSpeedMult;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_fleeSpeedMult(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fleeSpeedMult = value;
}
constexpr float_t& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_minChaseRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minChaseRange;
}
constexpr float_t const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_minChaseRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minChaseRange;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_minChaseRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minChaseRange = value;
}
constexpr float_t& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_attackDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDistance;
}
constexpr float_t const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_attackDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDistance;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_attackDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackDistance = value;
}
constexpr float_t& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_navMeshSampleRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navMeshSampleRange;
}
constexpr float_t const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_navMeshSampleRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navMeshSampleRange;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_navMeshSampleRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navMeshSampleRange = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_waypoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waypoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_waypoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waypoints;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_waypoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waypoints = value;
}
constexpr float_t& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_defaultSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultSpeed;
}
constexpr float_t const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_defaultSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultSpeed;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_defaultSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_followTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_followTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followTarget;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_followTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___followTarget = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_targetPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_targetPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPlayer = value;
}
constexpr bool& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_targetIsOnNavMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetIsOnNavMesh;
}
constexpr bool const& GorillaTagScripts::AI::AIEntity::__cordl_internal_get_targetIsOnNavMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetIsOnNavMesh;
}
constexpr void GorillaTagScripts::AI::AIEntity::__cordl_internal_set_targetIsOnNavMesh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetIsOnNavMesh = value;
}
inline void GorillaTagScripts::AI::AIEntity::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::AIEntity*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::AI::AIEntity::ChooseRandomTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::AIEntity*>(),
                        {"ChooseRandomTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::AI::AIEntity::ChooseClosestTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::AIEntity*>(),
                        {"ChooseClosestTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::AI::AIEntity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::AIEntity*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::AI::AIEntity* GorillaTagScripts::AI::AIEntity::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::AI::AIEntity*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::AI::AIEntity::AIEntity()   {
}
//  Writing Method size for method: ::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0::*)()>(&::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4787c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0._ChooseRandomTarget_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0::*)(::GlobalNamespace::RigContainer*)>(&::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0::_ChooseRandomTarget_b__0)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5c47df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0*>(),
                        {"<ChooseRandomTarget>b__0", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0::__cordl_internal_get_randomTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomTarget;
}
constexpr int32_t const& GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0::__cordl_internal_get_randomTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomTarget;
}
constexpr void GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0::__cordl_internal_set_randomTarget(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomTarget = value;
}
inline void GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0::_ChooseRandomTarget_b__0(::GlobalNamespace::RigContainer*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0*>(),
                        {"<ChooseRandomTarget>b__0", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0* GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0::AIEntity___c__DisplayClass19_0()   {
}

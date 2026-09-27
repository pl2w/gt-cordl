#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityKeepDistance.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityKeepDistance_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityMoveToTarget_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshAgent_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityKeepDistance.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityKeepDistance::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRAbilityKeepDistance::Setup)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x586adc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityKeepDistance.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityKeepDistance::*)()>(&::GlobalNamespace::GRAbilityKeepDistance::OnStart)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x586af04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityKeepDistance.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityKeepDistance::*)()>(&::GlobalNamespace::GRAbilityKeepDistance::OnStop)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x586b4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityKeepDistance.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityKeepDistance::*)()>(&::GlobalNamespace::GRAbilityKeepDistance::IsDone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586b580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityKeepDistance.SetTargetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityKeepDistance::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRAbilityKeepDistance::SetTargetPlayer)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x586b588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(),
                        {"SetTargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityKeepDistance.OnThink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityKeepDistance::*)(float_t)>(&::GlobalNamespace::GRAbilityKeepDistance::OnThink)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x586b6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityKeepDistance.PickBackupDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GRAbilityKeepDistance::*)()>(&::GlobalNamespace::GRAbilityKeepDistance::PickBackupDestination)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x586b144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(),
                        {"PickBackupDestination", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityKeepDistance.OnUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityKeepDistance::*)(float_t)>(&::GlobalNamespace::GRAbilityKeepDistance::OnUpdateShared)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x586b960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityKeepDistance.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityKeepDistance::*)(float_t)>(&::GlobalNamespace::GRAbilityKeepDistance::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x586ba64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityKeepDistance.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityKeepDistance::*)(float_t)>(&::GlobalNamespace::GRAbilityKeepDistance::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x586baa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityKeepDistance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityKeepDistance::*)()>(&::GlobalNamespace::GRAbilityKeepDistance::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x586baec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_get_navMeshAgent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navMeshAgent;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_get_navMeshAgent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navMeshAgent;
}
constexpr void GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_set_navMeshAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navMeshAgent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_get_moveAbility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveAbility;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_get_moveAbility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveAbility;
}
constexpr void GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_set_moveAbility(::GlobalNamespace::GRAbilityMoveToTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveAbility = value;
}
constexpr ::StringW& GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_get_idleAnimName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleAnimName;
}
constexpr ::StringW const& GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_get_idleAnimName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleAnimName;
}
constexpr void GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_set_idleAnimName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idleAnimName = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_get_idleSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_get_idleSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleSound;
}
constexpr void GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_set_idleSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idleSound = value;
}
constexpr float_t& GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_get_minBackupSpaceRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minBackupSpaceRequired;
}
constexpr float_t const& GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_get_minBackupSpaceRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minBackupSpaceRequired;
}
constexpr void GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_set_minBackupSpaceRequired(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minBackupSpaceRequired = value;
}
constexpr float_t& GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_get_maxDistanceFromTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromTarget;
}
constexpr float_t const& GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_get_maxDistanceFromTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromTarget;
}
constexpr void GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_set_maxDistanceFromTarget(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceFromTarget = value;
}
constexpr bool& GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_get_defaultUpdateRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultUpdateRotation;
}
constexpr bool const& GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_get_defaultUpdateRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultUpdateRotation;
}
constexpr void GlobalNamespace::GRAbilityKeepDistance::__cordl_internal_set_defaultUpdateRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultUpdateRotation = value;
}
inline void GlobalNamespace::GRAbilityKeepDistance::setStaticF_rotations(::ArrayW<::UnityEngine::Quaternion>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Quaternion>, "rotations", ::GlobalNamespace::GRAbilityKeepDistance*>(std::forward<::ArrayW<::UnityEngine::Quaternion>>(value));
}
inline ::ArrayW<::UnityEngine::Quaternion> GlobalNamespace::GRAbilityKeepDistance::getStaticF_rotations()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Quaternion>, "rotations", ::GlobalNamespace::GRAbilityKeepDistance*>();
}
inline void GlobalNamespace::GRAbilityKeepDistance::Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GRAbilityKeepDistance::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityKeepDistance::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityKeepDistance::IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityKeepDistance::SetTargetPlayer(::GlobalNamespace::NetPlayer*  targetPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(),
                        {"SetTargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer);
}
inline void GlobalNamespace::GRAbilityKeepDistance::OnThink(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GRAbilityKeepDistance::PickBackupDestination()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(),
                        {"PickBackupDestination", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityKeepDistance::OnUpdateShared(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityKeepDistance::OnUpdateAuthority(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityKeepDistance::OnUpdateRemote(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityKeepDistance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityKeepDistance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityKeepDistance* GlobalNamespace::GRAbilityKeepDistance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityKeepDistance*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityKeepDistance::GRAbilityKeepDistance()   {
}

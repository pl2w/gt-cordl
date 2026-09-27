#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityPatrol.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "Unity/Mathematics/zzzz__Random_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityPatrol_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityMoveToTarget_def.hpp"
#include "GlobalNamespace/zzzz__GRPatrolPath_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshAgent_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityPatrol.HasValidPatrolPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityPatrol::*)()>(&::GlobalNamespace::GRAbilityPatrol::HasValidPatrolPath)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x586bd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                        {"HasValidPatrolPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityPatrol.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityPatrol::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRAbilityPatrol::Setup)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x586bdd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityPatrol.InitializeRandoms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityPatrol::*)()>(&::GlobalNamespace::GRAbilityPatrol::InitializeRandoms)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x586bf24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                        {"InitializeRandoms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityPatrol.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityPatrol::*)()>(&::GlobalNamespace::GRAbilityPatrol::OnStart)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x586bf7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityPatrol.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityPatrol::*)()>(&::GlobalNamespace::GRAbilityPatrol::OnStop)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x586c16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityPatrol.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityPatrol::*)()>(&::GlobalNamespace::GRAbilityPatrol::IsDone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586c19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityPatrol.SetPatrolPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityPatrol::*)(::GlobalNamespace::GRPatrolPath*)>(&::GlobalNamespace::GRAbilityPatrol::SetPatrolPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586c1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                        {"SetPatrolPath", {}, {::i2c::type_of<::GlobalNamespace::GRPatrolPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityPatrol.GetPatrolPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRPatrolPath> (::GlobalNamespace::GRAbilityPatrol::*)()>(&::GlobalNamespace::GRAbilityPatrol::GetPatrolPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586c1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                        {"GetPatrolPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityPatrol.SetNextPatrolNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityPatrol::*)(int32_t)>(&::GlobalNamespace::GRAbilityPatrol::SetNextPatrolNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586c1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                        {"SetNextPatrolNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityPatrol.CalculateNextPatrolGroan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityPatrol::*)()>(&::GlobalNamespace::GRAbilityPatrol::CalculateNextPatrolGroan)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x586c0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                        {"CalculateNextPatrolGroan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityPatrol.PlayPatrolGroan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityPatrol::*)()>(&::GlobalNamespace::GRAbilityPatrol::PlayPatrolGroan)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x586c1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                        {"PlayPatrolGroan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityPatrol.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityPatrol::*)(float_t)>(&::GlobalNamespace::GRAbilityPatrol::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x586c250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityPatrol.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityPatrol::*)(float_t)>(&::GlobalNamespace::GRAbilityPatrol::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x586c45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityPatrol._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityPatrol::*)()>(&::GlobalNamespace::GRAbilityPatrol::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x586c624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_navMeshAgent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navMeshAgent;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_navMeshAgent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navMeshAgent;
}
constexpr void GlobalNamespace::GRAbilityPatrol::__cordl_internal_set_navMeshAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navMeshAgent = value;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_moveAbility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveAbility;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_moveAbility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveAbility;
}
constexpr void GlobalNamespace::GRAbilityPatrol::__cordl_internal_set_moveAbility(::GlobalNamespace::GRAbilityMoveToTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveAbility = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPatrolPath>& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_patrolPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPath;
}
constexpr ::UnityW<::GlobalNamespace::GRPatrolPath> const& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_patrolPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPath;
}
constexpr void GlobalNamespace::GRAbilityPatrol::__cordl_internal_set_patrolPath(::UnityW<::GlobalNamespace::GRPatrolPath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolPath = value;
}
constexpr double_t& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_lastStateChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStateChange;
}
constexpr double_t const& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_lastStateChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStateChange;
}
constexpr void GlobalNamespace::GRAbilityPatrol::__cordl_internal_set_lastStateChange(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastStateChange = value;
}
constexpr float_t& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_ambientSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientSoundVolume;
}
constexpr float_t const& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_ambientSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientSoundVolume;
}
constexpr void GlobalNamespace::GRAbilityPatrol::__cordl_internal_set_ambientSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientSoundVolume = value;
}
constexpr double_t& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_ambientSoundDelayMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientSoundDelayMin;
}
constexpr double_t const& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_ambientSoundDelayMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientSoundDelayMin;
}
constexpr void GlobalNamespace::GRAbilityPatrol::__cordl_internal_set_ambientSoundDelayMin(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientSoundDelayMin = value;
}
constexpr double_t& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_ambientSoundDelayMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientSoundDelayMax;
}
constexpr double_t const& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_ambientSoundDelayMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientSoundDelayMax;
}
constexpr void GlobalNamespace::GRAbilityPatrol::__cordl_internal_set_ambientSoundDelayMax(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientSoundDelayMax = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_ambientPatrolSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientPatrolSounds;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_ambientPatrolSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientPatrolSounds;
}
constexpr void GlobalNamespace::GRAbilityPatrol::__cordl_internal_set_ambientPatrolSounds(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientPatrolSounds = value;
}
constexpr double_t& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_lastPartrolAmbientSoundTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPartrolAmbientSoundTime;
}
constexpr double_t const& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_lastPartrolAmbientSoundTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPartrolAmbientSoundTime;
}
constexpr void GlobalNamespace::GRAbilityPatrol::__cordl_internal_set_lastPartrolAmbientSoundTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPartrolAmbientSoundTime = value;
}
constexpr double_t& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_nextPatrolGroanTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPatrolGroanTime;
}
constexpr double_t const& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_nextPatrolGroanTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPatrolGroanTime;
}
constexpr void GlobalNamespace::GRAbilityPatrol::__cordl_internal_set_nextPatrolGroanTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPatrolGroanTime = value;
}
constexpr ::Unity::Mathematics::Random& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_patrolGroanSoundDelayRandom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolGroanSoundDelayRandom;
}
constexpr ::Unity::Mathematics::Random const& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_patrolGroanSoundDelayRandom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolGroanSoundDelayRandom;
}
constexpr void GlobalNamespace::GRAbilityPatrol::__cordl_internal_set_patrolGroanSoundDelayRandom(::Unity::Mathematics::Random  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolGroanSoundDelayRandom = value;
}
constexpr ::Unity::Mathematics::Random& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_patrolGroanSoundRandom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolGroanSoundRandom;
}
constexpr ::Unity::Mathematics::Random const& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_patrolGroanSoundRandom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolGroanSoundRandom;
}
constexpr void GlobalNamespace::GRAbilityPatrol::__cordl_internal_set_patrolGroanSoundRandom(::Unity::Mathematics::Random  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolGroanSoundRandom = value;
}
constexpr int32_t& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_nextPatrolNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPatrolNode;
}
constexpr int32_t const& GlobalNamespace::GRAbilityPatrol::__cordl_internal_get_nextPatrolNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPatrolNode;
}
constexpr void GlobalNamespace::GRAbilityPatrol::__cordl_internal_set_nextPatrolNode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPatrolNode = value;
}
inline bool GlobalNamespace::GRAbilityPatrol::HasValidPatrolPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                        {"HasValidPatrolPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityPatrol::Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GRAbilityPatrol::InitializeRandoms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                        {"InitializeRandoms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityPatrol::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityPatrol::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityPatrol::IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityPatrol::SetPatrolPath(::GlobalNamespace::GRPatrolPath*  patrolPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                        {"SetPatrolPath", {}, {::i2c::type_of<::GlobalNamespace::GRPatrolPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, patrolPath);
}
inline ::UnityW<::GlobalNamespace::GRPatrolPath> GlobalNamespace::GRAbilityPatrol::GetPatrolPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                        {"GetPatrolPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRPatrolPath>>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityPatrol::SetNextPatrolNode(int32_t  nextPatrolNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                        {"SetNextPatrolNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextPatrolNode);
}
inline void GlobalNamespace::GRAbilityPatrol::CalculateNextPatrolGroan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                        {"CalculateNextPatrolGroan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityPatrol::PlayPatrolGroan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                        {"PlayPatrolGroan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityPatrol::OnUpdateAuthority(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityPatrol::OnUpdateRemote(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityPatrol::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityPatrol*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityPatrol* GlobalNamespace::GRAbilityPatrol::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityPatrol*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityPatrol::GRAbilityPatrol()   {
}

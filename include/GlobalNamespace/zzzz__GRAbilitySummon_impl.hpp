#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilitySummon.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilitySummon_State_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilitySummon_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__AnimationData_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilitySummon_State_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilitySummon_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilitySummon.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilitySummon::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRAbilitySummon::Setup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586f278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilitySummon.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilitySummon::*)()>(&::GlobalNamespace::GRAbilitySummon::OnStart)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x586f27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilitySummon.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilitySummon::*)()>(&::GlobalNamespace::GRAbilitySummon::OnStop)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x586f460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilitySummon.SetLookAtTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilitySummon::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::GRAbilitySummon::SetLookAtTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586f494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                        {"SetLookAtTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilitySummon.OnThink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilitySummon::*)(float_t)>(&::GlobalNamespace::GRAbilitySummon::OnThink)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586f49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilitySummon.OnUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilitySummon::*)(float_t)>(&::GlobalNamespace::GRAbilitySummon::OnUpdateShared)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x586f528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilitySummon.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilitySummon::*)(float_t)>(&::GlobalNamespace::GRAbilitySummon::UpdateState)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x586f4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                        {"UpdateState", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilitySummon.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilitySummon::*)(::GlobalNamespace::GRAbilitySummon_State)>(&::GlobalNamespace::GRAbilitySummon::SetState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586f5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRAbilitySummon_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilitySummon.GetSpawnLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (::GlobalNamespace::GRAbilitySummon::*)()>(&::GlobalNamespace::GRAbilitySummon::GetSpawnLocation)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x586f7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                        {"GetSpawnLocation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilitySummon.ForceSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilitySummon::*)()>(&::GlobalNamespace::GRAbilitySummon::ForceSpawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586fb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                        {"ForceSpawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilitySummon.DoSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilitySummon::*)()>(&::GlobalNamespace::GRAbilitySummon::DoSpawn)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x586f5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                        {"DoSpawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilitySummon.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilitySummon::*)()>(&::GlobalNamespace::GRAbilitySummon::IsDone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x586fb7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilitySummon.IsCoolDownOver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilitySummon::*)()>(&::GlobalNamespace::GRAbilitySummon::IsCoolDownOver)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x586fb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilitySummon.GetRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GRAbilitySummon::*)()>(&::GlobalNamespace::GRAbilitySummon::GetRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586fbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilitySummon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilitySummon::*)()>(&::GlobalNamespace::GRAbilitySummon::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x586fbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_lastAnimIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAnimIndex;
}
constexpr int32_t const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_lastAnimIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAnimIndex;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_lastAnimIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAnimIndex = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_entityPrefabToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityPrefabToSpawn;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_entityPrefabToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityPrefabToSpawn;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_entityPrefabToSpawn(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityPrefabToSpawn = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_animData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>* const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_animData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animData;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_animData(::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animData = value;
}
constexpr float_t& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_animSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_animSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animSpeed;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_animSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animSpeed = value;
}
constexpr float_t& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_coolDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolDown;
}
constexpr float_t const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_coolDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolDown;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_coolDown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coolDown = value;
}
constexpr float_t& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_range()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr float_t const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_range() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_range(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___range = value;
}
constexpr float_t& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_chargeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeTime;
}
constexpr float_t const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_chargeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeTime;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_chargeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeTime = value;
}
constexpr float_t& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr float_t& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_desiredSpawnDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredSpawnDistance;
}
constexpr float_t const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_desiredSpawnDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredSpawnDistance;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_desiredSpawnDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___desiredSpawnDistance = value;
}
constexpr float_t& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_minSpawnDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSpawnDistance;
}
constexpr float_t const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_minSpawnDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSpawnDistance;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_minSpawnDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minSpawnDistance = value;
}
constexpr float_t& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_spawnHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnHeight;
}
constexpr float_t const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_spawnHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnHeight;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_spawnHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnHeight = value;
}
constexpr float_t& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_summonConeAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonConeAngle;
}
constexpr float_t const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_summonConeAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonConeAngle;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_summonConeAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summonConeAngle = value;
}
constexpr bool& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_spawned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawned;
}
constexpr bool const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_spawned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawned;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_spawned(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawned = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_summonSpawnAudioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonSpawnAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_summonSpawnAudioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonSpawnAudioClip;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_summonSpawnAudioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summonSpawnAudioClip = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_fxStartSummon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxStartSummon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_fxStartSummon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxStartSummon;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_fxStartSummon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxStartSummon = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_fxOnSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxOnSpawn;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_fxOnSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxOnSpawn;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_fxOnSpawn(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxOnSpawn = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_summonSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_summonSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonSound;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_summonSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summonSound = value;
}
constexpr int32_t& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_spawnedCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedCount;
}
constexpr int32_t const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_spawnedCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedCount;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_spawnedCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnedCount = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_lookAtTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookAtTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_lookAtTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookAtTarget;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_lookAtTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookAtTarget = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRAbilitySummon_SummonMarker*>*& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_summonMarkers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonMarkers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRAbilitySummon_SummonMarker*>* const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_summonMarkers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonMarkers;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_summonMarkers(::System::Collections::Generic::List_1<::GlobalNamespace::GRAbilitySummon_SummonMarker*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summonMarkers = value;
}
constexpr ::GlobalNamespace::GRAbilitySummon_State& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRAbilitySummon_State const& GlobalNamespace::GRAbilitySummon::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRAbilitySummon::__cordl_internal_set_state(::GlobalNamespace::GRAbilitySummon_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
inline void GlobalNamespace::GRAbilitySummon::Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GRAbilitySummon::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilitySummon::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilitySummon::SetLookAtTarget(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                        {"SetLookAtTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform);
}
inline void GlobalNamespace::GRAbilitySummon::OnThink(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilitySummon::OnUpdateShared(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilitySummon::UpdateState(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                        {"UpdateState", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilitySummon::SetState(::GlobalNamespace::GRAbilitySummon_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRAbilitySummon_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline ::System::Nullable_1<::UnityEngine::Vector3> GlobalNamespace::GRAbilitySummon::GetSpawnLocation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                        {"GetSpawnLocation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilitySummon::ForceSpawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                        {"ForceSpawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilitySummon::DoSpawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                        {"DoSpawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilitySummon::IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilitySummon::IsCoolDownOver()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::GRAbilitySummon::GetRange()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilitySummon::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilitySummon*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilitySummon* GlobalNamespace::GRAbilitySummon::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilitySummon*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilitySummon::GRAbilitySummon()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRAbilitySummon_SummonMarker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilitySummon_SummonMarker::*)()>(&::GlobalNamespace::GRAbilitySummon_SummonMarker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586fbfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilitySummon_SummonMarker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRAbilitySummon_SummonMarker::__cordl_internal_get_transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRAbilitySummon_SummonMarker::__cordl_internal_get_transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr void GlobalNamespace::GRAbilitySummon_SummonMarker::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transform = value;
}
inline void GlobalNamespace::GRAbilitySummon_SummonMarker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilitySummon_SummonMarker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilitySummon_SummonMarker* GlobalNamespace::GRAbilitySummon_SummonMarker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilitySummon_SummonMarker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilitySummon_SummonMarker::GRAbilitySummon_SummonMarker()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityDie.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityDie_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__AnimationData_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityInterpolatedMovement_def.hpp"
#include "GlobalNamespace/zzzz__GRBreakableItemSpawnConfig_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameAbilityEvents_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityDie.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityDie::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRAbilityDie::Setup)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x58692d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityDie.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityDie::*)()>(&::GlobalNamespace::GRAbilityDie::OnStart)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x58694cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityDie.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityDie::*)()>(&::GlobalNamespace::GRAbilityDie::OnStop)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58696e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityDie.SetStaggerVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityDie::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GRAbilityDie::SetStaggerVelocity)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5869864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                        {"SetStaggerVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityDie.SetInstigatingPlayerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityDie::*)(int32_t)>(&::GlobalNamespace::GRAbilityDie::SetInstigatingPlayerIndex)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5869924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                        {"SetInstigatingPlayerIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityDie.Die
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityDie::*)()>(&::GlobalNamespace::GRAbilityDie::Die)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x58699e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                        {"Die", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityDie.DestroySelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityDie::*)()>(&::GlobalNamespace::GRAbilityDie::DestroySelf)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x586a040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                        {"DestroySelf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityDie.ReportDeathStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityDie::*)()>(&::GlobalNamespace::GRAbilityDie::ReportDeathStat)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x586a104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                        {"ReportDeathStat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityDie.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityDie::*)()>(&::GlobalNamespace::GRAbilityDie::IsDone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586a244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityDie.OnUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityDie::*)(float_t)>(&::GlobalNamespace::GRAbilityDie::OnUpdateShared)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x586a24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityDie.Hide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*, bool)>(&::GlobalNamespace::GRAbilityDie::Hide)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5869768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                        {"Hide", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityDie.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*, bool)>(&::GlobalNamespace::GRAbilityDie::Disable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x58693d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                        {"Disable", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityDie._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityDie::*)()>(&::GlobalNamespace::GRAbilityDie::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x586a36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRAbilityDie::__cordl_internal_get_delayDeath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayDeath;
}
constexpr float_t const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_delayDeath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayDeath;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_delayDeath(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayDeath = value;
}
constexpr float_t& GlobalNamespace::GRAbilityDie::__cordl_internal_get_delayRespawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayRespawn;
}
constexpr float_t const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_delayRespawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayRespawn;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_delayRespawn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayRespawn = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::GRAbilityDie::__cordl_internal_get_hideWhenDead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideWhenDead;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_hideWhenDead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideWhenDead;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_hideWhenDead(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideWhenDead = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::GRAbilityDie::__cordl_internal_get_disableCollidersWhenDead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableCollidersWhenDead;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_disableCollidersWhenDead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableCollidersWhenDead;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_disableCollidersWhenDead(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableCollidersWhenDead = value;
}
constexpr bool& GlobalNamespace::GRAbilityDie::__cordl_internal_get_disableAllCollidersWhenDead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableAllCollidersWhenDead;
}
constexpr bool const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_disableAllCollidersWhenDead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableAllCollidersWhenDead;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_disableAllCollidersWhenDead(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableAllCollidersWhenDead = value;
}
constexpr bool& GlobalNamespace::GRAbilityDie::__cordl_internal_get_disableAllRenderersWhenDead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableAllRenderersWhenDead;
}
constexpr bool const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_disableAllRenderersWhenDead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableAllRenderersWhenDead;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_disableAllRenderersWhenDead(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableAllRenderersWhenDead = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRAbilityDie::__cordl_internal_get_fxDeath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxDeath;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_fxDeath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxDeath;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_fxDeath(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxDeath = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRAbilityDie::__cordl_internal_get_soundDeath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundDeath;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_soundDeath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundDeath;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_soundDeath(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundDeath = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRAbilityDie::__cordl_internal_get_soundOnHide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundOnHide;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_soundOnHide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundOnHide;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_soundOnHide(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundOnHide = value;
}
constexpr float_t& GlobalNamespace::GRAbilityDie::__cordl_internal_get_destroyDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyDelay;
}
constexpr float_t const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_destroyDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyDelay;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_destroyDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyDelay = value;
}
constexpr bool& GlobalNamespace::GRAbilityDie::__cordl_internal_get_doKnockback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doKnockback;
}
constexpr bool const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_doKnockback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doKnockback;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_doKnockback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doKnockback = value;
}
constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>& GlobalNamespace::GRAbilityDie::__cordl_internal_get_lootTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lootTable;
}
constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_lootTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lootTable;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_lootTable(::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lootTable = value;
}
constexpr bool& GlobalNamespace::GRAbilityDie::__cordl_internal_get_spawnOnGround()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnOnGround;
}
constexpr bool const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_spawnOnGround() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnOnGround;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_spawnOnGround(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnOnGround = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::GRAbilityDie::__cordl_internal_get_groundLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_groundLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundLayerMask;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_groundLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groundLayerMask = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRAbilityDie::__cordl_internal_get_lootSpawnMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lootSpawnMarker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_lootSpawnMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lootSpawnMarker;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_lootSpawnMarker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lootSpawnMarker = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*& GlobalNamespace::GRAbilityDie::__cordl_internal_get_animData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>* const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_animData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animData;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_animData(::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animData = value;
}
constexpr int32_t& GlobalNamespace::GRAbilityDie::__cordl_internal_get_instigatingActorNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instigatingActorNumber;
}
constexpr int32_t const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_instigatingActorNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instigatingActorNumber;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_instigatingActorNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instigatingActorNumber = value;
}
constexpr bool& GlobalNamespace::GRAbilityDie::__cordl_internal_get_isDead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDead;
}
constexpr bool const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_isDead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDead;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_isDead(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDead = value;
}
constexpr float_t& GlobalNamespace::GRAbilityDie::__cordl_internal_get_totalDeathDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalDeathDelay;
}
constexpr float_t const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_totalDeathDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalDeathDelay;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_totalDeathDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalDeathDelay = value;
}
constexpr ::GlobalNamespace::GRAbilityInterpolatedMovement*& GlobalNamespace::GRAbilityDie::__cordl_internal_get_staggerMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staggerMovement;
}
constexpr ::GlobalNamespace::GRAbilityInterpolatedMovement* const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_staggerMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staggerMovement;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_staggerMovement(::GlobalNamespace::GRAbilityInterpolatedMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staggerMovement = value;
}
constexpr ::GlobalNamespace::GameAbilityEvents*& GlobalNamespace::GRAbilityDie::__cordl_internal_get_events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr ::GlobalNamespace::GameAbilityEvents* const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_events(::GlobalNamespace::GameAbilityEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___events = value;
}
constexpr bool& GlobalNamespace::GRAbilityDie::__cordl_internal_get_reported()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reported;
}
constexpr bool const& GlobalNamespace::GRAbilityDie::__cordl_internal_get_reported() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reported;
}
constexpr void GlobalNamespace::GRAbilityDie::__cordl_internal_set_reported(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reported = value;
}
inline void GlobalNamespace::GRAbilityDie::Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GRAbilityDie::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityDie::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityDie::SetStaggerVelocity(::UnityEngine::Vector3  vel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                        {"SetStaggerVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vel);
}
inline void GlobalNamespace::GRAbilityDie::SetInstigatingPlayerIndex(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                        {"SetInstigatingPlayerIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNumber);
}
inline void GlobalNamespace::GRAbilityDie::Die()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                        {"Die", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityDie::DestroySelf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                        {"DestroySelf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityDie::ReportDeathStat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                        {"ReportDeathStat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityDie::IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityDie::OnUpdateShared(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityDie::Hide(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  renderers, bool  hide)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                        {"Hide", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderers, hide);
}
inline void GlobalNamespace::GRAbilityDie::Disable(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders, bool  disable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                        {"Disable", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, colliders, disable);
}
inline void GlobalNamespace::GRAbilityDie::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityDie*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityDie* GlobalNamespace::GRAbilityDie::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityDie*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityDie::GRAbilityDie()   {
}

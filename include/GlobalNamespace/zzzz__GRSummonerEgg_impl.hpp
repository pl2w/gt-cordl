#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSummonerEgg.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRSummonerEgg_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__GRBreakableItemSpawnConfig_def.hpp"
#include "GlobalNamespace/zzzz__GRSummonedEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRSummonerEgg.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSummonerEgg::*)()>(&::GlobalNamespace::GRSummonerEgg::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58b7ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonerEgg*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSummonerEgg.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSummonerEgg::*)()>(&::GlobalNamespace::GRSummonerEgg::Start)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x58b7b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonerEgg*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSummonerEgg.HatchEgg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSummonerEgg::*)()>(&::GlobalNamespace::GRSummonerEgg::HatchEgg)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x58b7d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonerEgg*>(),
                        {"HatchEgg", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSummonerEgg.DestroySelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSummonerEgg::*)()>(&::GlobalNamespace::GRSummonerEgg::DestroySelf)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58b7fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonerEgg*>(),
                        {"DestroySelf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSummonerEgg._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSummonerEgg::*)()>(&::GlobalNamespace::GRSummonerEgg::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58b802c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonerEgg*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GlobalNamespace::GRSummonerEgg::__cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_hatchAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatchAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_hatchAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatchAudio;
}
constexpr void GlobalNamespace::GRSummonerEgg::__cordl_internal_set_hatchAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hatchAudio = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_hatchSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatchSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_hatchSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatchSound;
}
constexpr void GlobalNamespace::GRSummonerEgg::__cordl_internal_set_hatchSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hatchSound = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_entityPrefabToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityPrefabToSpawn;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_entityPrefabToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityPrefabToSpawn;
}
constexpr void GlobalNamespace::GRSummonerEgg::__cordl_internal_set_entityPrefabToSpawn(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityPrefabToSpawn = value;
}
constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_lootTableToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lootTableToSpawn;
}
constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> const& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_lootTableToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lootTableToSpawn;
}
constexpr void GlobalNamespace::GRSummonerEgg::__cordl_internal_set_lootTableToSpawn(::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lootTableToSpawn = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_spawnOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_spawnOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnOffset;
}
constexpr void GlobalNamespace::GRSummonerEgg::__cordl_internal_set_spawnOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnOffset = value;
}
constexpr float_t& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_minHatchTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minHatchTime;
}
constexpr float_t const& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_minHatchTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minHatchTime;
}
constexpr void GlobalNamespace::GRSummonerEgg::__cordl_internal_set_minHatchTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minHatchTime = value;
}
constexpr float_t& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_maxHatchTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHatchTime;
}
constexpr float_t const& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_maxHatchTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHatchTime;
}
constexpr void GlobalNamespace::GRSummonerEgg::__cordl_internal_set_maxHatchTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHatchTime = value;
}
constexpr float_t& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_hatchTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatchTime;
}
constexpr float_t const& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_hatchTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatchTime;
}
constexpr void GlobalNamespace::GRSummonerEgg::__cordl_internal_set_hatchTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hatchTime = value;
}
constexpr ::UnityW<::GlobalNamespace::GRSummonedEntity>& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_summonedEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonedEntity;
}
constexpr ::UnityW<::GlobalNamespace::GRSummonedEntity> const& GlobalNamespace::GRSummonerEgg::__cordl_internal_get_summonedEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonedEntity;
}
constexpr void GlobalNamespace::GRSummonerEgg::__cordl_internal_set_summonedEntity(::UnityW<::GlobalNamespace::GRSummonedEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summonedEntity = value;
}
inline void GlobalNamespace::GRSummonerEgg::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonerEgg*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSummonerEgg::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonerEgg*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSummonerEgg::HatchEgg()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonerEgg*>(),
                        {"HatchEgg", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSummonerEgg::DestroySelf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonerEgg*>(),
                        {"DestroySelf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSummonerEgg::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonerEgg*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRSummonerEgg* GlobalNamespace::GRSummonerEgg::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRSummonerEgg*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRSummonerEgg::GRSummonerEgg()   {
}

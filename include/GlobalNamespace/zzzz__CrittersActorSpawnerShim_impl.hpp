#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersActorSpawnerShim.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersActorSpawnerShim_def.hpp"
#include "Critters/Scripts/zzzz__CrittersActorSpawner_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSpawnerShim.CopySpawnerDataInPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Critters::Scripts::CrittersActorSpawner> (::GlobalNamespace::CrittersActorSpawnerShim::*)()>(&::GlobalNamespace::CrittersActorSpawnerShim::CopySpawnerDataInPrefab)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x55fb2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerShim*>(),
                        {"CopySpawnerDataInPrefab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSpawnerShim.ReplaceSpawnerWithShim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorSpawnerShim::*)()>(&::GlobalNamespace::CrittersActorSpawnerShim::ReplaceSpawnerWithShim)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x55fb420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerShim*>(),
                        {"ReplaceSpawnerWithShim", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSpawnerShim._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorSpawnerShim::*)()>(&::GlobalNamespace::CrittersActorSpawnerShim::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55fb528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerShim*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_get_spawnerPointTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnerPointTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_get_spawnerPointTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnerPointTransform;
}
constexpr void GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_set_spawnerPointTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnerPointTransform = value;
}
constexpr ::GlobalNamespace::CrittersActor_CrittersActorType& GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_get_actorType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorType;
}
constexpr ::GlobalNamespace::CrittersActor_CrittersActorType const& GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_get_actorType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorType;
}
constexpr void GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_set_actorType(::GlobalNamespace::CrittersActor_CrittersActorType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorType = value;
}
constexpr int32_t& GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_get_subActorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subActorIndex;
}
constexpr int32_t const& GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_get_subActorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subActorIndex;
}
constexpr void GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_set_subActorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subActorIndex = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_get_insideSpawnerBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___insideSpawnerBounds;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_get_insideSpawnerBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___insideSpawnerBounds;
}
constexpr void GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_set_insideSpawnerBounds(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___insideSpawnerBounds = value;
}
constexpr int32_t& GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_get_spawnDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnDelay;
}
constexpr int32_t const& GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_get_spawnDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnDelay;
}
constexpr void GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_set_spawnDelay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnDelay = value;
}
constexpr bool& GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_get_applyImpulseOnSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyImpulseOnSpawn;
}
constexpr bool const& GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_get_applyImpulseOnSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyImpulseOnSpawn;
}
constexpr void GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_set_applyImpulseOnSpawn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyImpulseOnSpawn = value;
}
constexpr bool& GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_get_attachSpawnedObjectToSpawnLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachSpawnedObjectToSpawnLocation;
}
constexpr bool const& GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_get_attachSpawnedObjectToSpawnLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachSpawnedObjectToSpawnLocation;
}
constexpr void GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_set_attachSpawnedObjectToSpawnLocation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachSpawnedObjectToSpawnLocation = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_get_colliderTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderTrigger;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_get_colliderTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderTrigger;
}
constexpr void GlobalNamespace::CrittersActorSpawnerShim::__cordl_internal_set_colliderTrigger(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderTrigger = value;
}
inline ::UnityW<::Critters::Scripts::CrittersActorSpawner> GlobalNamespace::CrittersActorSpawnerShim::CopySpawnerDataInPrefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerShim*>(),
                        {"CopySpawnerDataInPrefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Critters::Scripts::CrittersActorSpawner>>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorSpawnerShim::ReplaceSpawnerWithShim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerShim*>(),
                        {"ReplaceSpawnerWithShim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorSpawnerShim::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerShim*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersActorSpawnerShim* GlobalNamespace::CrittersActorSpawnerShim::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersActorSpawnerShim*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersActorSpawnerShim::CrittersActorSpawnerShim()   {
}

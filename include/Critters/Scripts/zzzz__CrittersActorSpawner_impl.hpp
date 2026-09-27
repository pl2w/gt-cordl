#pragma once
// IWYU pragma private; include "Critters/Scripts/CrittersActorSpawner.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Critters/Scripts/zzzz__CrittersActorSpawner_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActorSpawnerPoint_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::Critters::Scripts::CrittersActorSpawner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersActorSpawner::*)()>(&::Critters::Scripts::CrittersActorSpawner::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ddd10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersActorSpawner.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersActorSpawner::*)()>(&::Critters::Scripts::CrittersActorSpawner::OnEnable)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ddd19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersActorSpawner.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersActorSpawner::*)()>(&::Critters::Scripts::CrittersActorSpawner::OnDisable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ddd2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersActorSpawner.ProcessLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersActorSpawner::*)()>(&::Critters::Scripts::CrittersActorSpawner::ProcessLocal)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5ddd380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {"ProcessLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersActorSpawner.DoReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersActorSpawner::*)()>(&::Critters::Scripts::CrittersActorSpawner::DoReset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ddd8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {"DoReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersActorSpawner.HandleSpawnedActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersActorSpawner::*)(::GlobalNamespace::CrittersActor*)>(&::Critters::Scripts::CrittersActorSpawner::HandleSpawnedActor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddd8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {"HandleSpawnedActor", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersActorSpawner.SpawnActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersActorSpawner::*)()>(&::Critters::Scripts::CrittersActorSpawner::SpawnActor)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5ddd598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {"SpawnActor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersActorSpawner.VerifySpawnAttached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Critters::Scripts::CrittersActorSpawner::*)()>(&::Critters::Scripts::CrittersActorSpawner::VerifySpawnAttached)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ddd7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {"VerifySpawnAttached", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersActorSpawner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersActorSpawner::*)()>(&::Critters::Scripts::CrittersActorSpawner::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ddd8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CrittersActorSpawnerPoint>& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_spawnPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPoint;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActorSpawnerPoint> const& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_spawnPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPoint;
}
constexpr void Critters::Scripts::CrittersActorSpawner::__cordl_internal_set_spawnPoint(::UnityW<::GlobalNamespace::CrittersActorSpawnerPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPoint = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor>& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_currentSpawnedObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSpawnedObject;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_currentSpawnedObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSpawnedObject;
}
constexpr void Critters::Scripts::CrittersActorSpawner::__cordl_internal_set_currentSpawnedObject(::UnityW<::GlobalNamespace::CrittersActor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSpawnedObject = value;
}
constexpr ::GlobalNamespace::CrittersActor_CrittersActorType& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_actorType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorType;
}
constexpr ::GlobalNamespace::CrittersActor_CrittersActorType const& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_actorType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorType;
}
constexpr void Critters::Scripts::CrittersActorSpawner::__cordl_internal_set_actorType(::GlobalNamespace::CrittersActor_CrittersActorType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorType = value;
}
constexpr int32_t& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_subActorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subActorIndex;
}
constexpr int32_t const& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_subActorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subActorIndex;
}
constexpr void Critters::Scripts::CrittersActorSpawner::__cordl_internal_set_subActorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subActorIndex = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_insideSpawnerCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___insideSpawnerCheck;
}
constexpr ::UnityW<::UnityEngine::Collider> const& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_insideSpawnerCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___insideSpawnerCheck;
}
constexpr void Critters::Scripts::CrittersActorSpawner::__cordl_internal_set_insideSpawnerCheck(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___insideSpawnerCheck = value;
}
constexpr int32_t& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_spawnDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnDelay;
}
constexpr int32_t const& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_spawnDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnDelay;
}
constexpr void Critters::Scripts::CrittersActorSpawner::__cordl_internal_set_spawnDelay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnDelay = value;
}
constexpr bool& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_applyImpulseOnSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyImpulseOnSpawn;
}
constexpr bool const& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_applyImpulseOnSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyImpulseOnSpawn;
}
constexpr void Critters::Scripts::CrittersActorSpawner::__cordl_internal_set_applyImpulseOnSpawn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyImpulseOnSpawn = value;
}
constexpr bool& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_attachSpawnedObjectToSpawnLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachSpawnedObjectToSpawnLocation;
}
constexpr bool const& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_attachSpawnedObjectToSpawnLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachSpawnedObjectToSpawnLocation;
}
constexpr void Critters::Scripts::CrittersActorSpawner::__cordl_internal_set_attachSpawnedObjectToSpawnLocation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachSpawnedObjectToSpawnLocation = value;
}
constexpr double_t& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_nextSpawnTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSpawnTime;
}
constexpr double_t const& Critters::Scripts::CrittersActorSpawner::__cordl_internal_get_nextSpawnTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSpawnTime;
}
constexpr void Critters::Scripts::CrittersActorSpawner::__cordl_internal_set_nextSpawnTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSpawnTime = value;
}
inline void Critters::Scripts::CrittersActorSpawner::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Critters::Scripts::CrittersActorSpawner::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Critters::Scripts::CrittersActorSpawner::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Critters::Scripts::CrittersActorSpawner::ProcessLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {"ProcessLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Critters::Scripts::CrittersActorSpawner::DoReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {"DoReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Critters::Scripts::CrittersActorSpawner::HandleSpawnedActor(::GlobalNamespace::CrittersActor*  spawnedActor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {"HandleSpawnedActor", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spawnedActor);
}
inline void Critters::Scripts::CrittersActorSpawner::SpawnActor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {"SpawnActor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Critters::Scripts::CrittersActorSpawner::VerifySpawnAttached()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {"VerifySpawnAttached", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Critters::Scripts::CrittersActorSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersActorSpawner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Critters::Scripts::CrittersActorSpawner* Critters::Scripts::CrittersActorSpawner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Critters::Scripts::CrittersActorSpawner*>());
}
// Ctor Parameters []
constexpr ::Critters::Scripts::CrittersActorSpawner::CrittersActorSpawner()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/GROneTimeEntitySpawner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GROneTimeEntitySpawner_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GROneTimeEntitySpawner.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GROneTimeEntitySpawner::*)()>(&::GlobalNamespace::GROneTimeEntitySpawner::Start)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x589fa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GROneTimeEntitySpawner*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GROneTimeEntitySpawner.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GROneTimeEntitySpawner::*)()>(&::GlobalNamespace::GROneTimeEntitySpawner::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589fae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GROneTimeEntitySpawner*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GROneTimeEntitySpawner.TrySpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GROneTimeEntitySpawner::*)()>(&::GlobalNamespace::GROneTimeEntitySpawner::TrySpawn)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x589fae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GROneTimeEntitySpawner*>(),
                        {"TrySpawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GROneTimeEntitySpawner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GROneTimeEntitySpawner::*)()>(&::GlobalNamespace::GROneTimeEntitySpawner::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x589fd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GROneTimeEntitySpawner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GROneTimeEntitySpawner::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GROneTimeEntitySpawner::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GROneTimeEntitySpawner::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GROneTimeEntitySpawner::__cordl_internal_get_EntityPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityPrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GROneTimeEntitySpawner::__cordl_internal_get_EntityPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityPrefab;
}
constexpr void GlobalNamespace::GROneTimeEntitySpawner::__cordl_internal_set_EntityPrefab(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntityPrefab = value;
}
constexpr bool& GlobalNamespace::GROneTimeEntitySpawner::__cordl_internal_get_bHasSpawned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bHasSpawned;
}
constexpr bool const& GlobalNamespace::GROneTimeEntitySpawner::__cordl_internal_get_bHasSpawned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bHasSpawned;
}
constexpr void GlobalNamespace::GROneTimeEntitySpawner::__cordl_internal_set_bHasSpawned(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bHasSpawned = value;
}
constexpr float_t& GlobalNamespace::GROneTimeEntitySpawner::__cordl_internal_get_SpawnDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnDelay;
}
constexpr float_t const& GlobalNamespace::GROneTimeEntitySpawner::__cordl_internal_get_SpawnDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnDelay;
}
constexpr void GlobalNamespace::GROneTimeEntitySpawner::__cordl_internal_set_SpawnDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpawnDelay = value;
}
inline void GlobalNamespace::GROneTimeEntitySpawner::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GROneTimeEntitySpawner*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GROneTimeEntitySpawner::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GROneTimeEntitySpawner*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GROneTimeEntitySpawner::TrySpawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GROneTimeEntitySpawner*>(),
                        {"TrySpawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GROneTimeEntitySpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GROneTimeEntitySpawner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GROneTimeEntitySpawner* GlobalNamespace::GROneTimeEntitySpawner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GROneTimeEntitySpawner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GROneTimeEntitySpawner::GROneTimeEntitySpawner()   {
}

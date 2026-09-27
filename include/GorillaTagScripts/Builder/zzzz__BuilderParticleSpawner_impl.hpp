#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderParticleSpawner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderParticleSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallMonkeTrigger_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderParticleSpawner.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderParticleSpawner::*)()>(&::GorillaTagScripts::Builder::BuilderParticleSpawner::Start)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c22d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderParticleSpawner*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderParticleSpawner.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderParticleSpawner::*)()>(&::GorillaTagScripts::Builder::BuilderParticleSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5c22f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderParticleSpawner*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderParticleSpawner.TrySpawning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderParticleSpawner::*)()>(&::GorillaTagScripts::Builder::BuilderParticleSpawner::TrySpawning)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5c231f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderParticleSpawner*>(),
                        {"TrySpawning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderParticleSpawner.OnEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderParticleSpawner::*)()>(&::GorillaTagScripts::Builder::BuilderParticleSpawner::OnEnter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c23318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderParticleSpawner*>(),
                        {"OnEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderParticleSpawner.OnExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderParticleSpawner::*)()>(&::GorillaTagScripts::Builder::BuilderParticleSpawner::OnExit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c23328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderParticleSpawner*>(),
                        {"OnExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderParticleSpawner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderParticleSpawner::*)()>(&::GorillaTagScripts::Builder::BuilderParticleSpawner::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c23338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderParticleSpawner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_get_myPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_get_myPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr void GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPiece = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefab = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_get_cooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_get_cooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr void GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_set_cooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldown = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_get_lastSpawnTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSpawnTime;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_get_lastSpawnTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSpawnTime;
}
constexpr void GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_set_lastSpawnTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSpawnTime = value;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>& GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_get_spawnTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTrigger;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger> const& GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_get_spawnTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTrigger;
}
constexpr void GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_set_spawnTrigger(::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnTrigger = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_get_spawnOnEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnOnEnter;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_get_spawnOnEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnOnEnter;
}
constexpr void GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_set_spawnOnEnter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnOnEnter = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_get_spawnOnExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnOnExit;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_get_spawnOnExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnOnExit;
}
constexpr void GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_set_spawnOnExit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnOnExit = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_get_spawnLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_get_spawnLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnLocation;
}
constexpr void GorillaTagScripts::Builder::BuilderParticleSpawner::__cordl_internal_set_spawnLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnLocation = value;
}
inline void GorillaTagScripts::Builder::BuilderParticleSpawner::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderParticleSpawner*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderParticleSpawner::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderParticleSpawner*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderParticleSpawner::TrySpawning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderParticleSpawner*>(),
                        {"TrySpawning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderParticleSpawner::OnEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderParticleSpawner*>(),
                        {"OnEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderParticleSpawner::OnExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderParticleSpawner*>(),
                        {"OnExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderParticleSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderParticleSpawner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderParticleSpawner* GorillaTagScripts::Builder::BuilderParticleSpawner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderParticleSpawner*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderParticleSpawner::BuilderParticleSpawner()   {
}

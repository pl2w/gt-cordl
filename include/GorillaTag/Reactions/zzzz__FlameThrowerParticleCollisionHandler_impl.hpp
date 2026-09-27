#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/FlameThrowerParticleCollisionHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Reactions/zzzz__FlameThrowerParticleCollisionHandler_def.hpp"
#include "GlobalNamespace/zzzz__SinglePool_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleCollisionEvent_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::*)()>(&::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::OnEnable)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x5d3fa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler.OnParticleCollision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::*)(::UnityEngine::GameObject*)>(&::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::OnParticleCollision)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5d3fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler*>(),
                        {"OnParticleCollision", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::*)()>(&::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d40150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__maxParticleHitReactionRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxParticleHitReactionRate;
}
constexpr float_t const& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__maxParticleHitReactionRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxParticleHitReactionRate;
}
constexpr void GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_set__maxParticleHitReactionRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxParticleHitReactionRate = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__prefabToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefabToSpawn;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__prefabToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefabToSpawn;
}
constexpr void GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_set__prefabToSpawn(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prefabToSpawn = value;
}
constexpr float_t& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__extinguishAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extinguishAmount;
}
constexpr float_t const& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__extinguishAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extinguishAmount;
}
constexpr void GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_set__extinguishAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____extinguishAmount = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__particleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__particleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particleSystem;
}
constexpr void GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____particleSystem = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__collisionEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collisionEvents;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>* const& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__collisionEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collisionEvents;
}
constexpr void GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_set__collisionEvents(::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collisionEvents = value;
}
constexpr bool& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__hasPrefabToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasPrefabToSpawn;
}
constexpr bool const& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__hasPrefabToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasPrefabToSpawn;
}
constexpr void GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_set__hasPrefabToSpawn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasPrefabToSpawn = value;
}
constexpr bool& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__isPrefabInPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPrefabInPool;
}
constexpr bool const& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__isPrefabInPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPrefabInPool;
}
constexpr void GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_set__isPrefabInPool(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isPrefabInPool = value;
}
constexpr double_t& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__lastCollisionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastCollisionTime;
}
constexpr double_t const& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__lastCollisionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastCollisionTime;
}
constexpr void GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_set__lastCollisionTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastCollisionTime = value;
}
constexpr ::GlobalNamespace::SinglePool*& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
constexpr ::GlobalNamespace::SinglePool* const& GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_get__pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
constexpr void GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::__cordl_internal_set__pool(::GlobalNamespace::SinglePool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pool = value;
}
inline void GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::OnParticleCollision(::UnityEngine::GameObject*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler*>(),
                        {"OnParticleCollision", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler* GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler::FlameThrowerParticleCollisionHandler()   {
}

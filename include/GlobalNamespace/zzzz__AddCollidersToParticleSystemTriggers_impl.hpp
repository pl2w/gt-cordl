#pragma once
// IWYU pragma private; include "GlobalNamespace/AddCollidersToParticleSystemTriggers.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AddCollidersToParticleSystemTriggers_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AddCollidersToParticleSystemTriggers.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AddCollidersToParticleSystemTriggers::*)()>(&::GlobalNamespace::AddCollidersToParticleSystemTriggers::Update)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x579f3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddCollidersToParticleSystemTriggers*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddCollidersToParticleSystemTriggers._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AddCollidersToParticleSystemTriggers::*)()>(&::GlobalNamespace::AddCollidersToParticleSystemTriggers::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579f594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddCollidersToParticleSystemTriggers*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::AddCollidersToParticleSystemTriggers::__cordl_internal_get_collidersToAdd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersToAdd;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::AddCollidersToParticleSystemTriggers::__cordl_internal_get_collidersToAdd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersToAdd;
}
constexpr void GlobalNamespace::AddCollidersToParticleSystemTriggers::__cordl_internal_set_collidersToAdd(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidersToAdd = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::AddCollidersToParticleSystemTriggers::__cordl_internal_get_particleSystemToUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystemToUpdate;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::AddCollidersToParticleSystemTriggers::__cordl_internal_get_particleSystemToUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystemToUpdate;
}
constexpr void GlobalNamespace::AddCollidersToParticleSystemTriggers::__cordl_internal_set_particleSystemToUpdate(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleSystemToUpdate = value;
}
constexpr int32_t& GlobalNamespace::AddCollidersToParticleSystemTriggers::__cordl_internal_get_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr int32_t const& GlobalNamespace::AddCollidersToParticleSystemTriggers::__cordl_internal_get_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr void GlobalNamespace::AddCollidersToParticleSystemTriggers::__cordl_internal_set_count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___count = value;
}
constexpr int32_t& GlobalNamespace::AddCollidersToParticleSystemTriggers::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& GlobalNamespace::AddCollidersToParticleSystemTriggers::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GlobalNamespace::AddCollidersToParticleSystemTriggers::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
inline void GlobalNamespace::AddCollidersToParticleSystemTriggers::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddCollidersToParticleSystemTriggers*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AddCollidersToParticleSystemTriggers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddCollidersToParticleSystemTriggers*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AddCollidersToParticleSystemTriggers* GlobalNamespace::AddCollidersToParticleSystemTriggers::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AddCollidersToParticleSystemTriggers*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AddCollidersToParticleSystemTriggers::AddCollidersToParticleSystemTriggers()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnWorldEffectsTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnWorldEffectsTrigger_def.hpp"
#include "GorillaTag/Reactions/zzzz__SpawnWorldEffects_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpawnWorldEffectsTrigger.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnWorldEffectsTrigger::*)()>(&::GlobalNamespace::SpawnWorldEffectsTrigger::OnEnable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b206b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnWorldEffectsTrigger*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnWorldEffectsTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnWorldEffectsTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SpawnWorldEffectsTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b20754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnWorldEffectsTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnWorldEffectsTrigger.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnWorldEffectsTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SpawnWorldEffectsTrigger::OnTriggerStay)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b207a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnWorldEffectsTrigger*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnWorldEffectsTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnWorldEffectsTrigger::*)()>(&::GlobalNamespace::SpawnWorldEffectsTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b20810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnWorldEffectsTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>& GlobalNamespace::SpawnWorldEffectsTrigger::__cordl_internal_get_swe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swe;
}
constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects> const& GlobalNamespace::SpawnWorldEffectsTrigger::__cordl_internal_get_swe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swe;
}
constexpr void GlobalNamespace::SpawnWorldEffectsTrigger::__cordl_internal_set_swe(::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swe = value;
}
constexpr float_t& GlobalNamespace::SpawnWorldEffectsTrigger::__cordl_internal_get_spawnTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTime;
}
constexpr float_t const& GlobalNamespace::SpawnWorldEffectsTrigger::__cordl_internal_get_spawnTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTime;
}
constexpr void GlobalNamespace::SpawnWorldEffectsTrigger::__cordl_internal_set_spawnTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnTime = value;
}
constexpr float_t& GlobalNamespace::SpawnWorldEffectsTrigger::__cordl_internal_get_spawnCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnCooldown;
}
constexpr float_t const& GlobalNamespace::SpawnWorldEffectsTrigger::__cordl_internal_get_spawnCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnCooldown;
}
constexpr void GlobalNamespace::SpawnWorldEffectsTrigger::__cordl_internal_set_spawnCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnCooldown = value;
}
inline void GlobalNamespace::SpawnWorldEffectsTrigger::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnWorldEffectsTrigger*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpawnWorldEffectsTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnWorldEffectsTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SpawnWorldEffectsTrigger::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnWorldEffectsTrigger*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SpawnWorldEffectsTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnWorldEffectsTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpawnWorldEffectsTrigger* GlobalNamespace::SpawnWorldEffectsTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpawnWorldEffectsTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpawnWorldEffectsTrigger::SpawnWorldEffectsTrigger()   {
}

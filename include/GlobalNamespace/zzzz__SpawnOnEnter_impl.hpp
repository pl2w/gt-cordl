#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnOnEnter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnOnEnter_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpawnOnEnter.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnOnEnter::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SpawnOnEnter::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5dfdeec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnOnEnter*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnOnEnter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnOnEnter::*)()>(&::GlobalNamespace::SpawnOnEnter::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5dfdfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnOnEnter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SpawnOnEnter::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SpawnOnEnter::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void GlobalNamespace::SpawnOnEnter::__cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefab = value;
}
constexpr float_t& GlobalNamespace::SpawnOnEnter::__cordl_internal_get_cooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr float_t const& GlobalNamespace::SpawnOnEnter::__cordl_internal_get_cooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr void GlobalNamespace::SpawnOnEnter::__cordl_internal_set_cooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldown = value;
}
constexpr float_t& GlobalNamespace::SpawnOnEnter::__cordl_internal_get_lastSpawnTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSpawnTime;
}
constexpr float_t const& GlobalNamespace::SpawnOnEnter::__cordl_internal_get_lastSpawnTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSpawnTime;
}
constexpr void GlobalNamespace::SpawnOnEnter::__cordl_internal_set_lastSpawnTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSpawnTime = value;
}
inline void GlobalNamespace::SpawnOnEnter::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnOnEnter*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SpawnOnEnter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnOnEnter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpawnOnEnter* GlobalNamespace::SpawnOnEnter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpawnOnEnter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpawnOnEnter::SpawnOnEnter()   {
}

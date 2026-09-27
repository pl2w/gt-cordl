#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBarrierSpectral.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRBarrierSpectral_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameHitData_def.hpp"
#include "GlobalNamespace/zzzz__GameHitType_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameHittable_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRBarrierSpectral.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBarrierSpectral::*)()>(&::GlobalNamespace::GRBarrierSpectral::Awake)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5872308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBarrierSpectral.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBarrierSpectral::*)()>(&::GlobalNamespace::GRBarrierSpectral::OnEntityInit)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5872340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBarrierSpectral.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBarrierSpectral::*)()>(&::GlobalNamespace::GRBarrierSpectral::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58723fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBarrierSpectral.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBarrierSpectral::*)(int64_t, int64_t)>(&::GlobalNamespace::GRBarrierSpectral::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5872400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBarrierSpectral.OnImpact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBarrierSpectral::*)(::GlobalNamespace::GameHitType)>(&::GlobalNamespace::GRBarrierSpectral::OnImpact)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58724dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"OnImpact", {}, {::i2c::type_of<::GlobalNamespace::GameHitType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBarrierSpectral.ChangeHealth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBarrierSpectral::*)(int32_t)>(&::GlobalNamespace::GRBarrierSpectral::ChangeHealth)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5872408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"ChangeHealth", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBarrierSpectral.IsHitValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRBarrierSpectral::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GRBarrierSpectral::IsHitValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5872620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBarrierSpectral.OnHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBarrierSpectral::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GRBarrierSpectral::OnHit)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5872628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBarrierSpectral.RefreshVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBarrierSpectral::*)()>(&::GlobalNamespace::GRBarrierSpectral::RefreshVisuals)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5872538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"RefreshVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBarrierSpectral._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBarrierSpectral::*)()>(&::GlobalNamespace::GRBarrierSpectral::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58726ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GlobalNamespace::GRBarrierSpectral::__cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_visualMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualMesh;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_visualMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualMesh;
}
constexpr void GlobalNamespace::GRBarrierSpectral::__cordl_internal_set_visualMesh(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visualMesh = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collider;
}
constexpr void GlobalNamespace::GRBarrierSpectral::__cordl_internal_set_collider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collider = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRBarrierSpectral::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_onDamageClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDamageClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_onDamageClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDamageClip;
}
constexpr void GlobalNamespace::GRBarrierSpectral::__cordl_internal_set_onDamageClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDamageClip = value;
}
constexpr float_t& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_onDamageVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDamageVolume;
}
constexpr float_t const& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_onDamageVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDamageVolume;
}
constexpr void GlobalNamespace::GRBarrierSpectral::__cordl_internal_set_onDamageVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDamageVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_onDestroyedClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDestroyedClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_onDestroyedClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDestroyedClip;
}
constexpr void GlobalNamespace::GRBarrierSpectral::__cordl_internal_set_onDestroyedClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDestroyedClip = value;
}
constexpr float_t& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_onDestroyedVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDestroyedVolume;
}
constexpr float_t const& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_onDestroyedVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDestroyedVolume;
}
constexpr void GlobalNamespace::GRBarrierSpectral::__cordl_internal_set_onDestroyedVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDestroyedVolume = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_hitFx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitFx;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_hitFx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitFx;
}
constexpr void GlobalNamespace::GRBarrierSpectral::__cordl_internal_set_hitFx(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitFx = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_destroyedFx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyedFx;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_destroyedFx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyedFx;
}
constexpr void GlobalNamespace::GRBarrierSpectral::__cordl_internal_set_destroyedFx(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyedFx = value;
}
constexpr int32_t& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_maxHealth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHealth;
}
constexpr int32_t const& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_maxHealth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHealth;
}
constexpr void GlobalNamespace::GRBarrierSpectral::__cordl_internal_set_maxHealth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHealth = value;
}
constexpr int32_t& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_health()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___health;
}
constexpr int32_t const& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_health() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___health;
}
constexpr void GlobalNamespace::GRBarrierSpectral::__cordl_internal_set_health(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___health = value;
}
constexpr int32_t& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_lastVisualUpdateHealth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVisualUpdateHealth;
}
constexpr int32_t const& GlobalNamespace::GRBarrierSpectral::__cordl_internal_get_lastVisualUpdateHealth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVisualUpdateHealth;
}
constexpr void GlobalNamespace::GRBarrierSpectral::__cordl_internal_set_lastVisualUpdateHealth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastVisualUpdateHealth = value;
}
inline void GlobalNamespace::GRBarrierSpectral::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBarrierSpectral::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBarrierSpectral::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBarrierSpectral::OnEntityStateChange(int64_t  prevState, int64_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, newState);
}
inline void GlobalNamespace::GRBarrierSpectral::OnImpact(::GlobalNamespace::GameHitType  hitType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"OnImpact", {}, {::i2c::type_of<::GlobalNamespace::GameHitType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitType);
}
inline void GlobalNamespace::GRBarrierSpectral::ChangeHealth(int32_t  nextHealth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"ChangeHealth", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextHealth);
}
inline bool GlobalNamespace::GRBarrierSpectral::IsHitValid(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GRBarrierSpectral::OnHit(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GRBarrierSpectral::RefreshVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {"RefreshVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBarrierSpectral::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBarrierSpectral*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRBarrierSpectral* GlobalNamespace::GRBarrierSpectral::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRBarrierSpectral*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GRBarrierSpectral::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GRBarrierSpectral::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameHittable"
constexpr  GlobalNamespace::GRBarrierSpectral::operator ::GlobalNamespace::IGameHittable*() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameHittable"
constexpr ::GlobalNamespace::IGameHittable* GlobalNamespace::GRBarrierSpectral::i___GlobalNamespace__IGameHittable() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRBarrierSpectral::GRBarrierSpectral()   {
}

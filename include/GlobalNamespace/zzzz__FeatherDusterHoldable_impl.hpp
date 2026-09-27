#pragma once
// IWYU pragma private; include "GlobalNamespace/FeatherDusterHoldable.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FeatherDusterHoldable_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FeatherDusterHoldable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FeatherDusterHoldable::*)()>(&::GlobalNamespace::FeatherDusterHoldable::Awake)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e074a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FeatherDusterHoldable*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FeatherDusterHoldable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FeatherDusterHoldable::*)()>(&::GlobalNamespace::FeatherDusterHoldable::OnEnable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e074ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FeatherDusterHoldable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FeatherDusterHoldable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FeatherDusterHoldable::*)()>(&::GlobalNamespace::FeatherDusterHoldable::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e07548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FeatherDusterHoldable*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FeatherDusterHoldable.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FeatherDusterHoldable::*)()>(&::GlobalNamespace::FeatherDusterHoldable::SliceUpdate)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5e07554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FeatherDusterHoldable*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FeatherDusterHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FeatherDusterHoldable::*)()>(&::GlobalNamespace::FeatherDusterHoldable::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e0770c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FeatherDusterHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_collisionLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionLayer;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_collisionLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionLayer;
}
constexpr void GlobalNamespace::FeatherDusterHoldable::__cordl_internal_set_collisionLayer(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionLayer = value;
}
constexpr float_t& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_overlapSphereRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapSphereRadius;
}
constexpr float_t const& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_overlapSphereRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapSphereRadius;
}
constexpr void GlobalNamespace::FeatherDusterHoldable::__cordl_internal_set_overlapSphereRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapSphereRadius = value;
}
constexpr float_t& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_collideMinSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collideMinSpeed;
}
constexpr float_t const& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_collideMinSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collideMinSpeed;
}
constexpr void GlobalNamespace::FeatherDusterHoldable::__cordl_internal_set_collideMinSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collideMinSpeed = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_particleFx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleFx;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_particleFx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleFx;
}
constexpr void GlobalNamespace::FeatherDusterHoldable::__cordl_internal_set_particleFx(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleFx = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_soundBankPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBankPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_soundBankPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBankPlayer;
}
constexpr void GlobalNamespace::FeatherDusterHoldable::__cordl_internal_set_soundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundBankPlayer = value;
}
constexpr float_t& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_soundCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundCooldown;
}
constexpr float_t const& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_soundCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundCooldown;
}
constexpr void GlobalNamespace::FeatherDusterHoldable::__cordl_internal_set_soundCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundCooldown = value;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_emissionModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissionModule;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_emissionModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissionModule;
}
constexpr void GlobalNamespace::FeatherDusterHoldable::__cordl_internal_set_emissionModule(::GlobalNamespace::ParticleSystem_EmissionModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emissionModule = value;
}
constexpr float_t& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_initialRateOverTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialRateOverTime;
}
constexpr float_t const& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_initialRateOverTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialRateOverTime;
}
constexpr void GlobalNamespace::FeatherDusterHoldable::__cordl_internal_set_initialRateOverTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialRateOverTime = value;
}
constexpr float_t& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_timeSinceLastSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSinceLastSound;
}
constexpr float_t const& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_timeSinceLastSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSinceLastSound;
}
constexpr void GlobalNamespace::FeatherDusterHoldable::__cordl_internal_set_timeSinceLastSound(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSinceLastSound = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_lastWorldPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWorldPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_lastWorldPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWorldPos;
}
constexpr void GlobalNamespace::FeatherDusterHoldable::__cordl_internal_set_lastWorldPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastWorldPos = value;
}
constexpr float_t& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_lastSliceTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSliceTime;
}
constexpr float_t const& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_lastSliceTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSliceTime;
}
constexpr void GlobalNamespace::FeatherDusterHoldable::__cordl_internal_set_lastSliceTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSliceTime = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_colliderResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderResult;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::FeatherDusterHoldable::__cordl_internal_get_colliderResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderResult;
}
constexpr void GlobalNamespace::FeatherDusterHoldable::__cordl_internal_set_colliderResult(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderResult = value;
}
inline void GlobalNamespace::FeatherDusterHoldable::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FeatherDusterHoldable*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FeatherDusterHoldable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FeatherDusterHoldable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FeatherDusterHoldable::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FeatherDusterHoldable*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FeatherDusterHoldable::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FeatherDusterHoldable*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FeatherDusterHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FeatherDusterHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FeatherDusterHoldable* GlobalNamespace::FeatherDusterHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FeatherDusterHoldable*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::FeatherDusterHoldable::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::FeatherDusterHoldable::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FeatherDusterHoldable::FeatherDusterHoldable()   {
}

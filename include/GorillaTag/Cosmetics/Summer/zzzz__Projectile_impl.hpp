#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/Summer/Projectile.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/Summer/zzzz__Projectile_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__IProjectile_def.hpp"
#include "GorillaTag/Reactions/zzzz__SpawnWorldEffects_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__ConstantForce_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::Summer::Projectile.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Summer::Projectile::*)()>(&::GorillaTag::Cosmetics::Summer::Projectile::Awake)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5da74ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Summer::Projectile.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Summer::Projectile::*)()>(&::GorillaTag::Cosmetics::Summer::Projectile::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5da7540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Summer::Projectile.Launch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Summer::Projectile::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, ::GlobalNamespace::VRRig*, int32_t)>(&::GorillaTag::Cosmetics::Summer::Projectile::Launch)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5da7544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"Launch", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Summer::Projectile.IsTagValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::Summer::Projectile::*)(::UnityEngine::GameObject*)>(&::GorillaTag::Cosmetics::Summer::Projectile::IsTagValid)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5da77d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"IsTagValid", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Summer::Projectile.HandleImpact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Summer::Projectile::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::Summer::Projectile::HandleImpact)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5da7840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"HandleImpact", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Summer::Projectile.GetColliderHitInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Summer::Projectile::*)(::UnityEngine::Collider*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaTag::Cosmetics::Summer::Projectile::GetColliderHitInfo)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5da7da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"GetColliderHitInfo", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Summer::Projectile.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Summer::Projectile::*)(::UnityEngine::Collision*)>(&::GorillaTag::Cosmetics::Summer::Projectile::OnCollisionEnter)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5da805c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Summer::Projectile.OnCollisionStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Summer::Projectile::*)(::UnityEngine::Collision*)>(&::GorillaTag::Cosmetics::Summer::Projectile::OnCollisionStay)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5da8120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Summer::Projectile.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Summer::Projectile::*)(::UnityEngine::Collider*)>(&::GorillaTag::Cosmetics::Summer::Projectile::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5da81e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Summer::Projectile.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Summer::Projectile::*)(::UnityEngine::Collider*)>(&::GorillaTag::Cosmetics::Summer::Projectile::OnTriggerStay)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5da8250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Summer::Projectile.SpawnImpactEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Summer::Projectile::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::Summer::Projectile::SpawnImpactEffect)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5da7a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"SpawnImpactEffect", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Summer::Projectile.DestroyProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Summer::Projectile::*)()>(&::GorillaTag::Cosmetics::Summer::Projectile::DestroyProjectile)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5da7c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"DestroyProjectile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::Summer::Projectile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::Summer::Projectile::*)()>(&::GorillaTag::Cosmetics::Summer::Projectile::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5da82e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_impactEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_impactEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffect;
}
constexpr void GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_set_impactEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactEffect = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_launchAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_launchAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchAudio;
}
constexpr void GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_set_launchAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchAudio = value;
}
constexpr ::UnityEngine::LayerMask& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_collisionLayerMasks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionLayerMasks;
}
constexpr ::UnityEngine::LayerMask const& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_collisionLayerMasks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionLayerMasks;
}
constexpr void GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_set_collisionLayerMasks(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionLayerMasks = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_collisionTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionTags;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_collisionTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionTags;
}
constexpr void GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_set_collisionTags(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionTags = value;
}
constexpr bool& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_destroyOnCollisionEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyOnCollisionEnter;
}
constexpr bool const& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_destroyOnCollisionEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyOnCollisionEnter;
}
constexpr void GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_set_destroyOnCollisionEnter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyOnCollisionEnter = value;
}
constexpr float_t& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_destroyDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyDelay;
}
constexpr float_t const& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_destroyDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyDelay;
}
constexpr void GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_set_destroyDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyDelay = value;
}
constexpr float_t& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_impactEffectOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffectOffset;
}
constexpr float_t const& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_impactEffectOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffectOffset;
}
constexpr void GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_set_impactEffectOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactEffectOffset = value;
}
constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_spawnWorldEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnWorldEffects;
}
constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects> const& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_spawnWorldEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnWorldEffects;
}
constexpr void GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_set_spawnWorldEffects(::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnWorldEffects = value;
}
constexpr ::UnityW<::UnityEngine::ConstantForce>& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_forceComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceComponent;
}
constexpr ::UnityW<::UnityEngine::ConstantForce> const& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_forceComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceComponent;
}
constexpr void GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_set_forceComponent(::UnityW<::UnityEngine::ConstantForce>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceComponent = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_onLaunchShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLaunchShared;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_onLaunchShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLaunchShared;
}
constexpr void GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_set_onLaunchShared(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onLaunchShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_onImpactShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onImpactShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_onImpactShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onImpactShared;
}
constexpr void GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_set_onImpactShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onImpactShared = value;
}
constexpr bool& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_impactEffectSpawned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffectSpawned;
}
constexpr bool const& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_impactEffectSpawned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffectSpawned;
}
constexpr void GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_set_impactEffectSpawned(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactEffectSpawned = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_get_rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbody;
}
constexpr void GorillaTag::Cosmetics::Summer::Projectile::__cordl_internal_set_rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidbody = value;
}
inline void GorillaTag::Cosmetics::Summer::Projectile::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::Summer::Projectile::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::Summer::Projectile::Launch(::UnityEngine::Vector3  startPosition, ::UnityEngine::Quaternion  startRotation, ::UnityEngine::Vector3  velocity, float_t  chargeFrac, ::GlobalNamespace::VRRig*  ownerRig, int32_t  progressStep)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"Launch", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startPosition, startRotation, velocity, chargeFrac, ownerRig, progressStep);
}
inline bool GorillaTag::Cosmetics::Summer::Projectile::IsTagValid(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"IsTagValid", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline void GorillaTag::Cosmetics::Summer::Projectile::HandleImpact(::UnityEngine::GameObject*  hitObject, ::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"HandleImpact", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitObject, hitPosition, hitNormal);
}
inline void GorillaTag::Cosmetics::Summer::Projectile::GetColliderHitInfo(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"GetColliderHitInfo", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, position, normal);
}
inline void GorillaTag::Cosmetics::Summer::Projectile::OnCollisionEnter(::UnityEngine::Collision*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Cosmetics::Summer::Projectile::OnCollisionStay(::UnityEngine::Collision*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Cosmetics::Summer::Projectile::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Cosmetics::Summer::Projectile::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Cosmetics::Summer::Projectile::SpawnImpactEffect(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"SpawnImpactEffect", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab, position, normal);
}
inline void GorillaTag::Cosmetics::Summer::Projectile::DestroyProjectile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {"DestroyProjectile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::Summer::Projectile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::Summer::Projectile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::Summer::Projectile* GorillaTag::Cosmetics::Summer::Projectile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::Summer::Projectile*>());
}
/// @brief Convert operator to "::GorillaTag::Cosmetics::IProjectile"
constexpr  GorillaTag::Cosmetics::Summer::Projectile::operator ::GorillaTag::Cosmetics::IProjectile*() noexcept {
return static_cast<::GorillaTag::Cosmetics::IProjectile*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::Cosmetics::IProjectile"
constexpr ::GorillaTag::Cosmetics::IProjectile* GorillaTag::Cosmetics::Summer::Projectile::i___GorillaTag__Cosmetics__IProjectile() noexcept {
return static_cast<::GorillaTag::Cosmetics::IProjectile*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::Summer::Projectile::Projectile()   {
}

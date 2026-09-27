#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderProjectile.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_AOEKnockbackConfig_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderProjectile_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderProjectileLauncher_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderProjectile_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__ConstantForce_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile.get_launchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTagScripts::Builder::BuilderProjectile::*)()>(&::GorillaTagScripts::Builder::BuilderProjectile::get_launchPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c2c854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"get_launchPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile.set_launchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile::*)(::UnityEngine::Vector3)>(&::GorillaTagScripts::Builder::BuilderProjectile::set_launchPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c2c860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"set_launchPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile.add_OnImpact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile::*)(::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*)>(&::GorillaTagScripts::Builder::BuilderProjectile::add_OnImpact)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c2c86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"add_OnImpact", {}, {::i2c::type_of<::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile.remove_OnImpact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile::*)(::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*)>(&::GorillaTagScripts::Builder::BuilderProjectile::remove_OnImpact)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c2c908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"remove_OnImpact", {}, {::i2c::type_of<::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile.Launch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GorillaTagScripts::Builder::BuilderProjectileLauncher*, int32_t, float_t, int32_t)>(&::GorillaTagScripts::Builder::BuilderProjectile::Launch)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x5c2c9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"Launch", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile::*)()>(&::GorillaTagScripts::Builder::BuilderProjectile::Awake)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c2d198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile.Deactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile::*)()>(&::GorillaTagScripts::Builder::BuilderProjectile::Deactivate)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5c2cf7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"Deactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile.SpawnImpactEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaTagScripts::Builder::BuilderProjectile::SpawnImpactEffect)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5c2d24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"SpawnImpactEffect", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile.ApplyHitKnockback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile::*)(::UnityEngine::Vector3)>(&::GorillaTagScripts::Builder::BuilderProjectile::ApplyHitKnockback)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5c2d494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"ApplyHitKnockback", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile::*)()>(&::GorillaTagScripts::Builder::BuilderProjectile::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c2d848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile::*)()>(&::GorillaTagScripts::Builder::BuilderProjectile::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c2d854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile.UpdateProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile::*)()>(&::GorillaTagScripts::Builder::BuilderProjectile::UpdateProjectile)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c2d968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"UpdateProjectile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile::*)(::UnityEngine::Collision*)>(&::GorillaTagScripts::Builder::BuilderProjectile::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5c2da4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile.OnCollisionStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile::*)(::UnityEngine::Collision*)>(&::GorillaTagScripts::Builder::BuilderProjectile::OnCollisionStay)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5c2dc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::Builder::BuilderProjectile::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5c2de54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile::*)()>(&::GorillaTagScripts::Builder::BuilderProjectile::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c2dff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderProjectileLauncher>& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_projectileSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileSource;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderProjectileLauncher> const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_projectileSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileSource;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_projectileSource(::UnityW<::GorillaTagScripts::Builder::BuilderProjectileLauncher>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileSource = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_surfaceImpactEffectPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceImpactEffectPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_surfaceImpactEffectPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceImpactEffectPrefab;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_surfaceImpactEffectPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceImpactEffectPrefab = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_impactEffectOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffectOffset;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_impactEffectOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffectOffset;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_impactEffectOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactEffectOffset = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_lifeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifeTime;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_lifeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifeTime;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_lifeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lifeTime = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_faceDirectionOfTravel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceDirectionOfTravel;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_faceDirectionOfTravel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceDirectionOfTravel;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_faceDirectionOfTravel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceDirectionOfTravel = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_particleLaunched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleLaunched;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_particleLaunched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleLaunched;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_particleLaunched(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleLaunched = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_timeCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeCreated;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_timeCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeCreated;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_timeCreated(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeCreated = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get__launchPosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get__launchPosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchPosition_k__BackingField;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set__launchPosition_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____launchPosition_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_projectileRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_projectileRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileRigidbody;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_projectileRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileRigidbody = value;
}
constexpr int32_t& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_projectileId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileId;
}
constexpr int32_t const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_projectileId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileId;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_projectileId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileId = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_initialScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialScale;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_initialScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialScale;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_initialScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialScale = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_previousPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_previousPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousPosition;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_previousPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousPosition = value;
}
constexpr ::System::Nullable_1<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig>& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_aoeKnockbackConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aoeKnockbackConfig;
}
constexpr ::System::Nullable_1<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig> const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_aoeKnockbackConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aoeKnockbackConfig;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_aoeKnockbackConfig(::System::Nullable_1<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aoeKnockbackConfig = value;
}
constexpr ::System::Nullable_1<float_t>& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_impactSoundVolumeOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactSoundVolumeOverride;
}
constexpr ::System::Nullable_1<float_t> const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_impactSoundVolumeOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactSoundVolumeOverride;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_impactSoundVolumeOverride(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactSoundVolumeOverride = value;
}
constexpr ::System::Nullable_1<float_t>& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_impactSoundPitchOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactSoundPitchOverride;
}
constexpr ::System::Nullable_1<float_t> const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_impactSoundPitchOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactSoundPitchOverride;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_impactSoundPitchOverride(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactSoundPitchOverride = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_impactEffectScaleMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffectScaleMultiplier;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_impactEffectScaleMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffectScaleMultiplier;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_impactEffectScaleMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactEffectScaleMultiplier = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_gravityMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityMultiplier;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_gravityMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityMultiplier;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_gravityMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityMultiplier = value;
}
constexpr ::UnityW<::UnityEngine::ConstantForce>& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_forceComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceComponent;
}
constexpr ::UnityW<::UnityEngine::ConstantForce> const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_forceComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceComponent;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_forceComponent(::UnityW<::UnityEngine::ConstantForce>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceComponent = value;
}
constexpr ::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_OnImpact()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnImpact;
}
constexpr ::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent* const& GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_get_OnImpact() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnImpact;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectile::__cordl_internal_set_OnImpact(::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnImpact = value;
}
inline ::UnityEngine::Vector3 GorillaTagScripts::Builder::BuilderProjectile::get_launchPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"get_launchPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderProjectile::set_launchPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"set_launchPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::BuilderProjectile::add_OnImpact(::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"add_OnImpact", {}, {::i2c::type_of<::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::BuilderProjectile::remove_OnImpact(::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"remove_OnImpact", {}, {::i2c::type_of<::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::BuilderProjectile::Launch(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, ::GorillaTagScripts::Builder::BuilderProjectileLauncher*  sourceObject, int32_t  projectileCount, float_t  scale, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"Launch", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, velocity, sourceObject, projectileCount, scale, timeStamp);
}
inline void GorillaTagScripts::Builder::BuilderProjectile::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderProjectile::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"Deactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderProjectile::SpawnImpactEffect(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"SpawnImpactEffect", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab, position, normal);
}
inline void GorillaTagScripts::Builder::BuilderProjectile::ApplyHitKnockback(::UnityEngine::Vector3  hitNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"ApplyHitKnockback", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitNormal);
}
inline void GorillaTagScripts::Builder::BuilderProjectile::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderProjectile::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderProjectile::UpdateProjectile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"UpdateProjectile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderProjectile::OnCollisionEnter(::UnityEngine::Collision*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::Builder::BuilderProjectile::OnCollisionStay(::UnityEngine::Collision*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::Builder::BuilderProjectile::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::Builder::BuilderProjectile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderProjectile* GorillaTagScripts::Builder::BuilderProjectile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderProjectile*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderProjectile::BuilderProjectile()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent::*)(::System::Object*, ::System::IntPtr)>(&::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5c2e018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent::*)(::GorillaTagScripts::Builder::BuilderProjectile*, ::UnityEngine::Vector3, ::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c2e124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent::*)(::GorillaTagScripts::Builder::BuilderProjectile*, ::UnityEngine::Vector3, ::GlobalNamespace::NetPlayer*, ::System::AsyncCallback*, ::System::Object*)>(&::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c2e138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent::*)(::System::IAsyncResult*)>(&::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c2e1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent::Invoke(::GorillaTagScripts::Builder::BuilderProjectile*  projectile, ::UnityEngine::Vector3  impactPos, ::GlobalNamespace::NetPlayer*  hitPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, impactPos, hitPlayer);
}
inline ::System::IAsyncResult* GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent::BeginInvoke(::GorillaTagScripts::Builder::BuilderProjectile*  projectile, ::UnityEngine::Vector3  impactPos, ::GlobalNamespace::NetPlayer*  hitPlayer, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, projectile, impactPos, hitPlayer, callback, object);
}
inline void GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent* GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent::BuilderProjectile_ProjectileImpactEvent()   {
}

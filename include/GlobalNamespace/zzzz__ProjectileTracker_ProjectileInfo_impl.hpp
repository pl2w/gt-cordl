#pragma once
// IWYU pragma private; include "GlobalNamespace/ProjectileTracker_ProjectileInfo.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ProjectileTracker_ProjectileInfo_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProjectileTracker_ProjectileInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProjectileTracker_ProjectileInfo::*)(double_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::GlobalNamespace::SlingshotProjectile*)>(&::GlobalNamespace::ProjectileTracker_ProjectileInfo::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ad9360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileTracker_ProjectileInfo>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProjectileTracker_ProjectileInfo::_ctor(double_t  newTime, ::UnityEngine::Vector3  newVel, ::UnityEngine::Vector3  origin, float_t  newScale, ::GlobalNamespace::SlingshotProjectile*  projectile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileTracker_ProjectileInfo>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newTime, newVel, origin, newScale, projectile);
}
// Ctor Parameters [CppParam { name: "timeLaunched", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shotVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "launchOrigin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "projectileInstance", ty: "::UnityW<::GlobalNamespace::SlingshotProjectile>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasImpactOverride", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProjectileTracker_ProjectileInfo::ProjectileTracker_ProjectileInfo(double_t  timeLaunched, ::UnityEngine::Vector3  shotVelocity, ::UnityEngine::Vector3  launchOrigin, float_t  scale, ::UnityW<::GlobalNamespace::SlingshotProjectile>  projectileInstance, bool  hasImpactOverride) noexcept  {
this->timeLaunched = timeLaunched;
this->shotVelocity = shotVelocity;
this->launchOrigin = launchOrigin;
this->scale = scale;
this->projectileInstance = projectileInstance;
this->hasImpactOverride = hasImpactOverride;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProjectileTracker_ProjectileInfo::ProjectileTracker_ProjectileInfo()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameProjectileLauncher.hpp"
#include "GlobalNamespace/zzzz__IGameProjectileLauncher_def.hpp"
#include "GlobalNamespace/zzzz__GRRangedEnemyProjectile_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IGameProjectileLauncher.OnProjectileInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameProjectileLauncher::*)(::GlobalNamespace::GRRangedEnemyProjectile*)>(&::GlobalNamespace::IGameProjectileLauncher::OnProjectileInit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a6968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameProjectileLauncher*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameProjectileLauncher*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameProjectileLauncher.OnProjectileHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameProjectileLauncher::*)(::GlobalNamespace::GRRangedEnemyProjectile*, ::UnityEngine::Collision*)>(&::GlobalNamespace::IGameProjectileLauncher::OnProjectileHit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a696c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameProjectileLauncher*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameProjectileLauncher*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IGameProjectileLauncher::OnProjectileInit(::GlobalNamespace::GRRangedEnemyProjectile*  projectile)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameProjectileLauncher*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile);
}
inline void GlobalNamespace::IGameProjectileLauncher::OnProjectileHit(::GlobalNamespace::GRRangedEnemyProjectile*  projectile, ::UnityEngine::Collision*  collision)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameProjectileLauncher*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, collision);
}

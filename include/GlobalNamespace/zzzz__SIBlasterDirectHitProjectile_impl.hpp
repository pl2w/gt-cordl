#pragma once
// IWYU pragma private; include "GlobalNamespace/SIBlasterDirectHitProjectile.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIBlasterDirectHitProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetProjectileType_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIBlasterDirectHitProjectile.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterDirectHitProjectile::*)()>(&::GlobalNamespace::SIBlasterDirectHitProjectile::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57f6218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterDirectHitProjectile*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIBlasterDirectHitProjectile.LocalProjectileHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterDirectHitProjectile::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SIBlasterDirectHitProjectile::LocalProjectileHit)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x57f6270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterDirectHitProjectile*>(),
                        {"LocalProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIBlasterDirectHitProjectile.TriggerBlastDirectHitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterDirectHitProjectile::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SIBlasterDirectHitProjectile::TriggerBlastDirectHitPlayer)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x57f6860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterDirectHitProjectile*>(),
                        {"TriggerBlastDirectHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIBlasterDirectHitProjectile.NetworkedProjectileHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterDirectHitProjectile::*)(::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIBlasterDirectHitProjectile::NetworkedProjectileHit)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x57f6ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterDirectHitProjectile*>(),
                        {"NetworkedProjectileHit", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIBlasterDirectHitProjectile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterDirectHitProjectile::*)()>(&::GlobalNamespace::SIBlasterDirectHitProjectile::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57f6f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterDirectHitProjectile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>& GlobalNamespace::SIBlasterDirectHitProjectile::__cordl_internal_get_projectile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectile;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile> const& GlobalNamespace::SIBlasterDirectHitProjectile::__cordl_internal_get_projectile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectile;
}
constexpr void GlobalNamespace::SIBlasterDirectHitProjectile::__cordl_internal_set_projectile(::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectile = value;
}
constexpr float_t& GlobalNamespace::SIBlasterDirectHitProjectile::__cordl_internal_get_knockbackSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackSpeed;
}
constexpr float_t const& GlobalNamespace::SIBlasterDirectHitProjectile::__cordl_internal_get_knockbackSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackSpeed;
}
constexpr void GlobalNamespace::SIBlasterDirectHitProjectile::__cordl_internal_set_knockbackSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackSpeed = value;
}
constexpr float_t& GlobalNamespace::SIBlasterDirectHitProjectile::__cordl_internal_get_upwardsAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upwardsAngle;
}
constexpr float_t const& GlobalNamespace::SIBlasterDirectHitProjectile::__cordl_internal_get_upwardsAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upwardsAngle;
}
constexpr void GlobalNamespace::SIBlasterDirectHitProjectile::__cordl_internal_set_upwardsAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upwardsAngle = value;
}
inline void GlobalNamespace::SIBlasterDirectHitProjectile::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterDirectHitProjectile*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIBlasterDirectHitProjectile::LocalProjectileHit(::GlobalNamespace::SIPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterDirectHitProjectile*>(),
                        {"LocalProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::SIBlasterDirectHitProjectile::TriggerBlastDirectHitPlayer(::GlobalNamespace::SIPlayer*  playerHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterDirectHitProjectile*>(),
                        {"TriggerBlastDirectHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerHit);
}
inline void GlobalNamespace::SIBlasterDirectHitProjectile::NetworkedProjectileHit(::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterDirectHitProjectile*>(),
                        {"NetworkedProjectileHit", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::SIBlasterDirectHitProjectile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterDirectHitProjectile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIBlasterDirectHitProjectile* GlobalNamespace::SIBlasterDirectHitProjectile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIBlasterDirectHitProjectile*>());
}
/// @brief Convert operator to "::GlobalNamespace::SIGadgetProjectileType"
constexpr  GlobalNamespace::SIBlasterDirectHitProjectile::operator ::GlobalNamespace::SIGadgetProjectileType*() noexcept {
return static_cast<::GlobalNamespace::SIGadgetProjectileType*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::SIGadgetProjectileType"
constexpr ::GlobalNamespace::SIGadgetProjectileType* GlobalNamespace::SIBlasterDirectHitProjectile::i___GlobalNamespace__SIGadgetProjectileType() noexcept {
return static_cast<::GlobalNamespace::SIGadgetProjectileType*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIBlasterDirectHitProjectile::SIBlasterDirectHitProjectile()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/SIBlasterSprayProjectile.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIBlasterSprayProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIBlasterSprayProjectile.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterSprayProjectile::*)()>(&::GlobalNamespace::SIBlasterSprayProjectile::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57f8d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSprayProjectile*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIBlasterSprayProjectile.LocalProjectileHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterSprayProjectile::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SIBlasterSprayProjectile::LocalProjectileHit)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x57f8db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSprayProjectile*>(),
                        {"LocalProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIBlasterSprayProjectile.TriggerBlastDirectHitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterSprayProjectile::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SIBlasterSprayProjectile::TriggerBlastDirectHitPlayer)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x57f9040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSprayProjectile*>(),
                        {"TriggerBlastDirectHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIBlasterSprayProjectile.NetworkedProjectileHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterSprayProjectile::*)(::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIBlasterSprayProjectile::NetworkedProjectileHit)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x57f9548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSprayProjectile*>(),
                        {"NetworkedProjectileHit", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIBlasterSprayProjectile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterSprayProjectile::*)()>(&::GlobalNamespace::SIBlasterSprayProjectile::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57f9944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSprayProjectile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>& GlobalNamespace::SIBlasterSprayProjectile::__cordl_internal_get_projectile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectile;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile> const& GlobalNamespace::SIBlasterSprayProjectile::__cordl_internal_get_projectile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectile;
}
constexpr void GlobalNamespace::SIBlasterSprayProjectile::__cordl_internal_set_projectile(::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectile = value;
}
constexpr float_t& GlobalNamespace::SIBlasterSprayProjectile::__cordl_internal_get_knockbackSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackSpeed;
}
constexpr float_t const& GlobalNamespace::SIBlasterSprayProjectile::__cordl_internal_get_knockbackSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackSpeed;
}
constexpr void GlobalNamespace::SIBlasterSprayProjectile::__cordl_internal_set_knockbackSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackSpeed = value;
}
constexpr float_t& GlobalNamespace::SIBlasterSprayProjectile::__cordl_internal_get_verticalOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalOffset;
}
constexpr float_t const& GlobalNamespace::SIBlasterSprayProjectile::__cordl_internal_get_verticalOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalOffset;
}
constexpr void GlobalNamespace::SIBlasterSprayProjectile::__cordl_internal_set_verticalOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalOffset = value;
}
constexpr float_t& GlobalNamespace::SIBlasterSprayProjectile::__cordl_internal_get_upwardsAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upwardsAngle;
}
constexpr float_t const& GlobalNamespace::SIBlasterSprayProjectile::__cordl_internal_get_upwardsAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upwardsAngle;
}
constexpr void GlobalNamespace::SIBlasterSprayProjectile::__cordl_internal_set_upwardsAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upwardsAngle = value;
}
inline void GlobalNamespace::SIBlasterSprayProjectile::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSprayProjectile*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIBlasterSprayProjectile::LocalProjectileHit(::GlobalNamespace::SIPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSprayProjectile*>(),
                        {"LocalProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::SIBlasterSprayProjectile::TriggerBlastDirectHitPlayer(::GlobalNamespace::SIPlayer*  playerHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSprayProjectile*>(),
                        {"TriggerBlastDirectHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerHit);
}
inline void GlobalNamespace::SIBlasterSprayProjectile::NetworkedProjectileHit(::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSprayProjectile*>(),
                        {"NetworkedProjectileHit", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::SIBlasterSprayProjectile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSprayProjectile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIBlasterSprayProjectile* GlobalNamespace::SIBlasterSprayProjectile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIBlasterSprayProjectile*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIBlasterSprayProjectile::SIBlasterSprayProjectile()   {
}

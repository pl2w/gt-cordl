#pragma once
// IWYU pragma private; include "GlobalNamespace/SIBlasterSplashProjectile.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "GlobalNamespace/zzzz__SIBlasterSplashProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetProjectileType_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIBlasterSplashProjectile.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterSplashProjectile::*)()>(&::GlobalNamespace::SIBlasterSplashProjectile::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57f7310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSplashProjectile*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIBlasterSplashProjectile.LocalProjectileHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterSplashProjectile::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SIBlasterSplashProjectile::LocalProjectileHit)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x57f7368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSplashProjectile*>(),
                        {"LocalProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIBlasterSplashProjectile.TriggerSplashHitPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterSplashProjectile::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*)>(&::GlobalNamespace::SIBlasterSplashProjectile::TriggerSplashHitPlayers)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x57f78d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSplashProjectile*>(),
                        {"TriggerSplashHitPlayers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIBlasterSplashProjectile.NetworkedProjectileHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterSplashProjectile::*)(::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIBlasterSplashProjectile::NetworkedProjectileHit)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x57f82b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSplashProjectile*>(),
                        {"NetworkedProjectileHit", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIBlasterSplashProjectile.SplashHitLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterSplashProjectile::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SIBlasterSplashProjectile::SplashHitLocalPlayer)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x57f7e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSplashProjectile*>(),
                        {"SplashHitLocalPlayer", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIBlasterSplashProjectile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterSplashProjectile::*)()>(&::GlobalNamespace::SIBlasterSplashProjectile::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57f8c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSplashProjectile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_get_knockbackSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackSpeed;
}
constexpr float_t const& GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_get_knockbackSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackSpeed;
}
constexpr void GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_set_knockbackSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackSpeed = value;
}
constexpr float_t& GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_get_fullSplashRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullSplashRadius;
}
constexpr float_t const& GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_get_fullSplashRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullSplashRadius;
}
constexpr void GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_set_fullSplashRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullSplashRadius = value;
}
constexpr float_t& GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_get_splashHitDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splashHitDistance;
}
constexpr float_t const& GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_get_splashHitDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splashHitDistance;
}
constexpr void GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_set_splashHitDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splashHitDistance = value;
}
constexpr float_t& GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_get_upwardsAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upwardsAngle;
}
constexpr float_t const& GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_get_upwardsAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upwardsAngle;
}
constexpr void GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_set_upwardsAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upwardsAngle = value;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>& GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_get_projectile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectile;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile> const& GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_get_projectile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectile;
}
constexpr void GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_set_projectile(::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectile = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_get_rigList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_get_rigList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigList;
}
constexpr void GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_set_rigList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigList = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_get_hits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_get_hits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hits;
}
constexpr void GlobalNamespace::SIBlasterSplashProjectile::__cordl_internal_set_hits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hits = value;
}
inline void GlobalNamespace::SIBlasterSplashProjectile::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSplashProjectile*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIBlasterSplashProjectile::LocalProjectileHit(::GlobalNamespace::SIPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSplashProjectile*>(),
                        {"LocalProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::SIBlasterSplashProjectile::TriggerSplashHitPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  hitPlayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSplashProjectile*>(),
                        {"TriggerSplashHitPlayers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitPlayers);
}
inline void GlobalNamespace::SIBlasterSplashProjectile::NetworkedProjectileHit(::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSplashProjectile*>(),
                        {"NetworkedProjectileHit", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::SIBlasterSplashProjectile::SplashHitLocalPlayer(::UnityEngine::Vector3  directionAndMagnitude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSplashProjectile*>(),
                        {"SplashHitLocalPlayer", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, directionAndMagnitude);
}
inline void GlobalNamespace::SIBlasterSplashProjectile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterSplashProjectile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIBlasterSplashProjectile* GlobalNamespace::SIBlasterSplashProjectile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIBlasterSplashProjectile*>());
}
/// @brief Convert operator to "::GlobalNamespace::SIGadgetProjectileType"
constexpr  GlobalNamespace::SIBlasterSplashProjectile::operator ::GlobalNamespace::SIGadgetProjectileType*() noexcept {
return static_cast<::GlobalNamespace::SIGadgetProjectileType*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::SIGadgetProjectileType"
constexpr ::GlobalNamespace::SIGadgetProjectileType* GlobalNamespace::SIBlasterSplashProjectile::i___GlobalNamespace__SIGadgetProjectileType() noexcept {
return static_cast<::GlobalNamespace::SIGadgetProjectileType*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIBlasterSplashProjectile::SIBlasterSplashProjectile()   {
}

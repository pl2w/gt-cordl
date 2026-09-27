#pragma once
// IWYU pragma private; include "GlobalNamespace/ProjectileWeapon.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "GlobalNamespace/zzzz__ProjectileWeapon_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_ProjectileSource_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProjectileWeapon.GetLaunchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::ProjectileWeapon::*)()>(&::GlobalNamespace::ProjectileWeapon::GetLaunchPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(),
                    {::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileWeapon.GetLaunchVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::ProjectileWeapon::*)()>(&::GlobalNamespace::ProjectileWeapon::GetLaunchVelocity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(),
                    {::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileWeapon.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProjectileWeapon::*)()>(&::GlobalNamespace::ProjectileWeapon::OnEnable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56586d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(),
                    {::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileWeapon.LaunchProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProjectileWeapon::*)()>(&::GlobalNamespace::ProjectileWeapon::LaunchProjectile)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x56587ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(),
                        {"LaunchProjectile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileWeapon.LaunchNetworkedProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SlingshotProjectile> (::GlobalNamespace::ProjectileWeapon::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GlobalNamespace::RoomSystem_ProjectileSource, int32_t, float_t, bool, ::UnityEngine::Color, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::ProjectileWeapon::LaunchNetworkedProjectile)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x5659070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(),
                    {::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileWeapon.GetIsOnTeams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProjectileWeapon::*)(::by_ref<bool>, ::by_ref<bool>, ::by_ref<bool>)>(&::GlobalNamespace::ProjectileWeapon::GetIsOnTeams)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5658cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(),
                        {"GetIsOnTeams", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileWeapon.AttachTrail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProjectileWeapon::*)(int32_t, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, bool, bool, bool, ::UnityEngine::Color)>(&::GlobalNamespace::ProjectileWeapon::AttachTrail)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5658e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(),
                        {"AttachTrail", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileWeapon.PlayLaunchSfx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProjectileWeapon::*)()>(&::GlobalNamespace::ProjectileWeapon::PlayLaunchSfx)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5658fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(),
                        {"PlayLaunchSfx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileWeapon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProjectileWeapon::*)()>(&::GlobalNamespace::ProjectileWeapon::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5659578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ProjectileWeapon::__cordl_internal_get_projectilePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ProjectileWeapon::__cordl_internal_get_projectilePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr void GlobalNamespace::ProjectileWeapon::__cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectilePrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ProjectileWeapon::__cordl_internal_get_projectileTrail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileTrail;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ProjectileWeapon::__cordl_internal_get_projectileTrail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileTrail;
}
constexpr void GlobalNamespace::ProjectileWeapon::__cordl_internal_set_projectileTrail(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileTrail = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::ProjectileWeapon::__cordl_internal_get_shootSfxClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootSfxClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::ProjectileWeapon::__cordl_internal_get_shootSfxClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootSfxClips;
}
constexpr void GlobalNamespace::ProjectileWeapon::__cordl_internal_set_shootSfxClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shootSfxClips = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::ProjectileWeapon::__cordl_internal_get_shootSfx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootSfx;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::ProjectileWeapon::__cordl_internal_get_shootSfx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootSfx;
}
constexpr void GlobalNamespace::ProjectileWeapon::__cordl_internal_set_shootSfx(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shootSfx = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::ProjectileWeapon::GetLaunchPosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::ProjectileWeapon::GetLaunchVelocity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::ProjectileWeapon::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProjectileWeapon::LaunchProjectile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(),
                        {"LaunchProjectile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SlingshotProjectile> GlobalNamespace::ProjectileWeapon::LaunchNetworkedProjectile(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  velocity, ::GlobalNamespace::RoomSystem_ProjectileSource  projectileSource, int32_t  projectileCounter, float_t  scale, bool  shouldOverrideColor, ::UnityEngine::Color  color, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SlingshotProjectile>>(this, ___internal_method, location, velocity, projectileSource, projectileCounter, scale, shouldOverrideColor, color, info);
}
inline void GlobalNamespace::ProjectileWeapon::GetIsOnTeams(::by_ref<bool>  blueTeam, ::by_ref<bool>  orangeTeam, ::by_ref<bool>  shouldUsePlayerColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(),
                        {"GetIsOnTeams", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blueTeam, orangeTeam, shouldUsePlayerColor);
}
inline void GlobalNamespace::ProjectileWeapon::AttachTrail(int32_t  trailHash, ::UnityEngine::GameObject*  newProjectile, ::UnityEngine::Vector3  location, bool  blueTeam, bool  orangeTeam, bool  shouldOverrideColor, ::UnityEngine::Color  overrideColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(),
                        {"AttachTrail", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trailHash, newProjectile, location, blueTeam, orangeTeam, shouldOverrideColor, overrideColor);
}
inline void GlobalNamespace::ProjectileWeapon::PlayLaunchSfx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(),
                        {"PlayLaunchSfx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProjectileWeapon::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileWeapon*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProjectileWeapon* GlobalNamespace::ProjectileWeapon::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProjectileWeapon*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProjectileWeapon::ProjectileWeapon()   {
}

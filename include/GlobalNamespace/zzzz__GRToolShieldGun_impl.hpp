#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolShieldGun.hpp"
#include "GlobalNamespace/zzzz__GRToolShieldGun_State_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolShieldGun_def.hpp"
#include "GlobalNamespace/zzzz__AbilityHaptic_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GRToolShieldGun_State_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolShieldGun.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolShieldGun::*)()>(&::GlobalNamespace::GRToolShieldGun::Awake)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58c6ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolShieldGun.OnToolUpgraded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolShieldGun::*)(::GlobalNamespace::GRTool*)>(&::GlobalNamespace::GRToolShieldGun::OnToolUpgraded)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x58c70d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"OnToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolShieldGun.IsHeldLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolShieldGun::*)()>(&::GlobalNamespace::GRToolShieldGun::IsHeldLocal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58c715c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"IsHeldLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolShieldGun.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolShieldGun::*)()>(&::GlobalNamespace::GRToolShieldGun::Update)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58c71d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolShieldGun.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolShieldGun::*)(float_t)>(&::GlobalNamespace::GRToolShieldGun::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x58c7224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolShieldGun.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolShieldGun::*)(float_t)>(&::GlobalNamespace::GRToolShieldGun::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58c7334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolShieldGun.SetStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolShieldGun::*)(::GlobalNamespace::GRToolShieldGun_State)>(&::GlobalNamespace::GRToolShieldGun::SetStateAuthority)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58c7430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::GRToolShieldGun_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolShieldGun.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolShieldGun::*)(::GlobalNamespace::GRToolShieldGun_State)>(&::GlobalNamespace::GRToolShieldGun::SetState)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58c7468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRToolShieldGun_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolShieldGun.StartCharge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolShieldGun::*)()>(&::GlobalNamespace::GRToolShieldGun::StartCharge)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x58c754c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"StartCharge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolShieldGun.StartFiring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolShieldGun::*)()>(&::GlobalNamespace::GRToolShieldGun::StartFiring)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x58c7658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"StartFiring", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolShieldGun.AttachTrail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolShieldGun::*)(int32_t, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, bool, bool)>(&::GlobalNamespace::GRToolShieldGun::AttachTrail)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x58c7c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"AttachTrail", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolShieldGun.OnProjectileImpact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolShieldGun::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Vector3, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRToolShieldGun::OnProjectileImpact)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x58c7ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"OnProjectileImpact", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolShieldGun.IsButtonHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolShieldGun::*)()>(&::GlobalNamespace::GRToolShieldGun::IsButtonHeld)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x58c735c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"IsButtonHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolShieldGun.PlayVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolShieldGun::*)(float_t, float_t)>(&::GlobalNamespace::GRToolShieldGun::PlayVibration)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x58c7b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"PlayVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolShieldGun.CanChangeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolShieldGun::*)(int64_t)>(&::GlobalNamespace::GRToolShieldGun::CanChangeState)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58c7504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"CanChangeState", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolShieldGun._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolShieldGun::*)()>(&::GlobalNamespace::GRToolShieldGun::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x58c8354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::UnityW<::GlobalNamespace::GRTool>& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_tool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr ::UnityW<::GlobalNamespace::GRTool> const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_tool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tool = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_projectilePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_projectilePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectilePrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_projectileTrailPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileTrailPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_projectileTrailPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileTrailPrefab;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_projectileTrailPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileTrailPrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_firingTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_firingTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingTransform;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_firingTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firingTransform = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr float_t& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_projectileSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileSpeed;
}
constexpr float_t const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_projectileSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileSpeed;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_projectileSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileSpeed = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_projectileColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_projectileColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileColor;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_projectileColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileColor = value;
}
constexpr bool& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_allowAoeHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowAoeHits;
}
constexpr bool const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_allowAoeHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowAoeHits;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_allowAoeHits(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowAoeHits = value;
}
constexpr float_t& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_aeoHitRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aeoHitRadius;
}
constexpr float_t const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_aeoHitRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aeoHitRadius;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_aeoHitRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aeoHitRadius = value;
}
constexpr float_t& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_chargeDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeDuration;
}
constexpr float_t const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_chargeDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeDuration;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_chargeDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeDuration = value;
}
constexpr float_t& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_flashDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashDuration;
}
constexpr float_t const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_flashDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashDuration;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_flashDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashDuration = value;
}
constexpr float_t& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_cooldownDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownDuration;
}
constexpr float_t const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_cooldownDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownDuration;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_cooldownDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownDuration = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_chargeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_chargeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeSound;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_chargeSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeSound = value;
}
constexpr float_t& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_chargeSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeSoundVolume;
}
constexpr float_t const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_chargeSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeSoundVolume;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_chargeSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_firingSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_firingSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingSound;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_firingSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firingSound = value;
}
constexpr float_t& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_firingSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingSoundVolume;
}
constexpr float_t const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_firingSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingSoundVolume;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_firingSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firingSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_upgrade1FiringSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1FiringSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_upgrade1FiringSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1FiringSound;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_upgrade1FiringSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade1FiringSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_upgrade2FiringSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2FiringSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_upgrade2FiringSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2FiringSound;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_upgrade2FiringSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade2FiringSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_upgrade3FiringSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3FiringSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_upgrade3FiringSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3FiringSound;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_upgrade3FiringSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade3FiringSound = value;
}
constexpr ::GlobalNamespace::AbilityHaptic*& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_onHaptic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onHaptic;
}
constexpr ::GlobalNamespace::AbilityHaptic* const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_onHaptic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onHaptic;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_onHaptic(::GlobalNamespace::AbilityHaptic*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onHaptic = value;
}
constexpr ::GlobalNamespace::GRToolShieldGun_State& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRToolShieldGun_State const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_state(::GlobalNamespace::GRToolShieldGun_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr float_t& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_stateTimeRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateTimeRemaining;
}
constexpr float_t const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_stateTimeRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateTimeRemaining;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_stateTimeRemaining(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateTimeRemaining = value;
}
constexpr bool& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_activatedLocally()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatedLocally;
}
constexpr bool const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_activatedLocally() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatedLocally;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_activatedLocally(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activatedLocally = value;
}
constexpr bool& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_waitingForButtonRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForButtonRelease;
}
constexpr bool const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_waitingForButtonRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForButtonRelease;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_waitingForButtonRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingForButtonRelease = value;
}
constexpr float_t& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_timeLastFired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastFired;
}
constexpr float_t const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_timeLastFired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastFired;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_timeLastFired(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeLastFired = value;
}
constexpr float_t& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_cooldownMinimum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownMinimum;
}
constexpr float_t const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_cooldownMinimum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownMinimum;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_cooldownMinimum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownMinimum = value;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectile>& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_firedProjectile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firedProjectile;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectile> const& GlobalNamespace::GRToolShieldGun::__cordl_internal_get_firedProjectile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firedProjectile;
}
constexpr void GlobalNamespace::GRToolShieldGun::__cordl_internal_set_firedProjectile(::UnityW<::GlobalNamespace::SlingshotProjectile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firedProjectile = value;
}
inline void GlobalNamespace::GRToolShieldGun::setStaticF_vrRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "vrRigs", ::GlobalNamespace::GRToolShieldGun*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::GRToolShieldGun::getStaticF_vrRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "vrRigs", ::GlobalNamespace::GRToolShieldGun*>();
}
inline void GlobalNamespace::GRToolShieldGun::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolShieldGun::OnToolUpgraded(::GlobalNamespace::GRTool*  tool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"OnToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool);
}
inline bool GlobalNamespace::GRToolShieldGun::IsHeldLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"IsHeldLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolShieldGun::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolShieldGun::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolShieldGun::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolShieldGun::SetStateAuthority(::GlobalNamespace::GRToolShieldGun_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::GRToolShieldGun_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GRToolShieldGun::SetState(::GlobalNamespace::GRToolShieldGun_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRToolShieldGun_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GRToolShieldGun::StartCharge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"StartCharge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolShieldGun::StartFiring()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"StartFiring", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolShieldGun::AttachTrail(int32_t  trailHash, ::UnityEngine::GameObject*  newProjectile, ::UnityEngine::Vector3  location, bool  blueTeam, bool  orangeTeam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"AttachTrail", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trailHash, newProjectile, location, blueTeam, orangeTeam);
}
inline void GlobalNamespace::GRToolShieldGun::OnProjectileImpact(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Vector3  impactPos, ::GlobalNamespace::NetPlayer*  hitPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"OnProjectileImpact", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, impactPos, hitPlayer);
}
inline bool GlobalNamespace::GRToolShieldGun::IsButtonHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"IsButtonHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolShieldGun::PlayVibration(float_t  strength, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"PlayVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strength, duration);
}
inline bool GlobalNamespace::GRToolShieldGun::CanChangeState(int64_t  newStateIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {"CanChangeState", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newStateIndex);
}
inline void GlobalNamespace::GRToolShieldGun::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolShieldGun*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolShieldGun* GlobalNamespace::GRToolShieldGun::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolShieldGun*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolShieldGun::GRToolShieldGun()   {
}

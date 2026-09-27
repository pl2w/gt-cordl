#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotProjectile.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_AOEKnockbackConfig_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_AOEKnockbackConfig_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Gravity/zzzz__MonkeGravityController_def.hpp"
#include "GorillaTag/Reactions/zzzz__SpawnWorldEffects_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ConstantForce_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.get_launchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SlingshotProjectile::*)()>(&::GlobalNamespace::SlingshotProjectile::get_launchPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57391f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"get_launchPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.set_launchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SlingshotProjectile::set_launchPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57391fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"set_launchPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.add_OnImpact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)(::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*)>(&::GlobalNamespace::SlingshotProjectile::add_OnImpact)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5739208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"add_OnImpact", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.remove_OnImpact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)(::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*)>(&::GlobalNamespace::SlingshotProjectile::remove_OnImpact)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x57392a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"remove_OnImpact", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.Launch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GlobalNamespace::NetPlayer*, bool, bool, int32_t, float_t, bool, ::UnityEngine::Color)>(&::GlobalNamespace::SlingshotProjectile::Launch)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x5739340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"Launch", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)()>(&::GlobalNamespace::SlingshotProjectile::Awake)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5739824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.Deactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)()>(&::GlobalNamespace::SlingshotProjectile::Deactivate)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5739a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"Deactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.SpawnImpactEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SlingshotProjectile::SpawnImpactEffect)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5739c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"SpawnImpactEffect", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.CheckForAOEKnockback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::SlingshotProjectile::CheckForAOEKnockback)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x5739f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"CheckForAOEKnockback", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.ApplyTeamModelAndColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)(bool, bool, bool, ::UnityEngine::Color)>(&::GlobalNamespace::SlingshotProjectile::ApplyTeamModelAndColor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5737dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"ApplyTeamModelAndColor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)()>(&::GlobalNamespace::SlingshotProjectile::OnEnable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x573a548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)()>(&::GlobalNamespace::SlingshotProjectile::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x573a6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.InvokeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)()>(&::GlobalNamespace::SlingshotProjectile::InvokeUpdate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x573a850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"InvokeUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.DestroyAfterRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)()>(&::GlobalNamespace::SlingshotProjectile::DestroyAfterRelease)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x573a95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"DestroyAfterRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.GetRemainingLifeTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SlingshotProjectile::*)()>(&::GlobalNamespace::SlingshotProjectile::GetRemainingLifeTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573b024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"GetRemainingLifeTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.UpdateRemainingLifeTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)(float_t)>(&::GlobalNamespace::SlingshotProjectile::UpdateRemainingLifeTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573b02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"UpdateRemainingLifeTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.GetDistanceTraveled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SlingshotProjectile::*)()>(&::GlobalNamespace::SlingshotProjectile::GetDistanceTraveled)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x573b034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"GetDistanceTraveled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.SettleProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)()>(&::GlobalNamespace::SlingshotProjectile::SettleProjectile)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x573aa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"SettleProjectile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::SlingshotProjectile::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x573b0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.OnCollisionStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::SlingshotProjectile::OnCollisionStay)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x573b3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SlingshotProjectile::OnTriggerExit)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x573b5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SlingshotProjectile::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x573b690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile.ApplyColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)(::UnityEngine::Renderer*, ::UnityEngine::Color)>(&::GlobalNamespace::SlingshotProjectile::ApplyColor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x573a410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"ApplyColor", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile::*)()>(&::GlobalNamespace::SlingshotProjectile::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x573bce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_projectileOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileOwner;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_projectileOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileOwner;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_projectileOwner(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileOwner = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_surfaceImpactEffectPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceImpactEffectPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_surfaceImpactEffectPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceImpactEffectPrefab;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_surfaceImpactEffectPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceImpactEffectPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_playerImpactEffectPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerImpactEffectPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_playerImpactEffectPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerImpactEffectPrefab;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_playerImpactEffectPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerImpactEffectPrefab = value;
}
constexpr float_t& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_impactEffectOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffectOffset;
}
constexpr float_t const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_impactEffectOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffectOffset;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_impactEffectOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactEffectOffset = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_launchSoundBankPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchSoundBankPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_launchSoundBankPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchSoundBankPlayer;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_launchSoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchSoundBankPlayer = value;
}
constexpr bool& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_dontDestroyOnHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontDestroyOnHit;
}
constexpr bool const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_dontDestroyOnHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontDestroyOnHit;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_dontDestroyOnHit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dontDestroyOnHit = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_floorLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_floorLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorLayerMask;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_floorLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floorLayerMask = value;
}
constexpr float_t& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_placementOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placementOffset;
}
constexpr float_t const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_placementOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placementOffset;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_placementOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placementOffset = value;
}
constexpr bool& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_keepRotationUpright()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepRotationUpright;
}
constexpr bool const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_keepRotationUpright() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepRotationUpright;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_keepRotationUpright(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keepRotationUpright = value;
}
constexpr float_t& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_lifeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifeTime;
}
constexpr float_t const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_lifeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifeTime;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_lifeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lifeTime = value;
}
constexpr float_t& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_gravityMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityMultiplier;
}
constexpr float_t const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_gravityMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityMultiplier;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_gravityMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityMultiplier = value;
}
constexpr bool& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_useForwardForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useForwardForce;
}
constexpr bool const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_useForwardForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useForwardForce;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_useForwardForce(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useForwardForce = value;
}
constexpr float_t& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_forwardForceMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardForceMultiplier;
}
constexpr float_t const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_forwardForceMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardForceMultiplier;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_forwardForceMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forwardForceMultiplier = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_defaultColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_defaultColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultColor;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_defaultColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_orangeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orangeColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_orangeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orangeColor;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_orangeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orangeColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_blueColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_blueColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueColor;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_blueColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blueColor = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_defaultBall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultBall;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_defaultBall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultBall;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_defaultBall(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultBall = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_orangeBall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orangeBall;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_orangeBall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orangeBall;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_orangeBall(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orangeBall = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_blueBall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueBall;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_blueBall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueBall;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_blueBall(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blueBall = value;
}
constexpr bool& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_colorizeBalls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorizeBalls;
}
constexpr bool const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_colorizeBalls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorizeBalls;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_colorizeBalls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorizeBalls = value;
}
constexpr bool& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_faceDirectionOfTravel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceDirectionOfTravel;
}
constexpr bool const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_faceDirectionOfTravel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceDirectionOfTravel;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_faceDirectionOfTravel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceDirectionOfTravel = value;
}
constexpr bool& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_particleLaunched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleLaunched;
}
constexpr bool const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_particleLaunched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleLaunched;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_particleLaunched(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleLaunched = value;
}
constexpr float_t& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_timeCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeCreated;
}
constexpr float_t const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_timeCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeCreated;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_timeCreated(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeCreated = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SlingshotProjectile::__cordl_internal_get__launchPosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get__launchPosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchPosition_k__BackingField;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set__launchPosition_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____launchPosition_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_projectileRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_projectileRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileRigidbody;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_projectileRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileRigidbody = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_teamColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_teamColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamColor;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_teamColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamColor = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_teamRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_teamRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamRenderer;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_teamRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamRenderer = value;
}
constexpr int32_t& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_myProjectileCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myProjectileCount;
}
constexpr int32_t const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_myProjectileCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myProjectileCount;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_myProjectileCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myProjectileCount = value;
}
constexpr float_t& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_initialScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialScale;
}
constexpr float_t const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_initialScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialScale;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_initialScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialScale = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_previousPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_previousPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousPosition;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_previousPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousPosition = value;
}
constexpr ::System::Nullable_1<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig>& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_aoeKnockbackConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aoeKnockbackConfig;
}
constexpr ::System::Nullable_1<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig> const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_aoeKnockbackConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aoeKnockbackConfig;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_aoeKnockbackConfig(::System::Nullable_1<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aoeKnockbackConfig = value;
}
constexpr ::System::Nullable_1<float_t>& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_impactSoundVolumeOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactSoundVolumeOverride;
}
constexpr ::System::Nullable_1<float_t> const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_impactSoundVolumeOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactSoundVolumeOverride;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_impactSoundVolumeOverride(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactSoundVolumeOverride = value;
}
constexpr ::System::Nullable_1<float_t>& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_impactSoundPitchOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactSoundPitchOverride;
}
constexpr ::System::Nullable_1<float_t> const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_impactSoundPitchOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactSoundPitchOverride;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_impactSoundPitchOverride(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactSoundPitchOverride = value;
}
constexpr float_t& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_impactEffectScaleMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffectScaleMultiplier;
}
constexpr float_t const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_impactEffectScaleMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffectScaleMultiplier;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_impactEffectScaleMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactEffectScaleMultiplier = value;
}
constexpr ::UnityW<::UnityEngine::ConstantForce>& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_forceComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceComponent;
}
constexpr ::UnityW<::UnityEngine::ConstantForce> const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_forceComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceComponent;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_forceComponent(::UnityW<::UnityEngine::ConstantForce>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceComponent = value;
}
constexpr bool& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_m_sendNetworkedImpact()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_sendNetworkedImpact;
}
constexpr bool const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_m_sendNetworkedImpact() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_sendNetworkedImpact;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_m_sendNetworkedImpact(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_sendNetworkedImpact = value;
}
constexpr ::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_OnImpact()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnImpact;
}
constexpr ::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent* const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_OnImpact() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnImpact;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_OnImpact(::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnImpact = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_OnLaunch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLaunch;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>* const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_OnLaunch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLaunch;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_OnLaunch(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLaunch = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_OnImapctEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnImapctEvent;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_OnImapctEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnImapctEvent;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_OnImapctEvent(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnImapctEvent = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_matPropBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matPropBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_matPropBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matPropBlock;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_matPropBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matPropBlock = value;
}
constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_spawnWorldEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnWorldEffects;
}
constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects> const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_spawnWorldEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnWorldEffects;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_spawnWorldEffects(::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnWorldEffects = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_OnHitPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHitPlayer;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_OnHitPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHitPlayer;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_OnHitPlayer(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHitPlayer = value;
}
constexpr float_t& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_remainingLifeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingLifeTime;
}
constexpr float_t const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_remainingLifeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingLifeTime;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_remainingLifeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remainingLifeTime = value;
}
constexpr bool& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_isSettled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSettled;
}
constexpr bool const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_isSettled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSettled;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_isSettled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSettled = value;
}
constexpr float_t& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_distanceTraveled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceTraveled;
}
constexpr float_t const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_distanceTraveled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceTraveled;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_distanceTraveled(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceTraveled = value;
}
constexpr ::UnityW<::GorillaTag::Gravity::MonkeGravityController>& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_gravityController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityController;
}
constexpr ::UnityW<::GorillaTag::Gravity::MonkeGravityController> const& GlobalNamespace::SlingshotProjectile::__cordl_internal_get_gravityController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityController;
}
constexpr void GlobalNamespace::SlingshotProjectile::__cordl_internal_set_gravityController(::UnityW<::GorillaTag::Gravity::MonkeGravityController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityController = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::SlingshotProjectile::get_launchPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"get_launchPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::SlingshotProjectile::set_launchPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"set_launchPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SlingshotProjectile::add_OnImpact(::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"add_OnImpact", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SlingshotProjectile::remove_OnImpact(::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"remove_OnImpact", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SlingshotProjectile::Launch(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, ::GlobalNamespace::NetPlayer*  player, bool  blueTeam, bool  orangeTeam, int32_t  projectileCount, float_t  scale, bool  shouldOverrideColor, ::UnityEngine::Color  overrideColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"Launch", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, velocity, player, blueTeam, orangeTeam, projectileCount, scale, shouldOverrideColor, overrideColor);
}
inline void GlobalNamespace::SlingshotProjectile::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SlingshotProjectile::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"Deactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SlingshotProjectile::SpawnImpactEffect(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"SpawnImpactEffect", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab, position, normal);
}
inline void GlobalNamespace::SlingshotProjectile::CheckForAOEKnockback(::UnityEngine::Vector3  impactPosition, float_t  impactSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"CheckForAOEKnockback", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, impactPosition, impactSpeed);
}
inline void GlobalNamespace::SlingshotProjectile::ApplyTeamModelAndColor(bool  blueTeam, bool  orangeTeam, bool  shouldOverrideColor, ::UnityEngine::Color  overrideColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"ApplyTeamModelAndColor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blueTeam, orangeTeam, shouldOverrideColor, overrideColor);
}
inline void GlobalNamespace::SlingshotProjectile::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SlingshotProjectile::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SlingshotProjectile::InvokeUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"InvokeUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SlingshotProjectile::DestroyAfterRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"DestroyAfterRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::SlingshotProjectile::GetRemainingLifeTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"GetRemainingLifeTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SlingshotProjectile::UpdateRemainingLifeTime(float_t  newLifeTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"UpdateRemainingLifeTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newLifeTime);
}
inline float_t GlobalNamespace::SlingshotProjectile::GetDistanceTraveled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"GetDistanceTraveled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SlingshotProjectile::SettleProjectile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"SettleProjectile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SlingshotProjectile::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::SlingshotProjectile::OnCollisionStay(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::SlingshotProjectile::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SlingshotProjectile::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SlingshotProjectile::ApplyColor(::UnityEngine::Renderer*  rend, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {"ApplyColor", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rend, color);
}
inline void GlobalNamespace::SlingshotProjectile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SlingshotProjectile* GlobalNamespace::SlingshotProjectile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SlingshotProjectile*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SlingshotProjectile::SlingshotProjectile()   {
}
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x573bd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Vector3, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x573be54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Vector3, ::GlobalNamespace::NetPlayer*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x573be68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x573bf08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent::Invoke(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Vector3  impactPos, ::GlobalNamespace::NetPlayer*  hitPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, impactPos, hitPlayer);
}
inline ::System::IAsyncResult* GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent::BeginInvoke(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Vector3  impactPos, ::GlobalNamespace::NetPlayer*  hitPlayer, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, projectile, impactPos, hitPlayer, callback, object);
}
inline void GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent* GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent::SlingshotProjectile_ProjectileImpactEvent()   {
}

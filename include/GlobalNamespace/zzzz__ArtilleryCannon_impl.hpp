#pragma once
// IWYU pragma private; include "GlobalNamespace/ArtilleryCannon.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_AOEKnockbackConfig_impl.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ArtilleryCannon_def.hpp"
#include "GlobalNamespace/zzzz__ArtilleryCannonState_CrankSyncState_def.hpp"
#include "GlobalNamespace/zzzz__ArtilleryCannonState_def.hpp"
#include "GlobalNamespace/zzzz__ArtilleryCrank_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectileHitNotifier_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.get_LocalActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ArtilleryCannon::*)()>(&::GlobalNamespace::ArtilleryCannon::get_LocalActorNr)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bf8764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"get_LocalActorNr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)()>(&::GlobalNamespace::ArtilleryCannon::Awake)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bf87e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)()>(&::GlobalNamespace::ArtilleryCannon::OnEnable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5bf8860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)()>(&::GlobalNamespace::ArtilleryCannon::OnDisable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5bf8b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.OnStateSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)()>(&::GlobalNamespace::ArtilleryCannon::OnStateSceneLoaded)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bf8d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnStateSceneLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.Bind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)(::GlobalNamespace::ArtilleryCannonState*)>(&::GlobalNamespace::ArtilleryCannon::Bind)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5bf89c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"Bind", {}, {::i2c::type_of<::GlobalNamespace::ArtilleryCannonState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.Unbind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)()>(&::GlobalNamespace::ArtilleryCannon::Unbind)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5bf8c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"Unbind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)()>(&::GlobalNamespace::ArtilleryCannon::LateUpdate)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5bf9194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.UpdateRemoteCrankVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)(::GlobalNamespace::ArtilleryCrank*, ::GlobalNamespace::ArtilleryCannonState_CrankSyncState, int32_t)>(&::GlobalNamespace::ArtilleryCannon::UpdateRemoteCrankVisual)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5bf9394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"UpdateRemoteCrankVisual", {}, {::i2c::type_of<::GlobalNamespace::ArtilleryCrank*>(), ::i2c::type_of<::GlobalNamespace::ArtilleryCannonState_CrankSyncState>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.IsCrankHeldLocally
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArtilleryCannon::*)(int32_t)>(&::GlobalNamespace::ArtilleryCannon::IsCrankHeldLocally)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5bf9784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"IsCrankHeldLocally", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.OnCrankGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArtilleryCannon::*)(int32_t, bool)>(&::GlobalNamespace::ArtilleryCannon::OnCrankGrabbed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bf97c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnCrankGrabbed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.OnCrankReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)(int32_t, float_t)>(&::GlobalNamespace::ArtilleryCannon::OnCrankReleased)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bf99f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnCrankReleased", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.OnCrankInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)(int32_t, float_t)>(&::GlobalNamespace::ArtilleryCannon::OnCrankInput)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bf9c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnCrankInput", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.OnRotationChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)()>(&::GlobalNamespace::ArtilleryCannon::OnRotationChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bf9e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnRotationChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.ApplyRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)()>(&::GlobalNamespace::ArtilleryCannon::ApplyRotation)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5bf8f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"ApplyRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.Fire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)()>(&::GlobalNamespace::ArtilleryCannon::Fire)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5bf9e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"Fire", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.OnFireProjectileHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Collision*)>(&::GlobalNamespace::ArtilleryCannon::OnFireProjectileHit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bfa3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnFireProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.OnFiredRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)()>(&::GlobalNamespace::ArtilleryCannon::OnFiredRemote)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bfa3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnFiredRemote", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon.FireLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)()>(&::GlobalNamespace::ArtilleryCannon::FireLocal)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5bfa0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"FireLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannon::*)()>(&::GlobalNamespace::ArtilleryCannon::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bfa3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_stateRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateRef;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_stateRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateRef;
}
constexpr void GlobalNamespace::ArtilleryCannon::__cordl_internal_set_stateRef(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateRef = value;
}
constexpr ::UnityW<::GlobalNamespace::ArtilleryCrank>& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_pitchCrank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchCrank;
}
constexpr ::UnityW<::GlobalNamespace::ArtilleryCrank> const& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_pitchCrank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchCrank;
}
constexpr void GlobalNamespace::ArtilleryCannon::__cordl_internal_set_pitchCrank(::UnityW<::GlobalNamespace::ArtilleryCrank>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitchCrank = value;
}
constexpr ::UnityW<::GlobalNamespace::ArtilleryCrank>& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_yawCrank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yawCrank;
}
constexpr ::UnityW<::GlobalNamespace::ArtilleryCrank> const& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_yawCrank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yawCrank;
}
constexpr void GlobalNamespace::ArtilleryCannon::__cordl_internal_set_yawCrank(::UnityW<::GlobalNamespace::ArtilleryCrank>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yawCrank = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_yawTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yawTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_yawTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yawTransform;
}
constexpr void GlobalNamespace::ArtilleryCannon::__cordl_internal_set_yawTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yawTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_pitchTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_pitchTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchTransform;
}
constexpr void GlobalNamespace::ArtilleryCannon::__cordl_internal_set_pitchTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitchTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_muzzle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muzzle;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_muzzle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muzzle;
}
constexpr void GlobalNamespace::ArtilleryCannon::__cordl_internal_set_muzzle(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muzzle = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_projectilePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_projectilePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr void GlobalNamespace::ArtilleryCannon::__cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectilePrefab = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_launchSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchSpeed;
}
constexpr float_t const& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_launchSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchSpeed;
}
constexpr void GlobalNamespace::ArtilleryCannon::__cordl_internal_set_launchSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchSpeed = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_fireSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireSound;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_fireSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireSound;
}
constexpr void GlobalNamespace::ArtilleryCannon::__cordl_internal_set_fireSound(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireSound = value;
}
constexpr ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_knockbackConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackConfig;
}
constexpr ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig const& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_knockbackConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackConfig;
}
constexpr void GlobalNamespace::ArtilleryCannon::__cordl_internal_set_knockbackConfig(::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackConfig = value;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_fireHitNotifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireHitNotifier;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier> const& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_fireHitNotifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireHitNotifier;
}
constexpr void GlobalNamespace::ArtilleryCannon::__cordl_internal_set_fireHitNotifier(::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireHitNotifier = value;
}
constexpr ::UnityW<::GlobalNamespace::ArtilleryCannonState>& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::UnityW<::GlobalNamespace::ArtilleryCannonState> const& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::ArtilleryCannon::__cordl_internal_set_state(::UnityW<::GlobalNamespace::ArtilleryCannonState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr int32_t& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_projectileHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileHash;
}
constexpr int32_t const& GlobalNamespace::ArtilleryCannon::__cordl_internal_get_projectileHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileHash;
}
constexpr void GlobalNamespace::ArtilleryCannon::__cordl_internal_set_projectileHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileHash = value;
}
inline int32_t GlobalNamespace::ArtilleryCannon::get_LocalActorNr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"get_LocalActorNr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannon::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannon::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannon::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannon::OnStateSceneLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnStateSceneLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannon::Bind(::GlobalNamespace::ArtilleryCannonState*  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"Bind", {}, {::i2c::type_of<::GlobalNamespace::ArtilleryCannonState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::ArtilleryCannon::Unbind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"Unbind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannon::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannon::UpdateRemoteCrankVisual(::GlobalNamespace::ArtilleryCrank*  crank, ::GlobalNamespace::ArtilleryCannonState_CrankSyncState  syncState, int32_t  localActor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"UpdateRemoteCrankVisual", {}, {::i2c::type_of<::GlobalNamespace::ArtilleryCrank*>(), ::i2c::type_of<::GlobalNamespace::ArtilleryCannonState_CrankSyncState>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crank, syncState, localActor);
}
inline bool GlobalNamespace::ArtilleryCannon::IsCrankHeldLocally(int32_t  crankIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"IsCrankHeldLocally", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, crankIndex);
}
inline bool GlobalNamespace::ArtilleryCannon::OnCrankGrabbed(int32_t  crankIndex, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnCrankGrabbed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, crankIndex, isLeftHand);
}
inline void GlobalNamespace::ArtilleryCannon::OnCrankReleased(int32_t  crankIndex, float_t  finalAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnCrankReleased", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crankIndex, finalAngle);
}
inline void GlobalNamespace::ArtilleryCannon::OnCrankInput(int32_t  crankIndex, float_t  degrees)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnCrankInput", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crankIndex, degrees);
}
inline void GlobalNamespace::ArtilleryCannon::OnRotationChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnRotationChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannon::ApplyRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"ApplyRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannon::Fire()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"Fire", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannon::OnFireProjectileHit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnFireProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, collision);
}
inline void GlobalNamespace::ArtilleryCannon::OnFiredRemote()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"OnFiredRemote", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannon::FireLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {"FireLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannon::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannon*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ArtilleryCannon* GlobalNamespace::ArtilleryCannon::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ArtilleryCannon*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArtilleryCannon::ArtilleryCannon()   {
}

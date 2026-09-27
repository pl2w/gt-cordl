#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeyeProjectileTarget.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeyeProjectileTarget_def.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_def.hpp"
#include "GlobalNamespace/zzzz__PaperPlaneProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectileHitNotifier_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeyeProjectileTarget.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeProjectileTarget::*)()>(&::GlobalNamespace::MonkeyeProjectileTarget::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x56d35e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeProjectileTarget*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeProjectileTarget.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeProjectileTarget::*)()>(&::GlobalNamespace::MonkeyeProjectileTarget::OnEnable)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x56d3670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeProjectileTarget*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeProjectileTarget.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeProjectileTarget::*)()>(&::GlobalNamespace::MonkeyeProjectileTarget::OnDisable)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x56d379c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeProjectileTarget*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeProjectileTarget.Notifier_OnProjectileHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeProjectileTarget::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Collision*)>(&::GlobalNamespace::MonkeyeProjectileTarget::Notifier_OnProjectileHit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56d38c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeProjectileTarget*>(),
                        {"Notifier_OnProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeProjectileTarget.Notifier_OnPaperPlaneHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeProjectileTarget::*)(::GlobalNamespace::PaperPlaneProjectile*, ::UnityEngine::Collider*)>(&::GlobalNamespace::MonkeyeProjectileTarget::Notifier_OnPaperPlaneHit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56d38e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeProjectileTarget*>(),
                        {"Notifier_OnPaperPlaneHit", {}, {::i2c::type_of<::GlobalNamespace::PaperPlaneProjectile*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeProjectileTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeProjectileTarget::*)()>(&::GlobalNamespace::MonkeyeProjectileTarget::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d38f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeProjectileTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MonkeyeAI>& GlobalNamespace::MonkeyeProjectileTarget::__cordl_internal_get_monkeyeAI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkeyeAI;
}
constexpr ::UnityW<::GlobalNamespace::MonkeyeAI> const& GlobalNamespace::MonkeyeProjectileTarget::__cordl_internal_get_monkeyeAI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkeyeAI;
}
constexpr void GlobalNamespace::MonkeyeProjectileTarget::__cordl_internal_set_monkeyeAI(::UnityW<::GlobalNamespace::MonkeyeAI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monkeyeAI = value;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>& GlobalNamespace::MonkeyeProjectileTarget::__cordl_internal_get_notifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notifier;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier> const& GlobalNamespace::MonkeyeProjectileTarget::__cordl_internal_get_notifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notifier;
}
constexpr void GlobalNamespace::MonkeyeProjectileTarget::__cordl_internal_set_notifier(::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notifier = value;
}
inline void GlobalNamespace::MonkeyeProjectileTarget::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeProjectileTarget*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeProjectileTarget::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeProjectileTarget*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeProjectileTarget::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeProjectileTarget*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeProjectileTarget::Notifier_OnProjectileHit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeProjectileTarget*>(),
                        {"Notifier_OnProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, collision);
}
inline void GlobalNamespace::MonkeyeProjectileTarget::Notifier_OnPaperPlaneHit(::GlobalNamespace::PaperPlaneProjectile*  projectile, ::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeProjectileTarget*>(),
                        {"Notifier_OnPaperPlaneHit", {}, {::i2c::type_of<::GlobalNamespace::PaperPlaneProjectile*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, collider);
}
inline void GlobalNamespace::MonkeyeProjectileTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeProjectileTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeyeProjectileTarget* GlobalNamespace::MonkeyeProjectileTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeyeProjectileTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeyeProjectileTarget::MonkeyeProjectileTarget()   {
}

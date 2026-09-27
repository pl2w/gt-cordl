#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ThrowableHoldableCosmetic.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ThrowableHoldableCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticEffectsOnPlayers_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__IProjectile_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ThrowableHoldableCosmetic_def.hpp"
#include "GorillaTag/Shared/Scripts/zzzz__FirecrackerProjectile_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__WaitForSeconds_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::*)()>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5d786a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::*)()>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::Awake)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5d7891c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::OnGrab)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d78a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::OnRelease)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x5d78a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::*)()>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::OnDisable)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5d7938c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic.UseAlternativeProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::*)()>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::UseAlternativeProjectile)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d794d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                        {"UseAlternativeProjectile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic.ForceBackToDock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::*)()>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::ForceBackToDock)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d79540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                        {"ForceBackToDock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic.ReEnableAfterDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::*)(::UnityEngine::GameObject*)>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::ReEnableAfterDelay)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d7954c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                        {"ReEnableAfterDelay", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic.OnThrowEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::OnThrowEvent)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5d795fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                        {"OnThrowEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic.OnThrowLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::OnThrowLocal)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5d78fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                        {"OnThrowLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic.HitStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::*)(::GorillaTag::Shared::Scripts::FirecrackerProjectile*, ::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::HitStart)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d79918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                        {"HitStart", {}, {::i2c::type_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic.HitComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::*)(::GorillaTag::Cosmetics::IProjectile*)>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::HitComplete)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5d79a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                        {"HitComplete", {}, {::i2c::type_of<::GorillaTag::Cosmetics::IProjectile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::*)()>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d79cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_projectilePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_projectilePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectilePrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_alternativeProjectilePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alternativeProjectilePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_alternativeProjectilePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alternativeProjectilePrefab;
}
constexpr void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_set_alternativeProjectilePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alternativeProjectilePrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_disableWhenThrown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhenThrown;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_disableWhenThrown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhenThrown;
}
constexpr void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_set_disableWhenThrown(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableWhenThrown = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_firecrackerCallLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firecrackerCallLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_firecrackerCallLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firecrackerCallLimiter;
}
constexpr void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_set_firecrackerCallLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firecrackerCallLimiter = value;
}
constexpr float_t& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_respawnCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnCooldown;
}
constexpr float_t const& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_respawnCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnCooldown;
}
constexpr void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_set_respawnCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnCooldown = value;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers>& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_playersEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersEffect;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers> const& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_playersEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersEffect;
}
constexpr void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_set_playersEffect(::UnityW<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersEffect = value;
}
constexpr int32_t& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_projectileHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileHash;
}
constexpr int32_t const& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_projectileHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileHash;
}
constexpr void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_set_projectileHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileHash = value;
}
constexpr int32_t& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_alternativeProjectileHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alternativeProjectileHash;
}
constexpr int32_t const& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_alternativeProjectileHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alternativeProjectileHash;
}
constexpr void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_set_alternativeProjectileHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alternativeProjectileHash = value;
}
constexpr int32_t& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_currentProjectileHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentProjectileHash;
}
constexpr int32_t const& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_currentProjectileHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentProjectileHash;
}
constexpr void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_set_currentProjectileHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentProjectileHash = value;
}
constexpr bool& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_forceBackToDock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceBackToDock;
}
constexpr bool const& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_forceBackToDock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceBackToDock;
}
constexpr void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_set_forceBackToDock(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceBackToDock = value;
}
constexpr ::UnityEngine::WaitForSeconds*& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_respawnWait()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnWait;
}
constexpr ::UnityEngine::WaitForSeconds* const& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get_respawnWait() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnWait;
}
constexpr void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_set_respawnWait(::UnityEngine::WaitForSeconds*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnWait = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
inline void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline bool GorillaTag::Cosmetics::ThrowableHoldableCosmetic::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::UseAlternativeProjectile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                        {"UseAlternativeProjectile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::ForceBackToDock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                        {"ForceBackToDock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTag::Cosmetics::ThrowableHoldableCosmetic::ReEnableAfterDelay(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                        {"ReEnableAfterDelay", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, obj);
}
inline void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::OnThrowEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                        {"OnThrowEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::OnThrowLocal(::UnityEngine::Vector3  startPos, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::GlobalNamespace::VRRig*  ownerRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                        {"OnThrowLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startPos, rotation, velocity, ownerRig);
}
inline void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::HitStart(::GorillaTag::Shared::Scripts::FirecrackerProjectile*  firecracker, ::UnityEngine::Vector3  contactPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                        {"HitStart", {}, {::i2c::type_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firecracker, contactPos);
}
inline void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::HitComplete(::GorillaTag::Cosmetics::IProjectile*  projectile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                        {"HitComplete", {}, {::i2c::type_of<::GorillaTag::Cosmetics::IProjectile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile);
}
inline void GorillaTag::Cosmetics::ThrowableHoldableCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic* GorillaTag::Cosmetics::ThrowableHoldableCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic::ThrowableHoldableCosmetic()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::*)(int32_t)>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d795d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::*)()>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d79d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::*)()>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d79d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::*)()>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d79dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::*)()>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d79de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::*)()>(&::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d79e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic>& GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic> const& GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::__cordl_internal_set___4__this(::UnityW<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::__cordl_internal_get_obj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::__cordl_internal_get_obj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obj;
}
constexpr void GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::__cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___obj = value;
}
inline void GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19* GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19()   {
}

#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GRSquishVolume.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRSquishVolume_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoon_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRSquishVolume_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSquishVolume.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSquishVolume::*)()>(&::GorillaTagScripts::GhostReactor::GRSquishVolume::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1c1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSquishVolume.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSquishVolume::*)()>(&::GorillaTagScripts::GhostReactor::GRSquishVolume::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1c1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSquishVolume.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSquishVolume::*)()>(&::GorillaTagScripts::GhostReactor::GRSquishVolume::Start)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5c1c1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSquishVolume.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSquishVolume::*)()>(&::GorillaTagScripts::GhostReactor::GRSquishVolume::SliceUpdate)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5c1c3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSquishVolume.SetCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSquishVolume::*)(bool)>(&::GorillaTagScripts::GhostReactor::GRSquishVolume::SetCollider)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c1c35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"SetCollider", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSquishVolume.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSquishVolume::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::GhostReactor::GRSquishVolume::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5c1c60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSquishVolume.SetTentacleColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSquishVolume::*)(bool)>(&::GorillaTagScripts::GhostReactor::GRSquishVolume::SetTentacleColliders)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c1c378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"SetTentacleColliders", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSquishVolume.ReenableCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::GhostReactor::GRSquishVolume::*)()>(&::GorillaTagScripts::GhostReactor::GRSquishVolume::ReenableCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c1cbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"ReenableCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSquishVolume.GetLaunchVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTagScripts::GhostReactor::GRSquishVolume::*)()>(&::GorillaTagScripts::GhostReactor::GRSquishVolume::GetLaunchVector)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5c1c7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"GetLaunchVector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSquishVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSquishVolume::*)()>(&::GorillaTagScripts::GhostReactor::GRSquishVolume::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c1cc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get__collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get__collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr void GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collider = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get__collidersToDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collidersToDisable;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get__collidersToDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collidersToDisable;
}
constexpr void GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_set__collidersToDisable(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collidersToDisable = value;
}
constexpr float_t& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get__reenableDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reenableDelay;
}
constexpr float_t const& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get__reenableDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reenableDelay;
}
constexpr void GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_set__reenableDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reenableDelay = value;
}
constexpr float_t& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get__launchStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchStrength;
}
constexpr float_t const& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get__launchStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchStrength;
}
constexpr void GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_set__launchStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____launchStrength = value;
}
constexpr float_t& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get__launchDeflectionDegrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchDeflectionDegrees;
}
constexpr float_t const& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get__launchDeflectionDegrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchDeflectionDegrees;
}
constexpr void GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_set__launchDeflectionDegrees(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____launchDeflectionDegrees = value;
}
constexpr ::UnityEngine::Coroutine*& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get__reenableCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reenableCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get__reenableCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reenableCoroutine;
}
constexpr void GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_set__reenableCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reenableCoroutine = value;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon>& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get_moonBoss()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonBoss;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon> const& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get_moonBoss() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonBoss;
}
constexpr void GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_set_moonBoss(::UnityW<::GlobalNamespace::GREnemyBossMoon>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonBoss = value;
}
constexpr float_t& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get_squishHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squishHeight;
}
constexpr float_t const& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get_squishHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squishHeight;
}
constexpr void GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_set_squishHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squishHeight = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get_rotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationOffset;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get_rotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationOffset;
}
constexpr void GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_set_rotationOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationOffset = value;
}
constexpr float_t& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get_facingDownDegrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___facingDownDegrees;
}
constexpr float_t const& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get_facingDownDegrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___facingDownDegrees;
}
constexpr void GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_set_facingDownDegrees(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___facingDownDegrees = value;
}
constexpr bool& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get_overrideDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideDisabled;
}
constexpr bool const& GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_get_overrideDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideDisabled;
}
constexpr void GorillaTagScripts::GhostReactor::GRSquishVolume::__cordl_internal_set_overrideDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideDisabled = value;
}
inline void GorillaTagScripts::GhostReactor::GRSquishVolume::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRSquishVolume::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRSquishVolume::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRSquishVolume::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRSquishVolume::SetCollider(bool  colliderEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"SetCollider", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colliderEnabled);
}
inline void GorillaTagScripts::GhostReactor::GRSquishVolume::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::GhostReactor::GRSquishVolume::SetTentacleColliders(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"SetTentacleColliders", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::GhostReactor::GRSquishVolume::ReenableCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"ReenableCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaTagScripts::GhostReactor::GRSquishVolume::GetLaunchVector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {"GetLaunchVector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRSquishVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GhostReactor::GRSquishVolume* GorillaTagScripts::GhostReactor::GRSquishVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GhostReactor::GRSquishVolume*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GorillaTagScripts::GhostReactor::GRSquishVolume::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GorillaTagScripts::GhostReactor::GRSquishVolume::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GhostReactor::GRSquishVolume::GRSquishVolume()   {
}
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::*)(int32_t)>(&::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c1cc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::*)()>(&::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1cc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::*)()>(&::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::MoveNext)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c1cc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::*)()>(&::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1cd58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::*)()>(&::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c1cd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::*)()>(&::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1cd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::GhostReactor::GRSquishVolume>& GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::GhostReactor::GRSquishVolume> const& GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::GhostReactor::GRSquishVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18* GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18::GRSquishVolume__ReenableCoroutine_d__18()   {
}

#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/FirecrackerProjectile.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Shared/Scripts/zzzz__FirecrackerProjectile_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_SyncOptions_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__IProjectile_def.hpp"
#include "GorillaTag/Shared/Scripts/zzzz__FirecrackerProjectile_def.hpp"
#include "GorillaTag/zzzz__TickSystemTimer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Shared::Scripts::FirecrackerProjectile::*)()>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4cb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::FirecrackerProjectile::*)(bool)>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4cb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::FirecrackerProjectile::*)()>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile::Tick)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d4cb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::FirecrackerProjectile::*)()>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile::OnEnable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5d4cbdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::FirecrackerProjectile::*)()>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile::OnDisable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d4ccd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::FirecrackerProjectile::*)()>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile::Awake)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d4cd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile.Detonate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::FirecrackerProjectile::*)()>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile::Detonate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d4ce78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"Detonate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile.SetTransferrableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::FirecrackerProjectile::*)(::GlobalNamespace::TransferrableObject_SyncOptions, int32_t)>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile::SetTransferrableState)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5d4cf18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"SetTransferrableState", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_SyncOptions>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile.Launch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::FirecrackerProjectile::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, ::GlobalNamespace::VRRig*, int32_t)>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile::Launch)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5d4d028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"Launch", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::FirecrackerProjectile::*)(::UnityEngine::Collision*)>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5d4d168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile.Sizzle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTag::Shared::Scripts::FirecrackerProjectile::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile::Sizzle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d4d2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"Sizzle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile.Detonate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::FirecrackerProjectile::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile::Detonate)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5d4d390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"Detonate", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::FirecrackerProjectile::*)()>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d4d59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_explosionEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explosionEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_explosionEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explosionEffect;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_explosionEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___explosionEffect = value;
}
constexpr float_t& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_forceBackToPoolAfterSec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceBackToPoolAfterSec;
}
constexpr float_t const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_forceBackToPoolAfterSec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceBackToPoolAfterSec;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_forceBackToPoolAfterSec(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceBackToPoolAfterSec = value;
}
constexpr float_t& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_explosionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explosionTime;
}
constexpr float_t const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_explosionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explosionTime;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_explosionTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___explosionTime = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_disableWhenHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhenHit;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_disableWhenHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhenHit;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_disableWhenHit(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableWhenHit = value;
}
constexpr float_t& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_sizzleDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizzleDuration;
}
constexpr float_t const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_sizzleDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizzleDuration;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_sizzleDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizzleDuration = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_sizzleAudioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizzleAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_sizzleAudioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizzleAudioClip;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_sizzleAudioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizzleAudioClip = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnEnableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnableObject;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnEnableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnableObject;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_OnEnableObject(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEnableObject = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>,::UnityEngine::Vector3>*& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnCollisionEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCollisionEntered;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>,::UnityEngine::Vector3>* const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnCollisionEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCollisionEntered;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_OnCollisionEntered(::UnityEngine::Events::UnityEvent_2<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>,::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCollisionEntered = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>,::UnityEngine::Vector3>*& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnDetonationStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDetonationStart;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>,::UnityEngine::Vector3>* const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnDetonationStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDetonationStart;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_OnDetonationStart(::UnityEngine::Events::UnityEvent_2<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>,::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDetonationStart = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>>*& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnDetonationComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDetonationComplete;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>>* const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnDetonationComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDetonationComplete;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_OnDetonationComplete(::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDetonationComplete = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr float_t& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_timeCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeCreated;
}
constexpr float_t const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_timeCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeCreated;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_timeCreated(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeCreated = value;
}
constexpr float_t& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_timeExploded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeExploded;
}
constexpr float_t const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_timeExploded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeExploded;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_timeExploded(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeExploded = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::GorillaTag::TickSystemTimer*& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_m_timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_timer;
}
constexpr ::GorillaTag::TickSystemTimer* const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_m_timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_timer;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_m_timer(::GorillaTag::TickSystemTimer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_timer = value;
}
constexpr bool& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_collisionEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionEntered;
}
constexpr bool const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_collisionEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionEntered;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_collisionEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionEntered = value;
}
constexpr bool& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_useTransferrableObjectState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTransferrableObjectState;
}
constexpr bool const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_useTransferrableObjectState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTransferrableObjectState;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_useTransferrableObjectState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useTransferrableObjectState = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnResetProjectileState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnResetProjectileState;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnResetProjectileState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnResetProjectileState;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_OnResetProjectileState(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnResetProjectileState = value;
}
constexpr ::StringW& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_boolADebugName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolADebugName;
}
constexpr ::StringW const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_boolADebugName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolADebugName;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_boolADebugName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boolADebugName = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateBoolATrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolATrue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateBoolATrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolATrue;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_OnItemStateBoolATrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolATrue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateBoolAFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolAFalse;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateBoolAFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolAFalse;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_OnItemStateBoolAFalse(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolAFalse = value;
}
constexpr ::StringW& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_boolBDebugName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolBDebugName;
}
constexpr ::StringW const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_boolBDebugName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolBDebugName;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_boolBDebugName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boolBDebugName = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateBoolBTrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolBTrue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateBoolBTrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolBTrue;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_OnItemStateBoolBTrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolBTrue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateBoolBFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolBFalse;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateBoolBFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolBFalse;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_OnItemStateBoolBFalse(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolBFalse = value;
}
constexpr ::StringW& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_boolCDebugName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolCDebugName;
}
constexpr ::StringW const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_boolCDebugName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolCDebugName;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_boolCDebugName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boolCDebugName = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateBoolCTrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolCTrue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateBoolCTrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolCTrue;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_OnItemStateBoolCTrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolCTrue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateBoolCFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolCFalse;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateBoolCFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolCFalse;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_OnItemStateBoolCFalse(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolCFalse = value;
}
constexpr ::StringW& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_boolDDebugName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolDDebugName;
}
constexpr ::StringW const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_boolDDebugName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolDDebugName;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_boolDDebugName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boolDDebugName = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateBoolDTrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolDTrue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateBoolDTrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolDTrue;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_OnItemStateBoolDTrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolDTrue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateBoolDFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolDFalse;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateBoolDFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolDFalse;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_OnItemStateBoolDFalse(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolDFalse = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateIntChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateIntChanged;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get_OnItemStateIntChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateIntChanged;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set_OnItemStateIntChanged(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateIntChanged = value;
}
constexpr bool& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline bool GorillaTag::Shared::Scripts::FirecrackerProjectile::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Shared::Scripts::FirecrackerProjectile::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Shared::Scripts::FirecrackerProjectile::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Shared::Scripts::FirecrackerProjectile::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Shared::Scripts::FirecrackerProjectile::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Shared::Scripts::FirecrackerProjectile::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Shared::Scripts::FirecrackerProjectile::Detonate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"Detonate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Shared::Scripts::FirecrackerProjectile::SetTransferrableState(::GlobalNamespace::TransferrableObject_SyncOptions  syncType, int32_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"SetTransferrableState", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_SyncOptions>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, syncType, state);
}
inline void GorillaTag::Shared::Scripts::FirecrackerProjectile::Launch(::UnityEngine::Vector3  startPosition, ::UnityEngine::Quaternion  startRotation, ::UnityEngine::Vector3  velocity, float_t  chargeFrac, ::GlobalNamespace::VRRig*  ownerRig, int32_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"Launch", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startPosition, startRotation, velocity, chargeFrac, ownerRig, progress);
}
inline void GorillaTag::Shared::Scripts::FirecrackerProjectile::OnCollisionEnter(::UnityEngine::Collision*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::System::Collections::IEnumerator* GorillaTag::Shared::Scripts::FirecrackerProjectile::Sizzle(::UnityEngine::Vector3  contactPoint, ::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"Sizzle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, contactPoint, normal);
}
inline void GorillaTag::Shared::Scripts::FirecrackerProjectile::Detonate(::UnityEngine::Vector3  contactPoint, ::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {"Detonate", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contactPoint, normal);
}
inline void GorillaTag::Shared::Scripts::FirecrackerProjectile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Shared::Scripts::FirecrackerProjectile* GorillaTag::Shared::Scripts::FirecrackerProjectile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Shared::Scripts::FirecrackerProjectile*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTag::Shared::Scripts::FirecrackerProjectile::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTag::Shared::Scripts::FirecrackerProjectile::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GorillaTag::Cosmetics::IProjectile"
constexpr  GorillaTag::Shared::Scripts::FirecrackerProjectile::operator ::GorillaTag::Cosmetics::IProjectile*() noexcept {
return static_cast<::GorillaTag::Cosmetics::IProjectile*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::Cosmetics::IProjectile"
constexpr ::GorillaTag::Cosmetics::IProjectile* GorillaTag::Shared::Scripts::FirecrackerProjectile::i___GorillaTag__Cosmetics__IProjectile() noexcept {
return static_cast<::GorillaTag::Cosmetics::IProjectile*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Shared::Scripts::FirecrackerProjectile::FirecrackerProjectile()   {
}
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::*)(int32_t)>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d4d574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::*)()>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d4d628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::*)()>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5d4d62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::*)()>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4d7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::*)()>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d4d7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::*)()>(&::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4d7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>& GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile> const& GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::__cordl_internal_set___4__this(::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::__cordl_internal_get_contactPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactPoint;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::__cordl_internal_get_contactPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactPoint;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::__cordl_internal_set_contactPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contactPoint = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::__cordl_internal_get_normal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normal;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::__cordl_internal_get_normal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normal;
}
constexpr void GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::__cordl_internal_set_normal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normal = value;
}
inline void GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43* GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43::FirecrackerProjectile__Sizzle_d__43()   {
}

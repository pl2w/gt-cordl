#pragma once
// IWYU pragma private; include "GlobalNamespace/PaperPlaneProjectile.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PaperPlaneProjectile_def.hpp"
#include "GlobalNamespace/zzzz__PaperPlaneProjectile_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_SyncOptions_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Reactions/zzzz__SpawnWorldEffects_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile.add_OnHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneProjectile::*)(::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*)>(&::GlobalNamespace::PaperPlaneProjectile::add_OnHit)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x578b760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"add_OnHit", {}, {::i2c::type_of<::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile.remove_OnHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneProjectile::*)(::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*)>(&::GlobalNamespace::PaperPlaneProjectile::remove_OnHit)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x578b7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"remove_OnHit", {}, {::i2c::type_of<::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile.get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::PaperPlaneProjectile::*)()>(&::GlobalNamespace::PaperPlaneProjectile::get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x578b898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile.get_MyRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GlobalNamespace::PaperPlaneProjectile::*)()>(&::GlobalNamespace::PaperPlaneProjectile::get_MyRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x578b8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"get_MyRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneProjectile::*)()>(&::GlobalNamespace::PaperPlaneProjectile::Awake)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x578b8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneProjectile::*)()>(&::GlobalNamespace::PaperPlaneProjectile::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x578b91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile.ResetProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneProjectile::*)()>(&::GlobalNamespace::PaperPlaneProjectile::ResetProjectile)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x578b920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"ResetProjectile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile.SetTransferrableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneProjectile::*)(::GlobalNamespace::TransferrableObject_SyncOptions, int32_t)>(&::GlobalNamespace::PaperPlaneProjectile::SetTransferrableState)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x578b95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"SetTransferrableState", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_SyncOptions>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile.Launch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneProjectile::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::PaperPlaneProjectile::Launch)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x578ba6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"Launch", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneProjectile::*)()>(&::GlobalNamespace::PaperPlaneProjectile::Update)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x578bd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile.SetVRRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneProjectile::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::PaperPlaneProjectile::SetVRRig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x578c28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"SetVRRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneProjectile::*)()>(&::GlobalNamespace::PaperPlaneProjectile::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x578c29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneProjectile::*)()>(&::GlobalNamespace::PaperPlaneProjectile::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x578c2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHit;
}
constexpr ::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit* const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHit;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_OnHit(::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHit = value;
}
constexpr float_t& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get__timeElapsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeElapsed;
}
constexpr float_t const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get__timeElapsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeElapsed;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set__timeElapsed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeElapsed = value;
}
constexpr float_t& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get__speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speed;
}
constexpr float_t const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get__speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speed;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set__speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speed = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get__direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____direction;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get__direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____direction;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set__direction(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____direction = value;
}
constexpr bool& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get__stopped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopped;
}
constexpr bool const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get__stopped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopped;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set__stopped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stopped = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get__tCached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tCached;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get__tCached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tCached;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set__tCached(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tCached = value;
}
constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_spawnWorldEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnWorldEffects;
}
constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects> const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_spawnWorldEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnWorldEffects;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_spawnWorldEffects(::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnWorldEffects = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_nextPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_nextPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPos;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_nextPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPos = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_results()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___results;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_results() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___results;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_results(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___results = value;
}
constexpr float_t& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_maxFlightTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxFlightTime;
}
constexpr float_t const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_maxFlightTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxFlightTime;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_maxFlightTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxFlightTime = value;
}
constexpr float_t& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_minFlightTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minFlightTime;
}
constexpr float_t const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_minFlightTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minFlightTime;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_minFlightTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minFlightTime = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_speedCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_speedCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedCurve;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_speedCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedCurve = value;
}
constexpr float_t& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr float_t& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_minSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSpeed;
}
constexpr float_t const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_minSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSpeed;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_minSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minSpeed = value;
}
constexpr bool& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_enableRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableRotation;
}
constexpr bool const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_enableRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableRotation;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_enableRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableRotation = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_flyingObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flyingObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_flyingObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flyingObject;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_flyingObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flyingObject = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_crashingObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crashingObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_crashingObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crashingObject;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_crashingObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crashingObject = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
constexpr bool& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_useTransferrableObjectState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTransferrableObjectState;
}
constexpr bool const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_useTransferrableObjectState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTransferrableObjectState;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_useTransferrableObjectState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useTransferrableObjectState = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnResetProjectileState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnResetProjectileState;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnResetProjectileState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnResetProjectileState;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_OnResetProjectileState(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnResetProjectileState = value;
}
constexpr ::StringW& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_boolADebugName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolADebugName;
}
constexpr ::StringW const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_boolADebugName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolADebugName;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_boolADebugName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boolADebugName = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateBoolATrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolATrue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateBoolATrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolATrue;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_OnItemStateBoolATrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolATrue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateBoolAFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolAFalse;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateBoolAFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolAFalse;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_OnItemStateBoolAFalse(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolAFalse = value;
}
constexpr ::StringW& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_boolBDebugName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolBDebugName;
}
constexpr ::StringW const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_boolBDebugName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolBDebugName;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_boolBDebugName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boolBDebugName = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateBoolBTrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolBTrue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateBoolBTrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolBTrue;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_OnItemStateBoolBTrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolBTrue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateBoolBFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolBFalse;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateBoolBFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolBFalse;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_OnItemStateBoolBFalse(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolBFalse = value;
}
constexpr ::StringW& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_boolCDebugName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolCDebugName;
}
constexpr ::StringW const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_boolCDebugName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolCDebugName;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_boolCDebugName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boolCDebugName = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateBoolCTrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolCTrue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateBoolCTrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolCTrue;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_OnItemStateBoolCTrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolCTrue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateBoolCFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolCFalse;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateBoolCFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolCFalse;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_OnItemStateBoolCFalse(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolCFalse = value;
}
constexpr ::StringW& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_boolDDebugName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolDDebugName;
}
constexpr ::StringW const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_boolDDebugName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolDDebugName;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_boolDDebugName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boolDDebugName = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateBoolDTrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolDTrue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateBoolDTrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolDTrue;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_OnItemStateBoolDTrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolDTrue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateBoolDFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolDFalse;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateBoolDFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolDFalse;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_OnItemStateBoolDFalse(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolDFalse = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateIntChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateIntChanged;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_OnItemStateIntChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateIntChanged;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_OnItemStateIntChanged(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateIntChanged = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr float_t& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_scaleFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleFactor;
}
constexpr float_t const& GlobalNamespace::PaperPlaneProjectile::__cordl_internal_get_scaleFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleFactor;
}
constexpr void GlobalNamespace::PaperPlaneProjectile::__cordl_internal_set_scaleFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleFactor = value;
}
inline void GlobalNamespace::PaperPlaneProjectile::add_OnHit(::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"add_OnHit", {}, {::i2c::type_of<::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PaperPlaneProjectile::remove_OnHit(::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"remove_OnHit", {}, {::i2c::type_of<::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::PaperPlaneProjectile::get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::PaperPlaneProjectile::get_MyRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"get_MyRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline void GlobalNamespace::PaperPlaneProjectile::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaperPlaneProjectile::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaperPlaneProjectile::ResetProjectile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"ResetProjectile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaperPlaneProjectile::SetTransferrableState(::GlobalNamespace::TransferrableObject_SyncOptions  syncType, int32_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"SetTransferrableState", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_SyncOptions>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, syncType, state);
}
inline void GlobalNamespace::PaperPlaneProjectile::Launch(::UnityEngine::Vector3  startPos, ::UnityEngine::Quaternion  startRot, ::UnityEngine::Vector3  vel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"Launch", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startPos, startRot, vel);
}
inline void GlobalNamespace::PaperPlaneProjectile::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaperPlaneProjectile::SetVRRig(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"SetVRRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::PaperPlaneProjectile::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaperPlaneProjectile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PaperPlaneProjectile* GlobalNamespace::PaperPlaneProjectile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PaperPlaneProjectile*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PaperPlaneProjectile::PaperPlaneProjectile()   {
}
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x578c450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x578c4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*>(),
                    {::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit::*)(::UnityEngine::Vector3, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x578c504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*>(),
                    {::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit::*)(::System::IAsyncResult*)>(&::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x578c58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*>(),
                    {::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit::Invoke(::UnityEngine::Vector3  endPoint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endPoint);
}
inline ::System::IAsyncResult* GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit::BeginInvoke(::UnityEngine::Vector3  endPoint, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, endPoint, callback, object);
}
inline void GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit* GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit::PaperPlaneProjectile_PaperPlaneHit()   {
}

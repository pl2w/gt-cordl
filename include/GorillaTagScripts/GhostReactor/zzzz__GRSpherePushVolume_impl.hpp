#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GRSpherePushVolume.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRSpherePushVolume_PushKind_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRSpherePushVolume_def.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRSpherePushVolume_PushKind_def.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRSpherePushVolume_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSpherePushVolume::*)()>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c1b6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume.Trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSpherePushVolume::*)()>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume::Trigger)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c1b768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {"Trigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSpherePushVolume::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume::OnTriggerStay)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5c1b810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume.ActionCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::GhostReactor::GRSpherePushVolume::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume::ActionCoroutine)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c1b950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {"ActionCoroutine", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume.DisableCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::GhostReactor::GRSpherePushVolume::*)()>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume::DisableCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c1b7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {"DisableCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume.CalculatePushVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTagScripts::GhostReactor::GRSpherePushVolume::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume::CalculatePushVector)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c1ba28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {"CalculatePushVector", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume.CalculateRadialPushVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTagScripts::GhostReactor::GRSpherePushVolume::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume::CalculateRadialPushVector)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5c1ba78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {"CalculateRadialPushVector", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume.CalculateUpAndOutPushVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTagScripts::GhostReactor::GRSpherePushVolume::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume::CalculateUpAndOutPushVector)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5c1bc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {"CalculateUpAndOutPushVector", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSpherePushVolume::*)()>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c1be50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GRSpherePushVolume_PushKind& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__pushKind()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pushKind;
}
constexpr ::GlobalNamespace::GRSpherePushVolume_PushKind const& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__pushKind() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pushKind;
}
constexpr void GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_set__pushKind(::GlobalNamespace::GRSpherePushVolume_PushKind  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pushKind = value;
}
constexpr float_t& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__pushDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pushDelay;
}
constexpr float_t const& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__pushDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pushDelay;
}
constexpr void GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_set__pushDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pushDelay = value;
}
constexpr float_t& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__pushCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pushCooldown;
}
constexpr float_t const& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__pushCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pushCooldown;
}
constexpr void GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_set__pushCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pushCooldown = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__pushScaling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pushScaling;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__pushScaling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pushScaling;
}
constexpr void GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_set__pushScaling(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pushScaling = value;
}
constexpr float_t& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__pushForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pushForce;
}
constexpr float_t const& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__pushForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pushForce;
}
constexpr void GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_set__pushForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pushForce = value;
}
constexpr float_t& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__disableAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableAfter;
}
constexpr float_t const& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__disableAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableAfter;
}
constexpr void GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_set__disableAfter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableAfter = value;
}
constexpr ::UnityW<::UnityEngine::SphereCollider>& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr ::UnityW<::UnityEngine::SphereCollider> const& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr void GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_set__collider(::UnityW<::UnityEngine::SphereCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collider = value;
}
constexpr bool& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__localFlung()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localFlung;
}
constexpr bool const& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__localFlung() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localFlung;
}
constexpr void GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_set__localFlung(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localFlung = value;
}
constexpr ::UnityEngine::Coroutine*& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__coroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutine;
}
constexpr ::UnityEngine::Coroutine* const& GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_get__coroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutine;
}
constexpr void GorillaTagScripts::GhostReactor::GRSpherePushVolume::__cordl_internal_set__coroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coroutine = value;
}
inline void GorillaTagScripts::GhostReactor::GRSpherePushVolume::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRSpherePushVolume::Trigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {"Trigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRSpherePushVolume::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::GhostReactor::GRSpherePushVolume::ActionCoroutine(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {"ActionCoroutine", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, other);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::GhostReactor::GRSpherePushVolume::DisableCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {"DisableCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaTagScripts::GhostReactor::GRSpherePushVolume::CalculatePushVector(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {"CalculatePushVector", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, other);
}
inline ::UnityEngine::Vector3 GorillaTagScripts::GhostReactor::GRSpherePushVolume::CalculateRadialPushVector(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {"CalculateRadialPushVector", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, other);
}
inline ::UnityEngine::Vector3 GorillaTagScripts::GhostReactor::GRSpherePushVolume::CalculateUpAndOutPushVector(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {"CalculateUpAndOutPushVector", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, other);
}
inline void GorillaTagScripts::GhostReactor::GRSpherePushVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GhostReactor::GRSpherePushVolume* GorillaTagScripts::GhostReactor::GRSpherePushVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GhostReactor::GRSpherePushVolume*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GhostReactor::GRSpherePushVolume::GRSpherePushVolume()   {
}
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::*)(int32_t)>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c1ba00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::*)()>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1c0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::*)()>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::MoveNext)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5c1c0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::*)()>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1c184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::*)()>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c1c18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::*)()>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1c1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>& GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume> const& GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14* GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14::GRSpherePushVolume__DisableCoroutine_d__14()   {
}
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::*)(int32_t)>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c1b9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::*)()>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1bea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::*)()>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5c1bea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::*)()>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1c06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::*)()>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c1c074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::*)()>(&::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1c0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>& GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume> const& GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::__cordl_internal_get_other()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___other;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::__cordl_internal_get_other() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___other;
}
constexpr void GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::__cordl_internal_set_other(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___other = value;
}
inline void GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13* GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13::GRSpherePushVolume__ActionCoroutine_d__13()   {
}

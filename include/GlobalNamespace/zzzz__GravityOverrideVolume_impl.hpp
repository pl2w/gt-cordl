#pragma once
// IWYU pragma private; include "GlobalNamespace/GravityOverrideVolume.hpp"
#include "GlobalNamespace/zzzz__GravityOverrideVolume_GravityType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GravityOverrideVolume_def.hpp"
#include "GlobalNamespace/zzzz__CompositeTriggerEvents_def.hpp"
#include "GlobalNamespace/zzzz__GravityOverrideVolume_GravityType_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GravityOverrideVolume.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GravityOverrideVolume::*)()>(&::GlobalNamespace::GravityOverrideVolume::OnEnable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x579e5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GravityOverrideVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GravityOverrideVolume.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GravityOverrideVolume::*)()>(&::GlobalNamespace::GravityOverrideVolume::OnDisable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x579e6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GravityOverrideVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GravityOverrideVolume.OnColliderEnteredVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GravityOverrideVolume::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GravityOverrideVolume::OnColliderEnteredVolume)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x579e810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GravityOverrideVolume*>(),
                        {"OnColliderEnteredVolume", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GravityOverrideVolume.OnColliderExitedVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GravityOverrideVolume::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GravityOverrideVolume::OnColliderExitedVolume)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x579e978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GravityOverrideVolume*>(),
                        {"OnColliderExitedVolume", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GravityOverrideVolume.GravityOverrideFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GravityOverrideVolume::*)(::GorillaLocomotion::GTPlayer*)>(&::GlobalNamespace::GravityOverrideVolume::GravityOverrideFunction)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x579ea98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GravityOverrideVolume*>(),
                        {"GravityOverrideFunction", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GravityOverrideVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GravityOverrideVolume::*)()>(&::GlobalNamespace::GravityOverrideVolume::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x579ec38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GravityOverrideVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GravityOverrideVolume_GravityType& GlobalNamespace::GravityOverrideVolume::__cordl_internal_get_gravityType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityType;
}
constexpr ::GlobalNamespace::GravityOverrideVolume_GravityType const& GlobalNamespace::GravityOverrideVolume::__cordl_internal_get_gravityType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityType;
}
constexpr void GlobalNamespace::GravityOverrideVolume::__cordl_internal_set_gravityType(::GlobalNamespace::GravityOverrideVolume_GravityType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityType = value;
}
constexpr float_t& GlobalNamespace::GravityOverrideVolume::__cordl_internal_get_strength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strength;
}
constexpr float_t const& GlobalNamespace::GravityOverrideVolume::__cordl_internal_get_strength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strength;
}
constexpr void GlobalNamespace::GravityOverrideVolume::__cordl_internal_set_strength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strength = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GravityOverrideVolume::__cordl_internal_get_referenceTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GravityOverrideVolume::__cordl_internal_get_referenceTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceTransform;
}
constexpr void GlobalNamespace::GravityOverrideVolume::__cordl_internal_set_referenceTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___referenceTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents>& GlobalNamespace::GravityOverrideVolume::__cordl_internal_get_triggerEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerEvents;
}
constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents> const& GlobalNamespace::GravityOverrideVolume::__cordl_internal_get_triggerEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerEvents;
}
constexpr void GlobalNamespace::GravityOverrideVolume::__cordl_internal_set_triggerEvents(::UnityW<::GlobalNamespace::CompositeTriggerEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerEvents = value;
}
inline void GlobalNamespace::GravityOverrideVolume::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GravityOverrideVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GravityOverrideVolume::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GravityOverrideVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GravityOverrideVolume::OnColliderEnteredVolume(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GravityOverrideVolume*>(),
                        {"OnColliderEnteredVolume", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::GravityOverrideVolume::OnColliderExitedVolume(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GravityOverrideVolume*>(),
                        {"OnColliderExitedVolume", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::GravityOverrideVolume::GravityOverrideFunction(::GorillaLocomotion::GTPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GravityOverrideVolume*>(),
                        {"GravityOverrideFunction", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::GravityOverrideVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GravityOverrideVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GravityOverrideVolume* GlobalNamespace::GravityOverrideVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GravityOverrideVolume*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GravityOverrideVolume::GravityOverrideVolume()   {
}

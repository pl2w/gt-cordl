#pragma once
// IWYU pragma private; include "GlobalNamespace/GragerHoldable.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GragerHoldable_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GragerHoldable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GragerHoldable::*)()>(&::GlobalNamespace::GragerHoldable::Start)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5652af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GragerHoldable*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GragerHoldable.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GragerHoldable::*)()>(&::GlobalNamespace::GragerHoldable::Update)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x5652cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GragerHoldable*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GragerHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GragerHoldable::*)()>(&::GlobalNamespace::GragerHoldable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5653204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GragerHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::GragerHoldable::__cordl_internal_get_LocalCenterOfMass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalCenterOfMass;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GragerHoldable::__cordl_internal_get_LocalCenterOfMass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalCenterOfMass;
}
constexpr void GlobalNamespace::GragerHoldable::__cordl_internal_set_LocalCenterOfMass(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalCenterOfMass = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GragerHoldable::__cordl_internal_get_LocalRotationAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalRotationAxis;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GragerHoldable::__cordl_internal_get_LocalRotationAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalRotationAxis;
}
constexpr void GlobalNamespace::GragerHoldable::__cordl_internal_set_LocalRotationAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalRotationAxis = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GragerHoldable::__cordl_internal_get_RotationCorrectionEuler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationCorrectionEuler;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GragerHoldable::__cordl_internal_get_RotationCorrectionEuler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationCorrectionEuler;
}
constexpr void GlobalNamespace::GragerHoldable::__cordl_internal_set_RotationCorrectionEuler(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotationCorrectionEuler = value;
}
constexpr float_t& GlobalNamespace::GragerHoldable::__cordl_internal_get_drag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr float_t const& GlobalNamespace::GragerHoldable::__cordl_internal_get_drag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr void GlobalNamespace::GragerHoldable::__cordl_internal_set_drag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drag = value;
}
constexpr float_t& GlobalNamespace::GragerHoldable::__cordl_internal_get_gravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr float_t const& GlobalNamespace::GragerHoldable::__cordl_internal_get_gravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr void GlobalNamespace::GragerHoldable::__cordl_internal_set_gravity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravity = value;
}
constexpr float_t& GlobalNamespace::GragerHoldable::__cordl_internal_get_localFriction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localFriction;
}
constexpr float_t const& GlobalNamespace::GragerHoldable::__cordl_internal_get_localFriction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localFriction;
}
constexpr void GlobalNamespace::GragerHoldable::__cordl_internal_set_localFriction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localFriction = value;
}
constexpr float_t& GlobalNamespace::GragerHoldable::__cordl_internal_get_distancePerClack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distancePerClack;
}
constexpr float_t const& GlobalNamespace::GragerHoldable::__cordl_internal_get_distancePerClack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distancePerClack;
}
constexpr void GlobalNamespace::GragerHoldable::__cordl_internal_set_distancePerClack(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distancePerClack = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GragerHoldable::__cordl_internal_get_clackAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clackAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GragerHoldable::__cordl_internal_get_clackAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clackAudio;
}
constexpr void GlobalNamespace::GragerHoldable::__cordl_internal_set_clackAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clackAudio = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::GragerHoldable::__cordl_internal_get_allClacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allClacks;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::GragerHoldable::__cordl_internal_get_allClacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allClacks;
}
constexpr void GlobalNamespace::GragerHoldable::__cordl_internal_set_allClacks(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allClacks = value;
}
constexpr float_t& GlobalNamespace::GragerHoldable::__cordl_internal_get_centerOfMassRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerOfMassRadius;
}
constexpr float_t const& GlobalNamespace::GragerHoldable::__cordl_internal_get_centerOfMassRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerOfMassRadius;
}
constexpr void GlobalNamespace::GragerHoldable::__cordl_internal_set_centerOfMassRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centerOfMassRadius = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GragerHoldable::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GragerHoldable::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void GlobalNamespace::GragerHoldable::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GragerHoldable::__cordl_internal_get_lastWorldPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWorldPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GragerHoldable::__cordl_internal_get_lastWorldPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWorldPosition;
}
constexpr void GlobalNamespace::GragerHoldable::__cordl_internal_set_lastWorldPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastWorldPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GragerHoldable::__cordl_internal_get_lastClackParentLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastClackParentLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GragerHoldable::__cordl_internal_get_lastClackParentLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastClackParentLocalPosition;
}
constexpr void GlobalNamespace::GragerHoldable::__cordl_internal_set_lastClackParentLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastClackParentLocalPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GragerHoldable::__cordl_internal_get_RotationCorrection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationCorrection;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GragerHoldable::__cordl_internal_get_RotationCorrection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationCorrection;
}
constexpr void GlobalNamespace::GragerHoldable::__cordl_internal_set_RotationCorrection(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotationCorrection = value;
}
inline void GlobalNamespace::GragerHoldable::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GragerHoldable*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GragerHoldable::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GragerHoldable*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GragerHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GragerHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GragerHoldable* GlobalNamespace::GragerHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GragerHoldable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GragerHoldable::GragerHoldable()   {
}

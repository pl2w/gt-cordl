#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/ConsensusGravityZone.hpp"
#include "GorillaTag/Gravity/zzzz__BasicGravityZone_impl.hpp"
#include "GorillaTag/Gravity/zzzz__ConsensusGravityZone_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__ConsensusGravityZoneSettings_def.hpp"
#include "GorillaTag/Gravity/zzzz__MonkeGravityController_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Gravity::ConsensusGravityZone.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::ConsensusGravityZone::*)()>(&::GorillaTag::Gravity::ConsensusGravityZone::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d386bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::ConsensusGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::ConsensusGravityZone*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::ConsensusGravityZone.GetGravityVectorAtPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Gravity::ConsensusGravityZone::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>)>(&::GorillaTag::Gravity::ConsensusGravityZone::GetGravityVectorAtPoint)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d3871c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::ConsensusGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::ConsensusGravityZone*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::ConsensusGravityZone.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::ConsensusGravityZone::*)()>(&::GorillaTag::Gravity::ConsensusGravityZone::FixedUpdate)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x5d38774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::ConsensusGravityZone*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::ConsensusGravityZone.GetRotationIntent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Gravity::ConsensusGravityZone::*)(::by_ref<::UnityEngine::Vector3>)>(&::GorillaTag::Gravity::ConsensusGravityZone::GetRotationIntent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d38c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::ConsensusGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::ConsensusGravityZone*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::ConsensusGravityZone.CopyProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::ConsensusGravityZone::*)(::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings*)>(&::GorillaTag::Gravity::ConsensusGravityZone::CopyProperties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d38c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::ConsensusGravityZone*>(),
                        {"CopyProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::ConsensusGravityZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::ConsensusGravityZone::*)()>(&::GorillaTag::Gravity::ConsensusGravityZone::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d38c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::ConsensusGravityZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_zoneCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_zoneCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneCollider;
}
constexpr void GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_set_zoneCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneCollider = value;
}
constexpr float_t& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_currentRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRot;
}
constexpr float_t const& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_currentRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRot;
}
constexpr void GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_set_currentRot(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentRot = value;
}
constexpr float_t& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_idealRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idealRot;
}
constexpr float_t const& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_idealRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idealRot;
}
constexpr void GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_set_idealRot(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idealRot = value;
}
constexpr float_t& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_rotSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotSpeed;
}
constexpr float_t const& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_rotSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotSpeed;
}
constexpr void GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_set_rotSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotSpeed = value;
}
constexpr float_t& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_weightForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weightForce;
}
constexpr float_t const& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_weightForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weightForce;
}
constexpr void GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_set_weightForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weightForce = value;
}
constexpr float_t& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_centeringForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centeringForce;
}
constexpr float_t const& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_centeringForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centeringForce;
}
constexpr void GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_set_centeringForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centeringForce = value;
}
constexpr float_t& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_drag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr float_t const& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_drag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr void GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_set_drag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drag = value;
}
constexpr float_t& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_rotMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotMin;
}
constexpr float_t const& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_rotMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotMin;
}
constexpr void GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_set_rotMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotMin = value;
}
constexpr float_t& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_rotMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotMax;
}
constexpr float_t const& GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_get_rotMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotMax;
}
constexpr void GorillaTag::Gravity::ConsensusGravityZone::__cordl_internal_set_rotMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotMax = value;
}
inline void GorillaTag::Gravity::ConsensusGravityZone::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::ConsensusGravityZone*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaTag::Gravity::ConsensusGravityZone::GetGravityVectorAtPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  worldPosition, /* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::ConsensusGravityZone*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldPosition, controller);
}
inline void GorillaTag::Gravity::ConsensusGravityZone::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::ConsensusGravityZone*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Gravity::ConsensusGravityZone::GetRotationIntent(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  offsetFromGravity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::ConsensusGravityZone*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, offsetFromGravity);
}
inline void GorillaTag::Gravity::ConsensusGravityZone::CopyProperties(::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::ConsensusGravityZone*>(),
                        {"CopyProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GorillaTag::Gravity::ConsensusGravityZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::ConsensusGravityZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Gravity::ConsensusGravityZone* GorillaTag::Gravity::ConsensusGravityZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Gravity::ConsensusGravityZone*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Gravity::ConsensusGravityZone::ConsensusGravityZone()   {
}

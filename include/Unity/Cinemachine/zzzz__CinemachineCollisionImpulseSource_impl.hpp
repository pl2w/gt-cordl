#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCollisionImpulseSource.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseSource_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCollisionImpulseSource_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision2D_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Rigidbody2D_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollisionImpulseSource.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollisionImpulseSource::*)()>(&::Unity::Cinemachine::CinemachineCollisionImpulseSource::Reset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaee14a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollisionImpulseSource.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollisionImpulseSource::*)()>(&::Unity::Cinemachine::CinemachineCollisionImpulseSource::Start)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xaee14f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollisionImpulseSource.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollisionImpulseSource::*)()>(&::Unity::Cinemachine::CinemachineCollisionImpulseSource::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaee1568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollisionImpulseSource.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollisionImpulseSource::*)(::UnityEngine::Collision*)>(&::Unity::Cinemachine::CinemachineCollisionImpulseSource::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaee156c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollisionImpulseSource.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollisionImpulseSource::*)(::UnityEngine::Collider*)>(&::Unity::Cinemachine::CinemachineCollisionImpulseSource::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaee1890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollisionImpulseSource.GetMassAndVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineCollisionImpulseSource::*)(::UnityEngine::Collider*, ::by_ref<::UnityEngine::Vector3>)>(&::Unity::Cinemachine::CinemachineCollisionImpulseSource::GetMassAndVelocity)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xaee18ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"GetMassAndVelocity", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollisionImpulseSource.GenerateImpactEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollisionImpulseSource::*)(::UnityEngine::Collider*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineCollisionImpulseSource::GenerateImpactEvent)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xaee15b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"GenerateImpactEvent", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollisionImpulseSource.OnCollisionEnter2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollisionImpulseSource::*)(::UnityEngine::Collision2D*)>(&::Unity::Cinemachine::CinemachineCollisionImpulseSource::OnCollisionEnter2D)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaee1b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"OnCollisionEnter2D", {}, {::i2c::type_of<::UnityEngine::Collision2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollisionImpulseSource.OnTriggerEnter2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollisionImpulseSource::*)(::UnityEngine::Collider2D*)>(&::Unity::Cinemachine::CinemachineCollisionImpulseSource::OnTriggerEnter2D)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaee1e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"OnTriggerEnter2D", {}, {::i2c::type_of<::UnityEngine::Collider2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollisionImpulseSource.GetMassAndVelocity2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineCollisionImpulseSource::*)(::UnityEngine::Collider2D*, ::by_ref<::UnityEngine::Vector3>)>(&::Unity::Cinemachine::CinemachineCollisionImpulseSource::GetMassAndVelocity2D)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xaee1e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"GetMassAndVelocity2D", {}, {::i2c::type_of<::UnityEngine::Collider2D*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollisionImpulseSource.GenerateImpactEvent2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollisionImpulseSource::*)(::UnityEngine::Collider2D*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineCollisionImpulseSource::GenerateImpactEvent2D)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xaee1b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"GenerateImpactEvent2D", {}, {::i2c::type_of<::UnityEngine::Collider2D*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollisionImpulseSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollisionImpulseSource::*)()>(&::Unity::Cinemachine::CinemachineCollisionImpulseSource::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaee2090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_get_LayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LayerMask;
}
constexpr ::UnityEngine::LayerMask const& Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_get_LayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LayerMask;
}
constexpr void Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_set_LayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LayerMask = value;
}
constexpr ::StringW& Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_get_IgnoreTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreTag;
}
constexpr ::StringW const& Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_get_IgnoreTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreTag;
}
constexpr void Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_set_IgnoreTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgnoreTag = value;
}
constexpr bool& Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_get_UseImpactDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseImpactDirection;
}
constexpr bool const& Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_get_UseImpactDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseImpactDirection;
}
constexpr void Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_set_UseImpactDirection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseImpactDirection = value;
}
constexpr bool& Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_get_ScaleImpactWithMass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScaleImpactWithMass;
}
constexpr bool const& Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_get_ScaleImpactWithMass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScaleImpactWithMass;
}
constexpr void Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_set_ScaleImpactWithMass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScaleImpactWithMass = value;
}
constexpr bool& Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_get_ScaleImpactWithSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScaleImpactWithSpeed;
}
constexpr bool const& Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_get_ScaleImpactWithSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScaleImpactWithSpeed;
}
constexpr void Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_set_ScaleImpactWithSpeed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScaleImpactWithSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_get_m_RigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_get_m_RigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RigidBody;
}
constexpr void Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_set_m_RigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RigidBody = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody2D>& Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_get_m_RigidBody2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RigidBody2D;
}
constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_get_m_RigidBody2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RigidBody2D;
}
constexpr void Unity::Cinemachine::CinemachineCollisionImpulseSource::__cordl_internal_set_m_RigidBody2D(::UnityW<::UnityEngine::Rigidbody2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RigidBody2D = value;
}
inline void Unity::Cinemachine::CinemachineCollisionImpulseSource::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCollisionImpulseSource::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCollisionImpulseSource::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCollisionImpulseSource::OnCollisionEnter(::UnityEngine::Collision*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Unity::Cinemachine::CinemachineCollisionImpulseSource::OnTriggerEnter(::UnityEngine::Collider*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline float_t Unity::Cinemachine::CinemachineCollisionImpulseSource::GetMassAndVelocity(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Vector3>  vel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"GetMassAndVelocity", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, other, vel);
}
inline void Unity::Cinemachine::CinemachineCollisionImpulseSource::GenerateImpactEvent(::UnityEngine::Collider*  other, ::UnityEngine::Vector3  vel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"GenerateImpactEvent", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, vel);
}
inline void Unity::Cinemachine::CinemachineCollisionImpulseSource::OnCollisionEnter2D(::UnityEngine::Collision2D*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"OnCollisionEnter2D", {}, {::i2c::type_of<::UnityEngine::Collision2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Unity::Cinemachine::CinemachineCollisionImpulseSource::OnTriggerEnter2D(::UnityEngine::Collider2D*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"OnTriggerEnter2D", {}, {::i2c::type_of<::UnityEngine::Collider2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline float_t Unity::Cinemachine::CinemachineCollisionImpulseSource::GetMassAndVelocity2D(::UnityEngine::Collider2D*  other2d, ::by_ref<::UnityEngine::Vector3>  vel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"GetMassAndVelocity2D", {}, {::i2c::type_of<::UnityEngine::Collider2D*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, other2d, vel);
}
inline void Unity::Cinemachine::CinemachineCollisionImpulseSource::GenerateImpactEvent2D(::UnityEngine::Collider2D*  other2d, ::UnityEngine::Vector3  vel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {"GenerateImpactEvent2D", {}, {::i2c::type_of<::UnityEngine::Collider2D*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other2d, vel);
}
inline void Unity::Cinemachine::CinemachineCollisionImpulseSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineCollisionImpulseSource* Unity::Cinemachine::CinemachineCollisionImpulseSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineCollisionImpulseSource*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineCollisionImpulseSource::CinemachineCollisionImpulseSource()   {
}

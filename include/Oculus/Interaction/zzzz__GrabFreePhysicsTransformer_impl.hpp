#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabFreePhysicsTransformer.hpp"
#include "Oculus/Interaction/zzzz__GrabFreeTransformer_GrabPointDelta_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__GrabFreePhysicsTransformer_def.hpp"
#include "Oculus/Interaction/zzzz__IGrabbable_def.hpp"
#include "Oculus/Interaction/zzzz__ITransformer_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer.get_VelocityFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabFreePhysicsTransformer::*)()>(&::Oculus::Interaction::GrabFreePhysicsTransformer::get_VelocityFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4469d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"get_VelocityFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer.set_VelocityFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreePhysicsTransformer::*)(float_t)>(&::Oculus::Interaction::GrabFreePhysicsTransformer::set_VelocityFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4469d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"set_VelocityFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer.get_AngularVelocityFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabFreePhysicsTransformer::*)()>(&::Oculus::Interaction::GrabFreePhysicsTransformer::get_AngularVelocityFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4469e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"get_AngularVelocityFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer.set_AngularVelocityFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreePhysicsTransformer::*)(float_t)>(&::Oculus::Interaction::GrabFreePhysicsTransformer::set_AngularVelocityFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4469e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"set_AngularVelocityFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer.get_MaxLinearDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabFreePhysicsTransformer::*)()>(&::Oculus::Interaction::GrabFreePhysicsTransformer::get_MaxLinearDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4469f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"get_MaxLinearDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer.set_MaxLinearDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreePhysicsTransformer::*)(float_t)>(&::Oculus::Interaction::GrabFreePhysicsTransformer::set_MaxLinearDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4469f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"set_MaxLinearDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer.get_MaxAngularDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabFreePhysicsTransformer::*)()>(&::Oculus::Interaction::GrabFreePhysicsTransformer::get_MaxAngularDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa446a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"get_MaxAngularDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer.set_MaxAngularDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreePhysicsTransformer::*)(float_t)>(&::Oculus::Interaction::GrabFreePhysicsTransformer::set_MaxAngularDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa446a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"set_MaxAngularDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreePhysicsTransformer::*)()>(&::Oculus::Interaction::GrabFreePhysicsTransformer::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa446a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreePhysicsTransformer::*)(::Oculus::Interaction::IGrabbable*)>(&::Oculus::Interaction::GrabFreePhysicsTransformer::Initialize)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa446a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer.BeginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreePhysicsTransformer::*)()>(&::Oculus::Interaction::GrabFreePhysicsTransformer::BeginTransform)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0xa446ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer.UpdateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreePhysicsTransformer::*)()>(&::Oculus::Interaction::GrabFreePhysicsTransformer::UpdateTransform)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xa4471cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer.EndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreePhysicsTransformer::*)()>(&::Oculus::Interaction::GrabFreePhysicsTransformer::EndTransform)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa447b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreePhysicsTransformer::*)()>(&::Oculus::Interaction::GrabFreePhysicsTransformer::FixedUpdate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa447c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer.ApplyVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreePhysicsTransformer::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Oculus::Interaction::GrabFreePhysicsTransformer::ApplyVelocity)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0xa447c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"ApplyVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer.InjectOptionalRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreePhysicsTransformer::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::GrabFreePhysicsTransformer::InjectOptionalRigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4480bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"InjectOptionalRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreePhysicsTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreePhysicsTransformer::*)()>(&::Oculus::Interaction::GrabFreePhysicsTransformer::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa4480c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__velocityFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocityFactor;
}
constexpr float_t const& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__velocityFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocityFactor;
}
constexpr void Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_set__velocityFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____velocityFactor = value;
}
constexpr float_t& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__angularVelocityFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____angularVelocityFactor;
}
constexpr float_t const& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__angularVelocityFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____angularVelocityFactor;
}
constexpr void Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_set__angularVelocityFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____angularVelocityFactor = value;
}
constexpr float_t& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__maxLinearDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxLinearDelta;
}
constexpr float_t const& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__maxLinearDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxLinearDelta;
}
constexpr void Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_set__maxLinearDelta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxLinearDelta = value;
}
constexpr float_t& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__maxAngularDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAngularDelta;
}
constexpr float_t const& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__maxAngularDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAngularDelta;
}
constexpr void Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_set__maxAngularDelta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxAngularDelta = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr ::Oculus::Interaction::IGrabbable*& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__grabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr ::Oculus::Interaction::IGrabbable* const& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__grabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr void Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbable = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__grabDeltaInLocalSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabDeltaInLocalSpace;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__grabDeltaInLocalSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabDeltaInLocalSpace;
}
constexpr void Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_set__grabDeltaInLocalSpace(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabDeltaInLocalSpace = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__lastRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRotation;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__lastRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRotation;
}
constexpr void Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_set__lastRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastRotation = value;
}
constexpr ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__deltas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltas;
}
constexpr ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta> const& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__deltas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltas;
}
constexpr void Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_set__deltas(::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deltas = value;
}
constexpr bool& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__isTransforming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTransforming;
}
constexpr bool const& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__isTransforming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTransforming;
}
constexpr void Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_set__isTransforming(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isTransforming = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__targetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPosition;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__targetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPosition;
}
constexpr void Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_set__targetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetPosition = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__targetRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetRotation;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_get__targetRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetRotation;
}
constexpr void Oculus::Interaction::GrabFreePhysicsTransformer::__cordl_internal_set__targetRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetRotation = value;
}
inline float_t Oculus::Interaction::GrabFreePhysicsTransformer::get_VelocityFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"get_VelocityFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabFreePhysicsTransformer::set_VelocityFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"set_VelocityFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::GrabFreePhysicsTransformer::get_AngularVelocityFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"get_AngularVelocityFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabFreePhysicsTransformer::set_AngularVelocityFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"set_AngularVelocityFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::GrabFreePhysicsTransformer::get_MaxLinearDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"get_MaxLinearDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabFreePhysicsTransformer::set_MaxLinearDelta(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"set_MaxLinearDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::GrabFreePhysicsTransformer::get_MaxAngularDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"get_MaxAngularDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabFreePhysicsTransformer::set_MaxAngularDelta(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"set_MaxAngularDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::GrabFreePhysicsTransformer::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabFreePhysicsTransformer::Initialize(::Oculus::Interaction::IGrabbable*  grabbable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbable);
}
inline void Oculus::Interaction::GrabFreePhysicsTransformer::BeginTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabFreePhysicsTransformer::UpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabFreePhysicsTransformer::EndTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabFreePhysicsTransformer::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabFreePhysicsTransformer::ApplyVelocity(::UnityEngine::Vector3  targetPosition, ::UnityEngine::Quaternion  targetRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"ApplyVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPosition, targetRotation);
}
inline void Oculus::Interaction::GrabFreePhysicsTransformer::InjectOptionalRigidbody(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {"InjectOptionalRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbody);
}
inline void Oculus::Interaction::GrabFreePhysicsTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreePhysicsTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabFreePhysicsTransformer* Oculus::Interaction::GrabFreePhysicsTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabFreePhysicsTransformer*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr  Oculus::Interaction::GrabFreePhysicsTransformer::operator ::Oculus::Interaction::ITransformer*() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* Oculus::Interaction::GrabFreePhysicsTransformer::i___Oculus__Interaction__ITransformer() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabFreePhysicsTransformer::GrabFreePhysicsTransformer()   {
}

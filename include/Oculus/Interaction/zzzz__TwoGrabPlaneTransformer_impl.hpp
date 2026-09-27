#pragma once
// IWYU pragma private; include "Oculus/Interaction/TwoGrabPlaneTransformer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__TwoGrabPlaneTransformer_def.hpp"
#include "Oculus/Interaction/zzzz__FloatConstraint_def.hpp"
#include "Oculus/Interaction/zzzz__IGrabbable_def.hpp"
#include "Oculus/Interaction/zzzz__ITransformer_def.hpp"
#include "Oculus/Interaction/zzzz__TwoGrabPlaneTransformer_TwoGrabPlaneState_def.hpp"
#include "Oculus/Interaction/zzzz__TwoGrabPlaneTransformer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabPlaneTransformer.get_Constraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints* (::Oculus::Interaction::TwoGrabPlaneTransformer::*)()>(&::Oculus::Interaction::TwoGrabPlaneTransformer::get_Constraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44e43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"get_Constraints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabPlaneTransformer.set_Constraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabPlaneTransformer::*)(::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*)>(&::Oculus::Interaction::TwoGrabPlaneTransformer::set_Constraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44e444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"set_Constraints", {}, {::i2c::type_of<::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabPlaneTransformer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabPlaneTransformer::*)(::Oculus::Interaction::IGrabbable*)>(&::Oculus::Interaction::TwoGrabPlaneTransformer::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44e44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabPlaneTransformer.WorldPlaneNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::TwoGrabPlaneTransformer::*)()>(&::Oculus::Interaction::TwoGrabPlaneTransformer::WorldPlaneNormal)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa44e454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"WorldPlaneNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabPlaneTransformer.BeginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabPlaneTransformer::*)()>(&::Oculus::Interaction::TwoGrabPlaneTransformer::BeginTransform)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xa44e618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabPlaneTransformer.UpdateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabPlaneTransformer::*)()>(&::Oculus::Interaction::TwoGrabPlaneTransformer::UpdateTransform)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0xa44eb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabPlaneTransformer.EndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabPlaneTransformer::*)()>(&::Oculus::Interaction::TwoGrabPlaneTransformer::EndTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa44efe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabPlaneTransformer.TwoGrabPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TwoGrabPlaneTransformer_TwoGrabPlaneState (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Oculus::Interaction::TwoGrabPlaneTransformer::TwoGrabPlane)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xa44e8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"TwoGrabPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabPlaneTransformer.InjectOptionalPlaneTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabPlaneTransformer::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::TwoGrabPlaneTransformer::InjectOptionalPlaneTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44efe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"InjectOptionalPlaneTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabPlaneTransformer.InjectOptionalConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabPlaneTransformer::*)(::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*)>(&::Oculus::Interaction::TwoGrabPlaneTransformer::InjectOptionalConstraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44efec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"InjectOptionalConstraints", {}, {::i2c::type_of<::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabPlaneTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabPlaneTransformer::*)()>(&::Oculus::Interaction::TwoGrabPlaneTransformer::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa44eff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_get__planeTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____planeTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_get__planeTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____planeTransform;
}
constexpr void Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_set__planeTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____planeTransform = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_get__localPlaneNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPlaneNormal;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_get__localPlaneNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPlaneNormal;
}
constexpr void Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_set__localPlaneNormal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPlaneNormal = value;
}
constexpr ::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*& Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_get__constraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constraints;
}
constexpr ::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints* const& Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_get__constraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constraints;
}
constexpr void Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_set__constraints(::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____constraints = value;
}
constexpr ::Oculus::Interaction::IGrabbable*& Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_get__grabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr ::Oculus::Interaction::IGrabbable* const& Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_get__grabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr void Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbable = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_get__localToTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localToTarget;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_get__localToTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localToTarget;
}
constexpr void Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_set__localToTarget(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localToTarget = value;
}
constexpr float_t& Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_get__localMagnitudeToTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localMagnitudeToTarget;
}
constexpr float_t const& Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_get__localMagnitudeToTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localMagnitudeToTarget;
}
constexpr void Oculus::Interaction::TwoGrabPlaneTransformer::__cordl_internal_set__localMagnitudeToTarget(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localMagnitudeToTarget = value;
}
inline ::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints* Oculus::Interaction::TwoGrabPlaneTransformer::get_Constraints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"get_Constraints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*>(this, ___internal_method);
}
inline void Oculus::Interaction::TwoGrabPlaneTransformer::set_Constraints(::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"set_Constraints", {}, {::i2c::type_of<::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::TwoGrabPlaneTransformer::Initialize(::Oculus::Interaction::IGrabbable*  grabbable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbable);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::TwoGrabPlaneTransformer::WorldPlaneNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"WorldPlaneNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::TwoGrabPlaneTransformer::BeginTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TwoGrabPlaneTransformer::UpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TwoGrabPlaneTransformer::EndTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TwoGrabPlaneTransformer_TwoGrabPlaneState Oculus::Interaction::TwoGrabPlaneTransformer::TwoGrabPlane(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  planeNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"TwoGrabPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TwoGrabPlaneTransformer_TwoGrabPlaneState>(nullptr, ___internal_method, p0, p1, planeNormal);
}
inline void Oculus::Interaction::TwoGrabPlaneTransformer::InjectOptionalPlaneTransform(::UnityEngine::Transform*  planeTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"InjectOptionalPlaneTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, planeTransform);
}
inline void Oculus::Interaction::TwoGrabPlaneTransformer::InjectOptionalConstraints(::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*  constraints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {"InjectOptionalConstraints", {}, {::i2c::type_of<::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraints);
}
inline void Oculus::Interaction::TwoGrabPlaneTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TwoGrabPlaneTransformer* Oculus::Interaction::TwoGrabPlaneTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TwoGrabPlaneTransformer*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr  Oculus::Interaction::TwoGrabPlaneTransformer::operator ::Oculus::Interaction::ITransformer*() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* Oculus::Interaction::TwoGrabPlaneTransformer::i___Oculus__Interaction__ITransformer() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TwoGrabPlaneTransformer::TwoGrabPlaneTransformer()   {
}
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::*)()>(&::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44f00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::FloatConstraint*& Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::__cordl_internal_get_MaxScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxScale;
}
constexpr ::Oculus::Interaction::FloatConstraint* const& Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::__cordl_internal_get_MaxScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxScale;
}
constexpr void Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::__cordl_internal_set_MaxScale(::Oculus::Interaction::FloatConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxScale = value;
}
constexpr ::Oculus::Interaction::FloatConstraint*& Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::__cordl_internal_get_MinScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinScale;
}
constexpr ::Oculus::Interaction::FloatConstraint* const& Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::__cordl_internal_get_MinScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinScale;
}
constexpr void Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::__cordl_internal_set_MinScale(::Oculus::Interaction::FloatConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinScale = value;
}
constexpr ::Oculus::Interaction::FloatConstraint*& Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::__cordl_internal_get_MaxY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxY;
}
constexpr ::Oculus::Interaction::FloatConstraint* const& Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::__cordl_internal_get_MaxY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxY;
}
constexpr void Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::__cordl_internal_set_MaxY(::Oculus::Interaction::FloatConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxY = value;
}
constexpr ::Oculus::Interaction::FloatConstraint*& Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::__cordl_internal_get_MinY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinY;
}
constexpr ::Oculus::Interaction::FloatConstraint* const& Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::__cordl_internal_get_MinY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinY;
}
constexpr void Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::__cordl_internal_set_MinY(::Oculus::Interaction::FloatConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinY = value;
}
inline void Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints* Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints()   {
}

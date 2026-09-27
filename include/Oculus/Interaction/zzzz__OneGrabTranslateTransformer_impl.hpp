#pragma once
// IWYU pragma private; include "Oculus/Interaction/OneGrabTranslateTransformer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__OneGrabTranslateTransformer_def.hpp"
#include "Oculus/Interaction/zzzz__FloatConstraint_def.hpp"
#include "Oculus/Interaction/zzzz__IGrabbable_def.hpp"
#include "Oculus/Interaction/zzzz__ITransformer_def.hpp"
#include "Oculus/Interaction/zzzz__OneGrabTranslateTransformer_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::OneGrabTranslateTransformer.get_Constraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints* (::Oculus::Interaction::OneGrabTranslateTransformer::*)()>(&::Oculus::Interaction::OneGrabTranslateTransformer::get_Constraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44c4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"get_Constraints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabTranslateTransformer.set_Constraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabTranslateTransformer::*)(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*)>(&::Oculus::Interaction::OneGrabTranslateTransformer::set_Constraints)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa44c4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"set_Constraints", {}, {::i2c::type_of<::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabTranslateTransformer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabTranslateTransformer::*)(::Oculus::Interaction::IGrabbable*)>(&::Oculus::Interaction::OneGrabTranslateTransformer::Initialize)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa44c7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabTranslateTransformer.GenerateParentConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabTranslateTransformer::*)()>(&::Oculus::Interaction::OneGrabTranslateTransformer::GenerateParentConstraints)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0xa44c4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"GenerateParentConstraints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabTranslateTransformer.BeginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabTranslateTransformer::*)()>(&::Oculus::Interaction::OneGrabTranslateTransformer::BeginTransform)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa44c8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabTranslateTransformer.UpdateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabTranslateTransformer::*)()>(&::Oculus::Interaction::OneGrabTranslateTransformer::UpdateTransform)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0xa44ca90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabTranslateTransformer.ConstrainTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabTranslateTransformer::*)()>(&::Oculus::Interaction::OneGrabTranslateTransformer::ConstrainTransform)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa44cd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"ConstrainTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabTranslateTransformer.EndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabTranslateTransformer::*)()>(&::Oculus::Interaction::OneGrabTranslateTransformer::EndTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa44ceec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabTranslateTransformer.InjectOptionalConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabTranslateTransformer::*)(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*)>(&::Oculus::Interaction::OneGrabTranslateTransformer::InjectOptionalConstraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44cef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"InjectOptionalConstraints", {}, {::i2c::type_of<::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabTranslateTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabTranslateTransformer::*)()>(&::Oculus::Interaction::OneGrabTranslateTransformer::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa44cef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*& Oculus::Interaction::OneGrabTranslateTransformer::__cordl_internal_get__constraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constraints;
}
constexpr ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints* const& Oculus::Interaction::OneGrabTranslateTransformer::__cordl_internal_get__constraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constraints;
}
constexpr void Oculus::Interaction::OneGrabTranslateTransformer::__cordl_internal_set__constraints(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____constraints = value;
}
constexpr ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*& Oculus::Interaction::OneGrabTranslateTransformer::__cordl_internal_get__parentConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentConstraints;
}
constexpr ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints* const& Oculus::Interaction::OneGrabTranslateTransformer::__cordl_internal_get__parentConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentConstraints;
}
constexpr void Oculus::Interaction::OneGrabTranslateTransformer::__cordl_internal_set__parentConstraints(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parentConstraints = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::OneGrabTranslateTransformer::__cordl_internal_get__initialPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialPosition;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::OneGrabTranslateTransformer::__cordl_internal_get__initialPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialPosition;
}
constexpr void Oculus::Interaction::OneGrabTranslateTransformer::__cordl_internal_set__initialPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialPosition = value;
}
constexpr ::Oculus::Interaction::IGrabbable*& Oculus::Interaction::OneGrabTranslateTransformer::__cordl_internal_get__grabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr ::Oculus::Interaction::IGrabbable* const& Oculus::Interaction::OneGrabTranslateTransformer::__cordl_internal_get__grabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr void Oculus::Interaction::OneGrabTranslateTransformer::__cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbable = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::OneGrabTranslateTransformer::__cordl_internal_get__localToTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localToTarget;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::OneGrabTranslateTransformer::__cordl_internal_get__localToTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localToTarget;
}
constexpr void Oculus::Interaction::OneGrabTranslateTransformer::__cordl_internal_set__localToTarget(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localToTarget = value;
}
inline ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints* Oculus::Interaction::OneGrabTranslateTransformer::get_Constraints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"get_Constraints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabTranslateTransformer::set_Constraints(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"set_Constraints", {}, {::i2c::type_of<::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::OneGrabTranslateTransformer::Initialize(::Oculus::Interaction::IGrabbable*  grabbable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbable);
}
inline void Oculus::Interaction::OneGrabTranslateTransformer::GenerateParentConstraints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"GenerateParentConstraints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabTranslateTransformer::BeginTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabTranslateTransformer::UpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabTranslateTransformer::ConstrainTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"ConstrainTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabTranslateTransformer::EndTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabTranslateTransformer::InjectOptionalConstraints(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*  constraints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {"InjectOptionalConstraints", {}, {::i2c::type_of<::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraints);
}
inline void Oculus::Interaction::OneGrabTranslateTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::OneGrabTranslateTransformer* Oculus::Interaction::OneGrabTranslateTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::OneGrabTranslateTransformer*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr  Oculus::Interaction::OneGrabTranslateTransformer::operator ::Oculus::Interaction::ITransformer*() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* Oculus::Interaction::OneGrabTranslateTransformer::i___Oculus__Interaction__ITransformer() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::OneGrabTranslateTransformer::OneGrabTranslateTransformer()   {
}
//  Writing Method size for method: ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::*)()>(&::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44c8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_get_ConstraintsAreRelative()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstraintsAreRelative;
}
constexpr bool const& Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_get_ConstraintsAreRelative() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstraintsAreRelative;
}
constexpr void Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_set_ConstraintsAreRelative(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConstraintsAreRelative = value;
}
constexpr ::Oculus::Interaction::FloatConstraint*& Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_get_MinX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinX;
}
constexpr ::Oculus::Interaction::FloatConstraint* const& Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_get_MinX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinX;
}
constexpr void Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_set_MinX(::Oculus::Interaction::FloatConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinX = value;
}
constexpr ::Oculus::Interaction::FloatConstraint*& Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_get_MaxX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxX;
}
constexpr ::Oculus::Interaction::FloatConstraint* const& Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_get_MaxX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxX;
}
constexpr void Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_set_MaxX(::Oculus::Interaction::FloatConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxX = value;
}
constexpr ::Oculus::Interaction::FloatConstraint*& Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_get_MinY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinY;
}
constexpr ::Oculus::Interaction::FloatConstraint* const& Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_get_MinY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinY;
}
constexpr void Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_set_MinY(::Oculus::Interaction::FloatConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinY = value;
}
constexpr ::Oculus::Interaction::FloatConstraint*& Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_get_MaxY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxY;
}
constexpr ::Oculus::Interaction::FloatConstraint* const& Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_get_MaxY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxY;
}
constexpr void Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_set_MaxY(::Oculus::Interaction::FloatConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxY = value;
}
constexpr ::Oculus::Interaction::FloatConstraint*& Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_get_MinZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinZ;
}
constexpr ::Oculus::Interaction::FloatConstraint* const& Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_get_MinZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinZ;
}
constexpr void Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_set_MinZ(::Oculus::Interaction::FloatConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinZ = value;
}
constexpr ::Oculus::Interaction::FloatConstraint*& Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_get_MaxZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxZ;
}
constexpr ::Oculus::Interaction::FloatConstraint* const& Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_get_MaxZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxZ;
}
constexpr void Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::__cordl_internal_set_MaxZ(::Oculus::Interaction::FloatConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxZ = value;
}
inline void Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints* Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints::OneGrabTranslateTransformer_OneGrabTranslateConstraints()   {
}

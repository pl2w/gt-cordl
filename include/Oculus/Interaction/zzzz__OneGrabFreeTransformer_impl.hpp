#pragma once
// IWYU pragma private; include "Oculus/Interaction/OneGrabFreeTransformer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/zzzz__OneGrabFreeTransformer_def.hpp"
#include "Oculus/Interaction/zzzz__IGrabbable_def.hpp"
#include "Oculus/Interaction/zzzz__ITransformer_def.hpp"
#include "Oculus/Interaction/zzzz__TransformerUtils_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::OneGrabFreeTransformer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabFreeTransformer::*)(::Oculus::Interaction::IGrabbable*)>(&::Oculus::Interaction::OneGrabFreeTransformer::Initialize)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa448f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabFreeTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabFreeTransformer.BeginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabFreeTransformer::*)()>(&::Oculus::Interaction::OneGrabFreeTransformer::BeginTransform)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa448fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabFreeTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabFreeTransformer.UpdateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabFreeTransformer::*)()>(&::Oculus::Interaction::OneGrabFreeTransformer::UpdateTransform)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xa449198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabFreeTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabFreeTransformer.EndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabFreeTransformer::*)()>(&::Oculus::Interaction::OneGrabFreeTransformer::EndTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4493cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabFreeTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabFreeTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabFreeTransformer::*)()>(&::Oculus::Interaction::OneGrabFreeTransformer::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4493d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabFreeTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints*& Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_get__positionConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionConstraints;
}
constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints* const& Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_get__positionConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionConstraints;
}
constexpr void Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_set__positionConstraints(::Oculus::Interaction::TransformerUtils_PositionConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positionConstraints = value;
}
constexpr ::Oculus::Interaction::TransformerUtils_RotationConstraints*& Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_get__rotationConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationConstraints;
}
constexpr ::Oculus::Interaction::TransformerUtils_RotationConstraints* const& Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_get__rotationConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationConstraints;
}
constexpr void Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_set__rotationConstraints(::Oculus::Interaction::TransformerUtils_RotationConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationConstraints = value;
}
constexpr ::Oculus::Interaction::IGrabbable*& Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_get__grabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr ::Oculus::Interaction::IGrabbable* const& Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_get__grabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr void Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbable = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_get__grabDeltaInLocalSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabDeltaInLocalSpace;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_get__grabDeltaInLocalSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabDeltaInLocalSpace;
}
constexpr void Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_set__grabDeltaInLocalSpace(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabDeltaInLocalSpace = value;
}
constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints*& Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_get__parentConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentConstraints;
}
constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints* const& Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_get__parentConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentConstraints;
}
constexpr void Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_set__parentConstraints(::Oculus::Interaction::TransformerUtils_PositionConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parentConstraints = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_get__localToTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localToTarget;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_get__localToTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localToTarget;
}
constexpr void Oculus::Interaction::OneGrabFreeTransformer::__cordl_internal_set__localToTarget(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localToTarget = value;
}
inline void Oculus::Interaction::OneGrabFreeTransformer::Initialize(::Oculus::Interaction::IGrabbable*  grabbable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabFreeTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbable);
}
inline void Oculus::Interaction::OneGrabFreeTransformer::BeginTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabFreeTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabFreeTransformer::UpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabFreeTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabFreeTransformer::EndTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabFreeTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabFreeTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabFreeTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::OneGrabFreeTransformer* Oculus::Interaction::OneGrabFreeTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::OneGrabFreeTransformer*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr  Oculus::Interaction::OneGrabFreeTransformer::operator ::Oculus::Interaction::ITransformer*() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* Oculus::Interaction::OneGrabFreeTransformer::i___Oculus__Interaction__ITransformer() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::OneGrabFreeTransformer::OneGrabFreeTransformer()   {
}

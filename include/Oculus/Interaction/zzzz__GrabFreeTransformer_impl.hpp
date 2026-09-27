#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabFreeTransformer.hpp"
#include "Oculus/Interaction/zzzz__GrabFreeTransformer_GrabPointDelta_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__GrabFreeTransformer_def.hpp"
#include "Oculus/Interaction/zzzz__GrabFreeTransformer_GrabPointDelta_def.hpp"
#include "Oculus/Interaction/zzzz__IGrabbable_def.hpp"
#include "Oculus/Interaction/zzzz__ITransformer_def.hpp"
#include "Oculus/Interaction/zzzz__TransformerUtils_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::GrabFreeTransformer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreeTransformer::*)(::Oculus::Interaction::IGrabbable*)>(&::Oculus::Interaction::GrabFreeTransformer::Initialize)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa448128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreeTransformer.BeginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreeTransformer::*)()>(&::Oculus::Interaction::GrabFreeTransformer::BeginTransform)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0xa4482ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreeTransformer.UpdateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreeTransformer::*)()>(&::Oculus::Interaction::GrabFreeTransformer::UpdateTransform)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0xa44867c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreeTransformer.EndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreeTransformer::*)()>(&::Oculus::Interaction::GrabFreeTransformer::EndTransform)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa448b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreeTransformer.InitializeDeltas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Pose>*, ::by_ref<::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>>)>(&::Oculus::Interaction::GrabFreeTransformer::InitializeDeltas)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa446f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"InitializeDeltas", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Pose>*>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreeTransformer.UpdateTransformerPointData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::Collections::Generic::List_1<::UnityEngine::Pose>*, ::by_ref<::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>>)>(&::Oculus::Interaction::GrabFreeTransformer::UpdateTransformerPointData)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa4474c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"UpdateTransformerPointData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Pose>*>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreeTransformer.GetCentroid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::Collections::Generic::List_1<::UnityEngine::Pose>*)>(&::Oculus::Interaction::GrabFreeTransformer::GetCentroid)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa4470d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"GetCentroid", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Pose>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreeTransformer.GetCentroidOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Pose, ::UnityEngine::Vector3)>(&::Oculus::Interaction::GrabFreeTransformer::GetCentroidOffset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa448c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"GetCentroidOffset", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreeTransformer.UpdateRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(int32_t, ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>)>(&::Oculus::Interaction::GrabFreeTransformer::UpdateRotation)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0xa4475f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"UpdateRotation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreeTransformer.UpdateScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t, ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>)>(&::Oculus::Interaction::GrabFreeTransformer::UpdateScale)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa448a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"UpdateScale", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreeTransformer.InjectOptionalPositionConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreeTransformer::*)(::Oculus::Interaction::TransformerUtils_PositionConstraints*)>(&::Oculus::Interaction::GrabFreeTransformer::InjectOptionalPositionConstraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa448cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"InjectOptionalPositionConstraints", {}, {::i2c::type_of<::Oculus::Interaction::TransformerUtils_PositionConstraints*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreeTransformer.InjectOptionalRotationConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreeTransformer::*)(::Oculus::Interaction::TransformerUtils_RotationConstraints*)>(&::Oculus::Interaction::GrabFreeTransformer::InjectOptionalRotationConstraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa448cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"InjectOptionalRotationConstraints", {}, {::i2c::type_of<::Oculus::Interaction::TransformerUtils_RotationConstraints*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreeTransformer.InjectOptionalScaleConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreeTransformer::*)(::Oculus::Interaction::TransformerUtils_ScaleConstraints*)>(&::Oculus::Interaction::GrabFreeTransformer::InjectOptionalScaleConstraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa448ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"InjectOptionalScaleConstraints", {}, {::i2c::type_of<::Oculus::Interaction::TransformerUtils_ScaleConstraints*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabFreeTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabFreeTransformer::*)()>(&::Oculus::Interaction::GrabFreeTransformer::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa448ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints*& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__positionConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionConstraints;
}
constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints* const& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__positionConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionConstraints;
}
constexpr void Oculus::Interaction::GrabFreeTransformer::__cordl_internal_set__positionConstraints(::Oculus::Interaction::TransformerUtils_PositionConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positionConstraints = value;
}
constexpr ::Oculus::Interaction::TransformerUtils_RotationConstraints*& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__rotationConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationConstraints;
}
constexpr ::Oculus::Interaction::TransformerUtils_RotationConstraints* const& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__rotationConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationConstraints;
}
constexpr void Oculus::Interaction::GrabFreeTransformer::__cordl_internal_set__rotationConstraints(::Oculus::Interaction::TransformerUtils_RotationConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationConstraints = value;
}
constexpr ::Oculus::Interaction::TransformerUtils_ScaleConstraints*& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__scaleConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleConstraints;
}
constexpr ::Oculus::Interaction::TransformerUtils_ScaleConstraints* const& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__scaleConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleConstraints;
}
constexpr void Oculus::Interaction::GrabFreeTransformer::__cordl_internal_set__scaleConstraints(::Oculus::Interaction::TransformerUtils_ScaleConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scaleConstraints = value;
}
constexpr bool& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__resetScaleResponsivenessOnConstraintOvershoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetScaleResponsivenessOnConstraintOvershoot;
}
constexpr bool const& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__resetScaleResponsivenessOnConstraintOvershoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetScaleResponsivenessOnConstraintOvershoot;
}
constexpr void Oculus::Interaction::GrabFreeTransformer::__cordl_internal_set__resetScaleResponsivenessOnConstraintOvershoot(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetScaleResponsivenessOnConstraintOvershoot = value;
}
constexpr ::Oculus::Interaction::IGrabbable*& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__grabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr ::Oculus::Interaction::IGrabbable* const& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__grabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr void Oculus::Interaction::GrabFreeTransformer::__cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbable = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__grabDeltaInLocalSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabDeltaInLocalSpace;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__grabDeltaInLocalSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabDeltaInLocalSpace;
}
constexpr void Oculus::Interaction::GrabFreeTransformer::__cordl_internal_set__grabDeltaInLocalSpace(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabDeltaInLocalSpace = value;
}
constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints*& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__relativePositionConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativePositionConstraints;
}
constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints* const& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__relativePositionConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativePositionConstraints;
}
constexpr void Oculus::Interaction::GrabFreeTransformer::__cordl_internal_set__relativePositionConstraints(::Oculus::Interaction::TransformerUtils_PositionConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativePositionConstraints = value;
}
constexpr ::Oculus::Interaction::TransformerUtils_ScaleConstraints*& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__relativeScaleConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeScaleConstraints;
}
constexpr ::Oculus::Interaction::TransformerUtils_ScaleConstraints* const& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__relativeScaleConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeScaleConstraints;
}
constexpr void Oculus::Interaction::GrabFreeTransformer::__cordl_internal_set__relativeScaleConstraints(::Oculus::Interaction::TransformerUtils_ScaleConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativeScaleConstraints = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__lastRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRotation;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__lastRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRotation;
}
constexpr void Oculus::Interaction::GrabFreeTransformer::__cordl_internal_set__lastRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastRotation = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__lastScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastScale;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__lastScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastScale;
}
constexpr void Oculus::Interaction::GrabFreeTransformer::__cordl_internal_set__lastScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastScale = value;
}
constexpr ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__deltas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltas;
}
constexpr ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta> const& Oculus::Interaction::GrabFreeTransformer::__cordl_internal_get__deltas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltas;
}
constexpr void Oculus::Interaction::GrabFreeTransformer::__cordl_internal_set__deltas(::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deltas = value;
}
inline void Oculus::Interaction::GrabFreeTransformer::Initialize(::Oculus::Interaction::IGrabbable*  grabbable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbable);
}
inline void Oculus::Interaction::GrabFreeTransformer::BeginTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabFreeTransformer::UpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabFreeTransformer::EndTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabFreeTransformer::InitializeDeltas(int32_t  count, ::System::Collections::Generic::List_1<::UnityEngine::Pose>*  poses, ::by_ref<::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>>  deltas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"InitializeDeltas", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Pose>*>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, count, poses, deltas);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::GrabFreeTransformer::UpdateTransformerPointData(::System::Collections::Generic::List_1<::UnityEngine::Pose>*  poses, ::by_ref<::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>>  deltas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"UpdateTransformerPointData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Pose>*>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, poses, deltas);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::GrabFreeTransformer::GetCentroid(::System::Collections::Generic::List_1<::UnityEngine::Pose>*  poses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"GetCentroid", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Pose>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, poses);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::GrabFreeTransformer::GetCentroidOffset(::UnityEngine::Pose  pose, ::UnityEngine::Vector3  centre)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"GetCentroidOffset", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, pose, centre);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::GrabFreeTransformer::UpdateRotation(int32_t  count, ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>  deltas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"UpdateRotation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, count, deltas);
}
inline float_t Oculus::Interaction::GrabFreeTransformer::UpdateScale(int32_t  count, ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>  deltas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"UpdateScale", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, count, deltas);
}
inline void Oculus::Interaction::GrabFreeTransformer::InjectOptionalPositionConstraints(::Oculus::Interaction::TransformerUtils_PositionConstraints*  constraints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"InjectOptionalPositionConstraints", {}, {::i2c::type_of<::Oculus::Interaction::TransformerUtils_PositionConstraints*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraints);
}
inline void Oculus::Interaction::GrabFreeTransformer::InjectOptionalRotationConstraints(::Oculus::Interaction::TransformerUtils_RotationConstraints*  constraints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"InjectOptionalRotationConstraints", {}, {::i2c::type_of<::Oculus::Interaction::TransformerUtils_RotationConstraints*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraints);
}
inline void Oculus::Interaction::GrabFreeTransformer::InjectOptionalScaleConstraints(::Oculus::Interaction::TransformerUtils_ScaleConstraints*  constraints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {"InjectOptionalScaleConstraints", {}, {::i2c::type_of<::Oculus::Interaction::TransformerUtils_ScaleConstraints*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraints);
}
inline void Oculus::Interaction::GrabFreeTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabFreeTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabFreeTransformer* Oculus::Interaction::GrabFreeTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabFreeTransformer*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr  Oculus::Interaction::GrabFreeTransformer::operator ::Oculus::Interaction::ITransformer*() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* Oculus::Interaction::GrabFreeTransformer::i___Oculus__Interaction__ITransformer() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabFreeTransformer::GrabFreeTransformer()   {
}

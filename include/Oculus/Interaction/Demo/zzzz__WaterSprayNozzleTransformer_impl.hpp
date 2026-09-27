#pragma once
// IWYU pragma private; include "Oculus/Interaction/Demo/WaterSprayNozzleTransformer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Demo/zzzz__WaterSprayNozzleTransformer_def.hpp"
#include "Oculus/Interaction/zzzz__IGrabbable_def.hpp"
#include "Oculus/Interaction/zzzz__ITransformer_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSprayNozzleTransformer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSprayNozzleTransformer::*)(::Oculus::Interaction::IGrabbable*)>(&::Oculus::Interaction::Demo::WaterSprayNozzleTransformer::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4319b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSprayNozzleTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSprayNozzleTransformer.BeginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSprayNozzleTransformer::*)()>(&::Oculus::Interaction::Demo::WaterSprayNozzleTransformer::BeginTransform)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa4319b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSprayNozzleTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSprayNozzleTransformer.UpdateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSprayNozzleTransformer::*)()>(&::Oculus::Interaction::Demo::WaterSprayNozzleTransformer::UpdateTransform)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0xa431aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSprayNozzleTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSprayNozzleTransformer.EndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSprayNozzleTransformer::*)()>(&::Oculus::Interaction::Demo::WaterSprayNozzleTransformer::EndTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa432078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSprayNozzleTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSprayNozzleTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSprayNozzleTransformer::*)()>(&::Oculus::Interaction::Demo::WaterSprayNozzleTransformer::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa43207c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSprayNozzleTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_get__factor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____factor;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_get__factor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____factor;
}
constexpr void Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_set__factor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____factor = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_get__snapAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapAngle;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_get__snapAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapAngle;
}
constexpr void Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_set__snapAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapAngle = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_get__snappiness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snappiness;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_get__snappiness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snappiness;
}
constexpr void Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_set__snappiness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snappiness = value;
}
constexpr int32_t& Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_get__maxSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSteps;
}
constexpr int32_t const& Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_get__maxSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSteps;
}
constexpr void Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_set__maxSteps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxSteps = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_get__relativeAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeAngle;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_get__relativeAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeAngle;
}
constexpr void Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_set__relativeAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativeAngle = value;
}
constexpr int32_t& Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_get__stepsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stepsCount;
}
constexpr int32_t const& Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_get__stepsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stepsCount;
}
constexpr void Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_set__stepsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stepsCount = value;
}
constexpr ::Oculus::Interaction::IGrabbable*& Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_get__grabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr ::Oculus::Interaction::IGrabbable* const& Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_get__grabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr void Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbable = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_get__previousGrabPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousGrabPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_get__previousGrabPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousGrabPose;
}
constexpr void Oculus::Interaction::Demo::WaterSprayNozzleTransformer::__cordl_internal_set__previousGrabPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousGrabPose = value;
}
inline void Oculus::Interaction::Demo::WaterSprayNozzleTransformer::Initialize(::Oculus::Interaction::IGrabbable*  grabbable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSprayNozzleTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbable);
}
inline void Oculus::Interaction::Demo::WaterSprayNozzleTransformer::BeginTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSprayNozzleTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Demo::WaterSprayNozzleTransformer::UpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSprayNozzleTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Demo::WaterSprayNozzleTransformer::EndTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSprayNozzleTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Demo::WaterSprayNozzleTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSprayNozzleTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Demo::WaterSprayNozzleTransformer* Oculus::Interaction::Demo::WaterSprayNozzleTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Demo::WaterSprayNozzleTransformer*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr  Oculus::Interaction::Demo::WaterSprayNozzleTransformer::operator ::Oculus::Interaction::ITransformer*() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* Oculus::Interaction::Demo::WaterSprayNozzleTransformer::i___Oculus__Interaction__ITransformer() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Demo::WaterSprayNozzleTransformer::WaterSprayNozzleTransformer()   {
}

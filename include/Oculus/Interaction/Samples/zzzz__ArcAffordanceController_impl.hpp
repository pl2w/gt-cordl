#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ArcAffordanceController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__ArcAffordanceController_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::ArcAffordanceController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ArcAffordanceController::*)()>(&::Oculus::Interaction::Samples::ArcAffordanceController::Start)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa43a600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ArcAffordanceController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ArcAffordanceController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ArcAffordanceController::*)()>(&::Oculus::Interaction::Samples::ArcAffordanceController::Update)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xa43a688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ArcAffordanceController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ArcAffordanceController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ArcAffordanceController::*)()>(&::Oculus::Interaction::Samples::ArcAffordanceController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43a8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ArcAffordanceController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_get__animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_get__animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animator;
}
constexpr void Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_set__animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animator = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_get__pivot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pivot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_get__pivot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pivot;
}
constexpr void Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_set__pivot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pivot = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_get__distanceToCurvatureCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceToCurvatureCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_get__distanceToCurvatureCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceToCurvatureCurve;
}
constexpr void Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_set__distanceToCurvatureCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distanceToCurvatureCurve = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_set__renderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_get__topBone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topBone;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_get__topBone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topBone;
}
constexpr void Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_set__topBone(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____topBone = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_get__bottomBone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bottomBone;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_get__bottomBone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bottomBone;
}
constexpr void Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_set__bottomBone(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bottomBone = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_get__endPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_get__endPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endPositions;
}
constexpr void Oculus::Interaction::Samples::ArcAffordanceController::__cordl_internal_set__endPositions(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endPositions = value;
}
inline void Oculus::Interaction::Samples::ArcAffordanceController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ArcAffordanceController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::ArcAffordanceController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ArcAffordanceController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::ArcAffordanceController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ArcAffordanceController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::ArcAffordanceController* Oculus::Interaction::Samples::ArcAffordanceController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::ArcAffordanceController*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::ArcAffordanceController::ArcAffordanceController()   {
}

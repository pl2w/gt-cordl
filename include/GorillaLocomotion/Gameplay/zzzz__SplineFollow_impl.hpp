#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/SplineFollow.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__SplineFollow_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__SplineFollow_SplineNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::SplineFollow.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::SplineFollow::*)()>(&::GorillaLocomotion::Gameplay::SplineFollow::Start)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5cf09f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SplineFollow*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::SplineFollow.CalculateApproximationNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::SplineFollow::*)()>(&::GorillaLocomotion::Gameplay::SplineFollow::CalculateApproximationNodes)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5cf0bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SplineFollow*>(),
                        {"CalculateApproximationNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::SplineFollow.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::SplineFollow::*)()>(&::GorillaLocomotion::Gameplay::SplineFollow::FixedUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cf0e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SplineFollow*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::SplineFollow.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::SplineFollow::*)()>(&::GorillaLocomotion::Gameplay::SplineFollow::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cf10ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SplineFollow*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::SplineFollow.FollowSpline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::SplineFollow::*)()>(&::GorillaLocomotion::Gameplay::SplineFollow::FollowSpline)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5cf0e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SplineFollow*>(),
                        {"FollowSpline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::SplineFollow.EvaluateSpline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineFollow_SplineNode (::GorillaLocomotion::Gameplay::SplineFollow::*)(float_t)>(&::GorillaLocomotion::Gameplay::SplineFollow::EvaluateSpline)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5cf10bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SplineFollow*>(),
                        {"EvaluateSpline", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::SplineFollow.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::SplineFollow::*)()>(&::GorillaLocomotion::Gameplay::SplineFollow::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cf1344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SplineFollow*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::SplineFollow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::SplineFollow::*)()>(&::GorillaLocomotion::Gameplay::SplineFollow::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5cf1350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SplineFollow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__approximate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____approximate;
}
constexpr bool const& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__approximate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____approximate;
}
constexpr void GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_set__approximate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____approximate = value;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__unitySpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unitySpline;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__unitySpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unitySpline;
}
constexpr void GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_set__unitySpline(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unitySpline = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duration;
}
constexpr float_t const& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duration;
}
constexpr void GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_set__duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____duration = value;
}
constexpr double_t& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__secondsToCycles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondsToCycles;
}
constexpr double_t const& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__secondsToCycles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondsToCycles;
}
constexpr void GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_set__secondsToCycles(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secondsToCycles = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__smoothRotationTrackingRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothRotationTrackingRate;
}
constexpr float_t const& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__smoothRotationTrackingRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothRotationTrackingRate;
}
constexpr void GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_set__smoothRotationTrackingRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothRotationTrackingRate = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__smoothRotationTrackingRateExp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothRotationTrackingRateExp;
}
constexpr float_t const& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__smoothRotationTrackingRateExp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothRotationTrackingRateExp;
}
constexpr void GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_set__smoothRotationTrackingRateExp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothRotationTrackingRateExp = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__progressPerFixedUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressPerFixedUpdate;
}
constexpr float_t const& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__progressPerFixedUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressPerFixedUpdate;
}
constexpr void GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_set__progressPerFixedUpdate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressPerFixedUpdate = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__splineProgressOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____splineProgressOffset;
}
constexpr float_t const& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__splineProgressOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____splineProgressOffset;
}
constexpr void GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_set__splineProgressOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____splineProgressOffset = value;
}
constexpr ::UnityEngine::Quaternion& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__rotationFix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationFix;
}
constexpr ::UnityEngine::Quaternion const& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__rotationFix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationFix;
}
constexpr void GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_set__rotationFix(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationFix = value;
}
constexpr ::UnityEngine::Splines::NativeSpline& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__nativeSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeSpline;
}
constexpr ::UnityEngine::Splines::NativeSpline const& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__nativeSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeSpline;
}
constexpr void GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_set__nativeSpline(::UnityEngine::Splines::NativeSpline  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nativeSpline = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr float_t const& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr void GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_set__progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progress = value;
}
constexpr int32_t& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__approximationResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____approximationResolution;
}
constexpr int32_t const& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__approximationResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____approximationResolution;
}
constexpr void GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_set__approximationResolution(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____approximationResolution = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineFollow_SplineNode>*& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__approximationNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____approximationNodes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineFollow_SplineNode>* const& GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_get__approximationNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____approximationNodes;
}
constexpr void GorillaLocomotion::Gameplay::SplineFollow::__cordl_internal_set__approximationNodes(::System::Collections::Generic::List_1<::GlobalNamespace::SplineFollow_SplineNode>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____approximationNodes = value;
}
inline void GorillaLocomotion::Gameplay::SplineFollow::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SplineFollow*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::SplineFollow::CalculateApproximationNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SplineFollow*>(),
                        {"CalculateApproximationNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::SplineFollow::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SplineFollow*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::SplineFollow::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SplineFollow*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::SplineFollow::FollowSpline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SplineFollow*>(),
                        {"FollowSpline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineFollow_SplineNode GorillaLocomotion::Gameplay::SplineFollow::EvaluateSpline(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SplineFollow*>(),
                        {"EvaluateSpline", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineFollow_SplineNode>(this, ___internal_method, t);
}
inline void GorillaLocomotion::Gameplay::SplineFollow::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SplineFollow*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::SplineFollow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::SplineFollow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Gameplay::SplineFollow* GorillaLocomotion::Gameplay::SplineFollow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Gameplay::SplineFollow*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::SplineFollow::SplineFollow()   {
}

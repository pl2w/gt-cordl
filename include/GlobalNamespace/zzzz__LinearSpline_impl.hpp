#pragma once
// IWYU pragma private; include "GlobalNamespace/LinearSpline.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__LinearSpline_def.hpp"
#include "GlobalNamespace/zzzz__LinearSpline_CurveBoundary_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LinearSpline.RefreshControlPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LinearSpline::*)()>(&::GlobalNamespace::LinearSpline::RefreshControlPoints)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x5b14d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinearSpline*>(),
                        {"RefreshControlPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LinearSpline.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LinearSpline::*)()>(&::GlobalNamespace::LinearSpline::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b153a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinearSpline*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LinearSpline.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::LinearSpline::*)(float_t)>(&::GlobalNamespace::LinearSpline::Evaluate)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x5b153a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinearSpline*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LinearSpline.GetForwardTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::LinearSpline::*)(float_t, float_t)>(&::GlobalNamespace::LinearSpline::GetForwardTangent)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5b159a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinearSpline*>(),
                        {"GetForwardTangent", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LinearSpline.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LinearSpline::*)()>(&::GlobalNamespace::LinearSpline::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5b15b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinearSpline*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LinearSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LinearSpline::*)()>(&::GlobalNamespace::LinearSpline::_ctor)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x5b15c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinearSpline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::LinearSpline::__cordl_internal_get_controlPointTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPointTransforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::LinearSpline::__cordl_internal_get_controlPointTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPointTransforms;
}
constexpr void GlobalNamespace::LinearSpline::__cordl_internal_set_controlPointTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlPointTransforms = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LinearSpline::__cordl_internal_get_debugTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LinearSpline::__cordl_internal_get_debugTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugTransform;
}
constexpr void GlobalNamespace::LinearSpline::__cordl_internal_set_debugTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugTransform = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::LinearSpline::__cordl_internal_get_controlPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::LinearSpline::__cordl_internal_get_controlPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPoints;
}
constexpr void GlobalNamespace::LinearSpline::__cordl_internal_set_controlPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlPoints = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::LinearSpline::__cordl_internal_get_distances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distances;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::LinearSpline::__cordl_internal_get_distances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distances;
}
constexpr void GlobalNamespace::LinearSpline::__cordl_internal_set_distances(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distances = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LinearSpline_CurveBoundary>*& GlobalNamespace::LinearSpline::__cordl_internal_get_curveBoundaries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curveBoundaries;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LinearSpline_CurveBoundary>* const& GlobalNamespace::LinearSpline::__cordl_internal_get_curveBoundaries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curveBoundaries;
}
constexpr void GlobalNamespace::LinearSpline::__cordl_internal_set_curveBoundaries(::System::Collections::Generic::List_1<::GlobalNamespace::LinearSpline_CurveBoundary>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curveBoundaries = value;
}
constexpr bool& GlobalNamespace::LinearSpline::__cordl_internal_get_roundCorners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundCorners;
}
constexpr bool const& GlobalNamespace::LinearSpline::__cordl_internal_get_roundCorners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundCorners;
}
constexpr void GlobalNamespace::LinearSpline::__cordl_internal_set_roundCorners(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roundCorners = value;
}
constexpr float_t& GlobalNamespace::LinearSpline::__cordl_internal_get_cornerRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cornerRadius;
}
constexpr float_t const& GlobalNamespace::LinearSpline::__cordl_internal_get_cornerRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cornerRadius;
}
constexpr void GlobalNamespace::LinearSpline::__cordl_internal_set_cornerRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cornerRadius = value;
}
constexpr bool& GlobalNamespace::LinearSpline::__cordl_internal_get_looping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___looping;
}
constexpr bool const& GlobalNamespace::LinearSpline::__cordl_internal_get_looping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___looping;
}
constexpr void GlobalNamespace::LinearSpline::__cordl_internal_set_looping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___looping = value;
}
constexpr float_t& GlobalNamespace::LinearSpline::__cordl_internal_get_testFloat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testFloat;
}
constexpr float_t const& GlobalNamespace::LinearSpline::__cordl_internal_get_testFloat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testFloat;
}
constexpr void GlobalNamespace::LinearSpline::__cordl_internal_set_testFloat(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testFloat = value;
}
constexpr int32_t& GlobalNamespace::LinearSpline::__cordl_internal_get_gizmoResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoResolution;
}
constexpr int32_t const& GlobalNamespace::LinearSpline::__cordl_internal_get_gizmoResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoResolution;
}
constexpr void GlobalNamespace::LinearSpline::__cordl_internal_set_gizmoResolution(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmoResolution = value;
}
constexpr float_t& GlobalNamespace::LinearSpline::__cordl_internal_get_totalDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalDistance;
}
constexpr float_t const& GlobalNamespace::LinearSpline::__cordl_internal_get_totalDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalDistance;
}
constexpr void GlobalNamespace::LinearSpline::__cordl_internal_set_totalDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalDistance = value;
}
inline void GlobalNamespace::LinearSpline::RefreshControlPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinearSpline*>(),
                        {"RefreshControlPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LinearSpline::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinearSpline*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::LinearSpline::Evaluate(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinearSpline*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline ::UnityEngine::Vector3 GlobalNamespace::LinearSpline::GetForwardTangent(float_t  t, float_t  step)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinearSpline*>(),
                        {"GetForwardTangent", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t, step);
}
inline void GlobalNamespace::LinearSpline::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinearSpline*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LinearSpline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinearSpline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LinearSpline* GlobalNamespace::LinearSpline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LinearSpline*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LinearSpline::LinearSpline()   {
}

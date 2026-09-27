#pragma once
// IWYU pragma private; include "GlobalNamespace/BezierCurve.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BezierCurve_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BezierCurve.GetPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BezierCurve::*)(float_t)>(&::GlobalNamespace::BezierCurve::GetPoint)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5b11a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierCurve*>(),
                        {"GetPoint", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierCurve.GetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BezierCurve::*)(float_t)>(&::GlobalNamespace::BezierCurve::GetVelocity)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5b11bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierCurve*>(),
                        {"GetVelocity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierCurve.GetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BezierCurve::*)(float_t)>(&::GlobalNamespace::BezierCurve::GetDirection)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b11d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierCurve*>(),
                        {"GetDirection", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierCurve.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierCurve::*)()>(&::GlobalNamespace::BezierCurve::Reset)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b11e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierCurve*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierCurve._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierCurve::*)()>(&::GlobalNamespace::BezierCurve::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b11f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierCurve*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BezierCurve::__cordl_internal_get_referenceTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BezierCurve::__cordl_internal_get_referenceTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceTransform;
}
constexpr void GlobalNamespace::BezierCurve::__cordl_internal_set_referenceTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___referenceTransform = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::BezierCurve::__cordl_internal_get_points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___points;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::BezierCurve::__cordl_internal_get_points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___points;
}
constexpr void GlobalNamespace::BezierCurve::__cordl_internal_set_points(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___points = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::BezierCurve::GetPoint(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierCurve*>(),
                        {"GetPoint", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BezierCurve::GetVelocity(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierCurve*>(),
                        {"GetVelocity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BezierCurve::GetDirection(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierCurve*>(),
                        {"GetDirection", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline void GlobalNamespace::BezierCurve::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierCurve*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BezierCurve::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierCurve*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BezierCurve* GlobalNamespace::BezierCurve::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BezierCurve*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BezierCurve::BezierCurve()   {
}

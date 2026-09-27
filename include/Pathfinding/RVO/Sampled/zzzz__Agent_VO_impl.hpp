#pragma once
// IWYU pragma private; include "Pathfinding/RVO/Sampled/Agent_VO.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Pathfinding/RVO/Sampled/zzzz__Agent_VO_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Agent_VO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Agent_VO::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, float_t, float_t)>(&::GlobalNamespace::Agent_VO::_ctor)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x5eecc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Agent_VO>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Agent_VO.SegmentObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Agent_VO (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, float_t, float_t)>(&::GlobalNamespace::Agent_VO::SegmentObstacle)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x5eec5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Agent_VO>(),
                        {"SegmentObstacle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Agent_VO.SignedDistanceFromLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::GlobalNamespace::Agent_VO::SignedDistanceFromLine)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5eec598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Agent_VO>(),
                        {"SignedDistanceFromLine", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Agent_VO.ScaledGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::Agent_VO::*)(::UnityEngine::Vector2, ::by_ref<float_t>)>(&::GlobalNamespace::Agent_VO::ScaledGradient)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5eed8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Agent_VO>(),
                        {"ScaledGradient", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Agent_VO.Gradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::Agent_VO::*)(::UnityEngine::Vector2, ::by_ref<float_t>)>(&::GlobalNamespace::Agent_VO::Gradient)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5eed45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Agent_VO>(),
                        {"Gradient", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Agent_VO::_ctor(::UnityEngine::Vector2  center, ::UnityEngine::Vector2  offset, float_t  radius, float_t  inverseDt, float_t  inverseDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Agent_VO>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, offset, radius, inverseDt, inverseDeltaTime);
}
inline ::GlobalNamespace::Agent_VO GlobalNamespace::Agent_VO::SegmentObstacle(::UnityEngine::Vector2  segmentStart, ::UnityEngine::Vector2  segmentEnd, ::UnityEngine::Vector2  offset, float_t  radius, float_t  inverseDt, float_t  inverseDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Agent_VO>(),
                        {"SegmentObstacle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Agent_VO>(nullptr, ___internal_method, segmentStart, segmentEnd, offset, radius, inverseDt, inverseDeltaTime);
}
inline float_t GlobalNamespace::Agent_VO::SignedDistanceFromLine(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  dir, ::UnityEngine::Vector2  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Agent_VO>(),
                        {"SignedDistanceFromLine", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, dir, p);
}
inline ::UnityEngine::Vector2 GlobalNamespace::Agent_VO::ScaledGradient(::UnityEngine::Vector2  p, ::by_ref<float_t>  weight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Agent_VO>(),
                        {"ScaledGradient", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method, p, weight);
}
inline ::UnityEngine::Vector2 GlobalNamespace::Agent_VO::Gradient(::UnityEngine::Vector2  p, ::by_ref<float_t>  weight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Agent_VO>(),
                        {"Gradient", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method, p, weight);
}
// Ctor Parameters [CppParam { name: "line1", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "line2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dir1", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dir2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cutoffLine", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cutoffDir", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "circleCenter", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "colliding", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "weightFactor", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "weightBonus", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "segmentStart", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "segmentEnd", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "segment", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Agent_VO::Agent_VO(::UnityEngine::Vector2  line1, ::UnityEngine::Vector2  line2, ::UnityEngine::Vector2  dir1, ::UnityEngine::Vector2  dir2, ::UnityEngine::Vector2  cutoffLine, ::UnityEngine::Vector2  cutoffDir, ::UnityEngine::Vector2  circleCenter, bool  colliding, float_t  radius, float_t  weightFactor, float_t  weightBonus, ::UnityEngine::Vector2  segmentStart, ::UnityEngine::Vector2  segmentEnd, bool  segment) noexcept  {
this->line1 = line1;
this->line2 = line2;
this->dir1 = dir1;
this->dir2 = dir2;
this->cutoffLine = cutoffLine;
this->cutoffDir = cutoffDir;
this->circleCenter = circleCenter;
this->colliding = colliding;
this->radius = radius;
this->weightFactor = weightFactor;
this->weightBonus = weightBonus;
this->segmentStart = segmentStart;
this->segmentEnd = segmentEnd;
this->segment = segment;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Agent_VO::Agent_VO()   {
}

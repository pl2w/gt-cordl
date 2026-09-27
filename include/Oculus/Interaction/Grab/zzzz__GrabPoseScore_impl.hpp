#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabPoseScore.hpp"
#include "Oculus/Interaction/Grab/zzzz__PoseMeasureParameters_impl.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabPoseScore_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__PoseMeasureParameters_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabPoseScore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabPoseScore::*)(float_t, float_t, ::Oculus::Interaction::Grab::PoseMeasureParameters)>(&::Oculus::Interaction::Grab::GrabPoseScore::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4e6740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::Grab::PoseMeasureParameters>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabPoseScore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabPoseScore::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, bool)>(&::Oculus::Interaction::Grab::GrabPoseScore::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa4e64b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabPoseScore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabPoseScore::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::Oculus::Interaction::Grab::PoseMeasureParameters)>(&::Oculus::Interaction::Grab::GrabPoseScore::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa4e1c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::Grab::PoseMeasureParameters>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabPoseScore.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Grab::GrabPoseScore::*)()>(&::Oculus::Interaction::Grab::GrabPoseScore::IsValid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4dc0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabPoseScore.Score
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Grab::GrabPoseScore::*)(float_t)>(&::Oculus::Interaction::Grab::GrabPoseScore::Score)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4e6978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {"Score", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabPoseScore.PositionalScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::Grab::GrabPoseScore::PositionalScore)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4e674c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {"PositionalScore", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabPoseScore.RotationalScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>)>(&::Oculus::Interaction::Grab::GrabPoseScore::RotationalScore)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xa4e6778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {"RotationalScore", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabPoseScore.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (*)(::by_ref<::Oculus::Interaction::Grab::GrabPoseScore>, ::by_ref<::Oculus::Interaction::Grab::GrabPoseScore>, float_t)>(&::Oculus::Interaction::Grab::GrabPoseScore::Lerp)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa4dd8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::GrabPoseScore>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::GrabPoseScore>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabPoseScore.IsBetterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Grab::GrabPoseScore::*)(::Oculus::Interaction::Grab::GrabPoseScore)>(&::Oculus::Interaction::Grab::GrabPoseScore::IsBetterThan)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa4e08e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {"IsBetterThan", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabPoseScore>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Grab::GrabPoseScore::setStaticF_Max(::Oculus::Interaction::Grab::GrabPoseScore  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Grab::GrabPoseScore, "Max", ::Oculus::Interaction::Grab::GrabPoseScore>(std::forward<::Oculus::Interaction::Grab::GrabPoseScore>(value));
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabPoseScore::getStaticF_Max()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Grab::GrabPoseScore, "Max", ::Oculus::Interaction::Grab::GrabPoseScore>();
}
inline void Oculus::Interaction::Grab::GrabPoseScore::_ctor(float_t  translationScore, float_t  rotationScore, ::Oculus::Interaction::Grab::PoseMeasureParameters  measureParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::Grab::PoseMeasureParameters>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, translationScore, rotationScore, measureParameters);
}
inline void Oculus::Interaction::Grab::GrabPoseScore::_ctor(::UnityEngine::Vector3  fromPoint, ::UnityEngine::Vector3  toPoint, bool  isInside)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fromPoint, toPoint, isInside);
}
inline void Oculus::Interaction::Grab::GrabPoseScore::_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  poseA, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  poseB, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::Oculus::Interaction::Grab::PoseMeasureParameters  measureParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::Grab::PoseMeasureParameters>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, poseA, poseB, offset, measureParameters);
}
inline bool Oculus::Interaction::Grab::GrabPoseScore::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline float_t Oculus::Interaction::Grab::GrabPoseScore::Score(float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {"Score", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, maxDistance);
}
inline float_t Oculus::Interaction::Grab::GrabPoseScore::PositionalScore(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {"PositionalScore", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, from, to);
}
inline float_t Oculus::Interaction::Grab::GrabPoseScore::RotationalScore(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {"RotationalScore", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, from, to);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabPoseScore::Lerp(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::GrabPoseScore>  from, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::GrabPoseScore>  to, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::GrabPoseScore>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::GrabPoseScore>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(nullptr, ___internal_method, from, to, t);
}
inline bool Oculus::Interaction::Grab::GrabPoseScore::IsBetterThan(::Oculus::Interaction::Grab::GrabPoseScore  referenceScore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseScore>(),
                        {"IsBetterThan", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabPoseScore>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, referenceScore);
}
// Ctor Parameters [CppParam { name: "_translationScore", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rotationScore", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_measureParameters", ty: "::Oculus::Interaction::Grab::PoseMeasureParameters", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Grab::GrabPoseScore::GrabPoseScore(float_t  _translationScore, float_t  _rotationScore, ::Oculus::Interaction::Grab::PoseMeasureParameters  _measureParameters) noexcept  {
this->_translationScore = _translationScore;
this->_rotationScore = _rotationScore;
this->_measureParameters = _measureParameters;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grab::GrabPoseScore::GrabPoseScore()   {
}

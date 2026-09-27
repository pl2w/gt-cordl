#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/AnimationCurveDatumProperty.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__AnimationCurveDatumProperty_def.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__AnimationCurveDatum_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty::*)(::UnityEngine::AnimationCurve*)>(&::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb3fd03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty::*)(::Unity::XR::CoreUtils::Datums::AnimationCurveDatum*)>(&::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb3fd094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Datums::AnimationCurveDatum*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty::_ctor(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty::_ctor(::Unity::XR::CoreUtils::Datums::AnimationCurveDatum*  datum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Datums::AnimationCurveDatum*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, datum);
}
inline ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty::New_ctor(::UnityEngine::AnimationCurve*  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*>(value));
}
inline ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty::New_ctor(::Unity::XR::CoreUtils::Datums::AnimationCurveDatum*  datum)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*>(datum));
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty::AnimationCurveDatumProperty()   {
}

#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseTravelData.hpp"
#include "Oculus/Interaction/zzzz__PoseTravelData_def.hpp"
#include "Oculus/Interaction/zzzz__Tween_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseTravelData.get_DEFAULT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseTravelData (*)()>(&::Oculus::Interaction::PoseTravelData::get_DEFAULT)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa47316c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseTravelData>(),
                        {"get_DEFAULT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseTravelData.get_FAST
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseTravelData (*)()>(&::Oculus::Interaction::PoseTravelData::get_FAST)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa475084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseTravelData>(),
                        {"get_FAST", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseTravelData.CreateTween
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Tween* (::Oculus::Interaction::PoseTravelData::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseTravelData::CreateTween)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa4734b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseTravelData>(),
                        {"CreateTween", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseTravelData.PerceivedDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseTravelData::PerceivedDistance)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0xa475a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseTravelData>(),
                        {"PerceivedDistance", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::PoseTravelData Oculus::Interaction::PoseTravelData::get_DEFAULT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseTravelData>(),
                        {"get_DEFAULT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseTravelData>(nullptr, ___internal_method);
}
inline ::Oculus::Interaction::PoseTravelData Oculus::Interaction::PoseTravelData::get_FAST()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseTravelData>(),
                        {"get_FAST", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseTravelData>(nullptr, ___internal_method);
}
inline ::Oculus::Interaction::Tween* Oculus::Interaction::PoseTravelData::CreateTween(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseTravelData>(),
                        {"CreateTween", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Tween*>(*this, ___internal_method, from, to);
}
inline float_t Oculus::Interaction::PoseTravelData::PerceivedDistance(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseTravelData>(),
                        {"PerceivedDistance", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, from, to);
}
// Ctor Parameters [CppParam { name: "_travelSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_useFixedTravelTime", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_travelCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::PoseTravelData::PoseTravelData(float_t  _travelSpeed, bool  _useFixedTravelTime, ::UnityEngine::AnimationCurve*  _travelCurve) noexcept  {
this->_travelSpeed = _travelSpeed;
this->_useFixedTravelTime = _useFixedTravelTime;
this->_travelCurve = _travelCurve;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseTravelData::PoseTravelData()   {
}

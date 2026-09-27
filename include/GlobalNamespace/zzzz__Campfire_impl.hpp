#pragma once
// IWYU pragma private; include "GlobalNamespace/Campfire.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Campfire_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Campfire.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Campfire::*)()>(&::GlobalNamespace::Campfire::Start)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57e2d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Campfire*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Campfire.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Campfire::*)()>(&::GlobalNamespace::Campfire::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57e2e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Campfire*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Campfire.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Campfire::*)()>(&::GlobalNamespace::Campfire::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57e2e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Campfire*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Campfire.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Campfire::*)()>(&::GlobalNamespace::Campfire::SliceUpdate)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x57e2e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Campfire*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Campfire.Flap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Campfire::*)(::by_ref<float_t>, float_t, ::by_ref<float_t>, ::by_ref<::UnityEngine::Transform*>, float_t, float_t, ::by_ref<bool>)>(&::GlobalNamespace::Campfire::Flap)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x57e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Campfire*>(),
                        {"Flap", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Campfire.ReturnToOff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Campfire::*)(::by_ref<::UnityEngine::Transform*>, float_t, ::by_ref<bool>)>(&::GlobalNamespace::Campfire::ReturnToOff)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x57e3284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Campfire*>(),
                        {"ReturnToOff", {}, {::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Campfire._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Campfire::*)()>(&::GlobalNamespace::Campfire::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57e33b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Campfire*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Campfire::__cordl_internal_get_baseFire()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseFire;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Campfire::__cordl_internal_get_baseFire() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseFire;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_baseFire(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseFire = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Campfire::__cordl_internal_get_middleFire()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___middleFire;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Campfire::__cordl_internal_get_middleFire() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___middleFire;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_middleFire(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___middleFire = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Campfire::__cordl_internal_get_topFire()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topFire;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Campfire::__cordl_internal_get_topFire() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topFire;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_topFire(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topFire = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_baseMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseMultiplier;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_baseMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseMultiplier;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_baseMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseMultiplier = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_middleMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___middleMultiplier;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_middleMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___middleMultiplier;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_middleMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___middleMultiplier = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_topMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topMultiplier;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_topMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topMultiplier;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_topMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topMultiplier = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_bottomRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomRange;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_bottomRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomRange;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_bottomRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bottomRange = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_middleRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___middleRange;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_middleRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___middleRange;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_middleRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___middleRange = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_topRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topRange;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_topRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topRange;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_topRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topRange = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_lastAngleBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngleBottom;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_lastAngleBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngleBottom;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_lastAngleBottom(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngleBottom = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_lastAngleMiddle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngleMiddle;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_lastAngleMiddle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngleMiddle;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_lastAngleMiddle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngleMiddle = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_lastAngleTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngleTop;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_lastAngleTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngleTop;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_lastAngleTop(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngleTop = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_perlinStepBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinStepBottom;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_perlinStepBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinStepBottom;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_perlinStepBottom(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perlinStepBottom = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_perlinStepMiddle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinStepMiddle;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_perlinStepMiddle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinStepMiddle;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_perlinStepMiddle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perlinStepMiddle = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_perlinStepTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinStepTop;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_perlinStepTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinStepTop;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_perlinStepTop(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perlinStepTop = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_perlinBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinBottom;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_perlinBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinBottom;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_perlinBottom(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perlinBottom = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_perlinMiddle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinMiddle;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_perlinMiddle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinMiddle;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_perlinMiddle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perlinMiddle = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_perlinTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinTop;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_perlinTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinTop;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_perlinTop(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perlinTop = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_startingRotationBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingRotationBottom;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_startingRotationBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingRotationBottom;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_startingRotationBottom(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingRotationBottom = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_startingRotationMiddle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingRotationMiddle;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_startingRotationMiddle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingRotationMiddle;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_startingRotationMiddle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingRotationMiddle = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_startingRotationTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingRotationTop;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_startingRotationTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingRotationTop;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_startingRotationTop(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingRotationTop = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_slerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slerp;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_slerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slerp;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_slerp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slerp = value;
}
constexpr bool& GlobalNamespace::Campfire::__cordl_internal_get_mergedBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mergedBottom;
}
constexpr bool const& GlobalNamespace::Campfire::__cordl_internal_get_mergedBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mergedBottom;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_mergedBottom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mergedBottom = value;
}
constexpr bool& GlobalNamespace::Campfire::__cordl_internal_get_mergedMiddle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mergedMiddle;
}
constexpr bool const& GlobalNamespace::Campfire::__cordl_internal_get_mergedMiddle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mergedMiddle;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_mergedMiddle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mergedMiddle = value;
}
constexpr bool& GlobalNamespace::Campfire::__cordl_internal_get_mergedTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mergedTop;
}
constexpr bool const& GlobalNamespace::Campfire::__cordl_internal_get_mergedTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mergedTop;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_mergedTop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mergedTop = value;
}
constexpr ::StringW& GlobalNamespace::Campfire::__cordl_internal_get_lastTimeOfDay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTimeOfDay;
}
constexpr ::StringW const& GlobalNamespace::Campfire::__cordl_internal_get_lastTimeOfDay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTimeOfDay;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_lastTimeOfDay(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTimeOfDay = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::Campfire::__cordl_internal_get_mat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::Campfire::__cordl_internal_get_mat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mat;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_mat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mat = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_h()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___h;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_h() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___h;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_h(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___h = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_s()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___s;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_s() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___s;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_s(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___s = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_v()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___v;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_v() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___v;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_v(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___v = value;
}
constexpr int32_t& GlobalNamespace::Campfire::__cordl_internal_get_overrideDayNight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideDayNight;
}
constexpr int32_t const& GlobalNamespace::Campfire::__cordl_internal_get_overrideDayNight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideDayNight;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_overrideDayNight(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideDayNight = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Campfire::__cordl_internal_get_tempVec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempVec;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Campfire::__cordl_internal_get_tempVec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempVec;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_tempVec(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempVec = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::Campfire::__cordl_internal_get_isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::Campfire::__cordl_internal_get_isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_isActive(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActive = value;
}
constexpr bool& GlobalNamespace::Campfire::__cordl_internal_get_wasActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasActive;
}
constexpr bool const& GlobalNamespace::Campfire::__cordl_internal_get_wasActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasActive;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_wasActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasActive = value;
}
constexpr float_t& GlobalNamespace::Campfire::__cordl_internal_get_lastTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTime;
}
constexpr float_t const& GlobalNamespace::Campfire::__cordl_internal_get_lastTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTime;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_lastTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTime = value;
}
constexpr bool& GlobalNamespace::Campfire::__cordl_internal_get_playDuringRain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playDuringRain;
}
constexpr bool const& GlobalNamespace::Campfire::__cordl_internal_get_playDuringRain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playDuringRain;
}
constexpr void GlobalNamespace::Campfire::__cordl_internal_set_playDuringRain(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playDuringRain = value;
}
inline void GlobalNamespace::Campfire::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Campfire*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Campfire::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Campfire*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Campfire::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Campfire*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Campfire::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Campfire*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Campfire::Flap(::by_ref<float_t>  perlinValue, float_t  perlinStep, ::by_ref<float_t>  lastAngle, ::by_ref<::UnityEngine::Transform*>  flameTransform, float_t  range, float_t  multiplier, ::by_ref<bool>  isMerged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Campfire*>(),
                        {"Flap", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, perlinValue, perlinStep, lastAngle, flameTransform, range, multiplier, isMerged);
}
inline void GlobalNamespace::Campfire::ReturnToOff(::by_ref<::UnityEngine::Transform*>  startTransform, float_t  targetAngle, ::by_ref<bool>  isMerged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Campfire*>(),
                        {"ReturnToOff", {}, {::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startTransform, targetAngle, isMerged);
}
inline void GlobalNamespace::Campfire::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Campfire*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Campfire* GlobalNamespace::Campfire::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Campfire*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::Campfire::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::Campfire::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Campfire::Campfire()   {
}

#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MultiPartFire.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MultiPartFire_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MultiPartFire.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::MultiPartFire::*)()>(&::GT_CustomMapSupportRuntime::MultiPartFire::Start)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9cb7d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MultiPartFire*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MultiPartFire.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::MultiPartFire::*)()>(&::GT_CustomMapSupportRuntime::MultiPartFire::Update)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9cb7e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MultiPartFire*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MultiPartFire.Flap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::MultiPartFire::*)(::by_ref<float_t>, float_t, ::by_ref<float_t>, ::by_ref<::UnityEngine::Transform*>, float_t, float_t, ::by_ref<bool>)>(&::GT_CustomMapSupportRuntime::MultiPartFire::Flap)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x9cb7e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MultiPartFire*>(),
                        {"Flap", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MultiPartFire._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::MultiPartFire::*)()>(&::GT_CustomMapSupportRuntime::MultiPartFire::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9cb8098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MultiPartFire*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_baseFire()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseFire;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_baseFire() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseFire;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_baseFire(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseFire = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_middleFire()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___middleFire;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_middleFire() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___middleFire;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_middleFire(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___middleFire = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_topFire()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topFire;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_topFire() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topFire;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_topFire(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topFire = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_baseMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseMultiplier;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_baseMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseMultiplier;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_baseMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseMultiplier = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_middleMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___middleMultiplier;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_middleMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___middleMultiplier;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_middleMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___middleMultiplier = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_topMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topMultiplier;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_topMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topMultiplier;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_topMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topMultiplier = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_bottomRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomRange;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_bottomRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomRange;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_bottomRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bottomRange = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_middleRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___middleRange;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_middleRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___middleRange;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_middleRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___middleRange = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_topRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topRange;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_topRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topRange;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_topRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topRange = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_perlinStepBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinStepBottom;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_perlinStepBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinStepBottom;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_perlinStepBottom(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perlinStepBottom = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_perlinStepMiddle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinStepMiddle;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_perlinStepMiddle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinStepMiddle;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_perlinStepMiddle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perlinStepMiddle = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_perlinStepTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinStepTop;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_perlinStepTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinStepTop;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_perlinStepTop(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perlinStepTop = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_slerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slerp;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_slerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slerp;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_slerp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slerp = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_lastAngleBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngleBottom;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_lastAngleBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngleBottom;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_lastAngleBottom(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngleBottom = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_lastAngleMiddle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngleMiddle;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_lastAngleMiddle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngleMiddle;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_lastAngleMiddle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngleMiddle = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_lastAngleTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngleTop;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_lastAngleTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngleTop;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_lastAngleTop(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngleTop = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_perlinBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinBottom;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_perlinBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinBottom;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_perlinBottom(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perlinBottom = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_perlinMiddle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinMiddle;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_perlinMiddle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinMiddle;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_perlinMiddle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perlinMiddle = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_perlinTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinTop;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_perlinTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinTop;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_perlinTop(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perlinTop = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_mergedBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mergedBottom;
}
constexpr bool const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_mergedBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mergedBottom;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_mergedBottom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mergedBottom = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_mergedMiddle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mergedMiddle;
}
constexpr bool const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_mergedMiddle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mergedMiddle;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_mergedMiddle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mergedMiddle = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_mergedTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mergedTop;
}
constexpr bool const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_mergedTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mergedTop;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_mergedTop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mergedTop = value;
}
constexpr ::UnityEngine::Vector3& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_tempVec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempVec;
}
constexpr ::UnityEngine::Vector3 const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_tempVec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempVec;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_tempVec(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempVec = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_lastTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTime;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_get_lastTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTime;
}
constexpr void GT_CustomMapSupportRuntime::MultiPartFire::__cordl_internal_set_lastTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTime = value;
}
inline void GT_CustomMapSupportRuntime::MultiPartFire::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MultiPartFire*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::MultiPartFire::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MultiPartFire*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::MultiPartFire::Flap(::by_ref<float_t>  perlinValue, float_t  perlinStep, ::by_ref<float_t>  lastAngle, ::by_ref<::UnityEngine::Transform*>  flameTransform, float_t  range, float_t  multiplier, ::by_ref<bool>  isMerged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MultiPartFire*>(),
                        {"Flap", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, perlinValue, perlinStep, lastAngle, flameTransform, range, multiplier, isMerged);
}
inline void GT_CustomMapSupportRuntime::MultiPartFire::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MultiPartFire*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::MultiPartFire* GT_CustomMapSupportRuntime::MultiPartFire::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::MultiPartFire*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::MultiPartFire::MultiPartFire()   {
}

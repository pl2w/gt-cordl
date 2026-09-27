#pragma once
// IWYU pragma private; include "GlobalNamespace/SpinParametricAnimation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SpinParametricAnimation_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpinParametricAnimation.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpinParametricAnimation::*)()>(&::GlobalNamespace::SpinParametricAnimation::OnEnable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x56addd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpinParametricAnimation*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpinParametricAnimation.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpinParametricAnimation::*)()>(&::GlobalNamespace::SpinParametricAnimation::LateUpdate)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x56adea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpinParametricAnimation*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpinParametricAnimation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpinParametricAnimation::*)()>(&::GlobalNamespace::SpinParametricAnimation::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56ae078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpinParametricAnimation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::SpinParametricAnimation::__cordl_internal_get_axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SpinParametricAnimation::__cordl_internal_get_axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis;
}
constexpr void GlobalNamespace::SpinParametricAnimation::__cordl_internal_set_axis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axis = value;
}
constexpr bool& GlobalNamespace::SpinParametricAnimation::__cordl_internal_get_WorldSpaceRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorldSpaceRotation;
}
constexpr bool const& GlobalNamespace::SpinParametricAnimation::__cordl_internal_get_WorldSpaceRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorldSpaceRotation;
}
constexpr void GlobalNamespace::SpinParametricAnimation::__cordl_internal_set_WorldSpaceRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WorldSpaceRotation = value;
}
constexpr float_t& GlobalNamespace::SpinParametricAnimation::__cordl_internal_get_revolutionsPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___revolutionsPerSecond;
}
constexpr float_t const& GlobalNamespace::SpinParametricAnimation::__cordl_internal_get_revolutionsPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___revolutionsPerSecond;
}
constexpr void GlobalNamespace::SpinParametricAnimation::__cordl_internal_set_revolutionsPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___revolutionsPerSecond = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::SpinParametricAnimation::__cordl_internal_get_timeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::SpinParametricAnimation::__cordl_internal_get_timeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeCurve;
}
constexpr void GlobalNamespace::SpinParametricAnimation::__cordl_internal_set_timeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeCurve = value;
}
constexpr float_t& GlobalNamespace::SpinParametricAnimation::__cordl_internal_get__animationProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationProgress;
}
constexpr float_t const& GlobalNamespace::SpinParametricAnimation::__cordl_internal_get__animationProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationProgress;
}
constexpr void GlobalNamespace::SpinParametricAnimation::__cordl_internal_set__animationProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animationProgress = value;
}
constexpr float_t& GlobalNamespace::SpinParametricAnimation::__cordl_internal_get__oldAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oldAngle;
}
constexpr float_t const& GlobalNamespace::SpinParametricAnimation::__cordl_internal_get__oldAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oldAngle;
}
constexpr void GlobalNamespace::SpinParametricAnimation::__cordl_internal_set__oldAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oldAngle = value;
}
inline void GlobalNamespace::SpinParametricAnimation::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpinParametricAnimation*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpinParametricAnimation::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpinParametricAnimation*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpinParametricAnimation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpinParametricAnimation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpinParametricAnimation* GlobalNamespace::SpinParametricAnimation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpinParametricAnimation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpinParametricAnimation::SpinParametricAnimation()   {
}

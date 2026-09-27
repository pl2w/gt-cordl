#pragma once
// IWYU pragma private; include "GlobalNamespace/PinwheelAnimator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PinwheelAnimator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PinwheelAnimator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PinwheelAnimator::*)()>(&::GlobalNamespace::PinwheelAnimator::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e06018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PinwheelAnimator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PinwheelAnimator.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PinwheelAnimator::*)()>(&::GlobalNamespace::PinwheelAnimator::LateUpdate)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5e06048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PinwheelAnimator*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PinwheelAnimator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PinwheelAnimator::*)()>(&::GlobalNamespace::PinwheelAnimator::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e062cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PinwheelAnimator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PinwheelAnimator::__cordl_internal_get_spinnerTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinnerTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PinwheelAnimator::__cordl_internal_get_spinnerTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinnerTransform;
}
constexpr void GlobalNamespace::PinwheelAnimator::__cordl_internal_set_spinnerTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinnerTransform = value;
}
constexpr float_t& GlobalNamespace::PinwheelAnimator::__cordl_internal_get_maxSpinSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpinSpeed;
}
constexpr float_t const& GlobalNamespace::PinwheelAnimator::__cordl_internal_get_maxSpinSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpinSpeed;
}
constexpr void GlobalNamespace::PinwheelAnimator::__cordl_internal_set_maxSpinSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpinSpeed = value;
}
constexpr float_t& GlobalNamespace::PinwheelAnimator::__cordl_internal_get_spinSpeedMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::PinwheelAnimator::__cordl_internal_get_spinSpeedMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinSpeedMultiplier;
}
constexpr void GlobalNamespace::PinwheelAnimator::__cordl_internal_set_spinSpeedMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinSpeedMultiplier = value;
}
constexpr float_t& GlobalNamespace::PinwheelAnimator::__cordl_internal_get_damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damping;
}
constexpr float_t const& GlobalNamespace::PinwheelAnimator::__cordl_internal_get_damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damping;
}
constexpr void GlobalNamespace::PinwheelAnimator::__cordl_internal_set_damping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damping = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PinwheelAnimator::__cordl_internal_get_oldPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PinwheelAnimator::__cordl_internal_get_oldPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldPos;
}
constexpr void GlobalNamespace::PinwheelAnimator::__cordl_internal_set_oldPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oldPos = value;
}
constexpr float_t& GlobalNamespace::PinwheelAnimator::__cordl_internal_get_spinSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinSpeed;
}
constexpr float_t const& GlobalNamespace::PinwheelAnimator::__cordl_internal_get_spinSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinSpeed;
}
constexpr void GlobalNamespace::PinwheelAnimator::__cordl_internal_set_spinSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinSpeed = value;
}
inline void GlobalNamespace::PinwheelAnimator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PinwheelAnimator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PinwheelAnimator::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PinwheelAnimator*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PinwheelAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PinwheelAnimator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PinwheelAnimator* GlobalNamespace::PinwheelAnimator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PinwheelAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PinwheelAnimator::PinwheelAnimator()   {
}

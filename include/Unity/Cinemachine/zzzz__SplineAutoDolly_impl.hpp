#pragma once
// IWYU pragma private; include "Unity/Cinemachine/SplineAutoDolly.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__SplineAutoDolly_def.hpp"
#include "Unity/Cinemachine/zzzz__SplineAutoDolly_def.hpp"
#include "UnityEngine/Splines/zzzz__PathIndexUnit_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Method", ty: "::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::SplineAutoDolly::SplineAutoDolly(bool  Enabled, ::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*  Method) noexcept  {
this->Enabled = Enabled;
this->Method = Method;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::SplineAutoDolly::SplineAutoDolly()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget.Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::*)()>(&::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_Validate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaebb910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget*>(),
                        {"Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget.Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::*)()>(&::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaebb924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget*>(),
                        {"Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget.Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_get_RequiresTrackingTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::*)()>(&::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_get_RequiresTrackingTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaebb928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget*>(),
                        {"Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.get_RequiresTrackingTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget.Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_GetSplinePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::*)(::UnityEngine::MonoBehaviour*, ::UnityEngine::Transform*, ::UnityEngine::Splines::SplineContainer*, float_t, ::UnityEngine::Splines::PathIndexUnit, float_t)>(&::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_GetSplinePosition)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xaebb930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget*>(),
                        {"Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.GetSplinePosition", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Splines::SplineContainer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::*)()>(&::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaebbab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::__cordl_internal_get_PositionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionOffset;
}
constexpr float_t const& Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::__cordl_internal_get_PositionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionOffset;
}
constexpr void Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::__cordl_internal_set_PositionOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PositionOffset = value;
}
constexpr int32_t& Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::__cordl_internal_get_SearchResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SearchResolution;
}
constexpr int32_t const& Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::__cordl_internal_get_SearchResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SearchResolution;
}
constexpr void Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::__cordl_internal_set_SearchResolution(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SearchResolution = value;
}
constexpr int32_t& Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::__cordl_internal_get_SearchIteration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SearchIteration;
}
constexpr int32_t const& Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::__cordl_internal_get_SearchIteration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SearchIteration;
}
constexpr void Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::__cordl_internal_set_SearchIteration(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SearchIteration = value;
}
inline void Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget*>(),
                        {"Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget*>(),
                        {"Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_get_RequiresTrackingTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget*>(),
                        {"Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.get_RequiresTrackingTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_GetSplinePosition(::UnityEngine::MonoBehaviour*  sender, ::UnityEngine::Transform*  target, ::UnityEngine::Splines::SplineContainer*  spline, float_t  currentPosition, ::UnityEngine::Splines::PathIndexUnit  positionUnits, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget*>(),
                        {"Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.GetSplinePosition", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Splines::SplineContainer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, sender, target, spline, currentPosition, positionUnits, deltaTime);
}
inline void Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget* Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly"
constexpr  Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::operator ::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*() noexcept {
return static_cast<::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly"
constexpr ::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly* Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::i___Unity__Cinemachine__SplineAutoDolly_ISplineAutoDolly() noexcept {
return static_cast<::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget::SplineAutoDolly_NearestPointToTarget()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::SplineAutoDolly_FixedSpeed.Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::SplineAutoDolly_FixedSpeed::*)()>(&::Unity::Cinemachine::SplineAutoDolly_FixedSpeed::Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_Validate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaebb6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_FixedSpeed*>(),
                        {"Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineAutoDolly_FixedSpeed.Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::SplineAutoDolly_FixedSpeed::*)()>(&::Unity::Cinemachine::SplineAutoDolly_FixedSpeed::Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaebb6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_FixedSpeed*>(),
                        {"Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineAutoDolly_FixedSpeed.Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_get_RequiresTrackingTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::SplineAutoDolly_FixedSpeed::*)()>(&::Unity::Cinemachine::SplineAutoDolly_FixedSpeed::Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_get_RequiresTrackingTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaebb6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_FixedSpeed*>(),
                        {"Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.get_RequiresTrackingTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineAutoDolly_FixedSpeed.Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_GetSplinePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::SplineAutoDolly_FixedSpeed::*)(::UnityEngine::MonoBehaviour*, ::UnityEngine::Transform*, ::UnityEngine::Splines::SplineContainer*, float_t, ::UnityEngine::Splines::PathIndexUnit, float_t)>(&::Unity::Cinemachine::SplineAutoDolly_FixedSpeed::Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_GetSplinePosition)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xaebb6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_FixedSpeed*>(),
                        {"Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.GetSplinePosition", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Splines::SplineContainer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineAutoDolly_FixedSpeed._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::SplineAutoDolly_FixedSpeed::*)()>(&::Unity::Cinemachine::SplineAutoDolly_FixedSpeed::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaebb908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_FixedSpeed*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::SplineAutoDolly_FixedSpeed::__cordl_internal_get_Speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Speed;
}
constexpr float_t const& Unity::Cinemachine::SplineAutoDolly_FixedSpeed::__cordl_internal_get_Speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Speed;
}
constexpr void Unity::Cinemachine::SplineAutoDolly_FixedSpeed::__cordl_internal_set_Speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Speed = value;
}
inline void Unity::Cinemachine::SplineAutoDolly_FixedSpeed::Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_FixedSpeed*>(),
                        {"Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::SplineAutoDolly_FixedSpeed::Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_FixedSpeed*>(),
                        {"Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::SplineAutoDolly_FixedSpeed::Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_get_RequiresTrackingTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_FixedSpeed*>(),
                        {"Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.get_RequiresTrackingTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::SplineAutoDolly_FixedSpeed::Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_GetSplinePosition(::UnityEngine::MonoBehaviour*  sender, ::UnityEngine::Transform*  target, ::UnityEngine::Splines::SplineContainer*  spline, float_t  currentPosition, ::UnityEngine::Splines::PathIndexUnit  positionUnits, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_FixedSpeed*>(),
                        {"Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.GetSplinePosition", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Splines::SplineContainer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, sender, target, spline, currentPosition, positionUnits, deltaTime);
}
inline void Unity::Cinemachine::SplineAutoDolly_FixedSpeed::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_FixedSpeed*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::SplineAutoDolly_FixedSpeed* Unity::Cinemachine::SplineAutoDolly_FixedSpeed::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::SplineAutoDolly_FixedSpeed*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly"
constexpr  Unity::Cinemachine::SplineAutoDolly_FixedSpeed::operator ::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*() noexcept {
return static_cast<::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly"
constexpr ::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly* Unity::Cinemachine::SplineAutoDolly_FixedSpeed::i___Unity__Cinemachine__SplineAutoDolly_ISplineAutoDolly() noexcept {
return static_cast<::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::SplineAutoDolly_FixedSpeed::SplineAutoDolly_FixedSpeed()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly::*)()>(&::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly::Validate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*>(),
                    {::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly::*)()>(&::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*>(),
                    {::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly.get_RequiresTrackingTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly::*)()>(&::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly::get_RequiresTrackingTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*>(),
                    {::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly.GetSplinePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly::*)(::UnityEngine::MonoBehaviour*, ::UnityEngine::Transform*, ::UnityEngine::Splines::SplineContainer*, float_t, ::UnityEngine::Splines::PathIndexUnit, float_t)>(&::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly::GetSplinePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*>(),
                    {::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly::Validate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly::get_RequiresTrackingTarget()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly::GetSplinePosition(::UnityEngine::MonoBehaviour*  sender, ::UnityEngine::Transform*  target, ::UnityEngine::Splines::SplineContainer*  spline, float_t  currentPosition, ::UnityEngine::Splines::PathIndexUnit  positionUnits, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, sender, target, spline, currentPosition, positionUnits, deltaTime);
}

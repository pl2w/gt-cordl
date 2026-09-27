#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineShotQualityEvaluator.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineShotQualityEvaluator_DistanceEvaluationSettings_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineShotQualityEvaluator_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineShotQualityEvaluator_DistanceEvaluationSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__IShotQualityEvaluator_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineShotQualityEvaluator.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineShotQualityEvaluator::*)()>(&::Unity::Cinemachine::CinemachineShotQualityEvaluator::OnValidate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xae97930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineShotQualityEvaluator*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineShotQualityEvaluator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineShotQualityEvaluator::*)()>(&::Unity::Cinemachine::CinemachineShotQualityEvaluator::Reset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xae97984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineShotQualityEvaluator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineShotQualityEvaluator.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineShotQualityEvaluator::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineShotQualityEvaluator::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xae979f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineShotQualityEvaluator*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineShotQualityEvaluator*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineShotQualityEvaluator.IsTargetObscured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineShotQualityEvaluator::*)(::Unity::Cinemachine::CameraState)>(&::Unity::Cinemachine::CinemachineShotQualityEvaluator::IsTargetObscured)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0xae97b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineShotQualityEvaluator*>(),
                        {"IsTargetObscured", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineShotQualityEvaluator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineShotQualityEvaluator::*)()>(&::Unity::Cinemachine::CinemachineShotQualityEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xae97e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineShotQualityEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& Unity::Cinemachine::CinemachineShotQualityEvaluator::__cordl_internal_get_OcclusionLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionLayers;
}
constexpr ::UnityEngine::LayerMask const& Unity::Cinemachine::CinemachineShotQualityEvaluator::__cordl_internal_get_OcclusionLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionLayers;
}
constexpr void Unity::Cinemachine::CinemachineShotQualityEvaluator::__cordl_internal_set_OcclusionLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OcclusionLayers = value;
}
constexpr ::StringW& Unity::Cinemachine::CinemachineShotQualityEvaluator::__cordl_internal_get_IgnoreTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreTag;
}
constexpr ::StringW const& Unity::Cinemachine::CinemachineShotQualityEvaluator::__cordl_internal_get_IgnoreTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreTag;
}
constexpr void Unity::Cinemachine::CinemachineShotQualityEvaluator::__cordl_internal_set_IgnoreTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgnoreTag = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineShotQualityEvaluator::__cordl_internal_get_MinimumDistanceFromTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinimumDistanceFromTarget;
}
constexpr float_t const& Unity::Cinemachine::CinemachineShotQualityEvaluator::__cordl_internal_get_MinimumDistanceFromTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinimumDistanceFromTarget;
}
constexpr void Unity::Cinemachine::CinemachineShotQualityEvaluator::__cordl_internal_set_MinimumDistanceFromTarget(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinimumDistanceFromTarget = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineShotQualityEvaluator::__cordl_internal_get_CameraRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraRadius;
}
constexpr float_t const& Unity::Cinemachine::CinemachineShotQualityEvaluator::__cordl_internal_get_CameraRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraRadius;
}
constexpr void Unity::Cinemachine::CinemachineShotQualityEvaluator::__cordl_internal_set_CameraRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraRadius = value;
}
constexpr ::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings& Unity::Cinemachine::CinemachineShotQualityEvaluator::__cordl_internal_get_DistanceEvaluation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DistanceEvaluation;
}
constexpr ::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings const& Unity::Cinemachine::CinemachineShotQualityEvaluator::__cordl_internal_get_DistanceEvaluation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DistanceEvaluation;
}
constexpr void Unity::Cinemachine::CinemachineShotQualityEvaluator::__cordl_internal_set_DistanceEvaluation(::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DistanceEvaluation = value;
}
inline void Unity::Cinemachine::CinemachineShotQualityEvaluator::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineShotQualityEvaluator*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineShotQualityEvaluator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineShotQualityEvaluator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineShotQualityEvaluator::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineShotQualityEvaluator*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline bool Unity::Cinemachine::CinemachineShotQualityEvaluator::IsTargetObscured(::Unity::Cinemachine::CameraState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineShotQualityEvaluator*>(),
                        {"IsTargetObscured", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void Unity::Cinemachine::CinemachineShotQualityEvaluator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineShotQualityEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineShotQualityEvaluator* Unity::Cinemachine::CinemachineShotQualityEvaluator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineShotQualityEvaluator*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::IShotQualityEvaluator"
constexpr  Unity::Cinemachine::CinemachineShotQualityEvaluator::operator ::Unity::Cinemachine::IShotQualityEvaluator*() noexcept {
return static_cast<::Unity::Cinemachine::IShotQualityEvaluator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::IShotQualityEvaluator"
constexpr ::Unity::Cinemachine::IShotQualityEvaluator* Unity::Cinemachine::CinemachineShotQualityEvaluator::i___Unity__Cinemachine__IShotQualityEvaluator() noexcept {
return static_cast<::Unity::Cinemachine::IShotQualityEvaluator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineShotQualityEvaluator::CinemachineShotQualityEvaluator()   {
}

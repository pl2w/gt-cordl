#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/ITransformFeatureStateProvider.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__ITransformFeatureStateProvider_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateActiveMode_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformConfig_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider.IsStateActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformFeature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode, ::StringW)>(&::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider::IsStateActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider.GetCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformFeature, ::by_ref<::StringW>)>(&::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider::GetCurrentState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider.RegisterConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*)>(&::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider::RegisterConfig)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider.UnRegisterConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*)>(&::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider::UnRegisterConfig)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider.GetFeatureVectorAndWristPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformFeature, bool, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>)>(&::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider::GetFeatureVectorAndWristPos)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider::IsStateActive(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  feature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode, ::StringW  stateId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, config, feature, mode, stateId);
}
inline bool Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider::GetCurrentState(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, ::by_ref<::StringW>  currentState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, config, transformFeature, currentState);
}
inline void Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider::RegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformConfig);
}
inline void Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider::UnRegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformConfig);
}
inline void Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider::GetFeatureVectorAndWristPos(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, bool  isHandVector, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  featureVec, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  wristPos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config, transformFeature, isHandVector, featureVec, wristPos);
}

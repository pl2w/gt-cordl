#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/IFingerFeatureStateProvider.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFingerFeatureStateProvider_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateActiveMode_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeature_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider.GetCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FingerFeature, ::by_ref<::StringW>)>(&::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider::GetCurrentState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider.IsStateActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FingerFeature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode, ::StringW)>(&::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider::IsStateActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider.GetFeatureValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FingerFeature)>(&::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider::GetFeatureValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider::GetCurrentState(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  fingerFeature, ::by_ref<::StringW>  currentState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger, fingerFeature, currentState);
}
inline bool Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider::IsStateActive(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  feature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode, ::StringW  stateId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger, feature, mode, stateId);
}
inline ::System::Nullable_1<float_t> Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider::GetFeatureValue(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  fingerFeature)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method, finger, fingerFeature);
}

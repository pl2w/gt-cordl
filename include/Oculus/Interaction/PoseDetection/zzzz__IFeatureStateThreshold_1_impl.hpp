#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/IFeatureStateThreshold_1.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFeatureStateThreshold_1_def.hpp"
template<typename TFeatureState>
inline float_t Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>::get_ToFirstWhenBelow()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TFeatureState>
inline float_t Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>::get_ToSecondWhenAbove()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TFeatureState>
inline TFeatureState Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>::get_FirstState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<TFeatureState>(this, ___internal_method);
}
template<typename TFeatureState>
inline TFeatureState Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>::get_SecondState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<TFeatureState>(this, ___internal_method);
}

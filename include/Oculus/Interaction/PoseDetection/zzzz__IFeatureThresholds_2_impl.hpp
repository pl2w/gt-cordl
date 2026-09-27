#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/IFeatureThresholds_2.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFeatureThresholds_2_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFeatureStateThresholds_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
template<typename TFeature,typename TFeatureState>
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*>* Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature,TFeatureState>::get_FeatureStateThresholds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature,TFeatureState>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*>*>(this, ___internal_method);
}
template<typename TFeature,typename TFeatureState>
inline double_t Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature,TFeatureState>::get_MinTimeInState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature,TFeatureState>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}

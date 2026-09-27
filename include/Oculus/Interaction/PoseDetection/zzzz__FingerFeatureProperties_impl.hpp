#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerFeatureProperties.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateDescription_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeatureProperties_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureDescription_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeature_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureProperties.get_FeatureDescriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::FingerFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>* (*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureProperties::get_FeatureDescriptions)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa49af80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureProperties*>(),
                        {"get_FeatureDescriptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PoseDetection::FingerFeatureProperties::setStaticF_CurlFeatureStates(::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>, "CurlFeatureStates", ::Oculus::Interaction::PoseDetection::FingerFeatureProperties*>(std::forward<::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>>(value));
}
inline ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*> Oculus::Interaction::PoseDetection::FingerFeatureProperties::getStaticF_CurlFeatureStates()  {
return ::cordl_internals::getStaticField<::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>, "CurlFeatureStates", ::Oculus::Interaction::PoseDetection::FingerFeatureProperties*>();
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureProperties::setStaticF_FlexionFeatureStates(::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>, "FlexionFeatureStates", ::Oculus::Interaction::PoseDetection::FingerFeatureProperties*>(std::forward<::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>>(value));
}
inline ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*> Oculus::Interaction::PoseDetection::FingerFeatureProperties::getStaticF_FlexionFeatureStates()  {
return ::cordl_internals::getStaticField<::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>, "FlexionFeatureStates", ::Oculus::Interaction::PoseDetection::FingerFeatureProperties*>();
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureProperties::setStaticF_AbductionFeatureStates(::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>, "AbductionFeatureStates", ::Oculus::Interaction::PoseDetection::FingerFeatureProperties*>(std::forward<::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>>(value));
}
inline ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*> Oculus::Interaction::PoseDetection::FingerFeatureProperties::getStaticF_AbductionFeatureStates()  {
return ::cordl_internals::getStaticField<::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>, "AbductionFeatureStates", ::Oculus::Interaction::PoseDetection::FingerFeatureProperties*>();
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureProperties::setStaticF_OppositionFeatureStates(::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>, "OppositionFeatureStates", ::Oculus::Interaction::PoseDetection::FingerFeatureProperties*>(std::forward<::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>>(value));
}
inline ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*> Oculus::Interaction::PoseDetection::FingerFeatureProperties::getStaticF_OppositionFeatureStates()  {
return ::cordl_internals::getStaticField<::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>, "OppositionFeatureStates", ::Oculus::Interaction::PoseDetection::FingerFeatureProperties*>();
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureProperties::setStaticF__FeatureDescriptions_k__BackingField(::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::FingerFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::FingerFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>*, "<FeatureDescriptions>k__BackingField", ::Oculus::Interaction::PoseDetection::FingerFeatureProperties*>(std::forward<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::FingerFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::FingerFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>* Oculus::Interaction::PoseDetection::FingerFeatureProperties::getStaticF__FeatureDescriptions_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::FingerFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>*, "<FeatureDescriptions>k__BackingField", ::Oculus::Interaction::PoseDetection::FingerFeatureProperties*>();
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::FingerFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>* Oculus::Interaction::PoseDetection::FingerFeatureProperties::get_FeatureDescriptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureProperties*>(),
                        {"get_FeatureDescriptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::FingerFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::FingerFeatureProperties::FingerFeatureProperties()   {
}

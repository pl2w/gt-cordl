#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureProperties.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureProperties_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureDescription_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureProperties.get_FeatureDescriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::TransformFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>* (*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureProperties::get_FeatureDescriptions)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4a64a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureProperties*>(),
                        {"get_FeatureDescriptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureProperties.CreateFeatureDescriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::TransformFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>* (*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureProperties::CreateFeatureDescriptions)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa4a6500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureProperties*>(),
                        {"CreateFeatureDescriptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureProperties.CreateDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseDetection::FeatureDescription* (*)(::by_ref<int32_t>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureProperties::CreateDesc)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa4a66b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureProperties*>(),
                        {"CreateDesc", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PoseDetection::TransformFeatureProperties::setStaticF__FeatureDescriptions_k__BackingField(::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::TransformFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::TransformFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>*, "<FeatureDescriptions>k__BackingField", ::Oculus::Interaction::PoseDetection::TransformFeatureProperties*>(std::forward<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::TransformFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::TransformFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>* Oculus::Interaction::PoseDetection::TransformFeatureProperties::getStaticF__FeatureDescriptions_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::TransformFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>*, "<FeatureDescriptions>k__BackingField", ::Oculus::Interaction::PoseDetection::TransformFeatureProperties*>();
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::TransformFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>* Oculus::Interaction::PoseDetection::TransformFeatureProperties::get_FeatureDescriptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureProperties*>(),
                        {"get_FeatureDescriptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::TransformFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::TransformFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>* Oculus::Interaction::PoseDetection::TransformFeatureProperties::CreateFeatureDescriptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureProperties*>(),
                        {"CreateFeatureDescriptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::TransformFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>*>(nullptr, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::FeatureDescription* Oculus::Interaction::PoseDetection::TransformFeatureProperties::CreateDesc(::by_ref<int32_t>  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureProperties*>(),
                        {"CreateDesc", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseDetection::FeatureDescription*>(nullptr, ___internal_method, startIndex);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureProperties::TransformFeatureProperties()   {
}

#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerFeatureThresholds.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeature_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeatureThresholds_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeatureStateThreshold_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeature_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFeatureStateThreshold_1_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFeatureStateThresholds_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureThresholds._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureThresholds::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureThresholds::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49c958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureThresholds._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureThresholds::*)(::Oculus::Interaction::PoseDetection::FingerFeature, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>*)>(&::Oculus::Interaction::PoseDetection::FingerFeatureThresholds::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa49c960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureThresholds.get_Feature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseDetection::FingerFeature (::Oculus::Interaction::PoseDetection::FingerFeatureThresholds::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureThresholds::get_Feature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49ca00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*>(),
                        {"get_Feature", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureThresholds.get_Thresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>* (::Oculus::Interaction::PoseDetection::FingerFeatureThresholds::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureThresholds::get_Thresholds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49ca08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*>(),
                        {"get_Thresholds", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::PoseDetection::FingerFeature& Oculus::Interaction::PoseDetection::FingerFeatureThresholds::__cordl_internal_get__feature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feature;
}
constexpr ::Oculus::Interaction::PoseDetection::FingerFeature const& Oculus::Interaction::PoseDetection::FingerFeatureThresholds::__cordl_internal_get__feature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feature;
}
constexpr void Oculus::Interaction::PoseDetection::FingerFeatureThresholds::__cordl_internal_set__feature(::Oculus::Interaction::PoseDetection::FingerFeature  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____feature = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>*& Oculus::Interaction::PoseDetection::FingerFeatureThresholds::__cordl_internal_get__thresholds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholds;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>* const& Oculus::Interaction::PoseDetection::FingerFeatureThresholds::__cordl_internal_get__thresholds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholds;
}
constexpr void Oculus::Interaction::PoseDetection::FingerFeatureThresholds::__cordl_internal_set__thresholds(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thresholds = value;
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureThresholds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureThresholds::_ctor(::Oculus::Interaction::PoseDetection::FingerFeature  feature, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>*  thresholds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature, thresholds);
}
inline ::Oculus::Interaction::PoseDetection::FingerFeature Oculus::Interaction::PoseDetection::FingerFeatureThresholds::get_Feature()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*>(),
                        {"get_Feature", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseDetection::FingerFeature>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>* Oculus::Interaction::PoseDetection::FingerFeatureThresholds::get_Thresholds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*>(),
                        {"get_Thresholds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>*>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::FingerFeatureThresholds* Oculus::Interaction::PoseDetection::FingerFeatureThresholds::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*>());
}
inline ::Oculus::Interaction::PoseDetection::FingerFeatureThresholds* Oculus::Interaction::PoseDetection::FingerFeatureThresholds::New_ctor(::Oculus::Interaction::PoseDetection::FingerFeature  feature, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>*  thresholds)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*>(feature, thresholds));
}
/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>"
constexpr  Oculus::Interaction::PoseDetection::FingerFeatureThresholds::operator ::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>*() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>"
constexpr ::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>* Oculus::Interaction::PoseDetection::FingerFeatureThresholds::i___Oculus__Interaction__PoseDetection__IFeatureStateThresholds_2___Oculus__Interaction__PoseDetection__FingerFeature___StringW_() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::FingerFeatureThresholds::FingerFeatureThresholds()   {
}

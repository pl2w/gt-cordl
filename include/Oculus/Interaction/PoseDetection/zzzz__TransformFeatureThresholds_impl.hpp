#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureThresholds.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureThresholds_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFeatureStateThreshold_1_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFeatureStateThresholds_2_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureStateThreshold_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureThresholds._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureThresholds::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureThresholds::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a83ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureThresholds._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureThresholds::*)(::Oculus::Interaction::PoseDetection::TransformFeature, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureThresholds::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4a83b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureThresholds.get_Feature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseDetection::TransformFeature (::Oculus::Interaction::PoseDetection::TransformFeatureThresholds::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureThresholds::get_Feature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a8454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>(),
                        {"get_Feature", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureThresholds.get_Thresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>* (::Oculus::Interaction::PoseDetection::TransformFeatureThresholds::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureThresholds::get_Thresholds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a845c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>(),
                        {"get_Thresholds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureThresholds.get_MinTimeInState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Oculus::Interaction::PoseDetection::TransformFeatureThresholds::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureThresholds::get_MinTimeInState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a8464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>(),
                        {"get_MinTimeInState", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::PoseDetection::TransformFeature& Oculus::Interaction::PoseDetection::TransformFeatureThresholds::__cordl_internal_get__feature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feature;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformFeature const& Oculus::Interaction::PoseDetection::TransformFeatureThresholds::__cordl_internal_get__feature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feature;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureThresholds::__cordl_internal_set__feature(::Oculus::Interaction::PoseDetection::TransformFeature  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____feature = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>*& Oculus::Interaction::PoseDetection::TransformFeatureThresholds::__cordl_internal_get__thresholds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholds;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>* const& Oculus::Interaction::PoseDetection::TransformFeatureThresholds::__cordl_internal_get__thresholds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholds;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureThresholds::__cordl_internal_set__thresholds(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thresholds = value;
}
constexpr double_t& Oculus::Interaction::PoseDetection::TransformFeatureThresholds::__cordl_internal_get__minTimeInState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minTimeInState;
}
constexpr double_t const& Oculus::Interaction::PoseDetection::TransformFeatureThresholds::__cordl_internal_get__minTimeInState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minTimeInState;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureThresholds::__cordl_internal_set__minTimeInState(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minTimeInState = value;
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureThresholds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureThresholds::_ctor(::Oculus::Interaction::PoseDetection::TransformFeature  featureTransform, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>*  thresholds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, featureTransform, thresholds);
}
inline ::Oculus::Interaction::PoseDetection::TransformFeature Oculus::Interaction::PoseDetection::TransformFeatureThresholds::get_Feature()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>(),
                        {"get_Feature", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseDetection::TransformFeature>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>* Oculus::Interaction::PoseDetection::TransformFeatureThresholds::get_Thresholds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>(),
                        {"get_Thresholds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>*>(this, ___internal_method);
}
inline double_t Oculus::Interaction::PoseDetection::TransformFeatureThresholds::get_MinTimeInState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>(),
                        {"get_MinTimeInState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureThresholds* Oculus::Interaction::PoseDetection::TransformFeatureThresholds::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>());
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureThresholds* Oculus::Interaction::PoseDetection::TransformFeatureThresholds::New_ctor(::Oculus::Interaction::PoseDetection::TransformFeature  featureTransform, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>*  thresholds)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>(featureTransform, thresholds));
}
/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>"
constexpr  Oculus::Interaction::PoseDetection::TransformFeatureThresholds::operator ::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>"
constexpr ::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>* Oculus::Interaction::PoseDetection::TransformFeatureThresholds::i___Oculus__Interaction__PoseDetection__IFeatureStateThresholds_2___Oculus__Interaction__PoseDetection__TransformFeature___StringW_() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureThresholds::TransformFeatureThresholds()   {
}

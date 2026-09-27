#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureStateThresholds.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureStateThresholds_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFeatureStateThresholds_2_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFeatureThresholds_2_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureThresholds_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds.Construct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>*, double_t)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::Construct)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4a846c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds*>(),
                        {"Construct", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds.get_FeatureStateThresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*>* (::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::get_FeatureStateThresholds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a8498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds*>(),
                        {"get_FeatureStateThresholds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds.get_MinTimeInState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::get_MinTimeInState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a84a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds*>(),
                        {"get_MinTimeInState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a84a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>*& Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::__cordl_internal_get__featureThresholds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureThresholds;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>* const& Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::__cordl_internal_get__featureThresholds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureThresholds;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::__cordl_internal_set__featureThresholds(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureThresholds = value;
}
constexpr double_t& Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::__cordl_internal_get__minTimeInState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minTimeInState;
}
constexpr double_t const& Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::__cordl_internal_get__minTimeInState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minTimeInState;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::__cordl_internal_set__minTimeInState(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minTimeInState = value;
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::Construct(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>*  featureThresholds, double_t  minTimeInState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds*>(),
                        {"Construct", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, featureThresholds, minTimeInState);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*>* Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::get_FeatureStateThresholds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds*>(),
                        {"get_FeatureStateThresholds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*>*>(this, ___internal_method);
}
inline double_t Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::get_MinTimeInState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds*>(),
                        {"get_MinTimeInState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds* Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds*>());
}
/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>"
constexpr  Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::operator ::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>"
constexpr ::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>* Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::i___Oculus__Interaction__PoseDetection__IFeatureThresholds_2___Oculus__Interaction__PoseDetection__TransformFeature___StringW_() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds::TransformFeatureStateThresholds()   {
}

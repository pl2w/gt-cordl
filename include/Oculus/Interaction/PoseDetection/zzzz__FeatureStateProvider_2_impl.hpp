#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FeatureStateProvider_2.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateProvider`2_FeatureStateSnapshot_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFeatureStateThresholds_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateProvider_2_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateProvider`2_FeatureStateSnapshot_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFeatureStateThreshold_1_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFeatureStateThresholds_2_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFeatureThresholds_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename TFeature,typename TFeatureState>
constexpr int32_t& Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_get__LastUpdatedFrameId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastUpdatedFrameId_k__BackingField;
}
template<typename TFeature,typename TFeatureState>
constexpr int32_t const& Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_get__LastUpdatedFrameId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastUpdatedFrameId_k__BackingField;
}
template<typename TFeature,typename TFeatureState>
constexpr void Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_set__LastUpdatedFrameId_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastUpdatedFrameId_k__BackingField = value;
}
template<typename TFeature,typename TFeatureState>
constexpr ::ArrayW<::GlobalNamespace::FeatureStateProvider_2_FeatureStateSnapshot<TFeature,TFeatureState>>& Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_get__featureToCurrentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureToCurrentState;
}
template<typename TFeature,typename TFeatureState>
constexpr ::ArrayW<::GlobalNamespace::FeatureStateProvider_2_FeatureStateSnapshot<TFeature,TFeatureState>> const& Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_get__featureToCurrentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureToCurrentState;
}
template<typename TFeature,typename TFeatureState>
constexpr void Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_set__featureToCurrentState(::ArrayW<::GlobalNamespace::FeatureStateProvider_2_FeatureStateSnapshot<TFeature,TFeatureState>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureToCurrentState = value;
}
template<typename TFeature,typename TFeatureState>
constexpr ::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*>& Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_get__featureToThresholds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureToThresholds;
}
template<typename TFeature,typename TFeatureState>
constexpr ::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*> const& Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_get__featureToThresholds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureToThresholds;
}
template<typename TFeature,typename TFeatureState>
constexpr void Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_set__featureToThresholds(::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureToThresholds = value;
}
template<typename TFeature,typename TFeatureState>
constexpr ::System::Func_2<TFeature,::System::Nullable_1<float_t>>*& Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_get__valueReader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueReader;
}
template<typename TFeature,typename TFeatureState>
constexpr ::System::Func_2<TFeature,::System::Nullable_1<float_t>>* const& Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_get__valueReader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueReader;
}
template<typename TFeature,typename TFeatureState>
constexpr void Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_set__valueReader(::System::Func_2<TFeature,::System::Nullable_1<float_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueReader = value;
}
template<typename TFeature,typename TFeatureState>
constexpr ::System::Func_2<TFeature,int32_t>*& Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_get__featureToInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureToInt;
}
template<typename TFeature,typename TFeatureState>
constexpr ::System::Func_2<TFeature,int32_t>* const& Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_get__featureToInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureToInt;
}
template<typename TFeature,typename TFeatureState>
constexpr void Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_set__featureToInt(::System::Func_2<TFeature,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureToInt = value;
}
template<typename TFeature,typename TFeatureState>
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
template<typename TFeature,typename TFeatureState>
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
template<typename TFeature,typename TFeatureState>
constexpr void Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
template<typename TFeature,typename TFeatureState>
constexpr ::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature,TFeatureState>*& Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_get__featureThresholds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureThresholds;
}
template<typename TFeature,typename TFeatureState>
constexpr ::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature,TFeatureState>* const& Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_get__featureThresholds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureThresholds;
}
template<typename TFeature,typename TFeatureState>
constexpr void Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::__cordl_internal_set__featureThresholds(::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature,TFeatureState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureThresholds = value;
}
template<typename TFeature,typename TFeatureState>
inline void Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::setStaticF_FeatureEnumValues(::ArrayW<TFeature>  value)  {
::cordl_internals::setStaticField<::ArrayW<TFeature>, "FeatureEnumValues", ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>*>(std::forward<::ArrayW<TFeature>>(value));
}
template<typename TFeature,typename TFeatureState>
inline ::ArrayW<TFeature> Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::getStaticF_FeatureEnumValues()  {
return ::cordl_internals::getStaticField<::ArrayW<TFeature>, "FeatureEnumValues", ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>*>();
}
template<typename TFeature,typename TFeatureState>
inline int32_t Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::get_LastUpdatedFrameId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>*>(),
                        {"get_LastUpdatedFrameId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TFeature,typename TFeatureState>
inline void Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::set_LastUpdatedFrameId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>*>(),
                        {"set_LastUpdatedFrameId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TFeature,typename TFeatureState>
inline int32_t Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::EnumToInt(TFeature  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>*>(),
                        {"EnumToInt", {}, {::i2c::type_of<TFeature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
template<typename TFeature,typename TFeatureState>
inline void Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::_ctor(::System::Func_2<TFeature,::System::Nullable_1<float_t>>*  valueReader, ::System::Func_2<TFeature,int32_t>*  featureToInt, ::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_2<TFeature,::System::Nullable_1<float_t>>*>(), ::i2c::type_of<::System::Func_2<TFeature,int32_t>*>(), ::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valueReader, featureToInt, timeProvider);
}
template<typename TFeature,typename TFeatureState>
inline void Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::InitializeThresholds(::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature,TFeatureState>*  featureThresholds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>*>(),
                        {"InitializeThresholds", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature,TFeatureState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, featureThresholds);
}
template<typename TFeature,typename TFeatureState>
inline ::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*> Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::ValidateFeatureThresholds(::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*>*  featureStateThresholdsList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>*>(),
                        {"ValidateFeatureThresholds", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*>>(this, ___internal_method, featureStateThresholdsList);
}
template<typename TFeature,typename TFeatureState>
inline void Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::InitializeStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>*>(),
                        {"InitializeStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TFeature,typename TFeatureState>
inline ::by_ref<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*> Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::GetFeatureThresholds(TFeature  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>*>(),
                        {"GetFeatureThresholds", {}, {::i2c::type_of<TFeature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*>>(this, ___internal_method, feature);
}
template<typename TFeature,typename TFeatureState>
inline TFeatureState Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::GetCurrentFeatureState(TFeature  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>*>(),
                        {"GetCurrentFeatureState", {}, {::i2c::type_of<TFeature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TFeatureState>(this, ___internal_method, feature);
}
template<typename TFeature,typename TFeatureState>
inline TFeatureState Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::ReadDesiredState(float_t  value, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>*>*  featureStateThresholds, TFeatureState  previousState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>*>(),
                        {"ReadDesiredState", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>*>*>(), ::i2c::type_of<TFeatureState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TFeatureState>(this, ___internal_method, value, featureStateThresholds, previousState);
}
template<typename TFeature,typename TFeatureState>
inline TFeatureState Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::ReadDesiredState(float_t  value, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>*>*  featureStateThresholds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>*>(),
                        {"ReadDesiredState", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TFeatureState>(this, ___internal_method, value, featureStateThresholds);
}
template<typename TFeature,typename TFeatureState>
inline void Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::ReadTouchedFeatureStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>*>(),
                        {"ReadTouchedFeatureStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TFeature,typename TFeatureState>
inline ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>* Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::New_ctor(::System::Func_2<TFeature,::System::Nullable_1<float_t>>*  valueReader, ::System::Func_2<TFeature,int32_t>*  featureToInt, ::System::Func_1<float_t>*  timeProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>*>(valueReader, featureToInt, timeProvider));
}
// Ctor Parameters []
template<typename TFeature,typename TFeatureState>
constexpr ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>::FeatureStateProvider_2()   {
}

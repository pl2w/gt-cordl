#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FeatureConfigBase_1.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateActiveMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureConfigBase_1_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateActiveMode_def.hpp"
template<typename TFeature>
constexpr ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode& Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::__cordl_internal_get__mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
template<typename TFeature>
constexpr ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode const& Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::__cordl_internal_get__mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
template<typename TFeature>
constexpr void Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::__cordl_internal_set__mode(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mode = value;
}
template<typename TFeature>
constexpr TFeature& Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::__cordl_internal_get__feature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feature;
}
template<typename TFeature>
constexpr TFeature const& Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::__cordl_internal_get__feature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feature;
}
template<typename TFeature>
constexpr void Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::__cordl_internal_set__feature(TFeature  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____feature = value;
}
template<typename TFeature>
constexpr ::StringW& Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
template<typename TFeature>
constexpr ::StringW const& Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
template<typename TFeature>
constexpr void Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::__cordl_internal_set__state(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
template<typename TFeature>
inline ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::get_Mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>*>(),
                        {"get_Mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseDetection::FeatureStateActiveMode>(this, ___internal_method);
}
template<typename TFeature>
inline void Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::set_Mode(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>*>(),
                        {"set_Mode", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::FeatureStateActiveMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TFeature>
inline TFeature Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::get_Feature()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>*>(),
                        {"get_Feature", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TFeature>(this, ___internal_method);
}
template<typename TFeature>
inline void Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::set_Feature(TFeature  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>*>(),
                        {"set_Feature", {}, {::i2c::type_of<TFeature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TFeature>
inline ::StringW Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TFeature>
inline void Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::set_State(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>*>(),
                        {"set_State", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TFeature>
inline void Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TFeature>
inline ::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>* Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>*>());
}
// Ctor Parameters []
template<typename TFeature>
constexpr ::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>::FeatureConfigBase_1()   {
}

#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerFeatureStateDictionary.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeatureStateDictionary_HandFingerState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeatureStateDictionary_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateProvider_2_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeatureStateDictionary_HandFingerState_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeature_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary.InitializeFinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>*)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary::InitializeFinger)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa49b850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*>(),
                        {"InitializeFinger", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary.GetStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>* (::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary::GetStateProvider)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa49b8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*>(),
                        {"GetStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa49b8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::FingerFeatureStateDictionary_HandFingerState>& Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary::__cordl_internal_get__fingerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerState;
}
constexpr ::ArrayW<::GlobalNamespace::FingerFeatureStateDictionary_HandFingerState> const& Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary::__cordl_internal_get__fingerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerState;
}
constexpr void Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary::__cordl_internal_set__fingerState(::ArrayW<::GlobalNamespace::FingerFeatureStateDictionary_HandFingerState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerState = value;
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary::InitializeFinger(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>*  stateProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*>(),
                        {"InitializeFinger", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finger, stateProvider);
}
inline ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>* Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary::GetStateProvider(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*>(),
                        {"GetStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>*>(this, ___internal_method, finger);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary* Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary::FingerFeatureStateDictionary()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/Primitives/ColorTweenableVariable.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableAsyncBase_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/Primitives/zzzz__ColorTweenableVariable_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable.ScheduleTweenJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::ScheduleTweenJob)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb42b97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb42ba4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Jobs::JobHandle UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::ScheduleTweenJob(::by_ref<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>>  jobData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, jobData);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::ColorTweenableVariable()   {
}

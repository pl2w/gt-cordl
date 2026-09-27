#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/ColorAffordanceReceiver.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseAsyncAffordanceStateReceiver_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__ColorAffordanceReceiver_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__ColorUnityEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/zzzz__ColorAffordanceThemeDatumProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/zzzz__BaseAffordanceTheme_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver.get_affordanceThemeDatum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::get_affordanceThemeDatum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dbfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(),
                        {"get_affordanceThemeDatum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver.set_affordanceThemeDatum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::set_affordanceThemeDatum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dbfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(),
                        {"set_affordanceThemeDatum", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver.get_valueUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::ColorUnityEvent* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::get_valueUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dbfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(),
                        {"get_valueUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver.set_valueUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)(::Unity::XR::CoreUtils::ColorUnityEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::set_valueUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dbfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(),
                        {"set_valueUpdated", {}, {::i2c::type_of<::Unity::XR::CoreUtils::ColorUnityEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver.get_defaultAffordanceTheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::get_defaultAffordanceTheme)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4dbfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver.get_affordanceValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::get_affordanceValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dc02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver.ScheduleTweenJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>>)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::ScheduleTweenJob)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb4dc034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver.GenerateNewAffordanceThemeInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::GenerateNewAffordanceThemeInstance)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4dc1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver.OnAffordanceValueUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)(::UnityEngine::Color)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::OnAffordanceValueUpdated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb4da2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb4da404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::__cordl_internal_get_m_AffordanceThemeDatum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AffordanceThemeDatum;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::__cordl_internal_get_m_AffordanceThemeDatum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AffordanceThemeDatum;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::__cordl_internal_set_m_AffordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AffordanceThemeDatum = value;
}
constexpr ::Unity::XR::CoreUtils::ColorUnityEvent*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::__cordl_internal_get_m_ValueUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValueUpdated;
}
constexpr ::Unity::XR::CoreUtils::ColorUnityEvent* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::__cordl_internal_get_m_ValueUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValueUpdated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::__cordl_internal_set_m_ValueUpdated(::Unity::XR::CoreUtils::ColorUnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ValueUpdated = value;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::__cordl_internal_get__affordanceValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____affordanceValue_k__BackingField;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::__cordl_internal_get__affordanceValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____affordanceValue_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::__cordl_internal_set__affordanceValue_k__BackingField(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____affordanceValue_k__BackingField = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::get_affordanceThemeDatum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(),
                        {"get_affordanceThemeDatum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::set_affordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(),
                        {"set_affordanceThemeDatum", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::XR::CoreUtils::ColorUnityEvent* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::get_valueUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(),
                        {"get_valueUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::ColorUnityEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::set_valueUpdated(::Unity::XR::CoreUtils::ColorUnityEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(),
                        {"set_valueUpdated", {}, {::i2c::type_of<::Unity::XR::CoreUtils::ColorUnityEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::get_defaultAffordanceTheme()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>*>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::get_affordanceValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>*>(this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::ScheduleTweenJob(::by_ref<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>>  jobData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, jobData);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::GenerateNewAffordanceThemeInstance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::OnAffordanceValueUpdated(::UnityEngine::Color  newValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::ColorAffordanceReceiver()   {
}

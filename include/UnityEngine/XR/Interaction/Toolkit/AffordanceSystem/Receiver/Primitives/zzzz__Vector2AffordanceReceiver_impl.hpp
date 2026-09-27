#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/Vector2AffordanceReceiver.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseAsyncAffordanceStateReceiver_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__Vector2AffordanceReceiver_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__Vector2UnityEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/zzzz__Vector2AffordanceThemeDatumProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/zzzz__BaseAffordanceTheme_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver.get_affordanceThemeDatum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::get_affordanceThemeDatum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dc504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(),
                        {"get_affordanceThemeDatum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver.set_affordanceThemeDatum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::set_affordanceThemeDatum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dc50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(),
                        {"set_affordanceThemeDatum", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver.get_valueUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::Vector2UnityEvent* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::get_valueUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dc514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(),
                        {"get_valueUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver.set_valueUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::*)(::Unity::XR::CoreUtils::Vector2UnityEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::set_valueUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dc51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(),
                        {"set_valueUpdated", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Vector2UnityEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver.get_defaultAffordanceTheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float2>* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::get_defaultAffordanceTheme)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4dc524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver.get_affordanceValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::get_affordanceValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dc57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver.ScheduleTweenJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2>>)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::ScheduleTweenJob)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb4dc584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver.GenerateNewAffordanceThemeInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float2>* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::GenerateNewAffordanceThemeInstance)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4dc630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver.OnAffordanceValueUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::*)(::Unity::Mathematics::float2)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::OnAffordanceValueUpdated)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb4db6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4db760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::__cordl_internal_get_m_AffordanceThemeDatum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AffordanceThemeDatum;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::__cordl_internal_get_m_AffordanceThemeDatum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AffordanceThemeDatum;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::__cordl_internal_set_m_AffordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AffordanceThemeDatum = value;
}
constexpr ::Unity::XR::CoreUtils::Vector2UnityEvent*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::__cordl_internal_get_m_ValueUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValueUpdated;
}
constexpr ::Unity::XR::CoreUtils::Vector2UnityEvent* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::__cordl_internal_get_m_ValueUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValueUpdated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::__cordl_internal_set_m_ValueUpdated(::Unity::XR::CoreUtils::Vector2UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ValueUpdated = value;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::__cordl_internal_get__affordanceValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____affordanceValue_k__BackingField;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::__cordl_internal_get__affordanceValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____affordanceValue_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::__cordl_internal_set__affordanceValue_k__BackingField(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____affordanceValue_k__BackingField = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::get_affordanceThemeDatum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(),
                        {"get_affordanceThemeDatum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::set_affordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(),
                        {"set_affordanceThemeDatum", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::XR::CoreUtils::Vector2UnityEvent* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::get_valueUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(),
                        {"get_valueUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Vector2UnityEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::set_valueUpdated(::Unity::XR::CoreUtils::Vector2UnityEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(),
                        {"set_valueUpdated", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Vector2UnityEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float2>* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::get_defaultAffordanceTheme()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float2>*>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::get_affordanceValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>*>(this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::ScheduleTweenJob(::by_ref<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2>>  jobData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, jobData);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float2>* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::GenerateNewAffordanceThemeInstance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::OnAffordanceValueUpdated(::Unity::Mathematics::float2  newValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver::Vector2AffordanceReceiver()   {
}

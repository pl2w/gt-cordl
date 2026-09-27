#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Audio/AudioAffordanceReceiver.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Audio/zzzz__AudioAffordanceReceiver_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/zzzz__BindingsGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__AffordanceStateData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__BaseAffordanceStateProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Audio/zzzz__AudioAffordanceThemeDatumProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Audio/zzzz__AudioAffordanceTheme_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver.get_affordanceStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider> (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::get_affordanceStateProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dc980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"get_affordanceStateProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver.set_affordanceStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::set_affordanceStateProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dc988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"set_affordanceStateProvider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver.get_affordanceThemeDatum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::get_affordanceThemeDatum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dc990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"get_affordanceThemeDatum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver.set_affordanceThemeDatum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::set_affordanceThemeDatum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dc998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"set_affordanceThemeDatum", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver.get_audioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioSource> (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::get_audioSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dc9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"get_audioSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver.set_audioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)(::UnityEngine::AudioSource*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::set_audioSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dc9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"set_audioSource", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::OnValidate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb4dc9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::Awake)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb4dca54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::OnEnable)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xb4dceec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::OnDisable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4dd0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver.LogIfMissingAffordanceStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceTheme*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::LogIfMissingAffordanceStates)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xb4dcb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"LogIfMissingAffordanceStates", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceTheme*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver.OnAffordanceStateUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::OnAffordanceStateUpdated)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xb4dd10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"OnAffordanceStateUpdated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver.PlayAudioClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::PlayAudioClip)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb4dd2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"PlayAudioClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb4dd360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider>& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::__cordl_internal_get_m_AffordanceStateProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AffordanceStateProvider;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider> const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::__cordl_internal_get_m_AffordanceStateProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AffordanceStateProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::__cordl_internal_set_m_AffordanceStateProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AffordanceStateProvider = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::__cordl_internal_get_m_AffordanceThemeDatum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AffordanceThemeDatum;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::__cordl_internal_get_m_AffordanceThemeDatum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AffordanceThemeDatum;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::__cordl_internal_set_m_AffordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AffordanceThemeDatum = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::__cordl_internal_get_m_AudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::__cordl_internal_get_m_AudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioSource;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::__cordl_internal_set_m_AudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AudioSource = value;
}
constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::__cordl_internal_get_m_BindingsGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsGroup;
}
constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::__cordl_internal_get_m_BindingsGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsGroup;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::__cordl_internal_set_m_BindingsGroup(::Unity::XR::CoreUtils::Bindings::BindingsGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingsGroup = value;
}
constexpr uint8_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::__cordl_internal_get_m_LastAffordanceStateIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastAffordanceStateIndex;
}
constexpr uint8_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::__cordl_internal_get_m_LastAffordanceStateIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastAffordanceStateIndex;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::__cordl_internal_set_m_LastAffordanceStateIndex(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastAffordanceStateIndex = value;
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider> UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::get_affordanceStateProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"get_affordanceStateProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::set_affordanceStateProvider(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"set_affordanceStateProvider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::get_affordanceThemeDatum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"get_affordanceThemeDatum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::set_affordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"set_affordanceThemeDatum", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioSource> UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::get_audioSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"get_audioSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::set_audioSource(::UnityEngine::AudioSource*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"set_audioSource", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::LogIfMissingAffordanceStates(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceTheme*  theme)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"LogIfMissingAffordanceStates", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceTheme*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, theme);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::OnAffordanceStateUpdated(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  affordanceStateData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"OnAffordanceStateUpdated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, affordanceStateData);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::PlayAudioClip(::UnityEngine::AudioClip*  clipToPlay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {"PlayAudioClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipToPlay);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver::AudioAffordanceReceiver()   {
}

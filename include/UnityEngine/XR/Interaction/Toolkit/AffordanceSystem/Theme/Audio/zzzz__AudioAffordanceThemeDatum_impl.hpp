#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Audio/AudioAffordanceThemeDatum.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Audio/zzzz__AudioAffordanceThemeDatum_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Audio/zzzz__AudioAffordanceTheme_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatum::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatum::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4d2024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatum*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatum::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatum*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatum* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatum::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatum*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatum::AudioAffordanceThemeDatum()   {
}

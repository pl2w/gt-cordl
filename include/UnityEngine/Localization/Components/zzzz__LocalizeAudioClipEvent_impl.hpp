#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Components/LocalizeAudioClipEvent.hpp"
#include "UnityEngine/Localization/Components/zzzz__LocalizedAssetEvent_3_impl.hpp"
#include "UnityEngine/Localization/Components/zzzz__LocalizeAudioClipEvent_def.hpp"
#include "UnityEngine/Localization/Events/zzzz__UnityEventAudioClip_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedAudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Components::LocalizeAudioClipEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Components::LocalizeAudioClipEvent::*)()>(&::UnityEngine::Localization::Components::LocalizeAudioClipEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb04ed60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Components::LocalizeAudioClipEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Components::LocalizeAudioClipEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Components::LocalizeAudioClipEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Components::LocalizeAudioClipEvent* UnityEngine::Localization::Components::LocalizeAudioClipEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Components::LocalizeAudioClipEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Components::LocalizeAudioClipEvent::LocalizeAudioClipEvent()   {
}

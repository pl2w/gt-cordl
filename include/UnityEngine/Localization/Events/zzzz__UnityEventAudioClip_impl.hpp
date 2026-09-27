#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Events/UnityEventAudioClip.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/Localization/Events/zzzz__UnityEventAudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Events::UnityEventAudioClip._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Events::UnityEventAudioClip::*)()>(&::UnityEngine::Localization::Events::UnityEventAudioClip::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb04ebf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Events::UnityEventAudioClip*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Events::UnityEventAudioClip::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Events::UnityEventAudioClip*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Events::UnityEventAudioClip* UnityEngine::Localization::Events::UnityEventAudioClip::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Events::UnityEventAudioClip*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Events::UnityEventAudioClip::UnityEventAudioClip()   {
}

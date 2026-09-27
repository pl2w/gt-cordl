#pragma once
// IWYU pragma private; include "Liv/Lck/LckDiscreetAudioController_AudioClipAndVolume.hpp"
#include "Liv/Lck/zzzz__LckDiscreetAudioController_AudioClipAndVolume_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume::*)(::UnityEngine::AudioClip*, float_t)>(&::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ce0ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume::_ctor(::UnityEngine::AudioClip*  clip, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, clip, volume);
}
// Ctor Parameters [CppParam { name: "clip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume::LckDiscreetAudioController_AudioClipAndVolume(::UnityW<::UnityEngine::AudioClip>  clip, float_t  volume) noexcept  {
this->clip = clip;
this->volume = volume;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume::LckDiscreetAudioController_AudioClipAndVolume()   {
}

#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/IAudioClipProvider.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioClipProvider_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipProvider.get_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::Meta::Voice::Audio::IAudioClipProvider::*)()>(&::Meta::Voice::Audio::IAudioClipProvider::get_Clip)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipProvider*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::AudioClip> Meta::Voice::Audio::IAudioClipProvider::get_Clip()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}

#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/IAudioSourceProvider.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioSourceProvider_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioSourceProvider.get_AudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioSource> (::Meta::Voice::Audio::IAudioSourceProvider::*)()>(&::Meta::Voice::Audio::IAudioSourceProvider::get_AudioSource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioSourceProvider*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioSourceProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::AudioSource> Meta::Voice::Audio::IAudioSourceProvider::get_AudioSource()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioSourceProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>>(this, ___internal_method);
}

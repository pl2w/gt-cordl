#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/IAudioBufferProvider.hpp"
#include "Meta/WitAi/Data/zzzz__IAudioBufferProvider_def.hpp"
#include "Meta/WitAi/Data/zzzz__AudioBuffer_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::IAudioBufferProvider.InstantiateAudioBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::Data::AudioBuffer> (::Meta::WitAi::Data::IAudioBufferProvider::*)()>(&::Meta::WitAi::Data::IAudioBufferProvider::InstantiateAudioBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::IAudioBufferProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::Data::IAudioBufferProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::Meta::WitAi::Data::AudioBuffer> Meta::WitAi::Data::IAudioBufferProvider::InstantiateAudioBuffer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::IAudioBufferProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::Data::AudioBuffer>>(this, ___internal_method);
}

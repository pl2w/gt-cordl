#pragma once
// IWYU pragma private; include "Liv/NativeAudioBridge/NativeAudioUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/NativeAudioBridge/zzzz__NativeAudioUtils_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Liv::NativeAudioBridge::NativeAudioUtils.ConvertAudioClipToByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int8_t> (*)(::UnityEngine::AudioClip*, float_t)>(&::Liv::NativeAudioBridge::NativeAudioUtils::ConvertAudioClipToByteArray)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9d6f3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeAudioBridge::NativeAudioUtils*>(),
                        {"ConvertAudioClipToByteArray", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<int8_t> Liv::NativeAudioBridge::NativeAudioUtils::ConvertAudioClipToByteArray(::UnityEngine::AudioClip*  audioClip, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeAudioBridge::NativeAudioUtils*>(),
                        {"ConvertAudioClipToByteArray", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int8_t>>(nullptr, ___internal_method, audioClip, volume);
}
// Ctor Parameters []
constexpr ::Liv::NativeAudioBridge::NativeAudioUtils::NativeAudioUtils()   {
}

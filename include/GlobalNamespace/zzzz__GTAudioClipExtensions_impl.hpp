#pragma once
// IWYU pragma private; include "GlobalNamespace/GTAudioClipExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GTAudioClipExtensions_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTAudioClipExtensions.GetPeakMagnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::GTAudioClipExtensions::GetPeakMagnitude)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x56735f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAudioClipExtensions*>(),
                        {"GetPeakMagnitude", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTAudioClipExtensions.GetRMSMagnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::GTAudioClipExtensions::GetRMSMagnitude)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x56736fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAudioClipExtensions*>(),
                        {"GetRMSMagnitude", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::GTAudioClipExtensions::GetPeakMagnitude(::UnityEngine::AudioClip*  audioClip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAudioClipExtensions*>(),
                        {"GetPeakMagnitude", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, audioClip);
}
inline float_t GlobalNamespace::GTAudioClipExtensions::GetRMSMagnitude(::UnityEngine::AudioClip*  audioClip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAudioClipExtensions*>(),
                        {"GetRMSMagnitude", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, audioClip);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTAudioClipExtensions::GTAudioClipExtensions()   {
}

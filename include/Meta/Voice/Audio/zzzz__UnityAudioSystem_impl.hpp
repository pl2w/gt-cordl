#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/UnityAudioSystem.hpp"
#include "Meta/Voice/Audio/zzzz__BaseAudioSystem_2_impl.hpp"
#include "Meta/Voice/Audio/zzzz__UnityAudioSystem_def.hpp"
#include "Meta/Voice/Audio/zzzz__RawAudioClipStream_def.hpp"
#include "Meta/Voice/Audio/zzzz__UnityAudioPlayer_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::UnityAudioSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::UnityAudioSystem::*)()>(&::Meta::Voice::Audio::UnityAudioSystem::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e6df50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::UnityAudioSystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::Voice::Audio::UnityAudioSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::UnityAudioSystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Audio::UnityAudioSystem* Meta::Voice::Audio::UnityAudioSystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::UnityAudioSystem*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::UnityAudioSystem::UnityAudioSystem()   {
}

#pragma once
// IWYU pragma private; include "Oculus/Interaction/ImpactAudio.hpp"
#include "Oculus/Interaction/zzzz__ImpactAudio_def.hpp"
#include "Oculus/Interaction/zzzz__AudioTrigger_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ImpactAudio.get_HardCollisionSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::AudioTrigger> (::Oculus::Interaction::ImpactAudio::*)()>(&::Oculus::Interaction::ImpactAudio::get_HardCollisionSound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42bed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ImpactAudio>(),
                        {"get_HardCollisionSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ImpactAudio.get_SoftCollisionSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::AudioTrigger> (::Oculus::Interaction::ImpactAudio::*)()>(&::Oculus::Interaction::ImpactAudio::get_SoftCollisionSound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42bed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ImpactAudio>(),
                        {"get_SoftCollisionSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::Oculus::Interaction::AudioTrigger> Oculus::Interaction::ImpactAudio::get_HardCollisionSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ImpactAudio>(),
                        {"get_HardCollisionSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::AudioTrigger>>(*this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::AudioTrigger> Oculus::Interaction::ImpactAudio::get_SoftCollisionSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ImpactAudio>(),
                        {"get_SoftCollisionSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::AudioTrigger>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_hardCollisionSound", ty: "::UnityW<::Oculus::Interaction::AudioTrigger>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_softCollisionSound", ty: "::UnityW<::Oculus::Interaction::AudioTrigger>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::ImpactAudio::ImpactAudio(::UnityW<::Oculus::Interaction::AudioTrigger>  _hardCollisionSound, ::UnityW<::Oculus::Interaction::AudioTrigger>  _softCollisionSound) noexcept  {
this->_hardCollisionSound = _hardCollisionSound;
this->_softCollisionSound = _softCollisionSound;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ImpactAudio::ImpactAudio()   {
}

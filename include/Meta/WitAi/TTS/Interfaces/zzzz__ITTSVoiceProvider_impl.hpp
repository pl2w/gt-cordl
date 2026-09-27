#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Interfaces/ITTSVoiceProvider.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ITTSVoiceProvider_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSVoiceSettings_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider.get_VoiceDefaultSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSVoiceSettings* (::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider::*)()>(&::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider::get_VoiceDefaultSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider.get_PresetVoiceSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Meta::WitAi::TTS::Data::TTSVoiceSettings*> (::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider::*)()>(&::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider::get_PresetVoiceSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::Meta::WitAi::TTS::Data::TTSVoiceSettings* Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider::get_VoiceDefaultSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(this, ___internal_method);
}
inline ::ArrayW<::Meta::WitAi::TTS::Data::TTSVoiceSettings*> Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider::get_PresetVoiceSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>>(this, ___internal_method);
}

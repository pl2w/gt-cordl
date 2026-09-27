#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Interfaces/ISpeaker.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ISpeaker_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::ISpeaker.get_IsSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Interfaces::ISpeaker::*)()>(&::Meta::WitAi::TTS::Interfaces::ISpeaker::get_IsSpeaking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ISpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ISpeaker*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::ISpeaker.get_IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Interfaces::ISpeaker::*)()>(&::Meta::WitAi::TTS::Interfaces::ISpeaker::get_IsPaused)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ISpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ISpeaker*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool Meta::WitAi::TTS::Interfaces::ISpeaker::get_IsSpeaking()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ISpeaker*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Interfaces::ISpeaker::get_IsPaused()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ISpeaker*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}

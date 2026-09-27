#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSWordEvent.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSStringEvent_impl.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSWordEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSWordEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Data::TTSWordEvent::*)()>(&::Meta::WitAi::TTS::Data::TTSWordEvent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e69730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSWordEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::TTS::Data::TTSWordEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSWordEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Data::TTSWordEvent* Meta::WitAi::TTS::Data::TTSWordEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Data::TTSWordEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Data::TTSWordEvent::TTSWordEvent()   {
}

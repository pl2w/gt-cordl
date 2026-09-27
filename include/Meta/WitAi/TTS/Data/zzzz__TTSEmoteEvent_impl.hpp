#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSEmoteEvent.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSStringEvent_impl.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSEmoteEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSEmoteEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Data::TTSEmoteEvent::*)()>(&::Meta::WitAi::TTS::Data::TTSEmoteEvent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e68e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEmoteEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::TTS::Data::TTSEmoteEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEmoteEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Data::TTSEmoteEvent* Meta::WitAi::TTS::Data::TTSEmoteEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Data::TTSEmoteEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Data::TTSEmoteEvent::TTSEmoteEvent()   {
}

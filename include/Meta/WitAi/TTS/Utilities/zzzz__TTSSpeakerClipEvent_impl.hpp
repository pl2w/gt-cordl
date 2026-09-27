#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeakerClipEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_impl.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeakerClipEvent_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeaker_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e5bacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent::TTSSpeakerClipEvent()   {
}

#pragma once
// IWYU pragma private; include "Meta/WitAi/Speech/VoiceTextEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "Meta/WitAi/Speech/zzzz__VoiceTextEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Speech::VoiceTextEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Speech::VoiceTextEvent::*)()>(&::Meta::WitAi::Speech::VoiceTextEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e3f650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Speech::VoiceTextEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Speech::VoiceTextEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Speech::VoiceTextEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Speech::VoiceTextEvent* Meta::WitAi::Speech::VoiceTextEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Speech::VoiceTextEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Speech::VoiceTextEvent::VoiceTextEvent()   {
}

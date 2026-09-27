#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/VisemeChangedEvent.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__Viseme_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__VisemeChangedEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::VisemeChangedEvent::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeChangedEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e53e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::TTS::LipSync::VisemeChangedEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent* Meta::WitAi::TTS::LipSync::VisemeChangedEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent::VisemeChangedEvent()   {
}

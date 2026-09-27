#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/VoiceServiceRequestEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "Meta/WitAi/Events/zzzz__VoiceServiceRequestEvent_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Events::VoiceServiceRequestEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::VoiceServiceRequestEvent::*)()>(&::Meta::WitAi::Events::VoiceServiceRequestEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e9557c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::VoiceServiceRequestEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Events::VoiceServiceRequestEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::VoiceServiceRequestEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::VoiceServiceRequestEvent* Meta::WitAi::Events::VoiceServiceRequestEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Events::VoiceServiceRequestEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Events::VoiceServiceRequestEvent::VoiceServiceRequestEvent()   {
}

#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VoiceServiceRequestEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvent_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestEvent::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequestEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e91dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Requests::VoiceServiceRequestEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequestEvent* Meta::WitAi::Requests::VoiceServiceRequestEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VoiceServiceRequestEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VoiceServiceRequestEvent::VoiceServiceRequestEvent()   {
}

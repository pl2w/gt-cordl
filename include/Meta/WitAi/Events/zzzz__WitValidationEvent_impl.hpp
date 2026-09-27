#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/WitValidationEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "Meta/WitAi/Events/zzzz__WitValidationEvent_def.hpp"
#include "Meta/WitAi/Data/zzzz__VoiceSession_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Events::WitValidationEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::WitValidationEvent::*)()>(&::Meta::WitAi::Events::WitValidationEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e950ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::WitValidationEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Events::WitValidationEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::WitValidationEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitValidationEvent* Meta::WitAi::Events::WitValidationEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Events::WitValidationEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Events::WitValidationEvent::WitValidationEvent()   {
}

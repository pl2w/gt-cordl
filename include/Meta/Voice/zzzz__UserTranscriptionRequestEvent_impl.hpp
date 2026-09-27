#pragma once
// IWYU pragma private; include "Meta/Voice/UserTranscriptionRequestEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_impl.hpp"
#include "Meta/Voice/zzzz__UserTranscriptionRequestEvent_def.hpp"
//  Writing Method size for method: ::Meta::Voice::UserTranscriptionRequestEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::UserTranscriptionRequestEvent::*)()>(&::Meta::Voice::UserTranscriptionRequestEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e2742c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::UserTranscriptionRequestEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::Voice::UserTranscriptionRequestEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::UserTranscriptionRequestEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::UserTranscriptionRequestEvent* Meta::Voice::UserTranscriptionRequestEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::UserTranscriptionRequestEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::UserTranscriptionRequestEvent::UserTranscriptionRequestEvent()   {
}

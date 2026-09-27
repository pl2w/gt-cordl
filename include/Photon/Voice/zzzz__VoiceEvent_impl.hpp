#pragma once
// IWYU pragma private; include "Photon/Voice/VoiceEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__VoiceEvent_def.hpp"
//  Writing Method size for method: ::Photon::Voice::VoiceEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceEvent::*)()>(&::Photon::Voice::VoiceEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa756fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::VoiceEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::VoiceEvent* Photon::Voice::VoiceEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::VoiceEvent*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::VoiceEvent::VoiceEvent()   {
}

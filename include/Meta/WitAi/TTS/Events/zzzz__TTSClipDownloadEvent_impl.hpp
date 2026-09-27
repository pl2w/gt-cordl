#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/TTSClipDownloadEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_impl.hpp"
#include "Meta/WitAi/TTS/Events/zzzz__TTSClipDownloadEvent_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Events::TTSClipDownloadEvent::*)()>(&::Meta::WitAi::TTS::Events::TTSClipDownloadEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e65fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::TTS::Events::TTSClipDownloadEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent* Meta::WitAi::TTS::Events::TTSClipDownloadEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent::TTSClipDownloadEvent()   {
}

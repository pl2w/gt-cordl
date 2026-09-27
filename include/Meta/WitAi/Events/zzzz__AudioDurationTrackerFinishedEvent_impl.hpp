#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/AudioDurationTrackerFinishedEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_impl.hpp"
#include "Meta/WitAi/Events/zzzz__AudioDurationTrackerFinishedEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent::*)()>(&::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e94e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Events::AudioDurationTrackerFinishedEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent* Meta::WitAi::Events::AudioDurationTrackerFinishedEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent::AudioDurationTrackerFinishedEvent()   {
}

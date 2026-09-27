#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/TelemetryEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Events/zzzz__TelemetryEvents_def.hpp"
#include "Meta/WitAi/Events/zzzz__AudioDurationTrackerFinishedEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Events::TelemetryEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::TelemetryEvents::*)()>(&::Meta::WitAi::Events::TelemetryEvents::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e94f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::TelemetryEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent*& Meta::WitAi::Events::TelemetryEvents::__cordl_internal_get_OnAudioTrackerFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAudioTrackerFinished;
}
constexpr ::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent* const& Meta::WitAi::Events::TelemetryEvents::__cordl_internal_get_OnAudioTrackerFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAudioTrackerFinished;
}
constexpr void Meta::WitAi::Events::TelemetryEvents::__cordl_internal_set_OnAudioTrackerFinished(::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnAudioTrackerFinished = value;
}
inline void Meta::WitAi::Events::TelemetryEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::TelemetryEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::TelemetryEvents* Meta::WitAi::Events::TelemetryEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Events::TelemetryEvents*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Events::TelemetryEvents::TelemetryEvents()   {
}

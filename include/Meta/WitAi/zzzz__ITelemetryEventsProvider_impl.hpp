#pragma once
// IWYU pragma private; include "Meta/WitAi/ITelemetryEventsProvider.hpp"
#include "Meta/WitAi/zzzz__ITelemetryEventsProvider_def.hpp"
#include "Meta/WitAi/Events/zzzz__TelemetryEvents_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::ITelemetryEventsProvider.get_TelemetryEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::TelemetryEvents* (::Meta::WitAi::ITelemetryEventsProvider::*)()>(&::Meta::WitAi::ITelemetryEventsProvider::get_TelemetryEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ITelemetryEventsProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::ITelemetryEventsProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Meta::WitAi::Events::TelemetryEvents* Meta::WitAi::ITelemetryEventsProvider::get_TelemetryEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::ITelemetryEventsProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::TelemetryEvents*>(this, ___internal_method);
}

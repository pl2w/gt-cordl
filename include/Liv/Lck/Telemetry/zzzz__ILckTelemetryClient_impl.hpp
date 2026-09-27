#pragma once
// IWYU pragma private; include "Liv/Lck/Telemetry/ILckTelemetryClient.hpp"
#include "Liv/Lck/Telemetry/zzzz__ILckTelemetryClient_def.hpp"
#include "Liv/Lck/Telemetry/zzzz__LckTelemetryEvent_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Telemetry::ILckTelemetryClient.SendTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Telemetry::ILckTelemetryClient::*)(::Liv::Lck::Telemetry::LckTelemetryEvent*)>(&::Liv::Lck::Telemetry::ILckTelemetryClient::SendTelemetry)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>(),
                    {::i2c::class_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::Telemetry::ILckTelemetryClient::SendTelemetry(::Liv::Lck::Telemetry::LckTelemetryEvent*  lckTelemetryEvent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lckTelemetryEvent);
}

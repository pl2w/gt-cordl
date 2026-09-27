#pragma once
// IWYU pragma private; include "Meta/Voice/TelemetryUtilities/ITelemetryWriter.hpp"
#include "Meta/Voice/TelemetryUtilities/zzzz__ITelemetryWriter_def.hpp"
#include "Meta/Voice/TelemetryUtilities/zzzz__OperationID_def.hpp"
#include "Meta/Voice/TelemetryUtilities/zzzz__RuntimeTelemetryPoint_def.hpp"
#include "Meta/Voice/TelemetryUtilities/zzzz__TerminationReason_def.hpp"
//  Writing Method size for method: ::Meta::Voice::TelemetryUtilities::ITelemetryWriter.LogEventTermination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::TelemetryUtilities::ITelemetryWriter::*)(::Meta::Voice::TelemetryUtilities::OperationID, ::Meta::Voice::TelemetryUtilities::TerminationReason, ::StringW)>(&::Meta::Voice::TelemetryUtilities::ITelemetryWriter::LogEventTermination)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::TelemetryUtilities::ITelemetryWriter*>(),
                    {::i2c::class_of<::Meta::Voice::TelemetryUtilities::ITelemetryWriter*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::TelemetryUtilities::ITelemetryWriter.LogPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::TelemetryUtilities::ITelemetryWriter::*)(::Meta::Voice::TelemetryUtilities::OperationID, ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint)>(&::Meta::Voice::TelemetryUtilities::ITelemetryWriter::LogPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::TelemetryUtilities::ITelemetryWriter*>(),
                    {::i2c::class_of<::Meta::Voice::TelemetryUtilities::ITelemetryWriter*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::TelemetryUtilities::ITelemetryWriter::LogEventTermination(::Meta::Voice::TelemetryUtilities::OperationID  operationId, ::Meta::Voice::TelemetryUtilities::TerminationReason  reason, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TelemetryUtilities::ITelemetryWriter*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationId, reason, message);
}
inline void Meta::Voice::TelemetryUtilities::ITelemetryWriter::LogPoint(::Meta::Voice::TelemetryUtilities::OperationID  operationId, ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  point)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TelemetryUtilities::ITelemetryWriter*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationId, point);
}

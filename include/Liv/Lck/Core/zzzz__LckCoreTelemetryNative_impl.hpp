#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckCoreTelemetryNative.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Core/zzzz__LckCoreTelemetryNative_def.hpp"
#include "Liv/Lck/Core/zzzz__LckTelemetryContextType_def.hpp"
#include "Liv/Lck/Core/zzzz__LckTelemetryEventType_def.hpp"
#include "Liv/Lck/Core/zzzz__SerializationType_def.hpp"
#include "Liv/Lck/Core/zzzz__TelemetryReturnCode_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreTelemetryNative.send_telemetry_event_without_context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::TelemetryReturnCode (*)(::Liv::Lck::Core::LckTelemetryEventType)>(&::Liv::Lck::Core::LckCoreTelemetryNative::send_telemetry_event_without_context)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d0157c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreTelemetryNative*>(),
                        {"send_telemetry_event_without_context", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreTelemetryNative.send_telemetry_event_with_context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::TelemetryReturnCode (*)(::Liv::Lck::Core::LckTelemetryEventType, ::System::IntPtr, ::System::UIntPtr, ::Liv::Lck::Core::SerializationType)>(&::Liv::Lck::Core::LckCoreTelemetryNative::send_telemetry_event_with_context)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d015fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreTelemetryNative*>(),
                        {"send_telemetry_event_with_context", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryEventType>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::Liv::Lck::Core::SerializationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreTelemetryNative.clear_context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::TelemetryReturnCode (*)(::Liv::Lck::Core::LckTelemetryContextType)>(&::Liv::Lck::Core::LckCoreTelemetryNative::clear_context)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d0169c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreTelemetryNative*>(),
                        {"clear_context", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryContextType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreTelemetryNative.set_telemetry_context_from_serialized_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::TelemetryReturnCode (*)(::Liv::Lck::Core::LckTelemetryContextType, ::System::IntPtr, ::System::UIntPtr, ::Liv::Lck::Core::SerializationType)>(&::Liv::Lck::Core::LckCoreTelemetryNative::set_telemetry_context_from_serialized_data)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d0171c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreTelemetryNative*>(),
                        {"set_telemetry_context_from_serialized_data", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryContextType>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::Liv::Lck::Core::SerializationType>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::Core::TelemetryReturnCode Liv::Lck::Core::LckCoreTelemetryNative::send_telemetry_event_without_context(::Liv::Lck::Core::LckTelemetryEventType  telemetry_event_type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreTelemetryNative*>(),
                        {"send_telemetry_event_without_context", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::TelemetryReturnCode>(nullptr, ___internal_method, telemetry_event_type);
}
inline ::Liv::Lck::Core::TelemetryReturnCode Liv::Lck::Core::LckCoreTelemetryNative::send_telemetry_event_with_context(::Liv::Lck::Core::LckTelemetryEventType  telemetry_event_type, ::System::IntPtr  serialized_context_data_ptr, ::System::UIntPtr  len, ::Liv::Lck::Core::SerializationType  serialization_type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreTelemetryNative*>(),
                        {"send_telemetry_event_with_context", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryEventType>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::Liv::Lck::Core::SerializationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::TelemetryReturnCode>(nullptr, ___internal_method, telemetry_event_type, serialized_context_data_ptr, len, serialization_type);
}
inline ::Liv::Lck::Core::TelemetryReturnCode Liv::Lck::Core::LckCoreTelemetryNative::clear_context(::Liv::Lck::Core::LckTelemetryContextType  context_type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreTelemetryNative*>(),
                        {"clear_context", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryContextType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::TelemetryReturnCode>(nullptr, ___internal_method, context_type);
}
inline ::Liv::Lck::Core::TelemetryReturnCode Liv::Lck::Core::LckCoreTelemetryNative::set_telemetry_context_from_serialized_data(::Liv::Lck::Core::LckTelemetryContextType  context_type, ::System::IntPtr  serialized_context_data_ptr, ::System::UIntPtr  len, ::Liv::Lck::Core::SerializationType  serialization_type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreTelemetryNative*>(),
                        {"set_telemetry_context_from_serialized_data", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryContextType>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::Liv::Lck::Core::SerializationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::TelemetryReturnCode>(nullptr, ___internal_method, context_type, serialized_context_data_ptr, len, serialization_type);
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckCoreTelemetryNative::LckCoreTelemetryNative()   {
}

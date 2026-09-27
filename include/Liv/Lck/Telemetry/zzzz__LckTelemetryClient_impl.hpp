#pragma once
// IWYU pragma private; include "Liv/Lck/Telemetry/LckTelemetryClient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Telemetry/zzzz__LckTelemetryClient_def.hpp"
#include "Liv/Lck/Core/Serialization/zzzz__ILckSerializer_def.hpp"
#include "Liv/Lck/Telemetry/zzzz__ILckTelemetryClient_def.hpp"
#include "Liv/Lck/Telemetry/zzzz__LckTelemetryEvent_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Telemetry::LckTelemetryClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Telemetry::LckTelemetryClient::*)(::Liv::Lck::Core::Serialization::ILckSerializer*)>(&::Liv::Lck::Telemetry::LckTelemetryClient::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d4b644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Core::Serialization::ILckSerializer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Telemetry::LckTelemetryClient.SendTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Telemetry::LckTelemetryClient::*)(::Liv::Lck::Telemetry::LckTelemetryEvent*)>(&::Liv::Lck::Telemetry::LckTelemetryClient::SendTelemetry)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d4b674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryClient*>(),
                        {"SendTelemetry", {}, {::i2c::type_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Telemetry::LckTelemetryClient.SerializeAndSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Telemetry::LckTelemetryClient::*)(::Liv::Lck::Telemetry::LckTelemetryEvent*)>(&::Liv::Lck::Telemetry::LckTelemetryClient::SerializeAndSend)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x9d4b6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryClient*>(),
                        {"SerializeAndSend", {}, {::i2c::type_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Core::Serialization::ILckSerializer*& Liv::Lck::Telemetry::LckTelemetryClient::__cordl_internal_get__serializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializer;
}
constexpr ::Liv::Lck::Core::Serialization::ILckSerializer* const& Liv::Lck::Telemetry::LckTelemetryClient::__cordl_internal_get__serializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializer;
}
constexpr void Liv::Lck::Telemetry::LckTelemetryClient::__cordl_internal_set__serializer(::Liv::Lck::Core::Serialization::ILckSerializer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____serializer = value;
}
inline void Liv::Lck::Telemetry::LckTelemetryClient::_ctor(::Liv::Lck::Core::Serialization::ILckSerializer*  serializer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Core::Serialization::ILckSerializer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializer);
}
inline void Liv::Lck::Telemetry::LckTelemetryClient::SendTelemetry(::Liv::Lck::Telemetry::LckTelemetryEvent*  lckTelemetryEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryClient*>(),
                        {"SendTelemetry", {}, {::i2c::type_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lckTelemetryEvent);
}
inline void Liv::Lck::Telemetry::LckTelemetryClient::SerializeAndSend(::Liv::Lck::Telemetry::LckTelemetryEvent*  lckTelemetryEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryClient*>(),
                        {"SerializeAndSend", {}, {::i2c::type_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lckTelemetryEvent);
}
/// @brief [Preserve]
inline ::Liv::Lck::Telemetry::LckTelemetryClient* Liv::Lck::Telemetry::LckTelemetryClient::New_ctor(::Liv::Lck::Core::Serialization::ILckSerializer*  serializer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Telemetry::LckTelemetryClient*>(serializer));
}
/// @brief Convert operator to "::Liv::Lck::Telemetry::ILckTelemetryClient"
constexpr  Liv::Lck::Telemetry::LckTelemetryClient::operator ::Liv::Lck::Telemetry::ILckTelemetryClient*() noexcept {
return static_cast<::Liv::Lck::Telemetry::ILckTelemetryClient*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Telemetry::ILckTelemetryClient"
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* Liv::Lck::Telemetry::LckTelemetryClient::i___Liv__Lck__Telemetry__ILckTelemetryClient() noexcept {
return static_cast<::Liv::Lck::Telemetry::ILckTelemetryClient*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Telemetry::LckTelemetryClient::LckTelemetryClient()   {
}

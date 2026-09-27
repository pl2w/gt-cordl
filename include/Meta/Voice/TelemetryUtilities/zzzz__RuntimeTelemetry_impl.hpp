#pragma once
// IWYU pragma private; include "Meta/Voice/TelemetryUtilities/RuntimeTelemetry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/TelemetryUtilities/zzzz__RuntimeTelemetry_def.hpp"
#include "Meta/Voice/TelemetryUtilities/zzzz__ITelemetryWriter_def.hpp"
#include "Meta/Voice/TelemetryUtilities/zzzz__OperationID_def.hpp"
#include "Meta/Voice/TelemetryUtilities/zzzz__RuntimeTelemetryPoint_def.hpp"
#include "Meta/Voice/TelemetryUtilities/zzzz__TerminationReason_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::Voice::TelemetryUtilities::RuntimeTelemetry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::TelemetryUtilities::RuntimeTelemetry::*)()>(&::Meta::Voice::TelemetryUtilities::RuntimeTelemetry::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb94e2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::TelemetryUtilities::RuntimeTelemetry.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::TelemetryUtilities::RuntimeTelemetry* (*)()>(&::Meta::Voice::TelemetryUtilities::RuntimeTelemetry::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb94e37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::TelemetryUtilities::RuntimeTelemetry.LogEventTermination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::TelemetryUtilities::RuntimeTelemetry::*)(::Meta::Voice::TelemetryUtilities::OperationID, ::Meta::Voice::TelemetryUtilities::TerminationReason, ::StringW)>(&::Meta::Voice::TelemetryUtilities::RuntimeTelemetry::LogEventTermination)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xb94e3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*>(),
                        {"LogEventTermination", {}, {::i2c::type_of<::Meta::Voice::TelemetryUtilities::OperationID>(), ::i2c::type_of<::Meta::Voice::TelemetryUtilities::TerminationReason>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::TelemetryUtilities::RuntimeTelemetry.LogPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::TelemetryUtilities::RuntimeTelemetry::*)(::Meta::Voice::TelemetryUtilities::OperationID, ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint)>(&::Meta::Voice::TelemetryUtilities::RuntimeTelemetry::LogPoint)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb94e590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*>(),
                        {"LogPoint", {}, {::i2c::type_of<::Meta::Voice::TelemetryUtilities::OperationID>(), ::i2c::type_of<::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::TelemetryUtilities::RuntimeTelemetry.LogPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::TelemetryUtilities::RuntimeTelemetry::*)(::StringW, ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint)>(&::Meta::Voice::TelemetryUtilities::RuntimeTelemetry::LogPoint)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb94e748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*>(),
                        {"LogPoint", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Meta::Voice::TelemetryUtilities::ITelemetryWriter*>*& Meta::Voice::TelemetryUtilities::RuntimeTelemetry::__cordl_internal_get__writers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writers;
}
constexpr ::System::Collections::Generic::List_1<::Meta::Voice::TelemetryUtilities::ITelemetryWriter*>* const& Meta::Voice::TelemetryUtilities::RuntimeTelemetry::__cordl_internal_get__writers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writers;
}
constexpr void Meta::Voice::TelemetryUtilities::RuntimeTelemetry::__cordl_internal_set__writers(::System::Collections::Generic::List_1<::Meta::Voice::TelemetryUtilities::ITelemetryWriter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writers = value;
}
inline void Meta::Voice::TelemetryUtilities::RuntimeTelemetry::setStaticF__Instance_k__BackingField(::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*  value)  {
::cordl_internals::setStaticField<::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*, "<Instance>k__BackingField", ::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*>(std::forward<::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*>(value));
}
inline ::Meta::Voice::TelemetryUtilities::RuntimeTelemetry* Meta::Voice::TelemetryUtilities::RuntimeTelemetry::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*, "<Instance>k__BackingField", ::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*>();
}
inline void Meta::Voice::TelemetryUtilities::RuntimeTelemetry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::TelemetryUtilities::RuntimeTelemetry* Meta::Voice::TelemetryUtilities::RuntimeTelemetry::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*>(nullptr, ___internal_method);
}
inline void Meta::Voice::TelemetryUtilities::RuntimeTelemetry::LogEventTermination(::Meta::Voice::TelemetryUtilities::OperationID  operationId, ::Meta::Voice::TelemetryUtilities::TerminationReason  reason, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*>(),
                        {"LogEventTermination", {}, {::i2c::type_of<::Meta::Voice::TelemetryUtilities::OperationID>(), ::i2c::type_of<::Meta::Voice::TelemetryUtilities::TerminationReason>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationId, reason, message);
}
inline void Meta::Voice::TelemetryUtilities::RuntimeTelemetry::LogPoint(::Meta::Voice::TelemetryUtilities::OperationID  operationId, ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*>(),
                        {"LogPoint", {}, {::i2c::type_of<::Meta::Voice::TelemetryUtilities::OperationID>(), ::i2c::type_of<::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationId, point);
}
inline void Meta::Voice::TelemetryUtilities::RuntimeTelemetry::LogPoint(::StringW  operationId, ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*>(),
                        {"LogPoint", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationId, point);
}
inline ::Meta::Voice::TelemetryUtilities::RuntimeTelemetry* Meta::Voice::TelemetryUtilities::RuntimeTelemetry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*>());
}
/// @brief Convert operator to "::Meta::Voice::TelemetryUtilities::ITelemetryWriter"
constexpr  Meta::Voice::TelemetryUtilities::RuntimeTelemetry::operator ::Meta::Voice::TelemetryUtilities::ITelemetryWriter*() noexcept {
return static_cast<::Meta::Voice::TelemetryUtilities::ITelemetryWriter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::TelemetryUtilities::ITelemetryWriter"
constexpr ::Meta::Voice::TelemetryUtilities::ITelemetryWriter* Meta::Voice::TelemetryUtilities::RuntimeTelemetry::i___Meta__Voice__TelemetryUtilities__ITelemetryWriter() noexcept {
return static_cast<::Meta::Voice::TelemetryUtilities::ITelemetryWriter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetry::RuntimeTelemetry()   {
}

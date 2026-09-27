#pragma once
// IWYU pragma private; include "Meta/Voice/TelemetryUtilities/OperationID.hpp"
#include "Meta/Voice/TelemetryUtilities/zzzz__OperationID_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::TelemetryUtilities::OperationID.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::TelemetryUtilities::OperationID::*)()>(&::Meta::Voice::TelemetryUtilities::OperationID::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94e1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::TelemetryUtilities::OperationID._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::TelemetryUtilities::OperationID::*)(::StringW)>(&::Meta::Voice::TelemetryUtilities::OperationID::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb94e1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::TelemetryUtilities::OperationID.get_IsAssigned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::TelemetryUtilities::OperationID::*)()>(&::Meta::Voice::TelemetryUtilities::OperationID::get_IsAssigned)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb94e228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(),
                        {"get_IsAssigned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::TelemetryUtilities::OperationID.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::TelemetryUtilities::OperationID::*)()>(&::Meta::Voice::TelemetryUtilities::OperationID::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94e238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(),
                    {::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::TelemetryUtilities::OperationID.op_Explicit___Meta__Voice__TelemetryUtilities__OperationID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::TelemetryUtilities::OperationID (*)(::StringW)>(&::Meta::Voice::TelemetryUtilities::OperationID::op_Explicit___Meta__Voice__TelemetryUtilities__OperationID)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb94e240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(),
                        {"op_Explicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::TelemetryUtilities::OperationID.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::TelemetryUtilities::OperationID::*)(::System::Object*)>(&::Meta::Voice::TelemetryUtilities::OperationID::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb94e25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(),
                    {::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::TelemetryUtilities::OperationID.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::TelemetryUtilities::OperationID::*)()>(&::Meta::Voice::TelemetryUtilities::OperationID::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb94e2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(),
                    {::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::StringW Meta::Voice::TelemetryUtilities::OperationID::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Meta::Voice::TelemetryUtilities::OperationID::_ctor(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Meta::Voice::TelemetryUtilities::OperationID::get_IsAssigned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(),
                        {"get_IsAssigned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW Meta::Voice::TelemetryUtilities::OperationID::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Meta::Voice::TelemetryUtilities::OperationID Meta::Voice::TelemetryUtilities::OperationID::op_Explicit___Meta__Voice__TelemetryUtilities__OperationID(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(),
                        {"op_Explicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::TelemetryUtilities::OperationID>(nullptr, ___internal_method, value);
}
inline bool Meta::Voice::TelemetryUtilities::OperationID::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Meta::Voice::TelemetryUtilities::OperationID::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TelemetryUtilities::OperationID>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_Value_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::TelemetryUtilities::OperationID::OperationID(::StringW  _Value_k__BackingField) noexcept  {
this->_Value_k__BackingField = _Value_k__BackingField;
}
// Ctor Parameters []
constexpr ::Meta::Voice::TelemetryUtilities::OperationID::OperationID()   {
}

#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/CorrelationID.hpp"
#include "Meta/Voice/Logging/zzzz__CorrelationID_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::CorrelationID.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Logging::CorrelationID::*)()>(&::Meta::Voice::Logging::CorrelationID::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e35e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::CorrelationID._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::CorrelationID::*)(::StringW)>(&::Meta::Voice::Logging::CorrelationID::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e35e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::CorrelationID.get_IsAssigned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Logging::CorrelationID::*)()>(&::Meta::Voice::Logging::CorrelationID::get_IsAssigned)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e35e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(),
                        {"get_IsAssigned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::CorrelationID.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Logging::CorrelationID::*)()>(&::Meta::Voice::Logging::CorrelationID::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e35e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(),
                    {::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::CorrelationID.op_Implicit___StringW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Meta::Voice::Logging::CorrelationID)>(&::Meta::Voice::Logging::CorrelationID::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e35e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::CorrelationID.op_Explicit___Meta__Voice__Logging__CorrelationID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::CorrelationID (*)(::StringW)>(&::Meta::Voice::Logging::CorrelationID::op_Explicit___Meta__Voice__Logging__CorrelationID)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e35e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(),
                        {"op_Explicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::CorrelationID.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Logging::CorrelationID::*)(::System::Object*)>(&::Meta::Voice::Logging::CorrelationID::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e35e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(),
                    {::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::CorrelationID.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Logging::CorrelationID::*)()>(&::Meta::Voice::Logging::CorrelationID::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e35f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(),
                    {::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::StringW Meta::Voice::Logging::CorrelationID::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Meta::Voice::Logging::CorrelationID::_ctor(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Meta::Voice::Logging::CorrelationID::get_IsAssigned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(),
                        {"get_IsAssigned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW Meta::Voice::Logging::CorrelationID::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Meta::Voice::Logging::CorrelationID::op_Implicit___StringW(::Meta::Voice::Logging::CorrelationID  correlationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, correlationId);
}
inline ::Meta::Voice::Logging::CorrelationID Meta::Voice::Logging::CorrelationID::op_Explicit___Meta__Voice__Logging__CorrelationID(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(),
                        {"op_Explicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::CorrelationID>(nullptr, ___internal_method, value);
}
inline bool Meta::Voice::Logging::CorrelationID::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Meta::Voice::Logging::CorrelationID::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::CorrelationID>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_Value_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::Logging::CorrelationID::CorrelationID(::StringW  _Value_k__BackingField) noexcept  {
this->_Value_k__BackingField = _Value_k__BackingField;
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::CorrelationID::CorrelationID()   {
}

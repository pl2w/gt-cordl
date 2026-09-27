#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/ErrorCode.hpp"
#include "Meta/Voice/Logging/zzzz__ErrorCode_def.hpp"
#include "Meta/Voice/Logging/zzzz__KnownErrorCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::ErrorCode.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Logging::ErrorCode::*)()>(&::Meta::Voice::Logging::ErrorCode::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e35f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ErrorCode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ErrorCode::*)(::StringW)>(&::Meta::Voice::Logging::ErrorCode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e35f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ErrorCode.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Logging::ErrorCode::*)()>(&::Meta::Voice::Logging::ErrorCode::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e35f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ErrorCode.op_Implicit___StringW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Meta::Voice::Logging::ErrorCode)>(&::Meta::Voice::Logging::ErrorCode::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e35f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Meta::Voice::Logging::ErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ErrorCode.op_Explicit___Meta__Voice__Logging__ErrorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::ErrorCode (*)(::StringW)>(&::Meta::Voice::Logging::ErrorCode::op_Explicit___Meta__Voice__Logging__ErrorCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e35f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(),
                        {"op_Explicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ErrorCode.op_Implicit___Meta__Voice__Logging__ErrorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::ErrorCode (*)(::Meta::Voice::Logging::KnownErrorCode)>(&::Meta::Voice::Logging::ErrorCode::op_Implicit___Meta__Voice__Logging__ErrorCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e35f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Meta::Voice::Logging::KnownErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ErrorCode.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Logging::ErrorCode::*)(::System::Object*)>(&::Meta::Voice::Logging::ErrorCode::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e35fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ErrorCode.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Logging::ErrorCode::*)()>(&::Meta::Voice::Logging::ErrorCode::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e36054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::StringW Meta::Voice::Logging::ErrorCode::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Meta::Voice::Logging::ErrorCode::_ctor(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Meta::Voice::Logging::ErrorCode::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Meta::Voice::Logging::ErrorCode::op_Implicit___StringW(::Meta::Voice::Logging::ErrorCode  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Meta::Voice::Logging::ErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode);
}
inline ::Meta::Voice::Logging::ErrorCode Meta::Voice::Logging::ErrorCode::op_Explicit___Meta__Voice__Logging__ErrorCode(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(),
                        {"op_Explicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::ErrorCode>(nullptr, ___internal_method, value);
}
inline ::Meta::Voice::Logging::ErrorCode Meta::Voice::Logging::ErrorCode::op_Implicit___Meta__Voice__Logging__ErrorCode(::Meta::Voice::Logging::KnownErrorCode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Meta::Voice::Logging::KnownErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::ErrorCode>(nullptr, ___internal_method, value);
}
inline bool Meta::Voice::Logging::ErrorCode::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Meta::Voice::Logging::ErrorCode::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ErrorCode>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_Value_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::Logging::ErrorCode::ErrorCode(::StringW  _Value_k__BackingField) noexcept  {
this->_Value_k__BackingField = _Value_k__BackingField;
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::ErrorCode::ErrorCode()   {
}

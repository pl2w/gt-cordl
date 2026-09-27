#pragma once
// IWYU pragma private; include "Modio/Error.hpp"
#include "Modio/Errors/zzzz__ErrorCode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Modio/Errors/zzzz__ErrorCode_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::Error._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Error::*)(::Modio::Errors::ErrorCode)>(&::Modio::Error::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa004b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Error*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::ErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Error._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Error::*)(::Modio::Errors::ErrorCode, ::StringW)>(&::Modio::Error::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa004ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Error*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::ErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Error.get_IsSilent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Error::*)()>(&::Modio::Error::get_IsSilent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa004bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Error*>(),
                        {"get_IsSilent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Error.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Error::*)()>(&::Modio::Error::GetMessage)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa004bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Error*>(),
                    {::i2c::class_of<::Modio::Error*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Error.op_Implicit_bool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Modio::Error*)>(&::Modio::Error::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa004c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Error*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Error.op_Explicit___Modio__Error_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (*)(::Modio::Errors::ErrorCode)>(&::Modio::Error::op_Explicit___Modio__Error_)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa004c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Error*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Modio::Errors::ErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Error.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Error::*)()>(&::Modio::Error::ToString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa004cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Error*>(),
                    {::i2c::class_of<::Modio::Error*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Error.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Error::*)(::Modio::Error*)>(&::Modio::Error::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa004d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Error*>(),
                        {"Equals", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Error.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Error::*)(::System::Object*)>(&::Modio::Error::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa004d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Error*>(),
                    {::i2c::class_of<::Modio::Error*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Error.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Error::*)()>(&::Modio::Error::GetHashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa004ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Error*>(),
                    {::i2c::class_of<::Modio::Error*>(), 2}
                ));
    return ___internal_method;
  }
};
constexpr ::Modio::Errors::ErrorCode& Modio::Error::__cordl_internal_get_Code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Code;
}
constexpr ::Modio::Errors::ErrorCode const& Modio::Error::__cordl_internal_get_Code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Code;
}
constexpr void Modio::Error::__cordl_internal_set_Code(::Modio::Errors::ErrorCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Code = value;
}
constexpr ::StringW& Modio::Error::__cordl_internal_get_CustomMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomMessage;
}
constexpr ::StringW const& Modio::Error::__cordl_internal_get_CustomMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomMessage;
}
constexpr void Modio::Error::__cordl_internal_set_CustomMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomMessage = value;
}
inline void Modio::Error::setStaticF_None(::Modio::Error*  value)  {
::cordl_internals::setStaticField<::Modio::Error*, "None", ::Modio::Error*>(std::forward<::Modio::Error*>(value));
}
inline ::Modio::Error* Modio::Error::getStaticF_None()  {
return ::cordl_internals::getStaticField<::Modio::Error*, "None", ::Modio::Error*>();
}
inline void Modio::Error::setStaticF_Unknown(::Modio::Error*  value)  {
::cordl_internals::setStaticField<::Modio::Error*, "Unknown", ::Modio::Error*>(std::forward<::Modio::Error*>(value));
}
inline ::Modio::Error* Modio::Error::getStaticF_Unknown()  {
return ::cordl_internals::getStaticField<::Modio::Error*, "Unknown", ::Modio::Error*>();
}
inline void Modio::Error::_ctor(::Modio::Errors::ErrorCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Error*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::ErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline void Modio::Error::_ctor(::Modio::Errors::ErrorCode  code, ::StringW  customMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Error*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::ErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, customMessage);
}
inline bool Modio::Error::get_IsSilent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Error*>(),
                        {"get_IsSilent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Modio::Error::GetMessage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Error*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Modio::Error::op_Implicit_bool(::Modio::Error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Error*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, error);
}
inline ::Modio::Error* Modio::Error::op_Explicit___Modio__Error_(::Modio::Errors::ErrorCode  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Error*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Modio::Errors::ErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(nullptr, ___internal_method, errorCode);
}
inline ::StringW Modio::Error::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Error*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Modio::Error::Equals(::Modio::Error*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Error*>(),
                        {"Equals", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool Modio::Error::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Error*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Modio::Error::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Error*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Modio::Error* Modio::Error::New_ctor(::Modio::Errors::ErrorCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Error*>(code));
}
inline ::Modio::Error* Modio::Error::New_ctor(::Modio::Errors::ErrorCode  code, ::StringW  customMessage)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Error*>(code, customMessage));
}
/// @brief Convert operator to "::System::IEquatable_1<::Modio::Error*>"
constexpr  Modio::Error::operator ::System::IEquatable_1<::Modio::Error*>*() noexcept {
return static_cast<::System::IEquatable_1<::Modio::Error*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::Modio::Error*>"
constexpr ::System::IEquatable_1<::Modio::Error*>* Modio::Error::i___System__IEquatable_1___Modio__Error__() noexcept {
return static_cast<::System::IEquatable_1<::Modio::Error*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Error::Error()   {
}

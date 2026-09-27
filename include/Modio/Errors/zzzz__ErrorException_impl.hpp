#pragma once
// IWYU pragma private; include "Modio/Errors/ErrorException.hpp"
#include "Modio/zzzz__Error_impl.hpp"
#include "Modio/Errors/zzzz__ErrorException_def.hpp"
#include "Modio/Errors/zzzz__ErrorCode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Modio::Errors::ErrorException.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Errors::ErrorException::*)()>(&::Modio::Errors::ErrorException::GetMessage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa054fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Errors::ErrorException*>(),
                    {::i2c::class_of<::Modio::Errors::ErrorException*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::ErrorException::*)(::System::Exception*, ::Modio::Errors::ErrorCode)>(&::Modio::Errors::ErrorException::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa05504c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::Modio::Errors::ErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::ErrorException::*)(::System::Exception*)>(&::Modio::Errors::ErrorException::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa0534e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorException.ErrorCodeFromException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Errors::ErrorCode (*)(::System::Exception*)>(&::Modio::Errors::ErrorException::ErrorCodeFromException)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa0550c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorException*>(),
                        {"ErrorCodeFromException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Exception*& Modio::Errors::ErrorException::__cordl_internal_get_Exception()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Exception;
}
constexpr ::System::Exception* const& Modio::Errors::ErrorException::__cordl_internal_get_Exception() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Exception;
}
constexpr void Modio::Errors::ErrorException::__cordl_internal_set_Exception(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Exception = value;
}
inline ::StringW Modio::Errors::ErrorException::GetMessage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Errors::ErrorException*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Errors::ErrorException::_ctor(::System::Exception*  exception, ::Modio::Errors::ErrorCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::Modio::Errors::ErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, code);
}
inline void Modio::Errors::ErrorException::_ctor(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
inline ::Modio::Errors::ErrorCode Modio::Errors::ErrorException::ErrorCodeFromException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorException*>(),
                        {"ErrorCodeFromException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Errors::ErrorCode>(nullptr, ___internal_method, exception);
}
inline ::Modio::Errors::ErrorException* Modio::Errors::ErrorException::New_ctor(::System::Exception*  exception, ::Modio::Errors::ErrorCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::ErrorException*>(exception, code));
}
inline ::Modio::Errors::ErrorException* Modio::Errors::ErrorException::New_ctor(::System::Exception*  exception)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::ErrorException*>(exception));
}
// Ctor Parameters []
constexpr ::Modio::Errors::ErrorException::ErrorException()   {
}

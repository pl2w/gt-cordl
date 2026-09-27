#pragma once
// IWYU pragma private; include "WebSocketSharp/WebSocketException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "WebSocketSharp/zzzz__CloseStatusCode_impl.hpp"
#include "WebSocketSharp/zzzz__WebSocketException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "WebSocketSharp/zzzz__CloseStatusCode_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::WebSocketException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketException::*)(::StringW)>(&::WebSocketSharp::WebSocketException::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb97eb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketException::*)(::WebSocketSharp::CloseStatusCode)>(&::WebSocketSharp::WebSocketException::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb977c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketException*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::CloseStatusCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketException::*)(::StringW, ::System::Exception*)>(&::WebSocketSharp::WebSocketException::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb97fc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketException::*)(::WebSocketSharp::CloseStatusCode, ::System::Exception*)>(&::WebSocketSharp::WebSocketException::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb97eb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketException*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::CloseStatusCode>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketException::*)(::WebSocketSharp::CloseStatusCode, ::StringW)>(&::WebSocketSharp::WebSocketException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb97c13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketException*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::CloseStatusCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketException::*)(::WebSocketSharp::CloseStatusCode, ::StringW, ::System::Exception*)>(&::WebSocketSharp::WebSocketException::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb97fb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketException*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::CloseStatusCode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketException.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::CloseStatusCode (::WebSocketSharp::WebSocketException::*)()>(&::WebSocketSharp::WebSocketException::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb97c2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketException*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WebSocketSharp::CloseStatusCode& WebSocketSharp::WebSocketException::__cordl_internal_get__code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____code;
}
constexpr ::WebSocketSharp::CloseStatusCode const& WebSocketSharp::WebSocketException::__cordl_internal_get__code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____code;
}
constexpr void WebSocketSharp::WebSocketException::__cordl_internal_set__code(::WebSocketSharp::CloseStatusCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____code = value;
}
inline void WebSocketSharp::WebSocketException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void WebSocketSharp::WebSocketException::_ctor(::WebSocketSharp::CloseStatusCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketException*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::CloseStatusCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline void WebSocketSharp::WebSocketException::_ctor(::StringW  message, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline void WebSocketSharp::WebSocketException::_ctor(::WebSocketSharp::CloseStatusCode  code, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketException*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::CloseStatusCode>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, innerException);
}
inline void WebSocketSharp::WebSocketException::_ctor(::WebSocketSharp::CloseStatusCode  code, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketException*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::CloseStatusCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline void WebSocketSharp::WebSocketException::_ctor(::WebSocketSharp::CloseStatusCode  code, ::StringW  message, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketException*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::CloseStatusCode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message, innerException);
}
inline ::WebSocketSharp::CloseStatusCode WebSocketSharp::WebSocketException::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketException*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::CloseStatusCode>(this, ___internal_method);
}
inline ::WebSocketSharp::WebSocketException* WebSocketSharp::WebSocketException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketException*>(message));
}
inline ::WebSocketSharp::WebSocketException* WebSocketSharp::WebSocketException::New_ctor(::WebSocketSharp::CloseStatusCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketException*>(code));
}
inline ::WebSocketSharp::WebSocketException* WebSocketSharp::WebSocketException::New_ctor(::StringW  message, ::System::Exception*  innerException)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketException*>(message, innerException));
}
inline ::WebSocketSharp::WebSocketException* WebSocketSharp::WebSocketException::New_ctor(::WebSocketSharp::CloseStatusCode  code, ::System::Exception*  innerException)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketException*>(code, innerException));
}
inline ::WebSocketSharp::WebSocketException* WebSocketSharp::WebSocketException::New_ctor(::WebSocketSharp::CloseStatusCode  code, ::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketException*>(code, message));
}
inline ::WebSocketSharp::WebSocketException* WebSocketSharp::WebSocketException::New_ctor(::WebSocketSharp::CloseStatusCode  code, ::StringW  message, ::System::Exception*  innerException)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketException*>(code, message, innerException));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocketException::WebSocketException()   {
}

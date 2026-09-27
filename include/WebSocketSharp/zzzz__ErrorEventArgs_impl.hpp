#pragma once
// IWYU pragma private; include "WebSocketSharp/ErrorEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "WebSocketSharp/zzzz__ErrorEventArgs_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::ErrorEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::ErrorEventArgs::*)(::StringW, ::System::Exception*)>(&::WebSocketSharp::ErrorEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb977d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::ErrorEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::ErrorEventArgs.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::ErrorEventArgs::*)()>(&::WebSocketSharp::ErrorEventArgs::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb977e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::ErrorEventArgs*>(),
                        {"get_Message", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Exception*& WebSocketSharp::ErrorEventArgs::__cordl_internal_get__exception()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exception;
}
constexpr ::System::Exception* const& WebSocketSharp::ErrorEventArgs::__cordl_internal_get__exception() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exception;
}
constexpr void WebSocketSharp::ErrorEventArgs::__cordl_internal_set__exception(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____exception = value;
}
constexpr ::StringW& WebSocketSharp::ErrorEventArgs::__cordl_internal_get__message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____message;
}
constexpr ::StringW const& WebSocketSharp::ErrorEventArgs::__cordl_internal_get__message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____message;
}
constexpr void WebSocketSharp::ErrorEventArgs::__cordl_internal_set__message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____message = value;
}
inline void WebSocketSharp::ErrorEventArgs::_ctor(::StringW  message, ::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::ErrorEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, exception);
}
inline ::StringW WebSocketSharp::ErrorEventArgs::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::ErrorEventArgs*>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::WebSocketSharp::ErrorEventArgs* WebSocketSharp::ErrorEventArgs::New_ctor(::StringW  message, ::System::Exception*  exception)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::ErrorEventArgs*>(message, exception));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::ErrorEventArgs::ErrorEventArgs()   {
}

#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/AuthenticationChallenge.hpp"
#include "WebSocketSharp/Net/zzzz__AuthenticationBase_impl.hpp"
#include "WebSocketSharp/Net/zzzz__AuthenticationChallenge_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "WebSocketSharp/Net/zzzz__AuthenticationSchemes_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationChallenge._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::AuthenticationChallenge::*)(::WebSocketSharp::Net::AuthenticationSchemes, ::System::Collections::Specialized::NameValueCollection*)>(&::WebSocketSharp::Net::AuthenticationChallenge::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb9894fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationChallenge*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::Net::AuthenticationSchemes>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationChallenge.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::Net::AuthenticationChallenge* (*)(::StringW)>(&::WebSocketSharp::Net::AuthenticationChallenge::Parse)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb98956c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationChallenge*>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationChallenge.ToBasicString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::AuthenticationChallenge::*)()>(&::WebSocketSharp::Net::AuthenticationChallenge::ToBasicString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb989be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::AuthenticationChallenge*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::AuthenticationChallenge*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationChallenge.ToDigestString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::AuthenticationChallenge::*)()>(&::WebSocketSharp::Net::AuthenticationChallenge::ToDigestString)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xb989c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::AuthenticationChallenge*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::AuthenticationChallenge*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void WebSocketSharp::Net::AuthenticationChallenge::_ctor(::WebSocketSharp::Net::AuthenticationSchemes  scheme, ::System::Collections::Specialized::NameValueCollection*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationChallenge*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::Net::AuthenticationSchemes>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scheme, parameters);
}
inline ::WebSocketSharp::Net::AuthenticationChallenge* WebSocketSharp::Net::AuthenticationChallenge::Parse(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationChallenge*>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::Net::AuthenticationChallenge*>(nullptr, ___internal_method, value);
}
inline ::StringW WebSocketSharp::Net::AuthenticationChallenge::ToBasicString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::AuthenticationChallenge*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::Net::AuthenticationChallenge::ToDigestString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::AuthenticationChallenge*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::WebSocketSharp::Net::AuthenticationChallenge* WebSocketSharp::Net::AuthenticationChallenge::New_ctor(::WebSocketSharp::Net::AuthenticationSchemes  scheme, ::System::Collections::Specialized::NameValueCollection*  parameters)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Net::AuthenticationChallenge*>(scheme, parameters));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Net::AuthenticationChallenge::AuthenticationChallenge()   {
}

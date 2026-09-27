#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/NetworkCredential.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WebSocketSharp/Net/zzzz__NetworkCredential_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::Net::NetworkCredential.get_Domain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::NetworkCredential::*)()>(&::WebSocketSharp::Net::NetworkCredential::get_Domain)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb9894ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::NetworkCredential*>(),
                        {"get_Domain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::NetworkCredential.get_Password
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::NetworkCredential::*)()>(&::WebSocketSharp::Net::NetworkCredential::get_Password)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb9894d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::NetworkCredential*>(),
                        {"get_Password", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::NetworkCredential.get_Username
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::NetworkCredential::*)()>(&::WebSocketSharp::Net::NetworkCredential::get_Username)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9894f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::NetworkCredential*>(),
                        {"get_Username", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& WebSocketSharp::Net::NetworkCredential::__cordl_internal_get__domain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____domain;
}
constexpr ::StringW const& WebSocketSharp::Net::NetworkCredential::__cordl_internal_get__domain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____domain;
}
constexpr void WebSocketSharp::Net::NetworkCredential::__cordl_internal_set__domain(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____domain = value;
}
constexpr ::StringW& WebSocketSharp::Net::NetworkCredential::__cordl_internal_get__password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____password;
}
constexpr ::StringW const& WebSocketSharp::Net::NetworkCredential::__cordl_internal_get__password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____password;
}
constexpr void WebSocketSharp::Net::NetworkCredential::__cordl_internal_set__password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____password = value;
}
constexpr ::ArrayW<::StringW>& WebSocketSharp::Net::NetworkCredential::__cordl_internal_get__roles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roles;
}
constexpr ::ArrayW<::StringW> const& WebSocketSharp::Net::NetworkCredential::__cordl_internal_get__roles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roles;
}
constexpr void WebSocketSharp::Net::NetworkCredential::__cordl_internal_set__roles(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roles = value;
}
constexpr ::StringW& WebSocketSharp::Net::NetworkCredential::__cordl_internal_get__username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____username;
}
constexpr ::StringW const& WebSocketSharp::Net::NetworkCredential::__cordl_internal_get__username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____username;
}
constexpr void WebSocketSharp::Net::NetworkCredential::__cordl_internal_set__username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____username = value;
}
inline void WebSocketSharp::Net::NetworkCredential::setStaticF__noRoles(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "_noRoles", ::WebSocketSharp::Net::NetworkCredential*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> WebSocketSharp::Net::NetworkCredential::getStaticF__noRoles()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_noRoles", ::WebSocketSharp::Net::NetworkCredential*>();
}
inline ::StringW WebSocketSharp::Net::NetworkCredential::get_Domain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::NetworkCredential*>(),
                        {"get_Domain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::Net::NetworkCredential::get_Password()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::NetworkCredential*>(),
                        {"get_Password", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::Net::NetworkCredential::get_Username()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::NetworkCredential*>(),
                        {"get_Username", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Net::NetworkCredential::NetworkCredential()   {
}

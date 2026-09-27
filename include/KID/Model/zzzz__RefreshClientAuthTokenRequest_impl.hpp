#pragma once
// IWYU pragma private; include "KID/Model/RefreshClientAuthTokenRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__RefreshClientAuthTokenRequest_def.hpp"
//  Writing Method size for method: ::KID::Model::RefreshClientAuthTokenRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::RefreshClientAuthTokenRequest::*)()>(&::KID::Model::RefreshClientAuthTokenRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::RefreshClientAuthTokenRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::RefreshClientAuthTokenRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::RefreshClientAuthTokenRequest::*)(::StringW)>(&::KID::Model::RefreshClientAuthTokenRequest::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9cd8d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::RefreshClientAuthTokenRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::RefreshClientAuthTokenRequest.get_RefreshToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::RefreshClientAuthTokenRequest::*)()>(&::KID::Model::RefreshClientAuthTokenRequest::get_RefreshToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::RefreshClientAuthTokenRequest*>(),
                        {"get_RefreshToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::RefreshClientAuthTokenRequest.set_RefreshToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::RefreshClientAuthTokenRequest::*)(::StringW)>(&::KID::Model::RefreshClientAuthTokenRequest::set_RefreshToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::RefreshClientAuthTokenRequest*>(),
                        {"set_RefreshToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::RefreshClientAuthTokenRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::RefreshClientAuthTokenRequest::*)()>(&::KID::Model::RefreshClientAuthTokenRequest::ToString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9cd8d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::RefreshClientAuthTokenRequest*>(),
                    {::i2c::class_of<::KID::Model::RefreshClientAuthTokenRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::RefreshClientAuthTokenRequest.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::RefreshClientAuthTokenRequest::*)()>(&::KID::Model::RefreshClientAuthTokenRequest::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd8ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::RefreshClientAuthTokenRequest*>(),
                    {::i2c::class_of<::KID::Model::RefreshClientAuthTokenRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& KID::Model::RefreshClientAuthTokenRequest::__cordl_internal_get__RefreshToken_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RefreshToken_k__BackingField;
}
constexpr ::StringW const& KID::Model::RefreshClientAuthTokenRequest::__cordl_internal_get__RefreshToken_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RefreshToken_k__BackingField;
}
constexpr void KID::Model::RefreshClientAuthTokenRequest::__cordl_internal_set__RefreshToken_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RefreshToken_k__BackingField = value;
}
inline void KID::Model::RefreshClientAuthTokenRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::RefreshClientAuthTokenRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::RefreshClientAuthTokenRequest::_ctor(::StringW  refreshToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::RefreshClientAuthTokenRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, refreshToken);
}
inline ::StringW KID::Model::RefreshClientAuthTokenRequest::get_RefreshToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::RefreshClientAuthTokenRequest*>(),
                        {"get_RefreshToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::RefreshClientAuthTokenRequest::set_RefreshToken(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::RefreshClientAuthTokenRequest*>(),
                        {"set_RefreshToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::RefreshClientAuthTokenRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::RefreshClientAuthTokenRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::RefreshClientAuthTokenRequest::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::RefreshClientAuthTokenRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::RefreshClientAuthTokenRequest* KID::Model::RefreshClientAuthTokenRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::RefreshClientAuthTokenRequest*>());
}
inline ::KID::Model::RefreshClientAuthTokenRequest* KID::Model::RefreshClientAuthTokenRequest::New_ctor(::StringW  refreshToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::RefreshClientAuthTokenRequest*>(refreshToken));
}
// Ctor Parameters []
constexpr ::KID::Model::RefreshClientAuthTokenRequest::RefreshClientAuthTokenRequest()   {
}

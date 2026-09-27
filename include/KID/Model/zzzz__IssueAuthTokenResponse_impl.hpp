#pragma once
// IWYU pragma private; include "KID/Model/IssueAuthTokenResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__IssueAuthTokenResponse_def.hpp"
//  Writing Method size for method: ::KID::Model::IssueAuthTokenResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::IssueAuthTokenResponse::*)(::StringW, ::StringW)>(&::KID::Model::IssueAuthTokenResponse::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9cd87ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::IssueAuthTokenResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::IssueAuthTokenResponse.get_AccessToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::IssueAuthTokenResponse::*)()>(&::KID::Model::IssueAuthTokenResponse::get_AccessToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::IssueAuthTokenResponse*>(),
                        {"get_AccessToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::IssueAuthTokenResponse.set_AccessToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::IssueAuthTokenResponse::*)(::StringW)>(&::KID::Model::IssueAuthTokenResponse::set_AccessToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::IssueAuthTokenResponse*>(),
                        {"set_AccessToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::IssueAuthTokenResponse.get_RefreshToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::IssueAuthTokenResponse::*)()>(&::KID::Model::IssueAuthTokenResponse::get_RefreshToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::IssueAuthTokenResponse*>(),
                        {"get_RefreshToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::IssueAuthTokenResponse.set_RefreshToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::IssueAuthTokenResponse::*)(::StringW)>(&::KID::Model::IssueAuthTokenResponse::set_RefreshToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::IssueAuthTokenResponse*>(),
                        {"set_RefreshToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::IssueAuthTokenResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::IssueAuthTokenResponse::*)()>(&::KID::Model::IssueAuthTokenResponse::ToString)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9cd8850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::IssueAuthTokenResponse*>(),
                    {::i2c::class_of<::KID::Model::IssueAuthTokenResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::IssueAuthTokenResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::IssueAuthTokenResponse::*)()>(&::KID::Model::IssueAuthTokenResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd89a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::IssueAuthTokenResponse*>(),
                    {::i2c::class_of<::KID::Model::IssueAuthTokenResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& KID::Model::IssueAuthTokenResponse::__cordl_internal_get__AccessToken_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AccessToken_k__BackingField;
}
constexpr ::StringW const& KID::Model::IssueAuthTokenResponse::__cordl_internal_get__AccessToken_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AccessToken_k__BackingField;
}
constexpr void KID::Model::IssueAuthTokenResponse::__cordl_internal_set__AccessToken_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AccessToken_k__BackingField = value;
}
constexpr ::StringW& KID::Model::IssueAuthTokenResponse::__cordl_internal_get__RefreshToken_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RefreshToken_k__BackingField;
}
constexpr ::StringW const& KID::Model::IssueAuthTokenResponse::__cordl_internal_get__RefreshToken_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RefreshToken_k__BackingField;
}
constexpr void KID::Model::IssueAuthTokenResponse::__cordl_internal_set__RefreshToken_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RefreshToken_k__BackingField = value;
}
inline void KID::Model::IssueAuthTokenResponse::_ctor(::StringW  accessToken, ::StringW  refreshToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::IssueAuthTokenResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accessToken, refreshToken);
}
inline ::StringW KID::Model::IssueAuthTokenResponse::get_AccessToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::IssueAuthTokenResponse*>(),
                        {"get_AccessToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::IssueAuthTokenResponse::set_AccessToken(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::IssueAuthTokenResponse*>(),
                        {"set_AccessToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::IssueAuthTokenResponse::get_RefreshToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::IssueAuthTokenResponse*>(),
                        {"get_RefreshToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::IssueAuthTokenResponse::set_RefreshToken(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::IssueAuthTokenResponse*>(),
                        {"set_RefreshToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::IssueAuthTokenResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::IssueAuthTokenResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::IssueAuthTokenResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::IssueAuthTokenResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::KID::Model::IssueAuthTokenResponse* KID::Model::IssueAuthTokenResponse::New_ctor(::StringW  accessToken, ::StringW  refreshToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::IssueAuthTokenResponse*>(accessToken, refreshToken));
}
// Ctor Parameters []
constexpr ::KID::Model::IssueAuthTokenResponse::IssueAuthTokenResponse()   {
}

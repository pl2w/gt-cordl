#pragma once
// IWYU pragma private; include "KID/Model/GenerateChallengeOTPResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__GenerateChallengeOTPResponse_def.hpp"
//  Writing Method size for method: ::KID::Model::GenerateChallengeOTPResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GenerateChallengeOTPResponse::*)()>(&::KID::Model::GenerateChallengeOTPResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd710c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GenerateChallengeOTPResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GenerateChallengeOTPResponse::*)(::StringW, ::StringW)>(&::KID::Model::GenerateChallengeOTPResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9cd7114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GenerateChallengeOTPResponse.get_Otp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GenerateChallengeOTPResponse::*)()>(&::KID::Model::GenerateChallengeOTPResponse::get_Otp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd71c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(),
                        {"get_Otp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GenerateChallengeOTPResponse.set_Otp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GenerateChallengeOTPResponse::*)(::StringW)>(&::KID::Model::GenerateChallengeOTPResponse::set_Otp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd71d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(),
                        {"set_Otp", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GenerateChallengeOTPResponse.get_ExpiresAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GenerateChallengeOTPResponse::*)()>(&::KID::Model::GenerateChallengeOTPResponse::get_ExpiresAt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd71d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(),
                        {"get_ExpiresAt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GenerateChallengeOTPResponse.set_ExpiresAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GenerateChallengeOTPResponse::*)(::StringW)>(&::KID::Model::GenerateChallengeOTPResponse::set_ExpiresAt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd71e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(),
                        {"set_ExpiresAt", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GenerateChallengeOTPResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GenerateChallengeOTPResponse::*)()>(&::KID::Model::GenerateChallengeOTPResponse::ToString)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9cd71e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(),
                    {::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GenerateChallengeOTPResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GenerateChallengeOTPResponse::*)()>(&::KID::Model::GenerateChallengeOTPResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd733c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(),
                    {::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& KID::Model::GenerateChallengeOTPResponse::__cordl_internal_get__Otp_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Otp_k__BackingField;
}
constexpr ::StringW const& KID::Model::GenerateChallengeOTPResponse::__cordl_internal_get__Otp_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Otp_k__BackingField;
}
constexpr void KID::Model::GenerateChallengeOTPResponse::__cordl_internal_set__Otp_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Otp_k__BackingField = value;
}
constexpr ::StringW& KID::Model::GenerateChallengeOTPResponse::__cordl_internal_get__ExpiresAt_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExpiresAt_k__BackingField;
}
constexpr ::StringW const& KID::Model::GenerateChallengeOTPResponse::__cordl_internal_get__ExpiresAt_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExpiresAt_k__BackingField;
}
constexpr void KID::Model::GenerateChallengeOTPResponse::__cordl_internal_set__ExpiresAt_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ExpiresAt_k__BackingField = value;
}
inline void KID::Model::GenerateChallengeOTPResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::GenerateChallengeOTPResponse::_ctor(::StringW  otp, ::StringW  expiresAt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otp, expiresAt);
}
inline ::StringW KID::Model::GenerateChallengeOTPResponse::get_Otp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(),
                        {"get_Otp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::GenerateChallengeOTPResponse::set_Otp(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(),
                        {"set_Otp", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::GenerateChallengeOTPResponse::get_ExpiresAt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(),
                        {"get_ExpiresAt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::GenerateChallengeOTPResponse::set_ExpiresAt(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(),
                        {"set_ExpiresAt", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::GenerateChallengeOTPResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::GenerateChallengeOTPResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::GenerateChallengeOTPResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::GenerateChallengeOTPResponse* KID::Model::GenerateChallengeOTPResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::GenerateChallengeOTPResponse*>());
}
inline ::KID::Model::GenerateChallengeOTPResponse* KID::Model::GenerateChallengeOTPResponse::New_ctor(::StringW  otp, ::StringW  expiresAt)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::GenerateChallengeOTPResponse*>(otp, expiresAt));
}
// Ctor Parameters []
constexpr ::KID::Model::GenerateChallengeOTPResponse::GenerateChallengeOTPResponse()   {
}

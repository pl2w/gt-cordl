#pragma once
// IWYU pragma private; include "KID/Model/CreateParentalConsentChallengeResponse.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__CreateParentalConsentChallengeResponse_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::CreateParentalConsentChallengeResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateParentalConsentChallengeResponse::*)()>(&::KID::Model::CreateParentalConsentChallengeResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateParentalConsentChallengeResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateParentalConsentChallengeResponse::*)(::System::Guid, ::StringW)>(&::KID::Model::CreateParentalConsentChallengeResponse::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9cd6560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateParentalConsentChallengeResponse.get_ChallengeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::CreateParentalConsentChallengeResponse::*)()>(&::KID::Model::CreateParentalConsentChallengeResponse::get_ChallengeId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd65f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(),
                        {"get_ChallengeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateParentalConsentChallengeResponse.set_ChallengeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateParentalConsentChallengeResponse::*)(::System::Guid)>(&::KID::Model::CreateParentalConsentChallengeResponse::set_ChallengeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd65fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(),
                        {"set_ChallengeId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateParentalConsentChallengeResponse.get_LongUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateParentalConsentChallengeResponse::*)()>(&::KID::Model::CreateParentalConsentChallengeResponse::get_LongUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(),
                        {"get_LongUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateParentalConsentChallengeResponse.set_LongUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateParentalConsentChallengeResponse::*)(::StringW)>(&::KID::Model::CreateParentalConsentChallengeResponse::set_LongUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd660c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(),
                        {"set_LongUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateParentalConsentChallengeResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateParentalConsentChallengeResponse::*)()>(&::KID::Model::CreateParentalConsentChallengeResponse::ToString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9cd6614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(),
                    {::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateParentalConsentChallengeResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateParentalConsentChallengeResponse::*)()>(&::KID::Model::CreateParentalConsentChallengeResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd67a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(),
                    {::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Guid& KID::Model::CreateParentalConsentChallengeResponse::__cordl_internal_get__ChallengeId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChallengeId_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::CreateParentalConsentChallengeResponse::__cordl_internal_get__ChallengeId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChallengeId_k__BackingField;
}
constexpr void KID::Model::CreateParentalConsentChallengeResponse::__cordl_internal_set__ChallengeId_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChallengeId_k__BackingField = value;
}
constexpr ::StringW& KID::Model::CreateParentalConsentChallengeResponse::__cordl_internal_get__LongUrl_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LongUrl_k__BackingField;
}
constexpr ::StringW const& KID::Model::CreateParentalConsentChallengeResponse::__cordl_internal_get__LongUrl_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LongUrl_k__BackingField;
}
constexpr void KID::Model::CreateParentalConsentChallengeResponse::__cordl_internal_set__LongUrl_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LongUrl_k__BackingField = value;
}
inline void KID::Model::CreateParentalConsentChallengeResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::CreateParentalConsentChallengeResponse::_ctor(::System::Guid  challengeId, ::StringW  longUrl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, challengeId, longUrl);
}
inline ::System::Guid KID::Model::CreateParentalConsentChallengeResponse::get_ChallengeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(),
                        {"get_ChallengeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::CreateParentalConsentChallengeResponse::set_ChallengeId(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(),
                        {"set_ChallengeId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateParentalConsentChallengeResponse::get_LongUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(),
                        {"get_LongUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CreateParentalConsentChallengeResponse::set_LongUrl(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(),
                        {"set_LongUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateParentalConsentChallengeResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::CreateParentalConsentChallengeResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateParentalConsentChallengeResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::CreateParentalConsentChallengeResponse* KID::Model::CreateParentalConsentChallengeResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateParentalConsentChallengeResponse*>());
}
inline ::KID::Model::CreateParentalConsentChallengeResponse* KID::Model::CreateParentalConsentChallengeResponse::New_ctor(::System::Guid  challengeId, ::StringW  longUrl)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateParentalConsentChallengeResponse*>(challengeId, longUrl));
}
// Ctor Parameters []
constexpr ::KID::Model::CreateParentalConsentChallengeResponse::CreateParentalConsentChallengeResponse()   {
}

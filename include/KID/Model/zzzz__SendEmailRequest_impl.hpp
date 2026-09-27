#pragma once
// IWYU pragma private; include "KID/Model/SendEmailRequest.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__SendEmailRequest_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::SendEmailRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SendEmailRequest::*)()>(&::KID::Model::SendEmailRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd90f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SendEmailRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SendEmailRequest::*)(::System::Guid, ::StringW, ::StringW)>(&::KID::Model::SendEmailRequest::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9cd90fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SendEmailRequest.get_ChallengeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::SendEmailRequest::*)()>(&::KID::Model::SendEmailRequest::get_ChallengeId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd9154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                        {"get_ChallengeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SendEmailRequest.set_ChallengeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SendEmailRequest::*)(::System::Guid)>(&::KID::Model::SendEmailRequest::set_ChallengeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                        {"set_ChallengeId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SendEmailRequest.get_Email
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::SendEmailRequest::*)()>(&::KID::Model::SendEmailRequest::get_Email)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                        {"get_Email", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SendEmailRequest.set_Email
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SendEmailRequest::*)(::StringW)>(&::KID::Model::SendEmailRequest::set_Email)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                        {"set_Email", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SendEmailRequest.get_Locale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::SendEmailRequest::*)()>(&::KID::Model::SendEmailRequest::get_Locale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                        {"get_Locale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SendEmailRequest.set_Locale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SendEmailRequest::*)(::StringW)>(&::KID::Model::SendEmailRequest::set_Locale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                        {"set_Locale", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SendEmailRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::SendEmailRequest::*)()>(&::KID::Model::SendEmailRequest::ToString)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9cd9188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                    {::i2c::class_of<::KID::Model::SendEmailRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SendEmailRequest.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::SendEmailRequest::*)()>(&::KID::Model::SendEmailRequest::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd935c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                    {::i2c::class_of<::KID::Model::SendEmailRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Guid& KID::Model::SendEmailRequest::__cordl_internal_get__ChallengeId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChallengeId_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::SendEmailRequest::__cordl_internal_get__ChallengeId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChallengeId_k__BackingField;
}
constexpr void KID::Model::SendEmailRequest::__cordl_internal_set__ChallengeId_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChallengeId_k__BackingField = value;
}
constexpr ::StringW& KID::Model::SendEmailRequest::__cordl_internal_get__Email_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Email_k__BackingField;
}
constexpr ::StringW const& KID::Model::SendEmailRequest::__cordl_internal_get__Email_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Email_k__BackingField;
}
constexpr void KID::Model::SendEmailRequest::__cordl_internal_set__Email_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Email_k__BackingField = value;
}
constexpr ::StringW& KID::Model::SendEmailRequest::__cordl_internal_get__Locale_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Locale_k__BackingField;
}
constexpr ::StringW const& KID::Model::SendEmailRequest::__cordl_internal_get__Locale_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Locale_k__BackingField;
}
constexpr void KID::Model::SendEmailRequest::__cordl_internal_set__Locale_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Locale_k__BackingField = value;
}
inline void KID::Model::SendEmailRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::SendEmailRequest::_ctor(::System::Guid  challengeId, ::StringW  email, ::StringW  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, challengeId, email, locale);
}
inline ::System::Guid KID::Model::SendEmailRequest::get_ChallengeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                        {"get_ChallengeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::SendEmailRequest::set_ChallengeId(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                        {"set_ChallengeId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::SendEmailRequest::get_Email()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                        {"get_Email", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::SendEmailRequest::set_Email(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                        {"set_Email", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::SendEmailRequest::get_Locale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                        {"get_Locale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::SendEmailRequest::set_Locale(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SendEmailRequest*>(),
                        {"set_Locale", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::SendEmailRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::SendEmailRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::SendEmailRequest::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::SendEmailRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::SendEmailRequest* KID::Model::SendEmailRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::SendEmailRequest*>());
}
inline ::KID::Model::SendEmailRequest* KID::Model::SendEmailRequest::New_ctor(::System::Guid  challengeId, ::StringW  email, ::StringW  locale)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::SendEmailRequest*>(challengeId, email, locale));
}
// Ctor Parameters []
constexpr ::KID::Model::SendEmailRequest::SendEmailRequest()   {
}

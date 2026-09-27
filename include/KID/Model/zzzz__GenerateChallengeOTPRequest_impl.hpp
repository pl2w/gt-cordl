#pragma once
// IWYU pragma private; include "KID/Model/GenerateChallengeOTPRequest.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__GenerateChallengeOTPRequest_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::GenerateChallengeOTPRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GenerateChallengeOTPRequest::*)()>(&::KID::Model::GenerateChallengeOTPRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GenerateChallengeOTPRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GenerateChallengeOTPRequest::*)(::System::Guid)>(&::KID::Model::GenerateChallengeOTPRequest::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9cd6f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GenerateChallengeOTPRequest.get_ChallengeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::GenerateChallengeOTPRequest::*)()>(&::KID::Model::GenerateChallengeOTPRequest::get_ChallengeId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd6f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPRequest*>(),
                        {"get_ChallengeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GenerateChallengeOTPRequest.set_ChallengeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GenerateChallengeOTPRequest::*)(::System::Guid)>(&::KID::Model::GenerateChallengeOTPRequest::set_ChallengeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPRequest*>(),
                        {"set_ChallengeId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GenerateChallengeOTPRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GenerateChallengeOTPRequest::*)()>(&::KID::Model::GenerateChallengeOTPRequest::ToString)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9cd6f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::GenerateChallengeOTPRequest*>(),
                    {::i2c::class_of<::KID::Model::GenerateChallengeOTPRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GenerateChallengeOTPRequest.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GenerateChallengeOTPRequest::*)()>(&::KID::Model::GenerateChallengeOTPRequest::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd70b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::GenerateChallengeOTPRequest*>(),
                    {::i2c::class_of<::KID::Model::GenerateChallengeOTPRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Guid& KID::Model::GenerateChallengeOTPRequest::__cordl_internal_get__ChallengeId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChallengeId_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::GenerateChallengeOTPRequest::__cordl_internal_get__ChallengeId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChallengeId_k__BackingField;
}
constexpr void KID::Model::GenerateChallengeOTPRequest::__cordl_internal_set__ChallengeId_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChallengeId_k__BackingField = value;
}
inline void KID::Model::GenerateChallengeOTPRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::GenerateChallengeOTPRequest::_ctor(::System::Guid  challengeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, challengeId);
}
inline ::System::Guid KID::Model::GenerateChallengeOTPRequest::get_ChallengeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPRequest*>(),
                        {"get_ChallengeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::GenerateChallengeOTPRequest::set_ChallengeId(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GenerateChallengeOTPRequest*>(),
                        {"set_ChallengeId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::GenerateChallengeOTPRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::GenerateChallengeOTPRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::GenerateChallengeOTPRequest::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::GenerateChallengeOTPRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::GenerateChallengeOTPRequest* KID::Model::GenerateChallengeOTPRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::GenerateChallengeOTPRequest*>());
}
inline ::KID::Model::GenerateChallengeOTPRequest* KID::Model::GenerateChallengeOTPRequest::New_ctor(::System::Guid  challengeId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::GenerateChallengeOTPRequest*>(challengeId));
}
// Ctor Parameters []
constexpr ::KID::Model::GenerateChallengeOTPRequest::GenerateChallengeOTPRequest()   {
}

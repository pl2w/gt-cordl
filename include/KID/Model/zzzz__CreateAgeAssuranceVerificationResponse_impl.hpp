#pragma once
// IWYU pragma private; include "KID/Model/CreateAgeAssuranceVerificationResponse.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__CreateAgeAssuranceVerificationResponse_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeAssuranceVerificationResponse::*)()>(&::KID::Model::CreateAgeAssuranceVerificationResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd53f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeAssuranceVerificationResponse::*)(::System::Guid, ::StringW)>(&::KID::Model::CreateAgeAssuranceVerificationResponse::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9cd53f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationResponse.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::CreateAgeAssuranceVerificationResponse::*)()>(&::KID::Model::CreateAgeAssuranceVerificationResponse::get_Id)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd5488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationResponse.set_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeAssuranceVerificationResponse::*)(::System::Guid)>(&::KID::Model::CreateAgeAssuranceVerificationResponse::set_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd5494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(),
                        {"set_Id", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationResponse.get_Url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAgeAssuranceVerificationResponse::*)()>(&::KID::Model::CreateAgeAssuranceVerificationResponse::get_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd549c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(),
                        {"get_Url", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationResponse.set_Url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeAssuranceVerificationResponse::*)(::StringW)>(&::KID::Model::CreateAgeAssuranceVerificationResponse::set_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd54a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(),
                        {"set_Url", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAgeAssuranceVerificationResponse::*)()>(&::KID::Model::CreateAgeAssuranceVerificationResponse::ToString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9cd54ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(),
                    {::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAgeAssuranceVerificationResponse::*)()>(&::KID::Model::CreateAgeAssuranceVerificationResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd563c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(),
                    {::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Guid& KID::Model::CreateAgeAssuranceVerificationResponse::__cordl_internal_get__Id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::CreateAgeAssuranceVerificationResponse::__cordl_internal_get__Id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr void KID::Model::CreateAgeAssuranceVerificationResponse::__cordl_internal_set__Id_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Id_k__BackingField = value;
}
constexpr ::StringW& KID::Model::CreateAgeAssuranceVerificationResponse::__cordl_internal_get__Url_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Url_k__BackingField;
}
constexpr ::StringW const& KID::Model::CreateAgeAssuranceVerificationResponse::__cordl_internal_get__Url_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Url_k__BackingField;
}
constexpr void KID::Model::CreateAgeAssuranceVerificationResponse::__cordl_internal_set__Url_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Url_k__BackingField = value;
}
inline void KID::Model::CreateAgeAssuranceVerificationResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::CreateAgeAssuranceVerificationResponse::_ctor(::System::Guid  id, ::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, url);
}
inline ::System::Guid KID::Model::CreateAgeAssuranceVerificationResponse::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::CreateAgeAssuranceVerificationResponse::set_Id(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(),
                        {"set_Id", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateAgeAssuranceVerificationResponse::get_Url()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(),
                        {"get_Url", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CreateAgeAssuranceVerificationResponse::set_Url(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(),
                        {"set_Url", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateAgeAssuranceVerificationResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::CreateAgeAssuranceVerificationResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::CreateAgeAssuranceVerificationResponse* KID::Model::CreateAgeAssuranceVerificationResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateAgeAssuranceVerificationResponse*>());
}
inline ::KID::Model::CreateAgeAssuranceVerificationResponse* KID::Model::CreateAgeAssuranceVerificationResponse::New_ctor(::System::Guid  id, ::StringW  url)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateAgeAssuranceVerificationResponse*>(id, url));
}
// Ctor Parameters []
constexpr ::KID::Model::CreateAgeAssuranceVerificationResponse::CreateAgeAssuranceVerificationResponse()   {
}

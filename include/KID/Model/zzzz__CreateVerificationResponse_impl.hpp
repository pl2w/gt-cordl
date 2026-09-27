#pragma once
// IWYU pragma private; include "KID/Model/CreateVerificationResponse.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__CreateVerificationResponse_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::CreateVerificationResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateVerificationResponse::*)()>(&::KID::Model::CreateVerificationResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateVerificationResponse::*)(::System::Guid, ::StringW)>(&::KID::Model::CreateVerificationResponse::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9cd6c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationResponse.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::CreateVerificationResponse::*)()>(&::KID::Model::CreateVerificationResponse::get_Id)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd6d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationResponse*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationResponse.set_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateVerificationResponse::*)(::System::Guid)>(&::KID::Model::CreateVerificationResponse::set_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationResponse*>(),
                        {"set_Id", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationResponse.get_Url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateVerificationResponse::*)()>(&::KID::Model::CreateVerificationResponse::get_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationResponse*>(),
                        {"get_Url", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationResponse.set_Url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateVerificationResponse::*)(::StringW)>(&::KID::Model::CreateVerificationResponse::set_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationResponse*>(),
                        {"set_Url", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateVerificationResponse::*)()>(&::KID::Model::CreateVerificationResponse::ToString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9cd6d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateVerificationResponse*>(),
                    {::i2c::class_of<::KID::Model::CreateVerificationResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateVerificationResponse::*)()>(&::KID::Model::CreateVerificationResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd6ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateVerificationResponse*>(),
                    {::i2c::class_of<::KID::Model::CreateVerificationResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Guid& KID::Model::CreateVerificationResponse::__cordl_internal_get__Id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::CreateVerificationResponse::__cordl_internal_get__Id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr void KID::Model::CreateVerificationResponse::__cordl_internal_set__Id_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Id_k__BackingField = value;
}
constexpr ::StringW& KID::Model::CreateVerificationResponse::__cordl_internal_get__Url_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Url_k__BackingField;
}
constexpr ::StringW const& KID::Model::CreateVerificationResponse::__cordl_internal_get__Url_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Url_k__BackingField;
}
constexpr void KID::Model::CreateVerificationResponse::__cordl_internal_set__Url_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Url_k__BackingField = value;
}
inline void KID::Model::CreateVerificationResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::CreateVerificationResponse::_ctor(::System::Guid  id, ::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, url);
}
inline ::System::Guid KID::Model::CreateVerificationResponse::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationResponse*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::CreateVerificationResponse::set_Id(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationResponse*>(),
                        {"set_Id", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateVerificationResponse::get_Url()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationResponse*>(),
                        {"get_Url", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CreateVerificationResponse::set_Url(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationResponse*>(),
                        {"set_Url", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateVerificationResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateVerificationResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::CreateVerificationResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateVerificationResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::CreateVerificationResponse* KID::Model::CreateVerificationResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateVerificationResponse*>());
}
inline ::KID::Model::CreateVerificationResponse* KID::Model::CreateVerificationResponse::New_ctor(::System::Guid  id, ::StringW  url)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateVerificationResponse*>(id, url));
}
// Ctor Parameters []
constexpr ::KID::Model::CreateVerificationResponse::CreateVerificationResponse()   {
}

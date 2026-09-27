#pragma once
// IWYU pragma private; include "KID/Model/CheckAgeAppealResponse.hpp"
#include "KID/Model/zzzz__CheckAgeAppealResponse_StatusEnum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__CheckAgeAppealResponse_def.hpp"
#include "KID/Model/zzzz__CheckAgeAppealResponse_StatusEnum_def.hpp"
//  Writing Method size for method: ::KID::Model::CheckAgeAppealResponse.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CheckAgeAppealResponse_StatusEnum (::KID::Model::CheckAgeAppealResponse::*)()>(&::KID::Model::CheckAgeAppealResponse::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeAppealResponse.set_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeAppealResponse::*)(::GlobalNamespace::CheckAgeAppealResponse_StatusEnum)>(&::KID::Model::CheckAgeAppealResponse::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::CheckAgeAppealResponse_StatusEnum>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeAppealResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeAppealResponse::*)()>(&::KID::Model::CheckAgeAppealResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeAppealResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeAppealResponse::*)(::GlobalNamespace::CheckAgeAppealResponse_StatusEnum, ::StringW)>(&::KID::Model::CheckAgeAppealResponse::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9cd3f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CheckAgeAppealResponse_StatusEnum>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeAppealResponse.get_Url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CheckAgeAppealResponse::*)()>(&::KID::Model::CheckAgeAppealResponse::get_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(),
                        {"get_Url", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeAppealResponse.set_Url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeAppealResponse::*)(::StringW)>(&::KID::Model::CheckAgeAppealResponse::set_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(),
                        {"set_Url", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeAppealResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CheckAgeAppealResponse::*)()>(&::KID::Model::CheckAgeAppealResponse::ToString)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9cd3fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(),
                    {::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeAppealResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CheckAgeAppealResponse::*)()>(&::KID::Model::CheckAgeAppealResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd4134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(),
                    {::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum& KID::Model::CheckAgeAppealResponse::__cordl_internal_get__Status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum const& KID::Model::CheckAgeAppealResponse::__cordl_internal_get__Status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr void KID::Model::CheckAgeAppealResponse::__cordl_internal_set__Status_k__BackingField(::GlobalNamespace::CheckAgeAppealResponse_StatusEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Status_k__BackingField = value;
}
constexpr ::StringW& KID::Model::CheckAgeAppealResponse::__cordl_internal_get__Url_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Url_k__BackingField;
}
constexpr ::StringW const& KID::Model::CheckAgeAppealResponse::__cordl_internal_get__Url_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Url_k__BackingField;
}
constexpr void KID::Model::CheckAgeAppealResponse::__cordl_internal_set__Url_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Url_k__BackingField = value;
}
inline ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum KID::Model::CheckAgeAppealResponse::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CheckAgeAppealResponse_StatusEnum>(this, ___internal_method);
}
inline void KID::Model::CheckAgeAppealResponse::set_Status(::GlobalNamespace::CheckAgeAppealResponse_StatusEnum  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::CheckAgeAppealResponse_StatusEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void KID::Model::CheckAgeAppealResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::CheckAgeAppealResponse::_ctor(::GlobalNamespace::CheckAgeAppealResponse_StatusEnum  status, ::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CheckAgeAppealResponse_StatusEnum>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, url);
}
inline ::StringW KID::Model::CheckAgeAppealResponse::get_Url()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(),
                        {"get_Url", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CheckAgeAppealResponse::set_Url(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(),
                        {"set_Url", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CheckAgeAppealResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::CheckAgeAppealResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CheckAgeAppealResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::CheckAgeAppealResponse* KID::Model::CheckAgeAppealResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CheckAgeAppealResponse*>());
}
inline ::KID::Model::CheckAgeAppealResponse* KID::Model::CheckAgeAppealResponse::New_ctor(::GlobalNamespace::CheckAgeAppealResponse_StatusEnum  status, ::StringW  url)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CheckAgeAppealResponse*>(status, url));
}
// Ctor Parameters []
constexpr ::KID::Model::CheckAgeAppealResponse::CheckAgeAppealResponse()   {
}

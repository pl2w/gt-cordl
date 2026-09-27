#pragma once
// IWYU pragma private; include "KID/Model/CreateClientAuthTokenRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__CreateClientAuthTokenRequest_def.hpp"
//  Writing Method size for method: ::KID::Model::CreateClientAuthTokenRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateClientAuthTokenRequest::*)()>(&::KID::Model::CreateClientAuthTokenRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd5d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateClientAuthTokenRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateClientAuthTokenRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateClientAuthTokenRequest::*)(::StringW)>(&::KID::Model::CreateClientAuthTokenRequest::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9cd5d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateClientAuthTokenRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateClientAuthTokenRequest.get_ClientId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateClientAuthTokenRequest::*)()>(&::KID::Model::CreateClientAuthTokenRequest::get_ClientId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd5d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateClientAuthTokenRequest*>(),
                        {"get_ClientId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateClientAuthTokenRequest.set_ClientId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateClientAuthTokenRequest::*)(::StringW)>(&::KID::Model::CreateClientAuthTokenRequest::set_ClientId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd5da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateClientAuthTokenRequest*>(),
                        {"set_ClientId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateClientAuthTokenRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateClientAuthTokenRequest::*)()>(&::KID::Model::CreateClientAuthTokenRequest::ToString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9cd5da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateClientAuthTokenRequest*>(),
                    {::i2c::class_of<::KID::Model::CreateClientAuthTokenRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateClientAuthTokenRequest.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateClientAuthTokenRequest::*)()>(&::KID::Model::CreateClientAuthTokenRequest::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd5eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateClientAuthTokenRequest*>(),
                    {::i2c::class_of<::KID::Model::CreateClientAuthTokenRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& KID::Model::CreateClientAuthTokenRequest::__cordl_internal_get__ClientId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClientId_k__BackingField;
}
constexpr ::StringW const& KID::Model::CreateClientAuthTokenRequest::__cordl_internal_get__ClientId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClientId_k__BackingField;
}
constexpr void KID::Model::CreateClientAuthTokenRequest::__cordl_internal_set__ClientId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClientId_k__BackingField = value;
}
inline void KID::Model::CreateClientAuthTokenRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateClientAuthTokenRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::CreateClientAuthTokenRequest::_ctor(::StringW  clientId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateClientAuthTokenRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientId);
}
inline ::StringW KID::Model::CreateClientAuthTokenRequest::get_ClientId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateClientAuthTokenRequest*>(),
                        {"get_ClientId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CreateClientAuthTokenRequest::set_ClientId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateClientAuthTokenRequest*>(),
                        {"set_ClientId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateClientAuthTokenRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateClientAuthTokenRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::CreateClientAuthTokenRequest::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateClientAuthTokenRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::CreateClientAuthTokenRequest* KID::Model::CreateClientAuthTokenRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateClientAuthTokenRequest*>());
}
inline ::KID::Model::CreateClientAuthTokenRequest* KID::Model::CreateClientAuthTokenRequest::New_ctor(::StringW  clientId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateClientAuthTokenRequest*>(clientId));
}
// Ctor Parameters []
constexpr ::KID::Model::CreateClientAuthTokenRequest::CreateClientAuthTokenRequest()   {
}

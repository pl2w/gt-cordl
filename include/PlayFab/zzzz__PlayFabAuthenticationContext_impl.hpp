#pragma once
// IWYU pragma private; include "PlayFab/PlayFabAuthenticationContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabAuthenticationContext_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabAuthenticationContext::*)()>(&::PlayFab::PlayFabAuthenticationContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7dd220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabAuthenticationContext::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::PlayFab::PlayFabAuthenticationContext::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa7dd228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationContext*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationContext.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabAuthenticationContext::*)(::PlayFab::PlayFabAuthenticationContext*)>(&::PlayFab::PlayFabAuthenticationContext::CopyFrom)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa7dd2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationContext*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationContext.IsClientLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::PlayFabAuthenticationContext::*)()>(&::PlayFab::PlayFabAuthenticationContext::IsClientLoggedIn)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa7dd324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationContext*>(),
                        {"IsClientLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationContext.IsEntityLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::PlayFabAuthenticationContext::*)()>(&::PlayFab::PlayFabAuthenticationContext::IsEntityLoggedIn)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa7c179c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationContext*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabAuthenticationContext.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabAuthenticationContext::*)()>(&::PlayFab::PlayFabAuthenticationContext::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa7c181c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationContext*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::PlayFabAuthenticationContext::__cordl_internal_get_ClientSessionTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientSessionTicket;
}
constexpr ::StringW const& PlayFab::PlayFabAuthenticationContext::__cordl_internal_get_ClientSessionTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientSessionTicket;
}
constexpr void PlayFab::PlayFabAuthenticationContext::__cordl_internal_set_ClientSessionTicket(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClientSessionTicket = value;
}
constexpr ::StringW& PlayFab::PlayFabAuthenticationContext::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::PlayFabAuthenticationContext::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::PlayFabAuthenticationContext::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr ::StringW& PlayFab::PlayFabAuthenticationContext::__cordl_internal_get_EntityToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityToken;
}
constexpr ::StringW const& PlayFab::PlayFabAuthenticationContext::__cordl_internal_get_EntityToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityToken;
}
constexpr void PlayFab::PlayFabAuthenticationContext::__cordl_internal_set_EntityToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntityToken = value;
}
constexpr ::StringW& PlayFab::PlayFabAuthenticationContext::__cordl_internal_get_EntityId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityId;
}
constexpr ::StringW const& PlayFab::PlayFabAuthenticationContext::__cordl_internal_get_EntityId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityId;
}
constexpr void PlayFab::PlayFabAuthenticationContext::__cordl_internal_set_EntityId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntityId = value;
}
constexpr ::StringW& PlayFab::PlayFabAuthenticationContext::__cordl_internal_get_EntityType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityType;
}
constexpr ::StringW const& PlayFab::PlayFabAuthenticationContext::__cordl_internal_get_EntityType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityType;
}
constexpr void PlayFab::PlayFabAuthenticationContext::__cordl_internal_set_EntityType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntityType = value;
}
inline void PlayFab::PlayFabAuthenticationContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::PlayFabAuthenticationContext::_ctor(::StringW  clientSessionTicket, ::StringW  entityToken, ::StringW  playFabId, ::StringW  entityId, ::StringW  entityType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationContext*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientSessionTicket, entityToken, playFabId, entityId, entityType);
}
inline void PlayFab::PlayFabAuthenticationContext::CopyFrom(::PlayFab::PlayFabAuthenticationContext*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationContext*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline bool PlayFab::PlayFabAuthenticationContext::IsClientLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationContext*>(),
                        {"IsClientLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool PlayFab::PlayFabAuthenticationContext::IsEntityLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationContext*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void PlayFab::PlayFabAuthenticationContext::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabAuthenticationContext*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::PlayFabAuthenticationContext* PlayFab::PlayFabAuthenticationContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabAuthenticationContext*>());
}
inline ::PlayFab::PlayFabAuthenticationContext* PlayFab::PlayFabAuthenticationContext::New_ctor(::StringW  clientSessionTicket, ::StringW  entityToken, ::StringW  playFabId, ::StringW  entityId, ::StringW  entityType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabAuthenticationContext*>(clientSessionTicket, entityToken, playFabId, entityId, entityType));
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabAuthenticationContext::PlayFabAuthenticationContext()   {
}

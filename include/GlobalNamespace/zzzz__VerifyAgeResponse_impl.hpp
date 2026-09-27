#pragma once
// IWYU pragma private; include "GlobalNamespace/VerifyAgeResponse.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VerifyAgeResponse_def.hpp"
#include "GlobalNamespace/zzzz__KIDDefaultSession_def.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
#include "KID/Model/zzzz__Session_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VerifyAgeResponse.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SessionStatus (::GlobalNamespace::VerifyAgeResponse::*)()>(&::GlobalNamespace::VerifyAgeResponse::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a262f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeResponse*>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyAgeResponse.set_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerifyAgeResponse::*)(::GlobalNamespace::SessionStatus)>(&::GlobalNamespace::VerifyAgeResponse::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a262fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::SessionStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyAgeResponse.get_Session
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::Session* (::GlobalNamespace::VerifyAgeResponse::*)()>(&::GlobalNamespace::VerifyAgeResponse::get_Session)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeResponse*>(),
                        {"get_Session", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyAgeResponse.set_Session
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerifyAgeResponse::*)(::KID::Model::Session*)>(&::GlobalNamespace::VerifyAgeResponse::set_Session)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2630c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeResponse*>(),
                        {"set_Session", {}, {::i2c::type_of<::KID::Model::Session*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyAgeResponse.get_DefaultSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::KIDDefaultSession* (::GlobalNamespace::VerifyAgeResponse::*)()>(&::GlobalNamespace::VerifyAgeResponse::get_DefaultSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeResponse*>(),
                        {"get_DefaultSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyAgeResponse.set_DefaultSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerifyAgeResponse::*)(::GlobalNamespace::KIDDefaultSession*)>(&::GlobalNamespace::VerifyAgeResponse::set_DefaultSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2631c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeResponse*>(),
                        {"set_DefaultSession", {}, {::i2c::type_of<::GlobalNamespace::KIDDefaultSession*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyAgeResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerifyAgeResponse::*)()>(&::GlobalNamespace::VerifyAgeResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SessionStatus& GlobalNamespace::VerifyAgeResponse::__cordl_internal_get__Status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr ::GlobalNamespace::SessionStatus const& GlobalNamespace::VerifyAgeResponse::__cordl_internal_get__Status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr void GlobalNamespace::VerifyAgeResponse::__cordl_internal_set__Status_k__BackingField(::GlobalNamespace::SessionStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Status_k__BackingField = value;
}
constexpr ::KID::Model::Session*& GlobalNamespace::VerifyAgeResponse::__cordl_internal_get__Session_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Session_k__BackingField;
}
constexpr ::KID::Model::Session* const& GlobalNamespace::VerifyAgeResponse::__cordl_internal_get__Session_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Session_k__BackingField;
}
constexpr void GlobalNamespace::VerifyAgeResponse::__cordl_internal_set__Session_k__BackingField(::KID::Model::Session*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Session_k__BackingField = value;
}
constexpr ::GlobalNamespace::KIDDefaultSession*& GlobalNamespace::VerifyAgeResponse::__cordl_internal_get__DefaultSession_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultSession_k__BackingField;
}
constexpr ::GlobalNamespace::KIDDefaultSession* const& GlobalNamespace::VerifyAgeResponse::__cordl_internal_get__DefaultSession_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultSession_k__BackingField;
}
constexpr void GlobalNamespace::VerifyAgeResponse::__cordl_internal_set__DefaultSession_k__BackingField(::GlobalNamespace::KIDDefaultSession*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultSession_k__BackingField = value;
}
inline ::GlobalNamespace::SessionStatus GlobalNamespace::VerifyAgeResponse::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeResponse*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SessionStatus>(this, ___internal_method);
}
inline void GlobalNamespace::VerifyAgeResponse::set_Status(::GlobalNamespace::SessionStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::SessionStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::Session* GlobalNamespace::VerifyAgeResponse::get_Session()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeResponse*>(),
                        {"get_Session", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::Session*>(this, ___internal_method);
}
inline void GlobalNamespace::VerifyAgeResponse::set_Session(::KID::Model::Session*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeResponse*>(),
                        {"set_Session", {}, {::i2c::type_of<::KID::Model::Session*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::KIDDefaultSession* GlobalNamespace::VerifyAgeResponse::get_DefaultSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeResponse*>(),
                        {"get_DefaultSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::KIDDefaultSession*>(this, ___internal_method);
}
inline void GlobalNamespace::VerifyAgeResponse::set_DefaultSession(::GlobalNamespace::KIDDefaultSession*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeResponse*>(),
                        {"set_DefaultSession", {}, {::i2c::type_of<::GlobalNamespace::KIDDefaultSession*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::VerifyAgeResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VerifyAgeResponse* GlobalNamespace::VerifyAgeResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VerifyAgeResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VerifyAgeResponse::VerifyAgeResponse()   {
}

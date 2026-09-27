#pragma once
// IWYU pragma private; include "KID/Model/CheckAgeGateResponse.hpp"
#include "KID/Model/zzzz__CheckAgeGateResponse_StatusEnum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__CheckAgeGateResponse_def.hpp"
#include "KID/Model/zzzz__Challenge_def.hpp"
#include "KID/Model/zzzz__CheckAgeGateResponse_StatusEnum_def.hpp"
#include "KID/Model/zzzz__Session_def.hpp"
//  Writing Method size for method: ::KID::Model::CheckAgeGateResponse.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CheckAgeGateResponse_StatusEnum (::KID::Model::CheckAgeGateResponse::*)()>(&::KID::Model::CheckAgeGateResponse::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateResponse.set_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeGateResponse::*)(::GlobalNamespace::CheckAgeGateResponse_StatusEnum)>(&::KID::Model::CheckAgeGateResponse::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::CheckAgeGateResponse_StatusEnum>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeGateResponse::*)()>(&::KID::Model::CheckAgeGateResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd44a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeGateResponse::*)(::GlobalNamespace::CheckAgeGateResponse_StatusEnum, ::KID::Model::Session*, ::KID::Model::Challenge*)>(&::KID::Model::CheckAgeGateResponse::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9cd44a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CheckAgeGateResponse_StatusEnum>(), ::i2c::type_of<::KID::Model::Session*>(), ::i2c::type_of<::KID::Model::Challenge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateResponse.get_Session
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::Session* (::KID::Model::CheckAgeGateResponse::*)()>(&::KID::Model::CheckAgeGateResponse::get_Session)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd44fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                        {"get_Session", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateResponse.set_Session
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeGateResponse::*)(::KID::Model::Session*)>(&::KID::Model::CheckAgeGateResponse::set_Session)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                        {"set_Session", {}, {::i2c::type_of<::KID::Model::Session*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateResponse.get_Challenge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::Challenge* (::KID::Model::CheckAgeGateResponse::*)()>(&::KID::Model::CheckAgeGateResponse::get_Challenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd450c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                        {"get_Challenge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateResponse.set_Challenge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeGateResponse::*)(::KID::Model::Challenge*)>(&::KID::Model::CheckAgeGateResponse::set_Challenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                        {"set_Challenge", {}, {::i2c::type_of<::KID::Model::Challenge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CheckAgeGateResponse::*)()>(&::KID::Model::CheckAgeGateResponse::ToString)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x9cd451c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                    {::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CheckAgeGateResponse::*)()>(&::KID::Model::CheckAgeGateResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd46e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                    {::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CheckAgeGateResponse_StatusEnum& KID::Model::CheckAgeGateResponse::__cordl_internal_get__Status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr ::GlobalNamespace::CheckAgeGateResponse_StatusEnum const& KID::Model::CheckAgeGateResponse::__cordl_internal_get__Status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr void KID::Model::CheckAgeGateResponse::__cordl_internal_set__Status_k__BackingField(::GlobalNamespace::CheckAgeGateResponse_StatusEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Status_k__BackingField = value;
}
constexpr ::KID::Model::Session*& KID::Model::CheckAgeGateResponse::__cordl_internal_get__Session_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Session_k__BackingField;
}
constexpr ::KID::Model::Session* const& KID::Model::CheckAgeGateResponse::__cordl_internal_get__Session_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Session_k__BackingField;
}
constexpr void KID::Model::CheckAgeGateResponse::__cordl_internal_set__Session_k__BackingField(::KID::Model::Session*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Session_k__BackingField = value;
}
constexpr ::KID::Model::Challenge*& KID::Model::CheckAgeGateResponse::__cordl_internal_get__Challenge_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Challenge_k__BackingField;
}
constexpr ::KID::Model::Challenge* const& KID::Model::CheckAgeGateResponse::__cordl_internal_get__Challenge_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Challenge_k__BackingField;
}
constexpr void KID::Model::CheckAgeGateResponse::__cordl_internal_set__Challenge_k__BackingField(::KID::Model::Challenge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Challenge_k__BackingField = value;
}
inline ::GlobalNamespace::CheckAgeGateResponse_StatusEnum KID::Model::CheckAgeGateResponse::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CheckAgeGateResponse_StatusEnum>(this, ___internal_method);
}
inline void KID::Model::CheckAgeGateResponse::set_Status(::GlobalNamespace::CheckAgeGateResponse_StatusEnum  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::CheckAgeGateResponse_StatusEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void KID::Model::CheckAgeGateResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::CheckAgeGateResponse::_ctor(::GlobalNamespace::CheckAgeGateResponse_StatusEnum  status, ::KID::Model::Session*  session, ::KID::Model::Challenge*  challenge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CheckAgeGateResponse_StatusEnum>(), ::i2c::type_of<::KID::Model::Session*>(), ::i2c::type_of<::KID::Model::Challenge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, session, challenge);
}
inline ::KID::Model::Session* KID::Model::CheckAgeGateResponse::get_Session()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                        {"get_Session", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::Session*>(this, ___internal_method);
}
inline void KID::Model::CheckAgeGateResponse::set_Session(::KID::Model::Session*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                        {"set_Session", {}, {::i2c::type_of<::KID::Model::Session*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::Challenge* KID::Model::CheckAgeGateResponse::get_Challenge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                        {"get_Challenge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::Challenge*>(this, ___internal_method);
}
inline void KID::Model::CheckAgeGateResponse::set_Challenge(::KID::Model::Challenge*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(),
                        {"set_Challenge", {}, {::i2c::type_of<::KID::Model::Challenge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CheckAgeGateResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::CheckAgeGateResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CheckAgeGateResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::CheckAgeGateResponse* KID::Model::CheckAgeGateResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CheckAgeGateResponse*>());
}
inline ::KID::Model::CheckAgeGateResponse* KID::Model::CheckAgeGateResponse::New_ctor(::GlobalNamespace::CheckAgeGateResponse_StatusEnum  status, ::KID::Model::Session*  session, ::KID::Model::Challenge*  challenge)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CheckAgeGateResponse*>(status, session, challenge));
}
// Ctor Parameters []
constexpr ::KID::Model::CheckAgeGateResponse::CheckAgeGateResponse()   {
}

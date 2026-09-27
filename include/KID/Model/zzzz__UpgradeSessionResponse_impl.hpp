#pragma once
// IWYU pragma private; include "KID/Model/UpgradeSessionResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__UpgradeSessionResponse_def.hpp"
#include "KID/Model/zzzz__Challenge_def.hpp"
#include "KID/Model/zzzz__Session_def.hpp"
//  Writing Method size for method: ::KID::Model::UpgradeSessionResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::UpgradeSessionResponse::*)()>(&::KID::Model::UpgradeSessionResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdacec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::UpgradeSessionResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::UpgradeSessionResponse::*)(::KID::Model::Session*, ::KID::Model::Challenge*)>(&::KID::Model::UpgradeSessionResponse::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9cdacf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::KID::Model::Session*>(), ::i2c::type_of<::KID::Model::Challenge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::UpgradeSessionResponse.get_Session
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::Session* (::KID::Model::UpgradeSessionResponse::*)()>(&::KID::Model::UpgradeSessionResponse::get_Session)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdad84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(),
                        {"get_Session", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::UpgradeSessionResponse.set_Session
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::UpgradeSessionResponse::*)(::KID::Model::Session*)>(&::KID::Model::UpgradeSessionResponse::set_Session)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdad8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(),
                        {"set_Session", {}, {::i2c::type_of<::KID::Model::Session*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::UpgradeSessionResponse.get_Challenge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::Challenge* (::KID::Model::UpgradeSessionResponse::*)()>(&::KID::Model::UpgradeSessionResponse::get_Challenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdad94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(),
                        {"get_Challenge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::UpgradeSessionResponse.set_Challenge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::UpgradeSessionResponse::*)(::KID::Model::Challenge*)>(&::KID::Model::UpgradeSessionResponse::set_Challenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdad9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(),
                        {"set_Challenge", {}, {::i2c::type_of<::KID::Model::Challenge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::UpgradeSessionResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::UpgradeSessionResponse::*)()>(&::KID::Model::UpgradeSessionResponse::ToString)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9cdada4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(),
                    {::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::UpgradeSessionResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::UpgradeSessionResponse::*)()>(&::KID::Model::UpgradeSessionResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cdaef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(),
                    {::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::KID::Model::Session*& KID::Model::UpgradeSessionResponse::__cordl_internal_get__Session_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Session_k__BackingField;
}
constexpr ::KID::Model::Session* const& KID::Model::UpgradeSessionResponse::__cordl_internal_get__Session_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Session_k__BackingField;
}
constexpr void KID::Model::UpgradeSessionResponse::__cordl_internal_set__Session_k__BackingField(::KID::Model::Session*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Session_k__BackingField = value;
}
constexpr ::KID::Model::Challenge*& KID::Model::UpgradeSessionResponse::__cordl_internal_get__Challenge_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Challenge_k__BackingField;
}
constexpr ::KID::Model::Challenge* const& KID::Model::UpgradeSessionResponse::__cordl_internal_get__Challenge_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Challenge_k__BackingField;
}
constexpr void KID::Model::UpgradeSessionResponse::__cordl_internal_set__Challenge_k__BackingField(::KID::Model::Challenge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Challenge_k__BackingField = value;
}
inline void KID::Model::UpgradeSessionResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::UpgradeSessionResponse::_ctor(::KID::Model::Session*  session, ::KID::Model::Challenge*  challenge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::KID::Model::Session*>(), ::i2c::type_of<::KID::Model::Challenge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, session, challenge);
}
inline ::KID::Model::Session* KID::Model::UpgradeSessionResponse::get_Session()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(),
                        {"get_Session", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::Session*>(this, ___internal_method);
}
inline void KID::Model::UpgradeSessionResponse::set_Session(::KID::Model::Session*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(),
                        {"set_Session", {}, {::i2c::type_of<::KID::Model::Session*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::Challenge* KID::Model::UpgradeSessionResponse::get_Challenge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(),
                        {"get_Challenge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::Challenge*>(this, ___internal_method);
}
inline void KID::Model::UpgradeSessionResponse::set_Challenge(::KID::Model::Challenge*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(),
                        {"set_Challenge", {}, {::i2c::type_of<::KID::Model::Challenge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::UpgradeSessionResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::UpgradeSessionResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::UpgradeSessionResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::UpgradeSessionResponse* KID::Model::UpgradeSessionResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::UpgradeSessionResponse*>());
}
inline ::KID::Model::UpgradeSessionResponse* KID::Model::UpgradeSessionResponse::New_ctor(::KID::Model::Session*  session, ::KID::Model::Challenge*  challenge)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::UpgradeSessionResponse*>(session, challenge));
}
// Ctor Parameters []
constexpr ::KID::Model::UpgradeSessionResponse::UpgradeSessionResponse()   {
}

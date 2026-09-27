#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonObjectAttribute.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_impl.hpp"
#include "Newtonsoft/Json/zzzz__MemberSerialization_impl.hpp"
#include "Newtonsoft/Json/zzzz__MissingMemberHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__Required_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonObjectAttribute_def.hpp"
#include "Newtonsoft/Json/zzzz__MemberSerialization_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonObjectAttribute.get_MemberSerialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::MemberSerialization (::Newtonsoft::Json::JsonObjectAttribute::*)()>(&::Newtonsoft::Json::JsonObjectAttribute::get_MemberSerialization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36ff68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonObjectAttribute*>(),
                        {"get_MemberSerialization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonObjectAttribute.set_MemberSerialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonObjectAttribute::*)(::Newtonsoft::Json::MemberSerialization)>(&::Newtonsoft::Json::JsonObjectAttribute::set_MemberSerialization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36ff70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonObjectAttribute*>(),
                        {"set_MemberSerialization", {}, {::i2c::type_of<::Newtonsoft::Json::MemberSerialization>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonObjectAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonObjectAttribute::*)()>(&::Newtonsoft::Json::JsonObjectAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36ff78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonObjectAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonObjectAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonObjectAttribute::*)(::Newtonsoft::Json::MemberSerialization)>(&::Newtonsoft::Json::JsonObjectAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa36ff80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonObjectAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Newtonsoft::Json::MemberSerialization>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::MemberSerialization& Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_get__memberSerialization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____memberSerialization;
}
constexpr ::Newtonsoft::Json::MemberSerialization const& Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_get__memberSerialization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____memberSerialization;
}
constexpr void Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_set__memberSerialization(::Newtonsoft::Json::MemberSerialization  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____memberSerialization = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>& Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_get__missingMemberHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missingMemberHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> const& Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_get__missingMemberHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missingMemberHandling;
}
constexpr void Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_set__missingMemberHandling(::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____missingMemberHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::Required>& Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_get__itemRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____itemRequired;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::Required> const& Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_get__itemRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____itemRequired;
}
constexpr void Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_set__itemRequired(::System::Nullable_1<::Newtonsoft::Json::Required>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____itemRequired = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>& Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_get__itemNullValueHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____itemNullValueHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> const& Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_get__itemNullValueHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____itemNullValueHandling;
}
constexpr void Newtonsoft::Json::JsonObjectAttribute::__cordl_internal_set__itemNullValueHandling(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____itemNullValueHandling = value;
}
inline ::Newtonsoft::Json::MemberSerialization Newtonsoft::Json::JsonObjectAttribute::get_MemberSerialization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonObjectAttribute*>(),
                        {"get_MemberSerialization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::MemberSerialization>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonObjectAttribute::set_MemberSerialization(::Newtonsoft::Json::MemberSerialization  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonObjectAttribute*>(),
                        {"set_MemberSerialization", {}, {::i2c::type_of<::Newtonsoft::Json::MemberSerialization>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonObjectAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonObjectAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonObjectAttribute::_ctor(::Newtonsoft::Json::MemberSerialization  memberSerialization)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonObjectAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Newtonsoft::Json::MemberSerialization>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberSerialization);
}
inline ::Newtonsoft::Json::JsonObjectAttribute* Newtonsoft::Json::JsonObjectAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonObjectAttribute*>());
}
inline ::Newtonsoft::Json::JsonObjectAttribute* Newtonsoft::Json::JsonObjectAttribute::New_ctor(::Newtonsoft::Json::MemberSerialization  memberSerialization)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonObjectAttribute*>(memberSerialization));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonObjectAttribute::JsonObjectAttribute()   {
}

#pragma once
// IWYU pragma private; include "KID/Model/AgeRange.hpp"
#include "System/zzzz__Decimal_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__AgeRange_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::KID::Model::AgeRange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::AgeRange::*)(int32_t, int32_t, ::System::Decimal)>(&::KID::Model::AgeRange::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9cd30b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRange*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeRange.get_MinAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::KID::Model::AgeRange::*)()>(&::KID::Model::AgeRange::get_MinAge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd30f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRange*>(),
                        {"get_MinAge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeRange.set_MinAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::AgeRange::*)(int32_t)>(&::KID::Model::AgeRange::set_MinAge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd30fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRange*>(),
                        {"set_MinAge", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeRange.get_MaxAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::KID::Model::AgeRange::*)()>(&::KID::Model::AgeRange::get_MaxAge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRange*>(),
                        {"get_MaxAge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeRange.set_MaxAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::AgeRange::*)(int32_t)>(&::KID::Model::AgeRange::set_MaxAge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd310c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRange*>(),
                        {"set_MaxAge", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeRange.get_Confidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::KID::Model::AgeRange::*)()>(&::KID::Model::AgeRange::get_Confidence)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd3114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRange*>(),
                        {"get_Confidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeRange.set_Confidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::AgeRange::*)(::System::Decimal)>(&::KID::Model::AgeRange::set_Confidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRange*>(),
                        {"set_Confidence", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeRange.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::AgeRange::*)()>(&::KID::Model::AgeRange::ToString)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9cd3128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::AgeRange*>(),
                    {::i2c::class_of<::KID::Model::AgeRange*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeRange.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::AgeRange::*)()>(&::KID::Model::AgeRange::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd32c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::AgeRange*>(),
                    {::i2c::class_of<::KID::Model::AgeRange*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& KID::Model::AgeRange::__cordl_internal_get__MinAge_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinAge_k__BackingField;
}
constexpr int32_t const& KID::Model::AgeRange::__cordl_internal_get__MinAge_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinAge_k__BackingField;
}
constexpr void KID::Model::AgeRange::__cordl_internal_set__MinAge_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MinAge_k__BackingField = value;
}
constexpr int32_t& KID::Model::AgeRange::__cordl_internal_get__MaxAge_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxAge_k__BackingField;
}
constexpr int32_t const& KID::Model::AgeRange::__cordl_internal_get__MaxAge_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxAge_k__BackingField;
}
constexpr void KID::Model::AgeRange::__cordl_internal_set__MaxAge_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaxAge_k__BackingField = value;
}
constexpr ::System::Decimal& KID::Model::AgeRange::__cordl_internal_get__Confidence_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Confidence_k__BackingField;
}
constexpr ::System::Decimal const& KID::Model::AgeRange::__cordl_internal_get__Confidence_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Confidence_k__BackingField;
}
constexpr void KID::Model::AgeRange::__cordl_internal_set__Confidence_k__BackingField(::System::Decimal  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Confidence_k__BackingField = value;
}
inline void KID::Model::AgeRange::_ctor(int32_t  minAge, int32_t  maxAge, /* [DecimalConstant(0, 0, 0, 0, 0)] */ ::System::Decimal  confidence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRange*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minAge, maxAge, confidence);
}
inline int32_t KID::Model::AgeRange::get_MinAge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRange*>(),
                        {"get_MinAge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void KID::Model::AgeRange::set_MinAge(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRange*>(),
                        {"set_MinAge", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t KID::Model::AgeRange::get_MaxAge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRange*>(),
                        {"get_MaxAge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void KID::Model::AgeRange::set_MaxAge(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRange*>(),
                        {"set_MaxAge", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Decimal KID::Model::AgeRange::get_Confidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRange*>(),
                        {"get_Confidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline void KID::Model::AgeRange::set_Confidence(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRange*>(),
                        {"set_Confidence", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::AgeRange::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::AgeRange*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::AgeRange::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::AgeRange*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::KID::Model::AgeRange* KID::Model::AgeRange::New_ctor(int32_t  minAge, int32_t  maxAge, /* [DecimalConstant(0, 0, 0, 0, 0)] */ ::System::Decimal  confidence)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::AgeRange*>(minAge, maxAge, confidence));
}
// Ctor Parameters []
constexpr ::KID::Model::AgeRange::AgeRange()   {
}

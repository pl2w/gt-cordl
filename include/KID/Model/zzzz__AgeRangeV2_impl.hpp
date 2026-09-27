#pragma once
// IWYU pragma private; include "KID/Model/AgeRangeV2.hpp"
#include "System/zzzz__Decimal_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__AgeRangeV2_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::KID::Model::AgeRangeV2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::AgeRangeV2::*)(int32_t, int32_t, ::System::Decimal)>(&::KID::Model::AgeRangeV2::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9cd331c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRangeV2*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeRangeV2.get_Low
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::KID::Model::AgeRangeV2::*)()>(&::KID::Model::AgeRangeV2::get_Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd335c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRangeV2*>(),
                        {"get_Low", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeRangeV2.set_Low
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::AgeRangeV2::*)(int32_t)>(&::KID::Model::AgeRangeV2::set_Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRangeV2*>(),
                        {"set_Low", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeRangeV2.get_High
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::KID::Model::AgeRangeV2::*)()>(&::KID::Model::AgeRangeV2::get_High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd336c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRangeV2*>(),
                        {"get_High", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeRangeV2.set_High
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::AgeRangeV2::*)(int32_t)>(&::KID::Model::AgeRangeV2::set_High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRangeV2*>(),
                        {"set_High", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeRangeV2.get_Confidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::KID::Model::AgeRangeV2::*)()>(&::KID::Model::AgeRangeV2::get_Confidence)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd337c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRangeV2*>(),
                        {"get_Confidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeRangeV2.set_Confidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::AgeRangeV2::*)(::System::Decimal)>(&::KID::Model::AgeRangeV2::set_Confidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRangeV2*>(),
                        {"set_Confidence", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeRangeV2.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::AgeRangeV2::*)()>(&::KID::Model::AgeRangeV2::ToString)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9cd3390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::AgeRangeV2*>(),
                    {::i2c::class_of<::KID::Model::AgeRangeV2*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeRangeV2.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::AgeRangeV2::*)()>(&::KID::Model::AgeRangeV2::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd3528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::AgeRangeV2*>(),
                    {::i2c::class_of<::KID::Model::AgeRangeV2*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& KID::Model::AgeRangeV2::__cordl_internal_get__Low_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Low_k__BackingField;
}
constexpr int32_t const& KID::Model::AgeRangeV2::__cordl_internal_get__Low_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Low_k__BackingField;
}
constexpr void KID::Model::AgeRangeV2::__cordl_internal_set__Low_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Low_k__BackingField = value;
}
constexpr int32_t& KID::Model::AgeRangeV2::__cordl_internal_get__High_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____High_k__BackingField;
}
constexpr int32_t const& KID::Model::AgeRangeV2::__cordl_internal_get__High_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____High_k__BackingField;
}
constexpr void KID::Model::AgeRangeV2::__cordl_internal_set__High_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____High_k__BackingField = value;
}
constexpr ::System::Decimal& KID::Model::AgeRangeV2::__cordl_internal_get__Confidence_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Confidence_k__BackingField;
}
constexpr ::System::Decimal const& KID::Model::AgeRangeV2::__cordl_internal_get__Confidence_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Confidence_k__BackingField;
}
constexpr void KID::Model::AgeRangeV2::__cordl_internal_set__Confidence_k__BackingField(::System::Decimal  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Confidence_k__BackingField = value;
}
inline void KID::Model::AgeRangeV2::_ctor(int32_t  low, int32_t  high, /* [DecimalConstant(0, 0, 0, 0, 0)] */ ::System::Decimal  confidence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRangeV2*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, low, high, confidence);
}
inline int32_t KID::Model::AgeRangeV2::get_Low()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRangeV2*>(),
                        {"get_Low", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void KID::Model::AgeRangeV2::set_Low(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRangeV2*>(),
                        {"set_Low", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t KID::Model::AgeRangeV2::get_High()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRangeV2*>(),
                        {"get_High", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void KID::Model::AgeRangeV2::set_High(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRangeV2*>(),
                        {"set_High", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Decimal KID::Model::AgeRangeV2::get_Confidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRangeV2*>(),
                        {"get_Confidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline void KID::Model::AgeRangeV2::set_Confidence(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeRangeV2*>(),
                        {"set_Confidence", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::AgeRangeV2::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::AgeRangeV2*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::AgeRangeV2::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::AgeRangeV2*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::KID::Model::AgeRangeV2* KID::Model::AgeRangeV2::New_ctor(int32_t  low, int32_t  high, /* [DecimalConstant(0, 0, 0, 0, 0)] */ ::System::Decimal  confidence)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::AgeRangeV2*>(low, high, confidence));
}
// Ctor Parameters []
constexpr ::KID::Model::AgeRangeV2::AgeRangeV2()   {
}

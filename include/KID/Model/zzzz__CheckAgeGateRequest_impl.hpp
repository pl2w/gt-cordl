#pragma once
// IWYU pragma private; include "KID/Model/CheckAgeGateRequest.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__CheckAgeGateRequest_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::KID::Model::CheckAgeGateRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeGateRequest::*)()>(&::KID::Model::CheckAgeGateRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeGateRequest::*)(::StringW, ::System::DateTime, int32_t)>(&::KID::Model::CheckAgeGateRequest::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9cd4198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateRequest.get_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CheckAgeGateRequest::*)()>(&::KID::Model::CheckAgeGateRequest::get_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateRequest.set_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeGateRequest::*)(::StringW)>(&::KID::Model::CheckAgeGateRequest::set_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateRequest.get_DateOfBirth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::KID::Model::CheckAgeGateRequest::*)()>(&::KID::Model::CheckAgeGateRequest::get_DateOfBirth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                        {"get_DateOfBirth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateRequest.set_DateOfBirth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeGateRequest::*)(::System::DateTime)>(&::KID::Model::CheckAgeGateRequest::set_DateOfBirth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                        {"set_DateOfBirth", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateRequest.get_Age
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::KID::Model::CheckAgeGateRequest::*)()>(&::KID::Model::CheckAgeGateRequest::get_Age)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                        {"get_Age", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateRequest.set_Age
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeGateRequest::*)(int32_t)>(&::KID::Model::CheckAgeGateRequest::set_Age)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                        {"set_Age", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CheckAgeGateRequest::*)()>(&::KID::Model::CheckAgeGateRequest::ToString)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9cd4260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                    {::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeGateRequest.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CheckAgeGateRequest::*)()>(&::KID::Model::CheckAgeGateRequest::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd4434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                    {::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& KID::Model::CheckAgeGateRequest::__cordl_internal_get__Jurisdiction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr ::StringW const& KID::Model::CheckAgeGateRequest::__cordl_internal_get__Jurisdiction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr void KID::Model::CheckAgeGateRequest::__cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Jurisdiction_k__BackingField = value;
}
constexpr ::System::DateTime& KID::Model::CheckAgeGateRequest::__cordl_internal_get__DateOfBirth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateOfBirth_k__BackingField;
}
constexpr ::System::DateTime const& KID::Model::CheckAgeGateRequest::__cordl_internal_get__DateOfBirth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateOfBirth_k__BackingField;
}
constexpr void KID::Model::CheckAgeGateRequest::__cordl_internal_set__DateOfBirth_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DateOfBirth_k__BackingField = value;
}
constexpr int32_t& KID::Model::CheckAgeGateRequest::__cordl_internal_get__Age_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Age_k__BackingField;
}
constexpr int32_t const& KID::Model::CheckAgeGateRequest::__cordl_internal_get__Age_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Age_k__BackingField;
}
constexpr void KID::Model::CheckAgeGateRequest::__cordl_internal_set__Age_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Age_k__BackingField = value;
}
inline void KID::Model::CheckAgeGateRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::CheckAgeGateRequest::_ctor(::StringW  jurisdiction, ::System::DateTime  dateOfBirth, int32_t  age)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jurisdiction, dateOfBirth, age);
}
inline ::StringW KID::Model::CheckAgeGateRequest::get_Jurisdiction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CheckAgeGateRequest::set_Jurisdiction(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime KID::Model::CheckAgeGateRequest::get_DateOfBirth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                        {"get_DateOfBirth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void KID::Model::CheckAgeGateRequest::set_DateOfBirth(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                        {"set_DateOfBirth", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t KID::Model::CheckAgeGateRequest::get_Age()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                        {"get_Age", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void KID::Model::CheckAgeGateRequest::set_Age(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(),
                        {"set_Age", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CheckAgeGateRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::CheckAgeGateRequest::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CheckAgeGateRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::CheckAgeGateRequest* KID::Model::CheckAgeGateRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CheckAgeGateRequest*>());
}
inline ::KID::Model::CheckAgeGateRequest* KID::Model::CheckAgeGateRequest::New_ctor(::StringW  jurisdiction, ::System::DateTime  dateOfBirth, int32_t  age)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CheckAgeGateRequest*>(jurisdiction, dateOfBirth, age));
}
// Ctor Parameters []
constexpr ::KID::Model::CheckAgeGateRequest::CheckAgeGateRequest()   {
}

#pragma once
// IWYU pragma private; include "KID/Model/CreateAgeAssuranceVerificationRequest.hpp"
#include "KID/Model/zzzz__AgeCategory_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__CreateAgeAssuranceVerificationRequest_def.hpp"
#include "KID/Model/zzzz__AgeCategory_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationRequest.get_AgeCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::KID::Model::AgeCategory> (::KID::Model::CreateAgeAssuranceVerificationRequest::*)()>(&::KID::Model::CreateAgeAssuranceVerificationRequest::get_AgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"get_AgeCategory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationRequest.set_AgeCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeAssuranceVerificationRequest::*)(::System::Nullable_1<::KID::Model::AgeCategory>)>(&::KID::Model::CreateAgeAssuranceVerificationRequest::set_AgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"set_AgeCategory", {}, {::i2c::type_of<::System::Nullable_1<::KID::Model::AgeCategory>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeAssuranceVerificationRequest::*)()>(&::KID::Model::CreateAgeAssuranceVerificationRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeAssuranceVerificationRequest::*)(::StringW, ::StringW, ::StringW, int32_t, ::System::Nullable_1<::KID::Model::AgeCategory>, bool)>(&::KID::Model::CreateAgeAssuranceVerificationRequest::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9cd4fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::KID::Model::AgeCategory>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationRequest.get_Email
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAgeAssuranceVerificationRequest::*)()>(&::KID::Model::CreateAgeAssuranceVerificationRequest::get_Email)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd50a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"get_Email", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationRequest.set_Email
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeAssuranceVerificationRequest::*)(::StringW)>(&::KID::Model::CreateAgeAssuranceVerificationRequest::set_Email)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd50ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"set_Email", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationRequest.get_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAgeAssuranceVerificationRequest::*)()>(&::KID::Model::CreateAgeAssuranceVerificationRequest::get_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd50b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationRequest.set_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeAssuranceVerificationRequest::*)(::StringW)>(&::KID::Model::CreateAgeAssuranceVerificationRequest::set_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd50bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationRequest.get_Locale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAgeAssuranceVerificationRequest::*)()>(&::KID::Model::CreateAgeAssuranceVerificationRequest::get_Locale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd50c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"get_Locale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationRequest.set_Locale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeAssuranceVerificationRequest::*)(::StringW)>(&::KID::Model::CreateAgeAssuranceVerificationRequest::set_Locale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd50cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"set_Locale", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationRequest.get_Age
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::KID::Model::CreateAgeAssuranceVerificationRequest::*)()>(&::KID::Model::CreateAgeAssuranceVerificationRequest::get_Age)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd50d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"get_Age", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationRequest.set_Age
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeAssuranceVerificationRequest::*)(int32_t)>(&::KID::Model::CreateAgeAssuranceVerificationRequest::set_Age)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd50dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"set_Age", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationRequest.get_DisableInstructions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::KID::Model::CreateAgeAssuranceVerificationRequest::*)()>(&::KID::Model::CreateAgeAssuranceVerificationRequest::get_DisableInstructions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd50e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"get_DisableInstructions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationRequest.set_DisableInstructions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeAssuranceVerificationRequest::*)(bool)>(&::KID::Model::CreateAgeAssuranceVerificationRequest::set_DisableInstructions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd50ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"set_DisableInstructions", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAgeAssuranceVerificationRequest::*)()>(&::KID::Model::CreateAgeAssuranceVerificationRequest::ToString)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x9cd50f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                    {::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeAssuranceVerificationRequest.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAgeAssuranceVerificationRequest::*)()>(&::KID::Model::CreateAgeAssuranceVerificationRequest::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd5394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                    {::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::KID::Model::AgeCategory>& KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_get__AgeCategory_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeCategory_k__BackingField;
}
constexpr ::System::Nullable_1<::KID::Model::AgeCategory> const& KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_get__AgeCategory_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeCategory_k__BackingField;
}
constexpr void KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_set__AgeCategory_k__BackingField(::System::Nullable_1<::KID::Model::AgeCategory>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AgeCategory_k__BackingField = value;
}
constexpr ::StringW& KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_get__Email_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Email_k__BackingField;
}
constexpr ::StringW const& KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_get__Email_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Email_k__BackingField;
}
constexpr void KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_set__Email_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Email_k__BackingField = value;
}
constexpr ::StringW& KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_get__Jurisdiction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr ::StringW const& KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_get__Jurisdiction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr void KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Jurisdiction_k__BackingField = value;
}
constexpr ::StringW& KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_get__Locale_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Locale_k__BackingField;
}
constexpr ::StringW const& KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_get__Locale_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Locale_k__BackingField;
}
constexpr void KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_set__Locale_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Locale_k__BackingField = value;
}
constexpr int32_t& KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_get__Age_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Age_k__BackingField;
}
constexpr int32_t const& KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_get__Age_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Age_k__BackingField;
}
constexpr void KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_set__Age_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Age_k__BackingField = value;
}
constexpr bool& KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_get__DisableInstructions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableInstructions_k__BackingField;
}
constexpr bool const& KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_get__DisableInstructions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableInstructions_k__BackingField;
}
constexpr void KID::Model::CreateAgeAssuranceVerificationRequest::__cordl_internal_set__DisableInstructions_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisableInstructions_k__BackingField = value;
}
inline ::System::Nullable_1<::KID::Model::AgeCategory> KID::Model::CreateAgeAssuranceVerificationRequest::get_AgeCategory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"get_AgeCategory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::KID::Model::AgeCategory>>(this, ___internal_method);
}
inline void KID::Model::CreateAgeAssuranceVerificationRequest::set_AgeCategory(::System::Nullable_1<::KID::Model::AgeCategory>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"set_AgeCategory", {}, {::i2c::type_of<::System::Nullable_1<::KID::Model::AgeCategory>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void KID::Model::CreateAgeAssuranceVerificationRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::CreateAgeAssuranceVerificationRequest::_ctor(::StringW  email, ::StringW  jurisdiction, ::StringW  locale, int32_t  age, ::System::Nullable_1<::KID::Model::AgeCategory>  ageCategory, bool  disableInstructions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::KID::Model::AgeCategory>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, email, jurisdiction, locale, age, ageCategory, disableInstructions);
}
inline ::StringW KID::Model::CreateAgeAssuranceVerificationRequest::get_Email()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"get_Email", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CreateAgeAssuranceVerificationRequest::set_Email(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"set_Email", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateAgeAssuranceVerificationRequest::get_Jurisdiction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CreateAgeAssuranceVerificationRequest::set_Jurisdiction(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateAgeAssuranceVerificationRequest::get_Locale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"get_Locale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CreateAgeAssuranceVerificationRequest::set_Locale(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"set_Locale", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t KID::Model::CreateAgeAssuranceVerificationRequest::get_Age()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"get_Age", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void KID::Model::CreateAgeAssuranceVerificationRequest::set_Age(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"set_Age", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool KID::Model::CreateAgeAssuranceVerificationRequest::get_DisableInstructions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"get_DisableInstructions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void KID::Model::CreateAgeAssuranceVerificationRequest::set_DisableInstructions(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(),
                        {"set_DisableInstructions", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateAgeAssuranceVerificationRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::CreateAgeAssuranceVerificationRequest::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateAgeAssuranceVerificationRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::CreateAgeAssuranceVerificationRequest* KID::Model::CreateAgeAssuranceVerificationRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateAgeAssuranceVerificationRequest*>());
}
inline ::KID::Model::CreateAgeAssuranceVerificationRequest* KID::Model::CreateAgeAssuranceVerificationRequest::New_ctor(::StringW  email, ::StringW  jurisdiction, ::StringW  locale, int32_t  age, ::System::Nullable_1<::KID::Model::AgeCategory>  ageCategory, bool  disableInstructions)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateAgeAssuranceVerificationRequest*>(email, jurisdiction, locale, age, ageCategory, disableInstructions));
}
// Ctor Parameters []
constexpr ::KID::Model::CreateAgeAssuranceVerificationRequest::CreateAgeAssuranceVerificationRequest()   {
}

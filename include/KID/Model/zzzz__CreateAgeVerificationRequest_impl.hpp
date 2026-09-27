#pragma once
// IWYU pragma private; include "KID/Model/CreateAgeVerificationRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__CreateAgeVerificationRequest_def.hpp"
#include "KID/Model/zzzz__AgeCriteria_def.hpp"
#include "KID/Model/zzzz__VerificationOptions_def.hpp"
#include "KID/Model/zzzz__VerificationSubject_def.hpp"
//  Writing Method size for method: ::KID::Model::CreateAgeVerificationRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeVerificationRequest::*)()>(&::KID::Model::CreateAgeVerificationRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd5698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeVerificationRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeVerificationRequest::*)(::StringW, ::StringW, ::KID::Model::VerificationSubject*, ::KID::Model::AgeCriteria*, ::KID::Model::VerificationOptions*)>(&::KID::Model::CreateAgeVerificationRequest::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9cd56a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::KID::Model::VerificationSubject*>(), ::i2c::type_of<::KID::Model::AgeCriteria*>(), ::i2c::type_of<::KID::Model::VerificationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeVerificationRequest.get_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAgeVerificationRequest::*)()>(&::KID::Model::CreateAgeVerificationRequest::get_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd57a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeVerificationRequest.set_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeVerificationRequest::*)(::StringW)>(&::KID::Model::CreateAgeVerificationRequest::set_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd57a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeVerificationRequest.get_Locale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAgeVerificationRequest::*)()>(&::KID::Model::CreateAgeVerificationRequest::get_Locale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd57b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"get_Locale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeVerificationRequest.set_Locale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeVerificationRequest::*)(::StringW)>(&::KID::Model::CreateAgeVerificationRequest::set_Locale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd57b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"set_Locale", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeVerificationRequest.get_Subject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::VerificationSubject* (::KID::Model::CreateAgeVerificationRequest::*)()>(&::KID::Model::CreateAgeVerificationRequest::get_Subject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd57c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"get_Subject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeVerificationRequest.set_Subject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeVerificationRequest::*)(::KID::Model::VerificationSubject*)>(&::KID::Model::CreateAgeVerificationRequest::set_Subject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd57c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"set_Subject", {}, {::i2c::type_of<::KID::Model::VerificationSubject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeVerificationRequest.get_Criteria
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::AgeCriteria* (::KID::Model::CreateAgeVerificationRequest::*)()>(&::KID::Model::CreateAgeVerificationRequest::get_Criteria)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd57d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"get_Criteria", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeVerificationRequest.set_Criteria
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeVerificationRequest::*)(::KID::Model::AgeCriteria*)>(&::KID::Model::CreateAgeVerificationRequest::set_Criteria)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd57d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"set_Criteria", {}, {::i2c::type_of<::KID::Model::AgeCriteria*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeVerificationRequest.get_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::VerificationOptions* (::KID::Model::CreateAgeVerificationRequest::*)()>(&::KID::Model::CreateAgeVerificationRequest::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd57e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"get_Options", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeVerificationRequest.set_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAgeVerificationRequest::*)(::KID::Model::VerificationOptions*)>(&::KID::Model::CreateAgeVerificationRequest::set_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd57e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"set_Options", {}, {::i2c::type_of<::KID::Model::VerificationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeVerificationRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAgeVerificationRequest::*)()>(&::KID::Model::CreateAgeVerificationRequest::ToString)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x9cd57f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                    {::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAgeVerificationRequest.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAgeVerificationRequest::*)()>(&::KID::Model::CreateAgeVerificationRequest::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd5a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                    {::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& KID::Model::CreateAgeVerificationRequest::__cordl_internal_get__Jurisdiction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr ::StringW const& KID::Model::CreateAgeVerificationRequest::__cordl_internal_get__Jurisdiction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr void KID::Model::CreateAgeVerificationRequest::__cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Jurisdiction_k__BackingField = value;
}
constexpr ::StringW& KID::Model::CreateAgeVerificationRequest::__cordl_internal_get__Locale_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Locale_k__BackingField;
}
constexpr ::StringW const& KID::Model::CreateAgeVerificationRequest::__cordl_internal_get__Locale_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Locale_k__BackingField;
}
constexpr void KID::Model::CreateAgeVerificationRequest::__cordl_internal_set__Locale_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Locale_k__BackingField = value;
}
constexpr ::KID::Model::VerificationSubject*& KID::Model::CreateAgeVerificationRequest::__cordl_internal_get__Subject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Subject_k__BackingField;
}
constexpr ::KID::Model::VerificationSubject* const& KID::Model::CreateAgeVerificationRequest::__cordl_internal_get__Subject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Subject_k__BackingField;
}
constexpr void KID::Model::CreateAgeVerificationRequest::__cordl_internal_set__Subject_k__BackingField(::KID::Model::VerificationSubject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Subject_k__BackingField = value;
}
constexpr ::KID::Model::AgeCriteria*& KID::Model::CreateAgeVerificationRequest::__cordl_internal_get__Criteria_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Criteria_k__BackingField;
}
constexpr ::KID::Model::AgeCriteria* const& KID::Model::CreateAgeVerificationRequest::__cordl_internal_get__Criteria_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Criteria_k__BackingField;
}
constexpr void KID::Model::CreateAgeVerificationRequest::__cordl_internal_set__Criteria_k__BackingField(::KID::Model::AgeCriteria*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Criteria_k__BackingField = value;
}
constexpr ::KID::Model::VerificationOptions*& KID::Model::CreateAgeVerificationRequest::__cordl_internal_get__Options_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Options_k__BackingField;
}
constexpr ::KID::Model::VerificationOptions* const& KID::Model::CreateAgeVerificationRequest::__cordl_internal_get__Options_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Options_k__BackingField;
}
constexpr void KID::Model::CreateAgeVerificationRequest::__cordl_internal_set__Options_k__BackingField(::KID::Model::VerificationOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Options_k__BackingField = value;
}
inline void KID::Model::CreateAgeVerificationRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::CreateAgeVerificationRequest::_ctor(::StringW  jurisdiction, ::StringW  locale, ::KID::Model::VerificationSubject*  subject, ::KID::Model::AgeCriteria*  criteria, ::KID::Model::VerificationOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::KID::Model::VerificationSubject*>(), ::i2c::type_of<::KID::Model::AgeCriteria*>(), ::i2c::type_of<::KID::Model::VerificationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jurisdiction, locale, subject, criteria, options);
}
inline ::StringW KID::Model::CreateAgeVerificationRequest::get_Jurisdiction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CreateAgeVerificationRequest::set_Jurisdiction(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateAgeVerificationRequest::get_Locale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"get_Locale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CreateAgeVerificationRequest::set_Locale(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"set_Locale", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::VerificationSubject* KID::Model::CreateAgeVerificationRequest::get_Subject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"get_Subject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::VerificationSubject*>(this, ___internal_method);
}
inline void KID::Model::CreateAgeVerificationRequest::set_Subject(::KID::Model::VerificationSubject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"set_Subject", {}, {::i2c::type_of<::KID::Model::VerificationSubject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::AgeCriteria* KID::Model::CreateAgeVerificationRequest::get_Criteria()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"get_Criteria", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::AgeCriteria*>(this, ___internal_method);
}
inline void KID::Model::CreateAgeVerificationRequest::set_Criteria(::KID::Model::AgeCriteria*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"set_Criteria", {}, {::i2c::type_of<::KID::Model::AgeCriteria*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::VerificationOptions* KID::Model::CreateAgeVerificationRequest::get_Options()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"get_Options", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::VerificationOptions*>(this, ___internal_method);
}
inline void KID::Model::CreateAgeVerificationRequest::set_Options(::KID::Model::VerificationOptions*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(),
                        {"set_Options", {}, {::i2c::type_of<::KID::Model::VerificationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateAgeVerificationRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::CreateAgeVerificationRequest::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateAgeVerificationRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::CreateAgeVerificationRequest* KID::Model::CreateAgeVerificationRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateAgeVerificationRequest*>());
}
inline ::KID::Model::CreateAgeVerificationRequest* KID::Model::CreateAgeVerificationRequest::New_ctor(::StringW  jurisdiction, ::StringW  locale, ::KID::Model::VerificationSubject*  subject, ::KID::Model::AgeCriteria*  criteria, ::KID::Model::VerificationOptions*  options)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateAgeVerificationRequest*>(jurisdiction, locale, subject, criteria, options));
}
// Ctor Parameters []
constexpr ::KID::Model::CreateAgeVerificationRequest::CreateAgeVerificationRequest()   {
}

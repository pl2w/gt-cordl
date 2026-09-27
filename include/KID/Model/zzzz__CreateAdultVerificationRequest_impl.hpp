#pragma once
// IWYU pragma private; include "KID/Model/CreateAdultVerificationRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__CreateAdultVerificationRequest_def.hpp"
#include "KID/Model/zzzz__VerificationMethod_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::KID::Model::CreateAdultVerificationRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAdultVerificationRequest::*)()>(&::KID::Model::CreateAdultVerificationRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd49ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAdultVerificationRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAdultVerificationRequest::*)(::StringW, ::StringW, ::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*, ::StringW)>(&::KID::Model::CreateAdultVerificationRequest::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9cd49b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAdultVerificationRequest.get_Email
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAdultVerificationRequest::*)()>(&::KID::Model::CreateAdultVerificationRequest::get_Email)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {"get_Email", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAdultVerificationRequest.set_Email
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAdultVerificationRequest::*)(::StringW)>(&::KID::Model::CreateAdultVerificationRequest::set_Email)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {"set_Email", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAdultVerificationRequest.get_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAdultVerificationRequest::*)()>(&::KID::Model::CreateAdultVerificationRequest::get_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAdultVerificationRequest.set_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAdultVerificationRequest::*)(::StringW)>(&::KID::Model::CreateAdultVerificationRequest::set_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAdultVerificationRequest.get_AllowedMethods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>* (::KID::Model::CreateAdultVerificationRequest::*)()>(&::KID::Model::CreateAdultVerificationRequest::get_AllowedMethods)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {"get_AllowedMethods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAdultVerificationRequest.set_AllowedMethods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAdultVerificationRequest::*)(::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*)>(&::KID::Model::CreateAdultVerificationRequest::set_AllowedMethods)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {"set_AllowedMethods", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAdultVerificationRequest.get_Locale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAdultVerificationRequest::*)()>(&::KID::Model::CreateAdultVerificationRequest::get_Locale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {"get_Locale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAdultVerificationRequest.set_Locale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateAdultVerificationRequest::*)(::StringW)>(&::KID::Model::CreateAdultVerificationRequest::set_Locale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {"set_Locale", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAdultVerificationRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAdultVerificationRequest::*)()>(&::KID::Model::CreateAdultVerificationRequest::ToString)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x9cd4ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                    {::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateAdultVerificationRequest.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateAdultVerificationRequest::*)()>(&::KID::Model::CreateAdultVerificationRequest::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd4cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                    {::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& KID::Model::CreateAdultVerificationRequest::__cordl_internal_get__Email_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Email_k__BackingField;
}
constexpr ::StringW const& KID::Model::CreateAdultVerificationRequest::__cordl_internal_get__Email_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Email_k__BackingField;
}
constexpr void KID::Model::CreateAdultVerificationRequest::__cordl_internal_set__Email_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Email_k__BackingField = value;
}
constexpr ::StringW& KID::Model::CreateAdultVerificationRequest::__cordl_internal_get__Jurisdiction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr ::StringW const& KID::Model::CreateAdultVerificationRequest::__cordl_internal_get__Jurisdiction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr void KID::Model::CreateAdultVerificationRequest::__cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Jurisdiction_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*& KID::Model::CreateAdultVerificationRequest::__cordl_internal_get__AllowedMethods_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowedMethods_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>* const& KID::Model::CreateAdultVerificationRequest::__cordl_internal_get__AllowedMethods_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowedMethods_k__BackingField;
}
constexpr void KID::Model::CreateAdultVerificationRequest::__cordl_internal_set__AllowedMethods_k__BackingField(::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllowedMethods_k__BackingField = value;
}
constexpr ::StringW& KID::Model::CreateAdultVerificationRequest::__cordl_internal_get__Locale_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Locale_k__BackingField;
}
constexpr ::StringW const& KID::Model::CreateAdultVerificationRequest::__cordl_internal_get__Locale_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Locale_k__BackingField;
}
constexpr void KID::Model::CreateAdultVerificationRequest::__cordl_internal_set__Locale_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Locale_k__BackingField = value;
}
inline void KID::Model::CreateAdultVerificationRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::CreateAdultVerificationRequest::_ctor(::StringW  email, ::StringW  jurisdiction, ::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*  allowedMethods, ::StringW  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, email, jurisdiction, allowedMethods, locale);
}
inline ::StringW KID::Model::CreateAdultVerificationRequest::get_Email()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {"get_Email", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CreateAdultVerificationRequest::set_Email(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {"set_Email", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateAdultVerificationRequest::get_Jurisdiction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CreateAdultVerificationRequest::set_Jurisdiction(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>* KID::Model::CreateAdultVerificationRequest::get_AllowedMethods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {"get_AllowedMethods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*>(this, ___internal_method);
}
inline void KID::Model::CreateAdultVerificationRequest::set_AllowedMethods(::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {"set_AllowedMethods", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateAdultVerificationRequest::get_Locale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {"get_Locale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CreateAdultVerificationRequest::set_Locale(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(),
                        {"set_Locale", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateAdultVerificationRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::CreateAdultVerificationRequest::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateAdultVerificationRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::CreateAdultVerificationRequest* KID::Model::CreateAdultVerificationRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateAdultVerificationRequest*>());
}
inline ::KID::Model::CreateAdultVerificationRequest* KID::Model::CreateAdultVerificationRequest::New_ctor(::StringW  email, ::StringW  jurisdiction, ::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*  allowedMethods, ::StringW  locale)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateAdultVerificationRequest*>(email, jurisdiction, allowedMethods, locale));
}
// Ctor Parameters []
constexpr ::KID::Model::CreateAdultVerificationRequest::CreateAdultVerificationRequest()   {
}

#pragma once
// IWYU pragma private; include "KID/Model/CreateCustomAgeVerificationRequest.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__CreateCustomAgeVerificationRequest_def.hpp"
#include "KID/Model/zzzz__AgeCriteria_def.hpp"
#include "KID/Model/zzzz__VerificationSubject_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::CreateCustomAgeVerificationRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateCustomAgeVerificationRequest::*)()>(&::KID::Model::CreateCustomAgeVerificationRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd5f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateCustomAgeVerificationRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateCustomAgeVerificationRequest::*)(::System::Guid, ::StringW, ::KID::Model::VerificationSubject*, ::KID::Model::AgeCriteria*)>(&::KID::Model::CreateCustomAgeVerificationRequest::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9cd5f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::KID::Model::VerificationSubject*>(), ::i2c::type_of<::KID::Model::AgeCriteria*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateCustomAgeVerificationRequest.get_ScenarioId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::CreateCustomAgeVerificationRequest::*)()>(&::KID::Model::CreateCustomAgeVerificationRequest::get_ScenarioId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd5ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {"get_ScenarioId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateCustomAgeVerificationRequest.set_ScenarioId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateCustomAgeVerificationRequest::*)(::System::Guid)>(&::KID::Model::CreateCustomAgeVerificationRequest::set_ScenarioId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {"set_ScenarioId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateCustomAgeVerificationRequest.get_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateCustomAgeVerificationRequest::*)()>(&::KID::Model::CreateCustomAgeVerificationRequest::get_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd600c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateCustomAgeVerificationRequest.set_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateCustomAgeVerificationRequest::*)(::StringW)>(&::KID::Model::CreateCustomAgeVerificationRequest::set_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateCustomAgeVerificationRequest.get_Subject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::VerificationSubject* (::KID::Model::CreateCustomAgeVerificationRequest::*)()>(&::KID::Model::CreateCustomAgeVerificationRequest::get_Subject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd601c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {"get_Subject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateCustomAgeVerificationRequest.set_Subject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateCustomAgeVerificationRequest::*)(::KID::Model::VerificationSubject*)>(&::KID::Model::CreateCustomAgeVerificationRequest::set_Subject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {"set_Subject", {}, {::i2c::type_of<::KID::Model::VerificationSubject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateCustomAgeVerificationRequest.get_Criteria
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::AgeCriteria* (::KID::Model::CreateCustomAgeVerificationRequest::*)()>(&::KID::Model::CreateCustomAgeVerificationRequest::get_Criteria)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd602c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {"get_Criteria", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateCustomAgeVerificationRequest.set_Criteria
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateCustomAgeVerificationRequest::*)(::KID::Model::AgeCriteria*)>(&::KID::Model::CreateCustomAgeVerificationRequest::set_Criteria)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {"set_Criteria", {}, {::i2c::type_of<::KID::Model::AgeCriteria*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateCustomAgeVerificationRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateCustomAgeVerificationRequest::*)()>(&::KID::Model::CreateCustomAgeVerificationRequest::ToString)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x9cd603c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                    {::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateCustomAgeVerificationRequest.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateCustomAgeVerificationRequest::*)()>(&::KID::Model::CreateCustomAgeVerificationRequest::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd6254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                    {::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Guid& KID::Model::CreateCustomAgeVerificationRequest::__cordl_internal_get__ScenarioId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScenarioId_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::CreateCustomAgeVerificationRequest::__cordl_internal_get__ScenarioId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScenarioId_k__BackingField;
}
constexpr void KID::Model::CreateCustomAgeVerificationRequest::__cordl_internal_set__ScenarioId_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScenarioId_k__BackingField = value;
}
constexpr ::StringW& KID::Model::CreateCustomAgeVerificationRequest::__cordl_internal_get__Jurisdiction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr ::StringW const& KID::Model::CreateCustomAgeVerificationRequest::__cordl_internal_get__Jurisdiction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr void KID::Model::CreateCustomAgeVerificationRequest::__cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Jurisdiction_k__BackingField = value;
}
constexpr ::KID::Model::VerificationSubject*& KID::Model::CreateCustomAgeVerificationRequest::__cordl_internal_get__Subject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Subject_k__BackingField;
}
constexpr ::KID::Model::VerificationSubject* const& KID::Model::CreateCustomAgeVerificationRequest::__cordl_internal_get__Subject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Subject_k__BackingField;
}
constexpr void KID::Model::CreateCustomAgeVerificationRequest::__cordl_internal_set__Subject_k__BackingField(::KID::Model::VerificationSubject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Subject_k__BackingField = value;
}
constexpr ::KID::Model::AgeCriteria*& KID::Model::CreateCustomAgeVerificationRequest::__cordl_internal_get__Criteria_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Criteria_k__BackingField;
}
constexpr ::KID::Model::AgeCriteria* const& KID::Model::CreateCustomAgeVerificationRequest::__cordl_internal_get__Criteria_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Criteria_k__BackingField;
}
constexpr void KID::Model::CreateCustomAgeVerificationRequest::__cordl_internal_set__Criteria_k__BackingField(::KID::Model::AgeCriteria*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Criteria_k__BackingField = value;
}
inline void KID::Model::CreateCustomAgeVerificationRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::CreateCustomAgeVerificationRequest::_ctor(::System::Guid  scenarioId, ::StringW  jurisdiction, ::KID::Model::VerificationSubject*  subject, ::KID::Model::AgeCriteria*  criteria)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::KID::Model::VerificationSubject*>(), ::i2c::type_of<::KID::Model::AgeCriteria*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scenarioId, jurisdiction, subject, criteria);
}
inline ::System::Guid KID::Model::CreateCustomAgeVerificationRequest::get_ScenarioId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {"get_ScenarioId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::CreateCustomAgeVerificationRequest::set_ScenarioId(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {"set_ScenarioId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateCustomAgeVerificationRequest::get_Jurisdiction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CreateCustomAgeVerificationRequest::set_Jurisdiction(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::VerificationSubject* KID::Model::CreateCustomAgeVerificationRequest::get_Subject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {"get_Subject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::VerificationSubject*>(this, ___internal_method);
}
inline void KID::Model::CreateCustomAgeVerificationRequest::set_Subject(::KID::Model::VerificationSubject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {"set_Subject", {}, {::i2c::type_of<::KID::Model::VerificationSubject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::AgeCriteria* KID::Model::CreateCustomAgeVerificationRequest::get_Criteria()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {"get_Criteria", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::AgeCriteria*>(this, ___internal_method);
}
inline void KID::Model::CreateCustomAgeVerificationRequest::set_Criteria(::KID::Model::AgeCriteria*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(),
                        {"set_Criteria", {}, {::i2c::type_of<::KID::Model::AgeCriteria*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateCustomAgeVerificationRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::CreateCustomAgeVerificationRequest::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateCustomAgeVerificationRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::CreateCustomAgeVerificationRequest* KID::Model::CreateCustomAgeVerificationRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateCustomAgeVerificationRequest*>());
}
inline ::KID::Model::CreateCustomAgeVerificationRequest* KID::Model::CreateCustomAgeVerificationRequest::New_ctor(::System::Guid  scenarioId, ::StringW  jurisdiction, ::KID::Model::VerificationSubject*  subject, ::KID::Model::AgeCriteria*  criteria)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateCustomAgeVerificationRequest*>(scenarioId, jurisdiction, subject, criteria));
}
// Ctor Parameters []
constexpr ::KID::Model::CreateCustomAgeVerificationRequest::CreateCustomAgeVerificationRequest()   {
}

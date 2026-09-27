#pragma once
// IWYU pragma private; include "KID/Model/CreateVerificationRequest.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__CreateVerificationRequest_def.hpp"
#include "KID/Model/zzzz__AgeCriteria_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::CreateVerificationRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateVerificationRequest::*)()>(&::KID::Model::CreateVerificationRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateVerificationRequest::*)(::System::Guid, ::StringW, ::StringW, ::KID::Model::AgeCriteria*, ::System::DateTime, int32_t)>(&::KID::Model::CreateVerificationRequest::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9cd6808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::KID::Model::AgeCriteria*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationRequest.get_ScenarioId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::CreateVerificationRequest::*)()>(&::KID::Model::CreateVerificationRequest::get_ScenarioId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd68e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"get_ScenarioId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationRequest.set_ScenarioId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateVerificationRequest::*)(::System::Guid)>(&::KID::Model::CreateVerificationRequest::set_ScenarioId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd68f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"set_ScenarioId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationRequest.get_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateVerificationRequest::*)()>(&::KID::Model::CreateVerificationRequest::get_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd68f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationRequest.set_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateVerificationRequest::*)(::StringW)>(&::KID::Model::CreateVerificationRequest::set_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationRequest.get_Email
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateVerificationRequest::*)()>(&::KID::Model::CreateVerificationRequest::get_Email)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"get_Email", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationRequest.set_Email
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateVerificationRequest::*)(::StringW)>(&::KID::Model::CreateVerificationRequest::set_Email)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"set_Email", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationRequest.get_Criteria
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::AgeCriteria* (::KID::Model::CreateVerificationRequest::*)()>(&::KID::Model::CreateVerificationRequest::get_Criteria)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"get_Criteria", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationRequest.set_Criteria
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateVerificationRequest::*)(::KID::Model::AgeCriteria*)>(&::KID::Model::CreateVerificationRequest::set_Criteria)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"set_Criteria", {}, {::i2c::type_of<::KID::Model::AgeCriteria*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationRequest.get_ClaimedDateOfBirth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::KID::Model::CreateVerificationRequest::*)()>(&::KID::Model::CreateVerificationRequest::get_ClaimedDateOfBirth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"get_ClaimedDateOfBirth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationRequest.set_ClaimedDateOfBirth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateVerificationRequest::*)(::System::DateTime)>(&::KID::Model::CreateVerificationRequest::set_ClaimedDateOfBirth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"set_ClaimedDateOfBirth", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationRequest.get_ClaimedAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::KID::Model::CreateVerificationRequest::*)()>(&::KID::Model::CreateVerificationRequest::get_ClaimedAge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"get_ClaimedAge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationRequest.set_ClaimedAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CreateVerificationRequest::*)(int32_t)>(&::KID::Model::CreateVerificationRequest::set_ClaimedAge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd6940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"set_ClaimedAge", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateVerificationRequest::*)()>(&::KID::Model::CreateVerificationRequest::ToString)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x9cd6948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                    {::i2c::class_of<::KID::Model::CreateVerificationRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CreateVerificationRequest.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CreateVerificationRequest::*)()>(&::KID::Model::CreateVerificationRequest::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd6c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                    {::i2c::class_of<::KID::Model::CreateVerificationRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Guid& KID::Model::CreateVerificationRequest::__cordl_internal_get__ScenarioId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScenarioId_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::CreateVerificationRequest::__cordl_internal_get__ScenarioId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScenarioId_k__BackingField;
}
constexpr void KID::Model::CreateVerificationRequest::__cordl_internal_set__ScenarioId_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScenarioId_k__BackingField = value;
}
constexpr ::StringW& KID::Model::CreateVerificationRequest::__cordl_internal_get__Jurisdiction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr ::StringW const& KID::Model::CreateVerificationRequest::__cordl_internal_get__Jurisdiction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr void KID::Model::CreateVerificationRequest::__cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Jurisdiction_k__BackingField = value;
}
constexpr ::StringW& KID::Model::CreateVerificationRequest::__cordl_internal_get__Email_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Email_k__BackingField;
}
constexpr ::StringW const& KID::Model::CreateVerificationRequest::__cordl_internal_get__Email_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Email_k__BackingField;
}
constexpr void KID::Model::CreateVerificationRequest::__cordl_internal_set__Email_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Email_k__BackingField = value;
}
constexpr ::KID::Model::AgeCriteria*& KID::Model::CreateVerificationRequest::__cordl_internal_get__Criteria_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Criteria_k__BackingField;
}
constexpr ::KID::Model::AgeCriteria* const& KID::Model::CreateVerificationRequest::__cordl_internal_get__Criteria_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Criteria_k__BackingField;
}
constexpr void KID::Model::CreateVerificationRequest::__cordl_internal_set__Criteria_k__BackingField(::KID::Model::AgeCriteria*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Criteria_k__BackingField = value;
}
constexpr ::System::DateTime& KID::Model::CreateVerificationRequest::__cordl_internal_get__ClaimedDateOfBirth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClaimedDateOfBirth_k__BackingField;
}
constexpr ::System::DateTime const& KID::Model::CreateVerificationRequest::__cordl_internal_get__ClaimedDateOfBirth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClaimedDateOfBirth_k__BackingField;
}
constexpr void KID::Model::CreateVerificationRequest::__cordl_internal_set__ClaimedDateOfBirth_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClaimedDateOfBirth_k__BackingField = value;
}
constexpr int32_t& KID::Model::CreateVerificationRequest::__cordl_internal_get__ClaimedAge_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClaimedAge_k__BackingField;
}
constexpr int32_t const& KID::Model::CreateVerificationRequest::__cordl_internal_get__ClaimedAge_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClaimedAge_k__BackingField;
}
constexpr void KID::Model::CreateVerificationRequest::__cordl_internal_set__ClaimedAge_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClaimedAge_k__BackingField = value;
}
inline void KID::Model::CreateVerificationRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::CreateVerificationRequest::_ctor(::System::Guid  scenarioId, ::StringW  jurisdiction, ::StringW  email, ::KID::Model::AgeCriteria*  criteria, ::System::DateTime  claimedDateOfBirth, int32_t  claimedAge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::KID::Model::AgeCriteria*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scenarioId, jurisdiction, email, criteria, claimedDateOfBirth, claimedAge);
}
inline ::System::Guid KID::Model::CreateVerificationRequest::get_ScenarioId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"get_ScenarioId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::CreateVerificationRequest::set_ScenarioId(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"set_ScenarioId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateVerificationRequest::get_Jurisdiction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CreateVerificationRequest::set_Jurisdiction(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateVerificationRequest::get_Email()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"get_Email", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CreateVerificationRequest::set_Email(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"set_Email", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::AgeCriteria* KID::Model::CreateVerificationRequest::get_Criteria()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"get_Criteria", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::AgeCriteria*>(this, ___internal_method);
}
inline void KID::Model::CreateVerificationRequest::set_Criteria(::KID::Model::AgeCriteria*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"set_Criteria", {}, {::i2c::type_of<::KID::Model::AgeCriteria*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime KID::Model::CreateVerificationRequest::get_ClaimedDateOfBirth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"get_ClaimedDateOfBirth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void KID::Model::CreateVerificationRequest::set_ClaimedDateOfBirth(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"set_ClaimedDateOfBirth", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t KID::Model::CreateVerificationRequest::get_ClaimedAge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"get_ClaimedAge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void KID::Model::CreateVerificationRequest::set_ClaimedAge(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CreateVerificationRequest*>(),
                        {"set_ClaimedAge", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CreateVerificationRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateVerificationRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::CreateVerificationRequest::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CreateVerificationRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::CreateVerificationRequest* KID::Model::CreateVerificationRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateVerificationRequest*>());
}
inline ::KID::Model::CreateVerificationRequest* KID::Model::CreateVerificationRequest::New_ctor(::System::Guid  scenarioId, ::StringW  jurisdiction, ::StringW  email, ::KID::Model::AgeCriteria*  criteria, ::System::DateTime  claimedDateOfBirth, int32_t  claimedAge)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CreateVerificationRequest*>(scenarioId, jurisdiction, email, criteria, claimedDateOfBirth, claimedAge));
}
// Ctor Parameters []
constexpr ::KID::Model::CreateVerificationRequest::CreateVerificationRequest()   {
}

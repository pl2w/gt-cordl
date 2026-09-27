#pragma once
// IWYU pragma private; include "KID/Model/GetAgeAssuranceVerificationRequestStatusResponse.hpp"
#include "KID/Model/zzzz__VerificationStatus_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__GetAgeAssuranceVerificationRequestStatusResponse_def.hpp"
#include "KID/Model/zzzz__AgeRange_def.hpp"
#include "KID/Model/zzzz__VerificationStatus_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::VerificationStatus (::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::*)()>(&::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd768c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse.set_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::*)(::KID::Model::VerificationStatus)>(&::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd7694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::KID::Model::VerificationStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::*)()>(&::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd769c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::*)(::System::Guid, ::KID::Model::VerificationStatus, ::KID::Model::AgeRange*)>(&::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9cd76a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::KID::Model::VerificationStatus>(), ::i2c::type_of<::KID::Model::AgeRange*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::*)()>(&::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::get_Id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cd76f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse.set_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::*)(::System::Guid)>(&::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::set_Id)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd7704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                        {"set_Id", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse.get_AgeRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::AgeRange* (::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::*)()>(&::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::get_AgeRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd7710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                        {"get_AgeRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse.set_AgeRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::*)(::KID::Model::AgeRange*)>(&::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::set_AgeRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd7718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                        {"set_AgeRange", {}, {::i2c::type_of<::KID::Model::AgeRange*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::*)()>(&::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::ToString)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9cd7720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                    {::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::*)()>(&::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd7924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                    {::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::KID::Model::VerificationStatus& KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::__cordl_internal_get__Status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr ::KID::Model::VerificationStatus const& KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::__cordl_internal_get__Status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr void KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::__cordl_internal_set__Status_k__BackingField(::KID::Model::VerificationStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Status_k__BackingField = value;
}
constexpr ::System::Guid& KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::__cordl_internal_get__Id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::__cordl_internal_get__Id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr void KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::__cordl_internal_set__Id_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Id_k__BackingField = value;
}
constexpr ::KID::Model::AgeRange*& KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::__cordl_internal_get__AgeRange_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeRange_k__BackingField;
}
constexpr ::KID::Model::AgeRange* const& KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::__cordl_internal_get__AgeRange_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeRange_k__BackingField;
}
constexpr void KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::__cordl_internal_set__AgeRange_k__BackingField(::KID::Model::AgeRange*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AgeRange_k__BackingField = value;
}
inline ::KID::Model::VerificationStatus KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::VerificationStatus>(this, ___internal_method);
}
inline void KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::set_Status(::KID::Model::VerificationStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::KID::Model::VerificationStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::_ctor(::System::Guid  id, ::KID::Model::VerificationStatus  status, ::KID::Model::AgeRange*  ageRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::KID::Model::VerificationStatus>(), ::i2c::type_of<::KID::Model::AgeRange*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, status, ageRange);
}
inline ::System::Guid KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::set_Id(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                        {"set_Id", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::AgeRange* KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::get_AgeRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                        {"get_AgeRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::AgeRange*>(this, ___internal_method);
}
inline void KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::set_AgeRange(::KID::Model::AgeRange*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(),
                        {"set_AgeRange", {}, {::i2c::type_of<::KID::Model::AgeRange*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse* KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>());
}
inline ::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse* KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::New_ctor(::System::Guid  id, ::KID::Model::VerificationStatus  status, ::KID::Model::AgeRange*  ageRange)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse*>(id, status, ageRange));
}
// Ctor Parameters []
constexpr ::KID::Model::GetAgeAssuranceVerificationRequestStatusResponse::GetAgeAssuranceVerificationRequestStatusResponse()   {
}

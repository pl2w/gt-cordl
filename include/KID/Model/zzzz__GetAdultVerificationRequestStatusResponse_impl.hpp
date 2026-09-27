#pragma once
// IWYU pragma private; include "KID/Model/GetAdultVerificationRequestStatusResponse.hpp"
#include "KID/Model/zzzz__VerificationStatus_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__GetAdultVerificationRequestStatusResponse_def.hpp"
#include "KID/Model/zzzz__AgeRange_def.hpp"
#include "KID/Model/zzzz__VerificationStatus_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::GetAdultVerificationRequestStatusResponse.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::VerificationStatus (::KID::Model::GetAdultVerificationRequestStatusResponse::*)()>(&::KID::Model::GetAdultVerificationRequestStatusResponse::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd7398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAdultVerificationRequestStatusResponse.set_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAdultVerificationRequestStatusResponse::*)(::KID::Model::VerificationStatus)>(&::KID::Model::GetAdultVerificationRequestStatusResponse::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd73a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::KID::Model::VerificationStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAdultVerificationRequestStatusResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAdultVerificationRequestStatusResponse::*)()>(&::KID::Model::GetAdultVerificationRequestStatusResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd73a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAdultVerificationRequestStatusResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAdultVerificationRequestStatusResponse::*)(::System::Guid, ::KID::Model::VerificationStatus, ::KID::Model::AgeRange*)>(&::KID::Model::GetAdultVerificationRequestStatusResponse::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9cd73b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::KID::Model::VerificationStatus>(), ::i2c::type_of<::KID::Model::AgeRange*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAdultVerificationRequestStatusResponse.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::GetAdultVerificationRequestStatusResponse::*)()>(&::KID::Model::GetAdultVerificationRequestStatusResponse::get_Id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cd7400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAdultVerificationRequestStatusResponse.set_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAdultVerificationRequestStatusResponse::*)(::System::Guid)>(&::KID::Model::GetAdultVerificationRequestStatusResponse::set_Id)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                        {"set_Id", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAdultVerificationRequestStatusResponse.get_AgeRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::AgeRange* (::KID::Model::GetAdultVerificationRequestStatusResponse::*)()>(&::KID::Model::GetAdultVerificationRequestStatusResponse::get_AgeRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd741c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                        {"get_AgeRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAdultVerificationRequestStatusResponse.set_AgeRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAdultVerificationRequestStatusResponse::*)(::KID::Model::AgeRange*)>(&::KID::Model::GetAdultVerificationRequestStatusResponse::set_AgeRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd7424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                        {"set_AgeRange", {}, {::i2c::type_of<::KID::Model::AgeRange*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAdultVerificationRequestStatusResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GetAdultVerificationRequestStatusResponse::*)()>(&::KID::Model::GetAdultVerificationRequestStatusResponse::ToString)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9cd742c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                    {::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAdultVerificationRequestStatusResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GetAdultVerificationRequestStatusResponse::*)()>(&::KID::Model::GetAdultVerificationRequestStatusResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd7630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                    {::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::KID::Model::VerificationStatus& KID::Model::GetAdultVerificationRequestStatusResponse::__cordl_internal_get__Status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr ::KID::Model::VerificationStatus const& KID::Model::GetAdultVerificationRequestStatusResponse::__cordl_internal_get__Status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr void KID::Model::GetAdultVerificationRequestStatusResponse::__cordl_internal_set__Status_k__BackingField(::KID::Model::VerificationStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Status_k__BackingField = value;
}
constexpr ::System::Guid& KID::Model::GetAdultVerificationRequestStatusResponse::__cordl_internal_get__Id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::GetAdultVerificationRequestStatusResponse::__cordl_internal_get__Id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr void KID::Model::GetAdultVerificationRequestStatusResponse::__cordl_internal_set__Id_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Id_k__BackingField = value;
}
constexpr ::KID::Model::AgeRange*& KID::Model::GetAdultVerificationRequestStatusResponse::__cordl_internal_get__AgeRange_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeRange_k__BackingField;
}
constexpr ::KID::Model::AgeRange* const& KID::Model::GetAdultVerificationRequestStatusResponse::__cordl_internal_get__AgeRange_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeRange_k__BackingField;
}
constexpr void KID::Model::GetAdultVerificationRequestStatusResponse::__cordl_internal_set__AgeRange_k__BackingField(::KID::Model::AgeRange*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AgeRange_k__BackingField = value;
}
inline ::KID::Model::VerificationStatus KID::Model::GetAdultVerificationRequestStatusResponse::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::VerificationStatus>(this, ___internal_method);
}
inline void KID::Model::GetAdultVerificationRequestStatusResponse::set_Status(::KID::Model::VerificationStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::KID::Model::VerificationStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void KID::Model::GetAdultVerificationRequestStatusResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::GetAdultVerificationRequestStatusResponse::_ctor(::System::Guid  id, ::KID::Model::VerificationStatus  status, ::KID::Model::AgeRange*  ageRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::KID::Model::VerificationStatus>(), ::i2c::type_of<::KID::Model::AgeRange*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, status, ageRange);
}
inline ::System::Guid KID::Model::GetAdultVerificationRequestStatusResponse::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::GetAdultVerificationRequestStatusResponse::set_Id(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                        {"set_Id", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::AgeRange* KID::Model::GetAdultVerificationRequestStatusResponse::get_AgeRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                        {"get_AgeRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::AgeRange*>(this, ___internal_method);
}
inline void KID::Model::GetAdultVerificationRequestStatusResponse::set_AgeRange(::KID::Model::AgeRange*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(),
                        {"set_AgeRange", {}, {::i2c::type_of<::KID::Model::AgeRange*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::GetAdultVerificationRequestStatusResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::GetAdultVerificationRequestStatusResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::GetAdultVerificationRequestStatusResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::GetAdultVerificationRequestStatusResponse* KID::Model::GetAdultVerificationRequestStatusResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::GetAdultVerificationRequestStatusResponse*>());
}
inline ::KID::Model::GetAdultVerificationRequestStatusResponse* KID::Model::GetAdultVerificationRequestStatusResponse::New_ctor(::System::Guid  id, ::KID::Model::VerificationStatus  status, ::KID::Model::AgeRange*  ageRange)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::GetAdultVerificationRequestStatusResponse*>(id, status, ageRange));
}
// Ctor Parameters []
constexpr ::KID::Model::GetAdultVerificationRequestStatusResponse::GetAdultVerificationRequestStatusResponse()   {
}

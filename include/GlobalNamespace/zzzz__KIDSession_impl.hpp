#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDSession.hpp"
#include "GlobalNamespace/zzzz__GTAgeStatusType_impl.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__KIDSession_def.hpp"
#include "GlobalNamespace/zzzz__GTAgeStatusType_def.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
#include "KID/Model/zzzz__Permission_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDSession.get_SessionStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SessionStatus (::GlobalNamespace::KIDSession::*)()>(&::GlobalNamespace::KIDSession::get_SessionStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2614c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"get_SessionStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDSession.set_SessionStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDSession::*)(::GlobalNamespace::SessionStatus)>(&::GlobalNamespace::KIDSession::set_SessionStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"set_SessionStatus", {}, {::i2c::type_of<::GlobalNamespace::SessionStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDSession.get_AgeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTAgeStatusType (::GlobalNamespace::KIDSession::*)()>(&::GlobalNamespace::KIDSession::get_AgeStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2615c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"get_AgeStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDSession.set_AgeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDSession::*)(::GlobalNamespace::GTAgeStatusType)>(&::GlobalNamespace::KIDSession::set_AgeStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"set_AgeStatus", {}, {::i2c::type_of<::GlobalNamespace::GTAgeStatusType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDSession.get_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::GlobalNamespace::KIDSession::*)()>(&::GlobalNamespace::KIDSession::get_SessionId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a2616c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"get_SessionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDSession.set_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDSession::*)(::System::Guid)>(&::GlobalNamespace::KIDSession::set_SessionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"set_SessionId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDSession.get_KUID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::KIDSession::*)()>(&::GlobalNamespace::KIDSession::get_KUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"get_KUID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDSession.set_KUID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDSession::*)(::StringW)>(&::GlobalNamespace::KIDSession::set_KUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"set_KUID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDSession.get_etag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::KIDSession::*)()>(&::GlobalNamespace::KIDSession::get_etag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"get_etag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDSession.set_etag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDSession::*)(::StringW)>(&::GlobalNamespace::KIDSession::set_etag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"set_etag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDSession.get_Permissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::KID::Model::Permission*>* (::GlobalNamespace::KIDSession::*)()>(&::GlobalNamespace::KIDSession::get_Permissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a261a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"get_Permissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDSession.set_Permissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDSession::*)(::System::Collections::Generic::List_1<::KID::Model::Permission*>*)>(&::GlobalNamespace::KIDSession::set_Permissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a261a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"set_Permissions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDSession.get_DateOfBirth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::KIDSession::*)()>(&::GlobalNamespace::KIDSession::get_DateOfBirth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a261b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"get_DateOfBirth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDSession.set_DateOfBirth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDSession::*)(::System::DateTime)>(&::GlobalNamespace::KIDSession::set_DateOfBirth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a261b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"set_DateOfBirth", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDSession.get_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::KIDSession::*)()>(&::GlobalNamespace::KIDSession::get_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a261c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDSession.set_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDSession::*)(::StringW)>(&::GlobalNamespace::KIDSession::set_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a261c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDSession._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDSession::*)()>(&::GlobalNamespace::KIDSession::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a261d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SessionStatus& GlobalNamespace::KIDSession::__cordl_internal_get__SessionStatus_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionStatus_k__BackingField;
}
constexpr ::GlobalNamespace::SessionStatus const& GlobalNamespace::KIDSession::__cordl_internal_get__SessionStatus_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionStatus_k__BackingField;
}
constexpr void GlobalNamespace::KIDSession::__cordl_internal_set__SessionStatus_k__BackingField(::GlobalNamespace::SessionStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SessionStatus_k__BackingField = value;
}
constexpr ::GlobalNamespace::GTAgeStatusType& GlobalNamespace::KIDSession::__cordl_internal_get__AgeStatus_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeStatus_k__BackingField;
}
constexpr ::GlobalNamespace::GTAgeStatusType const& GlobalNamespace::KIDSession::__cordl_internal_get__AgeStatus_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeStatus_k__BackingField;
}
constexpr void GlobalNamespace::KIDSession::__cordl_internal_set__AgeStatus_k__BackingField(::GlobalNamespace::GTAgeStatusType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AgeStatus_k__BackingField = value;
}
constexpr ::System::Guid& GlobalNamespace::KIDSession::__cordl_internal_get__SessionId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
constexpr ::System::Guid const& GlobalNamespace::KIDSession::__cordl_internal_get__SessionId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
constexpr void GlobalNamespace::KIDSession::__cordl_internal_set__SessionId_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SessionId_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::KIDSession::__cordl_internal_get__KUID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KUID_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::KIDSession::__cordl_internal_get__KUID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KUID_k__BackingField;
}
constexpr void GlobalNamespace::KIDSession::__cordl_internal_set__KUID_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____KUID_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::KIDSession::__cordl_internal_get__etag_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____etag_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::KIDSession::__cordl_internal_get__etag_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____etag_k__BackingField;
}
constexpr void GlobalNamespace::KIDSession::__cordl_internal_set__etag_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____etag_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::KID::Model::Permission*>*& GlobalNamespace::KIDSession::__cordl_internal_get__Permissions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Permissions_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::KID::Model::Permission*>* const& GlobalNamespace::KIDSession::__cordl_internal_get__Permissions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Permissions_k__BackingField;
}
constexpr void GlobalNamespace::KIDSession::__cordl_internal_set__Permissions_k__BackingField(::System::Collections::Generic::List_1<::KID::Model::Permission*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Permissions_k__BackingField = value;
}
constexpr ::System::DateTime& GlobalNamespace::KIDSession::__cordl_internal_get__DateOfBirth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateOfBirth_k__BackingField;
}
constexpr ::System::DateTime const& GlobalNamespace::KIDSession::__cordl_internal_get__DateOfBirth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateOfBirth_k__BackingField;
}
constexpr void GlobalNamespace::KIDSession::__cordl_internal_set__DateOfBirth_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DateOfBirth_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::KIDSession::__cordl_internal_get__Jurisdiction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::KIDSession::__cordl_internal_get__Jurisdiction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr void GlobalNamespace::KIDSession::__cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Jurisdiction_k__BackingField = value;
}
inline ::GlobalNamespace::SessionStatus GlobalNamespace::KIDSession::get_SessionStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"get_SessionStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SessionStatus>(this, ___internal_method);
}
inline void GlobalNamespace::KIDSession::set_SessionStatus(::GlobalNamespace::SessionStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"set_SessionStatus", {}, {::i2c::type_of<::GlobalNamespace::SessionStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GTAgeStatusType GlobalNamespace::KIDSession::get_AgeStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"get_AgeStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTAgeStatusType>(this, ___internal_method);
}
inline void GlobalNamespace::KIDSession::set_AgeStatus(::GlobalNamespace::GTAgeStatusType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"set_AgeStatus", {}, {::i2c::type_of<::GlobalNamespace::GTAgeStatusType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Guid GlobalNamespace::KIDSession::get_SessionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"get_SessionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void GlobalNamespace::KIDSession::set_SessionId(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"set_SessionId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::KIDSession::get_KUID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"get_KUID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::KIDSession::set_KUID(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"set_KUID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::KIDSession::get_etag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"get_etag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::KIDSession::set_etag(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"set_etag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::KID::Model::Permission*>* GlobalNamespace::KIDSession::get_Permissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"get_Permissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>(this, ___internal_method);
}
inline void GlobalNamespace::KIDSession::set_Permissions(::System::Collections::Generic::List_1<::KID::Model::Permission*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"set_Permissions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime GlobalNamespace::KIDSession::get_DateOfBirth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"get_DateOfBirth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GlobalNamespace::KIDSession::set_DateOfBirth(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"set_DateOfBirth", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::KIDSession::get_Jurisdiction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::KIDSession::set_Jurisdiction(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::KIDSession::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDSession*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDSession* GlobalNamespace::KIDSession::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDSession*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDSession::KIDSession()   {
}

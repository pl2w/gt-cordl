#pragma once
// IWYU pragma private; include "GlobalNamespace/TMPSession.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_impl.hpp"
#include "KID/Model/zzzz__AgeStatusType_impl.hpp"
#include "KID/Model/zzzz__Session_ManagedByEnum_impl.hpp"
#include "KID/Model/zzzz__Session_StatusEnum_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TMPSession_def.hpp"
#include "GlobalNamespace/zzzz__EKIDFeatures_def.hpp"
#include "GlobalNamespace/zzzz__KIDDefaultSession_def.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
#include "GlobalNamespace/zzzz__TMPSession_def.hpp"
#include "KID/Model/zzzz__Permission_def.hpp"
#include "KID/Model/zzzz__Session_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TMPSession.get_IsValidSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TMPSession::*)()>(&::GlobalNamespace::TMPSession::get_IsValidSession)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a2632c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"get_IsValidSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPSession._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TMPSession::*)(::KID::Model::Session*, ::GlobalNamespace::KIDDefaultSession*, ::GlobalNamespace::SessionStatus)>(&::GlobalNamespace::TMPSession::_ctor)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5a259c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {".ctor", {}, {::i2c::type_of<::KID::Model::Session*>(), ::i2c::type_of<::GlobalNamespace::KIDDefaultSession*>(), ::i2c::type_of<::GlobalNamespace::SessionStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPSession.SetOptInPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TMPSession::*)(::ArrayW<::StringW>)>(&::GlobalNamespace::TMPSession::SetOptInPermissions)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5a25cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"SetOptInPermissions", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPSession.TryGetPermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TMPSession::*)(::GlobalNamespace::EKIDFeatures, ::by_ref<::KID::Model::Permission*>)>(&::GlobalNamespace::TMPSession::TryGetPermission)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5a26a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"TryGetPermission", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>(), ::i2c::type_of<::by_ref<::KID::Model::Permission*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPSession.GetAllPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::KID::Model::Permission*>* (::GlobalNamespace::TMPSession::*)()>(&::GlobalNamespace::TMPSession::GetAllPermissions)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a26bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"GetAllPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPSession.HasPermissionForFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TMPSession::*)(::GlobalNamespace::EKIDFeatures)>(&::GlobalNamespace::TMPSession::HasPermissionForFeature)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a26c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"HasPermissionForFeature", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPSession.OptInToPermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TMPSession::*)(::GlobalNamespace::EKIDFeatures, bool)>(&::GlobalNamespace::TMPSession::OptInToPermission)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5a26900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"OptInToPermission", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPSession.HasOptedInToPermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TMPSession::*)(::GlobalNamespace::EKIDFeatures)>(&::GlobalNamespace::TMPSession::HasOptedInToPermission)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a26d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"HasOptedInToPermission", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPSession.GetOptedInPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GlobalNamespace::TMPSession::*)()>(&::GlobalNamespace::TMPSession::GetOptedInPermissions)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5a25edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"GetOptedInPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPSession.UpdatePermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TMPSession::*)(::GlobalNamespace::EKIDFeatures, ::KID::Model::Permission*)>(&::GlobalNamespace::TMPSession::UpdatePermission)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5a26d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"UpdatePermission", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>(), ::i2c::type_of<::KID::Model::Permission*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPSession.InitialiseDefaultPermissionSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TMPSession::*)(::GlobalNamespace::KIDDefaultSession*)>(&::GlobalNamespace::TMPSession::InitialiseDefaultPermissionSet)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5a263d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"InitialiseDefaultPermissionSet", {}, {::i2c::type_of<::GlobalNamespace::KIDDefaultSession*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPSession.GetAgeFromDateOfBirth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TMPSession::*)()>(&::GlobalNamespace::TMPSession::GetAgeFromDateOfBirth)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a265a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"GetAgeFromDateOfBirth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPSession.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TMPSession::*)()>(&::GlobalNamespace::TMPSession::ToString)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x5a26ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                    {::i2c::class_of<::GlobalNamespace::TMPSession*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Guid& GlobalNamespace::TMPSession::__cordl_internal_get_SessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr ::System::Guid const& GlobalNamespace::TMPSession::__cordl_internal_get_SessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr void GlobalNamespace::TMPSession::__cordl_internal_set_SessionId(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SessionId = value;
}
constexpr ::StringW& GlobalNamespace::TMPSession::__cordl_internal_get_Etag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Etag;
}
constexpr ::StringW const& GlobalNamespace::TMPSession::__cordl_internal_get_Etag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Etag;
}
constexpr void GlobalNamespace::TMPSession::__cordl_internal_set_Etag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Etag = value;
}
constexpr ::KID::Model::AgeStatusType& GlobalNamespace::TMPSession::__cordl_internal_get_AgeStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgeStatus;
}
constexpr ::KID::Model::AgeStatusType const& GlobalNamespace::TMPSession::__cordl_internal_get_AgeStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgeStatus;
}
constexpr void GlobalNamespace::TMPSession::__cordl_internal_set_AgeStatus(::KID::Model::AgeStatusType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AgeStatus = value;
}
constexpr ::GlobalNamespace::Session_StatusEnum& GlobalNamespace::TMPSession::__cordl_internal_get_KidStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KidStatus;
}
constexpr ::GlobalNamespace::Session_StatusEnum const& GlobalNamespace::TMPSession::__cordl_internal_get_KidStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KidStatus;
}
constexpr void GlobalNamespace::TMPSession::__cordl_internal_set_KidStatus(::GlobalNamespace::Session_StatusEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KidStatus = value;
}
constexpr ::GlobalNamespace::Session_ManagedByEnum& GlobalNamespace::TMPSession::__cordl_internal_get_ManagedBy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ManagedBy;
}
constexpr ::GlobalNamespace::Session_ManagedByEnum const& GlobalNamespace::TMPSession::__cordl_internal_get_ManagedBy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ManagedBy;
}
constexpr void GlobalNamespace::TMPSession::__cordl_internal_set_ManagedBy(::GlobalNamespace::Session_ManagedByEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ManagedBy = value;
}
constexpr ::System::DateTime& GlobalNamespace::TMPSession::__cordl_internal_get_DateOfBirth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DateOfBirth;
}
constexpr ::System::DateTime const& GlobalNamespace::TMPSession::__cordl_internal_get_DateOfBirth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DateOfBirth;
}
constexpr void GlobalNamespace::TMPSession::__cordl_internal_set_DateOfBirth(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DateOfBirth = value;
}
constexpr ::StringW& GlobalNamespace::TMPSession::__cordl_internal_get_Jurisdiction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Jurisdiction;
}
constexpr ::StringW const& GlobalNamespace::TMPSession::__cordl_internal_get_Jurisdiction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Jurisdiction;
}
constexpr void GlobalNamespace::TMPSession::__cordl_internal_set_Jurisdiction(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Jurisdiction = value;
}
constexpr ::StringW& GlobalNamespace::TMPSession::__cordl_internal_get_KUID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KUID;
}
constexpr ::StringW const& GlobalNamespace::TMPSession::__cordl_internal_get_KUID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KUID;
}
constexpr void GlobalNamespace::TMPSession::__cordl_internal_set_KUID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KUID = value;
}
constexpr int32_t& GlobalNamespace::TMPSession::__cordl_internal_get_Age()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Age;
}
constexpr int32_t const& GlobalNamespace::TMPSession::__cordl_internal_get_Age() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Age;
}
constexpr void GlobalNamespace::TMPSession::__cordl_internal_set_Age(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Age = value;
}
constexpr bool& GlobalNamespace::TMPSession::__cordl_internal_get_IsDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDefault;
}
constexpr bool const& GlobalNamespace::TMPSession::__cordl_internal_get_IsDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDefault;
}
constexpr void GlobalNamespace::TMPSession::__cordl_internal_set_IsDefault(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsDefault = value;
}
constexpr ::GlobalNamespace::SessionStatus& GlobalNamespace::TMPSession::__cordl_internal_get_SessionStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionStatus;
}
constexpr ::GlobalNamespace::SessionStatus const& GlobalNamespace::TMPSession::__cordl_internal_get_SessionStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionStatus;
}
constexpr void GlobalNamespace::TMPSession::__cordl_internal_set_SessionStatus(::GlobalNamespace::SessionStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SessionStatus = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EKIDFeatures,::KID::Model::Permission*>*& GlobalNamespace::TMPSession::__cordl_internal_get_Permissions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permissions;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EKIDFeatures,::KID::Model::Permission*>* const& GlobalNamespace::TMPSession::__cordl_internal_get_Permissions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permissions;
}
constexpr void GlobalNamespace::TMPSession::__cordl_internal_set_Permissions(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EKIDFeatures,::KID::Model::Permission*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Permissions = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::EKIDFeatures>*& GlobalNamespace::TMPSession::__cordl_internal_get_OptedInPermissions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OptedInPermissions;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::EKIDFeatures>* const& GlobalNamespace::TMPSession::__cordl_internal_get_OptedInPermissions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OptedInPermissions;
}
constexpr void GlobalNamespace::TMPSession::__cordl_internal_set_OptedInPermissions(::System::Collections::Generic::HashSet_1<::GlobalNamespace::EKIDFeatures>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OptedInPermissions = value;
}
inline bool GlobalNamespace::TMPSession::get_IsValidSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"get_IsValidSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TMPSession::_ctor(::KID::Model::Session*  session, ::GlobalNamespace::KIDDefaultSession*  defaultSession, ::GlobalNamespace::SessionStatus  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {".ctor", {}, {::i2c::type_of<::KID::Model::Session*>(), ::i2c::type_of<::GlobalNamespace::KIDDefaultSession*>(), ::i2c::type_of<::GlobalNamespace::SessionStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, session, defaultSession, status);
}
inline void GlobalNamespace::TMPSession::SetOptInPermissions(::ArrayW<::StringW>  optedInPermissions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"SetOptInPermissions", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, optedInPermissions);
}
inline bool GlobalNamespace::TMPSession::TryGetPermission(::GlobalNamespace::EKIDFeatures  feature, ::by_ref<::KID::Model::Permission*>  permission)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"TryGetPermission", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>(), ::i2c::type_of<::by_ref<::KID::Model::Permission*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, feature, permission);
}
inline ::System::Collections::Generic::List_1<::KID::Model::Permission*>* GlobalNamespace::TMPSession::GetAllPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"GetAllPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>(this, ___internal_method);
}
inline bool GlobalNamespace::TMPSession::HasPermissionForFeature(::GlobalNamespace::EKIDFeatures  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"HasPermissionForFeature", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, feature);
}
inline void GlobalNamespace::TMPSession::OptInToPermission(::GlobalNamespace::EKIDFeatures  feature, bool  optIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"OptInToPermission", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature, optIn);
}
inline bool GlobalNamespace::TMPSession::HasOptedInToPermission(::GlobalNamespace::EKIDFeatures  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"HasOptedInToPermission", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, feature);
}
inline ::ArrayW<::StringW> GlobalNamespace::TMPSession::GetOptedInPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"GetOptedInPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void GlobalNamespace::TMPSession::UpdatePermission(::GlobalNamespace::EKIDFeatures  feature, ::KID::Model::Permission*  newData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"UpdatePermission", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>(), ::i2c::type_of<::KID::Model::Permission*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature, newData);
}
inline void GlobalNamespace::TMPSession::InitialiseDefaultPermissionSet(::GlobalNamespace::KIDDefaultSession*  defaultSession)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"InitialiseDefaultPermissionSet", {}, {::i2c::type_of<::GlobalNamespace::KIDDefaultSession*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultSession);
}
inline int32_t GlobalNamespace::TMPSession::GetAgeFromDateOfBirth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession*>(),
                        {"GetAgeFromDateOfBirth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::TMPSession::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TMPSession*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::TMPSession* GlobalNamespace::TMPSession::New_ctor(::KID::Model::Session*  session, ::GlobalNamespace::KIDDefaultSession*  defaultSession, ::GlobalNamespace::SessionStatus  status)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TMPSession*>(session, defaultSession, status));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TMPSession::TMPSession()   {
}
//  Writing Method size for method: ::GlobalNamespace::TMPSession___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TMPSession___c::*)()>(&::GlobalNamespace::TMPSession___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2746c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPSession___c._GetOptedInPermissions_b__22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TMPSession___c::*)(::GlobalNamespace::EKIDFeatures)>(&::GlobalNamespace::TMPSession___c::_GetOptedInPermissions_b__22_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a27474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession___c*>(),
                        {"<GetOptedInPermissions>b__22_0", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TMPSession___c::setStaticF___9(::GlobalNamespace::TMPSession___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::TMPSession___c*, "<>9", ::GlobalNamespace::TMPSession___c*>(std::forward<::GlobalNamespace::TMPSession___c*>(value));
}
inline ::GlobalNamespace::TMPSession___c* GlobalNamespace::TMPSession___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::TMPSession___c*, "<>9", ::GlobalNamespace::TMPSession___c*>();
}
inline void GlobalNamespace::TMPSession___c::setStaticF___9__22_0(::System::Func_2<::GlobalNamespace::EKIDFeatures,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::EKIDFeatures,::StringW>*, "<>9__22_0", ::GlobalNamespace::TMPSession___c*>(std::forward<::System::Func_2<::GlobalNamespace::EKIDFeatures,::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::EKIDFeatures,::StringW>* GlobalNamespace::TMPSession___c::getStaticF___9__22_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::EKIDFeatures,::StringW>*, "<>9__22_0", ::GlobalNamespace::TMPSession___c*>();
}
inline void GlobalNamespace::TMPSession___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::TMPSession___c::_GetOptedInPermissions_b__22_0(::GlobalNamespace::EKIDFeatures  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPSession___c*>(),
                        {"<GetOptedInPermissions>b__22_0", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, f);
}
inline ::GlobalNamespace::TMPSession___c* GlobalNamespace::TMPSession___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TMPSession___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TMPSession___c::TMPSession___c()   {
}

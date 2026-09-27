#pragma once
// IWYU pragma private; include "GlobalNamespace/TMPSession.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
#include "KID/Model/zzzz__AgeStatusType_def.hpp"
#include "KID/Model/zzzz__Session_ManagedByEnum_def.hpp"
#include "KID/Model/zzzz__Session_StatusEnum_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMPSession)
namespace GlobalNamespace {
struct EKIDFeatures;
}
namespace GlobalNamespace {
class KIDDefaultSession;
}
namespace GlobalNamespace {
struct SessionStatus;
}
namespace GlobalNamespace {
class TMPSession___c;
}
namespace KID::Model {
class Permission;
}
namespace KID::Model {
class Session;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class TMPSession;
}
namespace GlobalNamespace {
class TMPSession___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TMPSession*);
MARK_REF_T(::GlobalNamespace::TMPSession___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TMPSession*, "", "TMPSession");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TMPSession___c*, "", "TMPSession/<>c");
// Dependencies KID.Model.AgeStatusType, KID.Model.Session::ManagedByEnum, KID.Model.Session::StatusEnum, SessionStatus, System.DateTime, System.Guid, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TMPSession
class CORDL_TYPE TMPSession : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::TMPSession___c;

/// @brief Field Age, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_Age, put=__cordl_internal_set_Age)) int32_t  Age;

/// @brief Field AgeStatus, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_AgeStatus, put=__cordl_internal_set_AgeStatus)) ::KID::Model::AgeStatusType  AgeStatus;

/// @brief Field DateOfBirth, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_DateOfBirth, put=__cordl_internal_set_DateOfBirth)) ::System::DateTime  DateOfBirth;

/// @brief Field Etag, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Etag, put=__cordl_internal_set_Etag)) ::StringW  Etag;

/// @brief Field IsDefault, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsDefault, put=__cordl_internal_set_IsDefault)) bool  IsDefault;

 __declspec(property(get=get_IsValidSession)) bool  IsValidSession;

/// @brief Field Jurisdiction, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Jurisdiction, put=__cordl_internal_set_Jurisdiction)) ::StringW  Jurisdiction;

/// @brief Field KUID, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_KUID, put=__cordl_internal_set_KUID)) ::StringW  KUID;

/// @brief Field KidStatus, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_KidStatus, put=__cordl_internal_set_KidStatus)) ::GlobalNamespace::Session_StatusEnum  KidStatus;

/// @brief Field ManagedBy, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_ManagedBy, put=__cordl_internal_set_ManagedBy)) ::GlobalNamespace::Session_ManagedByEnum  ManagedBy;

/// @brief Field OptedInPermissions, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OptedInPermissions, put=__cordl_internal_set_OptedInPermissions)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::EKIDFeatures>*  OptedInPermissions;

/// @brief Field Permissions, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_Permissions, put=__cordl_internal_set_Permissions)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EKIDFeatures,::KID::Model::Permission*>*  Permissions;

/// @brief Field SessionId, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_SessionId, put=__cordl_internal_set_SessionId)) ::System::Guid  SessionId;

/// @brief Field SessionStatus, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_SessionStatus, put=__cordl_internal_set_SessionStatus)) ::GlobalNamespace::SessionStatus  SessionStatus;

/// @brief Method GetAgeFromDateOfBirth, addr 0x5a265a4, size 0xf0, virtual false, abstract: false, final false
inline int32_t GetAgeFromDateOfBirth() ;

/// @brief Method GetAllPermissions, addr 0x5a26bb0, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::KID::Model::Permission*>* GetAllPermissions() ;

/// @brief Method GetOptedInPermissions, addr 0x5a25edc, size 0x1f0, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetOptedInPermissions() ;

/// @brief Method HasOptedInToPermission, addr 0x5a26d0c, size 0x58, virtual false, abstract: false, final false
inline bool HasOptedInToPermission(::GlobalNamespace::EKIDFeatures  feature) ;

/// @brief Method HasPermissionForFeature, addr 0x5a26c1c, size 0xf0, virtual false, abstract: false, final false
inline bool HasPermissionForFeature(::GlobalNamespace::EKIDFeatures  feature) ;

/// @brief Method InitialiseDefaultPermissionSet, addr 0x5a263d4, size 0x1d0, virtual false, abstract: false, final false
inline void InitialiseDefaultPermissionSet(::GlobalNamespace::KIDDefaultSession*  defaultSession) ;

static inline ::GlobalNamespace::TMPSession* New_ctor(::KID::Model::Session*  session, ::GlobalNamespace::KIDDefaultSession*  defaultSession, ::GlobalNamespace::SessionStatus  status) ;

/// @brief Method OptInToPermission, addr 0x5a26900, size 0x17c, virtual false, abstract: false, final false
inline void OptInToPermission(::GlobalNamespace::EKIDFeatures  feature, bool  optIn) ;

/// @brief Method SetOptInPermissions, addr 0x5a25cec, size 0x1f0, virtual false, abstract: false, final false
inline void SetOptInPermissions(::ArrayW<::StringW>  optedInPermissions) ;

/// @brief Method ToString, addr 0x5a26ea4, size 0x560, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryGetPermission, addr 0x5a26a7c, size 0x134, virtual false, abstract: false, final false
inline bool TryGetPermission(::GlobalNamespace::EKIDFeatures  feature, ::by_ref<::KID::Model::Permission*>  permission) ;

/// @brief Method UpdatePermission, addr 0x5a26d64, size 0x140, virtual false, abstract: false, final false
inline void UpdatePermission(::GlobalNamespace::EKIDFeatures  feature, ::KID::Model::Permission*  newData) ;

constexpr int32_t const& __cordl_internal_get_Age() const;

constexpr int32_t& __cordl_internal_get_Age() ;

constexpr ::KID::Model::AgeStatusType const& __cordl_internal_get_AgeStatus() const;

constexpr ::KID::Model::AgeStatusType& __cordl_internal_get_AgeStatus() ;

constexpr ::System::DateTime const& __cordl_internal_get_DateOfBirth() const;

constexpr ::System::DateTime& __cordl_internal_get_DateOfBirth() ;

constexpr ::StringW const& __cordl_internal_get_Etag() const;

constexpr ::StringW& __cordl_internal_get_Etag() ;

constexpr bool const& __cordl_internal_get_IsDefault() const;

constexpr bool& __cordl_internal_get_IsDefault() ;

constexpr ::StringW const& __cordl_internal_get_Jurisdiction() const;

constexpr ::StringW& __cordl_internal_get_Jurisdiction() ;

constexpr ::StringW const& __cordl_internal_get_KUID() const;

constexpr ::StringW& __cordl_internal_get_KUID() ;

constexpr ::GlobalNamespace::Session_StatusEnum const& __cordl_internal_get_KidStatus() const;

constexpr ::GlobalNamespace::Session_StatusEnum& __cordl_internal_get_KidStatus() ;

constexpr ::GlobalNamespace::Session_ManagedByEnum const& __cordl_internal_get_ManagedBy() const;

constexpr ::GlobalNamespace::Session_ManagedByEnum& __cordl_internal_get_ManagedBy() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::EKIDFeatures>* const& __cordl_internal_get_OptedInPermissions() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::EKIDFeatures>*& __cordl_internal_get_OptedInPermissions() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EKIDFeatures,::KID::Model::Permission*>* const& __cordl_internal_get_Permissions() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EKIDFeatures,::KID::Model::Permission*>*& __cordl_internal_get_Permissions() ;

constexpr ::System::Guid const& __cordl_internal_get_SessionId() const;

constexpr ::System::Guid& __cordl_internal_get_SessionId() ;

constexpr ::GlobalNamespace::SessionStatus const& __cordl_internal_get_SessionStatus() const;

constexpr ::GlobalNamespace::SessionStatus& __cordl_internal_get_SessionStatus() ;

constexpr void __cordl_internal_set_Age(int32_t  value) ;

constexpr void __cordl_internal_set_AgeStatus(::KID::Model::AgeStatusType  value) ;

constexpr void __cordl_internal_set_DateOfBirth(::System::DateTime  value) ;

constexpr void __cordl_internal_set_Etag(::StringW  value) ;

constexpr void __cordl_internal_set_IsDefault(bool  value) ;

constexpr void __cordl_internal_set_Jurisdiction(::StringW  value) ;

constexpr void __cordl_internal_set_KUID(::StringW  value) ;

constexpr void __cordl_internal_set_KidStatus(::GlobalNamespace::Session_StatusEnum  value) ;

constexpr void __cordl_internal_set_ManagedBy(::GlobalNamespace::Session_ManagedByEnum  value) ;

constexpr void __cordl_internal_set_OptedInPermissions(::System::Collections::Generic::HashSet_1<::GlobalNamespace::EKIDFeatures>*  value) ;

constexpr void __cordl_internal_set_Permissions(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EKIDFeatures,::KID::Model::Permission*>*  value) ;

constexpr void __cordl_internal_set_SessionId(::System::Guid  value) ;

constexpr void __cordl_internal_set_SessionStatus(::GlobalNamespace::SessionStatus  value) ;

/// @brief Method .ctor, addr 0x5a259c0, size 0x32c, virtual false, abstract: false, final false
inline void _ctor(::KID::Model::Session*  session, ::GlobalNamespace::KIDDefaultSession*  defaultSession, ::GlobalNamespace::SessionStatus  status) ;

/// @brief Method get_IsValidSession, addr 0x5a2632c, size 0xa8, virtual false, abstract: false, final false
inline bool get_IsValidSession() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TMPSession() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TMPSession", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TMPSession(TMPSession && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMPSession", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMPSession(TMPSession const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2893};

/// @brief Field SessionId, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ___SessionId;

/// @brief Field Etag, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Etag;

/// @brief Field AgeStatus, offset: 0x28, size: 0x4, def value: None
 ::KID::Model::AgeStatusType  ___AgeStatus;

/// @brief Field KidStatus, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::Session_StatusEnum  ___KidStatus;

/// @brief Field ManagedBy, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::Session_ManagedByEnum  ___ManagedBy;

/// @brief Field DateOfBirth, offset: 0x38, size: 0x8, def value: None
 ::System::DateTime  ___DateOfBirth;

/// @brief Field Jurisdiction, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___Jurisdiction;

/// @brief Field KUID, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___KUID;

/// @brief Field Age, offset: 0x50, size: 0x4, def value: None
 int32_t  ___Age;

/// @brief Field IsDefault, offset: 0x54, size: 0x1, def value: None
 bool  ___IsDefault;

/// @brief Field SessionStatus, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::SessionStatus  ___SessionStatus;

/// @brief Field Permissions, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EKIDFeatures,::KID::Model::Permission*>*  ___Permissions;

/// @brief Field OptedInPermissions, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::EKIDFeatures>*  ___OptedInPermissions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TMPSession, ___SessionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMPSession, ___Etag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMPSession, ___AgeStatus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMPSession, ___KidStatus) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMPSession, ___ManagedBy) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMPSession, ___DateOfBirth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMPSession, ___Jurisdiction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMPSession, ___KUID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMPSession, ___Age) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMPSession, ___IsDefault) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMPSession, ___SessionStatus) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMPSession, ___Permissions) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMPSession, ___OptedInPermissions) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TMPSession) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TMPSession/<>c
class CORDL_TYPE TMPSession___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::TMPSession___c*  __9;

/// @brief Field <>9__22_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_0, put=setStaticF___9__22_0)) ::System::Func_2<::GlobalNamespace::EKIDFeatures,::StringW>*  __9__22_0;

static inline ::GlobalNamespace::TMPSession___c* New_ctor() ;

/// @brief Method <GetOptedInPermissions>b__22_0, addr 0x5a27474, size 0x8, virtual false, abstract: false, final false
inline ::StringW _GetOptedInPermissions_b__22_0(::GlobalNamespace::EKIDFeatures  f) ;

/// @brief Method .ctor, addr 0x5a2746c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::TMPSession___c* getStaticF___9() ;

static inline ::System::Func_2<::GlobalNamespace::EKIDFeatures,::StringW>* getStaticF___9__22_0() ;

static inline void setStaticF___9(::GlobalNamespace::TMPSession___c*  value) ;

static inline void setStaticF___9__22_0(::System::Func_2<::GlobalNamespace::EKIDFeatures,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TMPSession___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TMPSession___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TMPSession___c(TMPSession___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMPSession___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMPSession___c(TMPSession___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2892};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TMPSession___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

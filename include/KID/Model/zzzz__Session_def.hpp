#pragma once
// IWYU pragma private; include "KID/Model/Session.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__AgeCategoryV2_def.hpp"
#include "KID/Model/zzzz__AgeStatusType_def.hpp"
#include "KID/Model/zzzz__Session_ManagedByEnum_def.hpp"
#include "KID/Model/zzzz__Session_StatusEnum_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Session)
namespace GlobalNamespace {
struct Session_ManagedByEnum;
}
namespace GlobalNamespace {
struct Session_StatusEnum;
}
namespace KID::Model {
struct AgeCategoryV2;
}
namespace KID::Model {
struct AgeStatusType;
}
namespace KID::Model {
class Permission;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct DateTime;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace KID::Model {
class Session;
}
// Write type traits
MARK_REF_T(::KID::Model::Session*);
DEFINE_IL2CPP_CLASS(::KID::Model::Session*, "KID.Model", "Session");
// [DataContract(Name = "Session")]
// Dependencies KID.Model.AgeCategoryV2, KID.Model.AgeStatusType, KID.Model.Session::ManagedByEnum, KID.Model.Session::StatusEnum, System.DateTime, System.Guid, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.Session
class CORDL_TYPE Session : public ::System::Object {
public:
// Declarations
using ManagedByEnum = ::GlobalNamespace::Session_ManagedByEnum;

using StatusEnum = ::GlobalNamespace::Session_StatusEnum;

/// @brief [DataMember(Name = "ageCategory", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_AgeCategory, put=set_AgeCategory)) ::KID::Model::AgeCategoryV2  AgeCategory;

/// @brief [DataMember(Name = "ageStatus", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_AgeStatus, put=set_AgeStatus)) ::KID::Model::AgeStatusType  AgeStatus;

/// [DataMember(Name = "dateOfBirth", IsRequired = true, EmitDefaultValue = true)]
/// @brief [JsonConverter(typeof(KID.Client.OpenAPIDateConverter))]
 __declspec(property(get=get_DateOfBirth, put=set_DateOfBirth)) ::System::DateTime  DateOfBirth;

/// @brief [DataMember(Name = "etag", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Etag, put=set_Etag)) ::StringW  Etag;

/// @brief [DataMember(Name = "jurisdiction", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Jurisdiction, put=set_Jurisdiction)) ::StringW  Jurisdiction;

/// @brief [DataMember(Name = "kuid", EmitDefaultValue = false)]
 __declspec(property(get=get_Kuid, put=set_Kuid)) ::StringW  Kuid;

/// @brief [DataMember(Name = "managedBy", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_ManagedBy, put=set_ManagedBy)) ::GlobalNamespace::Session_ManagedByEnum  ManagedBy;

/// @brief [DataMember(Name = "permissions", EmitDefaultValue = false)]
 __declspec(property(get=get_Permissions, put=set_Permissions)) ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  Permissions;

/// @brief [DataMember(Name = "sessionId", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_SessionId, put=set_SessionId)) ::System::Guid  SessionId;

/// @brief [DataMember(Name = "status", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Status, put=set_Status)) ::GlobalNamespace::Session_StatusEnum  Status;

/// @brief Field <AgeCategory>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__AgeCategory_k__BackingField, put=__cordl_internal_set__AgeCategory_k__BackingField)) ::KID::Model::AgeCategoryV2  _AgeCategory_k__BackingField;

/// @brief Field <AgeStatus>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__AgeStatus_k__BackingField, put=__cordl_internal_set__AgeStatus_k__BackingField)) ::KID::Model::AgeStatusType  _AgeStatus_k__BackingField;

/// @brief Field <DateOfBirth>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__DateOfBirth_k__BackingField, put=__cordl_internal_set__DateOfBirth_k__BackingField)) ::System::DateTime  _DateOfBirth_k__BackingField;

/// @brief Field <Etag>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Etag_k__BackingField, put=__cordl_internal_set__Etag_k__BackingField)) ::StringW  _Etag_k__BackingField;

/// @brief Field <Jurisdiction>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Jurisdiction_k__BackingField, put=__cordl_internal_set__Jurisdiction_k__BackingField)) ::StringW  _Jurisdiction_k__BackingField;

/// @brief Field <Kuid>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Kuid_k__BackingField, put=__cordl_internal_set__Kuid_k__BackingField)) ::StringW  _Kuid_k__BackingField;

/// @brief Field <ManagedBy>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ManagedBy_k__BackingField, put=__cordl_internal_set__ManagedBy_k__BackingField)) ::GlobalNamespace::Session_ManagedByEnum  _ManagedBy_k__BackingField;

/// @brief Field <Permissions>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Permissions_k__BackingField, put=__cordl_internal_set__Permissions_k__BackingField)) ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  _Permissions_k__BackingField;

/// @brief Field <SessionId>k__BackingField, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__SessionId_k__BackingField, put=__cordl_internal_set__SessionId_k__BackingField)) ::System::Guid  _SessionId_k__BackingField;

/// @brief Field <Status>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Status_k__BackingField, put=__cordl_internal_set__Status_k__BackingField)) ::GlobalNamespace::Session_StatusEnum  _Status_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::Session* New_ctor() ;

static inline ::KID::Model::Session* New_ctor(::System::Guid  sessionId, ::StringW  kuid, ::StringW  etag, ::GlobalNamespace::Session_StatusEnum  status, ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  permissions, ::KID::Model::AgeStatusType  ageStatus, ::KID::Model::AgeCategoryV2  ageCategory, ::System::DateTime  dateOfBirth, ::StringW  jurisdiction, ::GlobalNamespace::Session_ManagedByEnum  managedBy) ;

/// @brief Method ToJson, addr 0x9cd9a40, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd95a0, size 0x4a0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::KID::Model::AgeCategoryV2 const& __cordl_internal_get__AgeCategory_k__BackingField() const;

constexpr ::KID::Model::AgeCategoryV2& __cordl_internal_get__AgeCategory_k__BackingField() ;

constexpr ::KID::Model::AgeStatusType const& __cordl_internal_get__AgeStatus_k__BackingField() const;

constexpr ::KID::Model::AgeStatusType& __cordl_internal_get__AgeStatus_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__DateOfBirth_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__DateOfBirth_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Etag_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Etag_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Jurisdiction_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Jurisdiction_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Kuid_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Kuid_k__BackingField() ;

constexpr ::GlobalNamespace::Session_ManagedByEnum const& __cordl_internal_get__ManagedBy_k__BackingField() const;

constexpr ::GlobalNamespace::Session_ManagedByEnum& __cordl_internal_get__ManagedBy_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::KID::Model::Permission*>* const& __cordl_internal_get__Permissions_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::KID::Model::Permission*>*& __cordl_internal_get__Permissions_k__BackingField() ;

constexpr ::System::Guid const& __cordl_internal_get__SessionId_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__SessionId_k__BackingField() ;

constexpr ::GlobalNamespace::Session_StatusEnum const& __cordl_internal_get__Status_k__BackingField() const;

constexpr ::GlobalNamespace::Session_StatusEnum& __cordl_internal_get__Status_k__BackingField() ;

constexpr void __cordl_internal_set__AgeCategory_k__BackingField(::KID::Model::AgeCategoryV2  value) ;

constexpr void __cordl_internal_set__AgeStatus_k__BackingField(::KID::Model::AgeStatusType  value) ;

constexpr void __cordl_internal_set__DateOfBirth_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__Etag_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Kuid_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ManagedBy_k__BackingField(::GlobalNamespace::Session_ManagedByEnum  value) ;

constexpr void __cordl_internal_set__Permissions_k__BackingField(::System::Collections::Generic::List_1<::KID::Model::Permission*>*  value) ;

constexpr void __cordl_internal_set__SessionId_k__BackingField(::System::Guid  value) ;

constexpr void __cordl_internal_set__Status_k__BackingField(::GlobalNamespace::Session_StatusEnum  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd93f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd9400, size 0x13c, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  sessionId, ::StringW  kuid, ::StringW  etag, ::GlobalNamespace::Session_StatusEnum  status, ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  permissions, ::KID::Model::AgeStatusType  ageStatus, ::KID::Model::AgeCategoryV2  ageCategory, ::System::DateTime  dateOfBirth, ::StringW  jurisdiction, ::GlobalNamespace::Session_ManagedByEnum  managedBy) ;

/// [CompilerGenerated]
/// @brief Method get_AgeCategory, addr 0x9cd93d8, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::AgeCategoryV2 get_AgeCategory() ;

/// [CompilerGenerated]
/// @brief Method get_AgeStatus, addr 0x9cd93c8, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::AgeStatusType get_AgeStatus() ;

/// [CompilerGenerated]
/// @brief Method get_DateOfBirth, addr 0x9cd9580, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_DateOfBirth() ;

/// [CompilerGenerated]
/// @brief Method get_Etag, addr 0x9cd9560, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Etag() ;

/// [CompilerGenerated]
/// @brief Method get_Jurisdiction, addr 0x9cd9590, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Jurisdiction() ;

/// [CompilerGenerated]
/// @brief Method get_Kuid, addr 0x9cd9550, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Kuid() ;

/// [CompilerGenerated]
/// @brief Method get_ManagedBy, addr 0x9cd93e8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Session_ManagedByEnum get_ManagedBy() ;

/// [CompilerGenerated]
/// @brief Method get_Permissions, addr 0x9cd9570, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::KID::Model::Permission*>* get_Permissions() ;

/// [CompilerGenerated]
/// @brief Method get_SessionId, addr 0x9cd953c, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_SessionId() ;

/// [CompilerGenerated]
/// @brief Method get_Status, addr 0x9cd93b8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Session_StatusEnum get_Status() ;

/// [CompilerGenerated]
/// @brief Method set_AgeCategory, addr 0x9cd93e0, size 0x8, virtual false, abstract: false, final false
inline void set_AgeCategory(::KID::Model::AgeCategoryV2  value) ;

/// [CompilerGenerated]
/// @brief Method set_AgeStatus, addr 0x9cd93d0, size 0x8, virtual false, abstract: false, final false
inline void set_AgeStatus(::KID::Model::AgeStatusType  value) ;

/// [CompilerGenerated]
/// @brief Method set_DateOfBirth, addr 0x9cd9588, size 0x8, virtual false, abstract: false, final false
inline void set_DateOfBirth(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_Etag, addr 0x9cd9568, size 0x8, virtual false, abstract: false, final false
inline void set_Etag(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Jurisdiction, addr 0x9cd9598, size 0x8, virtual false, abstract: false, final false
inline void set_Jurisdiction(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Kuid, addr 0x9cd9558, size 0x8, virtual false, abstract: false, final false
inline void set_Kuid(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ManagedBy, addr 0x9cd93f0, size 0x8, virtual false, abstract: false, final false
inline void set_ManagedBy(::GlobalNamespace::Session_ManagedByEnum  value) ;

/// [CompilerGenerated]
/// @brief Method set_Permissions, addr 0x9cd9578, size 0x8, virtual false, abstract: false, final false
inline void set_Permissions(::System::Collections::Generic::List_1<::KID::Model::Permission*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SessionId, addr 0x9cd9548, size 0x8, virtual false, abstract: false, final false
inline void set_SessionId(::System::Guid  value) ;

/// [CompilerGenerated]
/// @brief Method set_Status, addr 0x9cd93c0, size 0x8, virtual false, abstract: false, final false
inline void set_Status(::GlobalNamespace::Session_StatusEnum  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Session() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Session", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Session(Session && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Session", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Session(Session const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31099};

/// [CompilerGenerated]
/// @brief Field <Status>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::Session_StatusEnum  ____Status_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AgeStatus>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::KID::Model::AgeStatusType  ____AgeStatus_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AgeCategory>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::KID::Model::AgeCategoryV2  ____AgeCategory_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ManagedBy>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::Session_ManagedByEnum  ____ManagedBy_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SessionId>k__BackingField, offset: 0x20, size: 0x10, def value: None
 ::System::Guid  ____SessionId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Kuid>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____Kuid_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Etag>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____Etag_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Permissions>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  ____Permissions_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DateOfBirth>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::System::DateTime  ____DateOfBirth_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Jurisdiction>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____Jurisdiction_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::Session, ____Status_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::Session, ____AgeStatus_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::KID::Model::Session, ____AgeCategory_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::KID::Model::Session, ____ManagedBy_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::KID::Model::Session, ____SessionId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::KID::Model::Session, ____Kuid_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::KID::Model::Session, ____Etag_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::KID::Model::Session, ____Permissions_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::KID::Model::Session, ____DateOfBirth_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::KID::Model::Session, ____Jurisdiction_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::KID::Model::Session) == 0x58, "Size mismatch!");

} // namespace end def KID::Model

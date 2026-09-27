#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDSession.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTAgeStatusType_def.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(KIDSession)
namespace GlobalNamespace {
struct GTAgeStatusType;
}
namespace GlobalNamespace {
struct SessionStatus;
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
namespace GlobalNamespace {
class KIDSession;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDSession*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDSession*, "", "KIDSession");
// Dependencies GTAgeStatusType, SessionStatus, System.DateTime, System.Guid, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDSession
class CORDL_TYPE KIDSession : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AgeStatus, put=set_AgeStatus)) ::GlobalNamespace::GTAgeStatusType  AgeStatus;

 __declspec(property(get=get_DateOfBirth, put=set_DateOfBirth)) ::System::DateTime  DateOfBirth;

 __declspec(property(get=get_Jurisdiction, put=set_Jurisdiction)) ::StringW  Jurisdiction;

 __declspec(property(get=get_KUID, put=set_KUID)) ::StringW  KUID;

 __declspec(property(get=get_Permissions, put=set_Permissions)) ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  Permissions;

 __declspec(property(get=get_SessionId, put=set_SessionId)) ::System::Guid  SessionId;

 __declspec(property(get=get_SessionStatus, put=set_SessionStatus)) ::GlobalNamespace::SessionStatus  SessionStatus;

/// @brief Field <AgeStatus>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__AgeStatus_k__BackingField, put=__cordl_internal_set__AgeStatus_k__BackingField)) ::GlobalNamespace::GTAgeStatusType  _AgeStatus_k__BackingField;

/// @brief Field <DateOfBirth>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__DateOfBirth_k__BackingField, put=__cordl_internal_set__DateOfBirth_k__BackingField)) ::System::DateTime  _DateOfBirth_k__BackingField;

/// @brief Field <Jurisdiction>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Jurisdiction_k__BackingField, put=__cordl_internal_set__Jurisdiction_k__BackingField)) ::StringW  _Jurisdiction_k__BackingField;

/// @brief Field <KUID>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__KUID_k__BackingField, put=__cordl_internal_set__KUID_k__BackingField)) ::StringW  _KUID_k__BackingField;

/// @brief Field <Permissions>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Permissions_k__BackingField, put=__cordl_internal_set__Permissions_k__BackingField)) ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  _Permissions_k__BackingField;

/// @brief Field <SessionId>k__BackingField, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__SessionId_k__BackingField, put=__cordl_internal_set__SessionId_k__BackingField)) ::System::Guid  _SessionId_k__BackingField;

/// @brief Field <SessionStatus>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__SessionStatus_k__BackingField, put=__cordl_internal_set__SessionStatus_k__BackingField)) ::GlobalNamespace::SessionStatus  _SessionStatus_k__BackingField;

/// @brief Field <etag>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__etag_k__BackingField, put=__cordl_internal_set__etag_k__BackingField)) ::StringW  _etag_k__BackingField;

 __declspec(property(get=get_etag, put=set_etag)) ::StringW  etag;

static inline ::GlobalNamespace::KIDSession* New_ctor() ;

constexpr ::GlobalNamespace::GTAgeStatusType const& __cordl_internal_get__AgeStatus_k__BackingField() const;

constexpr ::GlobalNamespace::GTAgeStatusType& __cordl_internal_get__AgeStatus_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__DateOfBirth_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__DateOfBirth_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Jurisdiction_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Jurisdiction_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__KUID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__KUID_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::KID::Model::Permission*>* const& __cordl_internal_get__Permissions_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::KID::Model::Permission*>*& __cordl_internal_get__Permissions_k__BackingField() ;

constexpr ::System::Guid const& __cordl_internal_get__SessionId_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__SessionId_k__BackingField() ;

constexpr ::GlobalNamespace::SessionStatus const& __cordl_internal_get__SessionStatus_k__BackingField() const;

constexpr ::GlobalNamespace::SessionStatus& __cordl_internal_get__SessionStatus_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__etag_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__etag_k__BackingField() ;

constexpr void __cordl_internal_set__AgeStatus_k__BackingField(::GlobalNamespace::GTAgeStatusType  value) ;

constexpr void __cordl_internal_set__DateOfBirth_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__KUID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Permissions_k__BackingField(::System::Collections::Generic::List_1<::KID::Model::Permission*>*  value) ;

constexpr void __cordl_internal_set__SessionId_k__BackingField(::System::Guid  value) ;

constexpr void __cordl_internal_set__SessionStatus_k__BackingField(::GlobalNamespace::SessionStatus  value) ;

constexpr void __cordl_internal_set__etag_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a261d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_AgeStatus, addr 0x5a2615c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GTAgeStatusType get_AgeStatus() ;

/// [CompilerGenerated]
/// @brief Method get_DateOfBirth, addr 0x5a261b0, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_DateOfBirth() ;

/// [CompilerGenerated]
/// @brief Method get_Jurisdiction, addr 0x5a261c0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Jurisdiction() ;

/// [CompilerGenerated]
/// @brief Method get_KUID, addr 0x5a26180, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_KUID() ;

/// [CompilerGenerated]
/// @brief Method get_Permissions, addr 0x5a261a0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::KID::Model::Permission*>* get_Permissions() ;

/// [CompilerGenerated]
/// @brief Method get_SessionId, addr 0x5a2616c, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_SessionId() ;

/// [CompilerGenerated]
/// @brief Method get_SessionStatus, addr 0x5a2614c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SessionStatus get_SessionStatus() ;

/// [CompilerGenerated]
/// @brief Method get_etag, addr 0x5a26190, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_etag() ;

/// [CompilerGenerated]
/// @brief Method set_AgeStatus, addr 0x5a26164, size 0x8, virtual false, abstract: false, final false
inline void set_AgeStatus(::GlobalNamespace::GTAgeStatusType  value) ;

/// [CompilerGenerated]
/// @brief Method set_DateOfBirth, addr 0x5a261b8, size 0x8, virtual false, abstract: false, final false
inline void set_DateOfBirth(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_Jurisdiction, addr 0x5a261c8, size 0x8, virtual false, abstract: false, final false
inline void set_Jurisdiction(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_KUID, addr 0x5a26188, size 0x8, virtual false, abstract: false, final false
inline void set_KUID(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Permissions, addr 0x5a261a8, size 0x8, virtual false, abstract: false, final false
inline void set_Permissions(::System::Collections::Generic::List_1<::KID::Model::Permission*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SessionId, addr 0x5a26178, size 0x8, virtual false, abstract: false, final false
inline void set_SessionId(::System::Guid  value) ;

/// [CompilerGenerated]
/// @brief Method set_SessionStatus, addr 0x5a26154, size 0x8, virtual false, abstract: false, final false
inline void set_SessionStatus(::GlobalNamespace::SessionStatus  value) ;

/// [CompilerGenerated]
/// @brief Method set_etag, addr 0x5a26198, size 0x8, virtual false, abstract: false, final false
inline void set_etag(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDSession() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDSession", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDSession(KIDSession && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDSession", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDSession(KIDSession const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2875};

/// [CompilerGenerated]
/// @brief Field <SessionStatus>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::SessionStatus  ____SessionStatus_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AgeStatus>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::GTAgeStatusType  ____AgeStatus_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SessionId>k__BackingField, offset: 0x18, size: 0x10, def value: None
 ::System::Guid  ____SessionId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <KUID>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____KUID_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <etag>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____etag_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Permissions>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  ____Permissions_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DateOfBirth>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::DateTime  ____DateOfBirth_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Jurisdiction>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____Jurisdiction_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDSession, ____SessionStatus_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDSession, ____AgeStatus_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDSession, ____SessionId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDSession, ____KUID_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDSession, ____etag_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDSession, ____Permissions_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDSession, ____DateOfBirth_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDSession, ____Jurisdiction_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDSession) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

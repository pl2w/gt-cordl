#pragma once
// IWYU pragma private; include "KID/Model/SetGuardianManagedSessionPermissionsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SetGuardianManagedSessionPermissionsResponse)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace KID::Model {
class SetGuardianManagedSessionPermissionsResponse;
}
// Write type traits
MARK_REF_T(::KID::Model::SetGuardianManagedSessionPermissionsResponse*);
DEFINE_IL2CPP_CLASS(::KID::Model::SetGuardianManagedSessionPermissionsResponse*, "KID.Model", "SetGuardianManagedSessionPermissionsResponse");
// [DataContract(Name = "SetGuardianManagedSessionPermissionsResponse")]
// Dependencies System.Guid, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.SetGuardianManagedSessionPermissionsResponse
class CORDL_TYPE SetGuardianManagedSessionPermissionsResponse : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "enabledPermissions", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_EnabledPermissions, put=set_EnabledPermissions)) ::System::Collections::Generic::List_1<::StringW>*  EnabledPermissions;

/// @brief [DataMember(Name = "sessionId", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_SessionId, put=set_SessionId)) ::System::Guid  SessionId;

/// @brief Field <EnabledPermissions>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__EnabledPermissions_k__BackingField, put=__cordl_internal_set__EnabledPermissions_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>*  _EnabledPermissions_k__BackingField;

/// @brief Field <SessionId>k__BackingField, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__SessionId_k__BackingField, put=__cordl_internal_set__SessionId_k__BackingField)) ::System::Guid  _SessionId_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::SetGuardianManagedSessionPermissionsResponse* New_ctor() ;

static inline ::KID::Model::SetGuardianManagedSessionPermissionsResponse* New_ctor(::System::Guid  sessionId, ::System::Collections::Generic::List_1<::StringW>*  enabledPermissions) ;

/// @brief Method ToJson, addr 0x9cda39c, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cda20c, size 0x190, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__EnabledPermissions_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__EnabledPermissions_k__BackingField() ;

constexpr ::System::Guid const& __cordl_internal_get__SessionId_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__SessionId_k__BackingField() ;

constexpr void __cordl_internal_set__EnabledPermissions_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__SessionId_k__BackingField(::System::Guid  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cda150, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cda158, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  sessionId, ::System::Collections::Generic::List_1<::StringW>*  enabledPermissions) ;

/// [CompilerGenerated]
/// @brief Method get_EnabledPermissions, addr 0x9cda1fc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_EnabledPermissions() ;

/// [CompilerGenerated]
/// @brief Method get_SessionId, addr 0x9cda1e8, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_SessionId() ;

/// [CompilerGenerated]
/// @brief Method set_EnabledPermissions, addr 0x9cda204, size 0x8, virtual false, abstract: false, final false
inline void set_EnabledPermissions(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SessionId, addr 0x9cda1f4, size 0x8, virtual false, abstract: false, final false
inline void set_SessionId(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetGuardianManagedSessionPermissionsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetGuardianManagedSessionPermissionsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetGuardianManagedSessionPermissionsResponse(SetGuardianManagedSessionPermissionsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetGuardianManagedSessionPermissionsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetGuardianManagedSessionPermissionsResponse(SetGuardianManagedSessionPermissionsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31103};

/// [CompilerGenerated]
/// @brief Field <SessionId>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ____SessionId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EnabledPermissions>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____EnabledPermissions_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::SetGuardianManagedSessionPermissionsResponse, ____SessionId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::SetGuardianManagedSessionPermissionsResponse, ____EnabledPermissions_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::KID::Model::SetGuardianManagedSessionPermissionsResponse) == 0x28, "Size mismatch!");

} // namespace end def KID::Model

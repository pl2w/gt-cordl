#pragma once
// IWYU pragma private; include "KID/Model/UpgradeSessionRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpgradeSessionRequest)
namespace KID::Model {
class RequestedPermission;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace KID::Model {
class UpgradeSessionRequest;
}
// Write type traits
MARK_REF_T(::KID::Model::UpgradeSessionRequest*);
DEFINE_IL2CPP_CLASS(::KID::Model::UpgradeSessionRequest*, "KID.Model", "UpgradeSessionRequest");
// [DataContract(Name = "UpgradeSessionRequest")]
// Dependencies System.Guid, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.UpgradeSessionRequest
class CORDL_TYPE UpgradeSessionRequest : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "requestedPermissions", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_RequestedPermissions, put=set_RequestedPermissions)) ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*  RequestedPermissions;

/// @brief [DataMember(Name = "sessionId", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_SessionId, put=set_SessionId)) ::System::Guid  SessionId;

/// @brief Field <RequestedPermissions>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__RequestedPermissions_k__BackingField, put=__cordl_internal_set__RequestedPermissions_k__BackingField)) ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*  _RequestedPermissions_k__BackingField;

/// @brief Field <SessionId>k__BackingField, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__SessionId_k__BackingField, put=__cordl_internal_set__SessionId_k__BackingField)) ::System::Guid  _SessionId_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::UpgradeSessionRequest* New_ctor() ;

static inline ::KID::Model::UpgradeSessionRequest* New_ctor(::System::Guid  sessionId, ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*  requestedPermissions) ;

/// @brief Method ToJson, addr 0x9cdac90, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cdab00, size 0x190, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>* const& __cordl_internal_get__RequestedPermissions_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*& __cordl_internal_get__RequestedPermissions_k__BackingField() ;

constexpr ::System::Guid const& __cordl_internal_get__SessionId_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__SessionId_k__BackingField() ;

constexpr void __cordl_internal_set__RequestedPermissions_k__BackingField(::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*  value) ;

constexpr void __cordl_internal_set__SessionId_k__BackingField(::System::Guid  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cdaa44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cdaa4c, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  sessionId, ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*  requestedPermissions) ;

/// [CompilerGenerated]
/// @brief Method get_RequestedPermissions, addr 0x9cdaaf0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>* get_RequestedPermissions() ;

/// [CompilerGenerated]
/// @brief Method get_SessionId, addr 0x9cdaadc, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_SessionId() ;

/// [CompilerGenerated]
/// @brief Method set_RequestedPermissions, addr 0x9cdaaf8, size 0x8, virtual false, abstract: false, final false
inline void set_RequestedPermissions(::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SessionId, addr 0x9cdaae8, size 0x8, virtual false, abstract: false, final false
inline void set_SessionId(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpgradeSessionRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpgradeSessionRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpgradeSessionRequest(UpgradeSessionRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpgradeSessionRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpgradeSessionRequest(UpgradeSessionRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31107};

/// [CompilerGenerated]
/// @brief Field <SessionId>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ____SessionId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RequestedPermissions>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*  ____RequestedPermissions_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::UpgradeSessionRequest, ____SessionId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::UpgradeSessionRequest, ____RequestedPermissions_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::KID::Model::UpgradeSessionRequest) == 0x28, "Size mismatch!");

} // namespace end def KID::Model

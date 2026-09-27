#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/InviteToGroupResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InviteToGroupResponse)
namespace PlayFab::GroupsModels {
class EntityKey;
}
namespace PlayFab::GroupsModels {
class EntityWithLineage;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class InviteToGroupResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::InviteToGroupResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::InviteToGroupResponse*, "PlayFab.GroupsModels", "InviteToGroupResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.DateTime
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.InviteToGroupResponse
class CORDL_TYPE InviteToGroupResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Expires, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Expires, put=__cordl_internal_set_Expires)) ::System::DateTime  Expires;

/// @brief Field Group, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::PlayFab::GroupsModels::EntityKey*  Group;

/// @brief Field InvitedByEntity, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_InvitedByEntity, put=__cordl_internal_set_InvitedByEntity)) ::PlayFab::GroupsModels::EntityWithLineage*  InvitedByEntity;

/// @brief Field InvitedEntity, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_InvitedEntity, put=__cordl_internal_set_InvitedEntity)) ::PlayFab::GroupsModels::EntityWithLineage*  InvitedEntity;

/// @brief Field RoleId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoleId, put=__cordl_internal_set_RoleId)) ::StringW  RoleId;

static inline ::PlayFab::GroupsModels::InviteToGroupResponse* New_ctor() ;

constexpr ::System::DateTime const& __cordl_internal_get_Expires() const;

constexpr ::System::DateTime& __cordl_internal_get_Expires() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Group() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Group() ;

constexpr ::PlayFab::GroupsModels::EntityWithLineage* const& __cordl_internal_get_InvitedByEntity() const;

constexpr ::PlayFab::GroupsModels::EntityWithLineage*& __cordl_internal_get_InvitedByEntity() ;

constexpr ::PlayFab::GroupsModels::EntityWithLineage* const& __cordl_internal_get_InvitedEntity() const;

constexpr ::PlayFab::GroupsModels::EntityWithLineage*& __cordl_internal_get_InvitedEntity() ;

constexpr ::StringW const& __cordl_internal_get_RoleId() const;

constexpr ::StringW& __cordl_internal_get_RoleId() ;

constexpr void __cordl_internal_set_Expires(::System::DateTime  value) ;

constexpr void __cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_InvitedByEntity(::PlayFab::GroupsModels::EntityWithLineage*  value) ;

constexpr void __cordl_internal_set_InvitedEntity(::PlayFab::GroupsModels::EntityWithLineage*  value) ;

constexpr void __cordl_internal_set_RoleId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840dc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InviteToGroupResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InviteToGroupResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InviteToGroupResponse(InviteToGroupResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InviteToGroupResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InviteToGroupResponse(InviteToGroupResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19790};

/// @brief Field Expires, offset: 0x20, size: 0x8, def value: None
 ::System::DateTime  ___Expires;

/// @brief Field Group, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Group;

/// @brief Field InvitedByEntity, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityWithLineage*  ___InvitedByEntity;

/// @brief Field InvitedEntity, offset: 0x38, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityWithLineage*  ___InvitedEntity;

/// @brief Field RoleId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___RoleId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::InviteToGroupResponse, ___Expires) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::InviteToGroupResponse, ___Group) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::InviteToGroupResponse, ___InvitedByEntity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::InviteToGroupResponse, ___InvitedEntity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::InviteToGroupResponse, ___RoleId) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::InviteToGroupResponse) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

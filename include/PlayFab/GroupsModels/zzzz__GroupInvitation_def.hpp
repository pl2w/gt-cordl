#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/GroupInvitation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GroupInvitation)
namespace PlayFab::GroupsModels {
class EntityKey;
}
namespace PlayFab::GroupsModels {
class EntityWithLineage;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class GroupInvitation;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::GroupInvitation*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::GroupInvitation*, "PlayFab.GroupsModels", "GroupInvitation");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.DateTime
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.GroupInvitation
class CORDL_TYPE GroupInvitation : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Expires, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Expires, put=__cordl_internal_set_Expires)) ::System::DateTime  Expires;

/// @brief Field Group, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::PlayFab::GroupsModels::EntityKey*  Group;

/// @brief Field InvitedByEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_InvitedByEntity, put=__cordl_internal_set_InvitedByEntity)) ::PlayFab::GroupsModels::EntityWithLineage*  InvitedByEntity;

/// @brief Field InvitedEntity, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_InvitedEntity, put=__cordl_internal_set_InvitedEntity)) ::PlayFab::GroupsModels::EntityWithLineage*  InvitedEntity;

/// @brief Field RoleId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoleId, put=__cordl_internal_set_RoleId)) ::StringW  RoleId;

static inline ::PlayFab::GroupsModels::GroupInvitation* New_ctor() ;

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

/// @brief Method .ctor, addr 0xa840da0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroupInvitation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroupInvitation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupInvitation(GroupInvitation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupInvitation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupInvitation(GroupInvitation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19786};

/// @brief Field Expires, offset: 0x10, size: 0x8, def value: None
 ::System::DateTime  ___Expires;

/// @brief Field Group, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Group;

/// @brief Field InvitedByEntity, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityWithLineage*  ___InvitedByEntity;

/// @brief Field InvitedEntity, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityWithLineage*  ___InvitedEntity;

/// @brief Field RoleId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___RoleId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::GroupInvitation, ___Expires) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::GroupInvitation, ___Group) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::GroupInvitation, ___InvitedByEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::GroupInvitation, ___InvitedEntity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::GroupInvitation, ___RoleId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::GroupInvitation) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

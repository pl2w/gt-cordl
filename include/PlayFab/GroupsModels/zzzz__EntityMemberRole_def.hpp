#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/EntityMemberRole.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EntityMemberRole)
namespace PlayFab::GroupsModels {
class EntityWithLineage;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class EntityMemberRole;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::EntityMemberRole*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::EntityMemberRole*, "PlayFab.GroupsModels", "EntityMemberRole");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.EntityMemberRole
class CORDL_TYPE EntityMemberRole : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Members, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Members, put=__cordl_internal_set_Members)) ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityWithLineage*>*  Members;

/// @brief Field RoleId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoleId, put=__cordl_internal_set_RoleId)) ::StringW  RoleId;

/// @brief Field RoleName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoleName, put=__cordl_internal_set_RoleName)) ::StringW  RoleName;

static inline ::PlayFab::GroupsModels::EntityMemberRole* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityWithLineage*>* const& __cordl_internal_get_Members() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityWithLineage*>*& __cordl_internal_get_Members() ;

constexpr ::StringW const& __cordl_internal_get_RoleId() const;

constexpr ::StringW& __cordl_internal_get_RoleId() ;

constexpr ::StringW const& __cordl_internal_get_RoleName() const;

constexpr ::StringW& __cordl_internal_get_RoleName() ;

constexpr void __cordl_internal_set_Members(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityWithLineage*>*  value) ;

constexpr void __cordl_internal_set_RoleId(::StringW  value) ;

constexpr void __cordl_internal_set_RoleName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840d70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EntityMemberRole() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EntityMemberRole", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EntityMemberRole(EntityMemberRole && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EntityMemberRole", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EntityMemberRole(EntityMemberRole const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19780};

/// @brief Field Members, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityWithLineage*>*  ___Members;

/// @brief Field RoleId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___RoleId;

/// @brief Field RoleName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___RoleName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::EntityMemberRole, ___Members) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::EntityMemberRole, ___RoleId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::EntityMemberRole, ___RoleName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::EntityMemberRole) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

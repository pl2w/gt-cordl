#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/GroupRole.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GroupRole)
// Forward declare root types
namespace PlayFab::GroupsModels {
class GroupRole;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::GroupRole*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::GroupRole*, "PlayFab.GroupsModels", "GroupRole");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.GroupRole
class CORDL_TYPE GroupRole : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field RoleId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoleId, put=__cordl_internal_set_RoleId)) ::StringW  RoleId;

/// @brief Field RoleName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoleName, put=__cordl_internal_set_RoleName)) ::StringW  RoleName;

static inline ::PlayFab::GroupsModels::GroupRole* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_RoleId() const;

constexpr ::StringW& __cordl_internal_get_RoleId() ;

constexpr ::StringW const& __cordl_internal_get_RoleName() const;

constexpr ::StringW& __cordl_internal_get_RoleName() ;

constexpr void __cordl_internal_set_RoleId(::StringW  value) ;

constexpr void __cordl_internal_set_RoleName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840da8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroupRole() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroupRole", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupRole(GroupRole && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupRole", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupRole(GroupRole const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19787};

/// @brief Field RoleId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___RoleId;

/// @brief Field RoleName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___RoleName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::GroupRole, ___RoleId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::GroupRole, ___RoleName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::GroupRole) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

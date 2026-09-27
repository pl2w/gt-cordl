#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/CreateGroupRoleRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateGroupRoleRequest)
namespace PlayFab::GroupsModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class CreateGroupRoleRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::CreateGroupRoleRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::CreateGroupRoleRequest*, "PlayFab.GroupsModels", "CreateGroupRoleRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.CreateGroupRoleRequest
class CORDL_TYPE CreateGroupRoleRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Group, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::PlayFab::GroupsModels::EntityKey*  Group;

/// @brief Field RoleId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoleId, put=__cordl_internal_set_RoleId)) ::StringW  RoleId;

/// @brief Field RoleName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoleName, put=__cordl_internal_set_RoleName)) ::StringW  RoleName;

static inline ::PlayFab::GroupsModels::CreateGroupRoleRequest* New_ctor() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Group() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Group() ;

constexpr ::StringW const& __cordl_internal_get_RoleId() const;

constexpr ::StringW& __cordl_internal_get_RoleId() ;

constexpr ::StringW const& __cordl_internal_get_RoleName() const;

constexpr ::StringW& __cordl_internal_get_RoleName() ;

constexpr void __cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_RoleId(::StringW  value) ;

constexpr void __cordl_internal_set_RoleName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840d40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateGroupRoleRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateGroupRoleRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateGroupRoleRequest(CreateGroupRoleRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateGroupRoleRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateGroupRoleRequest(CreateGroupRoleRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19774};

/// @brief Field Group, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Group;

/// @brief Field RoleId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___RoleId;

/// @brief Field RoleName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___RoleName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::CreateGroupRoleRequest, ___Group) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::CreateGroupRoleRequest, ___RoleId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::CreateGroupRoleRequest, ___RoleName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::CreateGroupRoleRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

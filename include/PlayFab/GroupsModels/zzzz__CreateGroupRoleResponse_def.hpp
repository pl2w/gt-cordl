#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/CreateGroupRoleResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateGroupRoleResponse)
// Forward declare root types
namespace PlayFab::GroupsModels {
class CreateGroupRoleResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::CreateGroupRoleResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::CreateGroupRoleResponse*, "PlayFab.GroupsModels", "CreateGroupRoleResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.CreateGroupRoleResponse
class CORDL_TYPE CreateGroupRoleResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field ProfileVersion, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ProfileVersion, put=__cordl_internal_set_ProfileVersion)) int32_t  ProfileVersion;

/// @brief Field RoleId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoleId, put=__cordl_internal_set_RoleId)) ::StringW  RoleId;

/// @brief Field RoleName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoleName, put=__cordl_internal_set_RoleName)) ::StringW  RoleName;

static inline ::PlayFab::GroupsModels::CreateGroupRoleResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_ProfileVersion() const;

constexpr int32_t& __cordl_internal_get_ProfileVersion() ;

constexpr ::StringW const& __cordl_internal_get_RoleId() const;

constexpr ::StringW& __cordl_internal_get_RoleId() ;

constexpr ::StringW const& __cordl_internal_get_RoleName() const;

constexpr ::StringW& __cordl_internal_get_RoleName() ;

constexpr void __cordl_internal_set_ProfileVersion(int32_t  value) ;

constexpr void __cordl_internal_set_RoleId(::StringW  value) ;

constexpr void __cordl_internal_set_RoleName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840d48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateGroupRoleResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateGroupRoleResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateGroupRoleResponse(CreateGroupRoleResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateGroupRoleResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateGroupRoleResponse(CreateGroupRoleResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19775};

/// @brief Field ProfileVersion, offset: 0x20, size: 0x4, def value: None
 int32_t  ___ProfileVersion;

/// @brief Field RoleId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___RoleId;

/// @brief Field RoleName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___RoleName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::CreateGroupRoleResponse, ___ProfileVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::CreateGroupRoleResponse, ___RoleId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::CreateGroupRoleResponse, ___RoleName) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::CreateGroupRoleResponse) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

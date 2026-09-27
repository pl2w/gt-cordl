#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/UpdateGroupRoleRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateGroupRoleRequest)
namespace PlayFab::GroupsModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class UpdateGroupRoleRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::UpdateGroupRoleRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::UpdateGroupRoleRequest*, "PlayFab.GroupsModels", "UpdateGroupRoleRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.UpdateGroupRoleRequest
class CORDL_TYPE UpdateGroupRoleRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field ExpectedProfileVersion, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_ExpectedProfileVersion, put=__cordl_internal_set_ExpectedProfileVersion)) ::System::Nullable_1<int32_t>  ExpectedProfileVersion;

/// @brief Field Group, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::PlayFab::GroupsModels::EntityKey*  Group;

/// @brief Field RoleId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoleId, put=__cordl_internal_set_RoleId)) ::StringW  RoleId;

/// @brief Field RoleName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoleName, put=__cordl_internal_set_RoleName)) ::StringW  RoleName;

static inline ::PlayFab::GroupsModels::UpdateGroupRoleRequest* New_ctor() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_ExpectedProfileVersion() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_ExpectedProfileVersion() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Group() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Group() ;

constexpr ::StringW const& __cordl_internal_get_RoleId() const;

constexpr ::StringW& __cordl_internal_get_RoleId() ;

constexpr ::StringW const& __cordl_internal_get_RoleName() const;

constexpr ::StringW& __cordl_internal_get_RoleName() ;

constexpr void __cordl_internal_set_ExpectedProfileVersion(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_RoleId(::StringW  value) ;

constexpr void __cordl_internal_set_RoleName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840e68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateGroupRoleRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateGroupRoleRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateGroupRoleRequest(UpdateGroupRoleRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateGroupRoleRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateGroupRoleRequest(UpdateGroupRoleRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19812};

/// @brief Field ExpectedProfileVersion, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___ExpectedProfileVersion;

/// @brief Field Group, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Group;

/// @brief Field RoleId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___RoleId;

/// @brief Field RoleName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___RoleName;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::UpdateGroupRoleRequest, ___ExpectedProfileVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::UpdateGroupRoleRequest, ___Group) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::UpdateGroupRoleRequest, ___RoleId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::UpdateGroupRoleRequest, ___RoleName) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::UpdateGroupRoleRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

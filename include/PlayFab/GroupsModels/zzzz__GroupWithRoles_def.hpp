#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/GroupWithRoles.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GroupWithRoles)
namespace PlayFab::GroupsModels {
class EntityKey;
}
namespace PlayFab::GroupsModels {
class GroupRole;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class GroupWithRoles;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::GroupWithRoles*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::GroupWithRoles*, "PlayFab.GroupsModels", "GroupWithRoles");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.GroupWithRoles
class CORDL_TYPE GroupWithRoles : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Group, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::PlayFab::GroupsModels::EntityKey*  Group;

/// @brief Field GroupName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_GroupName, put=__cordl_internal_set_GroupName)) ::StringW  GroupName;

/// @brief Field ProfileVersion, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ProfileVersion, put=__cordl_internal_set_ProfileVersion)) int32_t  ProfileVersion;

/// @brief Field Roles, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Roles, put=__cordl_internal_set_Roles)) ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupRole*>*  Roles;

static inline ::PlayFab::GroupsModels::GroupWithRoles* New_ctor() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Group() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Group() ;

constexpr ::StringW const& __cordl_internal_get_GroupName() const;

constexpr ::StringW& __cordl_internal_get_GroupName() ;

constexpr int32_t const& __cordl_internal_get_ProfileVersion() const;

constexpr int32_t& __cordl_internal_get_ProfileVersion() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupRole*>* const& __cordl_internal_get_Roles() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupRole*>*& __cordl_internal_get_Roles() ;

constexpr void __cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_GroupName(::StringW  value) ;

constexpr void __cordl_internal_set_ProfileVersion(int32_t  value) ;

constexpr void __cordl_internal_set_Roles(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupRole*>*  value) ;

/// @brief Method .ctor, addr 0xa840db0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroupWithRoles() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroupWithRoles", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupWithRoles(GroupWithRoles && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupWithRoles", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupWithRoles(GroupWithRoles const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19788};

/// @brief Field Group, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Group;

/// @brief Field GroupName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___GroupName;

/// @brief Field ProfileVersion, offset: 0x20, size: 0x4, def value: None
 int32_t  ___ProfileVersion;

/// @brief Field Roles, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupRole*>*  ___Roles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::GroupWithRoles, ___Group) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::GroupWithRoles, ___GroupName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::GroupWithRoles, ___ProfileVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::GroupWithRoles, ___Roles) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::GroupWithRoles) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

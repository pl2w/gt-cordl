#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/GetGroupResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetGroupResponse)
namespace PlayFab::GroupsModels {
class EntityKey;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class GetGroupResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::GetGroupResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::GetGroupResponse*, "PlayFab.GroupsModels", "GetGroupResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.DateTime
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.GetGroupResponse
class CORDL_TYPE GetGroupResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field AdminRoleId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AdminRoleId, put=__cordl_internal_set_AdminRoleId)) ::StringW  AdminRoleId;

/// @brief Field Created, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Created, put=__cordl_internal_set_Created)) ::System::DateTime  Created;

/// @brief Field Group, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::PlayFab::GroupsModels::EntityKey*  Group;

/// @brief Field GroupName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_GroupName, put=__cordl_internal_set_GroupName)) ::StringW  GroupName;

/// @brief Field MemberRoleId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_MemberRoleId, put=__cordl_internal_set_MemberRoleId)) ::StringW  MemberRoleId;

/// @brief Field ProfileVersion, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_ProfileVersion, put=__cordl_internal_set_ProfileVersion)) int32_t  ProfileVersion;

/// @brief Field Roles, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Roles, put=__cordl_internal_set_Roles)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Roles;

static inline ::PlayFab::GroupsModels::GetGroupResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AdminRoleId() const;

constexpr ::StringW& __cordl_internal_get_AdminRoleId() ;

constexpr ::System::DateTime const& __cordl_internal_get_Created() const;

constexpr ::System::DateTime& __cordl_internal_get_Created() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Group() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Group() ;

constexpr ::StringW const& __cordl_internal_get_GroupName() const;

constexpr ::StringW& __cordl_internal_get_GroupName() ;

constexpr ::StringW const& __cordl_internal_get_MemberRoleId() const;

constexpr ::StringW& __cordl_internal_get_MemberRoleId() ;

constexpr int32_t const& __cordl_internal_get_ProfileVersion() const;

constexpr int32_t& __cordl_internal_get_ProfileVersion() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_Roles() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_Roles() ;

constexpr void __cordl_internal_set_AdminRoleId(::StringW  value) ;

constexpr void __cordl_internal_set_Created(::System::DateTime  value) ;

constexpr void __cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_GroupName(::StringW  value) ;

constexpr void __cordl_internal_set_MemberRoleId(::StringW  value) ;

constexpr void __cordl_internal_set_ProfileVersion(int32_t  value) ;

constexpr void __cordl_internal_set_Roles(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa840d88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetGroupResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetGroupResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetGroupResponse(GetGroupResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetGroupResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetGroupResponse(GetGroupResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19783};

/// @brief Field AdminRoleId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___AdminRoleId;

/// @brief Field Created, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  ___Created;

/// @brief Field Group, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Group;

/// @brief Field GroupName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___GroupName;

/// @brief Field MemberRoleId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___MemberRoleId;

/// @brief Field ProfileVersion, offset: 0x48, size: 0x4, def value: None
 int32_t  ___ProfileVersion;

/// @brief Field Roles, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___Roles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::GetGroupResponse, ___AdminRoleId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::GetGroupResponse, ___Created) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::GetGroupResponse, ___Group) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::GetGroupResponse, ___GroupName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::GetGroupResponse, ___MemberRoleId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::GetGroupResponse, ___ProfileVersion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::GetGroupResponse, ___Roles) == 0x50, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::GetGroupResponse) == 0x58, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/UpdateGroupRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateGroupRequest)
namespace PlayFab::GroupsModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class UpdateGroupRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::UpdateGroupRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::UpdateGroupRequest*, "PlayFab.GroupsModels", "UpdateGroupRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.UpdateGroupRequest
class CORDL_TYPE UpdateGroupRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field AdminRoleId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AdminRoleId, put=__cordl_internal_set_AdminRoleId)) ::StringW  AdminRoleId;

/// @brief Field ExpectedProfileVersion, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_ExpectedProfileVersion, put=__cordl_internal_set_ExpectedProfileVersion)) ::System::Nullable_1<int32_t>  ExpectedProfileVersion;

/// @brief Field Group, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::PlayFab::GroupsModels::EntityKey*  Group;

/// @brief Field GroupName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_GroupName, put=__cordl_internal_set_GroupName)) ::StringW  GroupName;

/// @brief Field MemberRoleId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_MemberRoleId, put=__cordl_internal_set_MemberRoleId)) ::StringW  MemberRoleId;

static inline ::PlayFab::GroupsModels::UpdateGroupRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AdminRoleId() const;

constexpr ::StringW& __cordl_internal_get_AdminRoleId() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_ExpectedProfileVersion() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_ExpectedProfileVersion() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Group() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Group() ;

constexpr ::StringW const& __cordl_internal_get_GroupName() const;

constexpr ::StringW& __cordl_internal_get_GroupName() ;

constexpr ::StringW const& __cordl_internal_get_MemberRoleId() const;

constexpr ::StringW& __cordl_internal_get_MemberRoleId() ;

constexpr void __cordl_internal_set_AdminRoleId(::StringW  value) ;

constexpr void __cordl_internal_set_ExpectedProfileVersion(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_GroupName(::StringW  value) ;

constexpr void __cordl_internal_set_MemberRoleId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840e58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateGroupRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateGroupRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateGroupRequest(UpdateGroupRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateGroupRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateGroupRequest(UpdateGroupRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19810};

/// @brief Field AdminRoleId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___AdminRoleId;

/// @brief Field ExpectedProfileVersion, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___ExpectedProfileVersion;

/// @brief Field Group, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Group;

/// @brief Field GroupName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___GroupName;

/// @brief Field MemberRoleId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___MemberRoleId;

/// @brief Size padding 0x40 - 0x48 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::UpdateGroupRequest, ___AdminRoleId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::UpdateGroupRequest, ___ExpectedProfileVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::UpdateGroupRequest, ___Group) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::UpdateGroupRequest, ___GroupName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::UpdateGroupRequest, ___MemberRoleId) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::UpdateGroupRequest) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/GetGroupRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetGroupRequest)
namespace PlayFab::GroupsModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class GetGroupRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::GetGroupRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::GetGroupRequest*, "PlayFab.GroupsModels", "GetGroupRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.GetGroupRequest
class CORDL_TYPE GetGroupRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Group, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::PlayFab::GroupsModels::EntityKey*  Group;

/// @brief Field GroupName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_GroupName, put=__cordl_internal_set_GroupName)) ::StringW  GroupName;

static inline ::PlayFab::GroupsModels::GetGroupRequest* New_ctor() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Group() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Group() ;

constexpr ::StringW const& __cordl_internal_get_GroupName() const;

constexpr ::StringW& __cordl_internal_get_GroupName() ;

constexpr void __cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_GroupName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840d80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetGroupRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetGroupRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetGroupRequest(GetGroupRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetGroupRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetGroupRequest(GetGroupRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19782};

/// @brief Field Group, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Group;

/// @brief Field GroupName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___GroupName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::GetGroupRequest, ___Group) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::GetGroupRequest, ___GroupName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::GetGroupRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

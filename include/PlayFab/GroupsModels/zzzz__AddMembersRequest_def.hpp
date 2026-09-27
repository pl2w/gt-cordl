#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/AddMembersRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AddMembersRequest)
namespace PlayFab::GroupsModels {
class EntityKey;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class AddMembersRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::AddMembersRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::AddMembersRequest*, "PlayFab.GroupsModels", "AddMembersRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.AddMembersRequest
class CORDL_TYPE AddMembersRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Group, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::PlayFab::GroupsModels::EntityKey*  Group;

/// @brief Field Members, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Members, put=__cordl_internal_set_Members)) ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityKey*>*  Members;

/// @brief Field RoleId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoleId, put=__cordl_internal_set_RoleId)) ::StringW  RoleId;

static inline ::PlayFab::GroupsModels::AddMembersRequest* New_ctor() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Group() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Group() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityKey*>* const& __cordl_internal_get_Members() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityKey*>*& __cordl_internal_get_Members() ;

constexpr ::StringW const& __cordl_internal_get_RoleId() const;

constexpr ::StringW& __cordl_internal_get_RoleId() ;

constexpr void __cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_Members(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityKey*>*  value) ;

constexpr void __cordl_internal_set_RoleId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840d08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddMembersRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddMembersRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddMembersRequest(AddMembersRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddMembersRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddMembersRequest(AddMembersRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19767};

/// @brief Field Group, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Group;

/// @brief Field Members, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityKey*>*  ___Members;

/// @brief Field RoleId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___RoleId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::AddMembersRequest, ___Group) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::AddMembersRequest, ___Members) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::AddMembersRequest, ___RoleId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::AddMembersRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

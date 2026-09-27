#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ChangeMemberRoleRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ChangeMemberRoleRequest)
namespace PlayFab::GroupsModels {
class EntityKey;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class ChangeMemberRoleRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::ChangeMemberRoleRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::ChangeMemberRoleRequest*, "PlayFab.GroupsModels", "ChangeMemberRoleRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.ChangeMemberRoleRequest
class CORDL_TYPE ChangeMemberRoleRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field DestinationRoleId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DestinationRoleId, put=__cordl_internal_set_DestinationRoleId)) ::StringW  DestinationRoleId;

/// @brief Field Group, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::PlayFab::GroupsModels::EntityKey*  Group;

/// @brief Field Members, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Members, put=__cordl_internal_set_Members)) ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityKey*>*  Members;

/// @brief Field OriginRoleId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OriginRoleId, put=__cordl_internal_set_OriginRoleId)) ::StringW  OriginRoleId;

static inline ::PlayFab::GroupsModels::ChangeMemberRoleRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_DestinationRoleId() const;

constexpr ::StringW& __cordl_internal_get_DestinationRoleId() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Group() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Group() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityKey*>* const& __cordl_internal_get_Members() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityKey*>*& __cordl_internal_get_Members() ;

constexpr ::StringW const& __cordl_internal_get_OriginRoleId() const;

constexpr ::StringW& __cordl_internal_get_OriginRoleId() ;

constexpr void __cordl_internal_set_DestinationRoleId(::StringW  value) ;

constexpr void __cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_Members(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityKey*>*  value) ;

constexpr void __cordl_internal_set_OriginRoleId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840d28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChangeMemberRoleRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChangeMemberRoleRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeMemberRoleRequest(ChangeMemberRoleRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeMemberRoleRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeMemberRoleRequest(ChangeMemberRoleRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19771};

/// @brief Field DestinationRoleId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___DestinationRoleId;

/// @brief Field Group, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Group;

/// @brief Field Members, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityKey*>*  ___Members;

/// @brief Field OriginRoleId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___OriginRoleId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::ChangeMemberRoleRequest, ___DestinationRoleId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::ChangeMemberRoleRequest, ___Group) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::ChangeMemberRoleRequest, ___Members) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::ChangeMemberRoleRequest, ___OriginRoleId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::ChangeMemberRoleRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ListMembershipOpportunitiesRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(ListMembershipOpportunitiesRequest)
namespace PlayFab::GroupsModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class ListMembershipOpportunitiesRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest*, "PlayFab.GroupsModels", "ListMembershipOpportunitiesRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.ListMembershipOpportunitiesRequest
class CORDL_TYPE ListMembershipOpportunitiesRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::GroupsModels::EntityKey*  Entity;

static inline ::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest* New_ctor() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::GroupsModels::EntityKey*  value) ;

/// @brief Method .ctor, addr 0xa840e18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListMembershipOpportunitiesRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListMembershipOpportunitiesRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListMembershipOpportunitiesRequest(ListMembershipOpportunitiesRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListMembershipOpportunitiesRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListMembershipOpportunitiesRequest(ListMembershipOpportunitiesRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19801};

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Entity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest, ___Entity) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

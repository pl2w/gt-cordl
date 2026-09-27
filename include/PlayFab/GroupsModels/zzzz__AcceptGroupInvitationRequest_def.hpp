#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/AcceptGroupInvitationRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(AcceptGroupInvitationRequest)
namespace PlayFab::GroupsModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class AcceptGroupInvitationRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::AcceptGroupInvitationRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::AcceptGroupInvitationRequest*, "PlayFab.GroupsModels", "AcceptGroupInvitationRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.AcceptGroupInvitationRequest
class CORDL_TYPE AcceptGroupInvitationRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::GroupsModels::EntityKey*  Entity;

/// @brief Field Group, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::PlayFab::GroupsModels::EntityKey*  Group;

static inline ::PlayFab::GroupsModels::AcceptGroupInvitationRequest* New_ctor() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Group() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Group() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::GroupsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value) ;

/// @brief Method .ctor, addr 0xa840d00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AcceptGroupInvitationRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AcceptGroupInvitationRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AcceptGroupInvitationRequest(AcceptGroupInvitationRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AcceptGroupInvitationRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AcceptGroupInvitationRequest(AcceptGroupInvitationRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19766};

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Entity;

/// @brief Field Group, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Group;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::AcceptGroupInvitationRequest, ___Entity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::AcceptGroupInvitationRequest, ___Group) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::AcceptGroupInvitationRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

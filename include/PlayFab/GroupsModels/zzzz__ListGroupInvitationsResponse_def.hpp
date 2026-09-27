#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ListGroupInvitationsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(ListGroupInvitationsResponse)
namespace PlayFab::GroupsModels {
class GroupInvitation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class ListGroupInvitationsResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::ListGroupInvitationsResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::ListGroupInvitationsResponse*, "PlayFab.GroupsModels", "ListGroupInvitationsResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.ListGroupInvitationsResponse
class CORDL_TYPE ListGroupInvitationsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Invitations, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Invitations, put=__cordl_internal_set_Invitations)) ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>*  Invitations;

static inline ::PlayFab::GroupsModels::ListGroupInvitationsResponse* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>* const& __cordl_internal_get_Invitations() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>*& __cordl_internal_get_Invitations() ;

constexpr void __cordl_internal_set_Invitations(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>*  value) ;

/// @brief Method .ctor, addr 0xa840e00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListGroupInvitationsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListGroupInvitationsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListGroupInvitationsResponse(ListGroupInvitationsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListGroupInvitationsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListGroupInvitationsResponse(ListGroupInvitationsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19798};

/// @brief Field Invitations, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>*  ___Invitations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::ListGroupInvitationsResponse, ___Invitations) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::ListGroupInvitationsResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

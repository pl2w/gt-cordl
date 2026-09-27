#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ListMembershipOpportunitiesResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(ListMembershipOpportunitiesResponse)
namespace PlayFab::GroupsModels {
class GroupApplication;
}
namespace PlayFab::GroupsModels {
class GroupInvitation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class ListMembershipOpportunitiesResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse*, "PlayFab.GroupsModels", "ListMembershipOpportunitiesResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.ListMembershipOpportunitiesResponse
class CORDL_TYPE ListMembershipOpportunitiesResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Applications, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Applications, put=__cordl_internal_set_Applications)) ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*  Applications;

/// @brief Field Invitations, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Invitations, put=__cordl_internal_set_Invitations)) ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>*  Invitations;

static inline ::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>* const& __cordl_internal_get_Applications() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*& __cordl_internal_get_Applications() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>* const& __cordl_internal_get_Invitations() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>*& __cordl_internal_get_Invitations() ;

constexpr void __cordl_internal_set_Applications(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*  value) ;

constexpr void __cordl_internal_set_Invitations(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>*  value) ;

/// @brief Method .ctor, addr 0xa840e20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListMembershipOpportunitiesResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListMembershipOpportunitiesResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListMembershipOpportunitiesResponse(ListMembershipOpportunitiesResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListMembershipOpportunitiesResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListMembershipOpportunitiesResponse(ListMembershipOpportunitiesResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19802};

/// @brief Field Applications, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*  ___Applications;

/// @brief Field Invitations, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>*  ___Invitations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse, ___Applications) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse, ___Invitations) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

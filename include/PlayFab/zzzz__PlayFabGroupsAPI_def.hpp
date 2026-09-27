#pragma once
// IWYU pragma private; include "PlayFab/PlayFabGroupsAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabGroupsAPI)
namespace PlayFab::GroupsModels {
class AcceptGroupApplicationRequest;
}
namespace PlayFab::GroupsModels {
class AcceptGroupInvitationRequest;
}
namespace PlayFab::GroupsModels {
class AddMembersRequest;
}
namespace PlayFab::GroupsModels {
class ApplyToGroupRequest;
}
namespace PlayFab::GroupsModels {
class ApplyToGroupResponse;
}
namespace PlayFab::GroupsModels {
class BlockEntityRequest;
}
namespace PlayFab::GroupsModels {
class ChangeMemberRoleRequest;
}
namespace PlayFab::GroupsModels {
class CreateGroupRequest;
}
namespace PlayFab::GroupsModels {
class CreateGroupResponse;
}
namespace PlayFab::GroupsModels {
class CreateGroupRoleRequest;
}
namespace PlayFab::GroupsModels {
class CreateGroupRoleResponse;
}
namespace PlayFab::GroupsModels {
class DeleteGroupRequest;
}
namespace PlayFab::GroupsModels {
class DeleteRoleRequest;
}
namespace PlayFab::GroupsModels {
class EmptyResponse;
}
namespace PlayFab::GroupsModels {
class GetGroupRequest;
}
namespace PlayFab::GroupsModels {
class GetGroupResponse;
}
namespace PlayFab::GroupsModels {
class InviteToGroupRequest;
}
namespace PlayFab::GroupsModels {
class InviteToGroupResponse;
}
namespace PlayFab::GroupsModels {
class IsMemberRequest;
}
namespace PlayFab::GroupsModels {
class IsMemberResponse;
}
namespace PlayFab::GroupsModels {
class ListGroupApplicationsRequest;
}
namespace PlayFab::GroupsModels {
class ListGroupApplicationsResponse;
}
namespace PlayFab::GroupsModels {
class ListGroupBlocksRequest;
}
namespace PlayFab::GroupsModels {
class ListGroupBlocksResponse;
}
namespace PlayFab::GroupsModels {
class ListGroupInvitationsRequest;
}
namespace PlayFab::GroupsModels {
class ListGroupInvitationsResponse;
}
namespace PlayFab::GroupsModels {
class ListGroupMembersRequest;
}
namespace PlayFab::GroupsModels {
class ListGroupMembersResponse;
}
namespace PlayFab::GroupsModels {
class ListMembershipOpportunitiesRequest;
}
namespace PlayFab::GroupsModels {
class ListMembershipOpportunitiesResponse;
}
namespace PlayFab::GroupsModels {
class ListMembershipRequest;
}
namespace PlayFab::GroupsModels {
class ListMembershipResponse;
}
namespace PlayFab::GroupsModels {
class RemoveGroupApplicationRequest;
}
namespace PlayFab::GroupsModels {
class RemoveGroupInvitationRequest;
}
namespace PlayFab::GroupsModels {
class RemoveMembersRequest;
}
namespace PlayFab::GroupsModels {
class UnblockEntityRequest;
}
namespace PlayFab::GroupsModels {
class UpdateGroupRequest;
}
namespace PlayFab::GroupsModels {
class UpdateGroupResponse;
}
namespace PlayFab::GroupsModels {
class UpdateGroupRoleRequest;
}
namespace PlayFab::GroupsModels {
class UpdateGroupRoleResponse;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab {
class PlayFabGroupsAPI;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabGroupsAPI*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabGroupsAPI*, "PlayFab", "PlayFabGroupsAPI");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabGroupsAPI
class CORDL_TYPE PlayFabGroupsAPI : public ::System::Object {
public:
// Declarations
/// @brief Method AcceptGroupApplication, addr 0xa7c7db0, size 0x194, virtual false, abstract: false, final false
static inline void AcceptGroupApplication(::PlayFab::GroupsModels::AcceptGroupApplicationRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method AcceptGroupInvitation, addr 0xa7c7f44, size 0x194, virtual false, abstract: false, final false
static inline void AcceptGroupInvitation(::PlayFab::GroupsModels::AcceptGroupInvitationRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method AddMembers, addr 0xa7c80d8, size 0x194, virtual false, abstract: false, final false
static inline void AddMembers(::PlayFab::GroupsModels::AddMembersRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ApplyToGroup, addr 0xa7c826c, size 0x194, virtual false, abstract: false, final false
static inline void ApplyToGroup(::PlayFab::GroupsModels::ApplyToGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ApplyToGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method BlockEntity, addr 0xa7c8400, size 0x194, virtual false, abstract: false, final false
static inline void BlockEntity(::PlayFab::GroupsModels::BlockEntityRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ChangeMemberRole, addr 0xa7c8594, size 0x194, virtual false, abstract: false, final false
static inline void ChangeMemberRole(::PlayFab::GroupsModels::ChangeMemberRoleRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateGroup, addr 0xa7c8728, size 0x194, virtual false, abstract: false, final false
static inline void CreateGroup(::PlayFab::GroupsModels::CreateGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::CreateGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateRole, addr 0xa7c88bc, size 0x194, virtual false, abstract: false, final false
static inline void CreateRole(::PlayFab::GroupsModels::CreateGroupRoleRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::CreateGroupRoleResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteGroup, addr 0xa7c8a50, size 0x194, virtual false, abstract: false, final false
static inline void DeleteGroup(::PlayFab::GroupsModels::DeleteGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteRole, addr 0xa7c8be4, size 0x194, virtual false, abstract: false, final false
static inline void DeleteRole(::PlayFab::GroupsModels::DeleteRoleRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ForgetAllCredentials, addr 0xa7c7d50, size 0x60, virtual false, abstract: false, final false
static inline void ForgetAllCredentials() ;

/// @brief Method GetGroup, addr 0xa7c8d78, size 0x194, virtual false, abstract: false, final false
static inline void GetGroup(::PlayFab::GroupsModels::GetGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::GetGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method InviteToGroup, addr 0xa7c8f0c, size 0x194, virtual false, abstract: false, final false
static inline void InviteToGroup(::PlayFab::GroupsModels::InviteToGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::InviteToGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method IsEntityLoggedIn, addr 0xa7c7cdc, size 0x74, virtual false, abstract: false, final false
static inline bool IsEntityLoggedIn() ;

/// @brief Method IsMember, addr 0xa7c90a0, size 0x194, virtual false, abstract: false, final false
static inline void IsMember(::PlayFab::GroupsModels::IsMemberRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::IsMemberResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListGroupApplications, addr 0xa7c9234, size 0x194, virtual false, abstract: false, final false
static inline void ListGroupApplications(::PlayFab::GroupsModels::ListGroupApplicationsRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListGroupApplicationsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListGroupBlocks, addr 0xa7c93c8, size 0x194, virtual false, abstract: false, final false
static inline void ListGroupBlocks(::PlayFab::GroupsModels::ListGroupBlocksRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListGroupBlocksResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListGroupInvitations, addr 0xa7c955c, size 0x194, virtual false, abstract: false, final false
static inline void ListGroupInvitations(::PlayFab::GroupsModels::ListGroupInvitationsRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListGroupInvitationsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListGroupMembers, addr 0xa7c96f0, size 0x194, virtual false, abstract: false, final false
static inline void ListGroupMembers(::PlayFab::GroupsModels::ListGroupMembersRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListGroupMembersResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListMembership, addr 0xa7c9884, size 0x194, virtual false, abstract: false, final false
static inline void ListMembership(::PlayFab::GroupsModels::ListMembershipRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListMembershipResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListMembershipOpportunities, addr 0xa7c9a18, size 0x194, virtual false, abstract: false, final false
static inline void ListMembershipOpportunities(::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method RemoveGroupApplication, addr 0xa7c9bac, size 0x194, virtual false, abstract: false, final false
static inline void RemoveGroupApplication(::PlayFab::GroupsModels::RemoveGroupApplicationRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method RemoveGroupInvitation, addr 0xa7c9d40, size 0x194, virtual false, abstract: false, final false
static inline void RemoveGroupInvitation(::PlayFab::GroupsModels::RemoveGroupInvitationRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method RemoveMembers, addr 0xa7c9ed4, size 0x194, virtual false, abstract: false, final false
static inline void RemoveMembers(::PlayFab::GroupsModels::RemoveMembersRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UnblockEntity, addr 0xa7ca068, size 0x194, virtual false, abstract: false, final false
static inline void UnblockEntity(::PlayFab::GroupsModels::UnblockEntityRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UpdateGroup, addr 0xa7ca1fc, size 0x194, virtual false, abstract: false, final false
static inline void UpdateGroup(::PlayFab::GroupsModels::UpdateGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::UpdateGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UpdateRole, addr 0xa7ca390, size 0x194, virtual false, abstract: false, final false
static inline void UpdateRole(::PlayFab::GroupsModels::UpdateGroupRoleRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::UpdateGroupRoleResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabGroupsAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabGroupsAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabGroupsAPI(PlayFabGroupsAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabGroupsAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabGroupsAPI(PlayFabGroupsAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19499};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::PlayFabGroupsAPI) == 0x10, "Size mismatch!");

} // namespace end def PlayFab

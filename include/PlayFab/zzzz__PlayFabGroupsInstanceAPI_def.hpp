#pragma once
// IWYU pragma private; include "PlayFab/PlayFabGroupsInstanceAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabGroupsInstanceAPI)
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
namespace PlayFab::SharedModels {
class IPlayFabInstanceApi;
}
namespace PlayFab {
class PlayFabApiSettings;
}
namespace PlayFab {
class PlayFabAuthenticationContext;
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
class PlayFabGroupsInstanceAPI;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabGroupsInstanceAPI*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabGroupsInstanceAPI*, "PlayFab", "PlayFabGroupsInstanceAPI");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabGroupsInstanceAPI
class CORDL_TYPE PlayFabGroupsInstanceAPI : public ::System::Object {
public:
// Declarations
/// @brief Field apiSettings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_apiSettings, put=__cordl_internal_set_apiSettings)) ::PlayFab::PlayFabApiSettings*  apiSettings;

/// @brief Field authenticationContext, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_authenticationContext, put=__cordl_internal_set_authenticationContext)) ::PlayFab::PlayFabAuthenticationContext*  authenticationContext;

/// @brief Convert operator to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr operator  ::PlayFab::SharedModels::IPlayFabInstanceApi*() noexcept;

/// @brief Method AcceptGroupApplication, addr 0xa7ca668, size 0x18c, virtual false, abstract: false, final false
inline void AcceptGroupApplication(::PlayFab::GroupsModels::AcceptGroupApplicationRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method AcceptGroupInvitation, addr 0xa7ca7f4, size 0x18c, virtual false, abstract: false, final false
inline void AcceptGroupInvitation(::PlayFab::GroupsModels::AcceptGroupInvitationRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method AddMembers, addr 0xa7ca980, size 0x18c, virtual false, abstract: false, final false
inline void AddMembers(::PlayFab::GroupsModels::AddMembersRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ApplyToGroup, addr 0xa7cab0c, size 0x18c, virtual false, abstract: false, final false
inline void ApplyToGroup(::PlayFab::GroupsModels::ApplyToGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ApplyToGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method BlockEntity, addr 0xa7cac98, size 0x18c, virtual false, abstract: false, final false
inline void BlockEntity(::PlayFab::GroupsModels::BlockEntityRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ChangeMemberRole, addr 0xa7cae24, size 0x18c, virtual false, abstract: false, final false
inline void ChangeMemberRole(::PlayFab::GroupsModels::ChangeMemberRoleRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateGroup, addr 0xa7cafb0, size 0x18c, virtual false, abstract: false, final false
inline void CreateGroup(::PlayFab::GroupsModels::CreateGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::CreateGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateRole, addr 0xa7cb13c, size 0x18c, virtual false, abstract: false, final false
inline void CreateRole(::PlayFab::GroupsModels::CreateGroupRoleRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::CreateGroupRoleResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteGroup, addr 0xa7cb2c8, size 0x18c, virtual false, abstract: false, final false
inline void DeleteGroup(::PlayFab::GroupsModels::DeleteGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteRole, addr 0xa7cb454, size 0x18c, virtual false, abstract: false, final false
inline void DeleteRole(::PlayFab::GroupsModels::DeleteRoleRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ForgetAllCredentials, addr 0xa7ca658, size 0x10, virtual false, abstract: false, final false
inline void ForgetAllCredentials() ;

/// @brief Method GetGroup, addr 0xa7cb5e0, size 0x18c, virtual false, abstract: false, final false
inline void GetGroup(::PlayFab::GroupsModels::GetGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::GetGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method InviteToGroup, addr 0xa7cb76c, size 0x18c, virtual false, abstract: false, final false
inline void InviteToGroup(::PlayFab::GroupsModels::InviteToGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::InviteToGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method IsEntityLoggedIn, addr 0xa7ca630, size 0x28, virtual false, abstract: false, final false
inline bool IsEntityLoggedIn() ;

/// @brief Method IsMember, addr 0xa7cb8f8, size 0x18c, virtual false, abstract: false, final false
inline void IsMember(::PlayFab::GroupsModels::IsMemberRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::IsMemberResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListGroupApplications, addr 0xa7cba84, size 0x18c, virtual false, abstract: false, final false
inline void ListGroupApplications(::PlayFab::GroupsModels::ListGroupApplicationsRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListGroupApplicationsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListGroupBlocks, addr 0xa7cbc10, size 0x18c, virtual false, abstract: false, final false
inline void ListGroupBlocks(::PlayFab::GroupsModels::ListGroupBlocksRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListGroupBlocksResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListGroupInvitations, addr 0xa7cbd9c, size 0x18c, virtual false, abstract: false, final false
inline void ListGroupInvitations(::PlayFab::GroupsModels::ListGroupInvitationsRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListGroupInvitationsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListGroupMembers, addr 0xa7cbf28, size 0x18c, virtual false, abstract: false, final false
inline void ListGroupMembers(::PlayFab::GroupsModels::ListGroupMembersRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListGroupMembersResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListMembership, addr 0xa7cc0b4, size 0x18c, virtual false, abstract: false, final false
inline void ListMembership(::PlayFab::GroupsModels::ListMembershipRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListMembershipResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListMembershipOpportunities, addr 0xa7cc240, size 0x18c, virtual false, abstract: false, final false
inline void ListMembershipOpportunities(::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

static inline ::PlayFab::PlayFabGroupsInstanceAPI* New_ctor(::PlayFab::PlayFabAuthenticationContext*  context) ;

static inline ::PlayFab::PlayFabGroupsInstanceAPI* New_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Method RemoveGroupApplication, addr 0xa7cc3cc, size 0x18c, virtual false, abstract: false, final false
inline void RemoveGroupApplication(::PlayFab::GroupsModels::RemoveGroupApplicationRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method RemoveGroupInvitation, addr 0xa7cc558, size 0x18c, virtual false, abstract: false, final false
inline void RemoveGroupInvitation(::PlayFab::GroupsModels::RemoveGroupInvitationRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method RemoveMembers, addr 0xa7cc6e4, size 0x18c, virtual false, abstract: false, final false
inline void RemoveMembers(::PlayFab::GroupsModels::RemoveMembersRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UnblockEntity, addr 0xa7cc870, size 0x18c, virtual false, abstract: false, final false
inline void UnblockEntity(::PlayFab::GroupsModels::UnblockEntityRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UpdateGroup, addr 0xa7cc9fc, size 0x18c, virtual false, abstract: false, final false
inline void UpdateGroup(::PlayFab::GroupsModels::UpdateGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::UpdateGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UpdateRole, addr 0xa7ccb88, size 0x18c, virtual false, abstract: false, final false
inline void UpdateRole(::PlayFab::GroupsModels::UpdateGroupRoleRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::UpdateGroupRoleResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

constexpr ::PlayFab::PlayFabApiSettings* const& __cordl_internal_get_apiSettings() const;

constexpr ::PlayFab::PlayFabApiSettings*& __cordl_internal_get_apiSettings() ;

constexpr ::PlayFab::PlayFabAuthenticationContext* const& __cordl_internal_get_authenticationContext() const;

constexpr ::PlayFab::PlayFabAuthenticationContext*& __cordl_internal_get_authenticationContext() ;

constexpr void __cordl_internal_set_apiSettings(::PlayFab::PlayFabApiSettings*  value) ;

constexpr void __cordl_internal_set_authenticationContext(::PlayFab::PlayFabAuthenticationContext*  value) ;

/// @brief Method .ctor, addr 0xa7ca524, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Method .ctor, addr 0xa7ca5a0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Convert to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* i___PlayFab__SharedModels__IPlayFabInstanceApi() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabGroupsInstanceAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabGroupsInstanceAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabGroupsInstanceAPI(PlayFabGroupsInstanceAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabGroupsInstanceAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabGroupsInstanceAPI(PlayFabGroupsInstanceAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19500};

/// @brief Field apiSettings, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::PlayFabApiSettings*  ___apiSettings;

/// @brief Field authenticationContext, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::PlayFabAuthenticationContext*  ___authenticationContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PlayFabGroupsInstanceAPI, ___apiSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabGroupsInstanceAPI, ___authenticationContext) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PlayFabGroupsInstanceAPI) == 0x20, "Size mismatch!");

} // namespace end def PlayFab

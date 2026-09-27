#pragma once
// IWYU pragma private; include "PlayFab/PlayFabGroupsAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabGroupsAPI_def.hpp"
#include "PlayFab/GroupsModels/zzzz__AcceptGroupApplicationRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__AcceptGroupInvitationRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__AddMembersRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__ApplyToGroupRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__ApplyToGroupResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__BlockEntityRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__ChangeMemberRoleRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__CreateGroupRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__CreateGroupResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__CreateGroupRoleRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__CreateGroupRoleResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__DeleteGroupRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__DeleteRoleRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EmptyResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__GetGroupRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__GetGroupResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__InviteToGroupRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__InviteToGroupResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__IsMemberRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__IsMemberResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__ListGroupApplicationsRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__ListGroupApplicationsResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__ListGroupBlocksRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__ListGroupBlocksResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__ListGroupInvitationsRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__ListGroupInvitationsResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__ListGroupMembersRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__ListGroupMembersResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__ListMembershipOpportunitiesRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__ListMembershipOpportunitiesResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__ListMembershipRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__ListMembershipResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__RemoveGroupApplicationRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__RemoveGroupInvitationRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__RemoveMembersRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__UnblockEntityRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__UpdateGroupRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__UpdateGroupResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__UpdateGroupRoleRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__UpdateGroupRoleResponse_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.IsEntityLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayFab::PlayFabGroupsAPI::IsEntityLoggedIn)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa7c7cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayFab::PlayFabGroupsAPI::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7c7d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.AcceptGroupApplication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::AcceptGroupApplicationRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::AcceptGroupApplication)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c7db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"AcceptGroupApplication", {}, {::i2c::type_of<::PlayFab::GroupsModels::AcceptGroupApplicationRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.AcceptGroupInvitation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::AcceptGroupInvitationRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::AcceptGroupInvitation)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c7f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"AcceptGroupInvitation", {}, {::i2c::type_of<::PlayFab::GroupsModels::AcceptGroupInvitationRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.AddMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::AddMembersRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::AddMembers)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c80d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"AddMembers", {}, {::i2c::type_of<::PlayFab::GroupsModels::AddMembersRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.ApplyToGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::ApplyToGroupRequest*, ::System::Action_1<::PlayFab::GroupsModels::ApplyToGroupResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::ApplyToGroup)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c826c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ApplyToGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::ApplyToGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ApplyToGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.BlockEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::BlockEntityRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::BlockEntity)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c8400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"BlockEntity", {}, {::i2c::type_of<::PlayFab::GroupsModels::BlockEntityRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.ChangeMemberRole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::ChangeMemberRoleRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::ChangeMemberRole)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c8594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ChangeMemberRole", {}, {::i2c::type_of<::PlayFab::GroupsModels::ChangeMemberRoleRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.CreateGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::CreateGroupRequest*, ::System::Action_1<::PlayFab::GroupsModels::CreateGroupResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::CreateGroup)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c8728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"CreateGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::CreateGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::CreateGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.CreateRole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::CreateGroupRoleRequest*, ::System::Action_1<::PlayFab::GroupsModels::CreateGroupRoleResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::CreateRole)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c88bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"CreateRole", {}, {::i2c::type_of<::PlayFab::GroupsModels::CreateGroupRoleRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::CreateGroupRoleResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.DeleteGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::DeleteGroupRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::DeleteGroup)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c8a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"DeleteGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::DeleteGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.DeleteRole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::DeleteRoleRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::DeleteRole)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c8be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"DeleteRole", {}, {::i2c::type_of<::PlayFab::GroupsModels::DeleteRoleRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.GetGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::GetGroupRequest*, ::System::Action_1<::PlayFab::GroupsModels::GetGroupResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::GetGroup)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c8d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"GetGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::GetGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::GetGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.InviteToGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::InviteToGroupRequest*, ::System::Action_1<::PlayFab::GroupsModels::InviteToGroupResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::InviteToGroup)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c8f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"InviteToGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::InviteToGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::InviteToGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.IsMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::IsMemberRequest*, ::System::Action_1<::PlayFab::GroupsModels::IsMemberResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::IsMember)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c90a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"IsMember", {}, {::i2c::type_of<::PlayFab::GroupsModels::IsMemberRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::IsMemberResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.ListGroupApplications
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::ListGroupApplicationsRequest*, ::System::Action_1<::PlayFab::GroupsModels::ListGroupApplicationsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::ListGroupApplications)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c9234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ListGroupApplications", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListGroupApplicationsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListGroupApplicationsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.ListGroupBlocks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::ListGroupBlocksRequest*, ::System::Action_1<::PlayFab::GroupsModels::ListGroupBlocksResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::ListGroupBlocks)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c93c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ListGroupBlocks", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListGroupBlocksRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListGroupBlocksResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.ListGroupInvitations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::ListGroupInvitationsRequest*, ::System::Action_1<::PlayFab::GroupsModels::ListGroupInvitationsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::ListGroupInvitations)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c955c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ListGroupInvitations", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListGroupInvitationsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListGroupInvitationsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.ListGroupMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::ListGroupMembersRequest*, ::System::Action_1<::PlayFab::GroupsModels::ListGroupMembersResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::ListGroupMembers)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c96f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ListGroupMembers", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListGroupMembersRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListGroupMembersResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.ListMembership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::ListMembershipRequest*, ::System::Action_1<::PlayFab::GroupsModels::ListMembershipResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::ListMembership)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c9884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ListMembership", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListMembershipRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListMembershipResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.ListMembershipOpportunities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest*, ::System::Action_1<::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::ListMembershipOpportunities)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c9a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ListMembershipOpportunities", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.RemoveGroupApplication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::RemoveGroupApplicationRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::RemoveGroupApplication)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c9bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"RemoveGroupApplication", {}, {::i2c::type_of<::PlayFab::GroupsModels::RemoveGroupApplicationRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.RemoveGroupInvitation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::RemoveGroupInvitationRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::RemoveGroupInvitation)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c9d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"RemoveGroupInvitation", {}, {::i2c::type_of<::PlayFab::GroupsModels::RemoveGroupInvitationRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.RemoveMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::RemoveMembersRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::RemoveMembers)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c9ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"RemoveMembers", {}, {::i2c::type_of<::PlayFab::GroupsModels::RemoveMembersRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.UnblockEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::UnblockEntityRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::UnblockEntity)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7ca068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"UnblockEntity", {}, {::i2c::type_of<::PlayFab::GroupsModels::UnblockEntityRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.UpdateGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::UpdateGroupRequest*, ::System::Action_1<::PlayFab::GroupsModels::UpdateGroupResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::UpdateGroup)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7ca1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"UpdateGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::UpdateGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::UpdateGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsAPI.UpdateRole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::GroupsModels::UpdateGroupRoleRequest*, ::System::Action_1<::PlayFab::GroupsModels::UpdateGroupRoleResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsAPI::UpdateRole)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7ca390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"UpdateRole", {}, {::i2c::type_of<::PlayFab::GroupsModels::UpdateGroupRoleRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::UpdateGroupRoleResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayFab::PlayFabGroupsAPI::IsEntityLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabGroupsAPI::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabGroupsAPI::AcceptGroupApplication(::PlayFab::GroupsModels::AcceptGroupApplicationRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"AcceptGroupApplication", {}, {::i2c::type_of<::PlayFab::GroupsModels::AcceptGroupApplicationRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::AcceptGroupInvitation(::PlayFab::GroupsModels::AcceptGroupInvitationRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"AcceptGroupInvitation", {}, {::i2c::type_of<::PlayFab::GroupsModels::AcceptGroupInvitationRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::AddMembers(::PlayFab::GroupsModels::AddMembersRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"AddMembers", {}, {::i2c::type_of<::PlayFab::GroupsModels::AddMembersRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::ApplyToGroup(::PlayFab::GroupsModels::ApplyToGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ApplyToGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ApplyToGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::ApplyToGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ApplyToGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::BlockEntity(::PlayFab::GroupsModels::BlockEntityRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"BlockEntity", {}, {::i2c::type_of<::PlayFab::GroupsModels::BlockEntityRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::ChangeMemberRole(::PlayFab::GroupsModels::ChangeMemberRoleRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ChangeMemberRole", {}, {::i2c::type_of<::PlayFab::GroupsModels::ChangeMemberRoleRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::CreateGroup(::PlayFab::GroupsModels::CreateGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::CreateGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"CreateGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::CreateGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::CreateGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::CreateRole(::PlayFab::GroupsModels::CreateGroupRoleRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::CreateGroupRoleResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"CreateRole", {}, {::i2c::type_of<::PlayFab::GroupsModels::CreateGroupRoleRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::CreateGroupRoleResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::DeleteGroup(::PlayFab::GroupsModels::DeleteGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"DeleteGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::DeleteGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::DeleteRole(::PlayFab::GroupsModels::DeleteRoleRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"DeleteRole", {}, {::i2c::type_of<::PlayFab::GroupsModels::DeleteRoleRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::GetGroup(::PlayFab::GroupsModels::GetGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::GetGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"GetGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::GetGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::GetGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::InviteToGroup(::PlayFab::GroupsModels::InviteToGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::InviteToGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"InviteToGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::InviteToGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::InviteToGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::IsMember(::PlayFab::GroupsModels::IsMemberRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::IsMemberResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"IsMember", {}, {::i2c::type_of<::PlayFab::GroupsModels::IsMemberRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::IsMemberResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::ListGroupApplications(::PlayFab::GroupsModels::ListGroupApplicationsRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListGroupApplicationsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ListGroupApplications", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListGroupApplicationsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListGroupApplicationsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::ListGroupBlocks(::PlayFab::GroupsModels::ListGroupBlocksRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListGroupBlocksResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ListGroupBlocks", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListGroupBlocksRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListGroupBlocksResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::ListGroupInvitations(::PlayFab::GroupsModels::ListGroupInvitationsRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListGroupInvitationsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ListGroupInvitations", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListGroupInvitationsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListGroupInvitationsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::ListGroupMembers(::PlayFab::GroupsModels::ListGroupMembersRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListGroupMembersResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ListGroupMembers", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListGroupMembersRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListGroupMembersResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::ListMembership(::PlayFab::GroupsModels::ListMembershipRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListMembershipResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ListMembership", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListMembershipRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListMembershipResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::ListMembershipOpportunities(::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"ListMembershipOpportunities", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::RemoveGroupApplication(::PlayFab::GroupsModels::RemoveGroupApplicationRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"RemoveGroupApplication", {}, {::i2c::type_of<::PlayFab::GroupsModels::RemoveGroupApplicationRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::RemoveGroupInvitation(::PlayFab::GroupsModels::RemoveGroupInvitationRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"RemoveGroupInvitation", {}, {::i2c::type_of<::PlayFab::GroupsModels::RemoveGroupInvitationRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::RemoveMembers(::PlayFab::GroupsModels::RemoveMembersRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"RemoveMembers", {}, {::i2c::type_of<::PlayFab::GroupsModels::RemoveMembersRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::UnblockEntity(::PlayFab::GroupsModels::UnblockEntityRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"UnblockEntity", {}, {::i2c::type_of<::PlayFab::GroupsModels::UnblockEntityRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::UpdateGroup(::PlayFab::GroupsModels::UpdateGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::UpdateGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"UpdateGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::UpdateGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::UpdateGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsAPI::UpdateRole(::PlayFab::GroupsModels::UpdateGroupRoleRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::UpdateGroupRoleResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsAPI*>(),
                        {"UpdateRole", {}, {::i2c::type_of<::PlayFab::GroupsModels::UpdateGroupRoleRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::UpdateGroupRoleResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabGroupsAPI::PlayFabGroupsAPI()   {
}

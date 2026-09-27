#pragma once
// IWYU pragma private; include "PlayFab/PlayFabGroupsInstanceAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabGroupsInstanceAPI_def.hpp"
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
#include "PlayFab/SharedModels/zzzz__IPlayFabInstanceApi_def.hpp"
#include "PlayFab/zzzz__PlayFabApiSettings_def.hpp"
#include "PlayFab/zzzz__PlayFabAuthenticationContext_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::PlayFabAuthenticationContext*)>(&::PlayFab::PlayFabGroupsInstanceAPI::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa7ca524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::PlayFabApiSettings*, ::PlayFab::PlayFabAuthenticationContext*)>(&::PlayFab::PlayFabGroupsInstanceAPI::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa7ca5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.IsEntityLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::PlayFabGroupsInstanceAPI::*)()>(&::PlayFab::PlayFabGroupsInstanceAPI::IsEntityLoggedIn)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa7ca630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)()>(&::PlayFab::PlayFabGroupsInstanceAPI::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa7ca658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.AcceptGroupApplication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::AcceptGroupApplicationRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::AcceptGroupApplication)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7ca668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"AcceptGroupApplication", {}, {::i2c::type_of<::PlayFab::GroupsModels::AcceptGroupApplicationRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.AcceptGroupInvitation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::AcceptGroupInvitationRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::AcceptGroupInvitation)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7ca7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"AcceptGroupInvitation", {}, {::i2c::type_of<::PlayFab::GroupsModels::AcceptGroupInvitationRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.AddMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::AddMembersRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::AddMembers)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7ca980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"AddMembers", {}, {::i2c::type_of<::PlayFab::GroupsModels::AddMembersRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.ApplyToGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::ApplyToGroupRequest*, ::System::Action_1<::PlayFab::GroupsModels::ApplyToGroupResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::ApplyToGroup)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cab0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ApplyToGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::ApplyToGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ApplyToGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.BlockEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::BlockEntityRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::BlockEntity)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cac98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"BlockEntity", {}, {::i2c::type_of<::PlayFab::GroupsModels::BlockEntityRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.ChangeMemberRole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::ChangeMemberRoleRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::ChangeMemberRole)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cae24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ChangeMemberRole", {}, {::i2c::type_of<::PlayFab::GroupsModels::ChangeMemberRoleRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.CreateGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::CreateGroupRequest*, ::System::Action_1<::PlayFab::GroupsModels::CreateGroupResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::CreateGroup)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cafb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"CreateGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::CreateGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::CreateGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.CreateRole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::CreateGroupRoleRequest*, ::System::Action_1<::PlayFab::GroupsModels::CreateGroupRoleResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::CreateRole)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cb13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"CreateRole", {}, {::i2c::type_of<::PlayFab::GroupsModels::CreateGroupRoleRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::CreateGroupRoleResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.DeleteGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::DeleteGroupRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::DeleteGroup)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cb2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"DeleteGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::DeleteGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.DeleteRole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::DeleteRoleRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::DeleteRole)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cb454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"DeleteRole", {}, {::i2c::type_of<::PlayFab::GroupsModels::DeleteRoleRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.GetGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::GetGroupRequest*, ::System::Action_1<::PlayFab::GroupsModels::GetGroupResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::GetGroup)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cb5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"GetGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::GetGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::GetGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.InviteToGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::InviteToGroupRequest*, ::System::Action_1<::PlayFab::GroupsModels::InviteToGroupResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::InviteToGroup)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cb76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"InviteToGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::InviteToGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::InviteToGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.IsMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::IsMemberRequest*, ::System::Action_1<::PlayFab::GroupsModels::IsMemberResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::IsMember)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cb8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"IsMember", {}, {::i2c::type_of<::PlayFab::GroupsModels::IsMemberRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::IsMemberResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.ListGroupApplications
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::ListGroupApplicationsRequest*, ::System::Action_1<::PlayFab::GroupsModels::ListGroupApplicationsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::ListGroupApplications)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cba84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ListGroupApplications", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListGroupApplicationsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListGroupApplicationsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.ListGroupBlocks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::ListGroupBlocksRequest*, ::System::Action_1<::PlayFab::GroupsModels::ListGroupBlocksResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::ListGroupBlocks)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cbc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ListGroupBlocks", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListGroupBlocksRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListGroupBlocksResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.ListGroupInvitations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::ListGroupInvitationsRequest*, ::System::Action_1<::PlayFab::GroupsModels::ListGroupInvitationsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::ListGroupInvitations)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cbd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ListGroupInvitations", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListGroupInvitationsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListGroupInvitationsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.ListGroupMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::ListGroupMembersRequest*, ::System::Action_1<::PlayFab::GroupsModels::ListGroupMembersResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::ListGroupMembers)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cbf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ListGroupMembers", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListGroupMembersRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListGroupMembersResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.ListMembership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::ListMembershipRequest*, ::System::Action_1<::PlayFab::GroupsModels::ListMembershipResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::ListMembership)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cc0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ListMembership", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListMembershipRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListMembershipResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.ListMembershipOpportunities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest*, ::System::Action_1<::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::ListMembershipOpportunities)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cc240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ListMembershipOpportunities", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.RemoveGroupApplication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::RemoveGroupApplicationRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::RemoveGroupApplication)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cc3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"RemoveGroupApplication", {}, {::i2c::type_of<::PlayFab::GroupsModels::RemoveGroupApplicationRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.RemoveGroupInvitation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::RemoveGroupInvitationRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::RemoveGroupInvitation)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cc558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"RemoveGroupInvitation", {}, {::i2c::type_of<::PlayFab::GroupsModels::RemoveGroupInvitationRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.RemoveMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::RemoveMembersRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::RemoveMembers)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cc6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"RemoveMembers", {}, {::i2c::type_of<::PlayFab::GroupsModels::RemoveMembersRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.UnblockEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::UnblockEntityRequest*, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::UnblockEntity)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cc870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"UnblockEntity", {}, {::i2c::type_of<::PlayFab::GroupsModels::UnblockEntityRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.UpdateGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::UpdateGroupRequest*, ::System::Action_1<::PlayFab::GroupsModels::UpdateGroupResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::UpdateGroup)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cc9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"UpdateGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::UpdateGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::UpdateGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabGroupsInstanceAPI.UpdateRole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabGroupsInstanceAPI::*)(::PlayFab::GroupsModels::UpdateGroupRoleRequest*, ::System::Action_1<::PlayFab::GroupsModels::UpdateGroupRoleResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabGroupsInstanceAPI::UpdateRole)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7ccb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"UpdateRole", {}, {::i2c::type_of<::PlayFab::GroupsModels::UpdateGroupRoleRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::UpdateGroupRoleResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::PlayFabApiSettings*& PlayFab::PlayFabGroupsInstanceAPI::__cordl_internal_get_apiSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiSettings;
}
constexpr ::PlayFab::PlayFabApiSettings* const& PlayFab::PlayFabGroupsInstanceAPI::__cordl_internal_get_apiSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiSettings;
}
constexpr void PlayFab::PlayFabGroupsInstanceAPI::__cordl_internal_set_apiSettings(::PlayFab::PlayFabApiSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___apiSettings = value;
}
constexpr ::PlayFab::PlayFabAuthenticationContext*& PlayFab::PlayFabGroupsInstanceAPI::__cordl_internal_get_authenticationContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authenticationContext;
}
constexpr ::PlayFab::PlayFabAuthenticationContext* const& PlayFab::PlayFabGroupsInstanceAPI::__cordl_internal_get_authenticationContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authenticationContext;
}
constexpr void PlayFab::PlayFabGroupsInstanceAPI::__cordl_internal_set_authenticationContext(::PlayFab::PlayFabAuthenticationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authenticationContext = value;
}
inline void PlayFab::PlayFabGroupsInstanceAPI::_ctor(::PlayFab::PlayFabAuthenticationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, context);
}
inline bool PlayFab::PlayFabGroupsInstanceAPI::IsEntityLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::AcceptGroupApplication(::PlayFab::GroupsModels::AcceptGroupApplicationRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"AcceptGroupApplication", {}, {::i2c::type_of<::PlayFab::GroupsModels::AcceptGroupApplicationRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::AcceptGroupInvitation(::PlayFab::GroupsModels::AcceptGroupInvitationRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"AcceptGroupInvitation", {}, {::i2c::type_of<::PlayFab::GroupsModels::AcceptGroupInvitationRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::AddMembers(::PlayFab::GroupsModels::AddMembersRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"AddMembers", {}, {::i2c::type_of<::PlayFab::GroupsModels::AddMembersRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::ApplyToGroup(::PlayFab::GroupsModels::ApplyToGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ApplyToGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ApplyToGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::ApplyToGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ApplyToGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::BlockEntity(::PlayFab::GroupsModels::BlockEntityRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"BlockEntity", {}, {::i2c::type_of<::PlayFab::GroupsModels::BlockEntityRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::ChangeMemberRole(::PlayFab::GroupsModels::ChangeMemberRoleRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ChangeMemberRole", {}, {::i2c::type_of<::PlayFab::GroupsModels::ChangeMemberRoleRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::CreateGroup(::PlayFab::GroupsModels::CreateGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::CreateGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"CreateGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::CreateGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::CreateGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::CreateRole(::PlayFab::GroupsModels::CreateGroupRoleRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::CreateGroupRoleResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"CreateRole", {}, {::i2c::type_of<::PlayFab::GroupsModels::CreateGroupRoleRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::CreateGroupRoleResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::DeleteGroup(::PlayFab::GroupsModels::DeleteGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"DeleteGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::DeleteGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::DeleteRole(::PlayFab::GroupsModels::DeleteRoleRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"DeleteRole", {}, {::i2c::type_of<::PlayFab::GroupsModels::DeleteRoleRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::GetGroup(::PlayFab::GroupsModels::GetGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::GetGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"GetGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::GetGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::GetGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::InviteToGroup(::PlayFab::GroupsModels::InviteToGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::InviteToGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"InviteToGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::InviteToGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::InviteToGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::IsMember(::PlayFab::GroupsModels::IsMemberRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::IsMemberResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"IsMember", {}, {::i2c::type_of<::PlayFab::GroupsModels::IsMemberRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::IsMemberResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::ListGroupApplications(::PlayFab::GroupsModels::ListGroupApplicationsRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListGroupApplicationsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ListGroupApplications", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListGroupApplicationsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListGroupApplicationsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::ListGroupBlocks(::PlayFab::GroupsModels::ListGroupBlocksRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListGroupBlocksResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ListGroupBlocks", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListGroupBlocksRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListGroupBlocksResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::ListGroupInvitations(::PlayFab::GroupsModels::ListGroupInvitationsRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListGroupInvitationsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ListGroupInvitations", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListGroupInvitationsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListGroupInvitationsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::ListGroupMembers(::PlayFab::GroupsModels::ListGroupMembersRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListGroupMembersResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ListGroupMembers", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListGroupMembersRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListGroupMembersResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::ListMembership(::PlayFab::GroupsModels::ListMembershipRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListMembershipResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ListMembership", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListMembershipRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListMembershipResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::ListMembershipOpportunities(::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"ListMembershipOpportunities", {}, {::i2c::type_of<::PlayFab::GroupsModels::ListMembershipOpportunitiesRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::RemoveGroupApplication(::PlayFab::GroupsModels::RemoveGroupApplicationRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"RemoveGroupApplication", {}, {::i2c::type_of<::PlayFab::GroupsModels::RemoveGroupApplicationRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::RemoveGroupInvitation(::PlayFab::GroupsModels::RemoveGroupInvitationRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"RemoveGroupInvitation", {}, {::i2c::type_of<::PlayFab::GroupsModels::RemoveGroupInvitationRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::RemoveMembers(::PlayFab::GroupsModels::RemoveMembersRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"RemoveMembers", {}, {::i2c::type_of<::PlayFab::GroupsModels::RemoveMembersRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::UnblockEntity(::PlayFab::GroupsModels::UnblockEntityRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"UnblockEntity", {}, {::i2c::type_of<::PlayFab::GroupsModels::UnblockEntityRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::UpdateGroup(::PlayFab::GroupsModels::UpdateGroupRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::UpdateGroupResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"UpdateGroup", {}, {::i2c::type_of<::PlayFab::GroupsModels::UpdateGroupRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::UpdateGroupResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabGroupsInstanceAPI::UpdateRole(::PlayFab::GroupsModels::UpdateGroupRoleRequest*  request, ::System::Action_1<::PlayFab::GroupsModels::UpdateGroupRoleResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabGroupsInstanceAPI*>(),
                        {"UpdateRole", {}, {::i2c::type_of<::PlayFab::GroupsModels::UpdateGroupRoleRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::GroupsModels::UpdateGroupRoleResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline ::PlayFab::PlayFabGroupsInstanceAPI* PlayFab::PlayFabGroupsInstanceAPI::New_ctor(::PlayFab::PlayFabAuthenticationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabGroupsInstanceAPI*>(context));
}
inline ::PlayFab::PlayFabGroupsInstanceAPI* PlayFab::PlayFabGroupsInstanceAPI::New_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabGroupsInstanceAPI*>(settings, context));
}
/// @brief Convert operator to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr  PlayFab::PlayFabGroupsInstanceAPI::operator ::PlayFab::SharedModels::IPlayFabInstanceApi*() noexcept {
return static_cast<::PlayFab::SharedModels::IPlayFabInstanceApi*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* PlayFab::PlayFabGroupsInstanceAPI::i___PlayFab__SharedModels__IPlayFabInstanceApi() noexcept {
return static_cast<::PlayFab::SharedModels::IPlayFabInstanceApi*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabGroupsInstanceAPI::PlayFabGroupsInstanceAPI()   {
}

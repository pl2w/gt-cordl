#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/FriendsMatchmaking.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__FriendsMatchmaking_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomOperationResult_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__FriendsMatchmaking__JoinRoom_d__25_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__FriendsMatchmaking__OnJoinIntentReceived_d__31_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__FriendsMatchmaking__OnRoomOperationResult_d__24_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__FriendsMatchmaking__RegisterGameRoom_d__27_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__FriendsMatchmaking_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__PlatformInfo_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchInvitePanelFlowResult_def.hpp"
#include "Oculus/Platform/zzzz__GroupPresenceOptions_def.hpp"
#include "Oculus/Platform/zzzz__InviteOptions_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/zzzz__RosterOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.get_DestinationApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_DestinationApi)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6cccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"get_DestinationApi", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.set_DestinationApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_DestinationApi)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6ccd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"set_DestinationApi", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.get_InviteMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_InviteMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6ccdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"get_InviteMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.set_InviteMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_InviteMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6cce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"set_InviteMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.get_MaxRetries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_MaxRetries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6ccec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"get_MaxRetries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.set_MaxRetries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(uint32_t)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_MaxRetries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6ccf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"set_MaxRetries", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::Awake)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9f6ccfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnEnable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9f6d164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnDisable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9f6d294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.LaunchFriendsInvitePanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchFriendsInvitePanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6d3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"LaunchFriendsInvitePanel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.LaunchFriendsInvitePanelAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>* (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::Oculus::Platform::InviteOptions*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchFriendsInvitePanelAsync)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x9f6d3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"LaunchFriendsInvitePanelAsync", {}, {::i2c::type_of<::Oculus::Platform::InviteOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.LaunchRosterPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchRosterPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6d554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"LaunchRosterPanel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.LaunchRosterPanelAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::Oculus::Platform::RosterOptions*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchRosterPanelAsync)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9f6d55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"LaunchRosterPanelAsync", {}, {::i2c::type_of<::Oculus::Platform::RosterOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnRoomOperationResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::GlobalNamespace::CustomMatchmaking_RoomOperationResult)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnRoomOperationResult)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f6d6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.JoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::StringW, ::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::JoinRoom)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9f6d7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.ClearGroupPresenceCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::ClearGroupPresenceCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f6d8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.RegisterGameRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::StringW, ::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::RegisterGameRoom)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9f6d9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"RegisterGameRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.ClearGroupPresence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* (*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::ClearGroupPresence)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9f6d8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"ClearGroupPresence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.SetGroupPresence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* (*)(::Oculus::Platform::GroupPresenceOptions*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::SetGroupPresence)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9f6daf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"SetGroupPresence", {}, {::i2c::type_of<::Oculus::Platform::GroupPresenceOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnEntitlementFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnEntitlementFinished)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9f6dc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"OnEntitlementFinished", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnJoinIntentReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnJoinIntentReceived)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9f6dd58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnInvitationsSent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnInvitationsSent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9f6de18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"OnInvitationsSent", {}, {::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnLeaveIntentNotification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnLeaveIntentNotification)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9f6de78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"OnLeaveIntentNotification", {}, {::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.GetGroupPresenceOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::GroupPresenceOptions* (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::StringW, ::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::GetGroupPresenceOptions)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9f6ded8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9f6dfb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_destinationApi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationApi;
}
constexpr ::StringW const& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_destinationApi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationApi;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_set_destinationApi(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationApi = value;
}
constexpr ::StringW& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_inviteMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inviteMessage;
}
constexpr ::StringW const& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_inviteMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inviteMessage;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_set_inviteMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inviteMessage = value;
}
constexpr uint32_t& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_maxRetries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRetries;
}
constexpr uint32_t const& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_maxRetries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRetries;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_set_maxRetries(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRetries = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_onMatchRequestFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMatchRequestFound;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* const& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_onMatchRequestFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMatchRequestFound;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_set_onMatchRequestFound(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onMatchRequestFound = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>*& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_onInvitationsSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onInvitationsSent;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>* const& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_onInvitationsSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onInvitationsSent;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_set_onInvitationsSent(::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onInvitationsSent = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>*& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_onLeaveIntentReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLeaveIntentReceived;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>* const& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_onLeaveIntentReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLeaveIntentReceived;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_set_onLeaveIntentReceived(::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onLeaveIntentReceived = value;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get__customMatchmaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customMatchmaking;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> const& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get__customMatchmaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customMatchmaking;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_set__customMatchmaking(::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customMatchmaking = value;
}
inline ::StringW Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_DestinationApi()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"get_DestinationApi", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_DestinationApi(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"set_DestinationApi", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_InviteMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"get_InviteMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_InviteMessage(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"set_InviteMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_MaxRetries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"get_MaxRetries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_MaxRetries(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"set_MaxRetries", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchFriendsInvitePanel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"LaunchFriendsInvitePanel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchFriendsInvitePanelAsync(::Oculus::Platform::InviteOptions*  inviteOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"LaunchFriendsInvitePanelAsync", {}, {::i2c::type_of<::Oculus::Platform::InviteOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>*>(this, ___internal_method, inviteOptions);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchRosterPanel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"LaunchRosterPanel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchRosterPanelAsync(::Oculus::Platform::RosterOptions*  rosterOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"LaunchRosterPanelAsync", {}, {::i2c::type_of<::Oculus::Platform::RosterOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>*>(this, ___internal_method, rosterOptions);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnRoomOperationResult(::GlobalNamespace::CustomMatchmaking_RoomOperationResult  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::Threading::Tasks::Task* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::JoinRoom(::StringW  roomId, ::StringW  roomPassword)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, roomId, roomPassword);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::ClearGroupPresenceCallback()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::RegisterGameRoom(::StringW  roomId, ::StringW  roomPassword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"RegisterGameRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, roomId, roomPassword);
}
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::ClearGroupPresence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"ClearGroupPresence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::SetGroupPresence(::Oculus::Platform::GroupPresenceOptions*  groupPresenceOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"SetGroupPresence", {}, {::i2c::type_of<::Oculus::Platform::GroupPresenceOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>*>(nullptr, ___internal_method, groupPresenceOptions);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnEntitlementFinished(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"OnEntitlementFinished", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnJoinIntentReceived(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnInvitationsSent(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"OnInvitationsSent", {}, {::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnLeaveIntentNotification(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {"OnLeaveIntentNotification", {}, {::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Oculus::Platform::GroupPresenceOptions* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::GetGroupPresenceOptions(::StringW  roomId, ::StringW  roomPassword)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::GroupPresenceOptions*>(this, ___internal_method, roomId, roomPassword);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::FriendsMatchmaking()   {
}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6dc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0._SetGroupPresence_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::*)(::Oculus::Platform::Message*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::_SetGroupPresence_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f6e2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*>(),
                        {"<SetGroupPresence>b__0", {}, {::i2c::type_of<::Oculus::Platform::Message*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* const& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::_SetGroupPresence_b__0(::Oculus::Platform::Message*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*>(),
                        {"<SetGroupPresence>b__0", {}, {::i2c::type_of<::Oculus::Platform::Message*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::FriendsMatchmaking___c__DisplayClass29_0()   {
}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6dae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0._ClearGroupPresence_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::*)(::Oculus::Platform::Message*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::_ClearGroupPresence_b__0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9f6e1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*>(),
                        {"<ClearGroupPresence>b__0", {}, {::i2c::type_of<::Oculus::Platform::Message*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* const& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::_ClearGroupPresence_b__0(::Oculus::Platform::Message*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*>(),
                        {"<ClearGroupPresence>b__0", {}, {::i2c::type_of<::Oculus::Platform::Message*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::FriendsMatchmaking___c__DisplayClass28_0()   {
}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6d6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0._LaunchRosterPanelAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::*)(::Oculus::Platform::Message*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::_LaunchRosterPanelAsync_b__0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9f6e120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*>(),
                        {"<LaunchRosterPanelAsync>b__0", {}, {::i2c::type_of<::Oculus::Platform::Message*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* const& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::_LaunchRosterPanelAsync_b__0(::Oculus::Platform::Message*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*>(),
                        {"<LaunchRosterPanelAsync>b__0", {}, {::i2c::type_of<::Oculus::Platform::Message*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::FriendsMatchmaking___c__DisplayClass23_0()   {
}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6d54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0._LaunchFriendsInvitePanelAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::_LaunchFriendsInvitePanelAsync_b__0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9f6e044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*>(),
                        {"<LaunchFriendsInvitePanelAsync>b__0", {}, {::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>*& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>* const& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::_LaunchFriendsInvitePanelAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*>(),
                        {"<LaunchFriendsInvitePanelAsync>b__0", {}, {::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::FriendsMatchmaking___c__DisplayClass21_0()   {
}

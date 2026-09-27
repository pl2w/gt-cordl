#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/FriendsMatchmaking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FriendsMatchmaking)
namespace GlobalNamespace {
struct CustomMatchmaking_RoomOperationResult;
}
namespace GlobalNamespace {
struct FriendsMatchmaking__JoinRoom_d__25;
}
namespace GlobalNamespace {
struct FriendsMatchmaking__OnJoinIntentReceived_d__31;
}
namespace GlobalNamespace {
struct FriendsMatchmaking__OnRoomOperationResult_d__24;
}
namespace GlobalNamespace {
struct FriendsMatchmaking__RegisterGameRoom_d__27;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class CustomMatchmaking;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking___c__DisplayClass21_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking___c__DisplayClass23_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking___c__DisplayClass28_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking___c__DisplayClass29_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct PlatformInfo;
}
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
namespace Oculus::Platform::Models {
class GroupPresenceLeaveIntent;
}
namespace Oculus::Platform::Models {
class InvitePanelResultInfo;
}
namespace Oculus::Platform::Models {
class LaunchInvitePanelFlowResult;
}
namespace Oculus::Platform {
class GroupPresenceOptions;
}
namespace Oculus::Platform {
class InviteOptions;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
class RosterOptions;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking___c__DisplayClass21_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking___c__DisplayClass23_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking___c__DisplayClass28_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking___c__DisplayClass29_0;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*, "Meta.XR.MultiplayerBlocks.Shared", "FriendsMatchmaking");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*, "Meta.XR.MultiplayerBlocks.Shared", "FriendsMatchmaking/<>c__DisplayClass21_0");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*, "Meta.XR.MultiplayerBlocks.Shared", "FriendsMatchmaking/<>c__DisplayClass23_0");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*, "Meta.XR.MultiplayerBlocks.Shared", "FriendsMatchmaking/<>c__DisplayClass28_0");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*, "Meta.XR.MultiplayerBlocks.Shared", "FriendsMatchmaking/<>c__DisplayClass29_0");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking
class CORDL_TYPE FriendsMatchmaking : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _JoinRoom_d__25 = ::GlobalNamespace::FriendsMatchmaking__JoinRoom_d__25;

using _OnJoinIntentReceived_d__31 = ::GlobalNamespace::FriendsMatchmaking__OnJoinIntentReceived_d__31;

using _OnRoomOperationResult_d__24 = ::GlobalNamespace::FriendsMatchmaking__OnRoomOperationResult_d__24;

using _RegisterGameRoom_d__27 = ::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27;

using __c__DisplayClass21_0 = ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0;

using __c__DisplayClass23_0 = ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0;

using __c__DisplayClass28_0 = ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0;

using __c__DisplayClass29_0 = ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0;

 __declspec(property(get=get_DestinationApi, put=set_DestinationApi)) ::StringW  DestinationApi;

 __declspec(property(get=get_InviteMessage, put=set_InviteMessage)) ::StringW  InviteMessage;

 __declspec(property(get=get_MaxRetries, put=set_MaxRetries)) uint32_t  MaxRetries;

/// @brief Field _customMatchmaking, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__customMatchmaking, put=__cordl_internal_set__customMatchmaking)) ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>  _customMatchmaking;

/// @brief Field destinationApi, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_destinationApi, put=__cordl_internal_set_destinationApi)) ::StringW  destinationApi;

/// @brief Field inviteMessage, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_inviteMessage, put=__cordl_internal_set_inviteMessage)) ::StringW  inviteMessage;

/// @brief Field maxRetries, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRetries, put=__cordl_internal_set_maxRetries)) uint32_t  maxRetries;

/// @brief Field onInvitationsSent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onInvitationsSent, put=__cordl_internal_set_onInvitationsSent)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>*  onInvitationsSent;

/// @brief Field onLeaveIntentReceived, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onLeaveIntentReceived, put=__cordl_internal_set_onLeaveIntentReceived)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>*  onLeaveIntentReceived;

/// @brief Field onMatchRequestFound, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onMatchRequestFound, put=__cordl_internal_set_onMatchRequestFound)) ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*  onMatchRequestFound;

/// @brief Method Awake, addr 0x9f6ccfc, size 0x124, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearGroupPresence, addr 0x9f6d8ac, size 0x130, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* ClearGroupPresence() ;

/// @brief Method ClearGroupPresenceCallback, addr 0x9f6d8a8, size 0x4, virtual true, abstract: false, final false
inline void ClearGroupPresenceCallback() ;

/// @brief Method GetGroupPresenceOptions, addr 0x9f6ded8, size 0xe0, virtual true, abstract: false, final false
inline ::Oculus::Platform::GroupPresenceOptions* GetGroupPresenceOptions(::StringW  roomId, ::StringW  roomPassword) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking::<JoinRoom>d__25))]
/// @brief Method JoinRoom, addr 0x9f6d7a0, size 0x108, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* JoinRoom(::StringW  roomId, ::StringW  roomPassword) ;

/// [DebugMember((Meta.XR.ImmersiveDebugger.DebugColor)1, Category = "Friends Matchmaking")]
/// @brief Method LaunchFriendsInvitePanel, addr 0x9f6d3c4, size 0x8, virtual false, abstract: false, final false
inline void LaunchFriendsInvitePanel() ;

/// @brief Method LaunchFriendsInvitePanelAsync, addr 0x9f6d3cc, size 0x180, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>* LaunchFriendsInvitePanelAsync(::Oculus::Platform::InviteOptions*  inviteOptions) ;

/// [DebugMember((Meta.XR.ImmersiveDebugger.DebugColor)1, Category = "Friends Matchmaking")]
/// @brief Method LaunchRosterPanel, addr 0x9f6d554, size 0x8, virtual false, abstract: false, final false
inline void LaunchRosterPanel() ;

/// @brief Method LaunchRosterPanelAsync, addr 0x9f6d55c, size 0x16c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* LaunchRosterPanelAsync(::Oculus::Platform::RosterOptions*  rosterOptions) ;

static inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking* New_ctor() ;

/// @brief Method OnDisable, addr 0x9f6d294, size 0x130, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9f6d164, size 0x130, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEntitlementFinished, addr 0x9f6dc38, size 0x120, virtual false, abstract: false, final false
inline void OnEntitlementFinished(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo  info) ;

/// @brief Method OnInvitationsSent, addr 0x9f6de18, size 0x60, virtual false, abstract: false, final false
inline void OnInvitationsSent(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*  message) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking::<OnJoinIntentReceived>d__31))]
/// @brief Method OnJoinIntentReceived, addr 0x9f6dd58, size 0xc0, virtual true, abstract: false, final false
inline void OnJoinIntentReceived(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*  message) ;

/// @brief Method OnLeaveIntentNotification, addr 0x9f6de78, size 0x60, virtual false, abstract: false, final false
inline void OnLeaveIntentNotification(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*  message) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking::<OnRoomOperationResult>d__24))]
/// @brief Method OnRoomOperationResult, addr 0x9f6d6d0, size 0xd0, virtual true, abstract: false, final false
inline void OnRoomOperationResult(::GlobalNamespace::CustomMatchmaking_RoomOperationResult  result) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking::<RegisterGameRoom>d__27))]
/// @brief Method RegisterGameRoom, addr 0x9f6d9dc, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* RegisterGameRoom(::StringW  roomId, ::StringW  roomPassword) ;

/// @brief Method SetGroupPresence, addr 0x9f6daf0, size 0x140, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* SetGroupPresence(::Oculus::Platform::GroupPresenceOptions*  groupPresenceOptions) ;

constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> const& __cordl_internal_get__customMatchmaking() const;

constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>& __cordl_internal_get__customMatchmaking() ;

constexpr ::StringW const& __cordl_internal_get_destinationApi() const;

constexpr ::StringW& __cordl_internal_get_destinationApi() ;

constexpr ::StringW const& __cordl_internal_get_inviteMessage() const;

constexpr ::StringW& __cordl_internal_get_inviteMessage() ;

constexpr uint32_t const& __cordl_internal_get_maxRetries() const;

constexpr uint32_t& __cordl_internal_get_maxRetries() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>* const& __cordl_internal_get_onInvitationsSent() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>*& __cordl_internal_get_onInvitationsSent() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>* const& __cordl_internal_get_onLeaveIntentReceived() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>*& __cordl_internal_get_onLeaveIntentReceived() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* const& __cordl_internal_get_onMatchRequestFound() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*& __cordl_internal_get_onMatchRequestFound() ;

constexpr void __cordl_internal_set__customMatchmaking(::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>  value) ;

constexpr void __cordl_internal_set_destinationApi(::StringW  value) ;

constexpr void __cordl_internal_set_inviteMessage(::StringW  value) ;

constexpr void __cordl_internal_set_maxRetries(uint32_t  value) ;

constexpr void __cordl_internal_set_onInvitationsSent(::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>*  value) ;

constexpr void __cordl_internal_set_onLeaveIntentReceived(::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>*  value) ;

constexpr void __cordl_internal_set_onMatchRequestFound(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*  value) ;

/// @brief Method .ctor, addr 0x9f6dfb8, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DestinationApi, addr 0x9f6cccc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DestinationApi() ;

/// @brief Method get_InviteMessage, addr 0x9f6ccdc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_InviteMessage() ;

/// @brief Method get_MaxRetries, addr 0x9f6ccec, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_MaxRetries() ;

/// @brief Method set_DestinationApi, addr 0x9f6ccd4, size 0x8, virtual false, abstract: false, final false
inline void set_DestinationApi(::StringW  value) ;

/// @brief Method set_InviteMessage, addr 0x9f6cce4, size 0x8, virtual false, abstract: false, final false
inline void set_InviteMessage(::StringW  value) ;

/// @brief Method set_MaxRetries, addr 0x9f6ccf4, size 0x8, virtual false, abstract: false, final false
inline void set_MaxRetries(uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendsMatchmaking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendsMatchmaking(FriendsMatchmaking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendsMatchmaking(FriendsMatchmaking const& ) = delete;

/// @brief Field DebugCategory offset 0xffffffff size 0x8
static constexpr ::ConstString  DebugCategory{u"Friends Matchmaking"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30640};

/// [SerializeField]
/// [Tooltip("Destination\'s API name obtained from developer.oculus.com under Engagement > Destinations.")]
/// @brief Field destinationApi, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___destinationApi;

/// [SerializeField]
/// [Tooltip("Optional message to be sent when inviting friends to join a game room.")]
/// @brief Field inviteMessage, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___inviteMessage;

/// [SerializeField]
/// [Tooltip("Maximum number of retries should a Platform SDK request fail.")]
/// @brief Field maxRetries, offset: 0x30, size: 0x4, def value: None
 uint32_t  ___maxRetries;

/// [SerializeField]
/// @brief Field onMatchRequestFound, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*  ___onMatchRequestFound;

/// [SerializeField]
/// @brief Field onInvitationsSent, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>*  ___onInvitationsSent;

/// [SerializeField]
/// @brief Field onLeaveIntentReceived, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>*  ___onLeaveIntentReceived;

/// @brief Field _customMatchmaking, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>  ____customMatchmaking;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking, ___destinationApi) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking, ___inviteMessage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking, ___maxRetries) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking, ___onMatchRequestFound) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking, ___onInvitationsSent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking, ___onLeaveIntentReceived) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking, ____customMatchmaking) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking) == 0x58, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Shared
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking/<>c__DisplayClass29_0
class CORDL_TYPE FriendsMatchmaking___c__DisplayClass29_0 : public ::System::Object {
public:
// Declarations
/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*  tcs;

static inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0* New_ctor() ;

/// @brief Method <SetGroupPresence>b__0, addr 0x9f6e2d8, size 0x58, virtual false, abstract: false, final false
inline void _SetGroupPresence_b__0(::Oculus::Platform::Message*  message) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*  value) ;

/// @brief Method .ctor, addr 0x9f6dc30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendsMatchmaking___c__DisplayClass29_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking___c__DisplayClass29_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendsMatchmaking___c__DisplayClass29_0(FriendsMatchmaking___c__DisplayClass29_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking___c__DisplayClass29_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendsMatchmaking___c__DisplayClass29_0(FriendsMatchmaking___c__DisplayClass29_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30635};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*  ___tcs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0) == 0x18, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Shared
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking/<>c__DisplayClass28_0
class CORDL_TYPE FriendsMatchmaking___c__DisplayClass28_0 : public ::System::Object {
public:
// Declarations
/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*  tcs;

static inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0* New_ctor() ;

/// @brief Method <ClearGroupPresence>b__0, addr 0x9f6e1fc, size 0xdc, virtual false, abstract: false, final false
inline void _ClearGroupPresence_b__0(::Oculus::Platform::Message*  message) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*  value) ;

/// @brief Method .ctor, addr 0x9f6dae8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendsMatchmaking___c__DisplayClass28_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking___c__DisplayClass28_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendsMatchmaking___c__DisplayClass28_0(FriendsMatchmaking___c__DisplayClass28_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking___c__DisplayClass28_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendsMatchmaking___c__DisplayClass28_0(FriendsMatchmaking___c__DisplayClass28_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30634};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*  ___tcs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0) == 0x18, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Shared
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking/<>c__DisplayClass23_0
class CORDL_TYPE FriendsMatchmaking___c__DisplayClass23_0 : public ::System::Object {
public:
// Declarations
/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*  tcs;

static inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0* New_ctor() ;

/// @brief Method <LaunchRosterPanelAsync>b__0, addr 0x9f6e120, size 0xdc, virtual false, abstract: false, final false
inline void _LaunchRosterPanelAsync_b__0(::Oculus::Platform::Message*  message) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*  value) ;

/// @brief Method .ctor, addr 0x9f6d6c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendsMatchmaking___c__DisplayClass23_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking___c__DisplayClass23_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendsMatchmaking___c__DisplayClass23_0(FriendsMatchmaking___c__DisplayClass23_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking___c__DisplayClass23_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendsMatchmaking___c__DisplayClass23_0(FriendsMatchmaking___c__DisplayClass23_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30633};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*  ___tcs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0) == 0x18, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Shared
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking/<>c__DisplayClass21_0
class CORDL_TYPE FriendsMatchmaking___c__DisplayClass21_0 : public ::System::Object {
public:
// Declarations
/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>*  tcs;

static inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0* New_ctor() ;

/// @brief Method <LaunchFriendsInvitePanelAsync>b__0, addr 0x9f6e044, size 0xdc, virtual false, abstract: false, final false
inline void _LaunchFriendsInvitePanelAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*  message) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>*  value) ;

/// @brief Method .ctor, addr 0x9f6d54c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendsMatchmaking___c__DisplayClass21_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking___c__DisplayClass21_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendsMatchmaking___c__DisplayClass21_0(FriendsMatchmaking___c__DisplayClass21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking___c__DisplayClass21_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendsMatchmaking___c__DisplayClass21_0(FriendsMatchmaking___c__DisplayClass21_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30632};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>*  ___tcs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0) == 0x18, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Shared

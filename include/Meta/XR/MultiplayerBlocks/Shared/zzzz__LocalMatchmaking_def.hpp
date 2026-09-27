#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/LocalMatchmaking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalMatchmaking)
namespace GlobalNamespace {
struct CustomMatchmaking_RoomOperationResult;
}
namespace GlobalNamespace {
struct LocalMatchmaking__HostOrJoinSessionAutomatically_d__16;
}
namespace GlobalNamespace {
struct LocalMatchmaking__OnColocationSessionFound_d__18;
}
namespace GlobalNamespace {
struct LocalMatchmaking__StartAdvertisingColocationSession_d__19;
}
namespace GlobalNamespace {
struct LocalMatchmaking__StartAsGuest_d__15;
}
namespace GlobalNamespace {
struct LocalMatchmaking__StartAsHost_d__14;
}
namespace GlobalNamespace {
struct LocalMatchmaking__StartDiscoveringColocationSessions_d__21;
}
namespace GlobalNamespace {
struct LocalMatchmaking__StopAdvertisingColocationSession_d__20;
}
namespace GlobalNamespace {
struct LocalMatchmaking__StopDiscoveringColocationSessions_d__22;
}
namespace GlobalNamespace {
struct OVRColocationSession_Data;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class CustomMatchmaking;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
struct Guid;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class LocalMatchmaking;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*, "Meta.XR.MultiplayerBlocks.Shared", "LocalMatchmaking");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking
class CORDL_TYPE LocalMatchmaking : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _HostOrJoinSessionAutomatically_d__16 = ::GlobalNamespace::LocalMatchmaking__HostOrJoinSessionAutomatically_d__16;

using _OnColocationSessionFound_d__18 = ::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18;

using _StartAdvertisingColocationSession_d__19 = ::GlobalNamespace::LocalMatchmaking__StartAdvertisingColocationSession_d__19;

using _StartAsGuest_d__15 = ::GlobalNamespace::LocalMatchmaking__StartAsGuest_d__15;

using _StartAsHost_d__14 = ::GlobalNamespace::LocalMatchmaking__StartAsHost_d__14;

using _StartDiscoveringColocationSessions_d__21 = ::GlobalNamespace::LocalMatchmaking__StartDiscoveringColocationSessions_d__21;

using _StopAdvertisingColocationSession_d__20 = ::GlobalNamespace::LocalMatchmaking__StopAdvertisingColocationSession_d__20;

using _StopDiscoveringColocationSessions_d__22 = ::GlobalNamespace::LocalMatchmaking__StopDiscoveringColocationSessions_d__22;

/// @brief Field BeforeStartHost, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BeforeStartHost, put=setStaticF_BeforeStartHost)) ::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*  BeforeStartHost;

/// @brief Field ExtraData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ExtraData, put=setStaticF_ExtraData)) ::StringW  ExtraData;

/// @brief Field OnSessionCreateFailed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSessionCreateFailed, put=setStaticF_OnSessionCreateFailed)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  OnSessionCreateFailed;

/// @brief Field OnSessionCreateSucceeded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSessionCreateSucceeded, put=setStaticF_OnSessionCreateSucceeded)) ::UnityEngine::Events::UnityEvent_1<::System::Guid>*  OnSessionCreateSucceeded;

/// @brief Field OnSessionDiscoverFailed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSessionDiscoverFailed, put=setStaticF_OnSessionDiscoverFailed)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  OnSessionDiscoverFailed;

/// @brief Field OnSessionDiscoverSucceeded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSessionDiscoverSucceeded, put=setStaticF_OnSessionDiscoverSucceeded)) ::UnityEngine::Events::UnityEvent_1<::System::Guid>*  OnSessionDiscoverSucceeded;

/// @brief Field _customMatchmaking, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__customMatchmaking, put=__cordl_internal_set__customMatchmaking)) ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>  _customMatchmaking;

/// @brief Field _discoveredLocalSessionAsGuest, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__discoveredLocalSessionAsGuest, put=__cordl_internal_set__discoveredLocalSessionAsGuest)) bool  _discoveredLocalSessionAsGuest;

/// @brief Field automaticHostOrJoin, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_automaticHostOrJoin, put=__cordl_internal_set_automaticHostOrJoin)) bool  automaticHostOrJoin;

/// @brief Field timeDiscoveringInSec, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeDiscoveringInSec, put=__cordl_internal_set_timeDiscoveringInSec)) int32_t  timeDiscoveringInSec;

/// @brief Method Awake, addr 0x9f6eeac, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking::<HostOrJoinSessionAutomatically>d__16))]
/// @brief Method HostOrJoinSessionAutomatically, addr 0x9f6f16c, size 0xa8, virtual false, abstract: false, final false
inline void HostOrJoinSessionAutomatically() ;

static inline ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking* New_ctor() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking::<OnColocationSessionFound>d__18))]
/// @brief Method OnColocationSessionFound, addr 0x9f6f548, size 0xd4, virtual false, abstract: false, final false
inline void OnColocationSessionFound(::GlobalNamespace::OVRColocationSession_Data  data) ;

/// @brief Method OnDisable, addr 0x9f6f070, size 0xec, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9f6ef84, size 0xec, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRoomCreationFinished, addr 0x9f6f3e0, size 0xc4, virtual false, abstract: false, final false
inline void OnRoomCreationFinished(::GlobalNamespace::CustomMatchmaking_RoomOperationResult  result) ;

/// @brief Method ReportDiscoverEvent, addr 0x9f6f7f8, size 0x88, virtual false, abstract: false, final false
static inline void ReportDiscoverEvent(::GlobalNamespace::OVRColocationSession_Data  data) ;

/// @brief Method Start, addr 0x9f6f15c, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking::<StartAdvertisingColocationSession>d__19))]
/// @brief Method StartAdvertisingColocationSession, addr 0x9f6f4a4, size 0xa4, virtual false, abstract: false, final false
static inline void StartAdvertisingColocationSession(::ArrayW<uint8_t>  data) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking::<StartAsGuest>d__15))]
/// @brief Method StartAsGuest, addr 0x9f6f2f0, size 0xf0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StartAsGuest(bool  stopAfterTimeout) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking::<StartAsHost>d__14))]
/// @brief Method StartAsHost, addr 0x9f6f214, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StartAsHost() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking::<StartDiscoveringColocationSessions>d__21))]
/// @brief Method StartDiscoveringColocationSessions, addr 0x9f6f6b0, size 0xa4, virtual false, abstract: false, final false
static inline void StartDiscoveringColocationSessions(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*  onGroupFound) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking::<StopAdvertisingColocationSession>d__20))]
/// @brief Method StopAdvertisingColocationSession, addr 0x9f6f61c, size 0x94, virtual false, abstract: false, final false
static inline void StopAdvertisingColocationSession() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking::<StopDiscoveringColocationSessions>d__22))]
/// @brief Method StopDiscoveringColocationSessions, addr 0x9f6f754, size 0xa4, virtual false, abstract: false, final false
static inline void StopDiscoveringColocationSessions(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*  onGroupFound) ;

constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> const& __cordl_internal_get__customMatchmaking() const;

constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>& __cordl_internal_get__customMatchmaking() ;

constexpr bool const& __cordl_internal_get__discoveredLocalSessionAsGuest() const;

constexpr bool& __cordl_internal_get__discoveredLocalSessionAsGuest() ;

constexpr bool const& __cordl_internal_get_automaticHostOrJoin() const;

constexpr bool& __cordl_internal_get_automaticHostOrJoin() ;

constexpr int32_t const& __cordl_internal_get_timeDiscoveringInSec() const;

constexpr int32_t& __cordl_internal_get_timeDiscoveringInSec() ;

constexpr void __cordl_internal_set__customMatchmaking(::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>  value) ;

constexpr void __cordl_internal_set__discoveredLocalSessionAsGuest(bool  value) ;

constexpr void __cordl_internal_set_automaticHostOrJoin(bool  value) ;

constexpr void __cordl_internal_set_timeDiscoveringInSec(int32_t  value) ;

/// @brief Method .ctor, addr 0x9f6f880, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>* getStaticF_BeforeStartHost() ;

static inline ::StringW getStaticF_ExtraData() ;

static inline ::UnityEngine::Events::UnityEvent_1<::StringW>* getStaticF_OnSessionCreateFailed() ;

static inline ::UnityEngine::Events::UnityEvent_1<::System::Guid>* getStaticF_OnSessionCreateSucceeded() ;

static inline ::UnityEngine::Events::UnityEvent_1<::StringW>* getStaticF_OnSessionDiscoverFailed() ;

static inline ::UnityEngine::Events::UnityEvent_1<::System::Guid>* getStaticF_OnSessionDiscoverSucceeded() ;

static inline void setStaticF_BeforeStartHost(::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*  value) ;

static inline void setStaticF_ExtraData(::StringW  value) ;

static inline void setStaticF_OnSessionCreateFailed(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

static inline void setStaticF_OnSessionCreateSucceeded(::UnityEngine::Events::UnityEvent_1<::System::Guid>*  value) ;

static inline void setStaticF_OnSessionDiscoverFailed(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

static inline void setStaticF_OnSessionDiscoverSucceeded(::UnityEngine::Events::UnityEvent_1<::System::Guid>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalMatchmaking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalMatchmaking", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalMatchmaking(LocalMatchmaking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalMatchmaking", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalMatchmaking(LocalMatchmaking const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30649};

/// [Tooltip("On Start(), players will automatically discover local sessions and start hosting if no sessions found.")]
/// [SerializeField]
/// @brief Field automaticHostOrJoin, offset: 0x20, size: 0x1, def value: None
 bool  ___automaticHostOrJoin;

/// [Tooltip("Seconds to wait for discovering local sessions, if not found then creating their own session")]
/// [SerializeField]
/// @brief Field timeDiscoveringInSec, offset: 0x24, size: 0x4, def value: None
 int32_t  ___timeDiscoveringInSec;

/// @brief Field _customMatchmaking, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>  ____customMatchmaking;

/// @brief Field _discoveredLocalSessionAsGuest, offset: 0x30, size: 0x1, def value: None
 bool  ____discoveredLocalSessionAsGuest;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking, ___automaticHostOrJoin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking, ___timeDiscoveringInSec) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking, ____customMatchmaking) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking, ____discoveredLocalSessionAsGuest) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking) == 0x38, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Shared

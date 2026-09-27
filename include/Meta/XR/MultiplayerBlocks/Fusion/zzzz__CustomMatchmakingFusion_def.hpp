#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/CustomMatchmakingFusion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__GameMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMatchmakingFusion)
namespace Fusion {
struct GameMode;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct NetworkSceneInfo;
}
namespace Fusion {
struct SceneRef;
}
namespace Fusion {
class SessionInfo;
}
namespace GlobalNamespace {
struct CustomMatchmakingFusion__CreateRoom_d__11;
}
namespace GlobalNamespace {
struct CustomMatchmakingFusion__GetSessionList_d__25;
}
namespace GlobalNamespace {
struct CustomMatchmakingFusion__JoinOpenRoom_d__13;
}
namespace GlobalNamespace {
struct CustomMatchmakingFusion__JoinRoom_d__12;
}
namespace GlobalNamespace {
struct CustomMatchmaking_RoomCreationOptions;
}
namespace GlobalNamespace {
struct CustomMatchmaking_RoomOperationResult;
}
namespace Meta::XR::MultiplayerBlocks::Fusion {
class CustomMatchmakingFusion___c__DisplayClass25_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class CustomMatchmaking_ICustomMatchmakingBehaviour;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Fusion {
class CustomMatchmakingFusion;
}
namespace Meta::XR::MultiplayerBlocks::Fusion {
class CustomMatchmakingFusion___c__DisplayClass25_0;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*, "Meta.XR.MultiplayerBlocks.Fusion", "CustomMatchmakingFusion");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0*, "Meta.XR.MultiplayerBlocks.Fusion", "CustomMatchmakingFusion/<>c__DisplayClass25_0");
// Dependencies Fusion.GameMode, UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion
class CORDL_TYPE CustomMatchmakingFusion : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CreateRoom_d__11 = ::GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11;

using _GetSessionList_d__25 = ::GlobalNamespace::CustomMatchmakingFusion__GetSessionList_d__25;

using _JoinOpenRoom_d__13 = ::GlobalNamespace::CustomMatchmakingFusion__JoinOpenRoom_d__13;

using _JoinRoom_d__12 = ::GlobalNamespace::CustomMatchmakingFusion__JoinRoom_d__12;

using __c__DisplayClass25_0 = ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0;

 __declspec(property(get=get_ConnectedRoomToken)) ::StringW  ConnectedRoomToken;

 __declspec(property(get=get_GameMode, put=set_GameMode)) ::Fusion::GameMode  GameMode;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_SupportsRoomPassword)) bool  SupportsRoomPassword;

/// @brief Field _runnerPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__runnerPrefab, put=__cordl_internal_set__runnerPrefab)) ::UnityW<::Fusion::NetworkRunner>  _runnerPrefab;

/// @brief Field _sessionList, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessionList, put=__cordl_internal_set__sessionList)) ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  _sessionList;

/// @brief Field gameMode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameMode, put=__cordl_internal_set_gameMode)) ::Fusion::GameMode  gameMode;

/// @brief Field getSessionListTimeoutS, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_getSessionListTimeoutS, put=__cordl_internal_set_getSessionListTimeoutS)) int32_t  getSessionListTimeoutS;

/// @brief Convert operator to "::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour"
constexpr operator  ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*() noexcept;

/// @brief Method Awake, addr 0x9f5a0d0, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearSessionList, addr 0x9f5af7c, size 0xc, virtual false, abstract: false, final false
inline void ClearSessionList() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion::<CreateRoom>d__11))]
/// @brief Method CreateRoom, addr 0x9f5a52c, size 0x12c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* CreateRoom(::GlobalNamespace::CustomMatchmaking_RoomCreationOptions  options) ;

/// @brief Method GetActiveNetworkRunner, addr 0x9f5ab90, size 0x234, virtual false, abstract: false, final false
static inline ::UnityW<::Fusion::NetworkRunner> GetActiveNetworkRunner() ;

/// @brief Method GetSceneInfo, addr 0x9f5ade8, size 0xbc, virtual false, abstract: false, final false
static inline ::Fusion::NetworkSceneInfo GetSceneInfo() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion::<GetSessionList>d__25))]
/// @brief Method GetSessionList, addr 0x9f5af88, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>* GetSessionList(float_t  timeoutS) ;

/// @brief Method InitializeNetworkRunner, addr 0x9f5a440, size 0xec, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkRunner> InitializeNetworkRunner() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion::<JoinOpenRoom>d__13))]
/// @brief Method JoinOpenRoom, addr 0x9f5a790, size 0x120, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* JoinOpenRoom(::StringW  lobbyName) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion::<JoinRoom>d__12))]
/// @brief Method JoinRoom, addr 0x9f5a658, size 0x138, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* JoinRoom(::StringW  roomToken, ::StringW  roomPassword) ;

/// @brief Method LeaveRoom, addr 0x9f5a8b0, size 0x274, virtual true, abstract: false, final true
inline void LeaveRoom() ;

static inline ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion* New_ctor() ;

/// @brief Method OnDisable, addr 0x9f5a2f4, size 0x7c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9f5a1a8, size 0x7c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSessionListUpdated, addr 0x9f5b11c, size 0xc, virtual false, abstract: false, final false
inline void OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList) ;

/// @brief Method SelectSessionToJoinFromList, addr 0x9f5b0a4, size 0x78, virtual true, abstract: false, final false
inline ::Fusion::SessionInfo* SelectSessionToJoinFromList(::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList) ;

/// @brief Method TryGetActiveSceneRef, addr 0x9f5aea4, size 0xd8, virtual false, abstract: false, final false
static inline bool TryGetActiveSceneRef(::by_ref<::Fusion::SceneRef>  sceneRef) ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get__runnerPrefab() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get__runnerPrefab() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>* const& __cordl_internal_get__sessionList() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*& __cordl_internal_get__sessionList() ;

constexpr ::Fusion::GameMode const& __cordl_internal_get_gameMode() const;

constexpr ::Fusion::GameMode& __cordl_internal_get_gameMode() ;

constexpr int32_t const& __cordl_internal_get_getSessionListTimeoutS() const;

constexpr int32_t& __cordl_internal_get_getSessionListTimeoutS() ;

constexpr void __cordl_internal_set__runnerPrefab(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set__sessionList(::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  value) ;

constexpr void __cordl_internal_set_gameMode(::Fusion::GameMode  value) ;

constexpr void __cordl_internal_set_getSessionListTimeoutS(int32_t  value) ;

/// @brief Method .ctor, addr 0x9f5b128, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ConnectedRoomToken, addr 0x9f5adc4, size 0x24, virtual true, abstract: false, final true
inline ::StringW get_ConnectedRoomToken() ;

/// @brief Method get_GameMode, addr 0x9f5a0c0, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::GameMode get_GameMode() ;

/// @brief Method get_IsConnected, addr 0x9f5ab2c, size 0x64, virtual true, abstract: false, final true
inline bool get_IsConnected() ;

/// @brief Method get_SupportsRoomPassword, addr 0x9f5ab24, size 0x8, virtual true, abstract: false, final true
inline bool get_SupportsRoomPassword() ;

/// @brief Convert to "::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour"
constexpr ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour* i___Meta__XR__MultiplayerBlocks__Shared__CustomMatchmaking_ICustomMatchmakingBehaviour() noexcept;

/// @brief Method set_GameMode, addr 0x9f5a0c8, size 0x8, virtual false, abstract: false, final false
inline void set_GameMode(::Fusion::GameMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMatchmakingFusion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMatchmakingFusion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMatchmakingFusion(CustomMatchmakingFusion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMatchmakingFusion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMatchmakingFusion(CustomMatchmakingFusion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31173};

/// [SerializeField]
/// [Tooltip("Indicates the chosen game mode to be used.")]
/// @brief Field gameMode, offset: 0x20, size: 0x4, def value: None
 ::Fusion::GameMode  ___gameMode;

/// [SerializeField]
/// [Tooltip("Amount of time in seconds to wait for receiving the session list of a lobby before timing out.")]
/// @brief Field getSessionListTimeoutS, offset: 0x24, size: 0x4, def value: None
 int32_t  ___getSessionListTimeoutS;

/// @brief Field _runnerPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ____runnerPrefab;

/// @brief Field _sessionList, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  ____sessionList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion, ___gameMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion, ___getSessionListTimeoutS) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion, ____runnerPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion, ____sessionList) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion) == 0x38, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion/<>c__DisplayClass25_0
class CORDL_TYPE CustomMatchmakingFusion___c__DisplayClass25_0 : public ::System::Object {
public:
// Declarations
/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*  tcs;

static inline ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0* New_ctor() ;

/// @brief Method <GetSessionList>b__0, addr 0x9f5b144, size 0x54, virtual false, abstract: false, final false
inline void _GetSessionList_b__0() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*  value) ;

/// @brief Method .ctor, addr 0x9f5b13c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMatchmakingFusion___c__DisplayClass25_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMatchmakingFusion___c__DisplayClass25_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMatchmakingFusion___c__DisplayClass25_0(CustomMatchmakingFusion___c__DisplayClass25_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMatchmakingFusion___c__DisplayClass25_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMatchmakingFusion___c__DisplayClass25_0(CustomMatchmakingFusion___c__DisplayClass25_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31168};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*  ___tcs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0) == 0x18, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Fusion

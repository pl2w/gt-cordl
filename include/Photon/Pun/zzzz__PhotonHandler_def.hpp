#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__ConnectionHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonHandler)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Pun {
class PhotonHandler___c;
}
namespace Photon::Realtime {
class FriendInfo;
}
namespace Photon::Realtime {
class IInRoomCallbacks;
}
namespace Photon::Realtime {
class IMatchmakingCallbacks;
}
namespace Photon::Realtime {
class Player;
}
namespace Photon::Realtime {
class SupportLogger;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityAction_2;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonHandler;
}
namespace Photon::Pun {
class PhotonHandler___c;
}
// Write type traits
MARK_REF_T(::Photon::Pun::PhotonHandler*);
MARK_REF_T(::Photon::Pun::PhotonHandler___c*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonHandler*, "Photon.Pun", "PhotonHandler");
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonHandler___c*, "Photon.Pun", "PhotonHandler/<>c");
// Dependencies Photon.Realtime.ConnectionHandler
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonHandler
class CORDL_TYPE PhotonHandler : public ::Photon::Realtime::ConnectionHandler {
public:
// Declarations
using __c = ::Photon::Pun::PhotonHandler___c;

/// @brief Field MaxDatagrams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MaxDatagrams, put=setStaticF_MaxDatagrams)) int32_t  MaxDatagrams;

/// @brief Field SendAsap, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_SendAsap, put=setStaticF_SendAsap)) bool  SendAsap;

/// @brief Field UpdateInterval, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_UpdateInterval, put=__cordl_internal_set_UpdateInterval)) int32_t  UpdateInterval;

/// @brief Field UpdateIntervalOnSerialize, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_UpdateIntervalOnSerialize, put=__cordl_internal_set_UpdateIntervalOnSerialize)) int32_t  UpdateIntervalOnSerialize;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::Photon::Pun::PhotonHandler>  instance;

/// @brief Field nextSendTickCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextSendTickCount, put=__cordl_internal_set_nextSendTickCount)) int32_t  nextSendTickCount;

/// @brief Field nextSendTickCountOnSerialize, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextSendTickCountOnSerialize, put=__cordl_internal_set_nextSendTickCountOnSerialize)) int32_t  nextSendTickCountOnSerialize;

/// @brief Field reusableIntList, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_reusableIntList, put=__cordl_internal_set_reusableIntList)) ::System::Collections::Generic::List_1<int32_t>*  reusableIntList;

/// @brief Field supportLoggerComponent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_supportLoggerComponent, put=__cordl_internal_set_supportLoggerComponent)) ::UnityW<::Photon::Realtime::SupportLogger>  supportLoggerComponent;

/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr operator  ::Photon::Realtime::IInRoomCallbacks*() noexcept;

/// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr operator  ::Photon::Realtime::IMatchmakingCallbacks*() noexcept;

/// @brief Method Awake, addr 0xa712490, size 0x120, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Dispatch, addr 0xa7131a0, size 0x2a0, virtual false, abstract: false, final false
inline void Dispatch() ;

/// @brief Method FixedUpdate, addr 0xa71311c, size 0x84, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method LateUpdate, addr 0xa713440, size 0x290, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Photon::Pun::PhotonHandler* New_ctor() ;

/// @brief Method OnCreateRoomFailed, addr 0xa714980, size 0x4, virtual true, abstract: false, final true
inline void OnCreateRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnCreatedRoom, addr 0xa713b4c, size 0x5c, virtual true, abstract: false, final true
inline void OnCreatedRoom() ;

/// @brief Method OnDisable, addr 0xa712e18, size 0x60, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa7125b0, size 0x35c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFriendListUpdate, addr 0xa71497c, size 0x4, virtual true, abstract: false, final true
inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*  friendList) ;

/// @brief Method OnJoinRandomFailed, addr 0xa714988, size 0x4, virtual true, abstract: false, final true
inline void OnJoinRandomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinRoomFailed, addr 0xa714984, size 0x4, virtual true, abstract: false, final true
inline void OnJoinRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinedRoom, addr 0xa71498c, size 0x184, virtual true, abstract: false, final true
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0xa714c30, size 0x50, virtual true, abstract: false, final true
inline void OnLeftRoom() ;

/// @brief Method OnMasterClientSwitched, addr 0xa714304, size 0x1a0, virtual true, abstract: false, final true
inline void OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method OnPlayerEnteredRoom, addr 0xa715000, size 0x4, virtual true, abstract: false, final true
inline void OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0xa715004, size 0x2f8, virtual true, abstract: false, final true
inline void OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method OnPlayerPropertiesUpdate, addr 0xa714300, size 0x4, virtual true, abstract: false, final true
inline void OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps) ;

/// @brief Method OnPreLeavingRoom, addr 0xa714ffc, size 0x4, virtual true, abstract: false, final true
inline void OnPreLeavingRoom() ;

/// @brief Method OnRoomPropertiesUpdate, addr 0xa71407c, size 0x4c, virtual true, abstract: false, final true
inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged) ;

/// @brief Method Start, addr 0xa712d18, size 0x100, virtual false, abstract: false, final false
inline void Start() ;

constexpr int32_t const& __cordl_internal_get_UpdateInterval() const;

constexpr int32_t& __cordl_internal_get_UpdateInterval() ;

constexpr int32_t const& __cordl_internal_get_UpdateIntervalOnSerialize() const;

constexpr int32_t& __cordl_internal_get_UpdateIntervalOnSerialize() ;

constexpr int32_t const& __cordl_internal_get_nextSendTickCount() const;

constexpr int32_t& __cordl_internal_get_nextSendTickCount() ;

constexpr int32_t const& __cordl_internal_get_nextSendTickCountOnSerialize() const;

constexpr int32_t& __cordl_internal_get_nextSendTickCountOnSerialize() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_reusableIntList() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_reusableIntList() ;

constexpr ::UnityW<::Photon::Realtime::SupportLogger> const& __cordl_internal_get_supportLoggerComponent() const;

constexpr ::UnityW<::Photon::Realtime::SupportLogger>& __cordl_internal_get_supportLoggerComponent() ;

constexpr void __cordl_internal_set_UpdateInterval(int32_t  value) ;

constexpr void __cordl_internal_set_UpdateIntervalOnSerialize(int32_t  value) ;

constexpr void __cordl_internal_set_nextSendTickCount(int32_t  value) ;

constexpr void __cordl_internal_set_nextSendTickCountOnSerialize(int32_t  value) ;

constexpr void __cordl_internal_set_reusableIntList(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_supportLoggerComponent(::UnityW<::Photon::Realtime::SupportLogger>  value) ;

/// @brief Method .ctor, addr 0xa715424, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_MaxDatagrams() ;

static inline bool getStaticF_SendAsap() ;

static inline ::UnityW<::Photon::Pun::PhotonHandler> getStaticF_instance() ;

/// @brief Method get_Instance, addr 0xa7122bc, size 0x1d4, virtual false, abstract: false, final false
static inline ::UnityW<::Photon::Pun::PhotonHandler> get_Instance() ;

/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* i___Photon__Realtime__IInRoomCallbacks() noexcept;

/// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Photon::Realtime::IMatchmakingCallbacks* i___Photon__Realtime__IMatchmakingCallbacks() noexcept;

static inline void setStaticF_MaxDatagrams(int32_t  value) ;

static inline void setStaticF_SendAsap(bool  value) ;

static inline void setStaticF_instance(::UnityW<::Photon::Pun::PhotonHandler>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonHandler(PhotonHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonHandler(PhotonHandler const& ) = delete;

/// @brief Field SerializeRateFrameCorrection offset 0xffffffff size 0x4
static constexpr int32_t  SerializeRateFrameCorrection{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29702};

/// @brief Field UpdateInterval, offset: 0x40, size: 0x4, def value: None
 int32_t  ___UpdateInterval;

/// @brief Field UpdateIntervalOnSerialize, offset: 0x44, size: 0x4, def value: None
 int32_t  ___UpdateIntervalOnSerialize;

/// @brief Field nextSendTickCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___nextSendTickCount;

/// @brief Field nextSendTickCountOnSerialize, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___nextSendTickCountOnSerialize;

/// @brief Field supportLoggerComponent, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Photon::Realtime::SupportLogger>  ___supportLoggerComponent;

/// @brief Field reusableIntList, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___reusableIntList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonHandler, ___UpdateInterval) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonHandler, ___UpdateIntervalOnSerialize) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonHandler, ___nextSendTickCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonHandler, ___nextSendTickCountOnSerialize) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonHandler, ___supportLoggerComponent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonHandler, ___reusableIntList) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonHandler) == 0x60, "Size mismatch!");

} // namespace end def Photon::Pun
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonHandler/<>c
class CORDL_TYPE PhotonHandler___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Photon::Pun::PhotonHandler___c*  __9;

/// @brief Field <>9__13_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_0, put=setStaticF___9__13_0)) ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  __9__13_0;

static inline ::Photon::Pun::PhotonHandler___c* New_ctor() ;

/// @brief Method <Start>b__13_0, addr 0xa715568, size 0x4, virtual false, abstract: false, final false
inline void _Start_b__13_0(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  loadingMode) ;

/// @brief Method .ctor, addr 0xa715560, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Photon::Pun::PhotonHandler___c* getStaticF___9() ;

static inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>* getStaticF___9__13_0() ;

static inline void setStaticF___9(::Photon::Pun::PhotonHandler___c*  value) ;

static inline void setStaticF___9__13_0(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonHandler___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonHandler___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonHandler___c(PhotonHandler___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonHandler___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonHandler___c(PhotonHandler___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29701};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::PhotonHandler___c) == 0x10, "Size mismatch!");

} // namespace end def Photon::Pun

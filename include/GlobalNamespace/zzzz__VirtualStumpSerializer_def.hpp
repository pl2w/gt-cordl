#pragma once
// IWYU pragma private; include "GlobalNamespace/VirtualStumpSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaSerializer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VirtualStumpSerializer)
namespace GlobalNamespace {
class CustomMapsDisplayScreen;
}
namespace GlobalNamespace {
struct GTMapLoadSource;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class VirtualStumpBarrierSFX;
}
namespace GlobalNamespace {
class VirtualStumpSerializer__WaitToSendStatus_d__28;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class VirtualStumpSerializer;
}
namespace GlobalNamespace {
class VirtualStumpSerializer__WaitToSendStatus_d__28;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VirtualStumpSerializer*);
MARK_REF_T(::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VirtualStumpSerializer*, "", "VirtualStumpSerializer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28*, "", "VirtualStumpSerializer/<WaitToSendStatus>d__28");
// Dependencies GorillaSerializer
namespace GlobalNamespace {
// Is value type: false
// CS Name: VirtualStumpSerializer
class CORDL_TYPE VirtualStumpSerializer : public ::GlobalNamespace::GorillaSerializer {
public:
// Declarations
using _WaitToSendStatus_d__28 = ::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28;

 __declspec(property(get=get_HasAuthority)) bool  HasAuthority;

/// @brief Field barrierSFX, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_barrierSFX, put=__cordl_internal_set_barrierSFX)) ::UnityW<::GlobalNamespace::VirtualStumpBarrierSFX>  barrierSFX;

/// @brief Field detailsScreen, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_detailsScreen, put=__cordl_internal_set_detailsScreen)) ::UnityW<::GlobalNamespace::CustomMapsDisplayScreen>  detailsScreen;

/// @brief Field forceNewSearch, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_forceNewSearch, put=__cordl_internal_set_forceNewSearch)) bool  forceNewSearch;

/// @brief Field roomInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_roomInitialized, put=setStaticF_roomInitialized)) bool  roomInitialized;

/// @brief Field sendModList, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_sendModList, put=__cordl_internal_set_sendModList)) bool  sendModList;

/// @brief Field sendNewStatus, offset 0x5b, size 0x1 
 __declspec(property(get=__cordl_internal_get_sendNewStatus, put=__cordl_internal_set_sendNewStatus)) bool  sendNewStatus;

/// @brief Field statusUpdateCoroutine, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_statusUpdateCoroutine, put=__cordl_internal_set_statusUpdateCoroutine)) ::UnityEngine::Coroutine*  statusUpdateCoroutine;

/// @brief Field waitToSendStatus, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitToSendStatus, put=__cordl_internal_set_waitToSendStatus)) bool  waitToSendStatus;

/// @brief Field waitingForRoomInitialization, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_waitingForRoomInitialization, put=setStaticF_waitingForRoomInitialization)) bool  waitingForRoomInitialization;

/// [PunRPC]
/// @brief Method InitializeRoom_RPC, addr 0x5a0d048, size 0x20c, virtual false, abstract: false, final false
inline void InitializeRoom_RPC(int32_t  currentScreen, int32_t  driverID, int64_t  modDetailsID, int64_t  loadedMapModID, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method IsWaitingForRoomInit, addr 0x5a0cbf0, size 0x60, virtual false, abstract: false, final false
static inline bool IsWaitingForRoomInit() ;

/// @brief Method LoadMapSynced, addr 0x5a0d254, size 0x1b4, virtual false, abstract: false, final false
inline void LoadMapSynced(int64_t  modId, ::GlobalNamespace::GTMapLoadSource  loadSource) ;

static inline ::GlobalNamespace::VirtualStumpSerializer* New_ctor() ;

/// @brief Method OnJoinedRoom, addr 0x5a0c9d4, size 0x190, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0x5a0cb64, size 0x8c, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnPlayerLeftRoom, addr 0x5a0c8bc, size 0x118, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  leavingPlayer) ;

/// @brief Method RefreshDriverNickName, addr 0x5a095c8, size 0x114, virtual false, abstract: false, final false
inline void RefreshDriverNickName() ;

/// [PunRPC]
/// @brief Method RefreshDriverNickName_RPC, addr 0x5a0e0b0, size 0x250, virtual false, abstract: false, final false
inline void RefreshDriverNickName_RPC(::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RequestRoomInitialization_RPC, addr 0x5a0cc50, size 0x3f8, virtual false, abstract: false, final false
inline void RequestRoomInitialization_RPC(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestTerminalControlStatusChange, addr 0x5a093e4, size 0x138, virtual false, abstract: false, final false
inline void RequestTerminalControlStatusChange(bool  lockedStatus) ;

/// [PunRPC]
/// @brief Method RequestTerminalControlStatusChange_RPC, addr 0x5a0d86c, size 0x290, virtual false, abstract: false, final false
inline void RequestTerminalControlStatusChange_RPC(bool  lockedStatus, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SendTerminalStatus, addr 0x5a07934, size 0xec, virtual false, abstract: false, final false
inline void SendTerminalStatus() ;

/// [PunRPC]
/// @brief Method SetRoomMap_RPC, addr 0x5a0d580, size 0x18c, virtual false, abstract: false, final false
inline void SetRoomMap_RPC(int64_t  modId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SetTerminalControlStatus, addr 0x5a082f4, size 0x1bc, virtual false, abstract: false, final false
inline void SetTerminalControlStatus(bool  locked, int32_t  playerID) ;

/// [PunRPC]
/// @brief Method SetTerminalControlStatus_RPC, addr 0x5a0dafc, size 0x260, virtual false, abstract: false, final false
inline void SetTerminalControlStatus_RPC(bool  locked, int32_t  driverID, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Start, addr 0x5a0c6e0, size 0x1dc, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UnloadMapSynced, addr 0x5a0d408, size 0x178, virtual false, abstract: false, final false
inline void UnloadMapSynced() ;

/// [PunRPC]
/// @brief Method UnloadMap_RPC, addr 0x5a0d70c, size 0x160, virtual false, abstract: false, final false
inline void UnloadMap_RPC(::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method UpdateScreen_RPC, addr 0x5a0ddf0, size 0x2c0, virtual false, abstract: false, final false
inline void UpdateScreen_RPC(int32_t  currentScreen, int64_t  modDetailsID, int32_t  driverID, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [IteratorStateMachine(typeof(VirtualStumpSerializer::<WaitToSendStatus>d__28))]
/// @brief Method WaitToSendStatus, addr 0x5a0dd5c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitToSendStatus() ;

constexpr ::UnityW<::GlobalNamespace::VirtualStumpBarrierSFX> const& __cordl_internal_get_barrierSFX() const;

constexpr ::UnityW<::GlobalNamespace::VirtualStumpBarrierSFX>& __cordl_internal_get_barrierSFX() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsDisplayScreen> const& __cordl_internal_get_detailsScreen() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsDisplayScreen>& __cordl_internal_get_detailsScreen() ;

constexpr bool const& __cordl_internal_get_forceNewSearch() const;

constexpr bool& __cordl_internal_get_forceNewSearch() ;

constexpr bool const& __cordl_internal_get_sendModList() const;

constexpr bool& __cordl_internal_get_sendModList() ;

constexpr bool const& __cordl_internal_get_sendNewStatus() const;

constexpr bool& __cordl_internal_get_sendNewStatus() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_statusUpdateCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_statusUpdateCoroutine() ;

constexpr bool const& __cordl_internal_get_waitToSendStatus() const;

constexpr bool& __cordl_internal_get_waitToSendStatus() ;

constexpr void __cordl_internal_set_barrierSFX(::UnityW<::GlobalNamespace::VirtualStumpBarrierSFX>  value) ;

constexpr void __cordl_internal_set_detailsScreen(::UnityW<::GlobalNamespace::CustomMapsDisplayScreen>  value) ;

constexpr void __cordl_internal_set_forceNewSearch(bool  value) ;

constexpr void __cordl_internal_set_sendModList(bool  value) ;

constexpr void __cordl_internal_set_sendNewStatus(bool  value) ;

constexpr void __cordl_internal_set_statusUpdateCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_waitToSendStatus(bool  value) ;

/// @brief Method .ctor, addr 0x5a0e300, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_roomInitialized() ;

static inline bool getStaticF_waitingForRoomInitialization() ;

/// @brief Method get_HasAuthority, addr 0x5a093cc, size 0x18, virtual false, abstract: false, final false
inline bool get_HasAuthority() ;

static inline void setStaticF_roomInitialized(bool  value) ;

static inline void setStaticF_waitingForRoomInitialization(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualStumpSerializer(VirtualStumpSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualStumpSerializer(VirtualStumpSerializer const& ) = delete;

/// @brief Field STATUS_UPDATE_INTERVAL offset 0xffffffff size 0x4
static constexpr float_t  STATUS_UPDATE_INTERVAL{static_cast<float_t>(0.5f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2773};

/// [SerializeField]
/// @brief Field barrierSFX, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VirtualStumpBarrierSFX>  ___barrierSFX;

/// [SerializeField]
/// @brief Field detailsScreen, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsDisplayScreen>  ___detailsScreen;

/// @brief Field sendModList, offset: 0x58, size: 0x1, def value: None
 bool  ___sendModList;

/// @brief Field forceNewSearch, offset: 0x59, size: 0x1, def value: None
 bool  ___forceNewSearch;

/// @brief Field waitToSendStatus, offset: 0x5a, size: 0x1, def value: None
 bool  ___waitToSendStatus;

/// @brief Field sendNewStatus, offset: 0x5b, size: 0x1, def value: None
 bool  ___sendNewStatus;

/// @brief Field statusUpdateCoroutine, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___statusUpdateCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VirtualStumpSerializer, ___barrierSFX) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpSerializer, ___detailsScreen) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpSerializer, ___sendModList) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpSerializer, ___forceNewSearch) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpSerializer, ___waitToSendStatus) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpSerializer, ___sendNewStatus) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpSerializer, ___statusUpdateCoroutine) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VirtualStumpSerializer) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VirtualStumpSerializer/<WaitToSendStatus>d__28
class CORDL_TYPE VirtualStumpSerializer__WaitToSendStatus_d__28 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::VirtualStumpSerializer>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5a0e30c, size 0x2dc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5a0e5e8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5a0e5f0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5a0e628, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5a0e308, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::VirtualStumpSerializer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::VirtualStumpSerializer>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::VirtualStumpSerializer>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5a0ddc8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpSerializer__WaitToSendStatus_d__28() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpSerializer__WaitToSendStatus_d__28", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualStumpSerializer__WaitToSendStatus_d__28(VirtualStumpSerializer__WaitToSendStatus_d__28 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpSerializer__WaitToSendStatus_d__28", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualStumpSerializer__WaitToSendStatus_d__28(VirtualStumpSerializer__WaitToSendStatus_d__28 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2772};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VirtualStumpSerializer>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

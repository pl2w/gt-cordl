#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/ConnectionHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionHandler)
namespace Fusion::Photon::Realtime {
class LoadBalancingClient;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Threading {
class Timer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class ConnectionHandler;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::ConnectionHandler*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::ConnectionHandler*, "Fusion.Photon.Realtime", "ConnectionHandler");
// Dependencies UnityEngine.MonoBehaviour
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.ConnectionHandler
class CORDL_TYPE ConnectionHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AppOutOfFocus, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_AppOutOfFocus, put=setStaticF_AppOutOfFocus)) bool  AppOutOfFocus;

/// @brief Field AppOutOfFocusRecent, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_AppOutOfFocusRecent, put=setStaticF_AppOutOfFocusRecent)) bool  AppOutOfFocusRecent;

/// @brief Field AppPause, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_AppPause, put=setStaticF_AppPause)) bool  AppPause;

/// @brief Field AppPauseRecent, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_AppPauseRecent, put=setStaticF_AppPauseRecent)) bool  AppPauseRecent;

/// @brief Field AppQuits, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_AppQuits, put=setStaticF_AppQuits)) bool  AppQuits;

/// @brief Field ApplyDontDestroyOnLoad, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_ApplyDontDestroyOnLoad, put=__cordl_internal_set_ApplyDontDestroyOnLoad)) bool  ApplyDontDestroyOnLoad;

 __declspec(property(get=get_Client, put=set_Client)) ::Fusion::Photon::Realtime::LoadBalancingClient*  Client;

 __declspec(property(get=get_CountSendAcksOnly, put=set_CountSendAcksOnly)) int32_t  CountSendAcksOnly;

/// @brief Field DisconnectAfterKeepAlive, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisconnectAfterKeepAlive, put=__cordl_internal_set_DisconnectAfterKeepAlive)) bool  DisconnectAfterKeepAlive;

 __declspec(property(get=get_FallbackThreadRunning, put=set_FallbackThreadRunning)) bool  FallbackThreadRunning;

/// @brief Field KeepAliveInBackground, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_KeepAliveInBackground, put=__cordl_internal_set_KeepAliveInBackground)) int32_t  KeepAliveInBackground;

/// @brief Field <Client>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Client_k__BackingField, put=__cordl_internal_set__Client_k__BackingField)) ::Fusion::Photon::Realtime::LoadBalancingClient*  _Client_k__BackingField;

/// @brief Field <CountSendAcksOnly>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__CountSendAcksOnly_k__BackingField, put=__cordl_internal_set__CountSendAcksOnly_k__BackingField)) int32_t  _CountSendAcksOnly_k__BackingField;

/// @brief Field <FallbackThreadRunning>k__BackingField, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__FallbackThreadRunning_k__BackingField, put=__cordl_internal_set__FallbackThreadRunning_k__BackingField)) bool  _FallbackThreadRunning_k__BackingField;

/// @brief Field backgroundStopwatch, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_backgroundStopwatch, put=__cordl_internal_set_backgroundStopwatch)) ::System::Diagnostics::Stopwatch*  backgroundStopwatch;

/// @brief Field didSendAcks, offset 0x36, size 0x1 
 __declspec(property(get=__cordl_internal_get_didSendAcks, put=__cordl_internal_set_didSendAcks)) bool  didSendAcks;

/// @brief Field stateTimer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateTimer, put=__cordl_internal_set_stateTimer)) ::System::Threading::Timer*  stateTimer;

/// @brief Method Awake, addr 0x5f4bf48, size 0x80, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method IsNetworkReachableUnity, addr 0x5f4c580, size 0x5c, virtual false, abstract: false, final false
static inline bool IsNetworkReachableUnity() ;

static inline ::Fusion::Photon::Realtime::ConnectionHandler* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x5f4c490, size 0xa8, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  focus) ;

/// @brief Method OnApplicationPause, addr 0x5f4c3a0, size 0xa8, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  pause) ;

/// @brief Method OnApplicationQuit, addr 0x5f4c354, size 0x4c, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnDisable, addr 0x5f4bfc8, size 0xf4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method RealtimeFallback, addr 0x5f4c5e0, size 0x134, virtual false, abstract: false, final false
inline void RealtimeFallback(::System::Object*  state) ;

/// @brief Method RealtimeFallbackInvoke, addr 0x5f4c5dc, size 0x4, virtual false, abstract: false, final false
inline void RealtimeFallbackInvoke() ;

/// @brief Method ResetAppOutOfFocusRecent, addr 0x5f4c538, size 0x48, virtual false, abstract: false, final false
inline void ResetAppOutOfFocusRecent() ;

/// @brief Method ResetAppPauseRecent, addr 0x5f4c448, size 0x48, virtual false, abstract: false, final false
inline void ResetAppPauseRecent() ;

/// @brief Method StartFallbackSendAckThread, addr 0x5f4851c, size 0x11c, virtual false, abstract: false, final false
inline void StartFallbackSendAckThread() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method StaticReset, addr 0x5f4befc, size 0x4c, virtual false, abstract: false, final false
static inline void StaticReset() ;

/// @brief Method StopFallbackSendAckThread, addr 0x5f486f8, size 0x90, virtual false, abstract: false, final false
inline void StopFallbackSendAckThread() ;

constexpr bool const& __cordl_internal_get_ApplyDontDestroyOnLoad() const;

constexpr bool& __cordl_internal_get_ApplyDontDestroyOnLoad() ;

constexpr bool const& __cordl_internal_get_DisconnectAfterKeepAlive() const;

constexpr bool& __cordl_internal_get_DisconnectAfterKeepAlive() ;

constexpr int32_t const& __cordl_internal_get_KeepAliveInBackground() const;

constexpr int32_t& __cordl_internal_get_KeepAliveInBackground() ;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& __cordl_internal_get__Client_k__BackingField() const;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get__Client_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CountSendAcksOnly_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CountSendAcksOnly_k__BackingField() ;

constexpr bool const& __cordl_internal_get__FallbackThreadRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__FallbackThreadRunning_k__BackingField() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_backgroundStopwatch() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_backgroundStopwatch() ;

constexpr bool const& __cordl_internal_get_didSendAcks() const;

constexpr bool& __cordl_internal_get_didSendAcks() ;

constexpr ::System::Threading::Timer* const& __cordl_internal_get_stateTimer() const;

constexpr ::System::Threading::Timer*& __cordl_internal_get_stateTimer() ;

constexpr void __cordl_internal_set_ApplyDontDestroyOnLoad(bool  value) ;

constexpr void __cordl_internal_set_DisconnectAfterKeepAlive(bool  value) ;

constexpr void __cordl_internal_set_KeepAliveInBackground(int32_t  value) ;

constexpr void __cordl_internal_set__Client_k__BackingField(::Fusion::Photon::Realtime::LoadBalancingClient*  value) ;

constexpr void __cordl_internal_set__CountSendAcksOnly_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__FallbackThreadRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_backgroundStopwatch(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_didSendAcks(bool  value) ;

constexpr void __cordl_internal_set_stateTimer(::System::Threading::Timer*  value) ;

/// @brief Method .ctor, addr 0x5f4c724, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_AppOutOfFocus() ;

static inline bool getStaticF_AppOutOfFocusRecent() ;

static inline bool getStaticF_AppPause() ;

static inline bool getStaticF_AppPauseRecent() ;

static inline bool getStaticF_AppQuits() ;

/// [CompilerGenerated]
/// @brief Method get_Client, addr 0x5f4becc, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::LoadBalancingClient* get_Client() ;

/// [CompilerGenerated]
/// @brief Method get_CountSendAcksOnly, addr 0x5f4bedc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CountSendAcksOnly() ;

/// [CompilerGenerated]
/// @brief Method get_FallbackThreadRunning, addr 0x5f4beec, size 0x8, virtual false, abstract: false, final false
inline bool get_FallbackThreadRunning() ;

static inline void setStaticF_AppOutOfFocus(bool  value) ;

static inline void setStaticF_AppOutOfFocusRecent(bool  value) ;

static inline void setStaticF_AppPause(bool  value) ;

static inline void setStaticF_AppPauseRecent(bool  value) ;

static inline void setStaticF_AppQuits(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Client, addr 0x5f4bed4, size 0x8, virtual false, abstract: false, final false
inline void set_Client(::Fusion::Photon::Realtime::LoadBalancingClient*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CountSendAcksOnly, addr 0x5f4bee4, size 0x8, virtual false, abstract: false, final false
inline void set_CountSendAcksOnly(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_FallbackThreadRunning, addr 0x5f4bef4, size 0x8, virtual false, abstract: false, final false
inline void set_FallbackThreadRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConnectionHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConnectionHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectionHandler(ConnectionHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectionHandler(ConnectionHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28039};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Client>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::LoadBalancingClient*  ____Client_k__BackingField;

/// @brief Field DisconnectAfterKeepAlive, offset: 0x28, size: 0x1, def value: None
 bool  ___DisconnectAfterKeepAlive;

/// @brief Field KeepAliveInBackground, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___KeepAliveInBackground;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <CountSendAcksOnly>k__BackingField, offset: 0x30, size: 0x4, def value: None
 int32_t  ____CountSendAcksOnly_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <FallbackThreadRunning>k__BackingField, offset: 0x34, size: 0x1, def value: None
 bool  ____FallbackThreadRunning_k__BackingField;

/// @brief Field ApplyDontDestroyOnLoad, offset: 0x35, size: 0x1, def value: None
 bool  ___ApplyDontDestroyOnLoad;

/// @brief Field didSendAcks, offset: 0x36, size: 0x1, def value: None
 bool  ___didSendAcks;

/// @brief Field backgroundStopwatch, offset: 0x38, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___backgroundStopwatch;

/// @brief Field stateTimer, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::Timer*  ___stateTimer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::ConnectionHandler, ____Client_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::ConnectionHandler, ___DisconnectAfterKeepAlive) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::ConnectionHandler, ___KeepAliveInBackground) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::ConnectionHandler, ____CountSendAcksOnly_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::ConnectionHandler, ____FallbackThreadRunning_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::ConnectionHandler, ___ApplyDontDestroyOnLoad) == 0x35, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::ConnectionHandler, ___didSendAcks) == 0x36, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::ConnectionHandler, ___backgroundStopwatch) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::ConnectionHandler, ___stateTimer) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::ConnectionHandler) == 0x48, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime

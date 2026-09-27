#pragma once
// IWYU pragma private; include "Photon/Realtime/ConnectionHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionHandler)
namespace Photon::Realtime {
class LoadBalancingClient;
}
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace Photon::Realtime {
class ConnectionHandler;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::ConnectionHandler*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::ConnectionHandler*, "Photon.Realtime", "ConnectionHandler");
// Dependencies UnityEngine.MonoBehaviour
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.ConnectionHandler
class CORDL_TYPE ConnectionHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AppQuits, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_AppQuits, put=setStaticF_AppQuits)) bool  AppQuits;

/// @brief Field ApplyDontDestroyOnLoad, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_ApplyDontDestroyOnLoad, put=__cordl_internal_set_ApplyDontDestroyOnLoad)) bool  ApplyDontDestroyOnLoad;

 __declspec(property(get=get_Client, put=set_Client)) ::Photon::Realtime::LoadBalancingClient*  Client;

 __declspec(property(get=get_CountSendAcksOnly, put=set_CountSendAcksOnly)) int32_t  CountSendAcksOnly;

/// @brief Field DisconnectAfterKeepAlive, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisconnectAfterKeepAlive, put=__cordl_internal_set_DisconnectAfterKeepAlive)) bool  DisconnectAfterKeepAlive;

 __declspec(property(get=get_FallbackThreadRunning)) bool  FallbackThreadRunning;

/// @brief Field KeepAliveInBackground, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_KeepAliveInBackground, put=__cordl_internal_set_KeepAliveInBackground)) int32_t  KeepAliveInBackground;

/// @brief Field <Client>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Client_k__BackingField, put=__cordl_internal_set__Client_k__BackingField)) ::Photon::Realtime::LoadBalancingClient*  _Client_k__BackingField;

/// @brief Field <CountSendAcksOnly>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__CountSendAcksOnly_k__BackingField, put=__cordl_internal_set__CountSendAcksOnly_k__BackingField)) int32_t  _CountSendAcksOnly_k__BackingField;

/// @brief Field backgroundStopwatch, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_backgroundStopwatch, put=__cordl_internal_set_backgroundStopwatch)) ::System::Diagnostics::Stopwatch*  backgroundStopwatch;

/// @brief Field didSendAcks, offset 0x36, size 0x1 
 __declspec(property(get=__cordl_internal_get_didSendAcks, put=__cordl_internal_set_didSendAcks)) bool  didSendAcks;

/// @brief Field fallbackThreadId, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_fallbackThreadId, put=__cordl_internal_set_fallbackThreadId)) uint8_t  fallbackThreadId;

/// @brief Method Awake, addr 0xa6f6554, size 0x80, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Photon::Realtime::ConnectionHandler* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0xa6f6508, size 0x4c, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnDisable, addr 0xa6f65d4, size 0xd4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method RealtimeFallbackThread, addr 0xa6f6a94, size 0x10c, virtual false, abstract: false, final false
inline bool RealtimeFallbackThread() ;

/// @brief Method StartFallbackSendAckThread, addr 0xa6f69c8, size 0xcc, virtual false, abstract: false, final false
inline void StartFallbackSendAckThread() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method StaticReset, addr 0xa6f64c0, size 0x48, virtual false, abstract: false, final false
static inline void StaticReset() ;

/// @brief Method StopFallbackSendAckThread, addr 0xa6f66a8, size 0x70, virtual false, abstract: false, final false
inline void StopFallbackSendAckThread() ;

constexpr bool const& __cordl_internal_get_ApplyDontDestroyOnLoad() const;

constexpr bool& __cordl_internal_get_ApplyDontDestroyOnLoad() ;

constexpr bool const& __cordl_internal_get_DisconnectAfterKeepAlive() const;

constexpr bool& __cordl_internal_get_DisconnectAfterKeepAlive() ;

constexpr int32_t const& __cordl_internal_get_KeepAliveInBackground() const;

constexpr int32_t& __cordl_internal_get_KeepAliveInBackground() ;

constexpr ::Photon::Realtime::LoadBalancingClient* const& __cordl_internal_get__Client_k__BackingField() const;

constexpr ::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get__Client_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CountSendAcksOnly_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CountSendAcksOnly_k__BackingField() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_backgroundStopwatch() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_backgroundStopwatch() ;

constexpr bool const& __cordl_internal_get_didSendAcks() const;

constexpr bool& __cordl_internal_get_didSendAcks() ;

constexpr uint8_t const& __cordl_internal_get_fallbackThreadId() const;

constexpr uint8_t& __cordl_internal_get_fallbackThreadId() ;

constexpr void __cordl_internal_set_ApplyDontDestroyOnLoad(bool  value) ;

constexpr void __cordl_internal_set_DisconnectAfterKeepAlive(bool  value) ;

constexpr void __cordl_internal_set_KeepAliveInBackground(int32_t  value) ;

constexpr void __cordl_internal_set__Client_k__BackingField(::Photon::Realtime::LoadBalancingClient*  value) ;

constexpr void __cordl_internal_set__CountSendAcksOnly_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_backgroundStopwatch(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_didSendAcks(bool  value) ;

constexpr void __cordl_internal_set_fallbackThreadId(uint8_t  value) ;

/// @brief Method .ctor, addr 0xa6f6ba0, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_AppQuits() ;

/// [CompilerGenerated]
/// @brief Method get_Client, addr 0xa6f6490, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Realtime::LoadBalancingClient* get_Client() ;

/// [CompilerGenerated]
/// @brief Method get_CountSendAcksOnly, addr 0xa6f64a0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CountSendAcksOnly() ;

/// @brief Method get_FallbackThreadRunning, addr 0xa6f64b0, size 0x10, virtual false, abstract: false, final false
inline bool get_FallbackThreadRunning() ;

static inline void setStaticF_AppQuits(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Client, addr 0xa6f6498, size 0x8, virtual false, abstract: false, final false
inline void set_Client(::Photon::Realtime::LoadBalancingClient*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CountSendAcksOnly, addr 0xa6f64a8, size 0x8, virtual false, abstract: false, final false
inline void set_CountSendAcksOnly(int32_t  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29837};

/// [CompilerGenerated]
/// @brief Field <Client>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Photon::Realtime::LoadBalancingClient*  ____Client_k__BackingField;

/// @brief Field DisconnectAfterKeepAlive, offset: 0x28, size: 0x1, def value: None
 bool  ___DisconnectAfterKeepAlive;

/// @brief Field KeepAliveInBackground, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___KeepAliveInBackground;

/// [CompilerGenerated]
/// @brief Field <CountSendAcksOnly>k__BackingField, offset: 0x30, size: 0x4, def value: None
 int32_t  ____CountSendAcksOnly_k__BackingField;

/// @brief Field ApplyDontDestroyOnLoad, offset: 0x34, size: 0x1, def value: None
 bool  ___ApplyDontDestroyOnLoad;

/// @brief Field fallbackThreadId, offset: 0x35, size: 0x1, def value: None
 uint8_t  ___fallbackThreadId;

/// @brief Field didSendAcks, offset: 0x36, size: 0x1, def value: None
 bool  ___didSendAcks;

/// @brief Field backgroundStopwatch, offset: 0x38, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___backgroundStopwatch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::ConnectionHandler, ____Client_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::ConnectionHandler, ___DisconnectAfterKeepAlive) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::ConnectionHandler, ___KeepAliveInBackground) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::ConnectionHandler, ____CountSendAcksOnly_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::ConnectionHandler, ___ApplyDontDestroyOnLoad) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::ConnectionHandler, ___fallbackThreadId) == 0x35, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::ConnectionHandler, ___didSendAcks) == 0x36, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::ConnectionHandler, ___backgroundStopwatch) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::ConnectionHandler) == 0x40, "Size mismatch!");

} // namespace end def Photon::Realtime

#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipWebSocketRetryQueue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MothershipWebSocketRetryQueue)
namespace GlobalNamespace {
class ActiveWebSocket;
}
namespace GlobalNamespace {
class MothershipWebSocketRetryQueue_RetryingWebSocket;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipWebSocketRetryQueue;
}
namespace GlobalNamespace {
class MothershipWebSocketRetryQueue_RetryingWebSocket;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipWebSocketRetryQueue*);
MARK_REF_T(::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipWebSocketRetryQueue*, "", "MothershipWebSocketRetryQueue");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*, "", "MothershipWebSocketRetryQueue/RetryingWebSocket");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipWebSocketRetryQueue
class CORDL_TYPE MothershipWebSocketRetryQueue : public ::System::Object {
public:
// Declarations
using RetryingWebSocket = ::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket;

/// @brief Field _websockets, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__websockets, put=__cordl_internal_set__websockets)) ::System::Collections::Generic::List_1<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>*  _websockets;

/// @brief Method AddSocket, addr 0x53c2084, size 0x108, virtual false, abstract: false, final false
inline void AddSocket(::GlobalNamespace::ActiveWebSocket*  socket) ;

/// @brief Method ClearSockets, addr 0x53c23f0, size 0x70, virtual false, abstract: false, final false
inline void ClearSockets() ;

/// @brief Method GetRetryingSocket, addr 0x53c218c, size 0x14c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket* GetRetryingSocket(::GlobalNamespace::ActiveWebSocket*  socket) ;

static inline ::GlobalNamespace::MothershipWebSocketRetryQueue* New_ctor() ;

/// @brief Method RemoveSocket, addr 0x53c2310, size 0xd0, virtual false, abstract: false, final false
inline void RemoveSocket(::GlobalNamespace::ActiveWebSocket*  socket) ;

/// @brief Method ResetSocket, addr 0x53c2488, size 0x1c, virtual false, abstract: false, final false
inline void ResetSocket(::GlobalNamespace::ActiveWebSocket*  socket) ;

/// @brief Method RetrySocket, addr 0x53c2460, size 0x1c, virtual false, abstract: false, final false
inline void RetrySocket(::GlobalNamespace::ActiveWebSocket*  socket) ;

/// @brief Method Tick, addr 0x53c24b0, size 0x13c, virtual false, abstract: false, final false
inline void Tick(float_t  deltaSeconds) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>* const& __cordl_internal_get__websockets() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>*& __cordl_internal_get__websockets() ;

constexpr void __cordl_internal_set__websockets(::System::Collections::Generic::List_1<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>*  value) ;

/// @brief Method .ctor, addr 0x53c26f4, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipWebSocketRetryQueue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketRetryQueue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipWebSocketRetryQueue(MothershipWebSocketRetryQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketRetryQueue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipWebSocketRetryQueue(MothershipWebSocketRetryQueue const& ) = delete;

/// @brief Field INITIAL_RETRY_SECONDS offset 0xffffffff size 0x4
static constexpr float_t  INITIAL_RETRY_SECONDS{static_cast<float_t>(5.0f)};

/// @brief Field MAX_RETRY_SECONDS offset 0xffffffff size 0x4
static constexpr float_t  MAX_RETRY_SECONDS{static_cast<float_t>(120.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9781};

/// @brief Field _websockets, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>*  ____websockets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipWebSocketRetryQueue, ____websockets) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipWebSocketRetryQueue) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipWebSocketRetryQueue/RetryingWebSocket
class CORDL_TYPE MothershipWebSocketRetryQueue_RetryingWebSocket : public ::System::Object {
public:
// Declarations
/// @brief Field _lastSetTime, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastSetTime, put=__cordl_internal_set__lastSetTime)) float_t  _lastSetTime;

/// @brief Field _retryEnabled, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__retryEnabled, put=__cordl_internal_set__retryEnabled)) bool  _retryEnabled;

/// @brief Field _timeLeft, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeLeft, put=__cordl_internal_set__timeLeft)) float_t  _timeLeft;

/// @brief Field _websocket, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__websocket, put=__cordl_internal_set__websocket)) ::GlobalNamespace::ActiveWebSocket*  _websocket;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::ActiveWebSocket*>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::ActiveWebSocket*>*() noexcept;

/// @brief Method Equals, addr 0x53c23e0, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::ActiveWebSocket*  other) ;

static inline ::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket* New_ctor(::GlobalNamespace::ActiveWebSocket*  socket) ;

/// @brief Method Reset, addr 0x53c24a4, size 0xc, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Retry, addr 0x53c247c, size 0xc, virtual false, abstract: false, final false
inline void Retry() ;

/// @brief Method Tick, addr 0x53c25ec, size 0x108, virtual false, abstract: false, final false
inline void Tick(float_t  deltaSeconds) ;

constexpr float_t const& __cordl_internal_get__lastSetTime() const;

constexpr float_t& __cordl_internal_get__lastSetTime() ;

constexpr bool const& __cordl_internal_get__retryEnabled() const;

constexpr bool& __cordl_internal_get__retryEnabled() ;

constexpr float_t const& __cordl_internal_get__timeLeft() const;

constexpr float_t& __cordl_internal_get__timeLeft() ;

constexpr ::GlobalNamespace::ActiveWebSocket* const& __cordl_internal_get__websocket() const;

constexpr ::GlobalNamespace::ActiveWebSocket*& __cordl_internal_get__websocket() ;

constexpr void __cordl_internal_set__lastSetTime(float_t  value) ;

constexpr void __cordl_internal_set__retryEnabled(bool  value) ;

constexpr void __cordl_internal_set__timeLeft(float_t  value) ;

constexpr void __cordl_internal_set__websocket(::GlobalNamespace::ActiveWebSocket*  value) ;

/// @brief Method .ctor, addr 0x53c22d8, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ActiveWebSocket*  socket) ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::ActiveWebSocket*>"
constexpr ::System::IEquatable_1<::GlobalNamespace::ActiveWebSocket*>* i___System__IEquatable_1___GlobalNamespace__ActiveWebSocket__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipWebSocketRetryQueue_RetryingWebSocket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketRetryQueue_RetryingWebSocket", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipWebSocketRetryQueue_RetryingWebSocket(MothershipWebSocketRetryQueue_RetryingWebSocket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketRetryQueue_RetryingWebSocket", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipWebSocketRetryQueue_RetryingWebSocket(MothershipWebSocketRetryQueue_RetryingWebSocket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9780};

/// @brief Field _websocket, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::ActiveWebSocket*  ____websocket;

/// @brief Field _lastSetTime, offset: 0x18, size: 0x4, def value: None
 float_t  ____lastSetTime;

/// @brief Field _timeLeft, offset: 0x1c, size: 0x4, def value: None
 float_t  ____timeLeft;

/// @brief Field _retryEnabled, offset: 0x20, size: 0x1, def value: None
 bool  ____retryEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket, ____websocket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket, ____lastSetTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket, ____timeLeft) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket, ____retryEnabled) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

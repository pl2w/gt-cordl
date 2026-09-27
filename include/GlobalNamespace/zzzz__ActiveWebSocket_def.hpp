#pragma once
// IWYU pragma private; include "GlobalNamespace/ActiveWebSocket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ActiveWebSocket)
namespace GlobalNamespace {
class MothershipOpenWebSocketEventArgs;
}
namespace NativeWebSocket {
class WebSocket;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ActiveWebSocket;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ActiveWebSocket*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ActiveWebSocket*, "", "ActiveWebSocket");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ActiveWebSocket
class CORDL_TYPE ActiveWebSocket : public ::System::Object {
public:
// Declarations
/// @brief Field requestData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestData, put=__cordl_internal_set_requestData)) ::GlobalNamespace::MothershipOpenWebSocketEventArgs*  requestData;

/// @brief Field resetSocket, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_resetSocket, put=__cordl_internal_set_resetSocket)) ::System::Action_1<::GlobalNamespace::MothershipOpenWebSocketEventArgs*>*  resetSocket;

/// @brief Field websocket, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_websocket, put=__cordl_internal_set_websocket)) ::NativeWebSocket::WebSocket*  websocket;

static inline ::GlobalNamespace::ActiveWebSocket* New_ctor() ;

constexpr ::GlobalNamespace::MothershipOpenWebSocketEventArgs* const& __cordl_internal_get_requestData() const;

constexpr ::GlobalNamespace::MothershipOpenWebSocketEventArgs*& __cordl_internal_get_requestData() ;

constexpr ::System::Action_1<::GlobalNamespace::MothershipOpenWebSocketEventArgs*>* const& __cordl_internal_get_resetSocket() const;

constexpr ::System::Action_1<::GlobalNamespace::MothershipOpenWebSocketEventArgs*>*& __cordl_internal_get_resetSocket() ;

constexpr ::NativeWebSocket::WebSocket* const& __cordl_internal_get_websocket() const;

constexpr ::NativeWebSocket::WebSocket*& __cordl_internal_get_websocket() ;

constexpr void __cordl_internal_set_requestData(::GlobalNamespace::MothershipOpenWebSocketEventArgs*  value) ;

constexpr void __cordl_internal_set_resetSocket(::System::Action_1<::GlobalNamespace::MothershipOpenWebSocketEventArgs*>*  value) ;

constexpr void __cordl_internal_set_websocket(::NativeWebSocket::WebSocket*  value) ;

/// @brief Method .ctor, addr 0x53c2f14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveWebSocket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveWebSocket", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveWebSocket(ActiveWebSocket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveWebSocket", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveWebSocket(ActiveWebSocket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9785};

/// @brief Field websocket, offset: 0x10, size: 0x8, def value: None
 ::NativeWebSocket::WebSocket*  ___websocket;

/// @brief Field requestData, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::MothershipOpenWebSocketEventArgs*  ___requestData;

/// @brief Field resetSocket, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::MothershipOpenWebSocketEventArgs*>*  ___resetSocket;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ActiveWebSocket, ___websocket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveWebSocket, ___requestData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveWebSocket, ___resetSocket) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ActiveWebSocket) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

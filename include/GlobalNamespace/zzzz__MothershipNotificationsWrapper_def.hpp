#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipNotificationsWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NotificationsMessageDelegateWrapper_def.hpp"
#include "NativeWebSocket/zzzz__WebSocketState_def.hpp"
CORDL_MODULE_EXPORT(MothershipNotificationsWrapper)
namespace GlobalNamespace {
class MothershipWebSocketMessage;
}
namespace GlobalNamespace {
class NotificationsMessageResponse;
}
namespace NativeWebSocket {
struct WebSocketState;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipNotificationsWrapper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipNotificationsWrapper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipNotificationsWrapper*, "", "MothershipNotificationsWrapper");
// Dependencies NativeWebSocket.WebSocketState, NotificationsMessageDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipNotificationsWrapper
class CORDL_TYPE MothershipNotificationsWrapper : public ::GlobalNamespace::NotificationsMessageDelegateWrapper {
public:
// Declarations
 __declspec(property(get=get_SocketState)) ::NativeWebSocket::WebSocketState  SocketState;

/// @brief Field _onClose, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__onClose, put=__cordl_internal_set__onClose)) ::System::Action_1<::System::IntPtr>*  _onClose;

/// @brief Field _onError, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__onError, put=__cordl_internal_set__onError)) ::System::Action_1<::System::IntPtr>*  _onError;

/// @brief Field _onMessage, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__onMessage, put=__cordl_internal_set__onMessage)) ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*  _onMessage;

/// @brief Field _onOpen, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__onOpen, put=__cordl_internal_set__onOpen)) ::System::Action_1<::System::IntPtr>*  _onOpen;

/// @brief Field _state, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::NativeWebSocket::WebSocketState  _state;

static inline ::GlobalNamespace::MothershipNotificationsWrapper* New_ctor(/* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  onOpen, /* [NativeInteger] */ ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*  onMessage, /* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  onClose, /* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  onError) ;

/// @brief Method OnCloseCallback, addr 0x53c1054, size 0x24, virtual true, abstract: false, final false
inline void OnCloseCallback(/* [NativeInteger] */ ::System::IntPtr  userData) ;

/// @brief Method OnErrorCallback, addr 0x53c1078, size 0x1c, virtual true, abstract: false, final false
inline void OnErrorCallback(/* [NativeInteger] */ ::System::IntPtr  userData) ;

/// @brief Method OnMessageCallback, addr 0x53c0f8c, size 0xc8, virtual true, abstract: false, final false
inline void OnMessageCallback(::GlobalNamespace::MothershipWebSocketMessage*  message, /* [NativeInteger] */ ::System::IntPtr  userData) ;

/// @brief Method OnOpenCallback, addr 0x53c0f68, size 0x24, virtual true, abstract: false, final false
inline void OnOpenCallback(/* [NativeInteger] */ ::System::IntPtr  userData) ;

constexpr ::System::Action_1<::System::IntPtr>* const& __cordl_internal_get__onClose() const;

constexpr ::System::Action_1<::System::IntPtr>*& __cordl_internal_get__onClose() ;

constexpr ::System::Action_1<::System::IntPtr>* const& __cordl_internal_get__onError() const;

constexpr ::System::Action_1<::System::IntPtr>*& __cordl_internal_get__onError() ;

constexpr ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>* const& __cordl_internal_get__onMessage() const;

constexpr ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*& __cordl_internal_get__onMessage() ;

constexpr ::System::Action_1<::System::IntPtr>* const& __cordl_internal_get__onOpen() const;

constexpr ::System::Action_1<::System::IntPtr>*& __cordl_internal_get__onOpen() ;

constexpr ::NativeWebSocket::WebSocketState const& __cordl_internal_get__state() const;

constexpr ::NativeWebSocket::WebSocketState& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set__onClose(::System::Action_1<::System::IntPtr>*  value) ;

constexpr void __cordl_internal_set__onError(::System::Action_1<::System::IntPtr>*  value) ;

constexpr void __cordl_internal_set__onMessage(::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*  value) ;

constexpr void __cordl_internal_set__onOpen(::System::Action_1<::System::IntPtr>*  value) ;

constexpr void __cordl_internal_set__state(::NativeWebSocket::WebSocketState  value) ;

/// @brief Method .ctor, addr 0x53c0ea0, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(/* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  onOpen, /* [NativeInteger] */ ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*  onMessage, /* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  onClose, /* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  onError) ;

/// @brief Method get_SocketState, addr 0x53c0e98, size 0x8, virtual false, abstract: false, final false
inline ::NativeWebSocket::WebSocketState get_SocketState() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipNotificationsWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipNotificationsWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipNotificationsWrapper(MothershipNotificationsWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipNotificationsWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipNotificationsWrapper(MothershipNotificationsWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9772};

/// @brief Field _state, offset: 0x58, size: 0x4, def value: None
 ::NativeWebSocket::WebSocketState  ____state;

/// [NativeInteger]
/// @brief Field _onOpen, offset: 0x60, size: 0x8, def value: None
 ::System::Action_1<::System::IntPtr>*  ____onOpen;

/// [NativeInteger]
/// @brief Field _onMessage, offset: 0x68, size: 0x8, def value: None
 ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*  ____onMessage;

/// [NativeInteger]
/// @brief Field _onClose, offset: 0x70, size: 0x8, def value: None
 ::System::Action_1<::System::IntPtr>*  ____onClose;

/// [NativeInteger]
/// @brief Field _onError, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::System::IntPtr>*  ____onError;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipNotificationsWrapper, ____state) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipNotificationsWrapper, ____onOpen) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipNotificationsWrapper, ____onMessage) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipNotificationsWrapper, ____onClose) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipNotificationsWrapper, ____onError) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipNotificationsWrapper) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace

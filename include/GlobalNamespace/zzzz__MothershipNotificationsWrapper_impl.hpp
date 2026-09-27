#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipNotificationsWrapper.hpp"
#include "GlobalNamespace/zzzz__NotificationsMessageDelegateWrapper_impl.hpp"
#include "NativeWebSocket/zzzz__WebSocketState_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipNotificationsWrapper_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketMessage_def.hpp"
#include "GlobalNamespace/zzzz__NotificationsMessageResponse_def.hpp"
#include "NativeWebSocket/zzzz__WebSocketState_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipNotificationsWrapper.get_SocketState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NativeWebSocket::WebSocketState (::GlobalNamespace::MothershipNotificationsWrapper::*)()>(&::GlobalNamespace::MothershipNotificationsWrapper::get_SocketState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53c0e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipNotificationsWrapper*>(),
                        {"get_SocketState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipNotificationsWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipNotificationsWrapper::*)(::System::Action_1<::System::IntPtr>*, ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*, ::System::Action_1<::System::IntPtr>*, ::System::Action_1<::System::IntPtr>*)>(&::GlobalNamespace::MothershipNotificationsWrapper::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x53c0ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipNotificationsWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::System::IntPtr>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*>(), ::i2c::type_of<::System::Action_1<::System::IntPtr>*>(), ::i2c::type_of<::System::Action_1<::System::IntPtr>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipNotificationsWrapper.OnOpenCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipNotificationsWrapper::*)(::System::IntPtr)>(&::GlobalNamespace::MothershipNotificationsWrapper::OnOpenCallback)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x53c0f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipNotificationsWrapper*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipNotificationsWrapper*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipNotificationsWrapper.OnMessageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipNotificationsWrapper::*)(::GlobalNamespace::MothershipWebSocketMessage*, ::System::IntPtr)>(&::GlobalNamespace::MothershipNotificationsWrapper::OnMessageCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x53c0f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipNotificationsWrapper*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipNotificationsWrapper*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipNotificationsWrapper.OnCloseCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipNotificationsWrapper::*)(::System::IntPtr)>(&::GlobalNamespace::MothershipNotificationsWrapper::OnCloseCallback)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x53c1054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipNotificationsWrapper*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipNotificationsWrapper*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipNotificationsWrapper.OnErrorCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipNotificationsWrapper::*)(::System::IntPtr)>(&::GlobalNamespace::MothershipNotificationsWrapper::OnErrorCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x53c1078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipNotificationsWrapper*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipNotificationsWrapper*>(), 9}
                ));
    return ___internal_method;
  }
};
constexpr ::NativeWebSocket::WebSocketState& GlobalNamespace::MothershipNotificationsWrapper::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::NativeWebSocket::WebSocketState const& GlobalNamespace::MothershipNotificationsWrapper::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void GlobalNamespace::MothershipNotificationsWrapper::__cordl_internal_set__state(::NativeWebSocket::WebSocketState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
constexpr ::System::Action_1<::System::IntPtr>*& GlobalNamespace::MothershipNotificationsWrapper::__cordl_internal_get__onOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onOpen;
}
constexpr ::System::Action_1<::System::IntPtr>* const& GlobalNamespace::MothershipNotificationsWrapper::__cordl_internal_get__onOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onOpen;
}
constexpr void GlobalNamespace::MothershipNotificationsWrapper::__cordl_internal_set__onOpen(::System::Action_1<::System::IntPtr>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onOpen = value;
}
constexpr ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*& GlobalNamespace::MothershipNotificationsWrapper::__cordl_internal_get__onMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onMessage;
}
constexpr ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>* const& GlobalNamespace::MothershipNotificationsWrapper::__cordl_internal_get__onMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onMessage;
}
constexpr void GlobalNamespace::MothershipNotificationsWrapper::__cordl_internal_set__onMessage(::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onMessage = value;
}
constexpr ::System::Action_1<::System::IntPtr>*& GlobalNamespace::MothershipNotificationsWrapper::__cordl_internal_get__onClose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onClose;
}
constexpr ::System::Action_1<::System::IntPtr>* const& GlobalNamespace::MothershipNotificationsWrapper::__cordl_internal_get__onClose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onClose;
}
constexpr void GlobalNamespace::MothershipNotificationsWrapper::__cordl_internal_set__onClose(::System::Action_1<::System::IntPtr>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onClose = value;
}
constexpr ::System::Action_1<::System::IntPtr>*& GlobalNamespace::MothershipNotificationsWrapper::__cordl_internal_get__onError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onError;
}
constexpr ::System::Action_1<::System::IntPtr>* const& GlobalNamespace::MothershipNotificationsWrapper::__cordl_internal_get__onError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onError;
}
constexpr void GlobalNamespace::MothershipNotificationsWrapper::__cordl_internal_set__onError(::System::Action_1<::System::IntPtr>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onError = value;
}
inline ::NativeWebSocket::WebSocketState GlobalNamespace::MothershipNotificationsWrapper::get_SocketState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipNotificationsWrapper*>(),
                        {"get_SocketState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NativeWebSocket::WebSocketState>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipNotificationsWrapper::_ctor(/* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  onOpen, /* [NativeInteger] */ ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*  onMessage, /* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  onClose, /* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  onError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipNotificationsWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::System::IntPtr>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*>(), ::i2c::type_of<::System::Action_1<::System::IntPtr>*>(), ::i2c::type_of<::System::Action_1<::System::IntPtr>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onOpen, onMessage, onClose, onError);
}
inline void GlobalNamespace::MothershipNotificationsWrapper::OnOpenCallback(/* [NativeInteger] */ ::System::IntPtr  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipNotificationsWrapper*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userData);
}
inline void GlobalNamespace::MothershipNotificationsWrapper::OnMessageCallback(::GlobalNamespace::MothershipWebSocketMessage*  message, /* [NativeInteger] */ ::System::IntPtr  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipNotificationsWrapper*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, userData);
}
inline void GlobalNamespace::MothershipNotificationsWrapper::OnCloseCallback(/* [NativeInteger] */ ::System::IntPtr  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipNotificationsWrapper*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userData);
}
inline void GlobalNamespace::MothershipNotificationsWrapper::OnErrorCallback(/* [NativeInteger] */ ::System::IntPtr  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipNotificationsWrapper*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userData);
}
inline ::GlobalNamespace::MothershipNotificationsWrapper* GlobalNamespace::MothershipNotificationsWrapper::New_ctor(/* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  onOpen, /* [NativeInteger] */ ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*  onMessage, /* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  onClose, /* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  onError)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipNotificationsWrapper*>(onOpen, onMessage, onClose, onError));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipNotificationsWrapper::MothershipNotificationsWrapper()   {
}

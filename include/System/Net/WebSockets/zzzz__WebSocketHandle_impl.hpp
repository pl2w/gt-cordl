#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocketHandle.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketHandle_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocketOptions_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketHandle__ConnectAsyncCore_d__26_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketHandle__ConnectSocketAsync_d__27_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketHandle__ReadResponseHeaderLineAsync_d__32_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketHandle_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketReceiveResult_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketState_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocket_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebSockets::WebSocketHandle* (*)()>(&::System::Net::WebSockets::WebSocketHandle::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xacee050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::WebSockets::WebSocketHandle*)>(&::System::Net::WebSockets::WebSocketHandle::IsValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaced13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"IsValid", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.get_CloseStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> (::System::Net::WebSockets::WebSocketHandle::*)()>(&::System::Net::WebSockets::WebSocketHandle::get_CloseStatus)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaced148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"get_CloseStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.get_CloseStatusDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebSockets::WebSocketHandle::*)()>(&::System::Net::WebSockets::WebSocketHandle::get_CloseStatusDescription)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaced1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"get_CloseStatusDescription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebSockets::WebSocketState (::System::Net::WebSockets::WebSocketHandle::*)()>(&::System::Net::WebSockets::WebSocketHandle::get_State)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaced2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.CheckPlatformSupport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Net::WebSockets::WebSocketHandle::CheckPlatformSupport)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xacecfa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"CheckPlatformSupport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::WebSocketHandle::*)()>(&::System::Net::WebSockets::WebSocketHandle::Dispose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaceda98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.Abort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::WebSocketHandle::*)()>(&::System::Net::WebSockets::WebSocketHandle::Abort)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaced9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"Abort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.SendAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::WebSocketHandle::*)(::System::ArraySegment_1<uint8_t>, ::System::Net::WebSockets::WebSocketMessageType, bool, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::WebSocketHandle::SendAsync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaced7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"SendAsync", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.ReceiveAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* (::System::Net::WebSockets::WebSocketHandle::*)(::System::ArraySegment_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::WebSocketHandle::ReceiveAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaced81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"ReceiveAsync", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.CloseAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::WebSocketHandle::*)(::System::Net::WebSockets::WebSocketCloseStatus, ::StringW, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::WebSocketHandle::CloseAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaced890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"CloseAsync", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketCloseStatus>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.CloseOutputAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::WebSocketHandle::*)(::System::Net::WebSockets::WebSocketCloseStatus, ::StringW, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::WebSocketHandle::CloseOutputAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaced904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"CloseOutputAsync", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketCloseStatus>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.ConnectAsyncCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::WebSocketHandle::*)(::System::Uri*, ::System::Threading::CancellationToken, ::System::Net::WebSockets::ClientWebSocketOptions*)>(&::System::Net::WebSockets::WebSocketHandle::ConnectAsyncCore)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xacee0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"ConnectAsyncCore", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Net::WebSockets::ClientWebSocketOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.ConnectSocketAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Sockets::Socket*>* (::System::Net::WebSockets::WebSocketHandle::*)(::StringW, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::WebSocketHandle::ConnectSocketAsync)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xacee85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"ConnectSocketAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.BuildRequestHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Uri*, ::System::Net::WebSockets::ClientWebSocketOptions*, ::StringW)>(&::System::Net::WebSockets::WebSocketHandle::BuildRequestHeader)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0xacee9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"BuildRequestHeader", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::WebSockets::ClientWebSocketOptions*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.CreateSecKeyAndSecWebSocketAccept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW> (*)()>(&::System::Net::WebSockets::WebSocketHandle::CreateSecKeyAndSecWebSocketAccept)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xacef220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"CreateSecKeyAndSecWebSocketAccept", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.ParseAndValidateConnectResponseAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::System::Net::WebSockets::WebSocketHandle::*)(::System::IO::Stream*, ::System::Net::WebSockets::ClientWebSocketOptions*, ::StringW, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::WebSocketHandle::ParseAndValidateConnectResponseAsync)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xacef470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"ParseAndValidateConnectResponseAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Net::WebSockets::ClientWebSocketOptions*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.ValidateAndTrackHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, ::StringW, ::by_ref<bool>)>(&::System::Net::WebSockets::WebSocketHandle::ValidateAndTrackHeader)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xacef5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"ValidateAndTrackHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle.ReadResponseHeaderLineAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (*)(::System::IO::Stream*, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::WebSocketHandle::ReadResponseHeaderLineAsync)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xacef6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"ReadResponseHeaderLineAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::WebSocketHandle::*)()>(&::System::Net::WebSockets::WebSocketHandle::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xacee7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationTokenSource*& System::Net::WebSockets::WebSocketHandle::__cordl_internal_get__abortSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____abortSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& System::Net::WebSockets::WebSocketHandle::__cordl_internal_get__abortSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____abortSource;
}
constexpr void System::Net::WebSockets::WebSocketHandle::__cordl_internal_set__abortSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____abortSource = value;
}
constexpr ::System::Net::WebSockets::WebSocketState& System::Net::WebSockets::WebSocketHandle::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::System::Net::WebSockets::WebSocketState const& System::Net::WebSockets::WebSocketHandle::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void System::Net::WebSockets::WebSocketHandle::__cordl_internal_set__state(::System::Net::WebSockets::WebSocketState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
constexpr ::System::Net::WebSockets::WebSocket*& System::Net::WebSockets::WebSocketHandle::__cordl_internal_get__webSocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webSocket;
}
constexpr ::System::Net::WebSockets::WebSocket* const& System::Net::WebSockets::WebSocketHandle::__cordl_internal_get__webSocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webSocket;
}
constexpr void System::Net::WebSockets::WebSocketHandle::__cordl_internal_set__webSocket(::System::Net::WebSockets::WebSocket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____webSocket = value;
}
inline void System::Net::WebSockets::WebSocketHandle::setStaticF_t_cachedStringBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "t_cachedStringBuilder", ::System::Net::WebSockets::WebSocketHandle*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* System::Net::WebSockets::WebSocketHandle::getStaticF_t_cachedStringBuilder()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "t_cachedStringBuilder", ::System::Net::WebSockets::WebSocketHandle*>();
}
inline void System::Net::WebSockets::WebSocketHandle::setStaticF_s_defaultHttpEncoding(::System::Text::Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::Encoding*, "s_defaultHttpEncoding", ::System::Net::WebSockets::WebSocketHandle*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Net::WebSockets::WebSocketHandle::getStaticF_s_defaultHttpEncoding()  {
return ::cordl_internals::getStaticField<::System::Text::Encoding*, "s_defaultHttpEncoding", ::System::Net::WebSockets::WebSocketHandle*>();
}
inline ::System::Net::WebSockets::WebSocketHandle* System::Net::WebSockets::WebSocketHandle::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::WebSocketHandle*>(nullptr, ___internal_method);
}
inline bool System::Net::WebSockets::WebSocketHandle::IsValid(::System::Net::WebSockets::WebSocketHandle*  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"IsValid", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> System::Net::WebSockets::WebSocketHandle::get_CloseStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"get_CloseStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>>(this, ___internal_method);
}
inline ::StringW System::Net::WebSockets::WebSocketHandle::get_CloseStatusDescription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"get_CloseStatusDescription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::WebSockets::WebSocketState System::Net::WebSockets::WebSocketHandle::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::WebSocketState>(this, ___internal_method);
}
inline void System::Net::WebSockets::WebSocketHandle::CheckPlatformSupport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"CheckPlatformSupport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Net::WebSockets::WebSocketHandle::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebSockets::WebSocketHandle::Abort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"Abort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::WebSocketHandle::SendAsync(::System::ArraySegment_1<uint8_t>  buffer, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"SendAsync", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, messageType, endOfMessage, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* System::Net::WebSockets::WebSocketHandle::ReceiveAsync(::System::ArraySegment_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"ReceiveAsync", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::WebSocketHandle::CloseAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"CloseAsync", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketCloseStatus>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, closeStatus, statusDescription, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::WebSocketHandle::CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"CloseOutputAsync", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketCloseStatus>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, closeStatus, statusDescription, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::WebSocketHandle::ConnectAsyncCore(::System::Uri*  uri, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::WebSockets::ClientWebSocketOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"ConnectAsyncCore", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Net::WebSockets::ClientWebSocketOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, uri, cancellationToken, options);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Sockets::Socket*>* System::Net::WebSockets::WebSocketHandle::ConnectSocketAsync(::StringW  host, int32_t  port, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"ConnectSocketAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Sockets::Socket*>*>(this, ___internal_method, host, port, cancellationToken);
}
inline ::ArrayW<uint8_t> System::Net::WebSockets::WebSocketHandle::BuildRequestHeader(::System::Uri*  uri, ::System::Net::WebSockets::ClientWebSocketOptions*  options, ::StringW  secKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"BuildRequestHeader", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::WebSockets::ClientWebSocketOptions*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, uri, options, secKey);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW> System::Net::WebSockets::WebSocketHandle::CreateSecKeyAndSecWebSocketAccept()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"CreateSecKeyAndSecWebSocketAccept", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* System::Net::WebSockets::WebSocketHandle::ParseAndValidateConnectResponseAsync(::System::IO::Stream*  stream, ::System::Net::WebSockets::ClientWebSocketOptions*  options, ::StringW  expectedSecWebSocketAccept, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"ParseAndValidateConnectResponseAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Net::WebSockets::ClientWebSocketOptions*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, stream, options, expectedSecWebSocketAccept, cancellationToken);
}
inline void System::Net::WebSockets::WebSocketHandle::ValidateAndTrackHeader(::StringW  targetHeaderName, ::StringW  targetHeaderValue, ::StringW  foundHeaderName, ::StringW  foundHeaderValue, ::by_ref<bool>  foundHeader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"ValidateAndTrackHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetHeaderName, targetHeaderValue, foundHeaderName, foundHeaderValue, foundHeader);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* System::Net::WebSockets::WebSocketHandle::ReadResponseHeaderLineAsync(::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {"ReadResponseHeaderLineAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(nullptr, ___internal_method, stream, cancellationToken);
}
inline void System::Net::WebSockets::WebSocketHandle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::WebSockets::WebSocketHandle* System::Net::WebSockets::WebSocketHandle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebSockets::WebSocketHandle*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::WebSocketHandle::WebSocketHandle()   {
}
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0::*)()>(&::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf1694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0._ParseAndValidateConnectResponseAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0::*)(::StringW)>(&::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0::_ParseAndValidateConnectResponseAsync_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xacf169c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0*>(),
                        {"<ParseAndValidateConnectResponseAsync>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0::__cordl_internal_get_headerValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headerValue;
}
constexpr ::StringW const& System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0::__cordl_internal_get_headerValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headerValue;
}
constexpr void System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0::__cordl_internal_set_headerValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headerValue = value;
}
inline void System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0::_ParseAndValidateConnectResponseAsync_b__0(::StringW  requested)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0*>(),
                        {"<ParseAndValidateConnectResponseAsync>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, requested);
}
inline ::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0* System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::WebSocketHandle___c__DisplayClass30_0::WebSocketHandle___c__DisplayClass30_0()   {
}
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::WebSocketHandle___c::*)()>(&::System::Net::WebSockets::WebSocketHandle___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacef8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle___c._ConnectAsyncCore_b__26_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::WebSocketHandle___c::*)(::System::Object*)>(&::System::Net::WebSockets::WebSocketHandle___c::_ConnectAsyncCore_b__26_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xacef8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle___c*>(),
                        {"<ConnectAsyncCore>b__26_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle___c._ConnectSocketAsync_b__27_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::WebSocketHandle___c::*)(::System::Object*)>(&::System::Net::WebSockets::WebSocketHandle___c::_ConnectSocketAsync_b__27_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xacef92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle___c*>(),
                        {"<ConnectSocketAsync>b__27_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketHandle___c._ConnectSocketAsync_b__27_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::WebSocketHandle___c::*)(::System::Object*)>(&::System::Net::WebSockets::WebSocketHandle___c::_ConnectSocketAsync_b__27_1)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xacef9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle___c*>(),
                        {"<ConnectSocketAsync>b__27_1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::WebSockets::WebSocketHandle___c::setStaticF___9(::System::Net::WebSockets::WebSocketHandle___c*  value)  {
::cordl_internals::setStaticField<::System::Net::WebSockets::WebSocketHandle___c*, "<>9", ::System::Net::WebSockets::WebSocketHandle___c*>(std::forward<::System::Net::WebSockets::WebSocketHandle___c*>(value));
}
inline ::System::Net::WebSockets::WebSocketHandle___c* System::Net::WebSockets::WebSocketHandle___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Net::WebSockets::WebSocketHandle___c*, "<>9", ::System::Net::WebSockets::WebSocketHandle___c*>();
}
inline void System::Net::WebSockets::WebSocketHandle___c::setStaticF___9__26_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__26_0", ::System::Net::WebSockets::WebSocketHandle___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::WebSockets::WebSocketHandle___c::getStaticF___9__26_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__26_0", ::System::Net::WebSockets::WebSocketHandle___c*>();
}
inline void System::Net::WebSockets::WebSocketHandle___c::setStaticF___9__27_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__27_0", ::System::Net::WebSockets::WebSocketHandle___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::WebSockets::WebSocketHandle___c::getStaticF___9__27_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__27_0", ::System::Net::WebSockets::WebSocketHandle___c*>();
}
inline void System::Net::WebSockets::WebSocketHandle___c::setStaticF___9__27_1(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__27_1", ::System::Net::WebSockets::WebSocketHandle___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::WebSockets::WebSocketHandle___c::getStaticF___9__27_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__27_1", ::System::Net::WebSockets::WebSocketHandle___c*>();
}
inline void System::Net::WebSockets::WebSocketHandle___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebSockets::WebSocketHandle___c::_ConnectAsyncCore_b__26_0(::System::Object*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle___c*>(),
                        {"<ConnectAsyncCore>b__26_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Net::WebSockets::WebSocketHandle___c::_ConnectSocketAsync_b__27_0(::System::Object*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle___c*>(),
                        {"<ConnectSocketAsync>b__27_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Net::WebSockets::WebSocketHandle___c::_ConnectSocketAsync_b__27_1(::System::Object*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketHandle___c*>(),
                        {"<ConnectSocketAsync>b__27_1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::System::Net::WebSockets::WebSocketHandle___c* System::Net::WebSockets::WebSocketHandle___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebSockets::WebSocketHandle___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::WebSocketHandle___c::WebSocketHandle___c()   {
}

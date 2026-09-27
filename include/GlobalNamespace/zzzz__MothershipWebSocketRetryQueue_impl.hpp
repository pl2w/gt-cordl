#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipWebSocketRetryQueue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketRetryQueue_def.hpp"
#include "GlobalNamespace/zzzz__ActiveWebSocket_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketRetryQueue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketRetryQueue.AddSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketRetryQueue::*)(::GlobalNamespace::ActiveWebSocket*)>(&::GlobalNamespace::MothershipWebSocketRetryQueue::AddSocket)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x53c2084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue*>(),
                        {"AddSocket", {}, {::i2c::type_of<::GlobalNamespace::ActiveWebSocket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketRetryQueue.RemoveSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketRetryQueue::*)(::GlobalNamespace::ActiveWebSocket*)>(&::GlobalNamespace::MothershipWebSocketRetryQueue::RemoveSocket)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x53c2310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue*>(),
                        {"RemoveSocket", {}, {::i2c::type_of<::GlobalNamespace::ActiveWebSocket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketRetryQueue.ClearSockets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketRetryQueue::*)()>(&::GlobalNamespace::MothershipWebSocketRetryQueue::ClearSockets)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x53c23f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue*>(),
                        {"ClearSockets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketRetryQueue.RetrySocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketRetryQueue::*)(::GlobalNamespace::ActiveWebSocket*)>(&::GlobalNamespace::MothershipWebSocketRetryQueue::RetrySocket)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x53c2460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue*>(),
                        {"RetrySocket", {}, {::i2c::type_of<::GlobalNamespace::ActiveWebSocket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketRetryQueue.ResetSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketRetryQueue::*)(::GlobalNamespace::ActiveWebSocket*)>(&::GlobalNamespace::MothershipWebSocketRetryQueue::ResetSocket)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x53c2488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue*>(),
                        {"ResetSocket", {}, {::i2c::type_of<::GlobalNamespace::ActiveWebSocket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketRetryQueue.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketRetryQueue::*)(float_t)>(&::GlobalNamespace::MothershipWebSocketRetryQueue::Tick)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x53c24b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue*>(),
                        {"Tick", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketRetryQueue.GetRetryingSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket* (::GlobalNamespace::MothershipWebSocketRetryQueue::*)(::GlobalNamespace::ActiveWebSocket*)>(&::GlobalNamespace::MothershipWebSocketRetryQueue::GetRetryingSocket)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x53c218c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue*>(),
                        {"GetRetryingSocket", {}, {::i2c::type_of<::GlobalNamespace::ActiveWebSocket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketRetryQueue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketRetryQueue::*)()>(&::GlobalNamespace::MothershipWebSocketRetryQueue::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x53c26f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>*& GlobalNamespace::MothershipWebSocketRetryQueue::__cordl_internal_get__websockets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____websockets;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>* const& GlobalNamespace::MothershipWebSocketRetryQueue::__cordl_internal_get__websockets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____websockets;
}
constexpr void GlobalNamespace::MothershipWebSocketRetryQueue::__cordl_internal_set__websockets(::System::Collections::Generic::List_1<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____websockets = value;
}
inline void GlobalNamespace::MothershipWebSocketRetryQueue::AddSocket(::GlobalNamespace::ActiveWebSocket*  socket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue*>(),
                        {"AddSocket", {}, {::i2c::type_of<::GlobalNamespace::ActiveWebSocket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, socket);
}
inline void GlobalNamespace::MothershipWebSocketRetryQueue::RemoveSocket(::GlobalNamespace::ActiveWebSocket*  socket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue*>(),
                        {"RemoveSocket", {}, {::i2c::type_of<::GlobalNamespace::ActiveWebSocket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, socket);
}
inline void GlobalNamespace::MothershipWebSocketRetryQueue::ClearSockets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue*>(),
                        {"ClearSockets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipWebSocketRetryQueue::RetrySocket(::GlobalNamespace::ActiveWebSocket*  socket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue*>(),
                        {"RetrySocket", {}, {::i2c::type_of<::GlobalNamespace::ActiveWebSocket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, socket);
}
inline void GlobalNamespace::MothershipWebSocketRetryQueue::ResetSocket(::GlobalNamespace::ActiveWebSocket*  socket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue*>(),
                        {"ResetSocket", {}, {::i2c::type_of<::GlobalNamespace::ActiveWebSocket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, socket);
}
inline void GlobalNamespace::MothershipWebSocketRetryQueue::Tick(float_t  deltaSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue*>(),
                        {"Tick", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaSeconds);
}
inline ::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket* GlobalNamespace::MothershipWebSocketRetryQueue::GetRetryingSocket(::GlobalNamespace::ActiveWebSocket*  socket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue*>(),
                        {"GetRetryingSocket", {}, {::i2c::type_of<::GlobalNamespace::ActiveWebSocket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>(this, ___internal_method, socket);
}
inline void GlobalNamespace::MothershipWebSocketRetryQueue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MothershipWebSocketRetryQueue* GlobalNamespace::MothershipWebSocketRetryQueue::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipWebSocketRetryQueue*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipWebSocketRetryQueue::MothershipWebSocketRetryQueue()   {
}
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::*)(::GlobalNamespace::ActiveWebSocket*)>(&::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x53c22d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ActiveWebSocket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket.Retry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::*)()>(&::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::Retry)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x53c247c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>(),
                        {"Retry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::*)()>(&::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x53c24a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::*)(float_t)>(&::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::Tick)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x53c25ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>(),
                        {"Tick", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::*)(::GlobalNamespace::ActiveWebSocket*)>(&::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x53c23e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::ActiveWebSocket*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ActiveWebSocket*& GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::__cordl_internal_get__websocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____websocket;
}
constexpr ::GlobalNamespace::ActiveWebSocket* const& GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::__cordl_internal_get__websocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____websocket;
}
constexpr void GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::__cordl_internal_set__websocket(::GlobalNamespace::ActiveWebSocket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____websocket = value;
}
constexpr float_t& GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::__cordl_internal_get__lastSetTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSetTime;
}
constexpr float_t const& GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::__cordl_internal_get__lastSetTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSetTime;
}
constexpr void GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::__cordl_internal_set__lastSetTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSetTime = value;
}
constexpr float_t& GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::__cordl_internal_get__timeLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeLeft;
}
constexpr float_t const& GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::__cordl_internal_get__timeLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeLeft;
}
constexpr void GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::__cordl_internal_set__timeLeft(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeLeft = value;
}
constexpr bool& GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::__cordl_internal_get__retryEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retryEnabled;
}
constexpr bool const& GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::__cordl_internal_get__retryEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retryEnabled;
}
constexpr void GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::__cordl_internal_set__retryEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retryEnabled = value;
}
inline void GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::_ctor(::GlobalNamespace::ActiveWebSocket*  socket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ActiveWebSocket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, socket);
}
inline void GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::Retry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>(),
                        {"Retry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::Tick(float_t  deltaSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>(),
                        {"Tick", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaSeconds);
}
inline bool GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::Equals(::GlobalNamespace::ActiveWebSocket*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::ActiveWebSocket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket* GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::New_ctor(::GlobalNamespace::ActiveWebSocket*  socket)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>(socket));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::ActiveWebSocket*>"
constexpr  GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::operator ::System::IEquatable_1<::GlobalNamespace::ActiveWebSocket*>*() noexcept {
return static_cast<::System::IEquatable_1<::GlobalNamespace::ActiveWebSocket*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::ActiveWebSocket*>"
constexpr ::System::IEquatable_1<::GlobalNamespace::ActiveWebSocket*>* GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::i___System__IEquatable_1___GlobalNamespace__ActiveWebSocket__() noexcept {
return static_cast<::System::IEquatable_1<::GlobalNamespace::ActiveWebSocket*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket::MothershipWebSocketRetryQueue_RetryingWebSocket()   {
}

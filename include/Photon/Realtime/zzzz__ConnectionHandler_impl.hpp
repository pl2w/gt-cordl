#pragma once
// IWYU pragma private; include "Photon/Realtime/ConnectionHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Realtime/zzzz__ConnectionHandler_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::ConnectionHandler.get_Client
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::LoadBalancingClient* (::Photon::Realtime::ConnectionHandler::*)()>(&::Photon::Realtime::ConnectionHandler::get_Client)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6f6490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"get_Client", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionHandler.set_Client
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ConnectionHandler::*)(::Photon::Realtime::LoadBalancingClient*)>(&::Photon::Realtime::ConnectionHandler::set_Client)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6f6498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"set_Client", {}, {::i2c::type_of<::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionHandler.get_CountSendAcksOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Realtime::ConnectionHandler::*)()>(&::Photon::Realtime::ConnectionHandler::get_CountSendAcksOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6f64a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"get_CountSendAcksOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionHandler.set_CountSendAcksOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ConnectionHandler::*)(int32_t)>(&::Photon::Realtime::ConnectionHandler::set_CountSendAcksOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6f64a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"set_CountSendAcksOnly", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionHandler.get_FallbackThreadRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::ConnectionHandler::*)()>(&::Photon::Realtime::ConnectionHandler::get_FallbackThreadRunning)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6f64b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"get_FallbackThreadRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionHandler.StaticReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Realtime::ConnectionHandler::StaticReset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa6f64c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"StaticReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionHandler.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ConnectionHandler::*)()>(&::Photon::Realtime::ConnectionHandler::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa6f6508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionHandler.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ConnectionHandler::*)()>(&::Photon::Realtime::ConnectionHandler::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa6f6554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                    {::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionHandler.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ConnectionHandler::*)()>(&::Photon::Realtime::ConnectionHandler::OnDisable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa6f65d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                    {::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionHandler.StartFallbackSendAckThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ConnectionHandler::*)()>(&::Photon::Realtime::ConnectionHandler::StartFallbackSendAckThread)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa6f69c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"StartFallbackSendAckThread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionHandler.StopFallbackSendAckThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ConnectionHandler::*)()>(&::Photon::Realtime::ConnectionHandler::StopFallbackSendAckThread)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa6f66a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"StopFallbackSendAckThread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionHandler.RealtimeFallbackThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::ConnectionHandler::*)()>(&::Photon::Realtime::ConnectionHandler::RealtimeFallbackThread)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa6f6a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"RealtimeFallbackThread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ConnectionHandler::*)()>(&::Photon::Realtime::ConnectionHandler::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa6f6ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Realtime::LoadBalancingClient*& Photon::Realtime::ConnectionHandler::__cordl_internal_get__Client_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Client_k__BackingField;
}
constexpr ::Photon::Realtime::LoadBalancingClient* const& Photon::Realtime::ConnectionHandler::__cordl_internal_get__Client_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Client_k__BackingField;
}
constexpr void Photon::Realtime::ConnectionHandler::__cordl_internal_set__Client_k__BackingField(::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Client_k__BackingField = value;
}
constexpr bool& Photon::Realtime::ConnectionHandler::__cordl_internal_get_DisconnectAfterKeepAlive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisconnectAfterKeepAlive;
}
constexpr bool const& Photon::Realtime::ConnectionHandler::__cordl_internal_get_DisconnectAfterKeepAlive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisconnectAfterKeepAlive;
}
constexpr void Photon::Realtime::ConnectionHandler::__cordl_internal_set_DisconnectAfterKeepAlive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisconnectAfterKeepAlive = value;
}
constexpr int32_t& Photon::Realtime::ConnectionHandler::__cordl_internal_get_KeepAliveInBackground()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeepAliveInBackground;
}
constexpr int32_t const& Photon::Realtime::ConnectionHandler::__cordl_internal_get_KeepAliveInBackground() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeepAliveInBackground;
}
constexpr void Photon::Realtime::ConnectionHandler::__cordl_internal_set_KeepAliveInBackground(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeepAliveInBackground = value;
}
constexpr int32_t& Photon::Realtime::ConnectionHandler::__cordl_internal_get__CountSendAcksOnly_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CountSendAcksOnly_k__BackingField;
}
constexpr int32_t const& Photon::Realtime::ConnectionHandler::__cordl_internal_get__CountSendAcksOnly_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CountSendAcksOnly_k__BackingField;
}
constexpr void Photon::Realtime::ConnectionHandler::__cordl_internal_set__CountSendAcksOnly_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CountSendAcksOnly_k__BackingField = value;
}
constexpr bool& Photon::Realtime::ConnectionHandler::__cordl_internal_get_ApplyDontDestroyOnLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApplyDontDestroyOnLoad;
}
constexpr bool const& Photon::Realtime::ConnectionHandler::__cordl_internal_get_ApplyDontDestroyOnLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApplyDontDestroyOnLoad;
}
constexpr void Photon::Realtime::ConnectionHandler::__cordl_internal_set_ApplyDontDestroyOnLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ApplyDontDestroyOnLoad = value;
}
constexpr uint8_t& Photon::Realtime::ConnectionHandler::__cordl_internal_get_fallbackThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackThreadId;
}
constexpr uint8_t const& Photon::Realtime::ConnectionHandler::__cordl_internal_get_fallbackThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackThreadId;
}
constexpr void Photon::Realtime::ConnectionHandler::__cordl_internal_set_fallbackThreadId(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallbackThreadId = value;
}
constexpr bool& Photon::Realtime::ConnectionHandler::__cordl_internal_get_didSendAcks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didSendAcks;
}
constexpr bool const& Photon::Realtime::ConnectionHandler::__cordl_internal_get_didSendAcks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didSendAcks;
}
constexpr void Photon::Realtime::ConnectionHandler::__cordl_internal_set_didSendAcks(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___didSendAcks = value;
}
constexpr ::System::Diagnostics::Stopwatch*& Photon::Realtime::ConnectionHandler::__cordl_internal_get_backgroundStopwatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backgroundStopwatch;
}
constexpr ::System::Diagnostics::Stopwatch* const& Photon::Realtime::ConnectionHandler::__cordl_internal_get_backgroundStopwatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backgroundStopwatch;
}
constexpr void Photon::Realtime::ConnectionHandler::__cordl_internal_set_backgroundStopwatch(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backgroundStopwatch = value;
}
inline void Photon::Realtime::ConnectionHandler::setStaticF_AppQuits(bool  value)  {
::cordl_internals::setStaticField<bool, "AppQuits", ::Photon::Realtime::ConnectionHandler*>(std::forward<bool>(value));
}
inline bool Photon::Realtime::ConnectionHandler::getStaticF_AppQuits()  {
return ::cordl_internals::getStaticField<bool, "AppQuits", ::Photon::Realtime::ConnectionHandler*>();
}
inline ::Photon::Realtime::LoadBalancingClient* Photon::Realtime::ConnectionHandler::get_Client()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"get_Client", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::LoadBalancingClient*>(this, ___internal_method);
}
inline void Photon::Realtime::ConnectionHandler::set_Client(::Photon::Realtime::LoadBalancingClient*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"set_Client", {}, {::i2c::type_of<::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Realtime::ConnectionHandler::get_CountSendAcksOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"get_CountSendAcksOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Realtime::ConnectionHandler::set_CountSendAcksOnly(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"set_CountSendAcksOnly", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Realtime::ConnectionHandler::get_FallbackThreadRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"get_FallbackThreadRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::ConnectionHandler::StaticReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"StaticReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Photon::Realtime::ConnectionHandler::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Realtime::ConnectionHandler::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Realtime::ConnectionHandler::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Realtime::ConnectionHandler::StartFallbackSendAckThread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"StartFallbackSendAckThread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Realtime::ConnectionHandler::StopFallbackSendAckThread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"StopFallbackSendAckThread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Realtime::ConnectionHandler::RealtimeFallbackThread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {"RealtimeFallbackThread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::ConnectionHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Realtime::ConnectionHandler* Photon::Realtime::ConnectionHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::ConnectionHandler*>());
}
// Ctor Parameters []
constexpr ::Photon::Realtime::ConnectionHandler::ConnectionHandler()   {
}

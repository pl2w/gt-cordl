#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/ConnectionHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__ConnectionHandler_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.get_Client
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::LoadBalancingClient* (::Fusion::Photon::Realtime::ConnectionHandler::*)()>(&::Fusion::Photon::Realtime::ConnectionHandler::get_Client)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4becc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"get_Client", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.set_Client
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionHandler::*)(::Fusion::Photon::Realtime::LoadBalancingClient*)>(&::Fusion::Photon::Realtime::ConnectionHandler::set_Client)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4bed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"set_Client", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.get_CountSendAcksOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::ConnectionHandler::*)()>(&::Fusion::Photon::Realtime::ConnectionHandler::get_CountSendAcksOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4bedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"get_CountSendAcksOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.set_CountSendAcksOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionHandler::*)(int32_t)>(&::Fusion::Photon::Realtime::ConnectionHandler::set_CountSendAcksOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4bee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"set_CountSendAcksOnly", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.get_FallbackThreadRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::ConnectionHandler::*)()>(&::Fusion::Photon::Realtime::ConnectionHandler::get_FallbackThreadRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4beec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"get_FallbackThreadRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.set_FallbackThreadRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionHandler::*)(bool)>(&::Fusion::Photon::Realtime::ConnectionHandler::set_FallbackThreadRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4bef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"set_FallbackThreadRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.StaticReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::Photon::Realtime::ConnectionHandler::StaticReset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f4befc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"StaticReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionHandler::*)()>(&::Fusion::Photon::Realtime::ConnectionHandler::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f4bf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionHandler::*)()>(&::Fusion::Photon::Realtime::ConnectionHandler::OnDisable)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f4bfc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionHandler::*)()>(&::Fusion::Photon::Realtime::ConnectionHandler::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f4c354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.OnApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionHandler::*)(bool)>(&::Fusion::Photon::Realtime::ConnectionHandler::OnApplicationPause)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f4c3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.ResetAppPauseRecent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionHandler::*)()>(&::Fusion::Photon::Realtime::ConnectionHandler::ResetAppPauseRecent)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f4c448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"ResetAppPauseRecent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionHandler::*)(bool)>(&::Fusion::Photon::Realtime::ConnectionHandler::OnApplicationFocus)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f4c490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.ResetAppOutOfFocusRecent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionHandler::*)()>(&::Fusion::Photon::Realtime::ConnectionHandler::ResetAppOutOfFocusRecent)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f4c538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"ResetAppOutOfFocusRecent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.IsNetworkReachableUnity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Fusion::Photon::Realtime::ConnectionHandler::IsNetworkReachableUnity)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f4c580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"IsNetworkReachableUnity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.StartFallbackSendAckThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionHandler::*)()>(&::Fusion::Photon::Realtime::ConnectionHandler::StartFallbackSendAckThread)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5f4851c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"StartFallbackSendAckThread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.StopFallbackSendAckThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionHandler::*)()>(&::Fusion::Photon::Realtime::ConnectionHandler::StopFallbackSendAckThread)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f486f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"StopFallbackSendAckThread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.RealtimeFallbackInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionHandler::*)()>(&::Fusion::Photon::Realtime::ConnectionHandler::RealtimeFallbackInvoke)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4c5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"RealtimeFallbackInvoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler.RealtimeFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionHandler::*)(::System::Object*)>(&::Fusion::Photon::Realtime::ConnectionHandler::RealtimeFallback)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5f4c5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"RealtimeFallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionHandler::*)()>(&::Fusion::Photon::Realtime::ConnectionHandler::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f4c724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get__Client_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Client_k__BackingField;
}
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get__Client_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Client_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_set__Client_k__BackingField(::Fusion::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Client_k__BackingField = value;
}
constexpr bool& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get_DisconnectAfterKeepAlive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisconnectAfterKeepAlive;
}
constexpr bool const& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get_DisconnectAfterKeepAlive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisconnectAfterKeepAlive;
}
constexpr void Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_set_DisconnectAfterKeepAlive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisconnectAfterKeepAlive = value;
}
constexpr int32_t& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get_KeepAliveInBackground()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeepAliveInBackground;
}
constexpr int32_t const& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get_KeepAliveInBackground() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeepAliveInBackground;
}
constexpr void Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_set_KeepAliveInBackground(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeepAliveInBackground = value;
}
constexpr int32_t& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get__CountSendAcksOnly_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CountSendAcksOnly_k__BackingField;
}
constexpr int32_t const& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get__CountSendAcksOnly_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CountSendAcksOnly_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_set__CountSendAcksOnly_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CountSendAcksOnly_k__BackingField = value;
}
constexpr bool& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get__FallbackThreadRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FallbackThreadRunning_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get__FallbackThreadRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FallbackThreadRunning_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_set__FallbackThreadRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FallbackThreadRunning_k__BackingField = value;
}
constexpr bool& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get_ApplyDontDestroyOnLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApplyDontDestroyOnLoad;
}
constexpr bool const& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get_ApplyDontDestroyOnLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApplyDontDestroyOnLoad;
}
constexpr void Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_set_ApplyDontDestroyOnLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ApplyDontDestroyOnLoad = value;
}
constexpr bool& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get_didSendAcks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didSendAcks;
}
constexpr bool const& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get_didSendAcks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didSendAcks;
}
constexpr void Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_set_didSendAcks(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___didSendAcks = value;
}
constexpr ::System::Diagnostics::Stopwatch*& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get_backgroundStopwatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backgroundStopwatch;
}
constexpr ::System::Diagnostics::Stopwatch* const& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get_backgroundStopwatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backgroundStopwatch;
}
constexpr void Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_set_backgroundStopwatch(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backgroundStopwatch = value;
}
constexpr ::System::Threading::Timer*& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get_stateTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateTimer;
}
constexpr ::System::Threading::Timer* const& Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_get_stateTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateTimer;
}
constexpr void Fusion::Photon::Realtime::ConnectionHandler::__cordl_internal_set_stateTimer(::System::Threading::Timer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateTimer = value;
}
inline void Fusion::Photon::Realtime::ConnectionHandler::setStaticF_AppQuits(bool  value)  {
::cordl_internals::setStaticField<bool, "AppQuits", ::Fusion::Photon::Realtime::ConnectionHandler*>(std::forward<bool>(value));
}
inline bool Fusion::Photon::Realtime::ConnectionHandler::getStaticF_AppQuits()  {
return ::cordl_internals::getStaticField<bool, "AppQuits", ::Fusion::Photon::Realtime::ConnectionHandler*>();
}
inline void Fusion::Photon::Realtime::ConnectionHandler::setStaticF_AppPause(bool  value)  {
::cordl_internals::setStaticField<bool, "AppPause", ::Fusion::Photon::Realtime::ConnectionHandler*>(std::forward<bool>(value));
}
inline bool Fusion::Photon::Realtime::ConnectionHandler::getStaticF_AppPause()  {
return ::cordl_internals::getStaticField<bool, "AppPause", ::Fusion::Photon::Realtime::ConnectionHandler*>();
}
inline void Fusion::Photon::Realtime::ConnectionHandler::setStaticF_AppPauseRecent(bool  value)  {
::cordl_internals::setStaticField<bool, "AppPauseRecent", ::Fusion::Photon::Realtime::ConnectionHandler*>(std::forward<bool>(value));
}
inline bool Fusion::Photon::Realtime::ConnectionHandler::getStaticF_AppPauseRecent()  {
return ::cordl_internals::getStaticField<bool, "AppPauseRecent", ::Fusion::Photon::Realtime::ConnectionHandler*>();
}
inline void Fusion::Photon::Realtime::ConnectionHandler::setStaticF_AppOutOfFocus(bool  value)  {
::cordl_internals::setStaticField<bool, "AppOutOfFocus", ::Fusion::Photon::Realtime::ConnectionHandler*>(std::forward<bool>(value));
}
inline bool Fusion::Photon::Realtime::ConnectionHandler::getStaticF_AppOutOfFocus()  {
return ::cordl_internals::getStaticField<bool, "AppOutOfFocus", ::Fusion::Photon::Realtime::ConnectionHandler*>();
}
inline void Fusion::Photon::Realtime::ConnectionHandler::setStaticF_AppOutOfFocusRecent(bool  value)  {
::cordl_internals::setStaticField<bool, "AppOutOfFocusRecent", ::Fusion::Photon::Realtime::ConnectionHandler*>(std::forward<bool>(value));
}
inline bool Fusion::Photon::Realtime::ConnectionHandler::getStaticF_AppOutOfFocusRecent()  {
return ::cordl_internals::getStaticField<bool, "AppOutOfFocusRecent", ::Fusion::Photon::Realtime::ConnectionHandler*>();
}
inline ::Fusion::Photon::Realtime::LoadBalancingClient* Fusion::Photon::Realtime::ConnectionHandler::get_Client()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"get_Client", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::LoadBalancingClient*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::ConnectionHandler::set_Client(::Fusion::Photon::Realtime::LoadBalancingClient*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"set_Client", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Photon::Realtime::ConnectionHandler::get_CountSendAcksOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"get_CountSendAcksOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::ConnectionHandler::set_CountSendAcksOnly(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"set_CountSendAcksOnly", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::ConnectionHandler::get_FallbackThreadRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"get_FallbackThreadRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::ConnectionHandler::set_FallbackThreadRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"set_FallbackThreadRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::ConnectionHandler::StaticReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"StaticReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Fusion::Photon::Realtime::ConnectionHandler::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::ConnectionHandler::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::ConnectionHandler::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::ConnectionHandler::OnApplicationPause(bool  pause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pause);
}
inline void Fusion::Photon::Realtime::ConnectionHandler::ResetAppPauseRecent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"ResetAppPauseRecent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::ConnectionHandler::OnApplicationFocus(bool  focus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focus);
}
inline void Fusion::Photon::Realtime::ConnectionHandler::ResetAppOutOfFocusRecent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"ResetAppOutOfFocusRecent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::ConnectionHandler::IsNetworkReachableUnity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"IsNetworkReachableUnity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Fusion::Photon::Realtime::ConnectionHandler::StartFallbackSendAckThread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"StartFallbackSendAckThread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::ConnectionHandler::StopFallbackSendAckThread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"StopFallbackSendAckThread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::ConnectionHandler::RealtimeFallbackInvoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"RealtimeFallbackInvoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::ConnectionHandler::RealtimeFallback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {"RealtimeFallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Fusion::Photon::Realtime::ConnectionHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::ConnectionHandler* Fusion::Photon::Realtime::ConnectionHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::ConnectionHandler*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::ConnectionHandler::ConnectionHandler()   {
}

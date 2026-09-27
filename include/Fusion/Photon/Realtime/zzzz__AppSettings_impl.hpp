#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/AppSettings.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__AuthModeOption_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__AppSettings_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::AppSettings.get_NetworkLogging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::DebugLevel (::Fusion::Photon::Realtime::AppSettings::*)()>(&::Fusion::Photon::Realtime::AppSettings::get_NetworkLogging)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f4b4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"get_NetworkLogging", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AppSettings.set_NetworkLogging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::AppSettings::*)(::ExitGames::Client::Photon::DebugLevel)>(&::Fusion::Photon::Realtime::AppSettings::set_NetworkLogging)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"set_NetworkLogging", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AppSettings.get_IsMasterServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::AppSettings::*)()>(&::Fusion::Photon::Realtime::AppSettings::get_IsMasterServerAddress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f4b568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"get_IsMasterServerAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AppSettings.get_IsBestRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::AppSettings::*)()>(&::Fusion::Photon::Realtime::AppSettings::get_IsBestRegion)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f4b578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"get_IsBestRegion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AppSettings.get_IsDefaultNameServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::AppSettings::*)()>(&::Fusion::Photon::Realtime::AppSettings::get_IsDefaultNameServer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f4b594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"get_IsDefaultNameServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AppSettings.get_IsDefaultPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::AppSettings::*)()>(&::Fusion::Photon::Realtime::AppSettings::get_IsDefaultPort)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f49cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"get_IsDefaultPort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AppSettings.ToStringFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::AppSettings::*)()>(&::Fusion::Photon::Realtime::AppSettings::ToStringFull)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x5f4b5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"ToStringFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AppSettings.IsAppId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Fusion::Photon::Realtime::AppSettings::IsAppId)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f4bcfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"IsAppId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AppSettings.HideAppId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::AppSettings::*)(::StringW)>(&::Fusion::Photon::Realtime::AppSettings::HideAppId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f4bc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"HideAppId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AppSettings.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::AppSettings* (::Fusion::Photon::Realtime::AppSettings::*)(::Fusion::Photon::Realtime::AppSettings*)>(&::Fusion::Photon::Realtime::AppSettings::CopyTo)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f4bdc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"CopyTo", {}, {::i2c::type_of<::Fusion::Photon::Realtime::AppSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AppSettings.GetCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::AppSettings* (::Fusion::Photon::Realtime::AppSettings::*)()>(&::Fusion::Photon::Realtime::AppSettings::GetCopy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f49c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"GetCopy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AppSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::AppSettings::*)()>(&::Fusion::Photon::Realtime::AppSettings::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f4beb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_AppIdRealtime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppIdRealtime;
}
constexpr ::StringW const& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_AppIdRealtime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppIdRealtime;
}
constexpr void Fusion::Photon::Realtime::AppSettings::__cordl_internal_set_AppIdRealtime(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppIdRealtime = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_AppIdFusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppIdFusion;
}
constexpr ::StringW const& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_AppIdFusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppIdFusion;
}
constexpr void Fusion::Photon::Realtime::AppSettings::__cordl_internal_set_AppIdFusion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppIdFusion = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_AppIdChat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppIdChat;
}
constexpr ::StringW const& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_AppIdChat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppIdChat;
}
constexpr void Fusion::Photon::Realtime::AppSettings::__cordl_internal_set_AppIdChat(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppIdChat = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_AppIdVoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppIdVoice;
}
constexpr ::StringW const& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_AppIdVoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppIdVoice;
}
constexpr void Fusion::Photon::Realtime::AppSettings::__cordl_internal_set_AppIdVoice(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppIdVoice = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_AppVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppVersion;
}
constexpr ::StringW const& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_AppVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppVersion;
}
constexpr void Fusion::Photon::Realtime::AppSettings::__cordl_internal_set_AppVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppVersion = value;
}
constexpr bool& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_UseNameServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseNameServer;
}
constexpr bool const& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_UseNameServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseNameServer;
}
constexpr void Fusion::Photon::Realtime::AppSettings::__cordl_internal_set_UseNameServer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseNameServer = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_FixedRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FixedRegion;
}
constexpr ::StringW const& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_FixedRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FixedRegion;
}
constexpr void Fusion::Photon::Realtime::AppSettings::__cordl_internal_set_FixedRegion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FixedRegion = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_BestRegionSummaryFromStorage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BestRegionSummaryFromStorage;
}
constexpr ::StringW const& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_BestRegionSummaryFromStorage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BestRegionSummaryFromStorage;
}
constexpr void Fusion::Photon::Realtime::AppSettings::__cordl_internal_set_BestRegionSummaryFromStorage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BestRegionSummaryFromStorage = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_Server()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Server;
}
constexpr ::StringW const& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_Server() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Server;
}
constexpr void Fusion::Photon::Realtime::AppSettings::__cordl_internal_set_Server(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Server = value;
}
constexpr int32_t& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_Port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Port;
}
constexpr int32_t const& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_Port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Port;
}
constexpr void Fusion::Photon::Realtime::AppSettings::__cordl_internal_set_Port(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Port = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_ProxyServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProxyServer;
}
constexpr ::StringW const& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_ProxyServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProxyServer;
}
constexpr void Fusion::Photon::Realtime::AppSettings::__cordl_internal_set_ProxyServer(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProxyServer = value;
}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_Protocol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Protocol;
}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol const& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_Protocol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Protocol;
}
constexpr void Fusion::Photon::Realtime::AppSettings::__cordl_internal_set_Protocol(::ExitGames::Client::Photon::ConnectionProtocol  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Protocol = value;
}
constexpr bool& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_EnableProtocolFallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableProtocolFallback;
}
constexpr bool const& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_EnableProtocolFallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableProtocolFallback;
}
constexpr void Fusion::Photon::Realtime::AppSettings::__cordl_internal_set_EnableProtocolFallback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableProtocolFallback = value;
}
constexpr ::Fusion::Photon::Realtime::AuthModeOption& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_AuthMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthMode;
}
constexpr ::Fusion::Photon::Realtime::AuthModeOption const& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_AuthMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthMode;
}
constexpr void Fusion::Photon::Realtime::AppSettings::__cordl_internal_set_AuthMode(::Fusion::Photon::Realtime::AuthModeOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AuthMode = value;
}
constexpr bool& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_EnableLobbyStatistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableLobbyStatistics;
}
constexpr bool const& Fusion::Photon::Realtime::AppSettings::__cordl_internal_get_EnableLobbyStatistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableLobbyStatistics;
}
constexpr void Fusion::Photon::Realtime::AppSettings::__cordl_internal_set_EnableLobbyStatistics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableLobbyStatistics = value;
}
inline ::ExitGames::Client::Photon::DebugLevel Fusion::Photon::Realtime::AppSettings::get_NetworkLogging()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"get_NetworkLogging", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DebugLevel>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::AppSettings::set_NetworkLogging(::ExitGames::Client::Photon::DebugLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"set_NetworkLogging", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::AppSettings::get_IsMasterServerAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"get_IsMasterServerAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::AppSettings::get_IsBestRegion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"get_IsBestRegion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::AppSettings::get_IsDefaultNameServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"get_IsDefaultNameServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::AppSettings::get_IsDefaultPort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"get_IsDefaultPort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Fusion::Photon::Realtime::AppSettings::ToStringFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"ToStringFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::AppSettings::IsAppId(::StringW  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"IsAppId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, val);
}
inline ::StringW Fusion::Photon::Realtime::AppSettings::HideAppId(::StringW  appId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"HideAppId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, appId);
}
inline ::Fusion::Photon::Realtime::AppSettings* Fusion::Photon::Realtime::AppSettings::CopyTo(::Fusion::Photon::Realtime::AppSettings*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"CopyTo", {}, {::i2c::type_of<::Fusion::Photon::Realtime::AppSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::AppSettings*>(this, ___internal_method, d);
}
inline ::Fusion::Photon::Realtime::AppSettings* Fusion::Photon::Realtime::AppSettings::GetCopy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {"GetCopy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::AppSettings*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::AppSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AppSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::AppSettings* Fusion::Photon::Realtime::AppSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::AppSettings*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::AppSettings::AppSettings()   {
}

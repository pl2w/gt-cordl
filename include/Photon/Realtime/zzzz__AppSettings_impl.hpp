#pragma once
// IWYU pragma private; include "Photon/Realtime/AppSettings.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_impl.hpp"
#include "Photon/Realtime/zzzz__AuthModeOption_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__AppSettings_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::AppSettings.get_IsMasterServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::AppSettings::*)()>(&::Photon::Realtime::AppSettings::get_IsMasterServerAddress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6f5b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {"get_IsMasterServerAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AppSettings.get_IsBestRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::AppSettings::*)()>(&::Photon::Realtime::AppSettings::get_IsBestRegion)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6f5b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {"get_IsBestRegion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AppSettings.get_IsDefaultNameServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::AppSettings::*)()>(&::Photon::Realtime::AppSettings::get_IsDefaultNameServer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6f5b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {"get_IsDefaultNameServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AppSettings.get_IsDefaultPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::AppSettings::*)()>(&::Photon::Realtime::AppSettings::get_IsDefaultPort)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6f5b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {"get_IsDefaultPort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AppSettings.ToStringFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::AppSettings::*)()>(&::Photon::Realtime::AppSettings::ToStringFull)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0xa6f5b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {"ToStringFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AppSettings.IsAppId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Photon::Realtime::AppSettings::IsAppId)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa6f62c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {"IsAppId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AppSettings.HideAppId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::AppSettings::*)(::StringW)>(&::Photon::Realtime::AppSettings::HideAppId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa6f6238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {"HideAppId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AppSettings.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::AppSettings* (::Photon::Realtime::AppSettings::*)(::Photon::Realtime::AppSettings*)>(&::Photon::Realtime::AppSettings::CopyTo)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa6f6390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {"CopyTo", {}, {::i2c::type_of<::Photon::Realtime::AppSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AppSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::AppSettings::*)()>(&::Photon::Realtime::AppSettings::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6f6478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Realtime::AppSettings::__cordl_internal_get_AppIdRealtime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppIdRealtime;
}
constexpr ::StringW const& Photon::Realtime::AppSettings::__cordl_internal_get_AppIdRealtime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppIdRealtime;
}
constexpr void Photon::Realtime::AppSettings::__cordl_internal_set_AppIdRealtime(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppIdRealtime = value;
}
constexpr ::StringW& Photon::Realtime::AppSettings::__cordl_internal_get_AppIdFusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppIdFusion;
}
constexpr ::StringW const& Photon::Realtime::AppSettings::__cordl_internal_get_AppIdFusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppIdFusion;
}
constexpr void Photon::Realtime::AppSettings::__cordl_internal_set_AppIdFusion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppIdFusion = value;
}
constexpr ::StringW& Photon::Realtime::AppSettings::__cordl_internal_get_AppIdChat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppIdChat;
}
constexpr ::StringW const& Photon::Realtime::AppSettings::__cordl_internal_get_AppIdChat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppIdChat;
}
constexpr void Photon::Realtime::AppSettings::__cordl_internal_set_AppIdChat(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppIdChat = value;
}
constexpr ::StringW& Photon::Realtime::AppSettings::__cordl_internal_get_AppIdVoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppIdVoice;
}
constexpr ::StringW const& Photon::Realtime::AppSettings::__cordl_internal_get_AppIdVoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppIdVoice;
}
constexpr void Photon::Realtime::AppSettings::__cordl_internal_set_AppIdVoice(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppIdVoice = value;
}
constexpr ::StringW& Photon::Realtime::AppSettings::__cordl_internal_get_AppVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppVersion;
}
constexpr ::StringW const& Photon::Realtime::AppSettings::__cordl_internal_get_AppVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppVersion;
}
constexpr void Photon::Realtime::AppSettings::__cordl_internal_set_AppVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppVersion = value;
}
constexpr bool& Photon::Realtime::AppSettings::__cordl_internal_get_UseNameServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseNameServer;
}
constexpr bool const& Photon::Realtime::AppSettings::__cordl_internal_get_UseNameServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseNameServer;
}
constexpr void Photon::Realtime::AppSettings::__cordl_internal_set_UseNameServer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseNameServer = value;
}
constexpr ::StringW& Photon::Realtime::AppSettings::__cordl_internal_get_FixedRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FixedRegion;
}
constexpr ::StringW const& Photon::Realtime::AppSettings::__cordl_internal_get_FixedRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FixedRegion;
}
constexpr void Photon::Realtime::AppSettings::__cordl_internal_set_FixedRegion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FixedRegion = value;
}
constexpr ::StringW& Photon::Realtime::AppSettings::__cordl_internal_get_BestRegionSummaryFromStorage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BestRegionSummaryFromStorage;
}
constexpr ::StringW const& Photon::Realtime::AppSettings::__cordl_internal_get_BestRegionSummaryFromStorage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BestRegionSummaryFromStorage;
}
constexpr void Photon::Realtime::AppSettings::__cordl_internal_set_BestRegionSummaryFromStorage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BestRegionSummaryFromStorage = value;
}
constexpr ::StringW& Photon::Realtime::AppSettings::__cordl_internal_get_Server()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Server;
}
constexpr ::StringW const& Photon::Realtime::AppSettings::__cordl_internal_get_Server() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Server;
}
constexpr void Photon::Realtime::AppSettings::__cordl_internal_set_Server(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Server = value;
}
constexpr int32_t& Photon::Realtime::AppSettings::__cordl_internal_get_Port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Port;
}
constexpr int32_t const& Photon::Realtime::AppSettings::__cordl_internal_get_Port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Port;
}
constexpr void Photon::Realtime::AppSettings::__cordl_internal_set_Port(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Port = value;
}
constexpr ::StringW& Photon::Realtime::AppSettings::__cordl_internal_get_ProxyServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProxyServer;
}
constexpr ::StringW const& Photon::Realtime::AppSettings::__cordl_internal_get_ProxyServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProxyServer;
}
constexpr void Photon::Realtime::AppSettings::__cordl_internal_set_ProxyServer(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProxyServer = value;
}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol& Photon::Realtime::AppSettings::__cordl_internal_get_Protocol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Protocol;
}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol const& Photon::Realtime::AppSettings::__cordl_internal_get_Protocol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Protocol;
}
constexpr void Photon::Realtime::AppSettings::__cordl_internal_set_Protocol(::ExitGames::Client::Photon::ConnectionProtocol  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Protocol = value;
}
constexpr bool& Photon::Realtime::AppSettings::__cordl_internal_get_EnableProtocolFallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableProtocolFallback;
}
constexpr bool const& Photon::Realtime::AppSettings::__cordl_internal_get_EnableProtocolFallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableProtocolFallback;
}
constexpr void Photon::Realtime::AppSettings::__cordl_internal_set_EnableProtocolFallback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableProtocolFallback = value;
}
constexpr ::Photon::Realtime::AuthModeOption& Photon::Realtime::AppSettings::__cordl_internal_get_AuthMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthMode;
}
constexpr ::Photon::Realtime::AuthModeOption const& Photon::Realtime::AppSettings::__cordl_internal_get_AuthMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthMode;
}
constexpr void Photon::Realtime::AppSettings::__cordl_internal_set_AuthMode(::Photon::Realtime::AuthModeOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AuthMode = value;
}
constexpr bool& Photon::Realtime::AppSettings::__cordl_internal_get_EnableLobbyStatistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableLobbyStatistics;
}
constexpr bool const& Photon::Realtime::AppSettings::__cordl_internal_get_EnableLobbyStatistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableLobbyStatistics;
}
constexpr void Photon::Realtime::AppSettings::__cordl_internal_set_EnableLobbyStatistics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableLobbyStatistics = value;
}
constexpr ::ExitGames::Client::Photon::DebugLevel& Photon::Realtime::AppSettings::__cordl_internal_get_NetworkLogging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkLogging;
}
constexpr ::ExitGames::Client::Photon::DebugLevel const& Photon::Realtime::AppSettings::__cordl_internal_get_NetworkLogging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkLogging;
}
constexpr void Photon::Realtime::AppSettings::__cordl_internal_set_NetworkLogging(::ExitGames::Client::Photon::DebugLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetworkLogging = value;
}
inline bool Photon::Realtime::AppSettings::get_IsMasterServerAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {"get_IsMasterServerAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Realtime::AppSettings::get_IsBestRegion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {"get_IsBestRegion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Realtime::AppSettings::get_IsDefaultNameServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {"get_IsDefaultNameServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Realtime::AppSettings::get_IsDefaultPort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {"get_IsDefaultPort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Photon::Realtime::AppSettings::ToStringFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {"ToStringFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Photon::Realtime::AppSettings::IsAppId(::StringW  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {"IsAppId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, val);
}
inline ::StringW Photon::Realtime::AppSettings::HideAppId(::StringW  appId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {"HideAppId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, appId);
}
inline ::Photon::Realtime::AppSettings* Photon::Realtime::AppSettings::CopyTo(::Photon::Realtime::AppSettings*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {"CopyTo", {}, {::i2c::type_of<::Photon::Realtime::AppSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::AppSettings*>(this, ___internal_method, d);
}
inline void Photon::Realtime::AppSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AppSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Realtime::AppSettings* Photon::Realtime::AppSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::AppSettings*>());
}
// Ctor Parameters []
constexpr ::Photon::Realtime::AppSettings::AppSettings()   {
}

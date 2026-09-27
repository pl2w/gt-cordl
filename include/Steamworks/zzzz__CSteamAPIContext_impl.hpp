#pragma once
// IWYU pragma private; include "Steamworks/CSteamAPIContext.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__CSteamAPIContext_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Steamworks::CSteamAPIContext.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::CSteamAPIContext::Clear)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f333c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamAPIContext*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamAPIContext.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::CSteamAPIContext::Init)> {
  constexpr static std::size_t size = 0x864;
  constexpr static std::size_t addrs = 0x5f3214c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamAPIContext*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamAPIContext.GetSteamClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Steamworks::CSteamAPIContext::GetSteamClient)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f3347c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamAPIContext*>(),
                        {"GetSteamClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamAPIContext.GetSteamUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Steamworks::CSteamAPIContext::GetSteamUser)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f334c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamAPIContext*>(),
                        {"GetSteamUser", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamClient(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamClient", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamClient()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamClient", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamUser(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamUser", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamUser()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamUser", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamFriends(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamFriends", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamFriends()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamFriends", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamUtils(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamUtils", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamUtils()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamUtils", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamMatchmaking(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamMatchmaking", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamMatchmaking()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamMatchmaking", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamUserStats(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamUserStats", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamUserStats()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamUserStats", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamApps(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamApps", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamApps()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamApps", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamMatchmakingServers(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamMatchmakingServers", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamMatchmakingServers()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamMatchmakingServers", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamNetworking(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamNetworking", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamNetworking()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamNetworking", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamRemoteStorage(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamRemoteStorage", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamRemoteStorage()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamRemoteStorage", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamScreenshots(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamScreenshots", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamScreenshots()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamScreenshots", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamHTTP(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamHTTP", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamHTTP()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamHTTP", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pController(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pController", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pController()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pController", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamUGC(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamUGC", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamUGC()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamUGC", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamMusic(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamMusic", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamMusic()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamMusic", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamHTMLSurface(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamHTMLSurface", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamHTMLSurface()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamHTMLSurface", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamInventory(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamInventory", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamInventory()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamInventory", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamVideo(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamVideo", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamVideo()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamVideo", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamParentalSettings(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamParentalSettings", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamParentalSettings()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamParentalSettings", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamInput(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamInput", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamInput()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamInput", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamParties(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamParties", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamParties()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamParties", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamRemotePlay(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamRemotePlay", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamRemotePlay()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamRemotePlay", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamNetworkingUtils(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamNetworkingUtils", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamNetworkingUtils()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamNetworkingUtils", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamNetworkingSockets(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamNetworkingSockets", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamNetworkingSockets()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamNetworkingSockets", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamNetworkingMessages(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamNetworkingMessages", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamNetworkingMessages()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamNetworkingMessages", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::setStaticF_m_pSteamTimeline(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pSteamTimeline", ::Steamworks::CSteamAPIContext*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::getStaticF_m_pSteamTimeline()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pSteamTimeline", ::Steamworks::CSteamAPIContext*>();
}
inline void Steamworks::CSteamAPIContext::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamAPIContext*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Steamworks::CSteamAPIContext::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamAPIContext*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::GetSteamClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamAPIContext*>(),
                        {"GetSteamClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr Steamworks::CSteamAPIContext::GetSteamUser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamAPIContext*>(),
                        {"GetSteamUser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Steamworks::CSteamAPIContext::CSteamAPIContext()   {
}

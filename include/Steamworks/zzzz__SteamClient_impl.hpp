#pragma once
// IWYU pragma private; include "Steamworks/SteamClient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamClient_def.hpp"
#include "Steamworks/zzzz__HSteamPipe_def.hpp"
#include "Steamworks/zzzz__HSteamUser_def.hpp"
#include "Steamworks/zzzz__SteamAPIWarningMessageHook_t_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamUser)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2beac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamUser", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamFriends)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2c2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamFriends", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamUtils
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamUtils)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5f2c558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamUtils", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamMatchmaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamMatchmaking)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2c7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamMatchmaking", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamMatchmakingServers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamMatchmakingServers)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2ca50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamMatchmakingServers", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamUserStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamUserStats)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2ccd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamUserStats", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamApps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamApps)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2cf58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamApps", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamNetworking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamNetworking)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2d1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamNetworking", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamRemoteStorage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamRemoteStorage)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2d460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamRemoteStorage", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamScreenshots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamScreenshots)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2d6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamScreenshots", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.SetWarningMessageHook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::SteamAPIWarningMessageHook_t*)>(&::Steamworks::SteamClient::SetWarningMessageHook)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f2d968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"SetWarningMessageHook", {}, {::i2c::type_of<::Steamworks::SteamAPIWarningMessageHook_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamHTTP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamHTTP)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2da48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamHTTP", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamUGC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamUGC)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2dccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamUGC", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamMusic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamMusic)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2df50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamMusic", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamHTMLSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamHTMLSurface)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2e1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamHTMLSurface", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamInventory)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2e458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamInventory", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamVideo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamVideo)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2e6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamVideo", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamParentalSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamParentalSettings)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2e960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamParentalSettings", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamInput)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2ebe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamInput", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamParties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamParties)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2ee68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamParties", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamRemotePlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamRemotePlay)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f2f0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamRemotePlay", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Steamworks::SteamClient::GetISteamUser(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamUser", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamFriends(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamFriends", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamUtils(::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamUtils", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamMatchmaking(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamMatchmaking", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamMatchmakingServers(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamMatchmakingServers", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamUserStats(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamUserStats", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamApps(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamApps", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamNetworking(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamNetworking", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamRemoteStorage(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamRemoteStorage", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamScreenshots(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamScreenshots", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline void Steamworks::SteamClient::SetWarningMessageHook(::Steamworks::SteamAPIWarningMessageHook_t*  pFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"SetWarningMessageHook", {}, {::i2c::type_of<::Steamworks::SteamAPIWarningMessageHook_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pFunction);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamHTTP(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamHTTP", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamUGC(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamUGC", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamMusic(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamMusic", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamHTMLSurface(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamHTMLSurface", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamInventory(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamInventory", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamVideo(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamVideo", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamParentalSettings(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamParentalSettings", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamInput(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamInput", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamParties(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamParties", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamRemotePlay(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamRemotePlay", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamClient::SteamClient()   {
}

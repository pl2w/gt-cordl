#pragma once
// IWYU pragma private; include "Steamworks/NativeMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__NativeMethods_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__ESteamAPIInitResult_def.hpp"
#include "Steamworks/zzzz__HAuthTicket_def.hpp"
#include "Steamworks/zzzz__HSteamPipe_def.hpp"
#include "Steamworks/zzzz__HSteamUser_def.hpp"
#include "Steamworks/zzzz__InteropHelp_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
#include "Steamworks/zzzz__SteamAPIWarningMessageHook_t_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingIdentity_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Steamworks::NativeMethods.SteamInternal_SteamAPI_Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamAPIInitResult (*)(::Steamworks::InteropHelp_UTF8StringHandle*, ::System::IntPtr)>(&::Steamworks::NativeMethods::SteamInternal_SteamAPI_Init)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f2f950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamInternal_SteamAPI_Init", {}, {::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.SteamAPI_Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::NativeMethods::SteamAPI_Shutdown)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f2fa1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.SteamAPI_RestartAppIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::AppId_t)>(&::Steamworks::NativeMethods::SteamAPI_RestartAppIfNecessary)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f2fa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_RestartAppIfNecessary", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.SteamAPI_GetHSteamPipe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Steamworks::NativeMethods::SteamAPI_GetHSteamPipe)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f2fb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_GetHSteamPipe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.SteamAPI_GetHSteamUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Steamworks::NativeMethods::SteamAPI_GetHSteamUser)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f2fb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_GetHSteamUser", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.SteamInternal_CreateInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::SteamInternal_CreateInterface)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f2fbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamInternal_CreateInterface", {}, {::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.SteamInternal_FindOrCreateUserInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::SteamInternal_FindOrCreateUserInterface)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f2fc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamInternal_FindOrCreateUserInterface", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.SteamInternal_FindOrCreateGameServerInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::SteamInternal_FindOrCreateGameServerInterface)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f2fd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamInternal_FindOrCreateGameServerInterface", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.SteamAPI_ManualDispatch_Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::NativeMethods::SteamAPI_ManualDispatch_Init)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f2fe28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_ManualDispatch_Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.SteamAPI_ManualDispatch_RunFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HSteamPipe)>(&::Steamworks::NativeMethods::SteamAPI_ManualDispatch_RunFrame)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f2fe8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_ManualDispatch_RunFrame", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.SteamAPI_ManualDispatch_GetNextCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamPipe, ::System::IntPtr)>(&::Steamworks::NativeMethods::SteamAPI_ManualDispatch_GetNextCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f2ff08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_ManualDispatch_GetNextCallback", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.SteamAPI_ManualDispatch_FreeLastCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HSteamPipe)>(&::Steamworks::NativeMethods::SteamAPI_ManualDispatch_FreeLastCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f2ff94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_ManualDispatch_FreeLastCallback", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.SteamAPI_ManualDispatch_GetAPICallResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamPipe, ::Steamworks::SteamAPICall_t, ::System::IntPtr, int32_t, int32_t, ::by_ref<bool>)>(&::Steamworks::NativeMethods::SteamAPI_ManualDispatch_GetAPICallResult)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f30010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_ManualDispatch_GetAPICallResult", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.SteamGameServer_GetHSteamPipe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Steamworks::NativeMethods::SteamGameServer_GetHSteamPipe)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f300e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamGameServer_GetHSteamPipe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.SteamAPI_SteamNetworkingIdentity_IsEqualTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>, ::by_ref<::Steamworks::SteamNetworkingIdentity>)>(&::Steamworks::NativeMethods::SteamAPI_SteamNetworkingIdentity_IsEqualTo)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f30144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_SteamNetworkingIdentity_IsEqualTo", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamUser)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2c1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamUser", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamFriends)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2c474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamFriends", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamUtils
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamUtils)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f2c6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamUtils", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamMatchmaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamMatchmaking)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2c96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamMatchmaking", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamMatchmakingServers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamMatchmakingServers)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2cbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamMatchmakingServers", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamUserStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamUserStats)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2ce74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamUserStats", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamApps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamApps)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2d0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamApps", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamNetworking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamNetworking)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2d37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamNetworking", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamRemoteStorage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamRemoteStorage)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2d600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamRemoteStorage", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamScreenshots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamScreenshots)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2d884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamScreenshots", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_SetWarningMessageHook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::Steamworks::SteamAPIWarningMessageHook_t*)>(&::Steamworks::NativeMethods::ISteamClient_SetWarningMessageHook)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f2d9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_SetWarningMessageHook", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::SteamAPIWarningMessageHook_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamHTTP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamHTTP)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2dbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamHTTP", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamUGC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamUGC)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2de6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamUGC", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamMusic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamMusic)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2e0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamMusic", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamHTMLSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamHTMLSurface)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2e374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamHTMLSurface", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamInventory)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2e5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamInventory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamVideo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamVideo)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2e87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamVideo", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamParentalSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamParentalSettings)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2eb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamParentalSettings", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamInput)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2ed84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamInput", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamParties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamParties)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2f008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamParties", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamClient_GetISteamRemotePlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamClient_GetISteamRemotePlay)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2f28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamRemotePlay", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamUser_GetSteamID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::Steamworks::NativeMethods::ISteamUser_GetSteamID)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f2f404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamUser_GetSteamID", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamUser_GetAuthSessionTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr, ::ArrayW<uint8_t>, int32_t, ::by_ref<uint32_t>, ::by_ref<::Steamworks::SteamNetworkingIdentity>)>(&::Steamworks::NativeMethods::ISteamUser_GetAuthSessionTicket)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f2f548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamUser_GetAuthSessionTicket", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamUser_GetAuthTicketForWebApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr, ::Steamworks::InteropHelp_UTF8StringHandle*)>(&::Steamworks::NativeMethods::ISteamUser_GetAuthTicketForWebApi)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f2f7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamUser_GetAuthTicketForWebApi", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::NativeMethods.ISteamUser_CancelAuthTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::Steamworks::HAuthTicket)>(&::Steamworks::NativeMethods::ISteamUser_CancelAuthTicket)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f2f8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamUser_CancelAuthTicket", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::ESteamAPIInitResult Steamworks::NativeMethods::SteamInternal_SteamAPI_Init(::Steamworks::InteropHelp_UTF8StringHandle*  pszInternalCheckInterfaceVersions, ::System::IntPtr  pOutErrMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamInternal_SteamAPI_Init", {}, {::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamAPIInitResult>(nullptr, ___internal_method, pszInternalCheckInterfaceVersions, pOutErrMsg);
}
inline void Steamworks::NativeMethods::SteamAPI_Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Steamworks::NativeMethods::SteamAPI_RestartAppIfNecessary(::Steamworks::AppId_t  unOwnAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_RestartAppIfNecessary", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unOwnAppID);
}
inline int32_t Steamworks::NativeMethods::SteamAPI_GetHSteamPipe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_GetHSteamPipe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Steamworks::NativeMethods::SteamAPI_GetHSteamUser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_GetHSteamUser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::System::IntPtr Steamworks::NativeMethods::SteamInternal_CreateInterface(::Steamworks::InteropHelp_UTF8StringHandle*  ver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamInternal_CreateInterface", {}, {::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, ver);
}
inline ::System::IntPtr Steamworks::NativeMethods::SteamInternal_FindOrCreateUserInterface(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pszVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamInternal_FindOrCreateUserInterface", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, pszVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::SteamInternal_FindOrCreateGameServerInterface(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pszVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamInternal_FindOrCreateGameServerInterface", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, pszVersion);
}
inline void Steamworks::NativeMethods::SteamAPI_ManualDispatch_Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_ManualDispatch_Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::NativeMethods::SteamAPI_ManualDispatch_RunFrame(::Steamworks::HSteamPipe  hSteamPipe)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_ManualDispatch_RunFrame", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hSteamPipe);
}
inline bool Steamworks::NativeMethods::SteamAPI_ManualDispatch_GetNextCallback(::Steamworks::HSteamPipe  hSteamPipe, ::System::IntPtr  pCallbackMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_ManualDispatch_GetNextCallback", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSteamPipe, pCallbackMsg);
}
inline void Steamworks::NativeMethods::SteamAPI_ManualDispatch_FreeLastCallback(::Steamworks::HSteamPipe  hSteamPipe)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_ManualDispatch_FreeLastCallback", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hSteamPipe);
}
inline bool Steamworks::NativeMethods::SteamAPI_ManualDispatch_GetAPICallResult(::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::SteamAPICall_t  hSteamAPICall, ::System::IntPtr  pCallback, int32_t  cubCallback, int32_t  iCallbackExpected, ::by_ref<bool>  pbFailed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_ManualDispatch_GetAPICallResult", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSteamPipe, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
}
inline int32_t Steamworks::NativeMethods::SteamGameServer_GetHSteamPipe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamGameServer_GetHSteamPipe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool Steamworks::NativeMethods::SteamAPI_SteamNetworkingIdentity_IsEqualTo(::by_ref<::Steamworks::SteamNetworkingIdentity>  self, ::by_ref<::Steamworks::SteamNetworkingIdentity>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"SteamAPI_SteamNetworkingIdentity_IsEqualTo", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, self, x);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamUser(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamUser", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamFriends(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamFriends", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamUtils(::System::IntPtr  instancePtr, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamUtils", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamMatchmaking(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamMatchmaking", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamMatchmakingServers(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamMatchmakingServers", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamUserStats(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamUserStats", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamApps(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamApps", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamNetworking(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamNetworking", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamRemoteStorage(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamRemoteStorage", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamScreenshots(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamScreenshots", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamuser, hSteamPipe, pchVersion);
}
inline void Steamworks::NativeMethods::ISteamClient_SetWarningMessageHook(::System::IntPtr  instancePtr, ::Steamworks::SteamAPIWarningMessageHook_t*  pFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_SetWarningMessageHook", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::SteamAPIWarningMessageHook_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instancePtr, pFunction);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamHTTP(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamHTTP", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamUGC(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamUGC", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamMusic(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamMusic", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamHTMLSurface(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamHTMLSurface", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamInventory(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamInventory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamVideo(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamVideo", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamParentalSettings(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamParentalSettings", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamInput(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamInput", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamParties(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamParties", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::NativeMethods::ISteamClient_GetISteamRemotePlay(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamClient_GetISteamRemotePlay", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instancePtr, hSteamUser, hSteamPipe, pchVersion);
}
inline uint64_t Steamworks::NativeMethods::ISteamUser_GetSteamID(::System::IntPtr  instancePtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamUser_GetSteamID", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, instancePtr);
}
inline uint32_t Steamworks::NativeMethods::ISteamUser_GetAuthSessionTicket(::System::IntPtr  instancePtr, ::ArrayW<uint8_t>  pTicket, int32_t  cbMaxTicket, ::by_ref<uint32_t>  pcbTicket, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pSteamNetworkingIdentity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamUser_GetAuthSessionTicket", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, instancePtr, pTicket, cbMaxTicket, pcbTicket, pSteamNetworkingIdentity);
}
inline uint32_t Steamworks::NativeMethods::ISteamUser_GetAuthTicketForWebApi(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchIdentity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamUser_GetAuthTicketForWebApi", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::InteropHelp_UTF8StringHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, instancePtr, pchIdentity);
}
inline void Steamworks::NativeMethods::ISteamUser_CancelAuthTicket(::System::IntPtr  instancePtr, ::Steamworks::HAuthTicket  hAuthTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::NativeMethods*>(),
                        {"ISteamUser_CancelAuthTicket", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instancePtr, hAuthTicket);
}
// Ctor Parameters []
constexpr ::Steamworks::NativeMethods::NativeMethods()   {
}

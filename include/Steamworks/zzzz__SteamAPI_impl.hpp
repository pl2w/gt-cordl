#pragma once
// IWYU pragma private; include "Steamworks/SteamAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamAPI_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__ESteamAPIInitResult_def.hpp"
#include "Steamworks/zzzz__HSteamPipe_def.hpp"
#include "Steamworks/zzzz__HSteamUser_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamAPI.InitEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamAPIInitResult (*)(::by_ref<::StringW>)>(&::Steamworks::SteamAPI::InitEx)> {
  constexpr static std::size_t size = 0x73c;
  constexpr static std::size_t addrs = 0x5f32bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPI*>(),
                        {"InitEx", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamAPI.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamAPI::Init)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f33318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPI*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamAPI.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamAPI::Shutdown)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f33334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPI*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamAPI.RestartAppIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::AppId_t)>(&::Steamworks::SteamAPI::RestartAppIfNecessary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3340c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPI*>(),
                        {"RestartAppIfNecessary", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamAPI.RunCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamAPI::RunCallbacks)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f33414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPI*>(),
                        {"RunCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamAPI.GetHSteamPipe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamPipe (*)()>(&::Steamworks::SteamAPI::GetHSteamPipe)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f33464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPI*>(),
                        {"GetHSteamPipe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamAPI.GetHSteamUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamUser (*)()>(&::Steamworks::SteamAPI::GetHSteamUser)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f33468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPI*>(),
                        {"GetHSteamUser", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::ESteamAPIInitResult Steamworks::SteamAPI::InitEx(::by_ref<::StringW>  OutSteamErrMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPI*>(),
                        {"InitEx", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamAPIInitResult>(nullptr, ___internal_method, OutSteamErrMsg);
}
inline bool Steamworks::SteamAPI::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPI*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Steamworks::SteamAPI::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPI*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamAPI::RestartAppIfNecessary(::Steamworks::AppId_t  unOwnAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPI*>(),
                        {"RestartAppIfNecessary", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unOwnAppID);
}
inline void Steamworks::SteamAPI::RunCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPI*>(),
                        {"RunCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Steamworks::HSteamPipe Steamworks::SteamAPI::GetHSteamPipe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPI*>(),
                        {"GetHSteamPipe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamPipe>(nullptr, ___internal_method);
}
inline ::Steamworks::HSteamUser Steamworks::SteamAPI::GetHSteamUser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPI*>(),
                        {"GetHSteamUser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamUser>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamAPI::SteamAPI()   {
}

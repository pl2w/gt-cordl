#pragma once
// IWYU pragma private; include "Steamworks/SteamUser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamUser_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__HAuthTicket_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingIdentity_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamUser.GetSteamID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)()>(&::Steamworks::SteamUser::GetSteamID)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f2f370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetSteamID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.GetAuthSessionTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HAuthTicket (*)(::ArrayW<uint8_t>, int32_t, ::by_ref<uint32_t>, ::by_ref<::Steamworks::SteamNetworkingIdentity>)>(&::Steamworks::SteamUser::GetAuthSessionTicket)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f2f484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetAuthSessionTicket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.GetAuthTicketForWebApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HAuthTicket (*)(::StringW)>(&::Steamworks::SteamUser::GetAuthTicketForWebApi)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5f2f600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetAuthTicketForWebApi", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.CancelAuthTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HAuthTicket)>(&::Steamworks::SteamUser::CancelAuthTicket)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f2f878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"CancelAuthTicket", {}, {::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::CSteamID Steamworks::SteamUser::GetSteamID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetSteamID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method);
}
inline ::Steamworks::HAuthTicket Steamworks::SteamUser::GetAuthSessionTicket(::ArrayW<uint8_t>  pTicket, int32_t  cbMaxTicket, ::by_ref<uint32_t>  pcbTicket, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pSteamNetworkingIdentity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetAuthSessionTicket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HAuthTicket>(nullptr, ___internal_method, pTicket, cbMaxTicket, pcbTicket, pSteamNetworkingIdentity);
}
inline ::Steamworks::HAuthTicket Steamworks::SteamUser::GetAuthTicketForWebApi(::StringW  pchIdentity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetAuthTicketForWebApi", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HAuthTicket>(nullptr, ___internal_method, pchIdentity);
}
inline void Steamworks::SteamUser::CancelAuthTicket(::Steamworks::HAuthTicket  hAuthTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"CancelAuthTicket", {}, {::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hAuthTicket);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamUser::SteamUser()   {
}

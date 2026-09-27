#pragma once
// IWYU pragma private; include "GorillaNetworking/PlayFabAuthenticator.hpp"
#include "GorillaNetworking/zzzz__PlayFabAuthenticator_SafetyType_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/zzzz__PlayFabAuthenticator_def.hpp"
#include "GlobalNamespace/zzzz__MetaAuthenticator_def.hpp"
#include "GlobalNamespace/zzzz__MothershipAuthenticator_def.hpp"
#include "GlobalNamespace/zzzz__PhotonAuthenticator_def.hpp"
#include "GlobalNamespace/zzzz__PlatformTagJoin_def.hpp"
#include "GlobalNamespace/zzzz__SteamAuthTicket_def.hpp"
#include "GlobalNamespace/zzzz__SteamAuthenticator_def.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer_def.hpp"
#include "GorillaNetworking/zzzz__PlayFabAuthenticator_SafetyType_def.hpp"
#include "GorillaNetworking/zzzz__PlayFabAuthenticator_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerProfileResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__LoginResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__UpdateUserTitleDisplayNameResult_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteFunctionResult_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__WaitForEndOfFrame_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.get_gorillaComputer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaNetworking::GorillaComputer> (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::get_gorillaComputer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c9648c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"get_gorillaComputer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.get_IsReturningPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::get_IsReturningPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c964ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"get_IsReturningPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.set_IsReturningPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(bool)>(&::GorillaNetworking::PlayFabAuthenticator::set_IsReturningPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c964f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"set_IsReturningPlayer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.get_postAuthSetSafety
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::get_postAuthSetSafety)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c964fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"get_postAuthSetSafety", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.set_postAuthSetSafety
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(bool)>(&::GorillaNetworking::PlayFabAuthenticator::set_postAuthSetSafety)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c96504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"set_postAuthSetSafety", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::Awake)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x5c9650c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.BeginLoginFlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::BeginLoginFlow)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x5c96940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"BeginLoginFlow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.SetLoginFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::SetLoginFailed)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c96fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"SetLoginFailed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c97048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::OnEnable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c9704c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::OnDisable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5c97108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.RefreshSteamAuthTicketForPhoton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::System::Action_1<::StringW>*, ::System::Action_1<::Steamworks::EResult>*)>(&::GorillaNetworking::PlayFabAuthenticator::RefreshSteamAuthTicketForPhoton)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c971f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"RefreshSteamAuthTicketForPhoton", {}, {::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::Steamworks::EResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::GorillaNetworking::PlayFabAuthenticator::OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c97268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.GetNonceForPlayFab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::GetNonceForPlayFab)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c97338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"GetNonceForPlayFab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.OnPlayFabAuthResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*)>(&::GorillaNetworking::PlayFabAuthenticator::OnPlayFabAuthResponse)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5c9733c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"OnPlayFabAuthResponse", {}, {::i2c::type_of<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.AuthenticateWithPlayFab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::AuthenticateWithPlayFab)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5c96d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"AuthenticateWithPlayFab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.VerifyKidAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::PlayFabAuthenticator::*)(::System::DateTime)>(&::GorillaNetworking::PlayFabAuthenticator::VerifyKidAuthenticated)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c975c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"VerifyKidAuthenticated", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c9782c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c97798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.OnLoginWithSteamResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::PlayFab::ClientModels::LoginResult*)>(&::GorillaNetworking::PlayFabAuthenticator::OnLoginWithSteamResponse)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5c978e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"OnLoginWithSteamResponse", {}, {::i2c::type_of<::PlayFab::ClientModels::LoginResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.OnCachePlayFabIdRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*)>(&::GorillaNetworking::PlayFabAuthenticator::OnCachePlayFabIdRequest)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5c97ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"OnCachePlayFabIdRequest", {}, {::i2c::type_of<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.AdvanceLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::AdvanceLogin)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c9763c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"AdvanceLogin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.AuthenticateWithPhoton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::AuthenticateWithPhoton)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x5c97d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"AuthenticateWithPhoton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.ComputerOnConnectedToMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::ComputerOnConnectedToMaster)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c985a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"ComputerOnConnectedToMaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.OnPlayFabError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::PlayFabAuthenticator::OnPlayFabError)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x5c9863c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"OnPlayFabError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.LogMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::StringW)>(&::GorillaNetworking::PlayFabAuthenticator::LogMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c97d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"LogMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.GetPlayerDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::StringW)>(&::GorillaNetworking::PlayFabAuthenticator::GetPlayerDisplayName)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5c983c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"GetPlayerDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.SetDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::StringW)>(&::GorillaNetworking::PlayFabAuthenticator::SetDisplayName)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5c946c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"SetDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.ScreenDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::StringW)>(&::GorillaNetworking::PlayFabAuthenticator::ScreenDebug)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c98d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"ScreenDebug", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.ScreenDebugClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::ScreenDebugClear)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c98e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"ScreenDebugClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.PlayfabAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::PlayFabAuthenticator::*)(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData*, ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>*)>(&::GorillaNetworking::PlayFabAuthenticator::PlayfabAuthenticate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c98e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"PlayfabAuthenticate", {}, {::i2c::type_of<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData*>(), ::i2c::type_of<::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.ShowMothershipAuthErrorMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::StringW, ::StringW, ::StringW)>(&::GorillaNetworking::PlayFabAuthenticator::ShowMothershipAuthErrorMessage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c98f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"ShowMothershipAuthErrorMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.ShowMothershipAuthErrorMessageCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::PlayFabAuthenticator::*)(::StringW, ::StringW, ::StringW)>(&::GorillaNetworking::PlayFabAuthenticator::ShowMothershipAuthErrorMessageCoroutine)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c98f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"ShowMothershipAuthErrorMessageCoroutine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.ShowPlayFabAuthErrorMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::StringW)>(&::GorillaNetworking::PlayFabAuthenticator::ShowPlayFabAuthErrorMessage)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5c99034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"ShowPlayFabAuthErrorMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.ShowBanMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::GorillaNetworking::PlayFabAuthenticator_BanInfo*)>(&::GorillaNetworking::PlayFabAuthenticator::ShowBanMessage)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5c9924c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"ShowBanMessage", {}, {::i2c::type_of<::GorillaNetworking::PlayFabAuthenticator_BanInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.CachePlayFabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::PlayFabAuthenticator::*)(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*, ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>*)>(&::GorillaNetworking::PlayFabAuthenticator::CachePlayFabId)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c97b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"CachePlayFabId", {}, {::i2c::type_of<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*>(), ::i2c::type_of<::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.DefaultSafetiesByAgeCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::DefaultSafetiesByAgeCategory)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c97718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"DefaultSafetiesByAgeCategory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.SetSafety
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(bool, bool, bool)>(&::GorillaNetworking::PlayFabAuthenticator::SetSafety)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5c9954c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"SetSafety", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.GetPlayFabSessionTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::GetPlayFabSessionTicket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c996f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"GetPlayFabSessionTicket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.GetPlayFabPlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::GetPlayFabPlayerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c996fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"GetPlayFabPlayerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.GetSafety
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::GetSafety)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c99704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"GetSafety", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.GetSafetyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayFabAuthenticator_SafetyType (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::GetSafetyType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9970c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"GetSafetyType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator.GetUserID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::GetUserID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c99714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"GetUserID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)()>(&::GorillaNetworking::PlayFabAuthenticator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c9971c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator._BeginLoginFlow_b__42_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::StringW, ::StringW, ::StringW)>(&::GorillaNetworking::PlayFabAuthenticator::_BeginLoginFlow_b__42_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c99730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"<BeginLoginFlow>b__42_1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator._AuthenticateWithPlayFab_b__51_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::StringW)>(&::GorillaNetworking::PlayFabAuthenticator::_AuthenticateWithPlayFab_b__51_0)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5c99780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"<AuthenticateWithPlayFab>b__51_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator._AuthenticateWithPlayFab_b__51_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::Steamworks::EResult)>(&::GorillaNetworking::PlayFabAuthenticator::_AuthenticateWithPlayFab_b__51_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c99944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"<AuthenticateWithPlayFab>b__51_1", {}, {::i2c::type_of<::Steamworks::EResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator._AdvanceLogin_b__57_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::StringW)>(&::GorillaNetworking::PlayFabAuthenticator::_AdvanceLogin_b__57_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c99964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"<AdvanceLogin>b__57_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator._AdvanceLogin_b__57_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::Steamworks::EResult)>(&::GorillaNetworking::PlayFabAuthenticator::_AdvanceLogin_b__57_1)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c999f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"<AdvanceLogin>b__57_1", {}, {::i2c::type_of<::Steamworks::EResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator._GetPlayerDisplayName_b__62_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator::*)(::PlayFab::ClientModels::GetPlayerProfileResult*)>(&::GorillaNetworking::PlayFabAuthenticator::_GetPlayerDisplayName_b__62_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c99a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"<GetPlayerDisplayName>b__62_0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetPlayerProfileResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get__playFabPlayerIdCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playFabPlayerIdCache;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get__playFabPlayerIdCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playFabPlayerIdCache;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set__playFabPlayerIdCache(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playFabPlayerIdCache = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get__sessionTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionTicket;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get__sessionTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionTicket;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set__sessionTicket(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sessionTicket = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get__displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayName;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get__displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayName;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set__displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____displayName = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get__nonce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonce;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get__nonce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonce;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set__nonce(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nonce = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_userID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userID;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_userID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userID;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_userID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userID = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_userToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userToken;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_userToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userToken;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_userToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userToken = value;
}
constexpr ::UnityW<::GlobalNamespace::PlatformTagJoin>& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr ::UnityW<::GlobalNamespace::PlatformTagJoin> const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_platform(::UnityW<::GlobalNamespace::PlatformTagJoin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platform = value;
}
constexpr bool& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_isSafeAccount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSafeAccount;
}
constexpr bool const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_isSafeAccount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSafeAccount;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_isSafeAccount(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSafeAccount = value;
}
constexpr ::System::Action_1<bool>*& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_OnSafetyUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSafetyUpdate;
}
constexpr ::System::Action_1<bool>* const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_OnSafetyUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSafetyUpdate;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_OnSafetyUpdate(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSafetyUpdate = value;
}
constexpr ::GlobalNamespace::PlayFabAuthenticator_SafetyType& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_safetyType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___safetyType;
}
constexpr ::GlobalNamespace::PlayFabAuthenticator_SafetyType const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_safetyType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___safetyType;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_safetyType(::GlobalNamespace::PlayFabAuthenticator_SafetyType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___safetyType = value;
}
constexpr ::ArrayW<uint8_t>& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_m_Ticket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ticket;
}
constexpr ::ArrayW<uint8_t> const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_m_Ticket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ticket;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_m_Ticket(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Ticket = value;
}
constexpr uint32_t& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_m_pcbTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pcbTicket;
}
constexpr uint32_t const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_m_pcbTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pcbTicket;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_m_pcbTicket(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_pcbTicket = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_debugText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_debugText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugText;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_debugText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugText = value;
}
constexpr bool& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_screenDebugMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenDebugMode;
}
constexpr bool const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_screenDebugMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenDebugMode;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_screenDebugMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenDebugMode = value;
}
constexpr bool& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_loginFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loginFailed;
}
constexpr bool const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_loginFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loginFailed;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_loginFailed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loginFailed = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_emptyObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_emptyObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyObject;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_emptyObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyObject = value;
}
constexpr int32_t& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_playFabAuthRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabAuthRetryCount;
}
constexpr int32_t const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_playFabAuthRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabAuthRetryCount;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_playFabAuthRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playFabAuthRetryCount = value;
}
constexpr int32_t& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_playFabMaxRetries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabMaxRetries;
}
constexpr int32_t const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_playFabMaxRetries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabMaxRetries;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_playFabMaxRetries(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playFabMaxRetries = value;
}
constexpr int32_t& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_playFabCacheRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabCacheRetryCount;
}
constexpr int32_t const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_playFabCacheRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabCacheRetryCount;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_playFabCacheRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playFabCacheRetryCount = value;
}
constexpr int32_t& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_playFabCacheMaxRetries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabCacheMaxRetries;
}
constexpr int32_t const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_playFabCacheMaxRetries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabCacheMaxRetries;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_playFabCacheMaxRetries(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playFabCacheMaxRetries = value;
}
constexpr ::UnityW<::GlobalNamespace::MetaAuthenticator>& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_metaAuthenticator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metaAuthenticator;
}
constexpr ::UnityW<::GlobalNamespace::MetaAuthenticator> const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_metaAuthenticator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metaAuthenticator;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_metaAuthenticator(::UnityW<::GlobalNamespace::MetaAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___metaAuthenticator = value;
}
constexpr ::UnityW<::GlobalNamespace::SteamAuthenticator>& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_steamAuthenticator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamAuthenticator;
}
constexpr ::UnityW<::GlobalNamespace::SteamAuthenticator> const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_steamAuthenticator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamAuthenticator;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_steamAuthenticator(::UnityW<::GlobalNamespace::SteamAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steamAuthenticator = value;
}
constexpr ::UnityW<::GlobalNamespace::MothershipAuthenticator>& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_mothershipAuthenticator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipAuthenticator;
}
constexpr ::UnityW<::GlobalNamespace::MothershipAuthenticator> const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_mothershipAuthenticator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipAuthenticator;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_mothershipAuthenticator(::UnityW<::GlobalNamespace::MothershipAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipAuthenticator = value;
}
constexpr ::UnityW<::GlobalNamespace::PhotonAuthenticator>& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_photonAuthenticator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonAuthenticator;
}
constexpr ::UnityW<::GlobalNamespace::PhotonAuthenticator> const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_photonAuthenticator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonAuthenticator;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_photonAuthenticator(::UnityW<::GlobalNamespace::PhotonAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonAuthenticator = value;
}
constexpr bool& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_dbg_isReturningPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dbg_isReturningPlayer;
}
constexpr bool const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_dbg_isReturningPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dbg_isReturningPlayer;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_dbg_isReturningPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dbg_isReturningPlayer = value;
}
constexpr bool& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get__IsReturningPlayer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsReturningPlayer_k__BackingField;
}
constexpr bool const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get__IsReturningPlayer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsReturningPlayer_k__BackingField;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set__IsReturningPlayer_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsReturningPlayer_k__BackingField = value;
}
constexpr ::GlobalNamespace::SteamAuthTicket*& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_steamAuthTicketForPlayFab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamAuthTicketForPlayFab;
}
constexpr ::GlobalNamespace::SteamAuthTicket* const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_steamAuthTicketForPlayFab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamAuthTicketForPlayFab;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_steamAuthTicketForPlayFab(::GlobalNamespace::SteamAuthTicket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steamAuthTicketForPlayFab = value;
}
constexpr ::GlobalNamespace::SteamAuthTicket*& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_steamAuthTicketForPhoton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamAuthTicketForPhoton;
}
constexpr ::GlobalNamespace::SteamAuthTicket* const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_steamAuthTicketForPhoton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamAuthTicketForPhoton;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_steamAuthTicketForPhoton(::GlobalNamespace::SteamAuthTicket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steamAuthTicketForPhoton = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_steamAuthIdForPhoton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamAuthIdForPhoton;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get_steamAuthIdForPhoton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamAuthIdForPhoton;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set_steamAuthIdForPhoton(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steamAuthIdForPhoton = value;
}
constexpr bool& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get__postAuthSetSafety_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____postAuthSetSafety_k__BackingField;
}
constexpr bool const& GorillaNetworking::PlayFabAuthenticator::__cordl_internal_get__postAuthSetSafety_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____postAuthSetSafety_k__BackingField;
}
constexpr void GorillaNetworking::PlayFabAuthenticator::__cordl_internal_set__postAuthSetSafety_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____postAuthSetSafety_k__BackingField = value;
}
inline void GorillaNetworking::PlayFabAuthenticator::setStaticF_instance(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaNetworking::PlayFabAuthenticator>, "instance", ::GorillaNetworking::PlayFabAuthenticator*>(std::forward<::UnityW<::GorillaNetworking::PlayFabAuthenticator>>(value));
}
inline ::UnityW<::GorillaNetworking::PlayFabAuthenticator> GorillaNetworking::PlayFabAuthenticator::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaNetworking::PlayFabAuthenticator>, "instance", ::GorillaNetworking::PlayFabAuthenticator*>();
}
inline ::UnityW<::GorillaNetworking::GorillaComputer> GorillaNetworking::PlayFabAuthenticator::get_gorillaComputer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"get_gorillaComputer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaNetworking::GorillaComputer>>(this, ___internal_method);
}
inline bool GorillaNetworking::PlayFabAuthenticator::get_IsReturningPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"get_IsReturningPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator::set_IsReturningPlayer(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"set_IsReturningPlayer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaNetworking::PlayFabAuthenticator::get_postAuthSetSafety()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"get_postAuthSetSafety", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator::set_postAuthSetSafety(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"set_postAuthSetSafety", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::PlayFabAuthenticator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator::BeginLoginFlow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"BeginLoginFlow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator::SetLoginFailed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"SetLoginFailed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator::RefreshSteamAuthTicketForPhoton(::System::Action_1<::StringW>*  successCallback, ::System::Action_1<::Steamworks::EResult>*  failureCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"RefreshSteamAuthTicketForPhoton", {}, {::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::Steamworks::EResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, successCallback, failureCallback);
}
inline void GorillaNetworking::PlayFabAuthenticator::OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GorillaNetworking::PlayFabAuthenticator::GetNonceForPlayFab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"GetNonceForPlayFab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator::OnPlayFabAuthResponse(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"OnPlayFabAuthResponse", {}, {::i2c::type_of<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GorillaNetworking::PlayFabAuthenticator::AuthenticateWithPlayFab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"AuthenticateWithPlayFab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::PlayFabAuthenticator::VerifyKidAuthenticated(::System::DateTime  accountCreationDateTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"VerifyKidAuthenticated", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, accountCreationDateTime);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::PlayFabAuthenticator::DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::PlayFabAuthenticator::DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator::OnLoginWithSteamResponse(::PlayFab::ClientModels::LoginResult*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"OnLoginWithSteamResponse", {}, {::i2c::type_of<::PlayFab::ClientModels::LoginResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GorillaNetworking::PlayFabAuthenticator::OnCachePlayFabIdRequest(/* [CanBeNull] */ ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"OnCachePlayFabIdRequest", {}, {::i2c::type_of<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GorillaNetworking::PlayFabAuthenticator::AdvanceLogin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"AdvanceLogin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator::AuthenticateWithPhoton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"AuthenticateWithPhoton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::PlayFabAuthenticator::ComputerOnConnectedToMaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"ComputerOnConnectedToMaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator::OnPlayFabError(::PlayFab::PlayFabError*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"OnPlayFabError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GorillaNetworking::PlayFabAuthenticator::LogMessage(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"LogMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GorillaNetworking::PlayFabAuthenticator::GetPlayerDisplayName(::StringW  playFabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"GetPlayerDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playFabId);
}
inline void GorillaNetworking::PlayFabAuthenticator::SetDisplayName(::StringW  playerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"SetDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName);
}
inline void GorillaNetworking::PlayFabAuthenticator::ScreenDebug(::StringW  debugString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"ScreenDebug", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugString);
}
inline void GorillaNetworking::PlayFabAuthenticator::ScreenDebugClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"ScreenDebugClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::PlayFabAuthenticator::PlayfabAuthenticate(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData*  data, ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"PlayfabAuthenticate", {}, {::i2c::type_of<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData*>(), ::i2c::type_of<::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GorillaNetworking::PlayFabAuthenticator::ShowMothershipAuthErrorMessage(::StringW  errorMessage, ::StringW  errorCode, ::StringW  traceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"ShowMothershipAuthErrorMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMessage, errorCode, traceId);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::PlayFabAuthenticator::ShowMothershipAuthErrorMessageCoroutine(::StringW  errorMessage, ::StringW  errorCode, ::StringW  traceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"ShowMothershipAuthErrorMessageCoroutine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, errorMessage, errorCode, traceId);
}
inline void GorillaNetworking::PlayFabAuthenticator::ShowPlayFabAuthErrorMessage(::StringW  errorJson)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"ShowPlayFabAuthErrorMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorJson);
}
inline void GorillaNetworking::PlayFabAuthenticator::ShowBanMessage(::GorillaNetworking::PlayFabAuthenticator_BanInfo*  banInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"ShowBanMessage", {}, {::i2c::type_of<::GorillaNetworking::PlayFabAuthenticator_BanInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, banInfo);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::PlayFabAuthenticator::CachePlayFabId(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*  data, ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"CachePlayFabId", {}, {::i2c::type_of<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*>(), ::i2c::type_of<::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GorillaNetworking::PlayFabAuthenticator::DefaultSafetiesByAgeCategory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"DefaultSafetiesByAgeCategory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator::SetSafety(bool  isSafety, bool  isAutoSet, bool  setPlayfab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"SetSafety", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isSafety, isAutoSet, setPlayfab);
}
inline ::StringW GorillaNetworking::PlayFabAuthenticator::GetPlayFabSessionTicket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"GetPlayFabSessionTicket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::PlayFabAuthenticator::GetPlayFabPlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"GetPlayFabPlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GorillaNetworking::PlayFabAuthenticator::GetSafety()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"GetSafety", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayFabAuthenticator_SafetyType GorillaNetworking::PlayFabAuthenticator::GetSafetyType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"GetSafetyType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayFabAuthenticator_SafetyType>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::PlayFabAuthenticator::GetUserID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"GetUserID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator::_BeginLoginFlow_b__42_1(::StringW  errorMessage, ::StringW  errorCode, ::StringW  traceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"<BeginLoginFlow>b__42_1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMessage, errorCode, traceId);
}
inline void GorillaNetworking::PlayFabAuthenticator::_AuthenticateWithPlayFab_b__51_0(::StringW  ticket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"<AuthenticateWithPlayFab>b__51_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ticket);
}
inline void GorillaNetworking::PlayFabAuthenticator::_AuthenticateWithPlayFab_b__51_1(::Steamworks::EResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"<AuthenticateWithPlayFab>b__51_1", {}, {::i2c::type_of<::Steamworks::EResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::PlayFabAuthenticator::_AdvanceLogin_b__57_0(::StringW  ticket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"<AdvanceLogin>b__57_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ticket);
}
inline void GorillaNetworking::PlayFabAuthenticator::_AdvanceLogin_b__57_1(::Steamworks::EResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"<AdvanceLogin>b__57_1", {}, {::i2c::type_of<::Steamworks::EResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::PlayFabAuthenticator::_GetPlayerDisplayName_b__62_0(::PlayFab::ClientModels::GetPlayerProfileResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator*>(),
                        {"<GetPlayerDisplayName>b__62_0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetPlayerProfileResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GorillaNetworking::PlayFabAuthenticator* GorillaNetworking::PlayFabAuthenticator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator::PlayFabAuthenticator()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::*)(int32_t)>(&::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c97804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::*)()>(&::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9b8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::*)()>(&::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::MoveNext)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5c9b8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::*)()>(&::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9bad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::*)()>(&::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c9bae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::*)()>(&::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9bb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0*& GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0* const& GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::__cordl_internal_set___8__1(::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::DateTime& GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::__cordl_internal_get_accountCreationDateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accountCreationDateTime;
}
constexpr ::System::DateTime const& GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::__cordl_internal_get_accountCreationDateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accountCreationDateTime;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::__cordl_internal_set_accountCreationDateTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accountCreationDateTime = value;
}
inline void GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52* GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52::PlayFabAuthenticator__VerifyKidAuthenticated_d__52()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::*)(int32_t)>(&::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c9900c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::*)()>(&::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9b510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::*)()>(&::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::MoveNext)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x5c9b514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::*)()>(&::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9b864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::*)()>(&::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c9b86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::*)()>(&::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9b8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_get_errorMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorMessage;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_get_errorMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorMessage;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_set_errorMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorMessage = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_get_errorCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCode;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_get_errorCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCode;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_set_errorCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCode = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_get_traceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traceId;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_get_traceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traceId;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_set_traceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traceId = value;
}
constexpr ::UnityEngine::WaitForEndOfFrame*& GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_get__frameYield_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameYield_5__2;
}
constexpr ::UnityEngine::WaitForEndOfFrame* const& GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_get__frameYield_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameYield_5__2;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::__cordl_internal_set__frameYield_5__2(::UnityEngine::WaitForEndOfFrame*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameYield_5__2 = value;
}
inline void GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72* GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::*)(int32_t)>(&::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c98f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::*)()>(&::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9acb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::*)()>(&::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::MoveNext)> {
  constexpr static std::size_t size = 0x814;
  constexpr static std::size_t addrs = 0x5c9acb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::*)()>(&::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9b4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::*)()>(&::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c9b4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::*)()>(&::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9b508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData*& GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData* const& GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_set_data(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>*& GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>* const& GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_set_callback(::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70* GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70::PlayFabAuthenticator__PlayfabAuthenticate_d__70()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::*)(int32_t)>(&::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c978c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::*)()>(&::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9aaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::*)()>(&::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::MoveNext)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5c9aaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::*)()>(&::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9ac68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::*)()>(&::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c9ac70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::*)()>(&::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9aca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54* GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::*)(int32_t)>(&::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c97898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::*)()>(&::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9a91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::*)()>(&::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::MoveNext)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5c9a920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::*)()>(&::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9aaa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::*)()>(&::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c9aaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::*)()>(&::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9aae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53* GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::*)(int32_t)>(&::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c98614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::*)()>(&::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9a7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::*)()>(&::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::MoveNext)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c9a7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::*)()>(&::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9a8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::*)()>(&::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c9a8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::*)()>(&::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9a914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::WaitForEndOfFrame*& GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::__cordl_internal_get__frameYield_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameYield_5__2;
}
constexpr ::UnityEngine::WaitForEndOfFrame* const& GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::__cordl_internal_get__frameYield_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameYield_5__2;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::__cordl_internal_set__frameYield_5__2(::UnityEngine::WaitForEndOfFrame*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameYield_5__2 = value;
}
inline void GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59* GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::*)(int32_t)>(&::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c99524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::*)()>(&::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c99ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::*)()>(&::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::MoveNext)> {
  constexpr static std::size_t size = 0x788;
  constexpr static std::size_t addrs = 0x5c99ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::*)()>(&::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9a780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::*)()>(&::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c9a788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::*)()>(&::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9a7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*& GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest* const& GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_set_data(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>*& GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>* const& GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_set_callback(::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75* GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75::PlayFabAuthenticator__CachePlayFabId_d__75()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::*)()>(&::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c98d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0._SetDisplayName_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::*)(::PlayFab::ClientModels::UpdateUserTitleDisplayNameResult*)>(&::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::_SetDisplayName_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c99f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0*>(),
                        {"<SetDisplayName>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::UpdateUserTitleDisplayNameResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0._SetDisplayName_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::_SetDisplayName_b__1)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c99f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0*>(),
                        {"<SetDisplayName>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::__cordl_internal_get_playerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::__cordl_internal_get_playerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr void GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::__cordl_internal_set_playerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerName = value;
}
inline void GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::_SetDisplayName_b__0(::PlayFab::ClientModels::UpdateUserTitleDisplayNameResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0*>(),
                        {"<SetDisplayName>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::UpdateUserTitleDisplayNameResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::_SetDisplayName_b__1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0*>(),
                        {"<SetDisplayName>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0* GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0::PlayFabAuthenticator___c__DisplayClass63_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0::*)()>(&::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c99eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0._VerifyKidAuthenticated_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0::*)()>(&::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0::_VerifyKidAuthenticated_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c99ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0*>(),
                        {"<VerifyKidAuthenticated>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>*& GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0::__cordl_internal_get_getNewPlayerDateTimeTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getNewPlayerDateTimeTask;
}
constexpr ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>* const& GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0::__cordl_internal_get_getNewPlayerDateTimeTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getNewPlayerDateTimeTask;
}
constexpr void GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0::__cordl_internal_set_getNewPlayerDateTimeTask(::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getNewPlayerDateTimeTask = value;
}
inline void GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0::_VerifyKidAuthenticated_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0*>(),
                        {"<VerifyKidAuthenticated>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0* GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0::PlayFabAuthenticator___c__DisplayClass52_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator___c::*)()>(&::GorillaNetworking::PlayFabAuthenticator___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c99b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator___c._BeginLoginFlow_b__42_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator___c::*)()>(&::GorillaNetworking::PlayFabAuthenticator___c::_BeginLoginFlow_b__42_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c99b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c*>(),
                        {"<BeginLoginFlow>b__42_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator___c._AuthenticateWithPhoton_b__58_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator___c::*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*)>(&::GorillaNetworking::PlayFabAuthenticator___c::_AuthenticateWithPhoton_b__58_0)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5c99b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c*>(),
                        {"<AuthenticateWithPhoton>b__58_0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator___c._AuthenticateWithPhoton_b__58_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator___c::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::PlayFabAuthenticator___c::_AuthenticateWithPhoton_b__58_1)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5c99cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c*>(),
                        {"<AuthenticateWithPhoton>b__58_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator___c._GetPlayerDisplayName_b__62_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator___c::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::PlayFabAuthenticator___c::_GetPlayerDisplayName_b__62_1)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c99e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c*>(),
                        {"<GetPlayerDisplayName>b__62_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaNetworking::PlayFabAuthenticator___c::setStaticF___9(::GorillaNetworking::PlayFabAuthenticator___c*  value)  {
::cordl_internals::setStaticField<::GorillaNetworking::PlayFabAuthenticator___c*, "<>9", ::GorillaNetworking::PlayFabAuthenticator___c*>(std::forward<::GorillaNetworking::PlayFabAuthenticator___c*>(value));
}
inline ::GorillaNetworking::PlayFabAuthenticator___c* GorillaNetworking::PlayFabAuthenticator___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaNetworking::PlayFabAuthenticator___c*, "<>9", ::GorillaNetworking::PlayFabAuthenticator___c*>();
}
inline void GorillaNetworking::PlayFabAuthenticator___c::setStaticF___9__42_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__42_0", ::GorillaNetworking::PlayFabAuthenticator___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GorillaNetworking::PlayFabAuthenticator___c::getStaticF___9__42_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__42_0", ::GorillaNetworking::PlayFabAuthenticator___c*>();
}
inline void GorillaNetworking::PlayFabAuthenticator___c::setStaticF___9__58_0(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, "<>9__58_0", ::GorillaNetworking::PlayFabAuthenticator___c*>(std::forward<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(value));
}
inline ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>* GorillaNetworking::PlayFabAuthenticator___c::getStaticF___9__58_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, "<>9__58_0", ::GorillaNetworking::PlayFabAuthenticator___c*>();
}
inline void GorillaNetworking::PlayFabAuthenticator___c::setStaticF___9__58_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__58_1", ::GorillaNetworking::PlayFabAuthenticator___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GorillaNetworking::PlayFabAuthenticator___c::getStaticF___9__58_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__58_1", ::GorillaNetworking::PlayFabAuthenticator___c*>();
}
inline void GorillaNetworking::PlayFabAuthenticator___c::setStaticF___9__62_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__62_1", ::GorillaNetworking::PlayFabAuthenticator___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GorillaNetworking::PlayFabAuthenticator___c::getStaticF___9__62_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__62_1", ::GorillaNetworking::PlayFabAuthenticator___c*>();
}
inline void GorillaNetworking::PlayFabAuthenticator___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator___c::_BeginLoginFlow_b__42_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c*>(),
                        {"<BeginLoginFlow>b__42_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabAuthenticator___c::_AuthenticateWithPhoton_b__58_0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c*>(),
                        {"<AuthenticateWithPhoton>b__58_0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::PlayFabAuthenticator___c::_AuthenticateWithPhoton_b__58_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c*>(),
                        {"<AuthenticateWithPhoton>b__58_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaNetworking::PlayFabAuthenticator___c::_GetPlayerDisplayName_b__62_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator___c*>(),
                        {"<GetPlayerDisplayName>b__62_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GorillaNetworking::PlayFabAuthenticator___c* GorillaNetworking::PlayFabAuthenticator___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator___c*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator___c::PlayFabAuthenticator___c()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator_BanInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator_BanInfo::*)()>(&::GorillaNetworking::PlayFabAuthenticator_BanInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c99aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator_BanInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_BanInfo::__cordl_internal_get_BanMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BanMessage;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_BanInfo::__cordl_internal_get_BanMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BanMessage;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_BanInfo::__cordl_internal_set_BanMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BanMessage = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_BanInfo::__cordl_internal_get_BanExpirationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BanExpirationTime;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_BanInfo::__cordl_internal_get_BanExpirationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BanExpirationTime;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_BanInfo::__cordl_internal_set_BanExpirationTime(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BanExpirationTime = value;
}
inline void GorillaNetworking::PlayFabAuthenticator_BanInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator_BanInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::PlayFabAuthenticator_BanInfo* GorillaNetworking::PlayFabAuthenticator_BanInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator_BanInfo*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator_BanInfo::PlayFabAuthenticator_BanInfo()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator_ErrorInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator_ErrorInfo::*)()>(&::GorillaNetworking::PlayFabAuthenticator_ErrorInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c99aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator_ErrorInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_ErrorInfo::__cordl_internal_get_Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_ErrorInfo::__cordl_internal_get_Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_ErrorInfo::__cordl_internal_set_Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Message = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_ErrorInfo::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_ErrorInfo::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_ErrorInfo::__cordl_internal_set_Error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
inline void GorillaNetworking::PlayFabAuthenticator_ErrorInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator_ErrorInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::PlayFabAuthenticator_ErrorInfo* GorillaNetworking::PlayFabAuthenticator_ErrorInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator_ErrorInfo*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator_ErrorInfo::PlayFabAuthenticator_ErrorInfo()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse::*)()>(&::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c99a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse::__cordl_internal_get_SteamAuthIdForPhoton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamAuthIdForPhoton;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse::__cordl_internal_get_SteamAuthIdForPhoton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamAuthIdForPhoton;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse::__cordl_internal_set_SteamAuthIdForPhoton(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SteamAuthIdForPhoton = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse::__cordl_internal_get_AccountCreationIsoTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AccountCreationIsoTimestamp;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse::__cordl_internal_get_AccountCreationIsoTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AccountCreationIsoTimestamp;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse::__cordl_internal_set_AccountCreationIsoTimestamp(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AccountCreationIsoTimestamp = value;
}
inline void GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse* GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse::PlayFabAuthenticator_CachePlayFabIdResponse()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::*)()>(&::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c99a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_get_SessionTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionTicket;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_get_SessionTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionTicket;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_set_SessionTicket(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SessionTicket = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_get_EntityToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityToken;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_get_EntityToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityToken;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_set_EntityToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntityToken = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_get_EntityId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityId;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_get_EntityId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityId;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_set_EntityId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntityId = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_get_EntityType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityType;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_get_EntityType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityType;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_set_EntityType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntityType = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_get_AccountCreationIsoTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AccountCreationIsoTimestamp;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_get_AccountCreationIsoTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AccountCreationIsoTimestamp;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::__cordl_internal_set_AccountCreationIsoTimestamp(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AccountCreationIsoTimestamp = value;
}
inline void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData* GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData::PlayFabAuthenticator_PlayfabAuthResponseData()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::*)()>(&::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c99a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_AppId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppId;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_AppId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppId;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_set_AppId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppId = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_Nonce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Nonce;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_Nonce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Nonce;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_set_Nonce(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Nonce = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_OculusId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OculusId;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_OculusId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OculusId;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_set_OculusId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OculusId = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_Platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_Platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_set_Platform(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Platform = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_AgeCategory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgeCategory;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_AgeCategory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgeCategory;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_set_AgeCategory(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AgeCategory = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_MothershipEnvId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipEnvId;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_MothershipEnvId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipEnvId;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_set_MothershipEnvId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipEnvId = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_MothershipDeploymentId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipDeploymentId;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_MothershipDeploymentId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipDeploymentId;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_set_MothershipDeploymentId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipDeploymentId = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_MothershipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipToken;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_MothershipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipToken;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_set_MothershipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipToken = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_MothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_get_MothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::__cordl_internal_set_MothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipId = value;
}
inline void GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData* GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData::PlayFabAuthenticator_PlayfabAuthRequestData()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::*)()>(&::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c97afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_get_Platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_get_Platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_set_Platform(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Platform = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_get_SessionTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionTicket;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_get_SessionTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionTicket;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_set_SessionTicket(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SessionTicket = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_get_MothershipEnvId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipEnvId;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_get_MothershipEnvId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipEnvId;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_set_MothershipEnvId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipEnvId = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_get_MothershipDeploymentId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipDeploymentId;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_get_MothershipDeploymentId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipDeploymentId;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_set_MothershipDeploymentId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipDeploymentId = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_get_MothershipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipToken;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_get_MothershipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipToken;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_set_MothershipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipToken = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_get_MothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr ::StringW const& GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_get_MothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr void GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::__cordl_internal_set_MothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipId = value;
}
inline void GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest* GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest::PlayFabAuthenticator_CachePlayFabIdRequest()   {
}

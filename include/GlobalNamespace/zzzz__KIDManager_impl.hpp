#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager.hpp"
#include "GlobalNamespace/zzzz__KIDRequestData_impl.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDManager_def.hpp"
#include "GlobalNamespace/zzzz__AppealAgeRequest_def.hpp"
#include "GlobalNamespace/zzzz__AttemptAgeUpdateData_def.hpp"
#include "GlobalNamespace/zzzz__AttemptAgeUpdateRequest_def.hpp"
#include "GlobalNamespace/zzzz__EKIDFeatures_def.hpp"
#include "GlobalNamespace/zzzz__GetPlayerData_Data_def.hpp"
#include "GlobalNamespace/zzzz__GetRequirementsData_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__AgeGateFlow_d__114_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__CheckKIDNewPlayerDateTime_d__103_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__CheckKIDPhase_d__102_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__CheckWarningScreensOptedIn_d__92_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__InitialiseKID_d__94_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__KIDServerWebRequestNoResponse_d__141_1_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__KIDServerWebRequest_d__140_2_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__ProcessAgeGate_d__115_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__SendOptInPermissions_d__111_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__Server_AppealAge_d__135_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__Server_AttemptAgeUpdate_d__134_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__Server_GetPlayerData_d__130_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__Server_GetRequirements_d__139_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__Server_OptIn_d__138_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__Server_SendChallengeEmail_d__136_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__Server_SetConfirmedStatus_d__131_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__Server_SetOptInPermissions_d__137_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__Server_UpgradeSession_d__132_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__Server_VerifyAge_d__133_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__SetAndSendEmail_d__110_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__SetKIDOptIn_d__109_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__Start_d__70_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__TryAppealAge_d__90_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__TryAttemptAgeUpdate_d__89_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__TryGetPlayerData_d__81_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__TryGetRequirements_d__82_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__TrySendChallengeEmailRequest_d__84_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__TrySendOptInPermissions_d__85_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__TrySendUpgradeSessionChallengeEmail_d__86_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__TrySetHasConfirmedStatus_d__87_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__TryUpgradeSession_d__88_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__TryVerifyAgeResponse_d__83_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__UpdateSession_d__91_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__UseKID_d__101_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__WaitForAndUpdateNewSession_d__168_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager__WaitForAuthentication_d__113_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager_def.hpp"
#include "GlobalNamespace/zzzz__SendChallengeEmailRequest_def.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
#include "GlobalNamespace/zzzz__SetOptInPermissionsRequest_def.hpp"
#include "GlobalNamespace/zzzz__TMPSession_def.hpp"
#include "GlobalNamespace/zzzz__UpgradeSessionData_def.hpp"
#include "GlobalNamespace/zzzz__UpgradeSessionRequest_def.hpp"
#include "GlobalNamespace/zzzz__VerifyAgeData_def.hpp"
#include "GlobalNamespace/zzzz__VerifyAgeRequest_def.hpp"
#include "KID/Model/zzzz__AgeStatusType_def.hpp"
#include "KID/Model/zzzz__Permission_ManagedByEnum_def.hpp"
#include "KID/Model/zzzz__Permission_def.hpp"
#include "KID/Model/zzzz__RequestedPermission_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::KIDManager> (*)()>(&::GlobalNamespace::KIDManager::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a2c208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get_InitialisationComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::KIDManager::get_InitialisationComplete)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a2c260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_InitialisationComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.set_InitialisationComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::KIDManager::set_InitialisationComplete)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a2c2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"set_InitialisationComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get_InitialisationSuccessful
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::KIDManager::get_InitialisationSuccessful)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a2c318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_InitialisationSuccessful", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.set_InitialisationSuccessful
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::KIDManager::set_InitialisationSuccessful)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a2c370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"set_InitialisationSuccessful", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get_CurrentSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TMPSession* (*)()>(&::GlobalNamespace::KIDManager::get_CurrentSession)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a2c3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_CurrentSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.set_CurrentSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::TMPSession*)>(&::GlobalNamespace::KIDManager::set_CurrentSession)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a2c428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"set_CurrentSession", {}, {::i2c::type_of<::GlobalNamespace::TMPSession*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get_PreviousStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SessionStatus (*)()>(&::GlobalNamespace::KIDManager::get_PreviousStatus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a2c488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_PreviousStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.set_PreviousStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SessionStatus)>(&::GlobalNamespace::KIDManager::set_PreviousStatus)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a2c4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"set_PreviousStatus", {}, {::i2c::type_of<::GlobalNamespace::SessionStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get__ageGateRequirements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GetRequirementsData* (*)()>(&::GlobalNamespace::KIDManager::get__ageGateRequirements)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a2c53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get__ageGateRequirements", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.set__ageGateRequirements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GetRequirementsData*)>(&::GlobalNamespace::KIDManager::set__ageGateRequirements)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a2c594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"set__ageGateRequirements", {}, {::i2c::type_of<::GlobalNamespace::GetRequirementsData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get_KidTitleDataReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::KIDManager::get_KidTitleDataReady)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a2c5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_KidTitleDataReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get_KidEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::KIDManager::get_KidEnabled)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a2c64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_KidEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get_KidEnabledAndReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::KIDManager::get_KidEnabledAndReady)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a2c700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_KidEnabledAndReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get_HasSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::KIDManager::get_HasSession)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5a2c7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_HasSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get_PreviousStatusPlayerPrefRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::KIDManager::get_PreviousStatusPlayerPrefRef)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a2c8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_PreviousStatusPlayerPrefRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get_HasOptedInToKID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::KIDManager::get_HasOptedInToKID)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a2c934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_HasOptedInToKID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.set_HasOptedInToKID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::KIDManager::set_HasOptedInToKID)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a2c98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"set_HasOptedInToKID", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get_KIDSetupPlayerPref
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::KIDManager::get_KIDSetupPlayerPref)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a2c9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_KIDSetupPlayerPref", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get_DbgLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::KIDManager::get_DbgLocale)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a2ca2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_DbgLocale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.set_DbgLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::KIDManager::set_DbgLocale)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a2ca84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"set_DbgLocale", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get_DebugKIDLocalePlayerPrefRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::KIDManager::get_DebugKIDLocalePlayerPrefRef)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a2cae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_DebugKIDLocalePlayerPrefRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get_GetEmailForUserPlayerPrefRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::KIDManager::get_GetEmailForUserPlayerPrefRef)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5a2cb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_GetEmailForUserPlayerPrefRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.get_GetChallengedBeforePlayerPrefRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::KIDManager::get_GetChallengedBeforePlayerPrefRef)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a2cc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_GetChallengedBeforePlayerPrefRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager::*)()>(&::GlobalNamespace::KIDManager::Awake)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5a2ccac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager::*)()>(&::GlobalNamespace::KIDManager::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5a2ceb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager::*)()>(&::GlobalNamespace::KIDManager::OnDestroy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a2cf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.GetActiveAccountStatusNiceString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::KIDManager::GetActiveAccountStatusNiceString)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a2cfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"GetActiveAccountStatusNiceString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.GetActiveAccountStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::AgeStatusType (*)()>(&::GlobalNamespace::KIDManager::GetActiveAccountStatus)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5a2d054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"GetActiveAccountStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.GetAllPermissionsData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::KID::Model::Permission*>* (*)()>(&::GlobalNamespace::KIDManager::GetAllPermissionsData)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5a2d16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"GetAllPermissionsData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.TryGetAgeStatusTypeFromAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::KID::Model::AgeStatusType>)>(&::GlobalNamespace::KIDManager::TryGetAgeStatusTypeFromAge)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5a27dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TryGetAgeStatusTypeFromAge", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::KID::Model::AgeStatusType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.CheckFeatureOptIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<bool,bool> (*)(::GlobalNamespace::EKIDFeatures, ::KID::Model::Permission*)>(&::GlobalNamespace::KIDManager::CheckFeatureOptIn)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5a2d2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"CheckFeatureOptIn", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>(), ::i2c::type_of<::KID::Model::Permission*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.SetFeatureOptIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::EKIDFeatures, bool)>(&::GlobalNamespace::KIDManager::SetFeatureOptIn)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5a2d758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"SetFeatureOptIn", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.CheckFeatureSettingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::EKIDFeatures)>(&::GlobalNamespace::KIDManager::CheckFeatureSettingEnabled)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5a2da78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"CheckFeatureSettingEnabled", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.TryGetPlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetPlayerData_Data*>* (*)(bool)>(&::GlobalNamespace::KIDManager::TryGetPlayerData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5a2dc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TryGetPlayerData", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.TryGetRequirements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetRequirementsData*>* (*)()>(&::GlobalNamespace::KIDManager::TryGetRequirements)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a2dd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TryGetRequirements", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.TryVerifyAgeResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::VerifyAgeData*>* (*)()>(&::GlobalNamespace::KIDManager::TryVerifyAgeResponse)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a2de88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TryVerifyAgeResponse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.TrySendChallengeEmailRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>* (*)()>(&::GlobalNamespace::KIDManager::TrySendChallengeEmailRequest)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a2df74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TrySendChallengeEmailRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.TrySendOptInPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)()>(&::GlobalNamespace::KIDManager::TrySendOptInPermissions)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a2e060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TrySendOptInPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.TrySendUpgradeSessionChallengeEmail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>* (*)()>(&::GlobalNamespace::KIDManager::TrySendUpgradeSessionChallengeEmail)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a2e14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TrySendUpgradeSessionChallengeEmail", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.TrySetHasConfirmedStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)()>(&::GlobalNamespace::KIDManager::TrySetHasConfirmedStatus)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a2e238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TrySetHasConfirmedStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.TryUpgradeSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::UpgradeSessionData*>* (*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::KIDManager::TryUpgradeSession)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a2e324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TryUpgradeSession", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.TryAttemptAgeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AttemptAgeUpdateData*>* (*)(int32_t)>(&::GlobalNamespace::KIDManager::TryAttemptAgeUpdate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5a27f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TryAttemptAgeUpdate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.TryAppealAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::StringW, int32_t)>(&::GlobalNamespace::KIDManager::TryAppealAge)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5a2e42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TryAppealAge", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.UpdateSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Action_1<bool>*)>(&::GlobalNamespace::KIDManager::UpdateSession)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a2e540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"UpdateSession", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.CheckWarningScreensOptedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)()>(&::GlobalNamespace::KIDManager::CheckWarningScreensOptedIn)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a2e618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"CheckWarningScreensOptedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.InitialiseBootFlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::KIDManager::InitialiseBootFlow)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a2e704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"InitialiseBootFlow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.InitialiseKID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::KIDManager::InitialiseKID)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a2e7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"InitialiseKID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.UpdatePermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::TMPSession*)>(&::GlobalNamespace::KIDManager::UpdatePermissions)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5a2e84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"UpdatePermissions", {}, {::i2c::type_of<::GlobalNamespace::TMPSession*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.ClearSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::KIDManager::ClearSession)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a2f138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"ClearSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.DeleteStoredPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::KIDManager::DeleteStoredPermissions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a2f1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"DeleteStoredPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.ResetCancellationToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationTokenSource* (*)()>(&::GlobalNamespace::KIDManager::ResetCancellationToken)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a2f1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"ResetCancellationToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.GetPermissionDataByFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::Permission* (*)(::GlobalNamespace::EKIDFeatures)>(&::GlobalNamespace::KIDManager::GetPermissionDataByFeature)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5a2d52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"GetPermissionDataByFeature", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.CancelToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::KIDManager::CancelToken)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a2f278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"CancelToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.UseKID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)()>(&::GlobalNamespace::KIDManager::UseKID)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a2f2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"UseKID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.CheckKIDPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (*)()>(&::GlobalNamespace::KIDManager::CheckKIDPhase)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a2f3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"CheckKIDPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.CheckKIDNewPlayerDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>* (*)()>(&::GlobalNamespace::KIDManager::CheckKIDNewPlayerDateTime)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a2f4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"CheckKIDNewPlayerDateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.GetIsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::KIDManager::GetIsEnabled)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5a2f5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"GetIsEnabled", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.GetPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::KIDManager::GetPhase)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a2f6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"GetPhase", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.GetNewPlayerDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTime> (*)(::StringW)>(&::GlobalNamespace::KIDManager::GetNewPlayerDateTime)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5a2f7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"GetNewPlayerDateTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.IsAdult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::KIDManager::IsAdult)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5a2f994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"IsAdult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.HasAllPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::KIDManager::HasAllPermissions)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5a2fa8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"HasAllPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.SetKIDOptIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)()>(&::GlobalNamespace::KIDManager::SetKIDOptIn)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a2fbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"SetKIDOptIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.SetAndSendEmail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>* (*)(::StringW)>(&::GlobalNamespace::KIDManager::SetAndSendEmail)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a2fca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"SetAndSendEmail", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.SendOptInPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)()>(&::GlobalNamespace::KIDManager::SendOptInPermissions)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a2fdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"SendOptInPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.HasPermissionToUseFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::EKIDFeatures)>(&::GlobalNamespace::KIDManager::HasPermissionToUseFeature)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5a2fe98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"HasPermissionToUseFeature", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.WaitForAuthentication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)()>(&::GlobalNamespace::KIDManager::WaitForAuthentication)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a2ff64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"WaitForAuthentication", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.AgeGateFlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::KID::Model::AgeStatusType,::GlobalNamespace::TMPSession*>>* (*)(::GlobalNamespace::GetPlayerData_Data*)>(&::GlobalNamespace::KIDManager::AgeGateFlow)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a30050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"AgeGateFlow", {}, {::i2c::type_of<::GlobalNamespace::GetPlayerData_Data*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.ProcessAgeGate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::VerifyAgeData*>* (*)()>(&::GlobalNamespace::KIDManager::ProcessAgeGate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a30158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"ProcessAgeGate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.GetOptInKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::EKIDFeatures)>(&::GlobalNamespace::KIDManager::GetOptInKey)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a30244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"GetOptInKey", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.Server_GetPlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetPlayerData_Data*>* (*)(bool, ::System::Action*)>(&::GlobalNamespace::KIDManager::Server_GetPlayerData)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5a302cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_GetPlayerData", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.Server_SetConfirmedStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)()>(&::GlobalNamespace::KIDManager::Server_SetConfirmedStatus)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a303e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_SetConfirmedStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.Server_UpgradeSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::UpgradeSessionData*>* (*)(::GlobalNamespace::UpgradeSessionRequest*)>(&::GlobalNamespace::KIDManager::Server_UpgradeSession)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a304d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_UpgradeSession", {}, {::i2c::type_of<::GlobalNamespace::UpgradeSessionRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.Server_VerifyAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::VerifyAgeData*>* (*)(::GlobalNamespace::VerifyAgeRequest*, ::System::Action*)>(&::GlobalNamespace::KIDManager::Server_VerifyAge)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a305d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_VerifyAge", {}, {::i2c::type_of<::GlobalNamespace::VerifyAgeRequest*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.Server_AttemptAgeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AttemptAgeUpdateData*>* (*)(::GlobalNamespace::AttemptAgeUpdateRequest*, ::System::Action*)>(&::GlobalNamespace::KIDManager::Server_AttemptAgeUpdate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a306f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_AttemptAgeUpdate", {}, {::i2c::type_of<::GlobalNamespace::AttemptAgeUpdateRequest*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.Server_AppealAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::GlobalNamespace::AppealAgeRequest*, ::System::Action*)>(&::GlobalNamespace::KIDManager::Server_AppealAge)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5a30800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_AppealAge", {}, {::i2c::type_of<::GlobalNamespace::AppealAgeRequest*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.Server_SendChallengeEmail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>* (*)(::GlobalNamespace::SendChallengeEmailRequest*)>(&::GlobalNamespace::KIDManager::Server_SendChallengeEmail)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5a3090c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_SendChallengeEmail", {}, {::i2c::type_of<::GlobalNamespace::SendChallengeEmailRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.Server_SetOptInPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::GlobalNamespace::SetOptInPermissionsRequest*, ::System::Action*)>(&::GlobalNamespace::KIDManager::Server_SetOptInPermissions)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5a30a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_SetOptInPermissions", {}, {::i2c::type_of<::GlobalNamespace::SetOptInPermissionsRequest*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.Server_OptIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)()>(&::GlobalNamespace::KIDManager::Server_OptIn)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a30b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_OptIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.Server_GetRequirements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetRequirementsData*>* (*)()>(&::GlobalNamespace::KIDManager::Server_GetRequirements)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a30c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_GetRequirements", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.RegisterSessionUpdateCallback_AnyPermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::KIDManager::RegisterSessionUpdateCallback_AnyPermission)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a30d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"RegisterSessionUpdateCallback_AnyPermission", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.UnregisterSessionUpdateCallback_AnyPermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::KIDManager::UnregisterSessionUpdateCallback_AnyPermission)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a30dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"UnregisterSessionUpdateCallback_AnyPermission", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.RegisterSessionUpdatedCallback_VoiceChat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*)>(&::GlobalNamespace::KIDManager::RegisterSessionUpdatedCallback_VoiceChat)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a30e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"RegisterSessionUpdatedCallback_VoiceChat", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.UnregisterSessionUpdatedCallback_VoiceChat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*)>(&::GlobalNamespace::KIDManager::UnregisterSessionUpdatedCallback_VoiceChat)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a30f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"UnregisterSessionUpdatedCallback_VoiceChat", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.RegisterSessionUpdatedCallback_CustomUsernames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*)>(&::GlobalNamespace::KIDManager::RegisterSessionUpdatedCallback_CustomUsernames)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a31074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"RegisterSessionUpdatedCallback_CustomUsernames", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.UnregisterSessionUpdatedCallback_CustomUsernames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*)>(&::GlobalNamespace::KIDManager::UnregisterSessionUpdatedCallback_CustomUsernames)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a31164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"UnregisterSessionUpdatedCallback_CustomUsernames", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.RegisterSessionUpdatedCallback_PrivateRooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*)>(&::GlobalNamespace::KIDManager::RegisterSessionUpdatedCallback_PrivateRooms)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a31254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"RegisterSessionUpdatedCallback_PrivateRooms", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.UnregisterSessionUpdatedCallback_PrivateRooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*)>(&::GlobalNamespace::KIDManager::UnregisterSessionUpdatedCallback_PrivateRooms)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a31344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"UnregisterSessionUpdatedCallback_PrivateRooms", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.RegisterSessionUpdatedCallback_Multiplayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*)>(&::GlobalNamespace::KIDManager::RegisterSessionUpdatedCallback_Multiplayer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a31434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"RegisterSessionUpdatedCallback_Multiplayer", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.UnregisterSessionUpdatedCallback_Multiplayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*)>(&::GlobalNamespace::KIDManager::UnregisterSessionUpdatedCallback_Multiplayer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a31524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"UnregisterSessionUpdatedCallback_Multiplayer", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.RegisterSessionUpdatedCallback_UGC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*)>(&::GlobalNamespace::KIDManager::RegisterSessionUpdatedCallback_UGC)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a31614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"RegisterSessionUpdatedCallback_UGC", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.WaitForAndUpdateNewSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(bool)>(&::GlobalNamespace::KIDManager::WaitForAndUpdateNewSession)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5a31704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"WaitForAndUpdateNewSession", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.HasSessionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::TMPSession*)>(&::GlobalNamespace::KIDManager::HasSessionChanged)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5a31808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"HasSessionChanged", {}, {::i2c::type_of<::GlobalNamespace::TMPSession*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.OnSessionUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::KIDManager::OnSessionUpdated)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x5a2eb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"OnSessionUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager.HasPermissionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::KID::Model::Permission*)>(&::GlobalNamespace::KIDManager::HasPermissionChanged)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a31a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"HasPermissionChanged", {}, {::i2c::type_of<::KID::Model::Permission*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager::*)()>(&::GlobalNamespace::KIDManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a31b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDManager::setStaticF__instance(::UnityW<::GlobalNamespace::KIDManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::KIDManager>, "_instance", ::GlobalNamespace::KIDManager*>(std::forward<::UnityW<::GlobalNamespace::KIDManager>>(value));
}
inline ::UnityW<::GlobalNamespace::KIDManager> GlobalNamespace::KIDManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::KIDManager>, "_instance", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__InitialisationComplete_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<InitialisationComplete>k__BackingField", ::GlobalNamespace::KIDManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::KIDManager::getStaticF__InitialisationComplete_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<InitialisationComplete>k__BackingField", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__InitialisationSuccessful_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<InitialisationSuccessful>k__BackingField", ::GlobalNamespace::KIDManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::KIDManager::getStaticF__InitialisationSuccessful_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<InitialisationSuccessful>k__BackingField", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__CurrentSession_k__BackingField(::GlobalNamespace::TMPSession*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::TMPSession*, "<CurrentSession>k__BackingField", ::GlobalNamespace::KIDManager*>(std::forward<::GlobalNamespace::TMPSession*>(value));
}
inline ::GlobalNamespace::TMPSession* GlobalNamespace::KIDManager::getStaticF__CurrentSession_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::TMPSession*, "<CurrentSession>k__BackingField", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__PreviousStatus_k__BackingField(::GlobalNamespace::SessionStatus  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SessionStatus, "<PreviousStatus>k__BackingField", ::GlobalNamespace::KIDManager*>(std::forward<::GlobalNamespace::SessionStatus>(value));
}
inline ::GlobalNamespace::SessionStatus GlobalNamespace::KIDManager::getStaticF__PreviousStatus_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SessionStatus, "<PreviousStatus>k__BackingField", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__emailAddress(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_emailAddress", ::GlobalNamespace::KIDManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::KIDManager::getStaticF__emailAddress()  {
return ::cordl_internals::getStaticField<::StringW, "_emailAddress", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__requestCancellationSource(::System::Threading::CancellationTokenSource*  value)  {
::cordl_internals::setStaticField<::System::Threading::CancellationTokenSource*, "_requestCancellationSource", ::GlobalNamespace::KIDManager*>(std::forward<::System::Threading::CancellationTokenSource*>(value));
}
inline ::System::Threading::CancellationTokenSource* GlobalNamespace::KIDManager::getStaticF__requestCancellationSource()  {
return ::cordl_internals::getStaticField<::System::Threading::CancellationTokenSource*, "_requestCancellationSource", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__titleDataReady(bool  value)  {
::cordl_internals::setStaticField<bool, "_titleDataReady", ::GlobalNamespace::KIDManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::KIDManager::getStaticF__titleDataReady()  {
return ::cordl_internals::getStaticField<bool, "_titleDataReady", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__useKid(bool  value)  {
::cordl_internals::setStaticField<bool, "_useKid", ::GlobalNamespace::KIDManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::KIDManager::getStaticF__useKid()  {
return ::cordl_internals::getStaticField<bool, "_useKid", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__kIDPhase(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_kIDPhase", ::GlobalNamespace::KIDManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KIDManager::getStaticF__kIDPhase()  {
return ::cordl_internals::getStaticField<int32_t, "_kIDPhase", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__kIDNewPlayerDateTime(::System::Nullable_1<::System::DateTime>  value)  {
::cordl_internals::setStaticField<::System::Nullable_1<::System::DateTime>, "_kIDNewPlayerDateTime", ::GlobalNamespace::KIDManager*>(std::forward<::System::Nullable_1<::System::DateTime>>(value));
}
inline ::System::Nullable_1<::System::DateTime> GlobalNamespace::KIDManager::getStaticF__kIDNewPlayerDateTime()  {
return ::cordl_internals::getStaticField<::System::Nullable_1<::System::DateTime>, "_kIDNewPlayerDateTime", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF___ageGateRequirements_k__BackingField(::GlobalNamespace::GetRequirementsData*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GetRequirementsData*, "<_ageGateRequirements>k__BackingField", ::GlobalNamespace::KIDManager*>(std::forward<::GlobalNamespace::GetRequirementsData*>(value));
}
inline ::GlobalNamespace::GetRequirementsData* GlobalNamespace::KIDManager::getStaticF___ageGateRequirements_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GetRequirementsData*, "<_ageGateRequirements>k__BackingField", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__HasOptedInToKID_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<HasOptedInToKID>k__BackingField", ::GlobalNamespace::KIDManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::KIDManager::getStaticF__HasOptedInToKID_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<HasOptedInToKID>k__BackingField", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__DbgLocale_k__BackingField(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "<DbgLocale>k__BackingField", ::GlobalNamespace::KIDManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::KIDManager::getStaticF__DbgLocale_k__BackingField()  {
return ::cordl_internals::getStaticField<::StringW, "<DbgLocale>k__BackingField", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__debugKIDLocalePlayerPrefRef(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_debugKIDLocalePlayerPrefRef", ::GlobalNamespace::KIDManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::KIDManager::getStaticF__debugKIDLocalePlayerPrefRef()  {
return ::cordl_internals::getStaticField<::StringW, "_debugKIDLocalePlayerPrefRef", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF_parentEmailForUserPlayerPrefRef(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "parentEmailForUserPlayerPrefRef", ::GlobalNamespace::KIDManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::KIDManager::getStaticF_parentEmailForUserPlayerPrefRef()  {
return ::cordl_internals::getStaticField<::StringW, "parentEmailForUserPlayerPrefRef", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__sessionUpdatedCallback(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "_sessionUpdatedCallback", ::GlobalNamespace::KIDManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::KIDManager::getStaticF__sessionUpdatedCallback()  {
return ::cordl_internals::getStaticField<::System::Action*, "_sessionUpdatedCallback", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__onKIDInitialisationComplete(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "_onKIDInitialisationComplete", ::GlobalNamespace::KIDManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::KIDManager::getStaticF__onKIDInitialisationComplete()  {
return ::cordl_internals::getStaticField<::System::Action*, "_onKIDInitialisationComplete", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF_onEmailResultReceived(::GlobalNamespace::KIDManager_OnEmailResultReceived*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::KIDManager_OnEmailResultReceived*, "onEmailResultReceived", ::GlobalNamespace::KIDManager*>(std::forward<::GlobalNamespace::KIDManager_OnEmailResultReceived*>(value));
}
inline ::GlobalNamespace::KIDManager_OnEmailResultReceived* GlobalNamespace::KIDManager::getStaticF_onEmailResultReceived()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::KIDManager_OnEmailResultReceived*, "onEmailResultReceived", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__onSessionUpdated_AnyPermission(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "_onSessionUpdated_AnyPermission", ::GlobalNamespace::KIDManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::KIDManager::getStaticF__onSessionUpdated_AnyPermission()  {
return ::cordl_internals::getStaticField<::System::Action*, "_onSessionUpdated_AnyPermission", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__onSessionUpdated_VoiceChat(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*, "_onSessionUpdated_VoiceChat", ::GlobalNamespace::KIDManager*>(std::forward<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>(value));
}
inline ::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>* GlobalNamespace::KIDManager::getStaticF__onSessionUpdated_VoiceChat()  {
return ::cordl_internals::getStaticField<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*, "_onSessionUpdated_VoiceChat", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__onSessionUpdated_CustomUsernames(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*, "_onSessionUpdated_CustomUsernames", ::GlobalNamespace::KIDManager*>(std::forward<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>(value));
}
inline ::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>* GlobalNamespace::KIDManager::getStaticF__onSessionUpdated_CustomUsernames()  {
return ::cordl_internals::getStaticField<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*, "_onSessionUpdated_CustomUsernames", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__onSessionUpdated_PrivateRooms(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*, "_onSessionUpdated_PrivateRooms", ::GlobalNamespace::KIDManager*>(std::forward<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>(value));
}
inline ::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>* GlobalNamespace::KIDManager::getStaticF__onSessionUpdated_PrivateRooms()  {
return ::cordl_internals::getStaticField<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*, "_onSessionUpdated_PrivateRooms", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__onSessionUpdated_Multiplayer(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*, "_onSessionUpdated_Multiplayer", ::GlobalNamespace::KIDManager*>(std::forward<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>(value));
}
inline ::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>* GlobalNamespace::KIDManager::getStaticF__onSessionUpdated_Multiplayer()  {
return ::cordl_internals::getStaticField<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*, "_onSessionUpdated_Multiplayer", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__onSessionUpdated_UGC(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*, "_onSessionUpdated_UGC", ::GlobalNamespace::KIDManager*>(std::forward<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>(value));
}
inline ::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>* GlobalNamespace::KIDManager::getStaticF__onSessionUpdated_UGC()  {
return ::cordl_internals::getStaticField<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*, "_onSessionUpdated_UGC", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__isUpdatingNewSession(bool  value)  {
::cordl_internals::setStaticField<bool, "_isUpdatingNewSession", ::GlobalNamespace::KIDManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::KIDManager::getStaticF__isUpdatingNewSession()  {
return ::cordl_internals::getStaticField<bool, "_isUpdatingNewSession", ::GlobalNamespace::KIDManager*>();
}
inline void GlobalNamespace::KIDManager::setStaticF__previousPermissionSettings(::System::Collections::Generic::Dictionary_2<::StringW,::KID::Model::Permission*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::KID::Model::Permission*>*, "_previousPermissionSettings", ::GlobalNamespace::KIDManager*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::KID::Model::Permission*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::KID::Model::Permission*>* GlobalNamespace::KIDManager::getStaticF__previousPermissionSettings()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::KID::Model::Permission*>*, "_previousPermissionSettings", ::GlobalNamespace::KIDManager*>();
}
inline ::UnityW<::GlobalNamespace::KIDManager> GlobalNamespace::KIDManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::KIDManager>>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::KIDManager::get_InitialisationComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_InitialisationComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDManager::set_InitialisationComplete(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"set_InitialisationComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::KIDManager::get_InitialisationSuccessful()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_InitialisationSuccessful", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDManager::set_InitialisationSuccessful(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"set_InitialisationSuccessful", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::TMPSession* GlobalNamespace::KIDManager::get_CurrentSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_CurrentSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TMPSession*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDManager::set_CurrentSession(::GlobalNamespace::TMPSession*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"set_CurrentSession", {}, {::i2c::type_of<::GlobalNamespace::TMPSession*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::SessionStatus GlobalNamespace::KIDManager::get_PreviousStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_PreviousStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SessionStatus>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDManager::set_PreviousStatus(::GlobalNamespace::SessionStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"set_PreviousStatus", {}, {::i2c::type_of<::GlobalNamespace::SessionStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::GetRequirementsData* GlobalNamespace::KIDManager::get__ageGateRequirements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get__ageGateRequirements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GetRequirementsData*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDManager::set__ageGateRequirements(::GlobalNamespace::GetRequirementsData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"set__ageGateRequirements", {}, {::i2c::type_of<::GlobalNamespace::GetRequirementsData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::KIDManager::get_KidTitleDataReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_KidTitleDataReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::KIDManager::get_KidEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_KidEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::KIDManager::get_KidEnabledAndReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_KidEnabledAndReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::KIDManager::get_HasSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_HasSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::KIDManager::get_PreviousStatusPlayerPrefRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_PreviousStatusPlayerPrefRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::KIDManager::get_HasOptedInToKID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_HasOptedInToKID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDManager::set_HasOptedInToKID(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"set_HasOptedInToKID", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW GlobalNamespace::KIDManager::get_KIDSetupPlayerPref()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_KIDSetupPlayerPref", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::KIDManager::get_DbgLocale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_DbgLocale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDManager::set_DbgLocale(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"set_DbgLocale", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW GlobalNamespace::KIDManager::get_DebugKIDLocalePlayerPrefRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_DebugKIDLocalePlayerPrefRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::KIDManager::get_GetEmailForUserPlayerPrefRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_GetEmailForUserPlayerPrefRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::KIDManager::get_GetChallengedBeforePlayerPrefRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"get_GetChallengedBeforePlayerPrefRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::KIDManager::GetActiveAccountStatusNiceString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"GetActiveAccountStatusNiceString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::KID::Model::AgeStatusType GlobalNamespace::KIDManager::GetActiveAccountStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"GetActiveAccountStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::AgeStatusType>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::KID::Model::Permission*>* GlobalNamespace::KIDManager::GetAllPermissionsData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"GetAllPermissionsData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::KIDManager::TryGetAgeStatusTypeFromAge(int32_t  age, ::by_ref<::KID::Model::AgeStatusType>  ageType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TryGetAgeStatusTypeFromAge", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::KID::Model::AgeStatusType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, age, ageType);
}
inline ::System::ValueTuple_2<bool,bool> GlobalNamespace::KIDManager::CheckFeatureOptIn(::GlobalNamespace::EKIDFeatures  feature, ::KID::Model::Permission*  permissionData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"CheckFeatureOptIn", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>(), ::i2c::type_of<::KID::Model::Permission*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool,bool>>(nullptr, ___internal_method, feature, permissionData);
}
inline void GlobalNamespace::KIDManager::SetFeatureOptIn(::GlobalNamespace::EKIDFeatures  feature, bool  optedIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"SetFeatureOptIn", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, feature, optedIn);
}
inline bool GlobalNamespace::KIDManager::CheckFeatureSettingEnabled(::GlobalNamespace::EKIDFeatures  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"CheckFeatureSettingEnabled", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, feature);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetPlayerData_Data*>* GlobalNamespace::KIDManager::TryGetPlayerData(bool  forceRefresh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TryGetPlayerData", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetPlayerData_Data*>*>(nullptr, ___internal_method, forceRefresh);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetRequirementsData*>* GlobalNamespace::KIDManager::TryGetRequirements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TryGetRequirements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetRequirementsData*>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::VerifyAgeData*>* GlobalNamespace::KIDManager::TryVerifyAgeResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TryVerifyAgeResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::VerifyAgeData*>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>* GlobalNamespace::KIDManager::TrySendChallengeEmailRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TrySendChallengeEmailRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::KIDManager::TrySendOptInPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TrySendOptInPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>* GlobalNamespace::KIDManager::TrySendUpgradeSessionChallengeEmail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TrySendUpgradeSessionChallengeEmail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::KIDManager::TrySetHasConfirmedStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TrySetHasConfirmedStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UpgradeSessionData*>* GlobalNamespace::KIDManager::TryUpgradeSession(::System::Collections::Generic::List_1<::StringW>*  requestedPermissions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TryUpgradeSession", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::UpgradeSessionData*>*>(nullptr, ___internal_method, requestedPermissions);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AttemptAgeUpdateData*>* GlobalNamespace::KIDManager::TryAttemptAgeUpdate(int32_t  age)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TryAttemptAgeUpdate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::AttemptAgeUpdateData*>*>(nullptr, ___internal_method, age);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::KIDManager::TryAppealAge(::StringW  email, int32_t  newAge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"TryAppealAge", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method, email, newAge);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::KIDManager::UpdateSession(::System::Action_1<bool>*  getDataCompleted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"UpdateSession", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, getDataCompleted);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::KIDManager::CheckWarningScreensOptedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"CheckWarningScreensOptedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDManager::InitialiseBootFlow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"InitialiseBootFlow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDManager::InitialiseKID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"InitialiseKID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::KIDManager::UpdatePermissions(::GlobalNamespace::TMPSession*  newSession)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"UpdatePermissions", {}, {::i2c::type_of<::GlobalNamespace::TMPSession*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, newSession);
}
inline void GlobalNamespace::KIDManager::ClearSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"ClearSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDManager::DeleteStoredPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"DeleteStoredPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::CancellationTokenSource* GlobalNamespace::KIDManager::ResetCancellationToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"ResetCancellationToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenSource*>(nullptr, ___internal_method);
}
inline ::KID::Model::Permission* GlobalNamespace::KIDManager::GetPermissionDataByFeature(::GlobalNamespace::EKIDFeatures  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"GetPermissionDataByFeature", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::Permission*>(nullptr, ___internal_method, feature);
}
inline void GlobalNamespace::KIDManager::CancelToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"CancelToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::KIDManager::UseKID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"UseKID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* GlobalNamespace::KIDManager::CheckKIDPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"CheckKIDPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>* GlobalNamespace::KIDManager::CheckKIDNewPlayerDateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"CheckKIDNewPlayerDateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>*>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::KIDManager::GetIsEnabled(::StringW  jsonTxt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"GetIsEnabled", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, jsonTxt);
}
inline int32_t GlobalNamespace::KIDManager::GetPhase(::StringW  jsonTxt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"GetPhase", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, jsonTxt);
}
inline ::System::Nullable_1<::System::DateTime> GlobalNamespace::KIDManager::GetNewPlayerDateTime(::StringW  jsonTxt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"GetNewPlayerDateTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>>(nullptr, ___internal_method, jsonTxt);
}
inline bool GlobalNamespace::KIDManager::IsAdult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"IsAdult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::KIDManager::HasAllPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"HasAllPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::KIDManager::SetKIDOptIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"SetKIDOptIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>* GlobalNamespace::KIDManager::SetAndSendEmail(::StringW  email)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"SetAndSendEmail", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>*>(nullptr, ___internal_method, email);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::KIDManager::SendOptInPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"SendOptInPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::KIDManager::HasPermissionToUseFeature(::GlobalNamespace::EKIDFeatures  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"HasPermissionToUseFeature", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, feature);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::KIDManager::WaitForAuthentication()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"WaitForAuthentication", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::KID::Model::AgeStatusType,::GlobalNamespace::TMPSession*>>* GlobalNamespace::KIDManager::AgeGateFlow(::GlobalNamespace::GetPlayerData_Data*  newPlayerData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"AgeGateFlow", {}, {::i2c::type_of<::GlobalNamespace::GetPlayerData_Data*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::KID::Model::AgeStatusType,::GlobalNamespace::TMPSession*>>*>(nullptr, ___internal_method, newPlayerData);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::VerifyAgeData*>* GlobalNamespace::KIDManager::ProcessAgeGate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"ProcessAgeGate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::VerifyAgeData*>*>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::KIDManager::GetOptInKey(::GlobalNamespace::EKIDFeatures  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"GetOptInKey", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, feature);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetPlayerData_Data*>* GlobalNamespace::KIDManager::Server_GetPlayerData(bool  forceRefresh, ::System::Action*  failureCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_GetPlayerData", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetPlayerData_Data*>*>(nullptr, ___internal_method, forceRefresh, failureCallback);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::KIDManager::Server_SetConfirmedStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_SetConfirmedStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UpgradeSessionData*>* GlobalNamespace::KIDManager::Server_UpgradeSession(::GlobalNamespace::UpgradeSessionRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_UpgradeSession", {}, {::i2c::type_of<::GlobalNamespace::UpgradeSessionRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::UpgradeSessionData*>*>(nullptr, ___internal_method, request);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::VerifyAgeData*>* GlobalNamespace::KIDManager::Server_VerifyAge(::GlobalNamespace::VerifyAgeRequest*  request, ::System::Action*  failureCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_VerifyAge", {}, {::i2c::type_of<::GlobalNamespace::VerifyAgeRequest*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::VerifyAgeData*>*>(nullptr, ___internal_method, request, failureCallback);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AttemptAgeUpdateData*>* GlobalNamespace::KIDManager::Server_AttemptAgeUpdate(::GlobalNamespace::AttemptAgeUpdateRequest*  request, ::System::Action*  failureCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_AttemptAgeUpdate", {}, {::i2c::type_of<::GlobalNamespace::AttemptAgeUpdateRequest*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::AttemptAgeUpdateData*>*>(nullptr, ___internal_method, request, failureCallback);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::KIDManager::Server_AppealAge(::GlobalNamespace::AppealAgeRequest*  request, ::System::Action*  failureCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_AppealAge", {}, {::i2c::type_of<::GlobalNamespace::AppealAgeRequest*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method, request, failureCallback);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>* GlobalNamespace::KIDManager::Server_SendChallengeEmail(::GlobalNamespace::SendChallengeEmailRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_SendChallengeEmail", {}, {::i2c::type_of<::GlobalNamespace::SendChallengeEmailRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>*>(nullptr, ___internal_method, request);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::KIDManager::Server_SetOptInPermissions(::GlobalNamespace::SetOptInPermissionsRequest*  request, ::System::Action*  failureCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_SetOptInPermissions", {}, {::i2c::type_of<::GlobalNamespace::SetOptInPermissionsRequest*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method, request, failureCallback);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::KIDManager::Server_OptIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_OptIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetRequirementsData*>* GlobalNamespace::KIDManager::Server_GetRequirements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"Server_GetRequirements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetRequirementsData*>*>(nullptr, ___internal_method);
}
template<typename T,typename Q>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::type_constraint<Q, ::GlobalNamespace::KIDRequestData*>)
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<int64_t,T,::StringW>>* GlobalNamespace::KIDManager::KIDServerWebRequest(::StringW  endpoint, ::StringW  operationType, Q  requestData, ::StringW  queryParams, int32_t  maxRetries, ::System::Func_2<int64_t,bool>*  responseCodeIsRetryable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                    {"KIDServerWebRequest", {::i2c::class_of<T>(), ::i2c::class_of<Q>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<Q>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<int64_t,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<Q>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<int64_t,T,::StringW>>*>(nullptr, ___internal_method, endpoint, operationType, requestData, queryParams, maxRetries, responseCodeIsRetryable);
}
template<typename Q>
requires(::cordl_internals::type_constraint<Q, ::GlobalNamespace::KIDRequestData*>)
inline ::System::Threading::Tasks::Task_1<int64_t>* GlobalNamespace::KIDManager::KIDServerWebRequestNoResponse(::StringW  endpoint, ::StringW  operationType, Q  requestData, int32_t  maxRetries, ::System::Func_2<int64_t,bool>*  responseCodeIsRetryable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                    {"KIDServerWebRequestNoResponse", {::i2c::class_of<Q>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<Q>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<int64_t,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<Q>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int64_t>*>(nullptr, ___internal_method, endpoint, operationType, requestData, maxRetries, responseCodeIsRetryable);
}
inline void GlobalNamespace::KIDManager::RegisterSessionUpdateCallback_AnyPermission(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"RegisterSessionUpdateCallback_AnyPermission", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::KIDManager::UnregisterSessionUpdateCallback_AnyPermission(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"UnregisterSessionUpdateCallback_AnyPermission", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::KIDManager::RegisterSessionUpdatedCallback_VoiceChat(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"RegisterSessionUpdatedCallback_VoiceChat", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::KIDManager::UnregisterSessionUpdatedCallback_VoiceChat(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"UnregisterSessionUpdatedCallback_VoiceChat", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::KIDManager::RegisterSessionUpdatedCallback_CustomUsernames(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"RegisterSessionUpdatedCallback_CustomUsernames", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::KIDManager::UnregisterSessionUpdatedCallback_CustomUsernames(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"UnregisterSessionUpdatedCallback_CustomUsernames", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::KIDManager::RegisterSessionUpdatedCallback_PrivateRooms(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"RegisterSessionUpdatedCallback_PrivateRooms", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::KIDManager::UnregisterSessionUpdatedCallback_PrivateRooms(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"UnregisterSessionUpdatedCallback_PrivateRooms", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::KIDManager::RegisterSessionUpdatedCallback_Multiplayer(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"RegisterSessionUpdatedCallback_Multiplayer", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::KIDManager::UnregisterSessionUpdatedCallback_Multiplayer(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"UnregisterSessionUpdatedCallback_Multiplayer", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::KIDManager::RegisterSessionUpdatedCallback_UGC(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"RegisterSessionUpdatedCallback_UGC", {}, {::i2c::type_of<::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::KIDManager::WaitForAndUpdateNewSession(bool  forceRefresh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"WaitForAndUpdateNewSession", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method, forceRefresh);
}
inline bool GlobalNamespace::KIDManager::HasSessionChanged(::GlobalNamespace::TMPSession*  newSession)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"HasSessionChanged", {}, {::i2c::type_of<::GlobalNamespace::TMPSession*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, newSession);
}
inline void GlobalNamespace::KIDManager::OnSessionUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"OnSessionUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::KIDManager::HasPermissionChanged(::KID::Model::Permission*  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {"HasPermissionChanged", {}, {::i2c::type_of<::KID::Model::Permission*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, newValue);
}
inline void GlobalNamespace::KIDManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDManager* GlobalNamespace::KIDManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDManager::KIDManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDManager___c__DisplayClass103_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager___c__DisplayClass103_0::*)()>(&::GlobalNamespace::KIDManager___c__DisplayClass103_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a322ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass103_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager___c__DisplayClass103_0._CheckKIDNewPlayerDateTime_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager___c__DisplayClass103_0::*)(::StringW)>(&::GlobalNamespace::KIDManager___c__DisplayClass103_0::_CheckKIDNewPlayerDateTime_b__0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a322f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass103_0*>(),
                        {"<CheckKIDNewPlayerDateTime>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager___c__DisplayClass103_0._CheckKIDNewPlayerDateTime_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager___c__DisplayClass103_0::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::KIDManager___c__DisplayClass103_0::_CheckKIDNewPlayerDateTime_b__1)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a32368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass103_0*>(),
                        {"<CheckKIDNewPlayerDateTime>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::KIDManager___c__DisplayClass103_0::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr int32_t const& GlobalNamespace::KIDManager___c__DisplayClass103_0::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::KIDManager___c__DisplayClass103_0::__cordl_internal_set_state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& GlobalNamespace::KIDManager___c__DisplayClass103_0::__cordl_internal_get_newPlayerDateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newPlayerDateTime;
}
constexpr ::System::Nullable_1<::System::DateTime> const& GlobalNamespace::KIDManager___c__DisplayClass103_0::__cordl_internal_get_newPlayerDateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newPlayerDateTime;
}
constexpr void GlobalNamespace::KIDManager___c__DisplayClass103_0::__cordl_internal_set_newPlayerDateTime(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newPlayerDateTime = value;
}
inline void GlobalNamespace::KIDManager___c__DisplayClass103_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass103_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDManager___c__DisplayClass103_0::_CheckKIDNewPlayerDateTime_b__0(::StringW  res)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass103_0*>(),
                        {"<CheckKIDNewPlayerDateTime>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline void GlobalNamespace::KIDManager___c__DisplayClass103_0::_CheckKIDNewPlayerDateTime_b__1(::PlayFab::PlayFabError*  err)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass103_0*>(),
                        {"<CheckKIDNewPlayerDateTime>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, err);
}
inline ::GlobalNamespace::KIDManager___c__DisplayClass103_0* GlobalNamespace::KIDManager___c__DisplayClass103_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDManager___c__DisplayClass103_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDManager___c__DisplayClass103_0::KIDManager___c__DisplayClass103_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDManager___c__DisplayClass102_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager___c__DisplayClass102_0::*)()>(&::GlobalNamespace::KIDManager___c__DisplayClass102_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a321d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass102_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager___c__DisplayClass102_0._CheckKIDPhase_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager___c__DisplayClass102_0::*)(::StringW)>(&::GlobalNamespace::KIDManager___c__DisplayClass102_0::_CheckKIDPhase_b__0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a321e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass102_0*>(),
                        {"<CheckKIDPhase>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager___c__DisplayClass102_0._CheckKIDPhase_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager___c__DisplayClass102_0::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::KIDManager___c__DisplayClass102_0::_CheckKIDPhase_b__1)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a32254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass102_0*>(),
                        {"<CheckKIDPhase>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::KIDManager___c__DisplayClass102_0::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr int32_t const& GlobalNamespace::KIDManager___c__DisplayClass102_0::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::KIDManager___c__DisplayClass102_0::__cordl_internal_set_state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr int32_t& GlobalNamespace::KIDManager___c__DisplayClass102_0::__cordl_internal_get_phase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___phase;
}
constexpr int32_t const& GlobalNamespace::KIDManager___c__DisplayClass102_0::__cordl_internal_get_phase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___phase;
}
constexpr void GlobalNamespace::KIDManager___c__DisplayClass102_0::__cordl_internal_set_phase(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___phase = value;
}
inline void GlobalNamespace::KIDManager___c__DisplayClass102_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass102_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDManager___c__DisplayClass102_0::_CheckKIDPhase_b__0(::StringW  res)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass102_0*>(),
                        {"<CheckKIDPhase>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline void GlobalNamespace::KIDManager___c__DisplayClass102_0::_CheckKIDPhase_b__1(::PlayFab::PlayFabError*  err)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass102_0*>(),
                        {"<CheckKIDPhase>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, err);
}
inline ::GlobalNamespace::KIDManager___c__DisplayClass102_0* GlobalNamespace::KIDManager___c__DisplayClass102_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDManager___c__DisplayClass102_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDManager___c__DisplayClass102_0::KIDManager___c__DisplayClass102_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDManager___c__DisplayClass101_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager___c__DisplayClass101_0::*)()>(&::GlobalNamespace::KIDManager___c__DisplayClass101_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a320c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass101_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager___c__DisplayClass101_0._UseKID_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager___c__DisplayClass101_0::*)(::StringW)>(&::GlobalNamespace::KIDManager___c__DisplayClass101_0::_UseKID_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5a320c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass101_0*>(),
                        {"<UseKID>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager___c__DisplayClass101_0._UseKID_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager___c__DisplayClass101_0::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::KIDManager___c__DisplayClass101_0::_UseKID_b__1)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a32140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass101_0*>(),
                        {"<UseKID>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::KIDManager___c__DisplayClass101_0::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr int32_t const& GlobalNamespace::KIDManager___c__DisplayClass101_0::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::KIDManager___c__DisplayClass101_0::__cordl_internal_set_state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr bool& GlobalNamespace::KIDManager___c__DisplayClass101_0::__cordl_internal_get_isEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEnabled;
}
constexpr bool const& GlobalNamespace::KIDManager___c__DisplayClass101_0::__cordl_internal_get_isEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEnabled;
}
constexpr void GlobalNamespace::KIDManager___c__DisplayClass101_0::__cordl_internal_set_isEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isEnabled = value;
}
inline void GlobalNamespace::KIDManager___c__DisplayClass101_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass101_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDManager___c__DisplayClass101_0::_UseKID_b__0(::StringW  res)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass101_0*>(),
                        {"<UseKID>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline void GlobalNamespace::KIDManager___c__DisplayClass101_0::_UseKID_b__1(::PlayFab::PlayFabError*  err)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c__DisplayClass101_0*>(),
                        {"<UseKID>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, err);
}
inline ::GlobalNamespace::KIDManager___c__DisplayClass101_0* GlobalNamespace::KIDManager___c__DisplayClass101_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDManager___c__DisplayClass101_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDManager___c__DisplayClass101_0::KIDManager___c__DisplayClass101_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager___c::*)()>(&::GlobalNamespace::KIDManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3205c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager___c._TryUpgradeSession_b__88_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::RequestedPermission* (::GlobalNamespace::KIDManager___c::*)(::StringW)>(&::GlobalNamespace::KIDManager___c::_TryUpgradeSession_b__88_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a32064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c*>(),
                        {"<TryUpgradeSession>b__88_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDManager___c::setStaticF___9(::GlobalNamespace::KIDManager___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::KIDManager___c*, "<>9", ::GlobalNamespace::KIDManager___c*>(std::forward<::GlobalNamespace::KIDManager___c*>(value));
}
inline ::GlobalNamespace::KIDManager___c* GlobalNamespace::KIDManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::KIDManager___c*, "<>9", ::GlobalNamespace::KIDManager___c*>();
}
inline void GlobalNamespace::KIDManager___c::setStaticF___9__88_0(::System::Func_2<::StringW,::KID::Model::RequestedPermission*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::KID::Model::RequestedPermission*>*, "<>9__88_0", ::GlobalNamespace::KIDManager___c*>(std::forward<::System::Func_2<::StringW,::KID::Model::RequestedPermission*>*>(value));
}
inline ::System::Func_2<::StringW,::KID::Model::RequestedPermission*>* GlobalNamespace::KIDManager___c::getStaticF___9__88_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::KID::Model::RequestedPermission*>*, "<>9__88_0", ::GlobalNamespace::KIDManager___c*>();
}
inline void GlobalNamespace::KIDManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::KID::Model::RequestedPermission* GlobalNamespace::KIDManager___c::_TryUpgradeSession_b__88_0(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager___c*>(),
                        {"<TryUpgradeSession>b__88_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::RequestedPermission*>(this, ___internal_method, name);
}
inline ::GlobalNamespace::KIDManager___c* GlobalNamespace::KIDManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDManager___c::KIDManager___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDManager_OnEmailResultReceived._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager_OnEmailResultReceived::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::KIDManager_OnEmailResultReceived::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a31ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager_OnEmailResultReceived*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager_OnEmailResultReceived.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager_OnEmailResultReceived::*)(bool)>(&::GlobalNamespace::KIDManager_OnEmailResultReceived::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a31f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDManager_OnEmailResultReceived*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDManager_OnEmailResultReceived*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager_OnEmailResultReceived.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::KIDManager_OnEmailResultReceived::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::KIDManager_OnEmailResultReceived::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a31f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDManager_OnEmailResultReceived*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDManager_OnEmailResultReceived*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager_OnEmailResultReceived.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager_OnEmailResultReceived::*)(::System::IAsyncResult*)>(&::GlobalNamespace::KIDManager_OnEmailResultReceived::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a31fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDManager_OnEmailResultReceived*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDManager_OnEmailResultReceived*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDManager_OnEmailResultReceived::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager_OnEmailResultReceived*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::KIDManager_OnEmailResultReceived::Invoke(bool  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDManager_OnEmailResultReceived*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::IAsyncResult* GlobalNamespace::KIDManager_OnEmailResultReceived::BeginInvoke(bool  result, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDManager_OnEmailResultReceived*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, result, callback, object);
}
inline void GlobalNamespace::KIDManager_OnEmailResultReceived::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDManager_OnEmailResultReceived*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::KIDManager_OnEmailResultReceived* GlobalNamespace::KIDManager_OnEmailResultReceived::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDManager_OnEmailResultReceived*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDManager_OnEmailResultReceived::KIDManager_OnEmailResultReceived()   {
}

#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaComputer.hpp"
#include "GlobalNamespace/zzzz__ModeSelectButton_impl.hpp"
#include "GorillaGameModes/zzzz__GameModeType_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer_ComputerState_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer_EKidScreenState_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer_RedemptionResult_impl.hpp"
#include "System/zzzz__DateTimeOffset_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer_def.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendCollider_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSpeakerLoudness_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__WatchableStringSO_def.hpp"
#include "GorillaNetworking/zzzz__CreditsView_def.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer_ComputerState_def.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer_EKidScreenState_def.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer_NameCheckResult_def.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer_RedemptionResult_def.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer__DisconnectAfterDelay_d__391_def.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer__UpdateSession_d__493_def.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer_def.hpp"
#include "GorillaNetworking/zzzz__GorillaKeyboardBindings_def.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
#include "GorillaNetworking/zzzz__GorillaText_def.hpp"
#include "GorillaNetworking/zzzz__PhotonNetworkController_def.hpp"
#include "KID/Model/zzzz__Permission_ManagedByEnum_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetTimeResult_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteFunctionResult_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "UnityEngine/zzzz__WaitForSeconds_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.get_versionMismatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::get_versionMismatch)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c7420c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_versionMismatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.get_unableToConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::get_unableToConnect)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c74380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_unableToConnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GetServerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::GetServerTime)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c744f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetServerTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.AddSeverTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(int32_t)>(&::GorillaNetworking::GorillaComputer::AddSeverTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c745a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"AddSeverTime", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.get_allowedMapsToJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::get_allowedMapsToJoin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c74610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_allowedMapsToJoin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.set_allowedMapsToJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::ArrayW<::StringW>)>(&::GorillaNetworking::GorillaComputer::set_allowedMapsToJoin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c74618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"set_allowedMapsToJoin", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.get_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c74620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.set_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::set_version)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c74628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"set_version", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.get_VStumpRoomPrepend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::get_VStumpRoomPrepend)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c74638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_VStumpRoomPrepend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.IsValidVStumpModePrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::GorillaNetworking::GorillaComputer::IsValidVStumpModePrefix)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c74640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"IsValidVStumpModePrefix", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.IsVStumpRoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::IsVStumpRoomName)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c74654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"IsVStumpRoomName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.get_VStumpRoomFullPrepend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::get_VStumpRoomFullPrepend)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c74744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_VStumpRoomFullPrepend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.SetVStumpRoomModePrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::SetVStumpRoomModePrefix)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c74758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetVStumpRoomModePrefix", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.StripVStumpRoomPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::StripVStumpRoomPrefix)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c74810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"StripVStumpRoomPrefix", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GetVStumpRoomDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::GetVStumpRoomDisplayName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c74894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetVStumpRoomDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.get_currentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaComputer_ComputerState (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::get_currentState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c748cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_currentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.get_NameTagPlayerPref
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::get_NameTagPlayerPref)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c7492c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_NameTagPlayerPref", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.get_NametagsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::get_NametagsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c74a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_NametagsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.set_NametagsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(bool)>(&::GorillaNetworking::GorillaComputer::set_NametagsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c74a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"set_NametagsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.get_RedemptionStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaComputer_RedemptionResult (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::get_RedemptionStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c74a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_RedemptionStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.set_RedemptionStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GlobalNamespace::GorillaComputer_RedemptionResult)>(&::GorillaNetworking::GorillaComputer::set_RedemptionStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c74a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"set_RedemptionStatus", {}, {::i2c::type_of<::GlobalNamespace::GorillaComputer_RedemptionResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.get_RedemptionCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::get_RedemptionCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c74c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_RedemptionCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.set_RedemptionCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::set_RedemptionCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c74c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"set_RedemptionCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.get_RedemptionRestrictionTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::get_RedemptionRestrictionTime)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c74c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_RedemptionRestrictionTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.set_RedemptionRestrictionTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::System::Nullable_1<::System::DateTimeOffset>)>(&::GorillaNetworking::GorillaComputer::set_RedemptionRestrictionTime)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c74c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"set_RedemptionRestrictionTime", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::Awake)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5c74c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::Start)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c74fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c754a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c75590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::OnDestroy)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5c75680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::SliceUpdate)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5c757d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.Initialise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::Initialise)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x5c75048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"Initialise", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitialiseRoomScreens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitialiseRoomScreens)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c75d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitialiseRoomScreens", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitialiseStrings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitialiseStrings)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c75de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitialiseStrings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitialiseAllRoomStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitialiseAllRoomStates)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c75e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitialiseAllRoomStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeStartupState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeStartupState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c765d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeStartupState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeRoomState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeRoomState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c76584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeRoomState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeColorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeColorState)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c774e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeColorState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeNameState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeNameState)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x5c760a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeNameState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeTurnState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeTurnState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c76588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeTurnState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeMicState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeMicState)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c766e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeMicState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeAutoMuteState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeAutoMuteState)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c769cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeAutoMuteState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeQueueState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeQueueState)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5c765dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeQueueState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeGroupState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeGroupState)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c767c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeGroupState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeTroopState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeTroopState)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5c771dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeTroopState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.HandleInitialTroopQueueState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::HandleInitialTroopQueueState)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c77744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"HandleInitialTroopQueueState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeVoiceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeVoiceState)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5c7687c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeVoiceState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::InitializeGameMode)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c777b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeGameMode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeGameMode)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x5c76a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeGameMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeCreditsState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeCreditsState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c77164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeCreditsState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeTimeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeTimeState)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c77168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeTimeState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeSupportState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeSupportState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c771d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeSupportState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeVisualsState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeVisualsState)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5c76fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeVisualsState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeRedeemState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeRedeemState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c774dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeRedeemState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.CheckInternetConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::CheckInternetConnection)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c75960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckInternetConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnConnectedToMasterStuff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::OnConnectedToMasterStuff)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5c77a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnConnectedToMasterStuff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnReturnCurrentVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*)>(&::GorillaNetworking::GorillaComputer::OnReturnCurrentVersion)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x5c78288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnReturnCurrentVersion", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.PressButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::PressButton)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5c78aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"PressButton", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnModeSelectButtonPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW, bool)>(&::GorillaNetworking::GorillaComputer::OnModeSelectButtonPress)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5c77864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnModeSelectButtonPress", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.SetGameModeWithoutButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::SetGameModeWithoutButton)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c7a540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetGameModeWithoutButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.RegisterPrimaryJoinTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaNetworkJoinTrigger*)>(&::GorillaNetworking::GorillaComputer::RegisterPrimaryJoinTrigger)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c7a7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RegisterPrimaryJoinTrigger", {}, {::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GetSelectedMapJoinTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::GetSelectedMapJoinTrigger)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c7a844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetSelectedMapJoinTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GetJoinTriggerForZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::GetJoinTriggerForZone)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c7a8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetJoinTriggerForZone", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GetJoinTriggerFromFullGameModeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::GetJoinTriggerFromFullGameModeString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5c7a944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetJoinTriggerFromFullGameModeString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnGroupJoinButtonPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(int32_t, ::GlobalNamespace::GorillaFriendCollider*)>(&::GorillaNetworking::GorillaComputer::OnGroupJoinButtonPress)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x5c7aab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnGroupJoinButtonPress", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.CompQueueUnlockButtonPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::CompQueueUnlockButtonPress)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5c7b1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CompQueueUnlockButtonPress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.SwitchState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GlobalNamespace::GorillaComputer_ComputerState, bool)>(&::GorillaNetworking::GorillaComputer::SwitchState)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c75f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SwitchState", {}, {::i2c::type_of<::GlobalNamespace::GorillaComputer_ComputerState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.PopState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::PopState)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c7b308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"PopState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.SwitchToWarningState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::SwitchToWarningState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c7b3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SwitchToWarningState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.SwitchToLoadingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::SwitchToLoadingState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c7b408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SwitchToLoadingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessStartupState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessStartupState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c78c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessStartupState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessColorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessColorState)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x5c7b414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessColorState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessNameState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessNameState)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5c79424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessNameState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessRoomState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessRoomState)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x5c78ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessRoomState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.DisconnectAfterDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(float_t)>(&::GorillaNetworking::GorillaComputer::DisconnectAfterDelay)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c7bbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"DisconnectAfterDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessTurnState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessTurnState)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c7961c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessTurnState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessMicState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessMicState)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c79714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessMicState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessQueueState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessQueueState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c797e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessQueueState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.JoinTroop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::JoinTroop)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c7bde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"JoinTroop", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.JoinTroopQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::JoinTroopQueue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c7beb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"JoinTroopQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.RequestTroopPopulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(bool)>(&::GorillaNetworking::GorillaComputer::RequestTroopPopulation)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c78c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RequestTroopPopulation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.JoinDefaultQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::JoinDefaultQueue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c7befc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"JoinDefaultQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.LeaveTroop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::LeaveTroop)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c7bf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"LeaveTroop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GetCurrentTroop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::GetCurrentTroop)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c7bff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetCurrentTroop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GetCurrentTroopPopulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::GetCurrentTroopPopulation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c7c010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetCurrentTroopPopulation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.JoinQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW, bool)>(&::GorillaNetworking::GorillaComputer::JoinQueue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c7bd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"JoinQueue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessGroupState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessGroupState)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c7989c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessGroupState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.SetGroupMapJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW, int32_t)>(&::GorillaNetworking::GorillaComputer::SetGroupMapJoin)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c7c028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetGroupMapJoin", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessTroopState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessTroopState)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5c7a11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessTroopState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.IsValidTroopName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::IsValidTroopName)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c776b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"IsValidTroopName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GetQueueNameForTroop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::GetQueueNameForTroop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7beb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetQueueNameForTroop", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessVoiceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessVoiceState)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c79994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessVoiceState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessAutoMuteState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessAutoMuteState)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5c79a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessAutoMuteState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessVisualsState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessVisualsState)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5c79c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessVisualsState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessCreditsState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessCreditsState)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c79bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessCreditsState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessSupportState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessSupportState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c79c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessSupportState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessRedemptionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessRedemptionState)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5c7a358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessRedemptionState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessNameWarningState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessNameWarningState)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5c79fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessNameWarningState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.UpdateScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::UpdateScreen)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5c74a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UpdateScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.LoadingScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::LoadingScreen)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5c7fc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"LoadingScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.NameWarningScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::NameWarningScreen)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c7fa88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"NameWarningScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.SupportScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::SupportScreen)> {
  constexpr static std::size_t size = 0x7ec;
  constexpr static std::size_t addrs = 0x5c7f29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SupportScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.TimeScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::TimeScreen)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5c7f0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"TimeScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.CreditsScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::CreditsScreen)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c7f0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CreditsScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.VisualsScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::VisualsScreen)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x5c7ecb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"VisualsScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.VoiceScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::VoiceScreen)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5c7e714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"VoiceScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.AutomuteScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::AutomuteScreen)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5c7ea38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"AutomuteScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GroupScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::GroupScreen)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5c7e374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GroupScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.MicScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::MicScreen)> {
  constexpr static std::size_t size = 0x8b4;
  constexpr static std::size_t addrs = 0x5c7dac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"MicScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.QueueScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::QueueScreen)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5c7d708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"QueueScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.TroopScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::TroopScreen)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x5c7fd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"TroopScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.TurnScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::TurnScreen)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x5c7d2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"TurnScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.NameScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::NameScreen)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5c7cf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"NameScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.StartupScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::StartupScreen)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5c7c324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"StartupScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ColourScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::ColourScreen)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x5c81320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ColourScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.RoomScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::RoomScreen)> {
  constexpr static std::size_t size = 0x91c;
  constexpr static std::size_t addrs = 0x5c7c654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RoomScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.RedemptionScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::RedemptionScreen)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x5c806c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RedemptionScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.LimitedOnlineFunctionalityScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::LimitedOnlineFunctionalityScreen)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c80e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"LimitedOnlineFunctionalityScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.UpdateGameModeText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::UpdateGameModeText)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5c7a5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UpdateGameModeText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.UpdateFunctionScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::UpdateFunctionScreen)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c7c2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UpdateFunctionScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.CheckAutoBanListForRoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::CheckAutoBanListForRoomName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c7bd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckAutoBanListForRoomName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.CheckAutoBanListForPlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::CheckAutoBanListForPlayerName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c7b818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckAutoBanListForPlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.CheckAutoBanListForTroopName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::CheckAutoBanListForTroopName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c7c0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckAutoBanListForTroopName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.CheckForBadRoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::CheckForBadRoomName)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5c81aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckForBadRoomName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.CheckForBadPlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::CheckForBadPlayerName)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5c81bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckForBadPlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.CheckForBadTroopName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::CheckForBadTroopName)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5c81d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckForBadTroopName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnRoomNameChecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*)>(&::GorillaNetworking::GorillaComputer::OnRoomNameChecked)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x5c81ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnRoomNameChecked", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnPlayerNameChecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*)>(&::GorillaNetworking::GorillaComputer::OnPlayerNameChecked)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x5c822c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnPlayerNameChecked", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnTroopNameChecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*)>(&::GorillaNetworking::GorillaComputer::OnTroopNameChecked)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5c82838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnTroopNameChecked", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnErrorNameCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::GorillaComputer::OnErrorNameCheck)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c829bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnErrorNameCheck", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.CheckAutoBanListForName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::CheckAutoBanListForName)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5c83270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckAutoBanListForName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(float_t, float_t, float_t)>(&::GorillaNetworking::GorillaComputer::UpdateColor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c834e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UpdateColor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.UpdateFailureText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::UpdateFailureText)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c759bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UpdateFailureText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.RestoreFromFailureState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::RestoreFromFailureState)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c75a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RestoreFromFailureState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GeneralFailureMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::GeneralFailureMessage)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c78a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GeneralFailureMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnErrorShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::GorillaComputer::OnErrorShared)> {
  constexpr static std::size_t size = 0x844;
  constexpr static std::size_t addrs = 0x5c82a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnErrorShared", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.DecreaseState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::DecreaseState)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c78e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"DecreaseState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.IncreaseState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::IncreaseState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c78e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"IncreaseState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaComputer_ComputerState (::GorillaNetworking::GorillaComputer::*)(int32_t)>(&::GorillaNetworking::GorillaComputer::GetState)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c7b0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GetStateIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::GorillaComputer::*)(::GlobalNamespace::GorillaComputer_ComputerState)>(&::GorillaNetworking::GorillaComputer::GetStateIndex)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c83530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetStateIndex", {}, {::i2c::type_of<::GlobalNamespace::GorillaComputer_ComputerState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GetOrderListForScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaComputer::*)(::GlobalNamespace::GorillaComputer_ComputerState)>(&::GorillaNetworking::GorillaComputer::GetOrderListForScreen)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c8196c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetOrderListForScreen", {}, {::i2c::type_of<::GlobalNamespace::GorillaComputer_ComputerState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GetCurrentTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::GetCurrentTime)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c77d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetCurrentTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnGetTimeSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::PlayFab::ClientModels::GetTimeResult*)>(&::GorillaNetworking::GorillaComputer::OnGetTimeSuccess)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5c83608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnGetTimeSuccess", {}, {::i2c::type_of<::PlayFab::ClientModels::GetTimeResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnGetTimeFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::GorillaComputer::OnGetTimeFailure)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5c83744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnGetTimeFailure", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.PlayerCountChangedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaNetworking::GorillaComputer::PlayerCountChangedCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c838f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"PlayerCountChangedCallback", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnFirstJoinedRoom_IncrementSessionCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaNetworking::GorillaComputer::OnFirstJoinedRoom_IncrementSessionCount)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5c838fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnFirstJoinedRoom_IncrementSessionCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.SetNameBySafety
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(bool)>(&::GorillaNetworking::GorillaComputer::SetNameBySafety)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x5c83a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetNameBySafety", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.SetLocalNameTagText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::SetLocalNameTagText)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c8279c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetLocalNameTagText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.SetComputerSettingsBySafety
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(bool, ::ArrayW<::GlobalNamespace::GorillaComputer_ComputerState>, bool)>(&::GorillaNetworking::GorillaComputer::SetComputerSettingsBySafety)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x5c77e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetComputerSettingsBySafety", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::GorillaComputer_ComputerState>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.KID_SetVoiceChatSettingOnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(bool, ::GlobalNamespace::Permission_ManagedByEnum, bool)>(&::GorillaNetworking::GorillaComputer::KID_SetVoiceChatSettingOnStart)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c83d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"KID_SetVoiceChatSettingOnStart", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Permission_ManagedByEnum>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.SetVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(bool, bool)>(&::GorillaNetworking::GorillaComputer::SetVoice)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c7c1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetVoice", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.CheckVoiceChatEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::CheckVoiceChatEnabled)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c83db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckVoiceChatEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.SetVoiceChatBySafety
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(bool, ::GlobalNamespace::Permission_ManagedByEnum)>(&::GorillaNetworking::GorillaComputer::SetVoiceChatBySafety)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x5c83dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetVoiceChatBySafety", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Permission_ManagedByEnum>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.SetNametagSetting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(bool, ::GlobalNamespace::Permission_ManagedByEnum, bool)>(&::GorillaNetworking::GorillaComputer::SetNametagSetting)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c841e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetNametagSetting", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Permission_ManagedByEnum>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.RegisterOnNametagSettingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::GorillaNetworking::GorillaComputer::RegisterOnNametagSettingChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c84274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RegisterOnNametagSettingChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.UnregisterOnNametagSettingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::GorillaNetworking::GorillaComputer::UnregisterOnNametagSettingChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c84364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UnregisterOnNametagSettingChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.UpdateNametagSetting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(bool, bool)>(&::GorillaNetworking::GorillaComputer::UpdateNametagSetting)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5c7b848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UpdateNametagSetting", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.SetInVirtualStump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(bool)>(&::GorillaNetworking::GorillaComputer::SetInVirtualStump)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c84454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetInVirtualStump", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.IsPlayerInVirtualStump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::IsPlayerInVirtualStump)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c84500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"IsPlayerInVirtualStump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.SetLimitOnlineScreens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(bool)>(&::GorillaNetworking::GorillaComputer::SetLimitOnlineScreens)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c84508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetLimitOnlineScreens", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitializeKIdState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitializeKIdState)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c77438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeKIdState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.UpdateKidState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::UpdateKidState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c84510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UpdateKidState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.RequestUpdatedPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::RequestUpdatedPermissions)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c7bc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RequestUpdatedPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.UpdateSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::UpdateSession)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c84518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UpdateSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnSessionUpdate_GorillaComputer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::OnSessionUpdate_GorillaComputer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c845c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnSessionUpdate_GorillaComputer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessScreen_SetupKID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::ProcessScreen_SetupKID)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c7c11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessScreen_SetupKID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GuardianConsentMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaComputer::*)(::StringW, ::StringW)>(&::GorillaNetworking::GorillaComputer::GuardianConsentMessage)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5c845c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GuardianConsentMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProhibitedMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::StringW)>(&::GorillaNetworking::GorillaComputer::ProhibitedMessage)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5c84864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProhibitedMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.RoomScreen_Permission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::RoomScreen_Permission)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5c817f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RoomScreen_Permission", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.RoomScreen_KIdProhibited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::RoomScreen_KIdProhibited)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c8174c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RoomScreen_KIdProhibited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.VoiceScreen_Permission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::VoiceScreen_Permission)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5c80c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"VoiceScreen_Permission", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.VoiceScreen_KIdProhibited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::VoiceScreen_KIdProhibited)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c80be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"VoiceScreen_KIdProhibited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.MicScreen_Permission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::MicScreen_Permission)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c84998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"MicScreen_Permission", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.MicScreen_KIdProhibited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::MicScreen_KIdProhibited)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c80ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"MicScreen_KIdProhibited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.NameScreen_Permission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::NameScreen_Permission)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c811ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"NameScreen_Permission", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.NameScreen_KIdProhibited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::NameScreen_KIdProhibited)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c81108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"NameScreen_KIdProhibited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnKIDSessionUpdated_CustomNicknames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(bool, ::GlobalNamespace::Permission_ManagedByEnum)>(&::GorillaNetworking::GorillaComputer::OnKIDSessionUpdated_CustomNicknames)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5c84a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnKIDSessionUpdated_CustomNicknames", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Permission_ManagedByEnum>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.TroopScreen_Permission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::TroopScreen_Permission)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5c80f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"TroopScreen_Permission", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.TroopScreen_KIdProhibited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::TroopScreen_KIdProhibited)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c80ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"TroopScreen_KIdProhibited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessKIdState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessKIdState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c7a340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessKIdState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.KIdScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::KIdScreen)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c80604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"KIdScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.KIdScreen_DisplayPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::KIdScreen_DisplayPermissions)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x5c84c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"KIdScreen_DisplayPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GetLocalisedLanguageScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::GetLocalisedLanguageScreen)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c850b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetLocalisedLanguageScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GetLangaugesList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::by_ref<::StringW>)>(&::GorillaNetworking::GorillaComputer::GetLangaugesList)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5c85284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetLangaugesList", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GetRemainingChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::GorillaComputer::*)(::StringW, int32_t)>(&::GorillaNetworking::GorillaComputer::GetRemainingChars)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c855f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetRemainingChars", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.GetLanguageScreenLocalisation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::GetLanguageScreenLocalisation)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5c850bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetLanguageScreenLocalisation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.InitialiseLanguageScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::InitialiseLanguageScreen)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c75ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitialiseLanguageScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.LanguageScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::LanguageScreen)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c7c62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"LanguageScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.ProcessLanguageState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::GorillaComputer::ProcessLanguageState)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c78ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessLanguageState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.OnLanguageChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::OnLanguageChanged)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5c856d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnLanguageChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer.RefreshFunctionNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::RefreshFunctionNames)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c75b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RefreshFunctionNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::_ctor)> {
  constexpr static std::size_t size = 0xb20;
  constexpr static std::size_t addrs = 0x5c85844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer._Initialise_b__340_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)()>(&::GorillaNetworking::GorillaComputer::_Initialise_b__340_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c863b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"<Initialise>b__340_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer._RequestTroopPopulation_b__399_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*)>(&::GorillaNetworking::GorillaComputer::_RequestTroopPopulation_b__399_0)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c863cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"<RequestTroopPopulation>b__399_0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer._RequestTroopPopulation_b__399_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::GorillaComputer::_RequestTroopPopulation_b__399_1)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c86504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"<RequestTroopPopulation>b__399_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer._SetComputerSettingsBySafety_b__469_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaComputer_StateOrderItem*)>(&::GorillaNetworking::GorillaComputer::_SetComputerSettingsBySafety_b__469_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c865a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"<SetComputerSettingsBySafety>b__469_0", {}, {::i2c::type_of<::GorillaNetworking::GorillaComputer_StateOrderItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer._RefreshFunctionNames_b__525_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer::*)(::GorillaNetworking::GorillaComputer_StateOrderItem*)>(&::GorillaNetworking::GorillaComputer::_RefreshFunctionNames_b__525_0)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5c86670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"<RefreshFunctionNames>b__525_0", {}, {::i2c::type_of<::GorillaNetworking::GorillaComputer_StateOrderItem*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_tryGetTimeAgain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryGetTimeAgain;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_tryGetTimeAgain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryGetTimeAgain;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_tryGetTimeAgain(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryGetTimeAgain = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GorillaNetworking::GorillaComputer::__cordl_internal_get_unpressedMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unpressedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_unpressedMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unpressedMaterial;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_unpressedMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unpressedMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GorillaNetworking::GorillaComputer::__cordl_internal_get_pressedMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_pressedMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressedMaterial;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_pressedMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressedMaterial = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_currentTextField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTextField;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_currentTextField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTextField;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_currentTextField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTextField = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_buttonFadeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonFadeTime;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_buttonFadeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonFadeTime;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_buttonFadeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonFadeTime = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_offlineTextInitialString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineTextInitialString;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_offlineTextInitialString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineTextInitialString;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_offlineTextInitialString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offlineTextInitialString = value;
}
constexpr ::GorillaNetworking::GorillaText*& GorillaNetworking::GorillaComputer::__cordl_internal_get_screenText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenText;
}
constexpr ::GorillaNetworking::GorillaText* const& GorillaNetworking::GorillaComputer::__cordl_internal_get_screenText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenText;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_screenText(::GorillaNetworking::GorillaText*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenText = value;
}
constexpr ::GorillaNetworking::GorillaText*& GorillaNetworking::GorillaComputer::__cordl_internal_get_functionSelectText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___functionSelectText;
}
constexpr ::GorillaNetworking::GorillaText* const& GorillaNetworking::GorillaComputer::__cordl_internal_get_functionSelectText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___functionSelectText;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_functionSelectText(::GorillaNetworking::GorillaText*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___functionSelectText = value;
}
constexpr ::GorillaNetworking::GorillaText*& GorillaNetworking::GorillaComputer::__cordl_internal_get_wallScreenText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallScreenText;
}
constexpr ::GorillaNetworking::GorillaText* const& GorillaNetworking::GorillaComputer::__cordl_internal_get_wallScreenText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallScreenText;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_wallScreenText(::GorillaNetworking::GorillaText*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wallScreenText = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale>& GorillaNetworking::GorillaComputer::__cordl_internal_get__lastLocaleChecked_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastLocaleChecked_Version;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& GorillaNetworking::GorillaComputer::__cordl_internal_get__lastLocaleChecked_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastLocaleChecked_Version;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__lastLocaleChecked_Version(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastLocaleChecked_Version = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale>& GorillaNetworking::GorillaComputer::__cordl_internal_get__lastLocaleChecked_Connect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastLocaleChecked_Connect;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& GorillaNetworking::GorillaComputer::__cordl_internal_get__lastLocaleChecked_Connect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastLocaleChecked_Connect;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__lastLocaleChecked_Connect(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastLocaleChecked_Connect = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get__cachedVersionMismatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedVersionMismatch;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get__cachedVersionMismatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedVersionMismatch;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__cachedVersionMismatch(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedVersionMismatch = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get__cachedUnableToConnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedUnableToConnect;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get__cachedUnableToConnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedUnableToConnect;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__cachedUnableToConnect(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedUnableToConnect = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GorillaNetworking::GorillaComputer::__cordl_internal_get_wrongVersionMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrongVersionMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_wrongVersionMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrongVersionMaterial;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_wrongVersionMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wrongVersionMaterial = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GorillaNetworking::GorillaComputer::__cordl_internal_get_wallScreenRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallScreenRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_wallScreenRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallScreenRenderer;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_wallScreenRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wallScreenRenderer = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GorillaNetworking::GorillaComputer::__cordl_internal_get_computerScreenRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computerScreenRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_computerScreenRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computerScreenRenderer;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_computerScreenRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___computerScreenRenderer = value;
}
constexpr int64_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_startupMillis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startupMillis;
}
constexpr int64_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_startupMillis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startupMillis;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_startupMillis(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startupMillis = value;
}
constexpr ::System::DateTime& GorillaNetworking::GorillaComputer::__cordl_internal_get_startupTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startupTime;
}
constexpr ::System::DateTime const& GorillaNetworking::GorillaComputer::__cordl_internal_get_startupTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startupTime;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_startupTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startupTime = value;
}
constexpr ::GorillaGameModes::GameModeType& GorillaNetworking::GorillaComputer::__cordl_internal_get_lastPressedGameModeType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPressedGameModeType;
}
constexpr ::GorillaGameModes::GameModeType const& GorillaNetworking::GorillaComputer::__cordl_internal_get_lastPressedGameModeType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPressedGameModeType;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_lastPressedGameModeType(::GorillaGameModes::GameModeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPressedGameModeType = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_lastPressedGameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPressedGameMode;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_lastPressedGameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPressedGameMode;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_lastPressedGameMode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPressedGameMode = value;
}
constexpr ::UnityW<::GlobalNamespace::WatchableStringSO>& GorillaNetworking::GorillaComputer::__cordl_internal_get_currentGameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGameMode;
}
constexpr ::UnityW<::GlobalNamespace::WatchableStringSO> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_currentGameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGameMode;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_currentGameMode(::UnityW<::GlobalNamespace::WatchableStringSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentGameMode = value;
}
constexpr ::UnityW<::GlobalNamespace::WatchableStringSO>& GorillaNetworking::GorillaComputer::__cordl_internal_get_currentGameModeText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGameModeText;
}
constexpr ::UnityW<::GlobalNamespace::WatchableStringSO> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_currentGameModeText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGameModeText;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_currentGameModeText(::UnityW<::GlobalNamespace::WatchableStringSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentGameModeText = value;
}
constexpr int32_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_includeUpdatedServerSynchTest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeUpdatedServerSynchTest;
}
constexpr int32_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_includeUpdatedServerSynchTest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeUpdatedServerSynchTest;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_includeUpdatedServerSynchTest(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___includeUpdatedServerSynchTest = value;
}
constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController>& GorillaNetworking::GorillaComputer::__cordl_internal_get_networkController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkController;
}
constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_networkController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkController;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_networkController(::UnityW<::GorillaNetworking::PhotonNetworkController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkController = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_updateCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateCooldown;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_updateCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateCooldown;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_updateCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateCooldown = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_defaultUpdateCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultUpdateCooldown;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_defaultUpdateCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultUpdateCooldown;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_defaultUpdateCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultUpdateCooldown = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_micUpdateCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micUpdateCooldown;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_micUpdateCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micUpdateCooldown;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_micUpdateCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___micUpdateCooldown = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_lastUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpdateTime;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_lastUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpdateTime;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_lastUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastUpdateTime = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_deltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTime;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_deltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTime;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_deltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deltaTime = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_isConnectedToMaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isConnectedToMaster;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_isConnectedToMaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isConnectedToMaster;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_isConnectedToMaster(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isConnectedToMaster = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_internetFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internetFailure;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_internetFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internetFailure;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_internetFailure(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___internetFailure = value;
}
constexpr ::ArrayW<::StringW>& GorillaNetworking::GorillaComputer::__cordl_internal_get__allowedMapsToJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowedMapsToJoin;
}
constexpr ::ArrayW<::StringW> const& GorillaNetworking::GorillaComputer::__cordl_internal_get__allowedMapsToJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowedMapsToJoin;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__allowedMapsToJoin(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowedMapsToJoin = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_limitOnlineScreens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitOnlineScreens;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_limitOnlineScreens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitOnlineScreens;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_limitOnlineScreens(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limitOnlineScreens = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_stateUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateUpdated;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_stateUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateUpdated;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_stateUpdated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateUpdated = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_screenChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenChanged;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_screenChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenChanged;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_screenChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenChanged = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaComputer_StateOrderItem*>*& GorillaNetworking::GorillaComputer::__cordl_internal_get_OrderList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderList;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaComputer_StateOrderItem*>* const& GorillaNetworking::GorillaComputer::__cordl_internal_get_OrderList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderList;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_OrderList(::System::Collections::Generic::List_1<::GorillaNetworking::GorillaComputer_StateOrderItem*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OrderList = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_Pointer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pointer;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_Pointer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pointer;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_Pointer(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Pointer = value;
}
constexpr int32_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_highestCharacterCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highestCharacterCount;
}
constexpr int32_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_highestCharacterCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highestCharacterCount;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_highestCharacterCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___highestCharacterCount = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaNetworking::GorillaComputer::__cordl_internal_get_FunctionNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaNetworking::GorillaComputer::__cordl_internal_get_FunctionNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionNames;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_FunctionNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionNames = value;
}
constexpr int32_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_FunctionsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionsCount;
}
constexpr int32_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_FunctionsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionsCount;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_FunctionsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionsCount = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_roomToJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomToJoin;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_roomToJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomToJoin;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_roomToJoin(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomToJoin = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_roomFull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomFull;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_roomFull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomFull;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_roomFull(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomFull = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_roomNotAllowed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomNotAllowed;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_roomNotAllowed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomNotAllowed;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_roomNotAllowed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomNotAllowed = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_pttType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pttType;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_pttType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pttType;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_pttType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pttType = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>& GorillaNetworking::GorillaComputer::__cordl_internal_get_speakerLoudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speakerLoudness;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_speakerLoudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speakerLoudness;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_speakerLoudness(::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speakerLoudness = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_micInputTestTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micInputTestTimer;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_micInputTestTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micInputTestTimer;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_micInputTestTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___micInputTestTimer = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_micInputTestTimerThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micInputTestTimerThreshold;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_micInputTestTimerThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micInputTestTimerThreshold;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_micInputTestTimerThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___micInputTestTimerThreshold = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_autoMuteType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoMuteType;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_autoMuteType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoMuteType;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_autoMuteType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoMuteType = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_currentQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentQueue;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_currentQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentQueue;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_currentQueue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentQueue = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_allowedInCompetitive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowedInCompetitive;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_allowedInCompetitive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowedInCompetitive;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_allowedInCompetitive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowedInCompetitive = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_groupMapJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupMapJoin;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_groupMapJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupMapJoin;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_groupMapJoin(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupMapJoin = value;
}
constexpr int32_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_groupMapJoinIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupMapJoinIndex;
}
constexpr int32_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_groupMapJoinIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupMapJoinIndex;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_groupMapJoinIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupMapJoinIndex = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& GorillaNetworking::GorillaComputer::__cordl_internal_get_friendJoinCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendJoinCollider;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_friendJoinCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendJoinCollider;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_friendJoinCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendJoinCollider = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_troopName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___troopName;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_troopName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___troopName;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_troopName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___troopName = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_troopQueueActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___troopQueueActive;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_troopQueueActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___troopQueueActive;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_troopQueueActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___troopQueueActive = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_troopToJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___troopToJoin;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_troopToJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___troopToJoin;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_troopToJoin(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___troopToJoin = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_rememberTroopQueueState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rememberTroopQueueState;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_rememberTroopQueueState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rememberTroopQueueState;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_rememberTroopQueueState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rememberTroopQueueState = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>*& GorillaNetworking::GorillaComputer::__cordl_internal_get_primaryTriggersByZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryTriggersByZone;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>* const& GorillaNetworking::GorillaComputer::__cordl_internal_get_primaryTriggersByZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryTriggersByZone;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_primaryTriggersByZone(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primaryTriggersByZone = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_voiceChatOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceChatOn;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_voiceChatOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceChatOn;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_voiceChatOn(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceChatOn = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ModeSelectButton>>& GorillaNetworking::GorillaComputer::__cordl_internal_get_modeSelectButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modeSelectButtons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ModeSelectButton>> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_modeSelectButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modeSelectButtons;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_modeSelectButtons(::ArrayW<::UnityW<::GlobalNamespace::ModeSelectButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modeSelectButtons = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get__version_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version_k__BackingField;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get__version_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version_k__BackingField;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__version_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____version_k__BackingField = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_buildDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buildDate;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_buildDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buildDate;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_buildDate(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buildDate = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_buildCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buildCode;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_buildCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buildCode;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_buildCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buildCode = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_disableParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableParticles;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_disableParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableParticles;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_disableParticles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableParticles = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_instrumentVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instrumentVolume;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_instrumentVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instrumentVolume;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_instrumentVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instrumentVolume = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_iobtMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iobtMode;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_iobtMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iobtMode;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_iobtMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iobtMode = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_perfMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perfMode;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_perfMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perfMode;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_perfMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perfMode = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_isSubcribed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSubcribed;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_isSubcribed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSubcribed;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_isSubcribed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSubcribed = value;
}
constexpr ::UnityW<::GorillaNetworking::CreditsView>& GorillaNetworking::GorillaComputer::__cordl_internal_get_creditsView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creditsView;
}
constexpr ::UnityW<::GorillaNetworking::CreditsView> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_creditsView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creditsView;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_creditsView(::UnityW<::GorillaNetworking::CreditsView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___creditsView = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_leftHanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHanded;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_leftHanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHanded;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_leftHanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHanded = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_savedName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedName;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_savedName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedName;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_savedName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savedName = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_currentName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentName;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_currentName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentName;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_currentName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentName = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& GorillaNetworking::GorillaComputer::__cordl_internal_get_exactOneWeekFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exactOneWeekFile;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_exactOneWeekFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exactOneWeekFile;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_exactOneWeekFile(::UnityW<::UnityEngine::TextAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exactOneWeekFile = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& GorillaNetworking::GorillaComputer::__cordl_internal_get_anywhereOneWeekFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anywhereOneWeekFile;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_anywhereOneWeekFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anywhereOneWeekFile;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_anywhereOneWeekFile(::UnityW<::UnityEngine::TextAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anywhereOneWeekFile = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& GorillaNetworking::GorillaComputer::__cordl_internal_get_anywhereTwoWeekFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anywhereTwoWeekFile;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_anywhereTwoWeekFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anywhereTwoWeekFile;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_anywhereTwoWeekFile(::UnityW<::UnityEngine::TextAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anywhereTwoWeekFile = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaComputer_ComputerState>*& GorillaNetworking::GorillaComputer::__cordl_internal_get__filteredStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filteredStates;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaComputer_ComputerState>* const& GorillaNetworking::GorillaComputer::__cordl_internal_get__filteredStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filteredStates;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__filteredStates(::System::Collections::Generic::List_1<::GlobalNamespace::GorillaComputer_ComputerState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filteredStates = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaComputer_StateOrderItem*>*& GorillaNetworking::GorillaComputer::__cordl_internal_get__activeOrderList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeOrderList;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaComputer_StateOrderItem*>* const& GorillaNetworking::GorillaComputer::__cordl_internal_get__activeOrderList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeOrderList;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__activeOrderList(::System::Collections::Generic::List_1<::GorillaNetworking::GorillaComputer_StateOrderItem*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeOrderList = value;
}
constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::GorillaComputer_ComputerState>*& GorillaNetworking::GorillaComputer::__cordl_internal_get_stateStack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStack;
}
constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::GorillaComputer_ComputerState>* const& GorillaNetworking::GorillaComputer::__cordl_internal_get_stateStack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStack;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_stateStack(::System::Collections::Generic::Stack_1<::GlobalNamespace::GorillaComputer_ComputerState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateStack = value;
}
constexpr ::GlobalNamespace::GorillaComputer_ComputerState& GorillaNetworking::GorillaComputer::__cordl_internal_get_currentComputerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentComputerState;
}
constexpr ::GlobalNamespace::GorillaComputer_ComputerState const& GorillaNetworking::GorillaComputer::__cordl_internal_get_currentComputerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentComputerState;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_currentComputerState(::GlobalNamespace::GorillaComputer_ComputerState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentComputerState = value;
}
constexpr ::GlobalNamespace::GorillaComputer_ComputerState& GorillaNetworking::GorillaComputer::__cordl_internal_get_previousComputerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousComputerState;
}
constexpr ::GlobalNamespace::GorillaComputer_ComputerState const& GorillaNetworking::GorillaComputer::__cordl_internal_get_previousComputerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousComputerState;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_previousComputerState(::GlobalNamespace::GorillaComputer_ComputerState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousComputerState = value;
}
constexpr int32_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_currentStateIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentStateIndex;
}
constexpr int32_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_currentStateIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentStateIndex;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_currentStateIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentStateIndex = value;
}
constexpr int32_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_usersBanned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usersBanned;
}
constexpr int32_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_usersBanned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usersBanned;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_usersBanned(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usersBanned = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_redValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redValue;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_redValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redValue;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_redValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redValue = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_redText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redText;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_redText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redText;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_redText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redText = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_blueValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueValue;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_blueValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueValue;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_blueValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blueValue = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_blueText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueText;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_blueText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueText;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_blueText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blueText = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_greenValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenValue;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_greenValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenValue;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_greenValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greenValue = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_greenText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenText;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_greenText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenText;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_greenText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greenText = value;
}
constexpr int32_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_colorCursorLine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorCursorLine;
}
constexpr int32_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_colorCursorLine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorCursorLine;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_colorCursorLine(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorCursorLine = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_warningConfirmationInputString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningConfirmationInputString;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_warningConfirmationInputString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningConfirmationInputString;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_warningConfirmationInputString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warningConfirmationInputString = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_displaySupport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displaySupport;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_displaySupport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displaySupport;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_displaySupport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displaySupport = value;
}
constexpr ::ArrayW<::StringW>& GorillaNetworking::GorillaComputer::__cordl_internal_get_exactOneWeek()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exactOneWeek;
}
constexpr ::ArrayW<::StringW> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_exactOneWeek() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exactOneWeek;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_exactOneWeek(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exactOneWeek = value;
}
constexpr ::ArrayW<::StringW>& GorillaNetworking::GorillaComputer::__cordl_internal_get_anywhereOneWeek()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anywhereOneWeek;
}
constexpr ::ArrayW<::StringW> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_anywhereOneWeek() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anywhereOneWeek;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_anywhereOneWeek(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anywhereOneWeek = value;
}
constexpr ::ArrayW<::StringW>& GorillaNetworking::GorillaComputer::__cordl_internal_get_anywhereTwoWeek()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anywhereTwoWeek;
}
constexpr ::ArrayW<::StringW> const& GorillaNetworking::GorillaComputer::__cordl_internal_get_anywhereTwoWeek() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anywhereTwoWeek;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_anywhereTwoWeek(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anywhereTwoWeek = value;
}
constexpr ::GlobalNamespace::GorillaComputer_RedemptionResult& GorillaNetworking::GorillaComputer::__cordl_internal_get_redemptionResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redemptionResult;
}
constexpr ::GlobalNamespace::GorillaComputer_RedemptionResult const& GorillaNetworking::GorillaComputer::__cordl_internal_get_redemptionResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redemptionResult;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_redemptionResult(::GlobalNamespace::GorillaComputer_RedemptionResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redemptionResult = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_redemptionCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redemptionCode;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_redemptionCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redemptionCode;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_redemptionCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redemptionCode = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_playerInVirtualStump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerInVirtualStump;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_playerInVirtualStump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerInVirtualStump;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_playerInVirtualStump(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerInVirtualStump = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_virtualStumpRoomPrepend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualStumpRoomPrepend;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_virtualStumpRoomPrepend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualStumpRoomPrepend;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_virtualStumpRoomPrepend(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___virtualStumpRoomPrepend = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer::__cordl_internal_get_virtualStumpRoomModePrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualStumpRoomModePrefix;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer::__cordl_internal_get_virtualStumpRoomModePrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualStumpRoomModePrefix;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_virtualStumpRoomModePrefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___virtualStumpRoomModePrefix = value;
}
constexpr ::UnityEngine::WaitForSeconds*& GorillaNetworking::GorillaComputer::__cordl_internal_get_waitOneSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitOneSecond;
}
constexpr ::UnityEngine::WaitForSeconds* const& GorillaNetworking::GorillaComputer::__cordl_internal_get_waitOneSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitOneSecond;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_waitOneSecond(::UnityEngine::WaitForSeconds*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitOneSecond = value;
}
constexpr ::UnityEngine::Coroutine*& GorillaNetworking::GorillaComputer::__cordl_internal_get_LoadingRoutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadingRoutine;
}
constexpr ::UnityEngine::Coroutine* const& GorillaNetworking::GorillaComputer::__cordl_internal_get_LoadingRoutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadingRoutine;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_LoadingRoutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LoadingRoutine = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaNetworking::GorillaComputer::__cordl_internal_get_topTroops()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topTroops;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaNetworking::GorillaComputer::__cordl_internal_get_topTroops() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topTroops;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_topTroops(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topTroops = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_hasRequestedInitialTroopPopulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasRequestedInitialTroopPopulation;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_hasRequestedInitialTroopPopulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasRequestedInitialTroopPopulation;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_hasRequestedInitialTroopPopulation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasRequestedInitialTroopPopulation = value;
}
constexpr int32_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_currentTroopPopulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTroopPopulation;
}
constexpr int32_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_currentTroopPopulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTroopPopulation;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_currentTroopPopulation(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTroopPopulation = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaNetworking::GorillaComputer::__cordl_internal_get_topVstumpMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topVstumpMaps;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaNetworking::GorillaComputer::__cordl_internal_get_topVstumpMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topVstumpMaps;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_topVstumpMaps(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topVstumpMaps = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get__NametagsEnabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NametagsEnabled_k__BackingField;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get__NametagsEnabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NametagsEnabled_k__BackingField;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__NametagsEnabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NametagsEnabled_k__BackingField = value;
}
constexpr ::System::Nullable_1<::System::DateTimeOffset>& GorillaNetworking::GorillaComputer::__cordl_internal_get__RedemptionRestrictionTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RedemptionRestrictionTime_k__BackingField;
}
constexpr ::System::Nullable_1<::System::DateTimeOffset> const& GorillaNetworking::GorillaComputer::__cordl_internal_get__RedemptionRestrictionTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RedemptionRestrictionTime_k__BackingField;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__RedemptionRestrictionTime_k__BackingField(::System::Nullable_1<::System::DateTimeOffset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RedemptionRestrictionTime_k__BackingField = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_lastCheckedWifi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCheckedWifi;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_lastCheckedWifi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCheckedWifi;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_lastCheckedWifi(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCheckedWifi = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_checkIfDisconnectedSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkIfDisconnectedSeconds;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_checkIfDisconnectedSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkIfDisconnectedSeconds;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_checkIfDisconnectedSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkIfDisconnectedSeconds = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_checkIfConnectedSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkIfConnectedSeconds;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_checkIfConnectedSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkIfConnectedSeconds;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_checkIfConnectedSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkIfConnectedSeconds = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get_didInitializeGameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didInitializeGameMode;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get_didInitializeGameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didInitializeGameMode;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_didInitializeGameMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___didInitializeGameMode = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_troopPopulationCheckCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___troopPopulationCheckCooldown;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_troopPopulationCheckCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___troopPopulationCheckCooldown;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_troopPopulationCheckCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___troopPopulationCheckCooldown = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get_nextPopulationCheckTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPopulationCheckTime;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get_nextPopulationCheckTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPopulationCheckTime;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_nextPopulationCheckTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPopulationCheckTime = value;
}
constexpr ::System::Action*& GorillaNetworking::GorillaComputer::__cordl_internal_get_OnServerTimeUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnServerTimeUpdated;
}
constexpr ::System::Action* const& GorillaNetworking::GorillaComputer::__cordl_internal_get_OnServerTimeUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnServerTimeUpdated;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set_OnServerTimeUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnServerTimeUpdated = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get__updateAttemptCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateAttemptCooldown;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get__updateAttemptCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateAttemptCooldown;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__updateAttemptCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateAttemptCooldown = value;
}
constexpr float_t& GorillaNetworking::GorillaComputer::__cordl_internal_get__nextUpdateAttemptTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextUpdateAttemptTime;
}
constexpr float_t const& GorillaNetworking::GorillaComputer::__cordl_internal_get__nextUpdateAttemptTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextUpdateAttemptTime;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__nextUpdateAttemptTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextUpdateAttemptTime = value;
}
constexpr bool& GorillaNetworking::GorillaComputer::__cordl_internal_get__waitingForUpdatedSession()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitingForUpdatedSession;
}
constexpr bool const& GorillaNetworking::GorillaComputer::__cordl_internal_get__waitingForUpdatedSession() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitingForUpdatedSession;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__waitingForUpdatedSession(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waitingForUpdatedSession = value;
}
constexpr ::GlobalNamespace::GorillaComputer_EKidScreenState& GorillaNetworking::GorillaComputer::__cordl_internal_get__currentScreentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentScreentState;
}
constexpr ::GlobalNamespace::GorillaComputer_EKidScreenState const& GorillaNetworking::GorillaComputer::__cordl_internal_get__currentScreentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentScreentState;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__currentScreentState(::GlobalNamespace::GorillaComputer_EKidScreenState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentScreentState = value;
}
constexpr ::ArrayW<::StringW>& GorillaNetworking::GorillaComputer::__cordl_internal_get__interestedPermissionNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interestedPermissionNames;
}
constexpr ::ArrayW<::StringW> const& GorillaNetworking::GorillaComputer::__cordl_internal_get__interestedPermissionNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interestedPermissionNames;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__interestedPermissionNames(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interestedPermissionNames = value;
}
constexpr ::System::Text::StringBuilder*& GorillaNetworking::GorillaComputer::__cordl_internal_get__languagesDisplaySB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____languagesDisplaySB;
}
constexpr ::System::Text::StringBuilder* const& GorillaNetworking::GorillaComputer::__cordl_internal_get__languagesDisplaySB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____languagesDisplaySB;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__languagesDisplaySB(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____languagesDisplaySB = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale>& GorillaNetworking::GorillaComputer::__cordl_internal_get__previousLocalisationSetting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousLocalisationSetting;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& GorillaNetworking::GorillaComputer::__cordl_internal_get__previousLocalisationSetting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousLocalisationSetting;
}
constexpr void GorillaNetworking::GorillaComputer::__cordl_internal_set__previousLocalisationSetting(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousLocalisationSetting = value;
}
inline void GorillaNetworking::GorillaComputer::setStaticF_instance(::UnityW<::GorillaNetworking::GorillaComputer>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaNetworking::GorillaComputer>, "instance", ::GorillaNetworking::GorillaComputer*>(std::forward<::UnityW<::GorillaNetworking::GorillaComputer>>(value));
}
inline ::UnityW<::GorillaNetworking::GorillaComputer> GorillaNetworking::GorillaComputer::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaNetworking::GorillaComputer>, "instance", ::GorillaNetworking::GorillaComputer*>();
}
inline void GorillaNetworking::GorillaComputer::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GorillaNetworking::GorillaComputer*>(std::forward<bool>(value));
}
inline bool GorillaNetworking::GorillaComputer::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GorillaNetworking::GorillaComputer*>();
}
inline void GorillaNetworking::GorillaComputer::setStaticF_onNametagSettingChangedAction(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "onNametagSettingChangedAction", ::GorillaNetworking::GorillaComputer*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* GorillaNetworking::GorillaComputer::getStaticF_onNametagSettingChangedAction()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "onNametagSettingChangedAction", ::GorillaNetworking::GorillaComputer*>();
}
inline void GorillaNetworking::GorillaComputer::setStaticF_sessionCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "sessionCount", ::GorillaNetworking::GorillaComputer*>(std::forward<int32_t>(value));
}
inline int32_t GorillaNetworking::GorillaComputer::getStaticF_sessionCount()  {
return ::cordl_internals::getStaticField<int32_t, "sessionCount", ::GorillaNetworking::GorillaComputer*>();
}
inline ::StringW GorillaNetworking::GorillaComputer::get_versionMismatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_versionMismatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::GorillaComputer::get_unableToConnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_unableToConnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::DateTime GorillaNetworking::GorillaComputer::GetServerTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetServerTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::AddSeverTime(int32_t  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"AddSeverTime", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline ::ArrayW<::StringW> GorillaNetworking::GorillaComputer::get_allowedMapsToJoin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_allowedMapsToJoin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::set_allowedMapsToJoin(::ArrayW<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"set_allowedMapsToJoin", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GorillaNetworking::GorillaComputer::get_version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::set_version(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"set_version", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GorillaNetworking::GorillaComputer::get_VStumpRoomPrepend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_VStumpRoomPrepend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaComputer::IsValidVStumpModePrefix(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"IsValidVStumpModePrefix", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool GorillaNetworking::GorillaComputer::IsVStumpRoomName(::StringW  roomName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"IsVStumpRoomName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, roomName);
}
inline ::StringW GorillaNetworking::GorillaComputer::get_VStumpRoomFullPrepend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_VStumpRoomFullPrepend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::SetVStumpRoomModePrefix(::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetVStumpRoomModePrefix", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix);
}
inline ::StringW GorillaNetworking::GorillaComputer::StripVStumpRoomPrefix(::StringW  roomName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"StripVStumpRoomPrefix", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, roomName);
}
inline ::StringW GorillaNetworking::GorillaComputer::GetVStumpRoomDisplayName(::StringW  roomName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetVStumpRoomDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, roomName);
}
inline ::GlobalNamespace::GorillaComputer_ComputerState GorillaNetworking::GorillaComputer::get_currentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_currentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaComputer_ComputerState>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::GorillaComputer::get_NameTagPlayerPref()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_NameTagPlayerPref", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaComputer::get_NametagsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_NametagsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::set_NametagsEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"set_NametagsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GorillaComputer_RedemptionResult GorillaNetworking::GorillaComputer::get_RedemptionStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_RedemptionStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaComputer_RedemptionResult>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::set_RedemptionStatus(::GlobalNamespace::GorillaComputer_RedemptionResult  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"set_RedemptionStatus", {}, {::i2c::type_of<::GlobalNamespace::GorillaComputer_RedemptionResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GorillaNetworking::GorillaComputer::get_RedemptionCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_RedemptionCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::set_RedemptionCode(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"set_RedemptionCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::System::DateTimeOffset> GorillaNetworking::GorillaComputer::get_RedemptionRestrictionTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"get_RedemptionRestrictionTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::set_RedemptionRestrictionTime(::System::Nullable_1<::System::DateTimeOffset>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"set_RedemptionRestrictionTime", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::GorillaComputer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::Initialise()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"Initialise", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitialiseRoomScreens()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitialiseRoomScreens", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitialiseStrings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitialiseStrings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitialiseAllRoomStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitialiseAllRoomStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeStartupState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeStartupState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeRoomState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeRoomState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeColorState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeColorState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeNameState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeNameState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeTurnState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeTurnState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeMicState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeMicState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeAutoMuteState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeAutoMuteState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeQueueState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeQueueState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeGroupState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeGroupState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeTroopState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeTroopState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::GorillaComputer::HandleInitialTroopQueueState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"HandleInitialTroopQueueState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeVoiceState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeVoiceState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeGameMode(::StringW  gameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeGameMode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameMode);
}
inline void GorillaNetworking::GorillaComputer::InitializeGameMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeGameMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeCreditsState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeCreditsState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeTimeState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeTimeState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeSupportState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeSupportState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeVisualsState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeVisualsState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitializeRedeemState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeRedeemState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaComputer::CheckInternetConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckInternetConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::OnConnectedToMasterStuff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnConnectedToMasterStuff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::OnReturnCurrentVersion(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnReturnCurrentVersion", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::GorillaComputer::PressButton(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"PressButton", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::OnModeSelectButtonPress(::StringW  gameMode, bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnModeSelectButtonPress", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameMode, leftHand);
}
inline void GorillaNetworking::GorillaComputer::SetGameModeWithoutButton(::StringW  gameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetGameModeWithoutButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameMode);
}
inline void GorillaNetworking::GorillaComputer::RegisterPrimaryJoinTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger*  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RegisterPrimaryJoinTrigger", {}, {::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger);
}
inline ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> GorillaNetworking::GorillaComputer::GetSelectedMapJoinTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetSelectedMapJoinTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>(this, ___internal_method);
}
inline ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> GorillaNetworking::GorillaComputer::GetJoinTriggerForZone(::StringW  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetJoinTriggerForZone", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>(this, ___internal_method, zone);
}
inline ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> GorillaNetworking::GorillaComputer::GetJoinTriggerFromFullGameModeString(::StringW  gameModeString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetJoinTriggerFromFullGameModeString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>(this, ___internal_method, gameModeString);
}
inline void GorillaNetworking::GorillaComputer::OnGroupJoinButtonPress(int32_t  mapJoinIndex, ::GlobalNamespace::GorillaFriendCollider*  chosenFriendJoinCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnGroupJoinButtonPress", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapJoinIndex, chosenFriendJoinCollider);
}
inline void GorillaNetworking::GorillaComputer::CompQueueUnlockButtonPress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CompQueueUnlockButtonPress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::SwitchState(::GlobalNamespace::GorillaComputer_ComputerState  newState, bool  clearStack)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SwitchState", {}, {::i2c::type_of<::GlobalNamespace::GorillaComputer_ComputerState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, clearStack);
}
inline void GorillaNetworking::GorillaComputer::PopState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"PopState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::SwitchToWarningState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SwitchToWarningState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::SwitchToLoadingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SwitchToLoadingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::ProcessStartupState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessStartupState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::ProcessColorState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessColorState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::ProcessNameState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessNameState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::ProcessRoomState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessRoomState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::DisconnectAfterDelay(float_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"DisconnectAfterDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds);
}
inline void GorillaNetworking::GorillaComputer::ProcessTurnState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessTurnState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::ProcessMicState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessMicState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::ProcessQueueState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessQueueState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::JoinTroop(::StringW  newTroopName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"JoinTroop", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTroopName);
}
inline void GorillaNetworking::GorillaComputer::JoinTroopQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"JoinTroopQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::RequestTroopPopulation(bool  forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RequestTroopPopulation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceUpdate);
}
inline void GorillaNetworking::GorillaComputer::JoinDefaultQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"JoinDefaultQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::LeaveTroop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"LeaveTroop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::GorillaComputer::GetCurrentTroop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetCurrentTroop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t GorillaNetworking::GorillaComputer::GetCurrentTroopPopulation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetCurrentTroopPopulation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::JoinQueue(::StringW  queueName, bool  isTroopQueue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"JoinQueue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, queueName, isTroopQueue);
}
inline void GorillaNetworking::GorillaComputer::ProcessGroupState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessGroupState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::SetGroupMapJoin(::StringW  groupMap, int32_t  groupMapIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetGroupMapJoin", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupMap, groupMapIndex);
}
inline void GorillaNetworking::GorillaComputer::ProcessTroopState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessTroopState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline bool GorillaNetworking::GorillaComputer::IsValidTroopName(::StringW  troop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"IsValidTroopName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, troop);
}
inline ::StringW GorillaNetworking::GorillaComputer::GetQueueNameForTroop(::StringW  troop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetQueueNameForTroop", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, troop);
}
inline void GorillaNetworking::GorillaComputer::ProcessVoiceState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessVoiceState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::ProcessAutoMuteState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessAutoMuteState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::ProcessVisualsState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessVisualsState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::ProcessCreditsState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessCreditsState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::ProcessSupportState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessSupportState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::ProcessRedemptionState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessRedemptionState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::ProcessNameWarningState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessNameWarningState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::UpdateScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UpdateScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::LoadingScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"LoadingScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::NameWarningScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"NameWarningScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::SupportScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SupportScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::TimeScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"TimeScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::CreditsScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CreditsScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::VisualsScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"VisualsScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::VoiceScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"VoiceScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::AutomuteScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"AutomuteScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::GroupScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GroupScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::MicScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"MicScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::QueueScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"QueueScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::TroopScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"TroopScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::TurnScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"TurnScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::NameScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"NameScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::StartupScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"StartupScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::ColourScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ColourScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::RoomScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RoomScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::RedemptionScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RedemptionScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::LimitedOnlineFunctionalityScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"LimitedOnlineFunctionalityScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::UpdateGameModeText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UpdateGameModeText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::UpdateFunctionScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UpdateFunctionScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::CheckAutoBanListForRoomName(::StringW  nameToCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckAutoBanListForRoomName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameToCheck);
}
inline void GorillaNetworking::GorillaComputer::CheckAutoBanListForPlayerName(::StringW  nameToCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckAutoBanListForPlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameToCheck);
}
inline void GorillaNetworking::GorillaComputer::CheckAutoBanListForTroopName(::StringW  nameToCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckAutoBanListForTroopName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameToCheck);
}
inline void GorillaNetworking::GorillaComputer::CheckForBadRoomName(::StringW  nameToCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckForBadRoomName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameToCheck);
}
inline void GorillaNetworking::GorillaComputer::CheckForBadPlayerName(::StringW  nameToCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckForBadPlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameToCheck);
}
inline void GorillaNetworking::GorillaComputer::CheckForBadTroopName(::StringW  nameToCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckForBadTroopName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameToCheck);
}
inline void GorillaNetworking::GorillaComputer::OnRoomNameChecked(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnRoomNameChecked", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::GorillaComputer::OnPlayerNameChecked(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnPlayerNameChecked", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::GorillaComputer::OnTroopNameChecked(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnTroopNameChecked", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::GorillaComputer::OnErrorNameCheck(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnErrorNameCheck", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline bool GorillaNetworking::GorillaComputer::CheckAutoBanListForName(::StringW  nameToCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckAutoBanListForName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nameToCheck);
}
inline void GorillaNetworking::GorillaComputer::UpdateColor(float_t  red, float_t  green, float_t  blue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UpdateColor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, red, green, blue);
}
inline void GorillaNetworking::GorillaComputer::UpdateFailureText(::StringW  failMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UpdateFailureText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, failMessage);
}
inline void GorillaNetworking::GorillaComputer::RestoreFromFailureState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RestoreFromFailureState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::GeneralFailureMessage(::StringW  failMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GeneralFailureMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, failMessage);
}
inline void GorillaNetworking::GorillaComputer::OnErrorShared(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnErrorShared", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error);
}
inline void GorillaNetworking::GorillaComputer::DecreaseState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"DecreaseState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::IncreaseState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"IncreaseState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaComputer_ComputerState GorillaNetworking::GorillaComputer::GetState(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaComputer_ComputerState>(this, ___internal_method, index);
}
inline int32_t GorillaNetworking::GorillaComputer::GetStateIndex(::GlobalNamespace::GorillaComputer_ComputerState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetStateIndex", {}, {::i2c::type_of<::GlobalNamespace::GorillaComputer_ComputerState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, state);
}
inline ::StringW GorillaNetworking::GorillaComputer::GetOrderListForScreen(::GlobalNamespace::GorillaComputer_ComputerState  currentState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetOrderListForScreen", {}, {::i2c::type_of<::GlobalNamespace::GorillaComputer_ComputerState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, currentState);
}
inline void GorillaNetworking::GorillaComputer::GetCurrentTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetCurrentTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::OnGetTimeSuccess(::PlayFab::ClientModels::GetTimeResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnGetTimeSuccess", {}, {::i2c::type_of<::PlayFab::ClientModels::GetTimeResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::GorillaComputer::OnGetTimeFailure(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnGetTimeFailure", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaNetworking::GorillaComputer::PlayerCountChangedCallback(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"PlayerCountChangedCallback", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GorillaNetworking::GorillaComputer::OnFirstJoinedRoom_IncrementSessionCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnFirstJoinedRoom_IncrementSessionCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::SetNameBySafety(bool  isSafety)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetNameBySafety", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isSafety);
}
inline void GorillaNetworking::GorillaComputer::SetLocalNameTagText(::StringW  newName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetLocalNameTagText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newName);
}
inline void GorillaNetworking::GorillaComputer::SetComputerSettingsBySafety(bool  isSafety, ::ArrayW<::GlobalNamespace::GorillaComputer_ComputerState>  toFilterOut, bool  shouldHide)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetComputerSettingsBySafety", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::GorillaComputer_ComputerState>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isSafety, toFilterOut, shouldHide);
}
inline void GorillaNetworking::GorillaComputer::KID_SetVoiceChatSettingOnStart(bool  voiceChatEnabled, ::GlobalNamespace::Permission_ManagedByEnum  managedBy, bool  hasOptedInPreviously)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"KID_SetVoiceChatSettingOnStart", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Permission_ManagedByEnum>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voiceChatEnabled, managedBy, hasOptedInPreviously);
}
inline void GorillaNetworking::GorillaComputer::SetVoice(bool  setting, bool  saveSetting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetVoice", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setting, saveSetting);
}
inline bool GorillaNetworking::GorillaComputer::CheckVoiceChatEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"CheckVoiceChatEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::SetVoiceChatBySafety(bool  voiceChatEnabled, ::GlobalNamespace::Permission_ManagedByEnum  managedBy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetVoiceChatBySafety", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Permission_ManagedByEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voiceChatEnabled, managedBy);
}
inline void GorillaNetworking::GorillaComputer::SetNametagSetting(bool  setting, ::GlobalNamespace::Permission_ManagedByEnum  managedBy, bool  hasOptedInPreviously)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetNametagSetting", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Permission_ManagedByEnum>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setting, managedBy, hasOptedInPreviously);
}
inline void GorillaNetworking::GorillaComputer::RegisterOnNametagSettingChanged(::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RegisterOnNametagSettingChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GorillaNetworking::GorillaComputer::UnregisterOnNametagSettingChanged(::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UnregisterOnNametagSettingChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GorillaNetworking::GorillaComputer::UpdateNametagSetting(bool  newSettingValue, bool  saveSetting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UpdateNametagSetting", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSettingValue, saveSetting);
}
inline void GorillaNetworking::GorillaComputer::SetInVirtualStump(bool  inVirtualStump)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetInVirtualStump", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVirtualStump);
}
inline bool GorillaNetworking::GorillaComputer::IsPlayerInVirtualStump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"IsPlayerInVirtualStump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::SetLimitOnlineScreens(bool  isLimited)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"SetLimitOnlineScreens", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLimited);
}
inline void GorillaNetworking::GorillaComputer::InitializeKIdState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitializeKIdState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::UpdateKidState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UpdateKidState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::RequestUpdatedPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RequestUpdatedPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::UpdateSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"UpdateSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::OnSessionUpdate_GorillaComputer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnSessionUpdate_GorillaComputer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::ProcessScreen_SetupKID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessScreen_SetupKID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaComputer::GuardianConsentMessage(::StringW  setupKIDButtonName, ::StringW  featureDescription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GuardianConsentMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, setupKIDButtonName, featureDescription);
}
inline void GorillaNetworking::GorillaComputer::ProhibitedMessage(::StringW  verb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProhibitedMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verb);
}
inline void GorillaNetworking::GorillaComputer::RoomScreen_Permission()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RoomScreen_Permission", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::RoomScreen_KIdProhibited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RoomScreen_KIdProhibited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::VoiceScreen_Permission()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"VoiceScreen_Permission", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::VoiceScreen_KIdProhibited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"VoiceScreen_KIdProhibited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::MicScreen_Permission()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"MicScreen_Permission", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::MicScreen_KIdProhibited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"MicScreen_KIdProhibited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::NameScreen_Permission()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"NameScreen_Permission", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::NameScreen_KIdProhibited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"NameScreen_KIdProhibited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::OnKIDSessionUpdated_CustomNicknames(bool  showCustomNames, ::GlobalNamespace::Permission_ManagedByEnum  managedBy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnKIDSessionUpdated_CustomNicknames", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Permission_ManagedByEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, showCustomNames, managedBy);
}
inline void GorillaNetworking::GorillaComputer::TroopScreen_Permission()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"TroopScreen_Permission", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::TroopScreen_KIdProhibited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"TroopScreen_KIdProhibited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::ProcessKIdState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessKIdState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::KIdScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"KIdScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::KIdScreen_DisplayPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"KIdScreen_DisplayPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::GorillaComputer::GetLocalisedLanguageScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetLocalisedLanguageScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::GetLangaugesList(::by_ref<::StringW>  langStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetLangaugesList", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, langStr);
}
inline int32_t GorillaNetworking::GorillaComputer::GetRemainingChars(::StringW  value, int32_t  maxLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetRemainingChars", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, maxLength);
}
inline ::StringW GorillaNetworking::GorillaComputer::GetLanguageScreenLocalisation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"GetLanguageScreenLocalisation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::InitialiseLanguageScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"InitialiseLanguageScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::LanguageScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"LanguageScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::ProcessLanguageState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"ProcessLanguageState", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaNetworking::GorillaComputer::OnLanguageChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"OnLanguageChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::RefreshFunctionNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"RefreshFunctionNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::_Initialise_b__340_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"<Initialise>b__340_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer::_RequestTroopPopulation_b__399_0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"<RequestTroopPopulation>b__399_0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::GorillaComputer::_RequestTroopPopulation_b__399_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"<RequestTroopPopulation>b__399_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaNetworking::GorillaComputer::_SetComputerSettingsBySafety_b__469_0(::GorillaNetworking::GorillaComputer_StateOrderItem*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"<SetComputerSettingsBySafety>b__469_0", {}, {::i2c::type_of<::GorillaNetworking::GorillaComputer_StateOrderItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void GorillaNetworking::GorillaComputer::_RefreshFunctionNames_b__525_0(::GorillaNetworking::GorillaComputer_StateOrderItem*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer*>(),
                        {"<RefreshFunctionNames>b__525_0", {}, {::i2c::type_of<::GorillaNetworking::GorillaComputer_StateOrderItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::GorillaNetworking::GorillaComputer* GorillaNetworking::GorillaComputer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaComputer*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GorillaNetworking::GorillaComputer::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GorillaNetworking::GorillaComputer::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaComputer::GorillaComputer()   {
}
constexpr ::GorillaGameModes::GameModeType  GorillaNetworking::GorillaComputer::k_defaultGameMode{static_cast<int32_t>(0xb)};
constexpr ::GorillaGameModes::GameModeType  GorillaNetworking::GorillaComputer::k_noobGameMode{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::*)(int32_t)>(&::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c872e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::*)()>(&::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c87308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::*)()>(&::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::MoveNext)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5c8730c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::*)()>(&::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c87498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::*)()>(&::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c874a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::*)()>(&::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c874d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaNetworking::GorillaComputer>& GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::GorillaComputer> const& GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::GorillaComputer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354* GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354::GorillaComputer__HandleInitialTroopQueueState_d__354()   {
}
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer___c__DisplayClass459_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer___c__DisplayClass459_0::*)()>(&::GorillaNetworking::GorillaComputer___c__DisplayClass459_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c86fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer___c__DisplayClass459_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer___c__DisplayClass459_0._GetStateIndex_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaComputer___c__DisplayClass459_0::*)(::GorillaNetworking::GorillaComputer_StateOrderItem*)>(&::GorillaNetworking::GorillaComputer___c__DisplayClass459_0::_GetStateIndex_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c86fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer___c__DisplayClass459_0*>(),
                        {"<GetStateIndex>b__0", {}, {::i2c::type_of<::GorillaNetworking::GorillaComputer_StateOrderItem*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GorillaComputer_ComputerState& GorillaNetworking::GorillaComputer___c__DisplayClass459_0::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GorillaComputer_ComputerState const& GorillaNetworking::GorillaComputer___c__DisplayClass459_0::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GorillaNetworking::GorillaComputer___c__DisplayClass459_0::__cordl_internal_set_state(::GlobalNamespace::GorillaComputer_ComputerState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
inline void GorillaNetworking::GorillaComputer___c__DisplayClass459_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer___c__DisplayClass459_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaComputer___c__DisplayClass459_0::_GetStateIndex_b__0(::GorillaNetworking::GorillaComputer_StateOrderItem*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer___c__DisplayClass459_0*>(),
                        {"<GetStateIndex>b__0", {}, {::i2c::type_of<::GorillaNetworking::GorillaComputer_StateOrderItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
inline ::GorillaNetworking::GorillaComputer___c__DisplayClass459_0* GorillaNetworking::GorillaComputer___c__DisplayClass459_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaComputer___c__DisplayClass459_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaComputer___c__DisplayClass459_0::GorillaComputer___c__DisplayClass459_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer___c__DisplayClass418_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer___c__DisplayClass418_0::*)()>(&::GorillaNetworking::GorillaComputer___c__DisplayClass418_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c86d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer___c__DisplayClass418_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer___c__DisplayClass418_0._LoadingScreen_g__LoadingScreenLocal_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::GorillaComputer___c__DisplayClass418_0::*)()>(&::GorillaNetworking::GorillaComputer___c__DisplayClass418_0::_LoadingScreen_g__LoadingScreenLocal_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c86d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer___c__DisplayClass418_0*>(),
                        {"<LoadingScreen>g__LoadingScreenLocal|0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaNetworking::GorillaComputer>& GorillaNetworking::GorillaComputer___c__DisplayClass418_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::GorillaComputer> const& GorillaNetworking::GorillaComputer___c__DisplayClass418_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::GorillaComputer___c__DisplayClass418_0::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::GorillaComputer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer___c__DisplayClass418_0::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer___c__DisplayClass418_0::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void GorillaNetworking::GorillaComputer___c__DisplayClass418_0::__cordl_internal_set_result(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
inline void GorillaNetworking::GorillaComputer___c__DisplayClass418_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer___c__DisplayClass418_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::GorillaComputer___c__DisplayClass418_0::_LoadingScreen_g__LoadingScreenLocal_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer___c__DisplayClass418_0*>(),
                        {"<LoadingScreen>g__LoadingScreenLocal|0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GorillaNetworking::GorillaComputer___c__DisplayClass418_0* GorillaNetworking::GorillaComputer___c__DisplayClass418_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaComputer___c__DisplayClass418_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaComputer___c__DisplayClass418_0::GorillaComputer___c__DisplayClass418_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::*)(int32_t)>(&::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c86dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::*)()>(&::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c86de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::*)()>(&::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c86dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::*)()>(&::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c86f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::*)()>(&::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c86f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::*)()>(&::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c86fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GorillaNetworking::GorillaComputer___c__DisplayClass418_0*& GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::GorillaNetworking::GorillaComputer___c__DisplayClass418_0* const& GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::__cordl_internal_set___4__this(::GorillaNetworking::GorillaComputer___c__DisplayClass418_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::__cordl_internal_get__dotsCount_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dotsCount_5__2;
}
constexpr int32_t const& GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::__cordl_internal_get__dotsCount_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dotsCount_5__2;
}
constexpr void GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::__cordl_internal_set__dotsCount_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dotsCount_5__2 = value;
}
inline void GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d* GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d()   {
}
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer___c::*)()>(&::GorillaNetworking::GorillaComputer___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c86d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer___c._CheckAutoBanListForName_b__449_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaComputer___c::*)(char16_t)>(&::GorillaNetworking::GorillaComputer___c::_CheckAutoBanListForName_b__449_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c86d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer___c*>(),
                        {"<CheckAutoBanListForName>b__449_0", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaNetworking::GorillaComputer___c::setStaticF___9(::GorillaNetworking::GorillaComputer___c*  value)  {
::cordl_internals::setStaticField<::GorillaNetworking::GorillaComputer___c*, "<>9", ::GorillaNetworking::GorillaComputer___c*>(std::forward<::GorillaNetworking::GorillaComputer___c*>(value));
}
inline ::GorillaNetworking::GorillaComputer___c* GorillaNetworking::GorillaComputer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaNetworking::GorillaComputer___c*, "<>9", ::GorillaNetworking::GorillaComputer___c*>();
}
inline void GorillaNetworking::GorillaComputer___c::setStaticF___9__449_0(::System::Predicate_1<char16_t>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<char16_t>*, "<>9__449_0", ::GorillaNetworking::GorillaComputer___c*>(std::forward<::System::Predicate_1<char16_t>*>(value));
}
inline ::System::Predicate_1<char16_t>* GorillaNetworking::GorillaComputer___c::getStaticF___9__449_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<char16_t>*, "<>9__449_0", ::GorillaNetworking::GorillaComputer___c*>();
}
inline void GorillaNetworking::GorillaComputer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaComputer___c::_CheckAutoBanListForName_b__449_0(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer___c*>(),
                        {"<CheckAutoBanListForName>b__449_0", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::GorillaNetworking::GorillaComputer___c* GorillaNetworking::GorillaComputer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaComputer___c*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaComputer___c::GorillaComputer___c()   {
}
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer_StateOrderItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer_StateOrderItem::*)()>(&::GorillaNetworking::GorillaComputer_StateOrderItem::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c86790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer_StateOrderItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer_StateOrderItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer_StateOrderItem::*)(::GlobalNamespace::GorillaComputer_ComputerState)>(&::GorillaNetworking::GorillaComputer_StateOrderItem::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c867f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer_StateOrderItem*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GorillaComputer_ComputerState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer_StateOrderItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaComputer_StateOrderItem::*)(::GlobalNamespace::GorillaComputer_ComputerState, ::StringW)>(&::GorillaNetworking::GorillaComputer_StateOrderItem::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c86874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer_StateOrderItem*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GorillaComputer_ComputerState>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer_StateOrderItem.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaComputer_StateOrderItem::*)()>(&::GorillaNetworking::GorillaComputer_StateOrderItem::GetName)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5c86904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer_StateOrderItem*>(),
                        {"GetName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaComputer_StateOrderItem.GetPreLocalisedName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaComputer_StateOrderItem::*)()>(&::GorillaNetworking::GorillaComputer_StateOrderItem::GetPreLocalisedName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c86c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer_StateOrderItem*>(),
                        {"GetPreLocalisedName", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GorillaComputer_ComputerState& GorillaNetworking::GorillaComputer_StateOrderItem::__cordl_internal_get_State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___State;
}
constexpr ::GlobalNamespace::GorillaComputer_ComputerState const& GorillaNetworking::GorillaComputer_StateOrderItem::__cordl_internal_get_State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___State;
}
constexpr void GorillaNetworking::GorillaComputer_StateOrderItem::__cordl_internal_set_State(::GlobalNamespace::GorillaComputer_ComputerState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___State = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer_StateOrderItem::__cordl_internal_get_OverrideName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideName;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer_StateOrderItem::__cordl_internal_get_OverrideName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideName;
}
constexpr void GorillaNetworking::GorillaComputer_StateOrderItem::__cordl_internal_set_OverrideName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverrideName = value;
}
constexpr ::UnityEngine::Localization::LocalizedString*& GorillaNetworking::GorillaComputer_StateOrderItem::__cordl_internal_get_StringReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StringReference;
}
constexpr ::UnityEngine::Localization::LocalizedString* const& GorillaNetworking::GorillaComputer_StateOrderItem::__cordl_internal_get_StringReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StringReference;
}
constexpr void GorillaNetworking::GorillaComputer_StateOrderItem::__cordl_internal_set_StringReference(::UnityEngine::Localization::LocalizedString*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StringReference = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale>& GorillaNetworking::GorillaComputer_StateOrderItem::__cordl_internal_get__previousLocale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousLocale;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& GorillaNetworking::GorillaComputer_StateOrderItem::__cordl_internal_get__previousLocale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousLocale;
}
constexpr void GorillaNetworking::GorillaComputer_StateOrderItem::__cordl_internal_set__previousLocale(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousLocale = value;
}
constexpr ::StringW& GorillaNetworking::GorillaComputer_StateOrderItem::__cordl_internal_get__cachedTranslation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTranslation;
}
constexpr ::StringW const& GorillaNetworking::GorillaComputer_StateOrderItem::__cordl_internal_get__cachedTranslation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTranslation;
}
constexpr void GorillaNetworking::GorillaComputer_StateOrderItem::__cordl_internal_set__cachedTranslation(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedTranslation = value;
}
inline void GorillaNetworking::GorillaComputer_StateOrderItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer_StateOrderItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaComputer_StateOrderItem::_ctor(::GlobalNamespace::GorillaComputer_ComputerState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer_StateOrderItem*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GorillaComputer_ComputerState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GorillaNetworking::GorillaComputer_StateOrderItem::_ctor(::GlobalNamespace::GorillaComputer_ComputerState  state, ::StringW  overrideName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer_StateOrderItem*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GorillaComputer_ComputerState>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, overrideName);
}
inline ::StringW GorillaNetworking::GorillaComputer_StateOrderItem::GetName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer_StateOrderItem*>(),
                        {"GetName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::GorillaComputer_StateOrderItem::GetPreLocalisedName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaComputer_StateOrderItem*>(),
                        {"GetPreLocalisedName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GorillaNetworking::GorillaComputer_StateOrderItem* GorillaNetworking::GorillaComputer_StateOrderItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaComputer_StateOrderItem*>());
}
inline ::GorillaNetworking::GorillaComputer_StateOrderItem* GorillaNetworking::GorillaComputer_StateOrderItem::New_ctor(::GlobalNamespace::GorillaComputer_ComputerState  state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaComputer_StateOrderItem*>(state));
}
inline ::GorillaNetworking::GorillaComputer_StateOrderItem* GorillaNetworking::GorillaComputer_StateOrderItem::New_ctor(::GlobalNamespace::GorillaComputer_ComputerState  state, ::StringW  overrideName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaComputer_StateOrderItem*>(state, overrideName));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaComputer_StateOrderItem::GorillaComputer_StateOrderItem()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveServerApi.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveServerApi_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveServerApi_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveServerApi_EPlatformType_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveServerApi_def.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerScore_PlayerScore_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::Awake)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x592b4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.RequestGetRankInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::System::Collections::Generic::List_1<::StringW>*, ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::RequestGetRankInformation)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x592b634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"RequestGetRankInformation", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.GetRankInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*, ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::GetRankInformation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x592b844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"GetRankInformation", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.OnCompleteGetRankInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::StringW, ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::OnCompleteGetRankInformation)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x592b908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"OnCompleteGetRankInformation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.RequestCreateMatchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::RequestCreateMatchId)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5927f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"RequestCreateMatchId", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.CreateMatchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::CreateMatchId)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x592baf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"CreateMatchId", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.OnCompleteCreateMatchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::StringW, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::OnCompleteCreateMatchId)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x592bbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"OnCompleteCreateMatchId", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.RequestValidateMatchJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::StringW, ::System::Action_1<bool>*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::RequestValidateMatchJoin)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5928108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"RequestValidateMatchJoin", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.ValidateMatchJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*, ::System::Action_1<bool>*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::ValidateMatchJoin)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x592bc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"ValidateMatchJoin", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.OnCompleteValidateMatchJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::StringW, ::System::Action_1<bool>*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::OnCompleteValidateMatchJoin)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x592bcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"OnCompleteValidateMatchJoin", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.RequestSubmitMatchScores
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::RequestSubmitMatchScores)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x592bd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"RequestSubmitMatchScores", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.RequestSubmitMatchScores
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::RequestSubmitMatchScores)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x592c07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"RequestSubmitMatchScores", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.SubmitMatchScores
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::SubmitMatchScores)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x592c290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"SubmitMatchScores", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.OnCompleteSubmitMatchScores
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::StringW)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::OnCompleteSubmitMatchScores)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x592c340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"OnCompleteSubmitMatchScores", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.RequestSetEloValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(float_t, ::System::Action*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::RequestSetEloValue)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x592c34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"RequestSetEloValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.SetEloValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData*, ::System::Action*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::SetEloValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x592c540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"SetEloValue", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.OnCompleteSetEloValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::StringW, ::System::Action*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::OnCompleteSetEloValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x592c5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"OnCompleteSetEloValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.RequestPingRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::StringW, ::System::Action*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::RequestPingRoom)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x59298e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"RequestPingRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.PingRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*, ::System::Action*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::PingRoom)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x592c5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"PingRoom", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.OnCompletePingRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::StringW, ::System::Action*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::OnCompletePingRoom)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x592c6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"OnCompletePingRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.RequestUnlockCompetitiveQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(bool, ::System::Action*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::RequestUnlockCompetitiveQueue)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x592c76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"RequestUnlockCompetitiveQueue", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.UnlockCompetitiveQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData*, ::System::Action*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::UnlockCompetitiveQueue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x592c974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"UnlockCompetitiveQueue", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi.OnCompleteUnlockCompetitiveQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)(::StringW, ::System::Action*)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::OnCompleteUnlockCompetitiveQueue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x592ca38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"OnCompleteUnlockCompetitiveQueue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x592cafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_MAX_SERVER_RETRIES()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MAX_SERVER_RETRIES;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_MAX_SERVER_RETRIES() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MAX_SERVER_RETRIES;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_set_MAX_SERVER_RETRIES(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MAX_SERVER_RETRIES = value;
}
constexpr bool& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_GetRankInformationInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetRankInformationInProgress;
}
constexpr bool const& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_GetRankInformationInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetRankInformationInProgress;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_set_GetRankInformationInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GetRankInformationInProgress = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_GetRankInformationRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetRankInformationRetryCount;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_GetRankInformationRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetRankInformationRetryCount;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_set_GetRankInformationRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GetRankInformationRetryCount = value;
}
constexpr bool& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_CreateMatchIdInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateMatchIdInProgress;
}
constexpr bool const& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_CreateMatchIdInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateMatchIdInProgress;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_set_CreateMatchIdInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreateMatchIdInProgress = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_CreateMatchIdRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateMatchIdRetryCount;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_CreateMatchIdRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateMatchIdRetryCount;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_set_CreateMatchIdRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreateMatchIdRetryCount = value;
}
constexpr bool& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_ValidateMatchJoinInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValidateMatchJoinInProgress;
}
constexpr bool const& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_ValidateMatchJoinInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValidateMatchJoinInProgress;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_set_ValidateMatchJoinInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ValidateMatchJoinInProgress = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_ValidateMatchJoinRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValidateMatchJoinRetryCount;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_ValidateMatchJoinRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValidateMatchJoinRetryCount;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_set_ValidateMatchJoinRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ValidateMatchJoinRetryCount = value;
}
constexpr bool& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_SubmitMatchScoresInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubmitMatchScoresInProgress;
}
constexpr bool const& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_SubmitMatchScoresInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubmitMatchScoresInProgress;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_set_SubmitMatchScoresInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubmitMatchScoresInProgress = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_SubmitMatchScoresRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubmitMatchScoresRetryCount;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_SubmitMatchScoresRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubmitMatchScoresRetryCount;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_set_SubmitMatchScoresRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubmitMatchScoresRetryCount = value;
}
constexpr bool& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_SetEloValueInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetEloValueInProgress;
}
constexpr bool const& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_SetEloValueInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetEloValueInProgress;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_set_SetEloValueInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SetEloValueInProgress = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_SetEloValueRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetEloValueRetryCount;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_SetEloValueRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetEloValueRetryCount;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_set_SetEloValueRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SetEloValueRetryCount = value;
}
constexpr bool& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_PingMatchInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PingMatchInProgress;
}
constexpr bool const& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_PingMatchInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PingMatchInProgress;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_set_PingMatchInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PingMatchInProgress = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_PingMatchRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PingMatchRetryCount;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_PingMatchRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PingMatchRetryCount;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_set_PingMatchRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PingMatchRetryCount = value;
}
constexpr bool& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_UnlockCompetitiveQueueInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnlockCompetitiveQueueInProgress;
}
constexpr bool const& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_UnlockCompetitiveQueueInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnlockCompetitiveQueueInProgress;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_set_UnlockCompetitiveQueueInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnlockCompetitiveQueueInProgress = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_UnlockCompetitiveQueueRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnlockCompetitiveQueueRetryCount;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_get_UnlockCompetitiveQueueRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnlockCompetitiveQueueRetryCount;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi::__cordl_internal_set_UnlockCompetitiveQueueRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnlockCompetitiveQueueRetryCount = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::setStaticF_Instance(::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>, "Instance", ::GlobalNamespace::GorillaTagCompetitiveServerApi*>(std::forward<::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>>(value));
}
inline ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi> GlobalNamespace::GorillaTagCompetitiveServerApi::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>, "Instance", ::GlobalNamespace::GorillaTagCompetitiveServerApi*>();
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::RequestGetRankInformation(::System::Collections::Generic::List_1<::StringW>*  playfabs, ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"RequestGetRankInformation", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playfabs, callback);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagCompetitiveServerApi::GetRankInformation(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*  data, ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"GetRankInformation", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::OnCompleteGetRankInformation(/* [CanBeNull] */ ::StringW  response, ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"OnCompleteGetRankInformation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, callback);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::RequestCreateMatchId(::System::Action_1<::StringW>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"RequestCreateMatchId", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagCompetitiveServerApi::CreateMatchId(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed*  data, ::System::Action_1<::StringW>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"CreateMatchId", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::OnCompleteCreateMatchId(/* [CanBeNull] */ ::StringW  response, ::System::Action_1<::StringW>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"OnCompleteCreateMatchId", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, callback);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::RequestValidateMatchJoin(::StringW  matchId, ::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"RequestValidateMatchJoin", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, matchId, callback);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagCompetitiveServerApi::ValidateMatchJoin(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*  data, ::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"ValidateMatchJoin", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::OnCompleteValidateMatchJoin(/* [CanBeNull] */ ::StringW  response, ::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"OnCompleteValidateMatchJoin", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, callback);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::RequestSubmitMatchScores(::StringW  matchId, ::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>*  finalScores)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"RequestSubmitMatchScores", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, matchId, finalScores);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::RequestSubmitMatchScores(::StringW  matchId, ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>*  playerScores)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"RequestSubmitMatchScores", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, matchId, playerScores);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagCompetitiveServerApi::SubmitMatchScores(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"SubmitMatchScores", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::OnCompleteSubmitMatchScores(/* [CanBeNull] */ ::StringW  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"OnCompleteSubmitMatchScores", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::RequestSetEloValue(float_t  desiredElo, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"RequestSetEloValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desiredElo, callback);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagCompetitiveServerApi::SetEloValue(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData*  data, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"SetEloValue", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::OnCompleteSetEloValue(/* [CanBeNull] */ ::StringW  response, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"OnCompleteSetEloValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, callback);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::RequestPingRoom(::StringW  matchId, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"RequestPingRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, matchId, callback);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagCompetitiveServerApi::PingRoom(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*  data, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"PingRoom", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::OnCompletePingRoom(/* [CanBeNull] */ ::StringW  response, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"OnCompletePingRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, callback);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::RequestUnlockCompetitiveQueue(bool  unlocked, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"RequestUnlockCompetitiveQueue", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unlocked, callback);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagCompetitiveServerApi::UnlockCompetitiveQueue(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData*  data, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"UnlockCompetitiveQueue", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::OnCompleteUnlockCompetitiveQueue(/* [CanBeNull] */ ::StringW  response, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {"OnCompleteUnlockCompetitiveQueue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, callback);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi* GlobalNamespace::GorillaTagCompetitiveServerApi::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi::GorillaTagCompetitiveServerApi()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::*)(int32_t)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x592bcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x592e310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x592e314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592e76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x592e774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592e7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*& GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId* const& GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_set_data(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>& GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi> const& GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_set_callback(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37* GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::*)(int32_t)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x592ca10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x592de6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::MoveNext)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x592de70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592e2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x592e2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592e308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData*& GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData* const& GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_set_data(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>& GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi> const& GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action*& GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action* const& GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_set_callback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50* GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::*)(int32_t)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x592c318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x592d9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::MoveNext)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x592d9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592de24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x592de2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592de64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*& GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData* const& GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_set_data(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>& GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi> const& GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41* GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::*)(int32_t)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x592c598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x592d8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::MoveNext)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x592d8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592d98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x592d994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592d9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44* GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44::GorillaTagCompetitiveServerApi__SetEloValue_d__44()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::*)(int32_t)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x592c680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x592d448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::MoveNext)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x592d44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592d8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x592d8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592d8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*& GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId* const& GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_set_data(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>& GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi> const& GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action*& GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action* const& GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_set_callback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47* GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47::GorillaTagCompetitiveServerApi__PingRoom_d__47()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::*)(int32_t)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x592b8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x592d028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x592d02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592d400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x592d408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592d440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*& GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData* const& GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_set_data(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>& GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi> const& GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*& GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>* const& GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_set_callback(::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31* GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31::GorillaTagCompetitiveServerApi__GetRankInformation_d__31()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::*)(int32_t)>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x592bb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x592cb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x592cb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592cfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x592cfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592d020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed*& GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed* const& GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_set_data(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>& GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi> const& GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_set_callback(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34* GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34::GorillaTagCompetitiveServerApi__CreateMatchId_d__34()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592c96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData::__cordl_internal_get_unlocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlocked;
}
constexpr bool const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData::__cordl_internal_get_unlocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlocked;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData::__cordl_internal_set_unlocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlocked = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData* GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592c538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData::__cordl_internal_get_elo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elo;
}
constexpr float_t const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData::__cordl_internal_get_elo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elo;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData::__cordl_internal_set_elo(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elo = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData* GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592c288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData::__cordl_internal_get_matchId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchId;
}
constexpr ::StringW const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData::__cordl_internal_get_matchId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchId;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData::__cordl_internal_set_matchId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchId = value;
}
constexpr ::StringW& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData::__cordl_internal_get_playfabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabId;
}
constexpr ::StringW const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData::__cordl_internal_get_playfabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabId;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData::__cordl_internal_set_playfabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playfabId = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>*& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData::__cordl_internal_get_playerScores()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerScores;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>* const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData::__cordl_internal_get_playerScores() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerScores;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData::__cordl_internal_set_playerScores(::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerScores = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData* GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592c074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore::__cordl_internal_get_playfabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabId;
}
constexpr ::StringW const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore::__cordl_internal_get_playfabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabId;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore::__cordl_internal_set_playfabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playfabId = value;
}
constexpr float_t& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore::__cordl_internal_get_gameScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameScore;
}
constexpr float_t const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore::__cordl_internal_get_gameScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameScore;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore::__cordl_internal_set_gameScore(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameScore = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore* GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore::GorillaTagCompetitiveServerApi_RankedModePlayerScore()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592cb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData::__cordl_internal_get_validJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validJoin;
}
constexpr bool const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData::__cordl_internal_get_validJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validJoin;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData::__cordl_internal_set_validJoin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validJoin = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData* GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592bc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId::__cordl_internal_get_matchId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchId;
}
constexpr ::StringW const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId::__cordl_internal_get_matchId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchId;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId::__cordl_internal_set_matchId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchId = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId* GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592cb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*>*& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData::__cordl_internal_get_playerData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*>* const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData::__cordl_internal_get_playerData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerData;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData::__cordl_internal_set_playerData(::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerData = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData* GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData::GorillaTagCompetitiveServerApi_RankedModeProgressionData()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x592cb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData::__cordl_internal_get_playfabID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabID;
}
constexpr ::StringW const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData::__cordl_internal_get_playfabID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabID;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData::__cordl_internal_set_playfabID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playfabID = value;
}
constexpr ::ArrayW<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*>& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData::__cordl_internal_get_platformData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformData;
}
constexpr ::ArrayW<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*> const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData::__cordl_internal_get_platformData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformData;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData::__cordl_internal_set_platformData(::ArrayW<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformData = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData* GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592cb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::__cordl_internal_get_platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr ::StringW const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::__cordl_internal_get_platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::__cordl_internal_set_platform(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platform = value;
}
constexpr float_t& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::__cordl_internal_get_elo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elo;
}
constexpr float_t const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::__cordl_internal_get_elo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elo;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::__cordl_internal_set_elo(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elo = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::__cordl_internal_get_majorTier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___majorTier;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::__cordl_internal_get_majorTier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___majorTier;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::__cordl_internal_set_majorTier(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___majorTier = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::__cordl_internal_get_minorTier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minorTier;
}
constexpr int32_t const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::__cordl_internal_get_minorTier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minorTier;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::__cordl_internal_set_minorTier(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minorTier = value;
}
constexpr float_t& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::__cordl_internal_get_rankProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rankProgress;
}
constexpr float_t const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::__cordl_internal_get_rankProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rankProgress;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::__cordl_internal_set_rankProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rankProgress = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData* GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592b83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData::__cordl_internal_get_playfabIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData::__cordl_internal_get_playfabIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabIds;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData::__cordl_internal_set_playfabIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playfabIds = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData* GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592baf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed::__cordl_internal_get_platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr ::StringW const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed::__cordl_internal_get_platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed::__cordl_internal_set_platform(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platform = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed* GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase::*)()>(&::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592cb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase::__cordl_internal_get_mothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipId;
}
constexpr ::StringW const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase::__cordl_internal_get_mothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipId;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase::__cordl_internal_set_mothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipId = value;
}
constexpr ::StringW& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase::__cordl_internal_get_mothershipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipToken;
}
constexpr ::StringW const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase::__cordl_internal_get_mothershipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipToken;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase::__cordl_internal_set_mothershipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipToken = value;
}
constexpr ::StringW& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase::__cordl_internal_get_mothershipEnvId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipEnvId;
}
constexpr ::StringW const& GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase::__cordl_internal_get_mothershipEnvId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipEnvId;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase::__cordl_internal_set_mothershipEnvId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipEnvId = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase* GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeAgent.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeAgent_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__MonkeAgent_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.get_runner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkRunner> (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::get_runner)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x596930c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"get_runner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.get_sendReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::get_sendReport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59693b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"get_sendReport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.set_sendReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)(bool)>(&::GlobalNamespace::MonkeAgent::set_sendReport)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59693bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"set_sendReport", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.get_suspiciousPlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::get_suspiciousPlayerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59693d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"get_suspiciousPlayerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.set_suspiciousPlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)(::StringW)>(&::GlobalNamespace::MonkeAgent::set_suspiciousPlayerId)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59693dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"set_suspiciousPlayerId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.get_suspiciousPlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::get_suspiciousPlayerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5969458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"get_suspiciousPlayerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.set_suspiciousPlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)(::StringW)>(&::GlobalNamespace::MonkeAgent::set_suspiciousPlayerName)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5969460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"set_suspiciousPlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.get_suspiciousReason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::get_suspiciousReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59694dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"get_suspiciousReason", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.set_suspiciousReason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)(::StringW)>(&::GlobalNamespace::MonkeAgent::set_suspiciousReason)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59694e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"set_suspiciousReason", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5969560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x596956c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::SliceUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5969578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::Start)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5969ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.OnApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)(bool)>(&::GlobalNamespace::MonkeAgent::OnApplicationPause)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5969e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.LogErrorCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::GlobalNamespace::MonkeAgent::LogErrorCount)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x596a168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"LogErrorCount", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.SendReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)(::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::MonkeAgent::SendReport)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x596a4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"SendReport", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.DispatchReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::DispatchReport)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x596a500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"DispatchReport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.CheckReports
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::CheckReports)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x596957c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"CheckReports", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.RefreshRPCs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::RefreshRPCs)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5969ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"RefreshRPCs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.LowestActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::LowestActorNumber)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x596ad94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"LowestActorNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::MonkeAgent::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x596ae9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::MonkeAgent::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x596af44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.IncrementRPCCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::PhotonMessageInfo, ::StringW)>(&::GlobalNamespace::MonkeAgent::IncrementRPCCall)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x596b088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"IncrementRPCCall", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.IncrementRPCCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PhotonMessageInfoWrapped, ::StringW)>(&::GlobalNamespace::MonkeAgent::IncrementRPCCall)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x596b134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"IncrementRPCCall", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.IncrementRPCCallLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)(::GlobalNamespace::PhotonMessageInfoWrapped, ::StringW)>(&::GlobalNamespace::MonkeAgent::IncrementRPCCallLocal)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x596b1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"IncrementRPCCallLocal", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.IncrementRPCTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeAgent::*)(::by_ref<::GlobalNamespace::NetPlayer*>, ::by_ref<::StringW>, ::by_ref<int32_t>)>(&::GlobalNamespace::MonkeAgent::IncrementRPCTracker)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x596a454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"IncrementRPCTracker", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetPlayer*>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.IncrementRPCTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeAgent::*)(::by_ref<::Photon::Realtime::Player*>, ::by_ref<::StringW>, ::by_ref<int32_t>)>(&::GlobalNamespace::MonkeAgent::IncrementRPCTracker)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x596b360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"IncrementRPCTracker", {}, {::i2c::type_of<::by_ref<::Photon::Realtime::Player*>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.IncrementRPCTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeAgent::*)(::by_ref<::StringW>, ::by_ref<::StringW>, ::by_ref<int32_t>)>(&::GlobalNamespace::MonkeAgent::IncrementRPCTracker)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x596b314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"IncrementRPCTracker", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.GetRPCCallTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MonkeAgent_RPCCallTracker* (::GlobalNamespace::MonkeAgent::*)(::StringW, ::StringW)>(&::GlobalNamespace::MonkeAgent::GetRPCCallTracker)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x596b38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"GetRPCCallTracker", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.QuitDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MonkeAgent::*)(float_t)>(&::GlobalNamespace::MonkeAgent::QuitDelay)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x596ab7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"QuitDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.SetToRoomCreatorIfHere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::SetToRoomCreatorIfHere)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x596abd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"SetToRoomCreatorIfHere", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.ShouldDisconnectFromRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::ShouldDisconnectFromRoom)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x596aa94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"ShouldDisconnectFromRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent.CloseInvalidRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::CloseInvalidRoom)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x596acc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"CloseInvalidRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x596b588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent._Start_b__49_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent::*)()>(&::GlobalNamespace::MonkeAgent::_Start_b__49_0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x596b750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"<Start>b__49_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MonkeAgent::__cordl_internal_get__sendReport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendReport;
}
constexpr bool const& GlobalNamespace::MonkeAgent::__cordl_internal_get__sendReport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendReport;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set__sendReport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sendReport = value;
}
constexpr ::StringW& GlobalNamespace::MonkeAgent::__cordl_internal_get__suspiciousPlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____suspiciousPlayerId;
}
constexpr ::StringW const& GlobalNamespace::MonkeAgent::__cordl_internal_get__suspiciousPlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____suspiciousPlayerId;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set__suspiciousPlayerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____suspiciousPlayerId = value;
}
constexpr ::StringW& GlobalNamespace::MonkeAgent::__cordl_internal_get__suspiciousPlayerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____suspiciousPlayerName;
}
constexpr ::StringW const& GlobalNamespace::MonkeAgent::__cordl_internal_get__suspiciousPlayerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____suspiciousPlayerName;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set__suspiciousPlayerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____suspiciousPlayerName = value;
}
constexpr ::StringW& GlobalNamespace::MonkeAgent::__cordl_internal_get__suspiciousReason()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____suspiciousReason;
}
constexpr ::StringW const& GlobalNamespace::MonkeAgent::__cordl_internal_get__suspiciousReason() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____suspiciousReason;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set__suspiciousReason(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____suspiciousReason = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::MonkeAgent::__cordl_internal_get_reportedPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportedPlayers;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::MonkeAgent::__cordl_internal_get_reportedPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportedPlayers;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_reportedPlayers(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reportedPlayers = value;
}
constexpr uint8_t& GlobalNamespace::MonkeAgent::__cordl_internal_get_roomSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomSize;
}
constexpr uint8_t const& GlobalNamespace::MonkeAgent::__cordl_internal_get_roomSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomSize;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_roomSize(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomSize = value;
}
constexpr float_t& GlobalNamespace::MonkeAgent::__cordl_internal_get_lastCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCheck;
}
constexpr float_t const& GlobalNamespace::MonkeAgent::__cordl_internal_get_lastCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCheck;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_lastCheck(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCheck = value;
}
constexpr float_t& GlobalNamespace::MonkeAgent::__cordl_internal_get_userDecayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userDecayTime;
}
constexpr float_t const& GlobalNamespace::MonkeAgent::__cordl_internal_get_userDecayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userDecayTime;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_userDecayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userDecayTime = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::MonkeAgent::__cordl_internal_get_currentMasterClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentMasterClient;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::MonkeAgent::__cordl_internal_get_currentMasterClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentMasterClient;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_currentMasterClient(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentMasterClient = value;
}
constexpr bool& GlobalNamespace::MonkeAgent::__cordl_internal_get_testAssault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testAssault;
}
constexpr bool const& GlobalNamespace::MonkeAgent::__cordl_internal_get_testAssault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testAssault;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_testAssault(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testAssault = value;
}
constexpr int32_t& GlobalNamespace::MonkeAgent::__cordl_internal_get_lowestActorNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowestActorNumber;
}
constexpr int32_t const& GlobalNamespace::MonkeAgent::__cordl_internal_get_lowestActorNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowestActorNumber;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_lowestActorNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowestActorNumber = value;
}
constexpr int32_t& GlobalNamespace::MonkeAgent::__cordl_internal_get_calls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calls;
}
constexpr int32_t const& GlobalNamespace::MonkeAgent::__cordl_internal_get_calls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calls;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_calls(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calls = value;
}
constexpr int32_t& GlobalNamespace::MonkeAgent::__cordl_internal_get_rpcCallLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rpcCallLimit;
}
constexpr int32_t const& GlobalNamespace::MonkeAgent::__cordl_internal_get_rpcCallLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rpcCallLimit;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_rpcCallLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rpcCallLimit = value;
}
constexpr int32_t& GlobalNamespace::MonkeAgent::__cordl_internal_get_logErrorMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logErrorMax;
}
constexpr int32_t const& GlobalNamespace::MonkeAgent::__cordl_internal_get_logErrorMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logErrorMax;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_logErrorMax(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logErrorMax = value;
}
constexpr int32_t& GlobalNamespace::MonkeAgent::__cordl_internal_get_rpcErrorMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rpcErrorMax;
}
constexpr int32_t const& GlobalNamespace::MonkeAgent::__cordl_internal_get_rpcErrorMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rpcErrorMax;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_rpcErrorMax(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rpcErrorMax = value;
}
constexpr ::System::Object*& GlobalNamespace::MonkeAgent::__cordl_internal_get_outObj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outObj;
}
constexpr ::System::Object* const& GlobalNamespace::MonkeAgent::__cordl_internal_get_outObj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outObj;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_outObj(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outObj = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::MonkeAgent::__cordl_internal_get_tempPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::MonkeAgent::__cordl_internal_get_tempPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempPlayer;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_tempPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempPlayer = value;
}
constexpr int32_t& GlobalNamespace::MonkeAgent::__cordl_internal_get_logErrorCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logErrorCount;
}
constexpr int32_t const& GlobalNamespace::MonkeAgent::__cordl_internal_get_logErrorCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logErrorCount;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_logErrorCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logErrorCount = value;
}
constexpr int32_t& GlobalNamespace::MonkeAgent::__cordl_internal_get_stringIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringIndex;
}
constexpr int32_t const& GlobalNamespace::MonkeAgent::__cordl_internal_get_stringIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringIndex;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_stringIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringIndex = value;
}
constexpr ::StringW& GlobalNamespace::MonkeAgent::__cordl_internal_get_playerID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerID;
}
constexpr ::StringW const& GlobalNamespace::MonkeAgent::__cordl_internal_get_playerID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerID;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_playerID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerID = value;
}
constexpr ::StringW& GlobalNamespace::MonkeAgent::__cordl_internal_get_playerNick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNick;
}
constexpr ::StringW const& GlobalNamespace::MonkeAgent::__cordl_internal_get_playerNick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNick;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_playerNick(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNick = value;
}
constexpr int32_t& GlobalNamespace::MonkeAgent::__cordl_internal_get_lastServerTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastServerTimestamp;
}
constexpr int32_t const& GlobalNamespace::MonkeAgent::__cordl_internal_get_lastServerTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastServerTimestamp;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_lastServerTimestamp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastServerTimestamp = value;
}
constexpr ::ArrayW<::GlobalNamespace::NetPlayer*>& GlobalNamespace::MonkeAgent::__cordl_internal_get_cachedPlayerList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedPlayerList;
}
constexpr ::ArrayW<::GlobalNamespace::NetPlayer*> const& GlobalNamespace::MonkeAgent::__cordl_internal_get_cachedPlayerList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedPlayerList;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_cachedPlayerList(::ArrayW<::GlobalNamespace::NetPlayer*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedPlayerList = value;
}
constexpr float_t& GlobalNamespace::MonkeAgent::__cordl_internal_get_lastReportChecked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastReportChecked;
}
constexpr float_t const& GlobalNamespace::MonkeAgent::__cordl_internal_get_lastReportChecked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastReportChecked;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_lastReportChecked(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastReportChecked = value;
}
constexpr float_t& GlobalNamespace::MonkeAgent::__cordl_internal_get_reportCheckCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportCheckCooldown;
}
constexpr float_t const& GlobalNamespace::MonkeAgent::__cordl_internal_get_reportCheckCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportCheckCooldown;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_reportCheckCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reportCheckCooldown = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MonkeAgent_RPCCallTracker*>*>*& GlobalNamespace::MonkeAgent::__cordl_internal_get_userRPCCalls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userRPCCalls;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MonkeAgent_RPCCallTracker*>*>* const& GlobalNamespace::MonkeAgent::__cordl_internal_get_userRPCCalls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userRPCCalls;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_userRPCCalls(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MonkeAgent_RPCCallTracker*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userRPCCalls = value;
}
constexpr ::ExitGames::Client::Photon::Hashtable*& GlobalNamespace::MonkeAgent::__cordl_internal_get_hashTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hashTable;
}
constexpr ::ExitGames::Client::Photon::Hashtable* const& GlobalNamespace::MonkeAgent::__cordl_internal_get_hashTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hashTable;
}
constexpr void GlobalNamespace::MonkeAgent::__cordl_internal_set_hashTable(::ExitGames::Client::Photon::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hashTable = value;
}
inline void GlobalNamespace::MonkeAgent::setStaticF_instance(::UnityW<::GlobalNamespace::MonkeAgent>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::MonkeAgent>, "instance", ::GlobalNamespace::MonkeAgent*>(std::forward<::UnityW<::GlobalNamespace::MonkeAgent>>(value));
}
inline ::UnityW<::GlobalNamespace::MonkeAgent> GlobalNamespace::MonkeAgent::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::MonkeAgent>, "instance", ::GlobalNamespace::MonkeAgent*>();
}
inline void GlobalNamespace::MonkeAgent::setStaticF_targetActors(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "targetActors", ::GlobalNamespace::MonkeAgent*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> GlobalNamespace::MonkeAgent::getStaticF_targetActors()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "targetActors", ::GlobalNamespace::MonkeAgent*>();
}
inline ::UnityW<::Fusion::NetworkRunner> GlobalNamespace::MonkeAgent::get_runner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"get_runner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkRunner>>(this, ___internal_method);
}
inline bool GlobalNamespace::MonkeAgent::get_sendReport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"get_sendReport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeAgent::set_sendReport(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"set_sendReport", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MonkeAgent::get_suspiciousPlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"get_suspiciousPlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeAgent::set_suspiciousPlayerId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"set_suspiciousPlayerId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MonkeAgent::get_suspiciousPlayerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"get_suspiciousPlayerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeAgent::set_suspiciousPlayerName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"set_suspiciousPlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MonkeAgent::get_suspiciousReason()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"get_suspiciousReason", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeAgent::set_suspiciousReason(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"set_suspiciousReason", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonkeAgent::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeAgent::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeAgent::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeAgent::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeAgent::OnApplicationPause(bool  paused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paused);
}
inline void GlobalNamespace::MonkeAgent::LogErrorCount(::StringW  logString, ::StringW  stackTrace, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"LogErrorCount", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logString, stackTrace, type);
}
inline void GlobalNamespace::MonkeAgent::SendReport(::StringW  susReason, ::StringW  susId, ::StringW  susNick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"SendReport", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, susReason, susId, susNick);
}
inline void GlobalNamespace::MonkeAgent::DispatchReport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"DispatchReport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeAgent::CheckReports()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"CheckReports", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeAgent::RefreshRPCs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"RefreshRPCs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MonkeAgent::LowestActorNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"LowestActorNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeAgent::OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::MonkeAgent::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GlobalNamespace::MonkeAgent::IncrementRPCCall(::Photon::Pun::PhotonMessageInfo  info, /* [CallerMemberName] */ ::StringW  callingMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"IncrementRPCCall", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, info, callingMethod);
}
inline void GlobalNamespace::MonkeAgent::IncrementRPCCall(::GlobalNamespace::PhotonMessageInfoWrapped  infoWrapped, /* [CallerMemberName] */ ::StringW  callingMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"IncrementRPCCall", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, infoWrapped, callingMethod);
}
inline void GlobalNamespace::MonkeAgent::IncrementRPCCallLocal(::GlobalNamespace::PhotonMessageInfoWrapped  infoWrapped, ::StringW  rpcFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"IncrementRPCCallLocal", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, infoWrapped, rpcFunction);
}
inline bool GlobalNamespace::MonkeAgent::IncrementRPCTracker(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetPlayer*>  sender, /* [IsReadOnly] */ ::by_ref<::StringW>  rpcFunction, /* [IsReadOnly] */ ::by_ref<int32_t>  callLimit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"IncrementRPCTracker", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetPlayer*>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, rpcFunction, callLimit);
}
inline bool GlobalNamespace::MonkeAgent::IncrementRPCTracker(/* [IsReadOnly] */ ::by_ref<::Photon::Realtime::Player*>  sender, /* [IsReadOnly] */ ::by_ref<::StringW>  rpcFunction, /* [IsReadOnly] */ ::by_ref<int32_t>  callLimit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"IncrementRPCTracker", {}, {::i2c::type_of<::by_ref<::Photon::Realtime::Player*>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, rpcFunction, callLimit);
}
inline bool GlobalNamespace::MonkeAgent::IncrementRPCTracker(/* [IsReadOnly] */ ::by_ref<::StringW>  userId, /* [IsReadOnly] */ ::by_ref<::StringW>  rpcFunction, /* [IsReadOnly] */ ::by_ref<int32_t>  callLimit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"IncrementRPCTracker", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userId, rpcFunction, callLimit);
}
inline ::GlobalNamespace::MonkeAgent_RPCCallTracker* GlobalNamespace::MonkeAgent::GetRPCCallTracker(::StringW  userID, ::StringW  rpcFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"GetRPCCallTracker", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MonkeAgent_RPCCallTracker*>(this, ___internal_method, userID, rpcFunction);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MonkeAgent::QuitDelay(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"QuitDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, time);
}
inline void GlobalNamespace::MonkeAgent::SetToRoomCreatorIfHere()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"SetToRoomCreatorIfHere", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MonkeAgent::ShouldDisconnectFromRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"ShouldDisconnectFromRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeAgent::CloseInvalidRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"CloseInvalidRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeAgent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeAgent::_Start_b__49_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent*>(),
                        {"<Start>b__49_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeAgent* GlobalNamespace::MonkeAgent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeAgent*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::MonkeAgent::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::MonkeAgent::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeAgent::MonkeAgent()   {
}
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent__QuitDelay_d__66._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent__QuitDelay_d__66::*)(int32_t)>(&::GlobalNamespace::MonkeAgent__QuitDelay_d__66::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x596b560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent__QuitDelay_d__66*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent__QuitDelay_d__66.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent__QuitDelay_d__66::*)()>(&::GlobalNamespace::MonkeAgent__QuitDelay_d__66::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x596b7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent__QuitDelay_d__66*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent__QuitDelay_d__66.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeAgent__QuitDelay_d__66::*)()>(&::GlobalNamespace::MonkeAgent__QuitDelay_d__66::MoveNext)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x596b7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent__QuitDelay_d__66*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent__QuitDelay_d__66.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MonkeAgent__QuitDelay_d__66::*)()>(&::GlobalNamespace::MonkeAgent__QuitDelay_d__66::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596b8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent__QuitDelay_d__66*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent__QuitDelay_d__66.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent__QuitDelay_d__66::*)()>(&::GlobalNamespace::MonkeAgent__QuitDelay_d__66::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x596b8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent__QuitDelay_d__66*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent__QuitDelay_d__66.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MonkeAgent__QuitDelay_d__66::*)()>(&::GlobalNamespace::MonkeAgent__QuitDelay_d__66::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596b920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent__QuitDelay_d__66*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MonkeAgent__QuitDelay_d__66::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MonkeAgent__QuitDelay_d__66::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MonkeAgent__QuitDelay_d__66::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MonkeAgent__QuitDelay_d__66::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MonkeAgent__QuitDelay_d__66::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MonkeAgent__QuitDelay_d__66::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
inline void GlobalNamespace::MonkeAgent__QuitDelay_d__66::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent__QuitDelay_d__66*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MonkeAgent__QuitDelay_d__66::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent__QuitDelay_d__66*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MonkeAgent__QuitDelay_d__66::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent__QuitDelay_d__66*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MonkeAgent__QuitDelay_d__66::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent__QuitDelay_d__66*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeAgent__QuitDelay_d__66::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent__QuitDelay_d__66*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MonkeAgent__QuitDelay_d__66::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent__QuitDelay_d__66*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MonkeAgent__QuitDelay_d__66* GlobalNamespace::MonkeAgent__QuitDelay_d__66::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeAgent__QuitDelay_d__66*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MonkeAgent__QuitDelay_d__66::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MonkeAgent__QuitDelay_d__66::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MonkeAgent__QuitDelay_d__66::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MonkeAgent__QuitDelay_d__66::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MonkeAgent__QuitDelay_d__66::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MonkeAgent__QuitDelay_d__66::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeAgent__QuitDelay_d__66::MonkeAgent__QuitDelay_d__66()   {
}
//  Writing Method size for method: ::GlobalNamespace::MonkeAgent_RPCCallTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeAgent_RPCCallTracker::*)()>(&::GlobalNamespace::MonkeAgent_RPCCallTracker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596b558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent_RPCCallTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MonkeAgent_RPCCallTracker::__cordl_internal_get_RPCCalls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RPCCalls;
}
constexpr int32_t const& GlobalNamespace::MonkeAgent_RPCCallTracker::__cordl_internal_get_RPCCalls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RPCCalls;
}
constexpr void GlobalNamespace::MonkeAgent_RPCCallTracker::__cordl_internal_set_RPCCalls(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RPCCalls = value;
}
constexpr int32_t& GlobalNamespace::MonkeAgent_RPCCallTracker::__cordl_internal_get_RPCCallsMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RPCCallsMax;
}
constexpr int32_t const& GlobalNamespace::MonkeAgent_RPCCallTracker::__cordl_internal_get_RPCCallsMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RPCCallsMax;
}
constexpr void GlobalNamespace::MonkeAgent_RPCCallTracker::__cordl_internal_set_RPCCallsMax(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RPCCallsMax = value;
}
inline void GlobalNamespace::MonkeAgent_RPCCallTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeAgent_RPCCallTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeAgent_RPCCallTracker* GlobalNamespace::MonkeAgent_RPCCallTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeAgent_RPCCallTracker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeAgent_RPCCallTracker::MonkeAgent_RPCCallTracker()   {
}

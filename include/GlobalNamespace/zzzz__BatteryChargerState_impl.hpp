#pragma once
// IWYU pragma private; include "GlobalNamespace/BatteryChargerState.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerState_CrankSyncState_impl.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerState_FusionCrankData_impl.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerState_FusionSyncState_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerState_def.hpp"
#include "Fusion/zzzz__NetworkArray_1_def.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerState_BatteryMsg_def.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerState_CrankSyncState_def.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerState_FusionCrankData_def.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerState_FusionSyncState_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.add_onChargeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)(::System::Action*)>(&::GlobalNamespace::BatteryChargerState::add_onChargeChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5bfc294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"add_onChargeChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.remove_onChargeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)(::System::Action*)>(&::GlobalNamespace::BatteryChargerState::remove_onChargeChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5bfc75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"remove_onChargeChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.add_onFullyCharged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)(::System::Action*)>(&::GlobalNamespace::BatteryChargerState::add_onFullyCharged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5bfc330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"add_onFullyCharged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.remove_onFullyCharged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)(::System::Action*)>(&::GlobalNamespace::BatteryChargerState::remove_onFullyCharged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5bfc7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"remove_onFullyCharged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.add_onEventPhaseChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)(::System::Action_1<int32_t>*)>(&::GlobalNamespace::BatteryChargerState::add_onEventPhaseChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bfc3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"add_onEventPhaseChanged", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.remove_onEventPhaseChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)(::System::Action_1<int32_t>*)>(&::GlobalNamespace::BatteryChargerState::remove_onEventPhaseChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bfc894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"remove_onEventPhaseChanged", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.get_CurrentCharge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::get_CurrentCharge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfea8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"get_CurrentCharge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.get_MaxCharge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::get_MaxCharge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfea94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"get_MaxCharge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.get_ChargePercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::get_ChargePercent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5bfd9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"get_ChargePercent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.get_ChargePerCrankDegree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::get_ChargePerCrankDegree)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfea9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"get_ChargePerCrankDegree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.get_EventPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::get_EventPhase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfeaa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"get_EventPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.get_LocalActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::get_LocalActorNr)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bfeaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"get_LocalActorNr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.SetChargePerCrankDegree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)(float_t)>(&::GlobalNamespace::BatteryChargerState::SetChargePerCrankDegree)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfeb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"SetChargePerCrankDegree", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bfeb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                    {::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::Update)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5bfeb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.UpdateLocalCrankState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)(int32_t, bool, float_t)>(&::GlobalNamespace::BatteryChargerState::UpdateLocalCrankState)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5bfcbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"UpdateLocalCrankState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.FindRigForActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (*)(int32_t)>(&::GlobalNamespace::BatteryChargerState::FindRigForActor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5bfcd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"FindRigForActor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.NotifyCrankGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BatteryChargerState::*)(int32_t, bool)>(&::GlobalNamespace::BatteryChargerState::NotifyCrankGrabbed)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5bfd2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"NotifyCrankGrabbed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.NotifyCrankReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)(int32_t, float_t)>(&::GlobalNamespace::BatteryChargerState::NotifyCrankReleased)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5bfd510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"NotifyCrankReleased", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.NotifyCrankInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)(int32_t, float_t)>(&::GlobalNamespace::BatteryChargerState::NotifyCrankInput)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5bfd750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"NotifyCrankInput", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.FlushCrankRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::FlushCrankRPC)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5bfec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"FlushCrankRPC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.DisableNetworking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::DisableNetworking)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bfee0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"DisableNetworking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.EnableNetworking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::EnableNetworking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfee18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"EnableNetworking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.RPC_BatteryMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)(uint8_t, uint8_t, float_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::BatteryChargerState::RPC_BatteryMessage)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5bfee20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"RPC_BatteryMessage", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.SetEventPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)(int32_t)>(&::GlobalNamespace::BatteryChargerState::SetEventPhase)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5bfd1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"SetEventPhase", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::BatteryChargerState::WriteDataPUN)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5bff158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                    {::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::BatteryChargerState::ReadDataPUN)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5bff2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                    {::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.get_FusionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BatteryChargerState_FusionSyncState (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::get_FusionData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bff5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"get_FusionData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.set_FusionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)(::GlobalNamespace::BatteryChargerState_FusionSyncState)>(&::GlobalNamespace::BatteryChargerState::set_FusionData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bff600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"set_FusionData", {}, {::i2c::type_of<::GlobalNamespace::BatteryChargerState_FusionSyncState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.get_FusionCranks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkArray_1<::GlobalNamespace::BatteryChargerState_FusionCrankData> (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::get_FusionCranks)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5bff65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"get_FusionCranks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::WriteDataFusion)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5bff714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                    {::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::ReadDataFusion)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5bff814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                    {::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5bffa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)(bool)>(&::GlobalNamespace::BatteryChargerState::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5bffb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                    {::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerState.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerState::*)()>(&::GlobalNamespace::BatteryChargerState::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bffc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                    {::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BatteryChargerState::__cordl_internal_get_chargePerCrankDegree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargePerCrankDegree;
}
constexpr float_t const& GlobalNamespace::BatteryChargerState::__cordl_internal_get_chargePerCrankDegree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargePerCrankDegree;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set_chargePerCrankDegree(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargePerCrankDegree = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerState::__cordl_internal_get_drainPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainPerSecond;
}
constexpr float_t const& GlobalNamespace::BatteryChargerState::__cordl_internal_get_drainPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainPerSecond;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set_drainPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drainPerSecond = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerState::__cordl_internal_get_maxCharge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCharge;
}
constexpr float_t const& GlobalNamespace::BatteryChargerState::__cordl_internal_get_maxCharge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCharge;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set_maxCharge(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxCharge = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerState::__cordl_internal_get_currentCharge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCharge;
}
constexpr float_t const& GlobalNamespace::BatteryChargerState::__cordl_internal_get_currentCharge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCharge;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set_currentCharge(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCharge = value;
}
constexpr int32_t& GlobalNamespace::BatteryChargerState::__cordl_internal_get_activeCrankerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCrankerCount;
}
constexpr int32_t const& GlobalNamespace::BatteryChargerState::__cordl_internal_get_activeCrankerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCrankerCount;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set_activeCrankerCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeCrankerCount = value;
}
constexpr int32_t& GlobalNamespace::BatteryChargerState::__cordl_internal_get_eventPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventPhase;
}
constexpr int32_t const& GlobalNamespace::BatteryChargerState::__cordl_internal_get_eventPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventPhase;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set_eventPhase(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventPhase = value;
}
constexpr ::ArrayW<::GlobalNamespace::BatteryChargerState_CrankSyncState>& GlobalNamespace::BatteryChargerState::__cordl_internal_get_crankSyncs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankSyncs;
}
constexpr ::ArrayW<::GlobalNamespace::BatteryChargerState_CrankSyncState> const& GlobalNamespace::BatteryChargerState::__cordl_internal_get_crankSyncs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankSyncs;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set_crankSyncs(::ArrayW<::GlobalNamespace::BatteryChargerState_CrankSyncState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankSyncs = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::BatteryChargerState::__cordl_internal_get_pendingGrabTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingGrabTime;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::BatteryChargerState::__cordl_internal_get_pendingGrabTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingGrabTime;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set_pendingGrabTime(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingGrabTime = value;
}
constexpr ::System::Action*& GlobalNamespace::BatteryChargerState::__cordl_internal_get_onChargeChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChargeChanged;
}
constexpr ::System::Action* const& GlobalNamespace::BatteryChargerState::__cordl_internal_get_onChargeChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChargeChanged;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set_onChargeChanged(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onChargeChanged = value;
}
constexpr ::System::Action*& GlobalNamespace::BatteryChargerState::__cordl_internal_get_onFullyCharged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFullyCharged;
}
constexpr ::System::Action* const& GlobalNamespace::BatteryChargerState::__cordl_internal_get_onFullyCharged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFullyCharged;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set_onFullyCharged(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFullyCharged = value;
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::BatteryChargerState::__cordl_internal_get_onEventPhaseChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEventPhaseChanged;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::BatteryChargerState::__cordl_internal_get_onEventPhaseChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEventPhaseChanged;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set_onEventPhaseChanged(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEventPhaseChanged = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerState::__cordl_internal_get_nextCrankRPCTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextCrankRPCTimestamp;
}
constexpr float_t const& GlobalNamespace::BatteryChargerState::__cordl_internal_get_nextCrankRPCTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextCrankRPCTimestamp;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set_nextCrankRPCTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextCrankRPCTimestamp = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerState::__cordl_internal_get_pendingCrankCharge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingCrankCharge;
}
constexpr float_t const& GlobalNamespace::BatteryChargerState::__cordl_internal_get_pendingCrankCharge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingCrankCharge;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set_pendingCrankCharge(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingCrankCharge = value;
}
constexpr int32_t& GlobalNamespace::BatteryChargerState::__cordl_internal_get_pendingCrankIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingCrankIndex;
}
constexpr int32_t const& GlobalNamespace::BatteryChargerState::__cordl_internal_get_pendingCrankIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingCrankIndex;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set_pendingCrankIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingCrankIndex = value;
}
constexpr bool& GlobalNamespace::BatteryChargerState::__cordl_internal_get_m_disableNetworking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_disableNetworking;
}
constexpr bool const& GlobalNamespace::BatteryChargerState::__cordl_internal_get_m_disableNetworking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_disableNetworking;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set_m_disableNetworking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_disableNetworking = value;
}
constexpr ::GlobalNamespace::BatteryChargerState_FusionSyncState& GlobalNamespace::BatteryChargerState::__cordl_internal_get__FusionData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FusionData;
}
constexpr ::GlobalNamespace::BatteryChargerState_FusionSyncState const& GlobalNamespace::BatteryChargerState::__cordl_internal_get__FusionData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FusionData;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set__FusionData(::GlobalNamespace::BatteryChargerState_FusionSyncState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FusionData = value;
}
constexpr ::ArrayW<::GlobalNamespace::BatteryChargerState_FusionCrankData>& GlobalNamespace::BatteryChargerState::__cordl_internal_get__FusionCranks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FusionCranks;
}
constexpr ::ArrayW<::GlobalNamespace::BatteryChargerState_FusionCrankData> const& GlobalNamespace::BatteryChargerState::__cordl_internal_get__FusionCranks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FusionCranks;
}
constexpr void GlobalNamespace::BatteryChargerState::__cordl_internal_set__FusionCranks(::ArrayW<::GlobalNamespace::BatteryChargerState_FusionCrankData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FusionCranks = value;
}
inline void GlobalNamespace::BatteryChargerState::add_onChargeChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"add_onChargeChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BatteryChargerState::remove_onChargeChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"remove_onChargeChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BatteryChargerState::add_onFullyCharged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"add_onFullyCharged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BatteryChargerState::remove_onFullyCharged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"remove_onFullyCharged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BatteryChargerState::add_onEventPhaseChanged(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"add_onEventPhaseChanged", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BatteryChargerState::remove_onEventPhaseChanged(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"remove_onEventPhaseChanged", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BatteryChargerState::get_CurrentCharge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"get_CurrentCharge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BatteryChargerState::get_MaxCharge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"get_MaxCharge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BatteryChargerState::get_ChargePercent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"get_ChargePercent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BatteryChargerState::get_ChargePerCrankDegree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"get_ChargePerCrankDegree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BatteryChargerState::get_EventPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"get_EventPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BatteryChargerState::get_LocalActorNr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"get_LocalActorNr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerState::SetChargePerCrankDegree(float_t  chargeRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"SetChargePerCrankDegree", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chargeRate);
}
inline void GlobalNamespace::BatteryChargerState::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerState::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerState::UpdateLocalCrankState(int32_t  crankIndex, bool  isLeftHand, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"UpdateLocalCrankState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crankIndex, isLeftHand, angle);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::BatteryChargerState::FindRigForActor(int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"FindRigForActor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(nullptr, ___internal_method, actorNr);
}
inline bool GlobalNamespace::BatteryChargerState::NotifyCrankGrabbed(int32_t  crankIndex, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"NotifyCrankGrabbed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, crankIndex, isLeftHand);
}
inline void GlobalNamespace::BatteryChargerState::NotifyCrankReleased(int32_t  crankIndex, float_t  finalAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"NotifyCrankReleased", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crankIndex, finalAngle);
}
inline void GlobalNamespace::BatteryChargerState::NotifyCrankInput(int32_t  crankIndex, float_t  degrees)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"NotifyCrankInput", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crankIndex, degrees);
}
inline void GlobalNamespace::BatteryChargerState::FlushCrankRPC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"FlushCrankRPC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerState::DisableNetworking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"DisableNetworking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerState::EnableNetworking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"EnableNetworking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerState::RPC_BatteryMessage(uint8_t  msgType, uint8_t  crankIndex, float_t  floatParam, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"RPC_BatteryMessage", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msgType, crankIndex, floatParam, info);
}
inline void GlobalNamespace::BatteryChargerState::SetEventPhase(int32_t  phase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"SetEventPhase", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, phase);
}
inline void GlobalNamespace::BatteryChargerState::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::BatteryChargerState::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline ::GlobalNamespace::BatteryChargerState_FusionSyncState GlobalNamespace::BatteryChargerState::get_FusionData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"get_FusionData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BatteryChargerState_FusionSyncState>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerState::set_FusionData(::GlobalNamespace::BatteryChargerState_FusionSyncState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"set_FusionData", {}, {::i2c::type_of<::GlobalNamespace::BatteryChargerState_FusionSyncState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::NetworkArray_1<::GlobalNamespace::BatteryChargerState_FusionCrankData> GlobalNamespace::BatteryChargerState::get_FusionCranks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {"get_FusionCranks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArray_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerState::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerState::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerState::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::BatteryChargerState::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BatteryChargerState*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BatteryChargerState* GlobalNamespace::BatteryChargerState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BatteryChargerState*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BatteryChargerState::BatteryChargerState()   {
}

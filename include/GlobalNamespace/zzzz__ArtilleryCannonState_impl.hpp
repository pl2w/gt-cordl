#pragma once
// IWYU pragma private; include "GlobalNamespace/ArtilleryCannonState.hpp"
#include "GlobalNamespace/zzzz__ArtilleryCannonState_CrankSyncState_impl.hpp"
#include "GlobalNamespace/zzzz__ArtilleryCannonState_FusionSyncState_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__ArtilleryCannonState_def.hpp"
#include "GlobalNamespace/zzzz__ArtilleryCannonState_ArtilleryMsg_def.hpp"
#include "GlobalNamespace/zzzz__ArtilleryCannonState_CrankSyncState_def.hpp"
#include "GlobalNamespace/zzzz__ArtilleryCannonState_FusionSyncState_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.add_onRotationChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)(::System::Action*)>(&::GlobalNamespace::ArtilleryCannonState::add_onRotationChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5bf8de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"add_onRotationChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.remove_onRotationChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)(::System::Action*)>(&::GlobalNamespace::ArtilleryCannonState::remove_onRotationChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5bf905c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"remove_onRotationChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.add_onFired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)(::System::Action*)>(&::GlobalNamespace::ArtilleryCannonState::add_onFired)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5bf8e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"add_onFired", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.remove_onFired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)(::System::Action*)>(&::GlobalNamespace::ArtilleryCannonState::remove_onFired)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5bf90f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"remove_onFired", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.get_CurrentPitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ArtilleryCannonState::*)()>(&::GlobalNamespace::ArtilleryCannonState::get_CurrentPitch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfa3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"get_CurrentPitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.get_CurrentYaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ArtilleryCannonState::*)()>(&::GlobalNamespace::ArtilleryCannonState::get_CurrentYaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfa3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"get_CurrentYaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.get_PitchMin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ArtilleryCannonState::*)()>(&::GlobalNamespace::ArtilleryCannonState::get_PitchMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfa3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"get_PitchMin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.get_PitchMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ArtilleryCannonState::*)()>(&::GlobalNamespace::ArtilleryCannonState::get_PitchMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfa3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"get_PitchMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.get_DegreesPerCrankDegree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ArtilleryCannonState::*)()>(&::GlobalNamespace::ArtilleryCannonState::get_DegreesPerCrankDegree)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfa3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"get_DegreesPerCrankDegree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.get_LocalActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ArtilleryCannonState::*)()>(&::GlobalNamespace::ArtilleryCannonState::get_LocalActorNr)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bfa3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"get_LocalActorNr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)()>(&::GlobalNamespace::ArtilleryCannonState::Awake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bfa46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                    {::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.UpdateLocalCrankState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)(int32_t, bool, float_t)>(&::GlobalNamespace::ArtilleryCannonState::UpdateLocalCrankState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bf932c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"UpdateLocalCrankState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.FindRigForActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (*)(int32_t)>(&::GlobalNamespace::ArtilleryCannonState::FindRigForActor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5bf94a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"FindRigForActor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.NotifyCrankGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArtilleryCannonState::*)(int32_t, bool)>(&::GlobalNamespace::ArtilleryCannonState::NotifyCrankGrabbed)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5bf97d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"NotifyCrankGrabbed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.NotifyCrankReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)(int32_t, float_t)>(&::GlobalNamespace::ArtilleryCannonState::NotifyCrankReleased)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5bf9a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"NotifyCrankReleased", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.NotifyCrankInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)(int32_t, float_t)>(&::GlobalNamespace::ArtilleryCannonState::NotifyCrankInput)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5bf9c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"NotifyCrankInput", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.TryFire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArtilleryCannonState::*)()>(&::GlobalNamespace::ArtilleryCannonState::TryFire)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5bf9ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"TryFire", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.RPC_ArtilleryMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)(uint8_t, uint8_t, float_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::ArtilleryCannonState::RPC_ArtilleryMessage)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5bfa490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"RPC_ArtilleryMessage", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::ArtilleryCannonState::WriteDataPUN)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5bfa690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                    {::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::ArtilleryCannonState::ReadDataPUN)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5bfa7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                    {::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.ReadCrankSyncPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)(::Photon::Pun::PhotonStream*, ::by_ref<::GlobalNamespace::ArtilleryCannonState_CrankSyncState>, ::by_ref<float_t>, int32_t)>(&::GlobalNamespace::ArtilleryCannonState::ReadCrankSyncPUN)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5bfa8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"ReadCrankSyncPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ArtilleryCannonState_CrankSyncState>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.get_FusionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ArtilleryCannonState_FusionSyncState (::GlobalNamespace::ArtilleryCannonState::*)()>(&::GlobalNamespace::ArtilleryCannonState::get_FusionData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bfaa24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"get_FusionData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.set_FusionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)(::GlobalNamespace::ArtilleryCannonState_FusionSyncState)>(&::GlobalNamespace::ArtilleryCannonState::set_FusionData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bfaa84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"set_FusionData", {}, {::i2c::type_of<::GlobalNamespace::ArtilleryCannonState_FusionSyncState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)()>(&::GlobalNamespace::ArtilleryCannonState::WriteDataFusion)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5bfaae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                    {::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)()>(&::GlobalNamespace::ArtilleryCannonState::ReadDataFusion)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5bfab88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                    {::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.ReadCrankSyncFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)(::by_ref<::GlobalNamespace::ArtilleryCannonState_CrankSyncState>, ::by_ref<float_t>, int32_t, int32_t, bool, float_t)>(&::GlobalNamespace::ArtilleryCannonState::ReadCrankSyncFusion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5bfacc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"ReadCrankSyncFusion", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ArtilleryCannonState_CrankSyncState>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)()>(&::GlobalNamespace::ArtilleryCannonState::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bfad50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)(bool)>(&::GlobalNamespace::ArtilleryCannonState::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bfad64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                    {::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCannonState.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCannonState::*)()>(&::GlobalNamespace::ArtilleryCannonState::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bfadc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                    {::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_pitchMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchMin;
}
constexpr float_t const& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_pitchMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchMin;
}
constexpr void GlobalNamespace::ArtilleryCannonState::__cordl_internal_set_pitchMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitchMin = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_pitchMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchMax;
}
constexpr float_t const& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_pitchMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchMax;
}
constexpr void GlobalNamespace::ArtilleryCannonState::__cordl_internal_set_pitchMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitchMax = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_degreesPerCrankDegree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___degreesPerCrankDegree;
}
constexpr float_t const& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_degreesPerCrankDegree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___degreesPerCrankDegree;
}
constexpr void GlobalNamespace::ArtilleryCannonState::__cordl_internal_set_degreesPerCrankDegree(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___degreesPerCrankDegree = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_fireCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireCooldown;
}
constexpr float_t const& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_fireCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireCooldown;
}
constexpr void GlobalNamespace::ArtilleryCannonState::__cordl_internal_set_fireCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireCooldown = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_currentPitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPitch;
}
constexpr float_t const& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_currentPitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPitch;
}
constexpr void GlobalNamespace::ArtilleryCannonState::__cordl_internal_set_currentPitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPitch = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_currentYaw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentYaw;
}
constexpr float_t const& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_currentYaw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentYaw;
}
constexpr void GlobalNamespace::ArtilleryCannonState::__cordl_internal_set_currentYaw(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentYaw = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_lastFireTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFireTime;
}
constexpr float_t const& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_lastFireTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFireTime;
}
constexpr void GlobalNamespace::ArtilleryCannonState::__cordl_internal_set_lastFireTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFireTime = value;
}
constexpr ::GlobalNamespace::ArtilleryCannonState_CrankSyncState& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_pitchCrankSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchCrankSync;
}
constexpr ::GlobalNamespace::ArtilleryCannonState_CrankSyncState const& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_pitchCrankSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchCrankSync;
}
constexpr void GlobalNamespace::ArtilleryCannonState::__cordl_internal_set_pitchCrankSync(::GlobalNamespace::ArtilleryCannonState_CrankSyncState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitchCrankSync = value;
}
constexpr ::GlobalNamespace::ArtilleryCannonState_CrankSyncState& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_yawCrankSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yawCrankSync;
}
constexpr ::GlobalNamespace::ArtilleryCannonState_CrankSyncState const& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_yawCrankSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yawCrankSync;
}
constexpr void GlobalNamespace::ArtilleryCannonState::__cordl_internal_set_yawCrankSync(::GlobalNamespace::ArtilleryCannonState_CrankSyncState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yawCrankSync = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_pitchPendingGrabTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchPendingGrabTime;
}
constexpr float_t const& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_pitchPendingGrabTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchPendingGrabTime;
}
constexpr void GlobalNamespace::ArtilleryCannonState::__cordl_internal_set_pitchPendingGrabTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitchPendingGrabTime = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_yawPendingGrabTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yawPendingGrabTime;
}
constexpr float_t const& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_yawPendingGrabTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yawPendingGrabTime;
}
constexpr void GlobalNamespace::ArtilleryCannonState::__cordl_internal_set_yawPendingGrabTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yawPendingGrabTime = value;
}
constexpr ::System::Action*& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_onRotationChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRotationChanged;
}
constexpr ::System::Action* const& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_onRotationChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRotationChanged;
}
constexpr void GlobalNamespace::ArtilleryCannonState::__cordl_internal_set_onRotationChanged(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onRotationChanged = value;
}
constexpr ::System::Action*& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_onFired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFired;
}
constexpr ::System::Action* const& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get_onFired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFired;
}
constexpr void GlobalNamespace::ArtilleryCannonState::__cordl_internal_set_onFired(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFired = value;
}
constexpr ::GlobalNamespace::ArtilleryCannonState_FusionSyncState& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get__FusionData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FusionData;
}
constexpr ::GlobalNamespace::ArtilleryCannonState_FusionSyncState const& GlobalNamespace::ArtilleryCannonState::__cordl_internal_get__FusionData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FusionData;
}
constexpr void GlobalNamespace::ArtilleryCannonState::__cordl_internal_set__FusionData(::GlobalNamespace::ArtilleryCannonState_FusionSyncState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FusionData = value;
}
inline void GlobalNamespace::ArtilleryCannonState::add_onRotationChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"add_onRotationChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ArtilleryCannonState::remove_onRotationChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"remove_onRotationChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ArtilleryCannonState::add_onFired(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"add_onFired", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ArtilleryCannonState::remove_onFired(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"remove_onFired", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::ArtilleryCannonState::get_CurrentPitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"get_CurrentPitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::ArtilleryCannonState::get_CurrentYaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"get_CurrentYaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::ArtilleryCannonState::get_PitchMin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"get_PitchMin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::ArtilleryCannonState::get_PitchMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"get_PitchMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::ArtilleryCannonState::get_DegreesPerCrankDegree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"get_DegreesPerCrankDegree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ArtilleryCannonState::get_LocalActorNr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"get_LocalActorNr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannonState::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannonState::UpdateLocalCrankState(int32_t  crankIndex, bool  isLeftHand, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"UpdateLocalCrankState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crankIndex, isLeftHand, angle);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::ArtilleryCannonState::FindRigForActor(int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"FindRigForActor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(nullptr, ___internal_method, actorNr);
}
inline bool GlobalNamespace::ArtilleryCannonState::NotifyCrankGrabbed(int32_t  crankIndex, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"NotifyCrankGrabbed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, crankIndex, isLeftHand);
}
inline void GlobalNamespace::ArtilleryCannonState::NotifyCrankReleased(int32_t  crankIndex, float_t  finalAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"NotifyCrankReleased", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crankIndex, finalAngle);
}
inline void GlobalNamespace::ArtilleryCannonState::NotifyCrankInput(int32_t  crankIndex, float_t  degrees)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"NotifyCrankInput", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crankIndex, degrees);
}
inline bool GlobalNamespace::ArtilleryCannonState::TryFire()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"TryFire", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannonState::RPC_ArtilleryMessage(uint8_t  msgType, uint8_t  crankIndex, float_t  floatParam, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"RPC_ArtilleryMessage", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msgType, crankIndex, floatParam, info);
}
inline void GlobalNamespace::ArtilleryCannonState::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::ArtilleryCannonState::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::ArtilleryCannonState::ReadCrankSyncPUN(::Photon::Pun::PhotonStream*  stream, ::by_ref<::GlobalNamespace::ArtilleryCannonState_CrankSyncState>  crank, ::by_ref<float_t>  pendingTime, int32_t  localActor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"ReadCrankSyncPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ArtilleryCannonState_CrankSyncState>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, crank, pendingTime, localActor);
}
inline ::GlobalNamespace::ArtilleryCannonState_FusionSyncState GlobalNamespace::ArtilleryCannonState::get_FusionData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"get_FusionData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ArtilleryCannonState_FusionSyncState>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannonState::set_FusionData(::GlobalNamespace::ArtilleryCannonState_FusionSyncState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"set_FusionData", {}, {::i2c::type_of<::GlobalNamespace::ArtilleryCannonState_FusionSyncState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ArtilleryCannonState::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannonState::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannonState::ReadCrankSyncFusion(::by_ref<::GlobalNamespace::ArtilleryCannonState_CrankSyncState>  crank, ::by_ref<float_t>  pendingTime, int32_t  localActor, int32_t  incomingHolder, bool  incomingLeftHand, float_t  incomingAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {"ReadCrankSyncFusion", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ArtilleryCannonState_CrankSyncState>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crank, pendingTime, localActor, incomingHolder, incomingLeftHand, incomingAngle);
}
inline void GlobalNamespace::ArtilleryCannonState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCannonState::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::ArtilleryCannonState::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArtilleryCannonState*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ArtilleryCannonState* GlobalNamespace::ArtilleryCannonState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ArtilleryCannonState*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArtilleryCannonState::ArtilleryCannonState()   {
}

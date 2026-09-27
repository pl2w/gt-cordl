#pragma once
// IWYU pragma private; include "GlobalNamespace/SIPlayer.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_ProgressionData_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayer_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_ProgressionData_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_LimitedDepositType_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceType_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeNode_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePageId_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeSO_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionManager_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.get_LocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SIPlayer> (*)()>(&::GlobalNamespace::SIPlayer::get_LocalPlayer)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59d9cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"get_LocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.get_TotalGadgetLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::get_TotalGadgetLimit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59de84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"get_TotalGadgetLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dedfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)(bool)>(&::GlobalNamespace::SIPlayer::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dee04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.get_ActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::get_ActorNr)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59d6af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"get_ActorNr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.get_CurrentProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SIPlayer_ProgressionData (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::get_CurrentProgression)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59dee0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"get_CurrentProgression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::Awake)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x59dee28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::OnEnable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x59df274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::OnDisable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59df354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::Reset)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x59df40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SIPlayer> (*)(int32_t)>(&::GlobalNamespace::SIPlayer::Get)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x59dae30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.ClearPlayerCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SIPlayer::ClearPlayerCache)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59df558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"ClearPlayerCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SIPlayer> (*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::SIPlayer::Get)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x59df5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.SerializeNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)(::System::IO::BinaryWriter*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::SIPlayer::SerializeNetworkState)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x59df664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"SerializeNetworkState", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.DeserializeNetworkStateAndBurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::BinaryReader*, ::GlobalNamespace::SIPlayer*, ::GlobalNamespace::SuperInfectionManager*)>(&::GlobalNamespace::SIPlayer::DeserializeNetworkStateAndBurn)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x59df8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"DeserializeNetworkStateAndBurn", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::GlobalNamespace::SIPlayer*>(), ::i2c::type_of<::GlobalNamespace::SuperInfectionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.HasLimitedResourceBeenDeposited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIPlayer::*)(::GlobalNamespace::SIResource_LimitedDepositType)>(&::GlobalNamespace::SIPlayer::HasLimitedResourceBeenDeposited)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x59dff74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"HasLimitedResourceBeenDeposited", {}, {::i2c::type_of<::GlobalNamespace::SIResource_LimitedDepositType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.CanLimitedResourceBeDeposited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIPlayer::*)(::GlobalNamespace::SIResource_LimitedDepositType)>(&::GlobalNamespace::SIPlayer::CanLimitedResourceBeDeposited)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59e008c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"CanLimitedResourceBeDeposited", {}, {::i2c::type_of<::GlobalNamespace::SIResource_LimitedDepositType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.GatherResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)(::GlobalNamespace::SIResource_ResourceType, ::GlobalNamespace::SIResource_LimitedDepositType, int32_t)>(&::GlobalNamespace::SIPlayer::GatherResource)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x59e0180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"GatherResource", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>(), ::i2c::type_of<::GlobalNamespace::SIResource_LimitedDepositType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.GetBonusProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)(::GlobalNamespace::SuperInfectionManager*)>(&::GlobalNamespace::SIPlayer::GetBonusProgress)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59e066c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"GetBonusProgress", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.GetResourceAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SIPlayer::*)(::GlobalNamespace::SIResource_ResourceType)>(&::GlobalNamespace::SIPlayer::GetResourceAmount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59e07c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"GetResourceAmount", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.SetProgressionLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::SetProgressionLocal)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x59e07f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"SetProgressionLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.UpdateProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)(::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<::ArrayW<bool>>, int32_t, int32_t, int32_t, ::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::GlobalNamespace::SIPlayer::UpdateProgression)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x59dfe9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"UpdateProgression", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::ArrayW<bool>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.CelebrateIfQuestProgressMade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)(::GlobalNamespace::SIPlayer_ProgressionData)>(&::GlobalNamespace::SIPlayer::CelebrateIfQuestProgressMade)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x59e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"CelebrateIfQuestProgressMade", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer_ProgressionData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.TechPointGrantedCelebrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::TechPointGrantedCelebrate)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x59e0db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"TechPointGrantedCelebrate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.BonusProgressCelebrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::BonusProgressCelebrate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59e0734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"BonusProgressCelebrate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.AttemptUnlockNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIPlayer::*)(::GlobalNamespace::SIUpgradeType, ::GlobalNamespace::SuperInfectionManager*)>(&::GlobalNamespace::SIPlayer::AttemptUnlockNode)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x59e0fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"AttemptUnlockNode", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>(), ::i2c::type_of<::GlobalNamespace::SuperInfectionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.PlayerCanAffordNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIPlayer::*)(::GlobalNamespace::SITechTreeNode*)>(&::GlobalNamespace::SIPlayer::PlayerCanAffordNode)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x59e109c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"PlayerCanAffordNode", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.PurchaseNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)(::GlobalNamespace::SITechTreeNode*)>(&::GlobalNamespace::SIPlayer::PurchaseNode)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x59e12fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"PurchaseNode", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.NodeResearched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIPlayer::*)(::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SIPlayer::NodeResearched)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59e17e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"NodeResearched", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.GetUpgrades
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SIUpgradeSet (::GlobalNamespace::SIPlayer::*)(::GlobalNamespace::SITechTreePageId)>(&::GlobalNamespace::SIPlayer::GetUpgrades)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59de87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"GetUpgrades", {}, {::i2c::type_of<::GlobalNamespace::SITechTreePageId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.NodeParentsUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIPlayer::*)(::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SIPlayer::NodeParentsUnlocked)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x59e1850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"NodeParentsUnlocked", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.ResetTechTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::ResetTechTree)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x59e1924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"ResetTechTree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.ResetResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::ResetResources)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x59e1af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"ResetResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.SetAndBroadcastProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SIPlayer::SetAndBroadcastProgression)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59e076c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"SetAndBroadcastProgression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.SetAndBroadcastProgressionLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::SetAndBroadcastProgressionLocal)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x59e2028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"SetAndBroadcastProgressionLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.UpdateVisualsForAvailableQuestRedemption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::UpdateVisualsForAvailableQuestRedemption)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x59e0930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"UpdateVisualsForAvailableQuestRedemption", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.QuestsAvailableToClaim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::QuestsAvailableToClaim)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x59e0c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"QuestsAvailableToClaim", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.QuestAvailableToClaim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIPlayer::*)(int32_t)>(&::GlobalNamespace::SIPlayer::QuestAvailableToClaim)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x59e258c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"QuestAvailableToClaim", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.TriggerIdolDepositedCelebration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SIPlayer::TriggerIdolDepositedCelebration)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x59e26a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"TriggerIdolDepositedCelebration", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.ClearGadgetsOnLeaveZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::ClearGadgetsOnLeaveZone)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59e284c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"ClearGadgetsOnLeaveZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.add_OnKnockback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)(::System::Action_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::SIPlayer::add_OnKnockback)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x59e2900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"add_OnKnockback", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.remove_OnKnockback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)(::System::Action_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::SIPlayer::remove_OnKnockback)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x59e29b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"remove_OnKnockback", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.add_OnBlasterHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)(::System::Action*)>(&::GlobalNamespace::SIPlayer::add_OnBlasterHit)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59e2a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"add_OnBlasterHit", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.remove_OnBlasterHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)(::System::Action*)>(&::GlobalNamespace::SIPlayer::remove_OnBlasterHit)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59e2afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"remove_OnBlasterHit", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.add_OnBlasterSplashHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)(::System::Action*)>(&::GlobalNamespace::SIPlayer::add_OnBlasterSplashHit)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59e2b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"add_OnBlasterSplashHit", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.remove_OnBlasterSplashHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)(::System::Action*)>(&::GlobalNamespace::SIPlayer::remove_OnBlasterSplashHit)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59e2c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"remove_OnBlasterSplashHit", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.NotifyBlasterHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::NotifyBlasterHit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59e2cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"NotifyBlasterHit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.NotifyBlasterSplashHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::NotifyBlasterSplashHit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59e2cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"NotifyBlasterSplashHit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.PlayerKnockback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)(::UnityEngine::Vector3, bool, bool)>(&::GlobalNamespace::SIPlayer::PlayerKnockback)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x59e2d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"PlayerKnockback", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.PlayerHandHaptic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)(bool, float_t, float_t, bool)>(&::GlobalNamespace::SIPlayer::PlayerHandHaptic)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x59e2f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"PlayerHandHaptic", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::Tick)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x59e2ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer._TryUpdateSlotEntityCharge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GamePlayer*, int32_t, bool)>(&::GlobalNamespace::SIPlayer::_TryUpdateSlotEntityCharge)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x59e3128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"_TryUpdateSlotEntityCharge", {}, {::i2c::type_of<::GlobalNamespace::GamePlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer::*)()>(&::GlobalNamespace::SIPlayer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59e33b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GamePlayer>& GlobalNamespace::SIPlayer::__cordl_internal_get_gamePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamePlayer;
}
constexpr ::UnityW<::GlobalNamespace::GamePlayer> const& GlobalNamespace::SIPlayer::__cordl_internal_get_gamePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamePlayer;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_gamePlayer(::UnityW<::GlobalNamespace::GamePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gamePlayer = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::SIPlayer::__cordl_internal_get_clientToAuthorityRPCLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientToAuthorityRPCLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::SIPlayer::__cordl_internal_get_clientToAuthorityRPCLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientToAuthorityRPCLimiter;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_clientToAuthorityRPCLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientToAuthorityRPCLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::SIPlayer::__cordl_internal_get_clientToClientRPCLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientToClientRPCLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::SIPlayer::__cordl_internal_get_clientToClientRPCLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientToClientRPCLimiter;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_clientToClientRPCLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientToClientRPCLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::SIPlayer::__cordl_internal_get_authorityToClientRPCLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authorityToClientRPCLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::SIPlayer::__cordl_internal_get_authorityToClientRPCLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authorityToClientRPCLimiter;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_authorityToClientRPCLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authorityToClientRPCLimiter = value;
}
constexpr ::UnityW<::GlobalNamespace::SITechTreeSO>& GlobalNamespace::SIPlayer::__cordl_internal_get_progressionSORef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressionSORef;
}
constexpr ::UnityW<::GlobalNamespace::SITechTreeSO> const& GlobalNamespace::SIPlayer::__cordl_internal_get_progressionSORef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressionSORef;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_progressionSORef(::UnityW<::GlobalNamespace::SITechTreeSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressionSORef = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::SIPlayer::__cordl_internal_get_tpParticleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tpParticleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::SIPlayer::__cordl_internal_get_tpParticleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tpParticleSystem;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_tpParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tpParticleSystem = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIPlayer::__cordl_internal_get_bonusProgressionCelebrate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonusProgressionCelebrate;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIPlayer::__cordl_internal_get_bonusProgressionCelebrate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonusProgressionCelebrate;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_bonusProgressionCelebrate(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bonusProgressionCelebrate = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIPlayer::__cordl_internal_get_techPointGainedCelebrate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techPointGainedCelebrate;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIPlayer::__cordl_internal_get_techPointGainedCelebrate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techPointGainedCelebrate;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_techPointGainedCelebrate(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___techPointGainedCelebrate = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIPlayer::__cordl_internal_get_monkeIdolDepositCelebrate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkeIdolDepositCelebrate;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIPlayer::__cordl_internal_get_monkeIdolDepositCelebrate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkeIdolDepositCelebrate;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_monkeIdolDepositCelebrate(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monkeIdolDepositCelebrate = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIPlayer::__cordl_internal_get_questCompleteCelebrate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questCompleteCelebrate;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIPlayer::__cordl_internal_get_questCompleteCelebrate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questCompleteCelebrate;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_questCompleteCelebrate(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___questCompleteCelebrate = value;
}
constexpr int32_t& GlobalNamespace::SIPlayer::__cordl_internal_get_lastQuestsAvailableToClaim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastQuestsAvailableToClaim;
}
constexpr int32_t const& GlobalNamespace::SIPlayer::__cordl_internal_get_lastQuestsAvailableToClaim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastQuestsAvailableToClaim;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_lastQuestsAvailableToClaim(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastQuestsAvailableToClaim = value;
}
constexpr int32_t& GlobalNamespace::SIPlayer::__cordl_internal_get_exclusionZoneCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exclusionZoneCount;
}
constexpr int32_t const& GlobalNamespace::SIPlayer::__cordl_internal_get_exclusionZoneCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exclusionZoneCount;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_exclusionZoneCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exclusionZoneCount = value;
}
constexpr bool& GlobalNamespace::SIPlayer::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::SIPlayer::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr bool& GlobalNamespace::SIPlayer::__cordl_internal_get_netInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netInitialized;
}
constexpr bool const& GlobalNamespace::SIPlayer::__cordl_internal_get_netInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netInitialized;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_netInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netInitialized = value;
}
constexpr ::GlobalNamespace::SIPlayer_ProgressionData& GlobalNamespace::SIPlayer::__cordl_internal_get_currentProgression()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentProgression;
}
constexpr ::GlobalNamespace::SIPlayer_ProgressionData const& GlobalNamespace::SIPlayer::__cordl_internal_get_currentProgression() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentProgression;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_currentProgression(::GlobalNamespace::SIPlayer_ProgressionData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentProgression = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::SIPlayer::__cordl_internal_get_activePlayerGadgets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activePlayerGadgets;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::SIPlayer::__cordl_internal_get_activePlayerGadgets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activePlayerGadgets;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_activePlayerGadgets(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activePlayerGadgets = value;
}
constexpr ::System::Action_1<::UnityEngine::Vector3>*& GlobalNamespace::SIPlayer::__cordl_internal_get_OnKnockback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnKnockback;
}
constexpr ::System::Action_1<::UnityEngine::Vector3>* const& GlobalNamespace::SIPlayer::__cordl_internal_get_OnKnockback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnKnockback;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_OnKnockback(::System::Action_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnKnockback = value;
}
constexpr ::System::Action*& GlobalNamespace::SIPlayer::__cordl_internal_get_OnBlasterHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBlasterHit;
}
constexpr ::System::Action* const& GlobalNamespace::SIPlayer::__cordl_internal_get_OnBlasterHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBlasterHit;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_OnBlasterHit(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnBlasterHit = value;
}
constexpr ::System::Action*& GlobalNamespace::SIPlayer::__cordl_internal_get_OnBlasterSplashHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBlasterSplashHit;
}
constexpr ::System::Action* const& GlobalNamespace::SIPlayer::__cordl_internal_get_OnBlasterSplashHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBlasterSplashHit;
}
constexpr void GlobalNamespace::SIPlayer::__cordl_internal_set_OnBlasterSplashHit(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnBlasterSplashHit = value;
}
inline void GlobalNamespace::SIPlayer::setStaticF_siPlayerByActorNr(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SIPlayer>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SIPlayer>>*, "siPlayerByActorNr", ::GlobalNamespace::SIPlayer*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SIPlayer>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SIPlayer>>* GlobalNamespace::SIPlayer::getStaticF_siPlayerByActorNr()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SIPlayer>>*, "siPlayerByActorNr", ::GlobalNamespace::SIPlayer*>();
}
inline void GlobalNamespace::SIPlayer::setStaticF_progressionSO(::UnityW<::GlobalNamespace::SITechTreeSO>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::SITechTreeSO>, "progressionSO", ::GlobalNamespace::SIPlayer*>(std::forward<::UnityW<::GlobalNamespace::SITechTreeSO>>(value));
}
inline ::UnityW<::GlobalNamespace::SITechTreeSO> GlobalNamespace::SIPlayer::getStaticF_progressionSO()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::SITechTreeSO>, "progressionSO", ::GlobalNamespace::SIPlayer*>();
}
inline void GlobalNamespace::SIPlayer::setStaticF__debug_lastStaleSlotLogTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "_debug_lastStaleSlotLogTime", ::GlobalNamespace::SIPlayer*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::SIPlayer::getStaticF__debug_lastStaleSlotLogTime()  {
return ::cordl_internals::getStaticField<float_t, "_debug_lastStaleSlotLogTime", ::GlobalNamespace::SIPlayer*>();
}
inline ::UnityW<::GlobalNamespace::SIPlayer> GlobalNamespace::SIPlayer::get_LocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"get_LocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SIPlayer>>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::SIPlayer::get_TotalGadgetLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"get_TotalGadgetLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::SIPlayer::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIPlayer::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SIPlayer::get_ActorNr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"get_ActorNr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::SIPlayer_ProgressionData GlobalNamespace::SIPlayer::get_CurrentProgression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"get_CurrentProgression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SIPlayer_ProgressionData>(this, ___internal_method);
}
inline void GlobalNamespace::SIPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPlayer::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SIPlayer> GlobalNamespace::SIPlayer::Get(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SIPlayer>>(nullptr, ___internal_method, actorNumber);
}
inline void GlobalNamespace::SIPlayer::ClearPlayerCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"ClearPlayerCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SIPlayer> GlobalNamespace::SIPlayer::Get(::GlobalNamespace::VRRig*  vrRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SIPlayer>>(nullptr, ___internal_method, vrRig);
}
inline void GlobalNamespace::SIPlayer::SerializeNetworkState(::System::IO::BinaryWriter*  writer, ::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"SerializeNetworkState", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, player);
}
inline void GlobalNamespace::SIPlayer::DeserializeNetworkStateAndBurn(::System::IO::BinaryReader*  reader, ::GlobalNamespace::SIPlayer*  player, ::GlobalNamespace::SuperInfectionManager*  siManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"DeserializeNetworkStateAndBurn", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::GlobalNamespace::SIPlayer*>(), ::i2c::type_of<::GlobalNamespace::SuperInfectionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reader, player, siManager);
}
inline bool GlobalNamespace::SIPlayer::HasLimitedResourceBeenDeposited(::GlobalNamespace::SIResource_LimitedDepositType  limitedDepositType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"HasLimitedResourceBeenDeposited", {}, {::i2c::type_of<::GlobalNamespace::SIResource_LimitedDepositType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, limitedDepositType);
}
inline bool GlobalNamespace::SIPlayer::CanLimitedResourceBeDeposited(::GlobalNamespace::SIResource_LimitedDepositType  limitedDepositType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"CanLimitedResourceBeDeposited", {}, {::i2c::type_of<::GlobalNamespace::SIResource_LimitedDepositType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, limitedDepositType);
}
inline void GlobalNamespace::SIPlayer::GatherResource(::GlobalNamespace::SIResource_ResourceType  type, ::GlobalNamespace::SIResource_LimitedDepositType  limitedDepositType, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"GatherResource", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>(), ::i2c::type_of<::GlobalNamespace::SIResource_LimitedDepositType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, limitedDepositType, count);
}
inline void GlobalNamespace::SIPlayer::GetBonusProgress(::GlobalNamespace::SuperInfectionManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"GetBonusProgress", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager);
}
inline int32_t GlobalNamespace::SIPlayer::GetResourceAmount(::GlobalNamespace::SIResource_ResourceType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"GetResourceAmount", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, type);
}
inline void GlobalNamespace::SIPlayer::SetProgressionLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"SetProgressionLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPlayer::UpdateProgression(::ArrayW<int32_t>  resourceArray, ::ArrayW<int32_t>  limitedDepositTimeArray, ::ArrayW<::ArrayW<bool>>  techTreeData, int32_t  _stashedQuests, int32_t  _stashedBonusPoints, int32_t  _bonusProgress, ::ArrayW<int32_t>  _currentQuestIds, ::ArrayW<int32_t>  _currentQuestProgresses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"UpdateProgression", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::ArrayW<bool>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resourceArray, limitedDepositTimeArray, techTreeData, _stashedQuests, _stashedBonusPoints, _bonusProgress, _currentQuestIds, _currentQuestProgresses);
}
inline void GlobalNamespace::SIPlayer::CelebrateIfQuestProgressMade(::GlobalNamespace::SIPlayer_ProgressionData  newProgression)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"CelebrateIfQuestProgressMade", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer_ProgressionData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newProgression);
}
inline void GlobalNamespace::SIPlayer::TechPointGrantedCelebrate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"TechPointGrantedCelebrate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPlayer::BonusProgressCelebrate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"BonusProgressCelebrate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SIPlayer::AttemptUnlockNode(::GlobalNamespace::SIUpgradeType  upgrade, ::GlobalNamespace::SuperInfectionManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"AttemptUnlockNode", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>(), ::i2c::type_of<::GlobalNamespace::SuperInfectionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, upgrade, manager);
}
inline bool GlobalNamespace::SIPlayer::PlayerCanAffordNode(::GlobalNamespace::SITechTreeNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"PlayerCanAffordNode", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline void GlobalNamespace::SIPlayer::PurchaseNode(::GlobalNamespace::SITechTreeNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"PurchaseNode", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline bool GlobalNamespace::SIPlayer::NodeResearched(::GlobalNamespace::SIUpgradeType  upgrade)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"NodeResearched", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, upgrade);
}
inline ::GlobalNamespace::SIUpgradeSet GlobalNamespace::SIPlayer::GetUpgrades(::GlobalNamespace::SITechTreePageId  pageId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"GetUpgrades", {}, {::i2c::type_of<::GlobalNamespace::SITechTreePageId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SIUpgradeSet>(this, ___internal_method, pageId);
}
inline bool GlobalNamespace::SIPlayer::NodeParentsUnlocked(::GlobalNamespace::SIUpgradeType  upgrade)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"NodeParentsUnlocked", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, upgrade);
}
inline void GlobalNamespace::SIPlayer::ResetTechTree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"ResetTechTree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPlayer::ResetResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"ResetResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPlayer::SetAndBroadcastProgression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"SetAndBroadcastProgression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SIPlayer::SetAndBroadcastProgressionLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"SetAndBroadcastProgressionLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPlayer::UpdateVisualsForAvailableQuestRedemption()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"UpdateVisualsForAvailableQuestRedemption", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::SIPlayer::QuestsAvailableToClaim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"QuestsAvailableToClaim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::SIPlayer::QuestAvailableToClaim(int32_t  questIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"QuestAvailableToClaim", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, questIndex);
}
inline void GlobalNamespace::SIPlayer::TriggerIdolDepositedCelebration(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"TriggerIdolDepositedCelebration", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void GlobalNamespace::SIPlayer::ClearGadgetsOnLeaveZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"ClearGadgetsOnLeaveZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPlayer::add_OnKnockback(::System::Action_1<::UnityEngine::Vector3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"add_OnKnockback", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SIPlayer::remove_OnKnockback(::System::Action_1<::UnityEngine::Vector3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"remove_OnKnockback", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SIPlayer::add_OnBlasterHit(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"add_OnBlasterHit", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SIPlayer::remove_OnBlasterHit(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"remove_OnBlasterHit", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SIPlayer::add_OnBlasterSplashHit(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"add_OnBlasterSplashHit", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SIPlayer::remove_OnBlasterSplashHit(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"remove_OnBlasterSplashHit", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SIPlayer::NotifyBlasterHit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"NotifyBlasterHit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPlayer::NotifyBlasterSplashHit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"NotifyBlasterSplashHit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPlayer::PlayerKnockback(::UnityEngine::Vector3  directionAndMagnitude, bool  forceOffGround, bool  applyExclusionZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"PlayerKnockback", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, directionAndMagnitude, forceOffGround, applyExclusionZone);
}
inline void GlobalNamespace::SIPlayer::PlayerHandHaptic(bool  isLeft, float_t  hapticStrength, float_t  hapticDuration, bool  applyExclusionZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"PlayerHandHaptic", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeft, hapticStrength, hapticDuration, applyExclusionZone);
}
inline void GlobalNamespace::SIPlayer::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SIPlayer::_TryUpdateSlotEntityCharge(::GlobalNamespace::GamePlayer*  gamePlayer, int32_t  slotIndex, bool  isSupercharged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {"_TryUpdateSlotEntityCharge", {}, {::i2c::type_of<::GlobalNamespace::GamePlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gamePlayer, slotIndex, isSupercharged);
}
inline void GlobalNamespace::SIPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIPlayer* GlobalNamespace::SIPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIPlayer*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::SIPlayer::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::SIPlayer::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIPlayer::SIPlayer()   {
}

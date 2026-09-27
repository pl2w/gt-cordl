#pragma once
// IWYU pragma private; include "GlobalNamespace/GRTool.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_ToolParts_impl.hpp"
#include "GlobalNamespace/zzzz__GRTool_GRToolType_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GRBonusEntry_def.hpp"
#include "GlobalNamespace/zzzz__GRMeterEnergy_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_ToolParts_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_GRToolType_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityDebugComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntitySerialize_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRTool.add_OnEnergyChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)(::GlobalNamespace::GRTool_EnergyChangeEvent*)>(&::GlobalNamespace::GRTool::add_OnEnergyChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58b839c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"add_OnEnergyChange", {}, {::i2c::type_of<::GlobalNamespace::GRTool_EnergyChangeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.remove_OnEnergyChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)(::GlobalNamespace::GRTool_EnergyChangeEvent*)>(&::GlobalNamespace::GRTool::remove_OnEnergyChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58b8438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"remove_OnEnergyChange", {}, {::i2c::type_of<::GlobalNamespace::GRTool_EnergyChangeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.add_onToolUpgraded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)(::GlobalNamespace::GRTool_ToolUpgradedEvent*)>(&::GlobalNamespace::GRTool::add_onToolUpgraded)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58b84d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"add_onToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool_ToolUpgradedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.remove_onToolUpgraded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)(::GlobalNamespace::GRTool_ToolUpgradedEvent*)>(&::GlobalNamespace::GRTool::remove_onToolUpgraded)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58b8570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"remove_onToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool_ToolUpgradedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)()>(&::GlobalNamespace::GRTool::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b860c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)()>(&::GlobalNamespace::GRTool::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58b8610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)()>(&::GlobalNamespace::GRTool::OnEntityInit)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x58b873c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)()>(&::GlobalNamespace::GRTool::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b88b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)(int64_t, int64_t)>(&::GlobalNamespace::GRTool::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b88bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.GetEnergyMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRTool::*)()>(&::GlobalNamespace::GRTool::GetEnergyMax)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58b88c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"GetEnergyMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.GetEnergyUseCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRTool::*)()>(&::GlobalNamespace::GRTool::GetEnergyUseCost)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58b88dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"GetEnergyUseCost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.GetEnergyStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRTool::*)()>(&::GlobalNamespace::GRTool::GetEnergyStart)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58b8870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"GetEnergyStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)()>(&::GlobalNamespace::GRTool::OnEnable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x58b88f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)()>(&::GlobalNamespace::GRTool::OnDisable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x58b89cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.RefillEnergy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)(int32_t, ::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GRTool::RefillEnergy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58b8aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"RefillEnergy", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.RefillEnergy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)()>(&::GlobalNamespace::GRTool::RefillEnergy)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58b8b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"RefillEnergy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.UseEnergy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)()>(&::GlobalNamespace::GRTool::UseEnergy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58b8b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"UseEnergy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.HasEnoughEnergy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRTool::*)()>(&::GlobalNamespace::GRTool::HasEnoughEnergy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58b8c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"HasEnoughEnergy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.SetEnergy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)(int32_t)>(&::GlobalNamespace::GRTool::SetEnergy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58b8c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"SetEnergy", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.IsEnergyFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRTool::*)()>(&::GlobalNamespace::GRTool::IsEnergyFull)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58b8c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"IsEnergyFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.SetEnergyInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)(int32_t, ::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GRTool::SetEnergyInternal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58b8ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"SetEnergyInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.RefreshMeters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)()>(&::GlobalNamespace::GRTool::RefreshMeters)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58b86b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"RefreshMeters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.HasUpgradeInstalled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRTool::*)(::GlobalNamespace::GRToolProgressionManager_ToolParts)>(&::GlobalNamespace::GRTool::HasUpgradeInstalled)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x58b8cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"HasUpgradeInstalled", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.FindMatchingUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GRTool_Upgrade* (::GlobalNamespace::GRTool::*)(::GlobalNamespace::GRToolProgressionManager_ToolParts)>(&::GlobalNamespace::GRTool::FindMatchingUpgrade)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58b8d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"FindMatchingUpgrade", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.GetPointDistanceToUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GRTool::*)(::UnityEngine::Vector3, ::GlobalNamespace::GRTool_Upgrade*)>(&::GlobalNamespace::GRTool::GetPointDistanceToUpgrade)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x58b8e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"GetPointDistanceToUpgrade", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GRTool_Upgrade*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.GetUpgradeAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::GRTool::*)(::GlobalNamespace::GRTool_Upgrade*)>(&::GlobalNamespace::GRTool::GetUpgradeAttachTransform)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58b94bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"GetUpgradeAttachTransform", {}, {::i2c::type_of<::GlobalNamespace::GRTool_Upgrade*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.UpgradeTool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)(::GlobalNamespace::GRToolProgressionManager_ToolParts)>(&::GlobalNamespace::GRTool::UpgradeTool)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x58b9548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"UpgradeTool", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.ClearUpgradeSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)(int32_t)>(&::GlobalNamespace::GRTool::ClearUpgradeSlot)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x58b9b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"ClearUpgradeSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.OnGameEntitySerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::GRTool::OnGameEntitySerialize)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x58b9e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"OnGameEntitySerialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.OnGameEntityDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::GRTool::OnGameEntityDeserialize)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x58b9f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"OnGameEntityDeserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.GrabbedByPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)()>(&::GlobalNamespace::GRTool::GrabbedByPlayer)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x58ba094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"GrabbedByPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool.GetDebugTextLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)(::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(&::GlobalNamespace::GRTool::GetDebugTextLines)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x58ba1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool::*)()>(&::GlobalNamespace::GRTool::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x58ba310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::GRTool::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::GRTool::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::GRTool::__cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_Upgrade*>*& GlobalNamespace::GRTool::__cordl_internal_get_upgrades()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrades;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_Upgrade*>* const& GlobalNamespace::GRTool::__cordl_internal_get_upgrades() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrades;
}
constexpr void GlobalNamespace::GRTool::__cordl_internal_set_upgrades(::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_Upgrade*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrades = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_UpgradeSlot*>*& GlobalNamespace::GRTool::__cordl_internal_get_upgradeSlots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeSlots;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_UpgradeSlot*>* const& GlobalNamespace::GRTool::__cordl_internal_get_upgradeSlots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeSlots;
}
constexpr void GlobalNamespace::GRTool::__cordl_internal_set_upgradeSlots(::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_UpgradeSlot*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradeSlots = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRMeterEnergy>>*& GlobalNamespace::GRTool::__cordl_internal_get_energyMeters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___energyMeters;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRMeterEnergy>>* const& GlobalNamespace::GRTool::__cordl_internal_get_energyMeters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___energyMeters;
}
constexpr void GlobalNamespace::GRTool::__cordl_internal_set_energyMeters(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRMeterEnergy>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___energyMeters = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRTool::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRTool::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRTool::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::GlobalNamespace::GRTool_GRToolType& GlobalNamespace::GRTool::__cordl_internal_get_toolType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolType;
}
constexpr ::GlobalNamespace::GRTool_GRToolType const& GlobalNamespace::GRTool::__cordl_internal_get_toolType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolType;
}
constexpr void GlobalNamespace::GRTool::__cordl_internal_set_toolType(::GlobalNamespace::GRTool_GRToolType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolType = value;
}
constexpr int32_t& GlobalNamespace::GRTool::__cordl_internal_get_energy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___energy;
}
constexpr int32_t const& GlobalNamespace::GRTool::__cordl_internal_get_energy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___energy;
}
constexpr void GlobalNamespace::GRTool::__cordl_internal_set_energy(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___energy = value;
}
constexpr ::GlobalNamespace::GRTool_EnergyChangeEvent*& GlobalNamespace::GRTool::__cordl_internal_get_OnEnergyChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnergyChange;
}
constexpr ::GlobalNamespace::GRTool_EnergyChangeEvent* const& GlobalNamespace::GRTool::__cordl_internal_get_OnEnergyChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnergyChange;
}
constexpr void GlobalNamespace::GRTool::__cordl_internal_set_OnEnergyChange(::GlobalNamespace::GRTool_EnergyChangeEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEnergyChange = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRTool::__cordl_internal_get_UpgradeFXNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeFXNode;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRTool::__cordl_internal_get_UpgradeFXNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeFXNode;
}
constexpr void GlobalNamespace::GRTool::__cordl_internal_set_UpgradeFXNode(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpgradeFXNode = value;
}
constexpr ::GlobalNamespace::GRTool_ToolUpgradedEvent*& GlobalNamespace::GRTool::__cordl_internal_get_onToolUpgraded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onToolUpgraded;
}
constexpr ::GlobalNamespace::GRTool_ToolUpgradedEvent* const& GlobalNamespace::GRTool::__cordl_internal_get_onToolUpgraded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onToolUpgraded;
}
constexpr void GlobalNamespace::GRTool::__cordl_internal_set_onToolUpgraded(::GlobalNamespace::GRTool_ToolUpgradedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onToolUpgraded = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*& GlobalNamespace::GRTool::__cordl_internal_get_reservedMeshFilterSearchList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reservedMeshFilterSearchList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* const& GlobalNamespace::GRTool::__cordl_internal_get_reservedMeshFilterSearchList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reservedMeshFilterSearchList;
}
constexpr void GlobalNamespace::GRTool::__cordl_internal_set_reservedMeshFilterSearchList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reservedMeshFilterSearchList = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*& GlobalNamespace::GRTool::__cordl_internal_get_reservedMeshFilterSearchListSkinned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reservedMeshFilterSearchListSkinned;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SkinnedMeshRenderer>>* const& GlobalNamespace::GRTool::__cordl_internal_get_reservedMeshFilterSearchListSkinned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reservedMeshFilterSearchListSkinned;
}
constexpr void GlobalNamespace::GRTool::__cordl_internal_set_reservedMeshFilterSearchListSkinned(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reservedMeshFilterSearchListSkinned = value;
}
constexpr ::GlobalNamespace::GRTool_Upgrade*& GlobalNamespace::GRTool::__cordl_internal_get_upgradeListsAreValidFor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeListsAreValidFor;
}
constexpr ::GlobalNamespace::GRTool_Upgrade* const& GlobalNamespace::GRTool::__cordl_internal_get_upgradeListsAreValidFor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeListsAreValidFor;
}
constexpr void GlobalNamespace::GRTool::__cordl_internal_set_upgradeListsAreValidFor(::GlobalNamespace::GRTool_Upgrade*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradeListsAreValidFor = value;
}
inline void GlobalNamespace::GRTool::add_OnEnergyChange(::GlobalNamespace::GRTool_EnergyChangeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"add_OnEnergyChange", {}, {::i2c::type_of<::GlobalNamespace::GRTool_EnergyChangeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GRTool::remove_OnEnergyChange(::GlobalNamespace::GRTool_EnergyChangeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"remove_OnEnergyChange", {}, {::i2c::type_of<::GlobalNamespace::GRTool_EnergyChangeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GRTool::add_onToolUpgraded(::GlobalNamespace::GRTool_ToolUpgradedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"add_onToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool_ToolUpgradedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GRTool::remove_onToolUpgraded(::GlobalNamespace::GRTool_ToolUpgradedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"remove_onToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool_ToolUpgradedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GRTool::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRTool::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRTool::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRTool::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRTool::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline int32_t GlobalNamespace::GRTool::GetEnergyMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"GetEnergyMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRTool::GetEnergyUseCost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"GetEnergyUseCost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRTool::GetEnergyStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"GetEnergyStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRTool::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRTool::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRTool::RefillEnergy(int32_t  count, ::GlobalNamespace::GameEntityId  chargingEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"RefillEnergy", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count, chargingEntityId);
}
inline void GlobalNamespace::GRTool::RefillEnergy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"RefillEnergy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRTool::UseEnergy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"UseEnergy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRTool::HasEnoughEnergy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"HasEnoughEnergy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRTool::SetEnergy(int32_t  newEnergy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"SetEnergy", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newEnergy);
}
inline bool GlobalNamespace::GRTool::IsEnergyFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"IsEnergyFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRTool::SetEnergyInternal(int32_t  value, ::GlobalNamespace::GameEntityId  chargingEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"SetEnergyInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, chargingEntityId);
}
inline void GlobalNamespace::GRTool::RefreshMeters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"RefreshMeters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRTool::HasUpgradeInstalled(::GlobalNamespace::GRToolProgressionManager_ToolParts  upgradeID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"HasUpgradeInstalled", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, upgradeID);
}
inline ::GlobalNamespace::GRTool_Upgrade* GlobalNamespace::GRTool::FindMatchingUpgrade(::GlobalNamespace::GRToolProgressionManager_ToolParts  upgradeID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"FindMatchingUpgrade", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GRTool_Upgrade*>(this, ___internal_method, upgradeID);
}
inline float_t GlobalNamespace::GRTool::GetPointDistanceToUpgrade(::UnityEngine::Vector3  point, ::GlobalNamespace::GRTool_Upgrade*  upgrade)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"GetPointDistanceToUpgrade", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GRTool_Upgrade*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, point, upgrade);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::GRTool::GetUpgradeAttachTransform(::GlobalNamespace::GRTool_Upgrade*  upgrade)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"GetUpgradeAttachTransform", {}, {::i2c::type_of<::GlobalNamespace::GRTool_Upgrade*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, upgrade);
}
inline void GlobalNamespace::GRTool::UpgradeTool(::GlobalNamespace::GRToolProgressionManager_ToolParts  upgradeID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"UpgradeTool", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upgradeID);
}
inline void GlobalNamespace::GRTool::ClearUpgradeSlot(int32_t  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"ClearUpgradeSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slot);
}
inline void GlobalNamespace::GRTool::OnGameEntitySerialize(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"OnGameEntitySerialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::GRTool::OnGameEntityDeserialize(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"OnGameEntityDeserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void GlobalNamespace::GRTool::GrabbedByPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"GrabbedByPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRTool::GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strings);
}
inline void GlobalNamespace::GRTool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRTool* GlobalNamespace::GRTool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRTool*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntitySerialize"
constexpr  GlobalNamespace::GRTool::operator ::GlobalNamespace::IGameEntitySerialize*() noexcept {
return static_cast<::GlobalNamespace::IGameEntitySerialize*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntitySerialize"
constexpr ::GlobalNamespace::IGameEntitySerialize* GlobalNamespace::GRTool::i___GlobalNamespace__IGameEntitySerialize() noexcept {
return static_cast<::GlobalNamespace::IGameEntitySerialize*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GRTool::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GRTool::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr  GlobalNamespace::GRTool::operator ::GlobalNamespace::IGameEntityDebugComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr ::GlobalNamespace::IGameEntityDebugComponent* GlobalNamespace::GRTool::i___GlobalNamespace__IGameEntityDebugComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRTool::GRTool()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRTool_ToolUpgradedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool_ToolUpgradedEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::GRTool_ToolUpgradedEvent::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x58ba640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool_ToolUpgradedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool_ToolUpgradedEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool_ToolUpgradedEvent::*)(::GlobalNamespace::GRTool*)>(&::GlobalNamespace::GRTool_ToolUpgradedEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58ba748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRTool_ToolUpgradedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GRTool_ToolUpgradedEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool_ToolUpgradedEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::GRTool_ToolUpgradedEvent::*)(::GlobalNamespace::GRTool*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::GRTool_ToolUpgradedEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58ba75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRTool_ToolUpgradedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GRTool_ToolUpgradedEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool_ToolUpgradedEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool_ToolUpgradedEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::GRTool_ToolUpgradedEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58ba77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRTool_ToolUpgradedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GRTool_ToolUpgradedEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GRTool_ToolUpgradedEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool_ToolUpgradedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::GRTool_ToolUpgradedEvent::Invoke(::GlobalNamespace::GRTool*  tool)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRTool_ToolUpgradedEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool);
}
inline ::System::IAsyncResult* GlobalNamespace::GRTool_ToolUpgradedEvent::BeginInvoke(::GlobalNamespace::GRTool*  tool, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRTool_ToolUpgradedEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, tool, callback, object);
}
inline void GlobalNamespace::GRTool_ToolUpgradedEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRTool_ToolUpgradedEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::GRTool_ToolUpgradedEvent* GlobalNamespace::GRTool_ToolUpgradedEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRTool_ToolUpgradedEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRTool_ToolUpgradedEvent::GRTool_ToolUpgradedEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRTool_EnergyChangeEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool_EnergyChangeEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::GRTool_EnergyChangeEvent::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x58ba458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool_EnergyChangeEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool_EnergyChangeEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool_EnergyChangeEvent::*)(::GlobalNamespace::GRTool*, int32_t, ::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GRTool_EnergyChangeEvent::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58ba564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRTool_EnergyChangeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GRTool_EnergyChangeEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool_EnergyChangeEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::GRTool_EnergyChangeEvent::*)(::GlobalNamespace::GRTool*, int32_t, ::GlobalNamespace::GameEntityId, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::GRTool_EnergyChangeEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x58ba57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRTool_EnergyChangeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GRTool_EnergyChangeEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTool_EnergyChangeEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool_EnergyChangeEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::GRTool_EnergyChangeEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58ba634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRTool_EnergyChangeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GRTool_EnergyChangeEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GRTool_EnergyChangeEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool_EnergyChangeEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::GRTool_EnergyChangeEvent::Invoke(::GlobalNamespace::GRTool*  tool, int32_t  energyChange, ::GlobalNamespace::GameEntityId  chargingEntityId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRTool_EnergyChangeEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, energyChange, chargingEntityId);
}
inline ::System::IAsyncResult* GlobalNamespace::GRTool_EnergyChangeEvent::BeginInvoke(::GlobalNamespace::GRTool*  tool, int32_t  energyChange, ::GlobalNamespace::GameEntityId  chargingEntityId, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRTool_EnergyChangeEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, tool, energyChange, chargingEntityId, callback, object);
}
inline void GlobalNamespace::GRTool_EnergyChangeEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRTool_EnergyChangeEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::GRTool_EnergyChangeEvent* GlobalNamespace::GRTool_EnergyChangeEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRTool_EnergyChangeEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRTool_EnergyChangeEvent::GRTool_EnergyChangeEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRTool_UpgradeSlot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool_UpgradeSlot::*)()>(&::GlobalNamespace::GRTool_UpgradeSlot::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ba450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool_UpgradeSlot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GRTool_UpgradeSlot::__cordl_internal_get_DefaultVisibleItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultVisibleItems;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GRTool_UpgradeSlot::__cordl_internal_get_DefaultVisibleItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultVisibleItems;
}
constexpr void GlobalNamespace::GRTool_UpgradeSlot::__cordl_internal_set_DefaultVisibleItems(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultVisibleItems = value;
}
constexpr ::GlobalNamespace::GRTool_Upgrade*& GlobalNamespace::GRTool_UpgradeSlot::__cordl_internal_get_installedItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installedItem;
}
constexpr ::GlobalNamespace::GRTool_Upgrade* const& GlobalNamespace::GRTool_UpgradeSlot::__cordl_internal_get_installedItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installedItem;
}
constexpr void GlobalNamespace::GRTool_UpgradeSlot::__cordl_internal_set_installedItem(::GlobalNamespace::GRTool_Upgrade*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___installedItem = value;
}
inline void GlobalNamespace::GRTool_UpgradeSlot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool_UpgradeSlot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRTool_UpgradeSlot* GlobalNamespace::GRTool_UpgradeSlot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRTool_UpgradeSlot*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRTool_UpgradeSlot::GRTool_UpgradeSlot()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRTool_Upgrade._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTool_Upgrade::*)()>(&::GlobalNamespace::GRTool_Upgrade::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ba448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool_Upgrade*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts& GlobalNamespace::GRTool_Upgrade::__cordl_internal_get_UpgradeType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeType;
}
constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts const& GlobalNamespace::GRTool_Upgrade::__cordl_internal_get_UpgradeType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeType;
}
constexpr void GlobalNamespace::GRTool_Upgrade::__cordl_internal_set_UpgradeType(::GlobalNamespace::GRToolProgressionManager_ToolParts  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpgradeType = value;
}
constexpr int32_t& GlobalNamespace::GRTool_Upgrade::__cordl_internal_get_Slot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Slot;
}
constexpr int32_t const& GlobalNamespace::GRTool_Upgrade::__cordl_internal_get_Slot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Slot;
}
constexpr void GlobalNamespace::GRTool_Upgrade::__cordl_internal_set_Slot(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Slot = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GRTool_Upgrade::__cordl_internal_get_VisibleItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VisibleItem;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GRTool_Upgrade::__cordl_internal_get_VisibleItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VisibleItem;
}
constexpr void GlobalNamespace::GRTool_Upgrade::__cordl_internal_set_VisibleItem(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VisibleItem = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*& GlobalNamespace::GRTool_Upgrade::__cordl_internal_get_bonusEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonusEffects;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>* const& GlobalNamespace::GRTool_Upgrade::__cordl_internal_get_bonusEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonusEffects;
}
constexpr void GlobalNamespace::GRTool_Upgrade::__cordl_internal_set_bonusEffects(::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bonusEffects = value;
}
inline void GlobalNamespace::GRTool_Upgrade::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTool_Upgrade*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRTool_Upgrade* GlobalNamespace::GRTool_Upgrade::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRTool_Upgrade*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRTool_Upgrade::GRTool_Upgrade()   {
}

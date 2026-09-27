#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolProgressionManager.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_def.hpp"
#include "GlobalNamespace/zzzz__GRResearchStation_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_EmployeeMetadata_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_ToolParts_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionTree_EmployeeLevelRequirement_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionTree_def.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradeStation_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_GRToolType_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_DrillUpgradeLevel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.add_OnProgressionUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)(::System::Action*)>(&::GlobalNamespace::GRToolProgressionManager::add_OnProgressionUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58bf0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"add_OnProgressionUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.remove_OnProgressionUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)(::System::Action*)>(&::GlobalNamespace::GRToolProgressionManager::remove_OnProgressionUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58bf174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"remove_OnProgressionUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.SetPendingTreeToProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::SetPendingTreeToProcess)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58bf210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"SetPendingTreeToProcess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.UpdateInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::UpdateInventory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58bf21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"UpdateInventory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRToolProgressionManager::Init)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x58bf228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::Tick)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58bf67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.SendMothershipUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::SendMothershipUpdated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58bf6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"SendMothershipUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetPartMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* (::GlobalNamespace::GRToolProgressionManager::*)(::GlobalNamespace::GRToolProgressionManager_ToolParts)>(&::GlobalNamespace::GRToolProgressionManager::GetPartMetadata)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58bf6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetPartMetadata", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.PopulateToolPartMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::PopulateToolPartMetadata)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58bf4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateToolPartMetadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.PopulateEmployeeLevelMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::PopulateEmployeeLevelMetadata)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x58bf50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateEmployeeLevelMetadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.PopulateClubPartMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::PopulateClubPartMetadata)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x58bf768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateClubPartMetadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.PopulateFlashPartMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::PopulateFlashPartMetadata)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x58bfa6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateFlashPartMetadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.PopulateCollectorPartMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::PopulateCollectorPartMetadata)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x58bfd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateCollectorPartMetadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.PopulateLanternPartMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::PopulateLanternPartMetadata)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x58c0074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateLanternPartMetadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.PopulateShieldGunPartMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::PopulateShieldGunPartMetadata)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x58c0378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateShieldGunPartMetadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.PopulateDirectionalShieldPartMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::PopulateDirectionalShieldPartMetadata)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x58c067c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateDirectionalShieldPartMetadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.PopulateEnergyEfficiencyPartMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::PopulateEnergyEfficiencyPartMetadata)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x58c0980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateEnergyEfficiencyPartMetadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.PopulateRevivePartMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::PopulateRevivePartMetadata)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x58c0c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateRevivePartMetadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.PopulateDockWristPartMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::PopulateDockWristPartMetadata)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x58c0d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateDockWristPartMetadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.PopulateDropPodPartMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::PopulateDropPodPartMetadata)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x58c0fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateDropPodPartMetadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.PopulateHocketStickMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::PopulateHocketStickMetadata)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x58c12c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateHocketStickMetadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetRequiredEmployeeLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRToolProgressionManager::*)(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement)>(&::GlobalNamespace::GRToolProgressionManager::GetRequiredEmployeeLevel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58c13c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetRequiredEmployeeLevel", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetEmployeeLevelDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GRToolProgressionManager::*)(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement)>(&::GlobalNamespace::GRToolProgressionManager::GetEmployeeLevelDisplayName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58c1428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetEmployeeLevelDisplayName", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetNumberOfResearchPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::GetNumberOfResearchPoints)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58c1480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetNumberOfResearchPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetSupportedTools
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_GRToolType>* (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::GetSupportedTools)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58c1498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetSupportedTools", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetToolUpgrades
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* (::GlobalNamespace::GRToolProgressionManager::*)(::GlobalNamespace::GRTool_GRToolType)>(&::GlobalNamespace::GRToolProgressionManager::GetToolUpgrades)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58c14b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetToolUpgrades", {}, {::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetRecycleShiftCredit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRToolProgressionManager::*)(::GlobalNamespace::GRTool_GRToolType)>(&::GlobalNamespace::GRToolProgressionManager::GetRecycleShiftCredit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x58c14c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetRecycleShiftCredit", {}, {::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetShiftCreditCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolProgressionManager::*)(::GlobalNamespace::GRToolProgressionManager_ToolParts, ::by_ref<int32_t>)>(&::GlobalNamespace::GRToolProgressionManager::GetShiftCreditCost)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58c1598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetShiftCreditCost", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.AttemptToUnlockPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)(::GlobalNamespace::GRToolProgressionManager_ToolParts)>(&::GlobalNamespace::GRToolProgressionManager::AttemptToUnlockPart)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x58c164c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"AttemptToUnlockPart", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.IsPartUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolProgressionManager::*)(::GlobalNamespace::GRToolProgressionManager_ToolParts, ::by_ref<bool>)>(&::GlobalNamespace::GRToolProgressionManager::IsPartUnlocked)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58c171c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"IsPartUnlocked", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetPartUnlockEmployeeRequiredLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolProgressionManager::*)(::GlobalNamespace::GRToolProgressionManager_ToolParts, ::by_ref<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement>)>(&::GlobalNamespace::GRToolProgressionManager::GetPartUnlockEmployeeRequiredLevel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58c1794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetPartUnlockEmployeeRequiredLevel", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetPartUnlockJuiceCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolProgressionManager::*)(::GlobalNamespace::GRToolProgressionManager_ToolParts, ::by_ref<int32_t>)>(&::GlobalNamespace::GRToolProgressionManager::GetPartUnlockJuiceCost)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58c1758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetPartUnlockJuiceCost", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetPartUnlockRequiredParentParts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolProgressionManager::*)(::GlobalNamespace::GRToolProgressionManager_ToolParts, ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>*>)>(&::GlobalNamespace::GRToolProgressionManager::GetPartUnlockRequiredParentParts)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x58c17e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetPartUnlockRequiredParentParts", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetPlayerShiftCredit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolProgressionManager::*)(::by_ref<int32_t>)>(&::GlobalNamespace::GRToolProgressionManager::GetPlayerShiftCredit)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x58c1a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetPlayerShiftCredit", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetCurrentEmployeeLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::GetCurrentEmployeeLevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58c17d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetCurrentEmployeeLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetTreeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::GetTreeId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58c1ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetTreeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetDropPodLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::GetDropPodLevel)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58c1bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetDropPodLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetDropPodChasisLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::GetDropPodChasisLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58c1be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetDropPodChasisLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetDrillLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProgressionManager_DrillUpgradeLevel (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::GetDrillLevel)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58c1c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetDrillLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetJuiceCostForDrillUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRToolProgressionManager::*)(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel)>(&::GlobalNamespace::GRToolProgressionManager::GetJuiceCostForDrillUpgrade)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58c1d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetJuiceCostForDrillUpgrade", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_DrillUpgradeLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager.GetSRCostForDrillUpgradeLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRToolProgressionManager::*)(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel)>(&::GlobalNamespace::GRToolProgressionManager::GetSRCostForDrillUpgradeLevel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58c1d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetSRCostForDrillUpgradeLevel", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_DrillUpgradeLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager::*)()>(&::GlobalNamespace::GRToolProgressionManager::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x58c1d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement,::GlobalNamespace::GRToolProgressionManager_EmployeeMetadata>*& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_employeeLevelMetadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___employeeLevelMetadata;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement,::GlobalNamespace::GRToolProgressionManager_EmployeeMetadata>* const& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_employeeLevelMetadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___employeeLevelMetadata;
}
constexpr void GlobalNamespace::GRToolProgressionManager::__cordl_internal_set_employeeLevelMetadata(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement,::GlobalNamespace::GRToolProgressionManager_EmployeeMetadata>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___employeeLevelMetadata = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionManager_ToolParts,::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*>*& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_partMetadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partMetadata;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionManager_ToolParts,::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*>* const& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_partMetadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partMetadata;
}
constexpr void GlobalNamespace::GRToolProgressionManager::__cordl_internal_set_partMetadata(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionManager_ToolParts,::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partMetadata = value;
}
constexpr ::GlobalNamespace::GRToolProgressionTree*& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_toolProgressionTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolProgressionTree;
}
constexpr ::GlobalNamespace::GRToolProgressionTree* const& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_toolProgressionTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolProgressionTree;
}
constexpr void GlobalNamespace::GRToolProgressionManager::__cordl_internal_set_toolProgressionTree(::GlobalNamespace::GRToolProgressionTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolProgressionTree = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GRToolProgressionManager::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRResearchStation>>*& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_researchStations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___researchStations;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRResearchStation>>* const& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_researchStations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___researchStations;
}
constexpr void GlobalNamespace::GRToolProgressionManager::__cordl_internal_set_researchStations(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRResearchStation>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___researchStations = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradeStation>>*& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_toolUpgradeStations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolUpgradeStations;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradeStation>>* const& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_toolUpgradeStations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolUpgradeStations;
}
constexpr void GlobalNamespace::GRToolProgressionManager::__cordl_internal_set_toolUpgradeStations(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradeStation>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolUpgradeStations = value;
}
constexpr bool& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_pendingTreeToProcess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingTreeToProcess;
}
constexpr bool const& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_pendingTreeToProcess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingTreeToProcess;
}
constexpr void GlobalNamespace::GRToolProgressionManager::__cordl_internal_set_pendingTreeToProcess(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingTreeToProcess = value;
}
constexpr bool& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_pendingUpdateInventory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingUpdateInventory;
}
constexpr bool const& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_pendingUpdateInventory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingUpdateInventory;
}
constexpr void GlobalNamespace::GRToolProgressionManager::__cordl_internal_set_pendingUpdateInventory(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingUpdateInventory = value;
}
constexpr ::System::Action*& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_OnProgressionUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnProgressionUpdated;
}
constexpr ::System::Action* const& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_OnProgressionUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnProgressionUpdated;
}
constexpr void GlobalNamespace::GRToolProgressionManager::__cordl_internal_set_OnProgressionUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnProgressionUpdated = value;
}
constexpr bool& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_sendUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendUpdate;
}
constexpr bool const& GlobalNamespace::GRToolProgressionManager::__cordl_internal_get_sendUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendUpdate;
}
constexpr void GlobalNamespace::GRToolProgressionManager::__cordl_internal_set_sendUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendUpdate = value;
}
inline void GlobalNamespace::GRToolProgressionManager::add_OnProgressionUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"add_OnProgressionUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GRToolProgressionManager::remove_OnProgressionUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"remove_OnProgressionUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GRToolProgressionManager::SetPendingTreeToProcess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"SetPendingTreeToProcess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionManager::UpdateInventory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"UpdateInventory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionManager::Init(::GlobalNamespace::GhostReactor*  ghostReactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ghostReactor);
}
inline void GlobalNamespace::GRToolProgressionManager::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionManager::SendMothershipUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"SendMothershipUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* GlobalNamespace::GRToolProgressionManager::GetPartMetadata(::GlobalNamespace::GRToolProgressionManager_ToolParts  part)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetPartMetadata", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*>(this, ___internal_method, part);
}
inline void GlobalNamespace::GRToolProgressionManager::PopulateToolPartMetadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateToolPartMetadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionManager::PopulateEmployeeLevelMetadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateEmployeeLevelMetadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionManager::PopulateClubPartMetadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateClubPartMetadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionManager::PopulateFlashPartMetadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateFlashPartMetadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionManager::PopulateCollectorPartMetadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateCollectorPartMetadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionManager::PopulateLanternPartMetadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateLanternPartMetadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionManager::PopulateShieldGunPartMetadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateShieldGunPartMetadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionManager::PopulateDirectionalShieldPartMetadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateDirectionalShieldPartMetadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionManager::PopulateEnergyEfficiencyPartMetadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateEnergyEfficiencyPartMetadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionManager::PopulateRevivePartMetadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateRevivePartMetadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionManager::PopulateDockWristPartMetadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateDockWristPartMetadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionManager::PopulateDropPodPartMetadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateDropPodPartMetadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionManager::PopulateHocketStickMetadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"PopulateHocketStickMetadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRToolProgressionManager::GetRequiredEmployeeLevel(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement  employeeLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetRequiredEmployeeLevel", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, employeeLevel);
}
inline ::StringW GlobalNamespace::GRToolProgressionManager::GetEmployeeLevelDisplayName(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement  employeeLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetEmployeeLevelDisplayName", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, employeeLevel);
}
inline int32_t GlobalNamespace::GRToolProgressionManager::GetNumberOfResearchPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetNumberOfResearchPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_GRToolType>* GlobalNamespace::GRToolProgressionManager::GetSupportedTools()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetSupportedTools", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_GRToolType>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* GlobalNamespace::GRToolProgressionManager::GetToolUpgrades(::GlobalNamespace::GRTool_GRToolType  tool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetToolUpgrades", {}, {::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*>(this, ___internal_method, tool);
}
inline int32_t GlobalNamespace::GRToolProgressionManager::GetRecycleShiftCredit(::GlobalNamespace::GRTool_GRToolType  tool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetRecycleShiftCredit", {}, {::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, tool);
}
inline bool GlobalNamespace::GRToolProgressionManager::GetShiftCreditCost(::GlobalNamespace::GRToolProgressionManager_ToolParts  part, ::by_ref<int32_t>  shiftCreditCost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetShiftCreditCost", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, part, shiftCreditCost);
}
inline void GlobalNamespace::GRToolProgressionManager::AttemptToUnlockPart(::GlobalNamespace::GRToolProgressionManager_ToolParts  part)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"AttemptToUnlockPart", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, part);
}
inline bool GlobalNamespace::GRToolProgressionManager::IsPartUnlocked(::GlobalNamespace::GRToolProgressionManager_ToolParts  part, ::by_ref<bool>  unlocked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"IsPartUnlocked", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, part, unlocked);
}
inline bool GlobalNamespace::GRToolProgressionManager::GetPartUnlockEmployeeRequiredLevel(::GlobalNamespace::GRToolProgressionManager_ToolParts  part, ::by_ref<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement>  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetPartUnlockEmployeeRequiredLevel", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, part, level);
}
inline bool GlobalNamespace::GRToolProgressionManager::GetPartUnlockJuiceCost(::GlobalNamespace::GRToolProgressionManager_ToolParts  part, ::by_ref<int32_t>  juiceCost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetPartUnlockJuiceCost", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, part, juiceCost);
}
inline bool GlobalNamespace::GRToolProgressionManager::GetPartUnlockRequiredParentParts(::GlobalNamespace::GRToolProgressionManager_ToolParts  part, ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>*>  requiredParts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetPartUnlockRequiredParentParts", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, part, requiredParts);
}
inline bool GlobalNamespace::GRToolProgressionManager::GetPlayerShiftCredit(::by_ref<int32_t>  playerShiftCredit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetPlayerShiftCredit", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerShiftCredit);
}
inline ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement GlobalNamespace::GRToolProgressionManager::GetCurrentEmployeeLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetCurrentEmployeeLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GRToolProgressionManager::GetTreeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetTreeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRToolProgressionManager::GetDropPodLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetDropPodLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRToolProgressionManager::GetDropPodChasisLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetDropPodChasisLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel GlobalNamespace::GRToolProgressionManager::GetDrillLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetDrillLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProgressionManager_DrillUpgradeLevel>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRToolProgressionManager::GetJuiceCostForDrillUpgrade(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel  upgradeLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetJuiceCostForDrillUpgrade", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_DrillUpgradeLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, upgradeLevel);
}
inline int32_t GlobalNamespace::GRToolProgressionManager::GetSRCostForDrillUpgradeLevel(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {"GetSRCostForDrillUpgradeLevel", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_DrillUpgradeLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, level);
}
inline void GlobalNamespace::GRToolProgressionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolProgressionManager* GlobalNamespace::GRToolProgressionManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolProgressionManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolProgressionManager::GRToolProgressionManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::*)()>(&::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c1e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::StringW& GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::__cordl_internal_get_description()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___description;
}
constexpr ::StringW const& GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::__cordl_internal_get_description() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___description;
}
constexpr void GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::__cordl_internal_set_description(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___description = value;
}
constexpr ::StringW& GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::__cordl_internal_get_annotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___annotation;
}
constexpr ::StringW const& GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::__cordl_internal_get_annotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___annotation;
}
constexpr void GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::__cordl_internal_set_annotation(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___annotation = value;
}
constexpr int32_t& GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::__cordl_internal_get_shiftCreditCost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftCreditCost;
}
constexpr int32_t const& GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::__cordl_internal_get_shiftCreditCost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftCreditCost;
}
constexpr void GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::__cordl_internal_set_shiftCreditCost(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftCreditCost = value;
}
inline void GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData::GRToolProgressionManager_ToolProgressionMetaData()   {
}

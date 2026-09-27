#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolProgressionTree.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_ToolParts_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionTree_EmployeeLevelRequirement_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionTree_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_ToolParts_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionTree_EmployeeLevelRequirement_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionTree_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_GRToolType_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__UserHydratedNodeDefinition_def.hpp"
#include "GlobalNamespace/zzzz__UserHydratedProgressionTreeResponse_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::_ctor)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x58c1e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)(::GlobalNamespace::GhostReactor*, ::GlobalNamespace::GRToolProgressionManager*)>(&::GlobalNamespace::GRToolProgressionTree::Init)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x58c2c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>(), ::i2c::type_of<::GlobalNamespace::GRToolProgressionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.GetTreeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::GetTreeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c2e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"GetTreeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.GetSupportedTools
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_GRToolType>* (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::GetSupportedTools)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x58c2e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"GetSupportedTools", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.GetToolUpgrades
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* (::GlobalNamespace::GRToolProgressionTree::*)(::GlobalNamespace::GRTool_GRToolType)>(&::GlobalNamespace::GRToolProgressionTree::GetToolUpgrades)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58c308c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"GetToolUpgrades", {}, {::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.GetToolNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* (::GlobalNamespace::GRToolProgressionTree::*)(::GlobalNamespace::GRTool_GRToolType)>(&::GlobalNamespace::GRToolProgressionTree::GetToolNode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58c331c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"GetToolNode", {}, {::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.GetPartNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* (::GlobalNamespace::GRToolProgressionTree::*)(::GlobalNamespace::GRToolProgressionManager_ToolParts)>(&::GlobalNamespace::GRToolProgressionTree::GetPartNode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58c33b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"GetPartNode", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.RefreshProgressionTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::RefreshProgressionTree)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x58c2df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"RefreshProgressionTree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.RefreshUserInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::RefreshUserInventory)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x58c2e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"RefreshUserInventory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.OnProgressionTreeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::OnProgressionTreeUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x58c3444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"OnProgressionTreeUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.OnInventoryUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::OnInventoryUpdated)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x58c37f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"OnInventoryUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.GetCurrentEmploymentLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::GetCurrentEmploymentLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c396c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"GetCurrentEmploymentLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.AddToolProgressionChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*, ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*>)>(&::GlobalNamespace::GRToolProgressionTree::AddToolProgressionChildren)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x58c3150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"AddToolProgressionChildren", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.GetNumberOfResearchPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::GetNumberOfResearchPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c3974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"GetNumberOfResearchPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.InitializeToolMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::InitializeToolMapping)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x58c218c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeToolMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.InitializeClubPartMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::InitializeClubPartMapping)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58c2384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeClubPartMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.InitializeFlashPartMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::InitializeFlashPartMapping)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58c2474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeFlashPartMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.InitializeCollectorPartMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::InitializeCollectorPartMapping)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58c25d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeCollectorPartMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.InitializeRevivePartMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::InitializeRevivePartMapping)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58c2564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeRevivePartMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.InitializeLanternPartMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::InitializeLanternPartMapping)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58c26c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeLanternPartMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.InitializeShieldGunPartMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::InitializeShieldGunPartMapping)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58c27b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeShieldGunPartMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.InitializeDirectionalShieldPartMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::InitializeDirectionalShieldPartMapping)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58c28a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeDirectionalShieldPartMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.InitializeEnergyEfficiencyPartMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::InitializeEnergyEfficiencyPartMapping)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58c2990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeEnergyEfficiencyPartMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.InitializeDockWristPartMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::InitializeDockWristPartMapping)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58c2a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeDockWristPartMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.InitializeDropPodPartMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::InitializeDropPodPartMapping)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58c2b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeDropPodPartMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.AddFakeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::AddFakeNodes)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x58c397c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"AddFakeNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.ProcessNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::ProcessNodes)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0x58c3f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"ProcessNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.PopulateMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)()>(&::GlobalNamespace::GRToolProgressionTree::PopulateMetadata)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x58c4728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"PopulateMetadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.GetEmployeeLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement (::GlobalNamespace::GRToolProgressionTree::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::GRToolProgressionTree::GetEmployeeLevel)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x58c4548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"GetEmployeeLevel", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.ProcessTreeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)(::GlobalNamespace::UserHydratedNodeDefinition*)>(&::GlobalNamespace::GRToolProgressionTree::ProcessTreeNode)> {
  constexpr static std::size_t size = 0x948;
  constexpr static std::size_t addrs = 0x58c48a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"ProcessTreeNode", {}, {::i2c::type_of<::GlobalNamespace::UserHydratedNodeDefinition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.ProcessToolProgressionTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)(::GlobalNamespace::UserHydratedProgressionTreeResponse*)>(&::GlobalNamespace::GRToolProgressionTree::ProcessToolProgressionTree)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x58c34cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"ProcessToolProgressionTree", {}, {::i2c::type_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree.AttemptToUnlockPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree::*)(::GlobalNamespace::GRToolProgressionManager_ToolParts)>(&::GlobalNamespace::GRToolProgressionTree::AttemptToUnlockPart)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x58c52cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"AttemptToUnlockPart", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_treeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeName;
}
constexpr ::StringW const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_treeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeName;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_treeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeName = value;
}
constexpr ::StringW& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_treeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeId;
}
constexpr ::StringW const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_treeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeId;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_treeId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeId = value;
}
constexpr ::StringW& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_researchPointsEntitlement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___researchPointsEntitlement;
}
constexpr ::StringW const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_researchPointsEntitlement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___researchPointsEntitlement;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_researchPointsEntitlement(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___researchPointsEntitlement = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRTool_GRToolType,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_toolTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolTree;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRTool_GRToolType,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_toolTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolTree;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_toolTree(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRTool_GRToolType,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolTree = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionManager_ToolParts,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_partTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partTree;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionManager_ToolParts,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_partTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partTree;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_partTree(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionManager_ToolParts,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partTree = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*>*& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_nodeTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeTree;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*>* const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_nodeTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeTree;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_nodeTree(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeTree = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRTool_GRToolType>*& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_toolMapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolMapping;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRTool_GRToolType>* const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_toolMapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolMapping;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_toolMapping(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRTool_GRToolType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolMapping = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRToolProgressionManager_ToolParts>*& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_partMapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partMapping;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRToolProgressionManager_ToolParts>* const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_partMapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partMapping;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_partMapping(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRToolProgressionManager_ToolParts>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partMapping = value;
}
constexpr ::StringW& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_autoUnlockNodeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoUnlockNodeId;
}
constexpr ::StringW const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_autoUnlockNodeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoUnlockNodeId;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_autoUnlockNodeId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoUnlockNodeId = value;
}
constexpr int32_t& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_currentResearchPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentResearchPoints;
}
constexpr int32_t const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_currentResearchPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentResearchPoints;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_currentResearchPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentResearchPoints = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager>& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_manager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager> const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_manager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_manager(::UnityW<::GlobalNamespace::GRToolProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manager = value;
}
constexpr ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_currentEmploymentLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentEmploymentLevel;
}
constexpr ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_currentEmploymentLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentEmploymentLevel;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_currentEmploymentLevel(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentEmploymentLevel = value;
}
constexpr ::StringW& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_internEntitlement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internEntitlement;
}
constexpr ::StringW const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_internEntitlement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internEntitlement;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_internEntitlement(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___internEntitlement = value;
}
constexpr ::StringW& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_partTimeEntitlement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partTimeEntitlement;
}
constexpr ::StringW const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_partTimeEntitlement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partTimeEntitlement;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_partTimeEntitlement(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partTimeEntitlement = value;
}
constexpr ::StringW& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_fullTimeEntitlement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullTimeEntitlement;
}
constexpr ::StringW const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_fullTimeEntitlement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullTimeEntitlement;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_fullTimeEntitlement(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullTimeEntitlement = value;
}
constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_pendingPartUnlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingPartUnlock;
}
constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts const& GlobalNamespace::GRToolProgressionTree::__cordl_internal_get_pendingPartUnlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingPartUnlock;
}
constexpr void GlobalNamespace::GRToolProgressionTree::__cordl_internal_set_pendingPartUnlock(::GlobalNamespace::GRToolProgressionManager_ToolParts  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingPartUnlock = value;
}
inline void GlobalNamespace::GRToolProgressionTree::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::Init(::GlobalNamespace::GhostReactor*  ghostReactor, ::GlobalNamespace::GRToolProgressionManager*  toolManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>(), ::i2c::type_of<::GlobalNamespace::GRToolProgressionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ghostReactor, toolManager);
}
inline ::StringW GlobalNamespace::GRToolProgressionTree::GetTreeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"GetTreeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_GRToolType>* GlobalNamespace::GRToolProgressionTree::GetSupportedTools()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"GetSupportedTools", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_GRToolType>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* GlobalNamespace::GRToolProgressionTree::GetToolUpgrades(::GlobalNamespace::GRTool_GRToolType  tool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"GetToolUpgrades", {}, {::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*>(this, ___internal_method, tool);
}
inline ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* GlobalNamespace::GRToolProgressionTree::GetToolNode(::GlobalNamespace::GRTool_GRToolType  tool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"GetToolNode", {}, {::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>(this, ___internal_method, tool);
}
inline ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* GlobalNamespace::GRToolProgressionTree::GetPartNode(::GlobalNamespace::GRToolProgressionManager_ToolParts  part)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"GetPartNode", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>(this, ___internal_method, part);
}
inline void GlobalNamespace::GRToolProgressionTree::RefreshProgressionTree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"RefreshProgressionTree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::RefreshUserInventory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"RefreshUserInventory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::OnProgressionTreeUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"OnProgressionTreeUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::OnInventoryUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"OnInventoryUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement GlobalNamespace::GRToolProgressionTree::GetCurrentEmploymentLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"GetCurrentEmploymentLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::AddToolProgressionChildren(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*  currentNode, ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*>  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"AddToolProgressionChildren", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentNode, list);
}
inline int32_t GlobalNamespace::GRToolProgressionTree::GetNumberOfResearchPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"GetNumberOfResearchPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::InitializeToolMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeToolMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::InitializeClubPartMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeClubPartMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::InitializeFlashPartMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeFlashPartMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::InitializeCollectorPartMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeCollectorPartMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::InitializeRevivePartMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeRevivePartMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::InitializeLanternPartMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeLanternPartMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::InitializeShieldGunPartMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeShieldGunPartMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::InitializeDirectionalShieldPartMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeDirectionalShieldPartMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::InitializeEnergyEfficiencyPartMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeEnergyEfficiencyPartMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::InitializeDockWristPartMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeDockWristPartMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::InitializeDropPodPartMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"InitializeDropPodPartMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::AddFakeNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"AddFakeNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::ProcessNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"ProcessNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolProgressionTree::PopulateMetadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"PopulateMetadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement GlobalNamespace::GRToolProgressionTree::GetEmployeeLevel(::System::Collections::Generic::List_1<::StringW>*  rawRequiredEntitlements)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"GetEmployeeLevel", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement>(this, ___internal_method, rawRequiredEntitlements);
}
inline void GlobalNamespace::GRToolProgressionTree::ProcessTreeNode(::GlobalNamespace::UserHydratedNodeDefinition*  treeNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"ProcessTreeNode", {}, {::i2c::type_of<::GlobalNamespace::UserHydratedNodeDefinition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, treeNode);
}
inline void GlobalNamespace::GRToolProgressionTree::ProcessToolProgressionTree(::GlobalNamespace::UserHydratedProgressionTreeResponse*  tree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"ProcessToolProgressionTree", {}, {::i2c::type_of<::GlobalNamespace::UserHydratedProgressionTreeResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tree);
}
inline void GlobalNamespace::GRToolProgressionTree::AttemptToUnlockPart(::GlobalNamespace::GRToolProgressionManager_ToolParts  part)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree*>(),
                        {"AttemptToUnlockPart", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager_ToolParts>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, part);
}
inline ::GlobalNamespace::GRToolProgressionTree* GlobalNamespace::GRToolProgressionTree::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolProgressionTree*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolProgressionTree::GRToolProgressionTree()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode::*)()>(&::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x58c51ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*& GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode::__cordl_internal_get_progressionNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressionNode;
}
constexpr ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* const& GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode::__cordl_internal_get_progressionNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressionNode;
}
constexpr void GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode::__cordl_internal_set_progressionNode(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressionNode = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode::__cordl_internal_get_requiredByIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredByIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode::__cordl_internal_get_requiredByIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredByIds;
}
constexpr void GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode::__cordl_internal_set_requiredByIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requiredByIds = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode::__cordl_internal_get_requiredEntitlements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredEntitlements;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode::__cordl_internal_get_requiredEntitlements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredEntitlements;
}
constexpr void GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode::__cordl_internal_set_requiredEntitlements(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requiredEntitlements = value;
}
inline void GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode* GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode::GRToolProgressionTree_GRToolProgressionRawNode()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::*)()>(&::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58c3e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr ::StringW const& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_set_id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr ::StringW& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr bool& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_unlocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlocked;
}
constexpr bool const& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_unlocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlocked;
}
constexpr void GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_set_unlocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlocked = value;
}
constexpr int32_t& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_researchCost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___researchCost;
}
constexpr int32_t const& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_researchCost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___researchCost;
}
constexpr void GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_set_researchCost(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___researchCost = value;
}
constexpr bool& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_rootNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootNode;
}
constexpr bool const& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_rootNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootNode;
}
constexpr void GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_set_rootNode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rootNode = value;
}
constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts const& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_set_type(::GlobalNamespace::GRToolProgressionManager_ToolParts  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_partMetadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partMetadata;
}
constexpr ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* const& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_partMetadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partMetadata;
}
constexpr void GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_set_partMetadata(::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partMetadata = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_children()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___children;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* const& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_children() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___children;
}
constexpr void GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_set_children(::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___children = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_parents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parents;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* const& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_parents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parents;
}
constexpr void GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_set_parents(::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parents = value;
}
constexpr ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_requiredEmployeeLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredEmployeeLevel;
}
constexpr ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement const& GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_get_requiredEmployeeLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredEmployeeLevel;
}
constexpr void GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::__cordl_internal_set_requiredEmployeeLevel(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requiredEmployeeLevel = value;
}
inline void GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode::GRToolProgressionTree_GRToolProgressionNode()   {
}

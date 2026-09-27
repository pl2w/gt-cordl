#pragma once
// IWYU pragma private; include "GlobalNamespace/GadgetNode.hpp"
#include "GlobalNamespace/zzzz__EAssetReleaseTier_impl.hpp"
#include "GlobalNamespace/zzzz__ESuperGameModes_impl.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceCost_impl.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_impl.hpp"
#include "GlobalNamespace/zzzz__TechTreeNodeBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GadgetNode_def.hpp"
#include "GlobalNamespace/zzzz__GadgetNode_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceCost_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeNode_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "GlobalNamespace/zzzz__TechTreeNodeBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "XNode/zzzz__NodePort_def.hpp"
#include "XNode/zzzz__Node_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.get_InEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::GadgetNode::get_InEditor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59d7948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"get_InEditor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GadgetNode::*)()>(&::GlobalNamespace::GadgetNode::get_IsValid)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59d7990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.get_IsDispensableGadget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GadgetNode::*)()>(&::GlobalNamespace::GadgetNode::get_IsDispensableGadget)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59d79a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"get_IsDispensableGadget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.get_ShowGadgetPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GadgetNode::*)()>(&::GlobalNamespace::GadgetNode::get_ShowGadgetPrefab)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59d7a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"get_ShowGadgetPrefab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.get_ShowExcludedGameModes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GadgetNode::*)()>(&::GlobalNamespace::GadgetNode::get_ShowExcludedGameModes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59d7a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"get_ShowExcludedGameModes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.get_ShowReleaseTier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GadgetNode::*)()>(&::GlobalNamespace::GadgetNode::get_ShowReleaseTier)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59d7ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"get_ShowReleaseTier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.ConfigureFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GadgetNode::*)(::GlobalNamespace::SITechTreeNode*)>(&::GlobalNamespace::GadgetNode::ConfigureFrom)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x59d7b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"ConfigureFrom", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.AssignParentUpgrades
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GadgetNode::*)(::ArrayW<::GlobalNamespace::SIUpgradeType>)>(&::GlobalNamespace::GadgetNode::AssignParentUpgrades)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x59d7bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"AssignParentUpgrades", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::SIUpgradeType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.GetParentUpgradeTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::SIUpgradeType>* (::GlobalNamespace::GadgetNode::*)()>(&::GlobalNamespace::GadgetNode::GetParentUpgradeTypes)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x59d7e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GetParentUpgradeTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.GenerateTechTreeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SITechTreeNode* (::GlobalNamespace::GadgetNode::*)()>(&::GlobalNamespace::GadgetNode::GenerateTechTreeNode)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x59d82c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GenerateTechTreeNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.GetDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GadgetNode::*)()>(&::GlobalNamespace::GadgetNode::GetDepth)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x59d83d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GetDepth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.GetTreeDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GadgetNode::*)()>(&::GlobalNamespace::GadgetNode::GetTreeDepth)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x59d877c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GetTreeDepth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.GetTreeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>* (::GlobalNamespace::GadgetNode::*)()>(&::GlobalNamespace::GadgetNode::GetTreeNodes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59d893c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GetTreeNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.GetTreeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GadgetNode::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>*)>(&::GlobalNamespace::GadgetNode::GetTreeNodes)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x59d89bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GetTreeNodes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.GetParentNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>* (::GlobalNamespace::GadgetNode::*)()>(&::GlobalNamespace::GadgetNode::GetParentNodes)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x59d8be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GetParentNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.GetChildNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>* (::GlobalNamespace::GadgetNode::*)()>(&::GlobalNamespace::GadgetNode::GetChildNodes)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x59d8e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GetChildNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.GetTreeWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GadgetNode::*)()>(&::GlobalNamespace::GadgetNode::GetTreeWidth)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x59d90b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GetTreeWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode.CostEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GadgetNode::*)(::ArrayW<::GlobalNamespace::SIResource_ResourceCost>)>(&::GlobalNamespace::GadgetNode::CostEquals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x59d9210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"CostEquals", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::SIResource_ResourceCost>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GadgetNode::*)()>(&::GlobalNamespace::GadgetNode::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59d92cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TechTreeNodeBase_Empty*& GlobalNamespace::GadgetNode::__cordl_internal_get_input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___input;
}
constexpr ::GlobalNamespace::TechTreeNodeBase_Empty* const& GlobalNamespace::GadgetNode::__cordl_internal_get_input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___input;
}
constexpr void GlobalNamespace::GadgetNode::__cordl_internal_set_input(::GlobalNamespace::TechTreeNodeBase_Empty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___input = value;
}
constexpr ::GlobalNamespace::TechTreeNodeBase_Empty*& GlobalNamespace::GadgetNode::__cordl_internal_get_output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
constexpr ::GlobalNamespace::TechTreeNodeBase_Empty* const& GlobalNamespace::GadgetNode::__cordl_internal_get_output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
constexpr void GlobalNamespace::GadgetNode::__cordl_internal_set_output(::GlobalNamespace::TechTreeNodeBase_Empty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___output = value;
}
constexpr ::GlobalNamespace::SIUpgradeType& GlobalNamespace::GadgetNode::__cordl_internal_get_upgradeType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeType;
}
constexpr ::GlobalNamespace::SIUpgradeType const& GlobalNamespace::GadgetNode::__cordl_internal_get_upgradeType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeType;
}
constexpr void GlobalNamespace::GadgetNode::__cordl_internal_set_upgradeType(::GlobalNamespace::SIUpgradeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradeType = value;
}
constexpr ::StringW& GlobalNamespace::GadgetNode::__cordl_internal_get_nickName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nickName;
}
constexpr ::StringW const& GlobalNamespace::GadgetNode::__cordl_internal_get_nickName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nickName;
}
constexpr void GlobalNamespace::GadgetNode::__cordl_internal_set_nickName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nickName = value;
}
constexpr ::StringW& GlobalNamespace::GadgetNode::__cordl_internal_get_description()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___description;
}
constexpr ::StringW const& GlobalNamespace::GadgetNode::__cordl_internal_get_description() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___description;
}
constexpr void GlobalNamespace::GadgetNode::__cordl_internal_set_description(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___description = value;
}
constexpr ::ArrayW<::GlobalNamespace::SIResource_ResourceCost>& GlobalNamespace::GadgetNode::__cordl_internal_get_nodeCost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeCost;
}
constexpr ::ArrayW<::GlobalNamespace::SIResource_ResourceCost> const& GlobalNamespace::GadgetNode::__cordl_internal_get_nodeCost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeCost;
}
constexpr void GlobalNamespace::GadgetNode::__cordl_internal_set_nodeCost(::ArrayW<::GlobalNamespace::SIResource_ResourceCost>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeCost = value;
}
constexpr bool& GlobalNamespace::GadgetNode::__cordl_internal_get_costOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costOverride;
}
constexpr bool const& GlobalNamespace::GadgetNode::__cordl_internal_get_costOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costOverride;
}
constexpr void GlobalNamespace::GadgetNode::__cordl_internal_set_costOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___costOverride = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GadgetNode::__cordl_internal_get_unlockedGadgetPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedGadgetPrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GadgetNode::__cordl_internal_get_unlockedGadgetPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedGadgetPrefab;
}
constexpr void GlobalNamespace::GadgetNode::__cordl_internal_set_unlockedGadgetPrefab(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedGadgetPrefab = value;
}
constexpr ::GlobalNamespace::ESuperGameModes& GlobalNamespace::GadgetNode::__cordl_internal_get_excludedGameModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___excludedGameModes;
}
constexpr ::GlobalNamespace::ESuperGameModes const& GlobalNamespace::GadgetNode::__cordl_internal_get_excludedGameModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___excludedGameModes;
}
constexpr void GlobalNamespace::GadgetNode::__cordl_internal_set_excludedGameModes(::GlobalNamespace::ESuperGameModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___excludedGameModes = value;
}
constexpr ::GlobalNamespace::EAssetReleaseTier& GlobalNamespace::GadgetNode::__cordl_internal_get_releaseTier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseTier;
}
constexpr ::GlobalNamespace::EAssetReleaseTier const& GlobalNamespace::GadgetNode::__cordl_internal_get_releaseTier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseTier;
}
constexpr void GlobalNamespace::GadgetNode::__cordl_internal_set_releaseTier(::GlobalNamespace::EAssetReleaseTier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releaseTier = value;
}
inline bool GlobalNamespace::GadgetNode::get_InEditor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"get_InEditor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::GadgetNode::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GadgetNode::get_IsDispensableGadget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"get_IsDispensableGadget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GadgetNode::get_ShowGadgetPrefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"get_ShowGadgetPrefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GadgetNode::get_ShowExcludedGameModes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"get_ShowExcludedGameModes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GadgetNode::get_ShowReleaseTier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"get_ShowReleaseTier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GadgetNode::ConfigureFrom(::GlobalNamespace::SITechTreeNode*  sourceNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"ConfigureFrom", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceNode);
}
inline void GlobalNamespace::GadgetNode::AssignParentUpgrades(::ArrayW<::GlobalNamespace::SIUpgradeType>  prerequisites)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"AssignParentUpgrades", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::SIUpgradeType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prerequisites);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SIUpgradeType>* GlobalNamespace::GadgetNode::GetParentUpgradeTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GetParentUpgradeTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::SIUpgradeType>*>(this, ___internal_method);
}
inline ::GlobalNamespace::SITechTreeNode* GlobalNamespace::GadgetNode::GenerateTechTreeNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GenerateTechTreeNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SITechTreeNode*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GadgetNode::GetDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GetDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GadgetNode::GetTreeDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GetTreeDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>* GlobalNamespace::GadgetNode::GetTreeNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GetTreeNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>*>(this, ___internal_method);
}
inline void GlobalNamespace::GadgetNode::GetTreeNodes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>*  nodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GetTreeNodes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodes);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>* GlobalNamespace::GadgetNode::GetParentNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GetParentNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>* GlobalNamespace::GadgetNode::GetChildNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GetChildNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GadgetNode::GetTreeWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"GetTreeWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::GadgetNode::CostEquals(::ArrayW<::GlobalNamespace::SIResource_ResourceCost>  cost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {"CostEquals", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::SIResource_ResourceCost>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cost);
}
inline void GlobalNamespace::GadgetNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GadgetNode* GlobalNamespace::GadgetNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GadgetNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GadgetNode::GadgetNode()   {
}
//  Writing Method size for method: ::GlobalNamespace::GadgetNode___c__DisplayClass23_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GadgetNode___c__DisplayClass23_0::*)()>(&::GlobalNamespace::GadgetNode___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d7e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode___c__DisplayClass23_0._AssignParentUpgrades_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GadgetNode___c__DisplayClass23_0::*)(::XNode::Node*)>(&::GlobalNamespace::GadgetNode___c__DisplayClass23_0::_AssignParentUpgrades_b__0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59d9368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode___c__DisplayClass23_0*>(),
                        {"<AssignParentUpgrades>b__0", {}, {::i2c::type_of<::XNode::Node*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SIUpgradeType& GlobalNamespace::GadgetNode___c__DisplayClass23_0::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr ::GlobalNamespace::SIUpgradeType const& GlobalNamespace::GadgetNode___c__DisplayClass23_0::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void GlobalNamespace::GadgetNode___c__DisplayClass23_0::__cordl_internal_set_id(::GlobalNamespace::SIUpgradeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
inline void GlobalNamespace::GadgetNode___c__DisplayClass23_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GadgetNode___c__DisplayClass23_0::_AssignParentUpgrades_b__0(::XNode::Node*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode___c__DisplayClass23_0*>(),
                        {"<AssignParentUpgrades>b__0", {}, {::i2c::type_of<::XNode::Node*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, n);
}
inline ::GlobalNamespace::GadgetNode___c__DisplayClass23_0* GlobalNamespace::GadgetNode___c__DisplayClass23_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GadgetNode___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GadgetNode___c__DisplayClass23_0::GadgetNode___c__DisplayClass23_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::GadgetNode___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GadgetNode___c::*)()>(&::GlobalNamespace::GadgetNode___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d934c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GadgetNode___c._GetParentUpgradeTypes_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::XNode::Node> (::GlobalNamespace::GadgetNode___c::*)(::XNode::NodePort*)>(&::GlobalNamespace::GadgetNode___c::_GetParentUpgradeTypes_b__24_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59d9354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode___c*>(),
                        {"<GetParentUpgradeTypes>b__24_0", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GadgetNode___c::setStaticF___9(::GlobalNamespace::GadgetNode___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GadgetNode___c*, "<>9", ::GlobalNamespace::GadgetNode___c*>(std::forward<::GlobalNamespace::GadgetNode___c*>(value));
}
inline ::GlobalNamespace::GadgetNode___c* GlobalNamespace::GadgetNode___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GadgetNode___c*, "<>9", ::GlobalNamespace::GadgetNode___c*>();
}
inline void GlobalNamespace::GadgetNode___c::setStaticF___9__24_0(::System::Func_2<::XNode::NodePort*,::UnityW<::XNode::Node>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::XNode::NodePort*,::UnityW<::XNode::Node>>*, "<>9__24_0", ::GlobalNamespace::GadgetNode___c*>(std::forward<::System::Func_2<::XNode::NodePort*,::UnityW<::XNode::Node>>*>(value));
}
inline ::System::Func_2<::XNode::NodePort*,::UnityW<::XNode::Node>>* GlobalNamespace::GadgetNode___c::getStaticF___9__24_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::XNode::NodePort*,::UnityW<::XNode::Node>>*, "<>9__24_0", ::GlobalNamespace::GadgetNode___c*>();
}
inline void GlobalNamespace::GadgetNode___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::XNode::Node> GlobalNamespace::GadgetNode___c::_GetParentUpgradeTypes_b__24_0(::XNode::NodePort*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GadgetNode___c*>(),
                        {"<GetParentUpgradeTypes>b__24_0", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::XNode::Node>>(this, ___internal_method, n);
}
inline ::GlobalNamespace::GadgetNode___c* GlobalNamespace::GadgetNode___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GadgetNode___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GadgetNode___c::GadgetNode___c()   {
}

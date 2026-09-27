#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreeNode.hpp"
#include "GlobalNamespace/zzzz__EAssetReleaseTier_impl.hpp"
#include "GlobalNamespace/zzzz__ESuperGameModes_impl.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceCost_impl.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SITechTreeNode_def.hpp"
#include "GlobalNamespace/zzzz__EAssetReleaseTier_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SITechTreeNode.get_EdReleaseTier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EAssetReleaseTier (::GlobalNamespace::SITechTreeNode::*)()>(&::GlobalNamespace::SITechTreeNode::get_EdReleaseTier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aef464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeNode*>(),
                        {"get_EdReleaseTier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeNode.set_EdReleaseTier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeNode::*)(::GlobalNamespace::EAssetReleaseTier)>(&::GlobalNamespace::SITechTreeNode::set_EdReleaseTier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aef46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeNode*>(),
                        {"set_EdReleaseTier", {}, {::i2c::type_of<::GlobalNamespace::EAssetReleaseTier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeNode.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreeNode::*)()>(&::GlobalNamespace::SITechTreeNode::get_IsValid)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5aef474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeNode*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeNode.get_IsAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreeNode::*)()>(&::GlobalNamespace::SITechTreeNode::get_IsAllowed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5aef4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeNode*>(),
                        {"get_IsAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeNode.get_IsDispensableGadget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreeNode::*)()>(&::GlobalNamespace::SITechTreeNode::get_IsDispensableGadget)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5aef550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeNode*>(),
                        {"get_IsDispensableGadget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeNode::*)()>(&::GlobalNamespace::SITechTreeNode::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5aef5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::EAssetReleaseTier& GlobalNamespace::SITechTreeNode::__cordl_internal_get_m_edReleaseTier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_edReleaseTier;
}
constexpr ::GlobalNamespace::EAssetReleaseTier const& GlobalNamespace::SITechTreeNode::__cordl_internal_get_m_edReleaseTier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_edReleaseTier;
}
constexpr void GlobalNamespace::SITechTreeNode::__cordl_internal_set_m_edReleaseTier(::GlobalNamespace::EAssetReleaseTier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_edReleaseTier = value;
}
constexpr ::GlobalNamespace::SIUpgradeType& GlobalNamespace::SITechTreeNode::__cordl_internal_get_upgradeType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeType;
}
constexpr ::GlobalNamespace::SIUpgradeType const& GlobalNamespace::SITechTreeNode::__cordl_internal_get_upgradeType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeType;
}
constexpr void GlobalNamespace::SITechTreeNode::__cordl_internal_set_upgradeType(::GlobalNamespace::SIUpgradeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradeType = value;
}
constexpr ::StringW& GlobalNamespace::SITechTreeNode::__cordl_internal_get_nickName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nickName;
}
constexpr ::StringW const& GlobalNamespace::SITechTreeNode::__cordl_internal_get_nickName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nickName;
}
constexpr void GlobalNamespace::SITechTreeNode::__cordl_internal_set_nickName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nickName = value;
}
constexpr ::StringW& GlobalNamespace::SITechTreeNode::__cordl_internal_get_description()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___description;
}
constexpr ::StringW const& GlobalNamespace::SITechTreeNode::__cordl_internal_get_description() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___description;
}
constexpr void GlobalNamespace::SITechTreeNode::__cordl_internal_set_description(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___description = value;
}
constexpr ::GlobalNamespace::ESuperGameModes& GlobalNamespace::SITechTreeNode::__cordl_internal_get_excludedGameModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___excludedGameModes;
}
constexpr ::GlobalNamespace::ESuperGameModes const& GlobalNamespace::SITechTreeNode::__cordl_internal_get_excludedGameModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___excludedGameModes;
}
constexpr void GlobalNamespace::SITechTreeNode::__cordl_internal_set_excludedGameModes(::GlobalNamespace::ESuperGameModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___excludedGameModes = value;
}
constexpr ::ArrayW<::GlobalNamespace::SIUpgradeType>& GlobalNamespace::SITechTreeNode::__cordl_internal_get_parentUpgrades()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentUpgrades;
}
constexpr ::ArrayW<::GlobalNamespace::SIUpgradeType> const& GlobalNamespace::SITechTreeNode::__cordl_internal_get_parentUpgrades() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentUpgrades;
}
constexpr void GlobalNamespace::SITechTreeNode::__cordl_internal_set_parentUpgrades(::ArrayW<::GlobalNamespace::SIUpgradeType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentUpgrades = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::SITechTreeNode::__cordl_internal_get_unlockedGadgetPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedGadgetPrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::SITechTreeNode::__cordl_internal_get_unlockedGadgetPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedGadgetPrefab;
}
constexpr void GlobalNamespace::SITechTreeNode::__cordl_internal_set_unlockedGadgetPrefab(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedGadgetPrefab = value;
}
constexpr ::ArrayW<::GlobalNamespace::SIResource_ResourceCost>& GlobalNamespace::SITechTreeNode::__cordl_internal_get_nodeCost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeCost;
}
constexpr ::ArrayW<::GlobalNamespace::SIResource_ResourceCost> const& GlobalNamespace::SITechTreeNode::__cordl_internal_get_nodeCost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeCost;
}
constexpr void GlobalNamespace::SITechTreeNode::__cordl_internal_set_nodeCost(::ArrayW<::GlobalNamespace::SIResource_ResourceCost>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeCost = value;
}
constexpr bool& GlobalNamespace::SITechTreeNode::__cordl_internal_get_costOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costOverride;
}
constexpr bool const& GlobalNamespace::SITechTreeNode::__cordl_internal_get_costOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costOverride;
}
constexpr void GlobalNamespace::SITechTreeNode::__cordl_internal_set_costOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___costOverride = value;
}
inline ::GlobalNamespace::EAssetReleaseTier GlobalNamespace::SITechTreeNode::get_EdReleaseTier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeNode*>(),
                        {"get_EdReleaseTier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EAssetReleaseTier>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeNode::set_EdReleaseTier(::GlobalNamespace::EAssetReleaseTier  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeNode*>(),
                        {"set_EdReleaseTier", {}, {::i2c::type_of<::GlobalNamespace::EAssetReleaseTier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SITechTreeNode::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeNode*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SITechTreeNode::get_IsAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeNode*>(),
                        {"get_IsAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SITechTreeNode::get_IsDispensableGadget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeNode*>(),
                        {"get_IsDispensableGadget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SITechTreeNode* GlobalNamespace::SITechTreeNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SITechTreeNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SITechTreeNode::SITechTreeNode()   {
}

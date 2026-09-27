#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreeUIPage.hpp"
#include "GlobalNamespace/zzzz__SITechTreePageId_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SITechTreeUIPage_def.hpp"
#include "GlobalNamespace/zzzz__GraphNode_1_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeNode_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePage_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeStation_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeUINode_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeUIPage___c__DisplayClass5_0_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeUIPage___c__DisplayClass5_1_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUIPage.Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeUIPage::*)(::GlobalNamespace::SITechTreeStation*, ::GlobalNamespace::SITechTreePage*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::SITechTreeUIPage::Configure)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5af1454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {"Configure", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeStation*>(), ::i2c::type_of<::GlobalNamespace::SITechTreePage*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUIPage.GetUINode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SITechTreeUINode> (::GlobalNamespace::SITechTreeUIPage::*)(::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SITechTreeUIPage::GetUINode)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5af5e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {"GetUINode", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUIPage.PopulateDefaultNodeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeUIPage::*)()>(&::GlobalNamespace::SITechTreeUIPage::PopulateDefaultNodeData)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5af41fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {"PopulateDefaultNodeData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUIPage.PopulatePlayerNodeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeUIPage::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SITechTreeUIPage::PopulatePlayerNodeData)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5af4338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {"PopulatePlayerNodeData", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUIPage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeUIPage::*)()>(&::GlobalNamespace::SITechTreeUIPage::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5af5fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUIPage._Configure_g__AddNodes_5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeUIPage::*)(::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*, ::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*, ::UnityEngine::Vector3, ::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0>)>(&::GlobalNamespace::SITechTreeUIPage::_Configure_g__AddNodes_5_0)> {
  constexpr static std::size_t size = 0x778;
  constexpr static std::size_t addrs = 0x5af51f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {"<Configure>g__AddNodes|5_0", {}, {::i2c::type_of<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>(), ::i2c::type_of<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUIPage._Configure_g__GetOrInstantiateUINode_5_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SITechTreeUINode> (::GlobalNamespace::SITechTreeUIPage::*)(::GlobalNamespace::SIUpgradeType, ::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0>)>(&::GlobalNamespace::SITechTreeUIPage::_Configure_g__GetOrInstantiateUINode_5_2)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5af604c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {"<Configure>g__GetOrInstantiateUINode|5_2", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUIPage._Configure_g__GetSpacing_5_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t, int32_t, ::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_1>)>(&::GlobalNamespace::SITechTreeUIPage::_Configure_g__GetSpacing_5_3)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5af6118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {"<Configure>g__GetSpacing|5_3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_1>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUIPage._Configure_g__AddUpgradeLines_5_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeUIPage::*)(::GlobalNamespace::SITechTreeUINode*, ::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0>)>(&::GlobalNamespace::SITechTreeUIPage::_Configure_g__AddUpgradeLines_5_1)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x5af5970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {"<Configure>g__AddUpgradeLines|5_1", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeUINode*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SITechTreeUINode>& GlobalNamespace::SITechTreeUIPage::__cordl_internal_get_nodePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodePrefab;
}
constexpr ::UnityW<::GlobalNamespace::SITechTreeUINode> const& GlobalNamespace::SITechTreeUIPage::__cordl_internal_get_nodePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodePrefab;
}
constexpr void GlobalNamespace::SITechTreeUIPage::__cordl_internal_set_nodePrefab(::UnityW<::GlobalNamespace::SITechTreeUINode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodePrefab = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::SITechTreeUIPage::__cordl_internal_get_upgradeLinePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeLinePrefab;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::SITechTreeUIPage::__cordl_internal_get_upgradeLinePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeLinePrefab;
}
constexpr void GlobalNamespace::SITechTreeUIPage::__cordl_internal_set_upgradeLinePrefab(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradeLinePrefab = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::SITechTreeUIPage::__cordl_internal_get_nodeContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeContainer;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::SITechTreeUIPage::__cordl_internal_get_nodeContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeContainer;
}
constexpr void GlobalNamespace::SITechTreeUIPage::__cordl_internal_set_nodeContainer(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeContainer = value;
}
constexpr ::GlobalNamespace::SITechTreePageId& GlobalNamespace::SITechTreeUIPage::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr ::GlobalNamespace::SITechTreePageId const& GlobalNamespace::SITechTreeUIPage::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void GlobalNamespace::SITechTreeUIPage::__cordl_internal_set_id(::GlobalNamespace::SITechTreePageId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*& GlobalNamespace::SITechTreeUIPage::__cordl_internal_get__pageNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageNodes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>* const& GlobalNamespace::SITechTreeUIPage::__cordl_internal_get__pageNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageNodes;
}
constexpr void GlobalNamespace::SITechTreeUIPage::__cordl_internal_set__pageNodes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pageNodes = value;
}
inline void GlobalNamespace::SITechTreeUIPage::Configure(::GlobalNamespace::SITechTreeStation*  techTreeStation, ::GlobalNamespace::SITechTreePage*  treePage, ::UnityEngine::Transform*  imageTarget, ::UnityEngine::Transform*  textTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {"Configure", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeStation*>(), ::i2c::type_of<::GlobalNamespace::SITechTreePage*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, techTreeStation, treePage, imageTarget, textTarget);
}
inline ::UnityW<::GlobalNamespace::SITechTreeUINode> GlobalNamespace::SITechTreeUIPage::GetUINode(::GlobalNamespace::SIUpgradeType  upgradeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {"GetUINode", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SITechTreeUINode>>(this, ___internal_method, upgradeType);
}
inline void GlobalNamespace::SITechTreeUIPage::PopulateDefaultNodeData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {"PopulateDefaultNodeData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeUIPage::PopulatePlayerNodeData(::GlobalNamespace::SIPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {"PopulatePlayerNodeData", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::SITechTreeUIPage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeUIPage::_Configure_g__AddNodes_5_0(::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*  parent, ::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*  node, ::UnityEngine::Vector3  position, ::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {"<Configure>g__AddNodes|5_0", {}, {::i2c::type_of<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>(), ::i2c::type_of<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, node, position, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityW<::GlobalNamespace::SITechTreeUINode> GlobalNamespace::SITechTreeUIPage::_Configure_g__GetOrInstantiateUINode_5_2(::GlobalNamespace::SIUpgradeType  upgradeType, ::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {"<Configure>g__GetOrInstantiateUINode|5_2", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SITechTreeUINode>>(this, ___internal_method, upgradeType, _cordl_fixed_empty_name_whitespace);
}
inline float_t GlobalNamespace::SITechTreeUIPage::_Configure_g__GetSpacing_5_3(int32_t  index, int32_t  childCount, ::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_1>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {"<Configure>g__GetSpacing|5_3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_1>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, index, childCount, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::SITechTreeUIPage::_Configure_g__AddUpgradeLines_5_1(::GlobalNamespace::SITechTreeUINode*  uiNode, ::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUIPage*>(),
                        {"<Configure>g__AddUpgradeLines|5_1", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeUINode*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uiNode, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::SITechTreeUIPage* GlobalNamespace::SITechTreeUIPage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SITechTreeUIPage*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SITechTreeUIPage::SITechTreeUIPage()   {
}

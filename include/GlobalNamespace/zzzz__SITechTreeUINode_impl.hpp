#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreeUINode.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SITechTreeUINode_def.hpp"
#include "GlobalNamespace/zzzz__GraphNode_1_def.hpp"
#include "GlobalNamespace/zzzz__ObjectHierarchyFlattener_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeNode_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeStation_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUINode.get_UpgradeLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* (::GlobalNamespace::SITechTreeUINode::*)()>(&::GlobalNamespace::SITechTreeUINode::get_UpgradeLines)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af49ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"get_UpgradeLines", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUINode.get_Parents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>* (::GlobalNamespace::SITechTreeUINode::*)()>(&::GlobalNamespace::SITechTreeUINode::get_Parents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af49b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"get_Parents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUINode.get_Children
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>* (::GlobalNamespace::SITechTreeUINode::*)()>(&::GlobalNamespace::SITechTreeUINode::get_Children)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af49bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"get_Children", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUINode.get_IsConfigured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreeUINode::*)()>(&::GlobalNamespace::SITechTreeUINode::get_IsConfigured)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5af49c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"get_IsConfigured", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUINode.SetTechTreeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeUINode::*)(::GlobalNamespace::SITechTreeStation*, ::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SITechTreeUINode::SetTechTreeNode)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5af49d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"SetTechTreeNode", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeStation*>(), ::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUINode.SetNodeLockStateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeUINode::*)(::UnityEngine::Color)>(&::GlobalNamespace::SITechTreeUINode::SetNodeLockStateColor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5af4d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"SetNodeLockStateColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUINode.SetGadgetUnlockNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeUINode::*)(bool)>(&::GlobalNamespace::SITechTreeUINode::SetGadgetUnlockNode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5af4d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"SetGadgetUnlockNode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUINode.GetMaxWordLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SITechTreeUINode::*)(::StringW)>(&::GlobalNamespace::SITechTreeUINode::GetMaxWordLength)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5af4cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"GetMaxWordLength", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUINode.AdjustPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeUINode::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SITechTreeUINode::AdjustPosition)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5af4f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"AdjustPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeUINode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeUINode::*)()>(&::GlobalNamespace::SITechTreeUINode::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5af50f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SIUpgradeType& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_upgradeType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeType;
}
constexpr ::GlobalNamespace::SIUpgradeType const& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_upgradeType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeType;
}
constexpr void GlobalNamespace::SITechTreeUINode::__cordl_internal_set_upgradeType(::GlobalNamespace::SIUpgradeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradeType = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_nodeNickName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeNickName;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_nodeNickName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeNickName;
}
constexpr void GlobalNamespace::SITechTreeUINode::__cordl_internal_set_nodeNickName(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeNickName = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_circle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___circle;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_circle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___circle;
}
constexpr void GlobalNamespace::SITechTreeUINode::__cordl_internal_set_circle(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___circle = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_triangle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triangle;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_triangle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triangle;
}
constexpr void GlobalNamespace::SITechTreeUINode::__cordl_internal_set_triangle(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triangle = value;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButton>& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButton> const& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr void GlobalNamespace::SITechTreeUINode::__cordl_internal_set_button(::UnityW<::GlobalNamespace::SITouchscreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_greenMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_greenMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenMat;
}
constexpr void GlobalNamespace::SITechTreeUINode::__cordl_internal_set_greenMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greenMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_redMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_redMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redMat;
}
constexpr void GlobalNamespace::SITechTreeUINode::__cordl_internal_set_redMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_blackMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blackMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_blackMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blackMat;
}
constexpr void GlobalNamespace::SITechTreeUINode::__cordl_internal_set_blackMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blackMat = value;
}
constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_imageFlattener()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___imageFlattener;
}
constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener> const& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_imageFlattener() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___imageFlattener;
}
constexpr void GlobalNamespace::SITechTreeUINode::__cordl_internal_set_imageFlattener(::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___imageFlattener = value;
}
constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_textFlattener()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textFlattener;
}
constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener> const& GlobalNamespace::SITechTreeUINode::__cordl_internal_get_textFlattener() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textFlattener;
}
constexpr void GlobalNamespace::SITechTreeUINode::__cordl_internal_set_textFlattener(::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textFlattener = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*& GlobalNamespace::SITechTreeUINode::__cordl_internal_get__UpgradeLines_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpgradeLines_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* const& GlobalNamespace::SITechTreeUINode::__cordl_internal_get__UpgradeLines_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpgradeLines_k__BackingField;
}
constexpr void GlobalNamespace::SITechTreeUINode::__cordl_internal_set__UpgradeLines_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpgradeLines_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*& GlobalNamespace::SITechTreeUINode::__cordl_internal_get__Parents_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parents_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>* const& GlobalNamespace::SITechTreeUINode::__cordl_internal_get__Parents_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parents_k__BackingField;
}
constexpr void GlobalNamespace::SITechTreeUINode::__cordl_internal_set__Parents_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Parents_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*& GlobalNamespace::SITechTreeUINode::__cordl_internal_get__Children_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Children_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>* const& GlobalNamespace::SITechTreeUINode::__cordl_internal_get__Children_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Children_k__BackingField;
}
constexpr void GlobalNamespace::SITechTreeUINode::__cordl_internal_set__Children_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Children_k__BackingField = value;
}
constexpr ::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*& GlobalNamespace::SITechTreeUINode::__cordl_internal_get__node()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____node;
}
constexpr ::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>* const& GlobalNamespace::SITechTreeUINode::__cordl_internal_get__node() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____node;
}
constexpr void GlobalNamespace::SITechTreeUINode::__cordl_internal_set__node(::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____node = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* GlobalNamespace::SITechTreeUINode::get_UpgradeLines()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"get_UpgradeLines", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>* GlobalNamespace::SITechTreeUINode::get_Parents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"get_Parents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>* GlobalNamespace::SITechTreeUINode::get_Children()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"get_Children", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*>(this, ___internal_method);
}
inline bool GlobalNamespace::SITechTreeUINode::get_IsConfigured()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"get_IsConfigured", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeUINode::SetTechTreeNode(::GlobalNamespace::SITechTreeStation*  techTreeStation, ::GlobalNamespace::SIUpgradeType  nodeUpgradeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"SetTechTreeNode", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeStation*>(), ::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, techTreeStation, nodeUpgradeType);
}
inline void GlobalNamespace::SITechTreeUINode::SetNodeLockStateColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"SetNodeLockStateColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::SITechTreeUINode::SetGadgetUnlockNode(bool  isUnlockNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"SetGadgetUnlockNode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isUnlockNode);
}
inline int32_t GlobalNamespace::SITechTreeUINode::GetMaxWordLength(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"GetMaxWordLength", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, text);
}
inline void GlobalNamespace::SITechTreeUINode::AdjustPosition(::UnityEngine::Vector3  positionOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {"AdjustPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positionOffset);
}
inline void GlobalNamespace::SITechTreeUINode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeUINode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SITechTreeUINode* GlobalNamespace::SITechTreeUINode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SITechTreeUINode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SITechTreeUINode::SITechTreeUINode()   {
}

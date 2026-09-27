#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreePage.hpp"
#include "GlobalNamespace/zzzz__EAssetReleaseTier_impl.hpp"
#include "GlobalNamespace/zzzz__ESuperGameModes_impl.hpp"
#include "GlobalNamespace/zzzz__SITechTreeNode_impl.hpp"
#include "GlobalNamespace/zzzz__SITechTreePageId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SITechTreePage_def.hpp"
#include "GlobalNamespace/zzzz__EAssetReleaseTier_def.hpp"
#include "GlobalNamespace/zzzz__ESuperGameModes_def.hpp"
#include "GlobalNamespace/zzzz__GraphNode_1_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeNode_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePage___c__DisplayClass27_0_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePage_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage.get_EdReleaseTier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EAssetReleaseTier (::GlobalNamespace::SITechTreePage::*)()>(&::GlobalNamespace::SITechTreePage::get_EdReleaseTier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aef5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"get_EdReleaseTier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage.set_EdReleaseTier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreePage::*)(::GlobalNamespace::EAssetReleaseTier)>(&::GlobalNamespace::SITechTreePage::set_EdReleaseTier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aef5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"set_EdReleaseTier", {}, {::i2c::type_of<::GlobalNamespace::EAssetReleaseTier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreePage::*)()>(&::GlobalNamespace::SITechTreePage::get_IsValid)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5aed800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage.get_IsAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreePage::*)()>(&::GlobalNamespace::SITechTreePage::get_IsAllowed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5aef5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"get_IsAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage.get_Roots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* (::GlobalNamespace::SITechTreePage::*)()>(&::GlobalNamespace::SITechTreePage::get_Roots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aef658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"get_Roots", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage.set_Roots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreePage::*)(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*)>(&::GlobalNamespace::SITechTreePage::set_Roots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aef660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"set_Roots", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage.get_AllNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* (::GlobalNamespace::SITechTreePage::*)()>(&::GlobalNamespace::SITechTreePage::get_AllNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aef668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"get_AllNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage.set_AllNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreePage::*)(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*)>(&::GlobalNamespace::SITechTreePage::set_AllNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aef670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"set_AllNodes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage.get_DispensableGadgets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>* (::GlobalNamespace::SITechTreePage::*)()>(&::GlobalNamespace::SITechTreePage::get_DispensableGadgets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aef678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"get_DispensableGadgets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage.set_DispensableGadgets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreePage::*)(::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>*)>(&::GlobalNamespace::SITechTreePage::set_DispensableGadgets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aef680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"set_DispensableGadgets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage.ClearGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreePage::*)()>(&::GlobalNamespace::SITechTreePage::ClearGraph)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5aef2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"ClearGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage.BuildGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreePage::*)()>(&::GlobalNamespace::SITechTreePage::BuildGraph)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x5aee9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"BuildGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage.PrintGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreePage::*)()>(&::GlobalNamespace::SITechTreePage::PrintGraph)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x5aef934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"PrintGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreePage::*)()>(&::GlobalNamespace::SITechTreePage::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5af0018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage._BuildGraph_g__PopulateGraph_27_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>* (::GlobalNamespace::SITechTreePage::*)(::GlobalNamespace::SITechTreeNode*, ::GlobalNamespace::ESuperGameModes, ::by_ref<::GlobalNamespace::SITechTreePage___c__DisplayClass27_0>)>(&::GlobalNamespace::SITechTreePage::_BuildGraph_g__PopulateGraph_27_0)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5aef688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"<BuildGraph>g__PopulateGraph|27_0", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeNode*>(), ::i2c::type_of<::GlobalNamespace::ESuperGameModes>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SITechTreePage___c__DisplayClass27_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage._PrintGraph_g__NodeListText_28_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*)>(&::GlobalNamespace::SITechTreePage::_PrintGraph_g__NodeListText_28_0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5aefef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"<PrintGraph>g__NodeListText|28_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::EAssetReleaseTier& GlobalNamespace::SITechTreePage::__cordl_internal_get_m_edReleaseTier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_edReleaseTier;
}
constexpr ::GlobalNamespace::EAssetReleaseTier const& GlobalNamespace::SITechTreePage::__cordl_internal_get_m_edReleaseTier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_edReleaseTier;
}
constexpr void GlobalNamespace::SITechTreePage::__cordl_internal_set_m_edReleaseTier(::GlobalNamespace::EAssetReleaseTier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_edReleaseTier = value;
}
constexpr ::StringW& GlobalNamespace::SITechTreePage::__cordl_internal_get_nickName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nickName;
}
constexpr ::StringW const& GlobalNamespace::SITechTreePage::__cordl_internal_get_nickName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nickName;
}
constexpr void GlobalNamespace::SITechTreePage::__cordl_internal_set_nickName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nickName = value;
}
constexpr ::GlobalNamespace::SITechTreePageId& GlobalNamespace::SITechTreePage::__cordl_internal_get_pageId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageId;
}
constexpr ::GlobalNamespace::SITechTreePageId const& GlobalNamespace::SITechTreePage::__cordl_internal_get_pageId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageId;
}
constexpr void GlobalNamespace::SITechTreePage::__cordl_internal_set_pageId(::GlobalNamespace::SITechTreePageId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageId = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::SITechTreePage::__cordl_internal_get_icon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___icon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::SITechTreePage::__cordl_internal_get_icon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___icon;
}
constexpr void GlobalNamespace::SITechTreePage::__cordl_internal_set_icon(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___icon = value;
}
constexpr ::GlobalNamespace::ESuperGameModes& GlobalNamespace::SITechTreePage::__cordl_internal_get_excludedGameModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___excludedGameModes;
}
constexpr ::GlobalNamespace::ESuperGameModes const& GlobalNamespace::SITechTreePage::__cordl_internal_get_excludedGameModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___excludedGameModes;
}
constexpr void GlobalNamespace::SITechTreePage::__cordl_internal_set_excludedGameModes(::GlobalNamespace::ESuperGameModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___excludedGameModes = value;
}
constexpr ::ArrayW<::GlobalNamespace::SITechTreeNode*>& GlobalNamespace::SITechTreePage::__cordl_internal_get_treeNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeNodes;
}
constexpr ::ArrayW<::GlobalNamespace::SITechTreeNode*> const& GlobalNamespace::SITechTreePage::__cordl_internal_get_treeNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeNodes;
}
constexpr void GlobalNamespace::SITechTreePage::__cordl_internal_set_treeNodes(::ArrayW<::GlobalNamespace::SITechTreeNode*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeNodes = value;
}
constexpr float_t& GlobalNamespace::SITechTreePage::__cordl_internal_get_costMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costMultiplier;
}
constexpr float_t const& GlobalNamespace::SITechTreePage::__cordl_internal_get_costMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costMultiplier;
}
constexpr void GlobalNamespace::SITechTreePage::__cordl_internal_set_costMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___costMultiplier = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*& GlobalNamespace::SITechTreePage::__cordl_internal_get__Roots_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Roots_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* const& GlobalNamespace::SITechTreePage::__cordl_internal_get__Roots_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Roots_k__BackingField;
}
constexpr void GlobalNamespace::SITechTreePage::__cordl_internal_set__Roots_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Roots_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*& GlobalNamespace::SITechTreePage::__cordl_internal_get__AllNodes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllNodes_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* const& GlobalNamespace::SITechTreePage::__cordl_internal_get__AllNodes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllNodes_k__BackingField;
}
constexpr void GlobalNamespace::SITechTreePage::__cordl_internal_set__AllNodes_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllNodes_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>*& GlobalNamespace::SITechTreePage::__cordl_internal_get__DispensableGadgets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DispensableGadgets_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>* const& GlobalNamespace::SITechTreePage::__cordl_internal_get__DispensableGadgets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DispensableGadgets_k__BackingField;
}
constexpr void GlobalNamespace::SITechTreePage::__cordl_internal_set__DispensableGadgets_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DispensableGadgets_k__BackingField = value;
}
inline ::GlobalNamespace::EAssetReleaseTier GlobalNamespace::SITechTreePage::get_EdReleaseTier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"get_EdReleaseTier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EAssetReleaseTier>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreePage::set_EdReleaseTier(::GlobalNamespace::EAssetReleaseTier  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"set_EdReleaseTier", {}, {::i2c::type_of<::GlobalNamespace::EAssetReleaseTier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SITechTreePage::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SITechTreePage::get_IsAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"get_IsAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* GlobalNamespace::SITechTreePage::get_Roots()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"get_Roots", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreePage::set_Roots(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"set_Roots", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* GlobalNamespace::SITechTreePage::get_AllNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"get_AllNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreePage::set_AllNodes(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"set_AllNodes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>* GlobalNamespace::SITechTreePage::get_DispensableGadgets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"get_DispensableGadgets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>*>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreePage::set_DispensableGadgets(::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"set_DispensableGadgets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SITechTreePage::ClearGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"ClearGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreePage::BuildGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"BuildGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreePage::PrintGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"PrintGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreePage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>* GlobalNamespace::SITechTreePage::_BuildGraph_g__PopulateGraph_27_0(::GlobalNamespace::SITechTreeNode*  node, ::GlobalNamespace::ESuperGameModes  parentExcludedGameModes, ::by_ref<::GlobalNamespace::SITechTreePage___c__DisplayClass27_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"<BuildGraph>g__PopulateGraph|27_0", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeNode*>(), ::i2c::type_of<::GlobalNamespace::ESuperGameModes>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SITechTreePage___c__DisplayClass27_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>(this, ___internal_method, node, parentExcludedGameModes, _cordl_fixed_empty_name_whitespace);
}
inline ::StringW GlobalNamespace::SITechTreePage::_PrintGraph_g__NodeListText_28_0(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  nodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage*>(),
                        {"<PrintGraph>g__NodeListText|28_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, nodes);
}
inline ::GlobalNamespace::SITechTreePage* GlobalNamespace::SITechTreePage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SITechTreePage*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SITechTreePage::SITechTreePage()   {
}
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreePage___c::*)()>(&::GlobalNamespace::SITechTreePage___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af0098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreePage___c._PrintGraph_b__28_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SITechTreePage___c::*)(::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*)>(&::GlobalNamespace::SITechTreePage___c::_PrintGraph_b__28_1)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5af00a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage___c*>(),
                        {"<PrintGraph>b__28_1", {}, {::i2c::type_of<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SITechTreePage___c::setStaticF___9(::GlobalNamespace::SITechTreePage___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SITechTreePage___c*, "<>9", ::GlobalNamespace::SITechTreePage___c*>(std::forward<::GlobalNamespace::SITechTreePage___c*>(value));
}
inline ::GlobalNamespace::SITechTreePage___c* GlobalNamespace::SITechTreePage___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SITechTreePage___c*, "<>9", ::GlobalNamespace::SITechTreePage___c*>();
}
inline void GlobalNamespace::SITechTreePage___c::setStaticF___9__28_1(::System::Func_2<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*,::StringW>*, "<>9__28_1", ::GlobalNamespace::SITechTreePage___c*>(std::forward<::System::Func_2<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*,::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*,::StringW>* GlobalNamespace::SITechTreePage___c::getStaticF___9__28_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*,::StringW>*, "<>9__28_1", ::GlobalNamespace::SITechTreePage___c*>();
}
inline void GlobalNamespace::SITechTreePage___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SITechTreePage___c::_PrintGraph_b__28_1(::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreePage___c*>(),
                        {"<PrintGraph>b__28_1", {}, {::i2c::type_of<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, n);
}
inline ::GlobalNamespace::SITechTreePage___c* GlobalNamespace::SITechTreePage___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SITechTreePage___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SITechTreePage___c::SITechTreePage___c()   {
}

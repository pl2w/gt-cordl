#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreePage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EAssetReleaseTier_def.hpp"
#include "GlobalNamespace/zzzz__ESuperGameModes_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeNode_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePageId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SITechTreePage)
namespace GlobalNamespace {
struct EAssetReleaseTier;
}
namespace GlobalNamespace {
struct ESuperGameModes;
}
namespace GlobalNamespace {
template<typename T>
class GraphNode_1;
}
namespace GlobalNamespace {
class SITechTreeNode;
}
namespace GlobalNamespace {
class SITechTreePage___c;
}
namespace GlobalNamespace {
struct SITechTreePage___c__DisplayClass27_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class SITechTreePage;
}
namespace GlobalNamespace {
class SITechTreePage___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SITechTreePage*);
MARK_REF_T(::GlobalNamespace::SITechTreePage___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITechTreePage*, "", "SITechTreePage");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITechTreePage___c*, "", "SITechTreePage/<>c");
// Dependencies EAssetReleaseTier, ESuperGameModes, SITechTreeNode, SITechTreePageId, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SITechTreePage
class CORDL_TYPE SITechTreePage : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::SITechTreePage___c;

using __c__DisplayClass27_0 = ::GlobalNamespace::SITechTreePage___c__DisplayClass27_0;

 __declspec(property(get=get_AllNodes, put=set_AllNodes)) ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  AllNodes;

 __declspec(property(get=get_DispensableGadgets, put=set_DispensableGadgets)) ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>*  DispensableGadgets;

 __declspec(property(get=get_EdReleaseTier, put=set_EdReleaseTier)) ::GlobalNamespace::EAssetReleaseTier  EdReleaseTier;

 __declspec(property(get=get_IsAllowed)) bool  IsAllowed;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Roots, put=set_Roots)) ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  Roots;

/// @brief Field <AllNodes>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__AllNodes_k__BackingField, put=__cordl_internal_set__AllNodes_k__BackingField)) ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  _AllNodes_k__BackingField;

/// @brief Field <DispensableGadgets>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__DispensableGadgets_k__BackingField, put=__cordl_internal_set__DispensableGadgets_k__BackingField)) ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>*  _DispensableGadgets_k__BackingField;

/// @brief Field <Roots>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Roots_k__BackingField, put=__cordl_internal_set__Roots_k__BackingField)) ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  _Roots_k__BackingField;

/// @brief Field costMultiplier, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_costMultiplier, put=__cordl_internal_set_costMultiplier)) float_t  costMultiplier;

/// @brief Field excludedGameModes, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_excludedGameModes, put=__cordl_internal_set_excludedGameModes)) ::GlobalNamespace::ESuperGameModes  excludedGameModes;

/// @brief Field icon, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_icon, put=__cordl_internal_set_icon)) ::UnityW<::UnityEngine::Sprite>  icon;

/// @brief Field m_edReleaseTier, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_edReleaseTier, put=__cordl_internal_set_m_edReleaseTier)) ::GlobalNamespace::EAssetReleaseTier  m_edReleaseTier;

/// @brief Field nickName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_nickName, put=__cordl_internal_set_nickName)) ::StringW  nickName;

/// @brief Field pageId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_pageId, put=__cordl_internal_set_pageId)) ::GlobalNamespace::SITechTreePageId  pageId;

/// @brief Field treeNodes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeNodes, put=__cordl_internal_set_treeNodes)) ::ArrayW<::GlobalNamespace::SITechTreeNode*>  treeNodes;

/// @brief Method BuildGraph, addr 0x5aee9ec, size 0x428, virtual false, abstract: false, final false
inline void BuildGraph() ;

/// @brief Method ClearGraph, addr 0x5aef2e4, size 0x28, virtual false, abstract: false, final false
inline void ClearGraph() ;

static inline ::GlobalNamespace::SITechTreePage* New_ctor() ;

/// @brief Method PrintGraph, addr 0x5aef934, size 0x5bc, virtual false, abstract: false, final false
inline void PrintGraph() ;

/// [CompilerGenerated]
/// @brief Method <BuildGraph>g__PopulateGraph|27_0, addr 0x5aef688, size 0x2ac, virtual false, abstract: false, final false
inline ::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>* _BuildGraph_g__PopulateGraph_27_0(::GlobalNamespace::SITechTreeNode*  node, ::GlobalNamespace::ESuperGameModes  parentExcludedGameModes, ::by_ref<::GlobalNamespace::SITechTreePage___c__DisplayClass27_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <PrintGraph>g__NodeListText|28_0, addr 0x5aefef0, size 0x128, virtual false, abstract: false, final false
static inline ::StringW _PrintGraph_g__NodeListText_28_0(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  nodes) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* const& __cordl_internal_get__AllNodes_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*& __cordl_internal_get__AllNodes_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>* const& __cordl_internal_get__DispensableGadgets_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>*& __cordl_internal_get__DispensableGadgets_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* const& __cordl_internal_get__Roots_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*& __cordl_internal_get__Roots_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_costMultiplier() const;

constexpr float_t& __cordl_internal_get_costMultiplier() ;

constexpr ::GlobalNamespace::ESuperGameModes const& __cordl_internal_get_excludedGameModes() const;

constexpr ::GlobalNamespace::ESuperGameModes& __cordl_internal_get_excludedGameModes() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_icon() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_icon() ;

constexpr ::GlobalNamespace::EAssetReleaseTier const& __cordl_internal_get_m_edReleaseTier() const;

constexpr ::GlobalNamespace::EAssetReleaseTier& __cordl_internal_get_m_edReleaseTier() ;

constexpr ::StringW const& __cordl_internal_get_nickName() const;

constexpr ::StringW& __cordl_internal_get_nickName() ;

constexpr ::GlobalNamespace::SITechTreePageId const& __cordl_internal_get_pageId() const;

constexpr ::GlobalNamespace::SITechTreePageId& __cordl_internal_get_pageId() ;

constexpr ::ArrayW<::GlobalNamespace::SITechTreeNode*> const& __cordl_internal_get_treeNodes() const;

constexpr ::ArrayW<::GlobalNamespace::SITechTreeNode*>& __cordl_internal_get_treeNodes() ;

constexpr void __cordl_internal_set__AllNodes_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  value) ;

constexpr void __cordl_internal_set__DispensableGadgets_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>*  value) ;

constexpr void __cordl_internal_set__Roots_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  value) ;

constexpr void __cordl_internal_set_costMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_excludedGameModes(::GlobalNamespace::ESuperGameModes  value) ;

constexpr void __cordl_internal_set_icon(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_m_edReleaseTier(::GlobalNamespace::EAssetReleaseTier  value) ;

constexpr void __cordl_internal_set_nickName(::StringW  value) ;

constexpr void __cordl_internal_set_pageId(::GlobalNamespace::SITechTreePageId  value) ;

constexpr void __cordl_internal_set_treeNodes(::ArrayW<::GlobalNamespace::SITechTreeNode*>  value) ;

/// @brief Method .ctor, addr 0x5af0018, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_AllNodes, addr 0x5aef668, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* get_AllNodes() ;

/// [CompilerGenerated]
/// @brief Method get_DispensableGadgets, addr 0x5aef678, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>* get_DispensableGadgets() ;

/// @brief Method get_EdReleaseTier, addr 0x5aef5e4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::EAssetReleaseTier get_EdReleaseTier() ;

/// @brief Method get_IsAllowed, addr 0x5aef5f4, size 0x64, virtual false, abstract: false, final false
inline bool get_IsAllowed() ;

/// @brief Method get_IsValid, addr 0x5aed800, size 0x38, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// [CompilerGenerated]
/// @brief Method get_Roots, addr 0x5aef658, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* get_Roots() ;

/// [CompilerGenerated]
/// @brief Method set_AllNodes, addr 0x5aef670, size 0x8, virtual false, abstract: false, final false
inline void set_AllNodes(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_DispensableGadgets, addr 0x5aef680, size 0x8, virtual false, abstract: false, final false
inline void set_DispensableGadgets(::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>*  value) ;

/// @brief Method set_EdReleaseTier, addr 0x5aef5ec, size 0x8, virtual false, abstract: false, final false
inline void set_EdReleaseTier(::GlobalNamespace::EAssetReleaseTier  value) ;

/// [CompilerGenerated]
/// @brief Method set_Roots, addr 0x5aef660, size 0x8, virtual false, abstract: false, final false
inline void set_Roots(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SITechTreePage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SITechTreePage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SITechTreePage(SITechTreePage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SITechTreePage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SITechTreePage(SITechTreePage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{362};

/// [SerializeField]
/// @brief Field m_edReleaseTier, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::EAssetReleaseTier  ___m_edReleaseTier;

/// @brief Field nickName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___nickName;

/// @brief Field pageId, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SITechTreePageId  ___pageId;

/// @brief Field icon, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___icon;

/// @brief Field excludedGameModes, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::ESuperGameModes  ___excludedGameModes;

/// [SerializeField]
/// @brief Field treeNodes, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SITechTreeNode*>  ___treeNodes;

/// @brief Field costMultiplier, offset: 0x40, size: 0x4, def value: None
 float_t  ___costMultiplier;

/// [CompilerGenerated]
/// @brief Field <Roots>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  ____Roots_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AllNodes>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  ____AllNodes_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DispensableGadgets>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreeNode*>*  ____DispensableGadgets_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITechTreePage, ___m_edReleaseTier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreePage, ___nickName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreePage, ___pageId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreePage, ___icon) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreePage, ___excludedGameModes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreePage, ___treeNodes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreePage, ___costMultiplier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreePage, ____Roots_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreePage, ____AllNodes_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreePage, ____DispensableGadgets_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITechTreePage) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SITechTreePage/<>c
class CORDL_TYPE SITechTreePage___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::SITechTreePage___c*  __9;

/// @brief Field <>9__28_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_1, put=setStaticF___9__28_1)) ::System::Func_2<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*,::StringW>*  __9__28_1;

static inline ::GlobalNamespace::SITechTreePage___c* New_ctor() ;

/// @brief Method <PrintGraph>b__28_1, addr 0x5af00a0, size 0x4c, virtual false, abstract: false, final false
inline ::StringW _PrintGraph_b__28_1(::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*  n) ;

/// @brief Method .ctor, addr 0x5af0098, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::SITechTreePage___c* getStaticF___9() ;

static inline ::System::Func_2<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*,::StringW>* getStaticF___9__28_1() ;

static inline void setStaticF___9(::GlobalNamespace::SITechTreePage___c*  value) ;

static inline void setStaticF___9__28_1(::System::Func_2<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SITechTreePage___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SITechTreePage___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SITechTreePage___c(SITechTreePage___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SITechTreePage___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SITechTreePage___c(SITechTreePage___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{360};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SITechTreePage___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseTreeViewController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNodeChildren_Enumerator_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNodeChildren_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattened_Enumerator_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildren_Enumerator_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildren_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseTreeViewController)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Hierarchy {
class HierarchyFlattened;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
class HierarchyViewModel;
}
namespace Unity::Hierarchy {
class Hierarchy;
}
namespace Unity::Hierarchy {
template<typename T>
class IHierarchyProperty_1;
}
namespace UnityEngine::UIElements {
class BaseTreeViewController__GetAllItemIds_d__23;
}
namespace UnityEngine::UIElements {
class BaseTreeViewController__GetChildrenIdsByIndex_d__41;
}
namespace UnityEngine::UIElements {
class BaseTreeViewController__GetChildrenIds_d__25;
}
namespace UnityEngine::UIElements {
class BaseTreeView;
}
namespace UnityEngine::UIElements {
template<typename T>
class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class ReusableTreeViewItem;
}
namespace UnityEngine::UIElements {
class TreeViewExpansionChangedArgs;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseTreeViewController;
}
namespace UnityEngine::UIElements {
class BaseTreeViewController__GetAllItemIds_d__23;
}
namespace UnityEngine::UIElements {
class BaseTreeViewController__GetChildrenIdsByIndex_d__41;
}
namespace UnityEngine::UIElements {
class BaseTreeViewController__GetChildrenIds_d__25;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::BaseTreeViewController*);
MARK_REF_T(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23*);
MARK_REF_T(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41*);
MARK_REF_T(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::BaseTreeViewController*, "UnityEngine.UIElements", "BaseTreeViewController");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23*, "UnityEngine.UIElements", "BaseTreeViewController/<GetAllItemIds>d__23");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41*, "UnityEngine.UIElements", "BaseTreeViewController/<GetChildrenIdsByIndex>d__41");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25*, "UnityEngine.UIElements", "BaseTreeViewController/<GetChildrenIds>d__25");
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.CollectionViewController
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseTreeViewController
class CORDL_TYPE BaseTreeViewController : public ::UnityEngine::UIElements::CollectionViewController {
public:
// Declarations
using _GetAllItemIds_d__23 = ::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23;

using _GetChildrenIdsByIndex_d__41 = ::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41;

using _GetChildrenIds_d__25 = ::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25;

/// @brief Field K_ExpandItemByIndex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_K_ExpandItemByIndex, put=setStaticF_K_ExpandItemByIndex)) ::Unity::Profiling::ProfilerMarker  K_ExpandItemByIndex;

 __declspec(property(get=get_baseTreeView)) ::UnityEngine::UIElements::BaseTreeView*  baseTreeView;

 __declspec(property(get=get_hierarchy, put=set_hierarchy)) ::Unity::Hierarchy::Hierarchy*  hierarchy;

/// @brief Field itemExpandedChanged, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemExpandedChanged, put=__cordl_internal_set_itemExpandedChanged)) ::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>*  itemExpandedChanged;

 __declspec(property(get=get_itemsSource, put=set_itemsSource)) ::System::Collections::IList*  itemsSource;

/// @brief Field m_Hierarchy, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Hierarchy, put=__cordl_internal_set_m_Hierarchy)) ::Unity::Hierarchy::Hierarchy*  m_Hierarchy;

/// @brief Field m_HierarchyFlattened, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HierarchyFlattened, put=__cordl_internal_set_m_HierarchyFlattened)) ::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened;

/// @brief Field m_HierarchyHasPendingChanged, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HierarchyHasPendingChanged, put=__cordl_internal_set_m_HierarchyHasPendingChanged)) bool  m_HierarchyHasPendingChanged;

/// @brief Field m_HierarchyViewModel, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HierarchyViewModel, put=__cordl_internal_set_m_HierarchyViewModel)) ::Unity::Hierarchy::HierarchyViewModel*  m_HierarchyViewModel;

/// @brief Field m_IdToNodeDictionary, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IdToNodeDictionary, put=__cordl_internal_set_m_IdToNodeDictionary)) ::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Hierarchy::HierarchyNode>*  m_IdToNodeDictionary;

/// @brief Field m_TreeViewDataProperty, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TreeViewDataProperty, put=__cordl_internal_set_m_TreeViewDataProperty)) ::Unity::Hierarchy::IHierarchyProperty_1<int32_t>*  m_TreeViewDataProperty;

/// @brief Method CanChangeExpandedState, addr 0xb736f10, size 0x8, virtual true, abstract: false, final false
inline bool CanChangeExpandedState(int32_t  id) ;

/// @brief Method ClearIdToNodeDictionary, addr 0xb737f2c, size 0x50, virtual false, abstract: false, final false
inline void ClearIdToNodeDictionary() ;

/// @brief Method CollapseItem, addr 0xb737a20, size 0xcc, virtual false, abstract: false, final false
inline void CollapseItem(int32_t  id, bool  collapseAllChildren, bool  refresh) ;

/// @brief Method CollapseItemByIndex, addr 0xb736900, size 0x70, virtual false, abstract: false, final false
inline void CollapseItemByIndex(int32_t  index, bool  collapseAllChildren, bool  refresh) ;

/// @brief Method CollapseItemByNode, addr 0xb7375c0, size 0x460, virtual false, abstract: false, final false
inline void CollapseItemByNode(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode>  node, bool  collapseAllChildren, bool  refresh) ;

/// @brief Method CreateNode, addr 0xb737d80, size 0x80, virtual false, abstract: false, final false
inline ::Unity::Hierarchy::HierarchyNode CreateNode(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode>  parent) ;

/// @brief Method DisposeHierarchy, addr 0xb734af0, size 0xc8, virtual false, abstract: false, final false
inline void DisposeHierarchy() ;

/// @brief Method Exists, addr 0xb736dcc, size 0x58, virtual false, abstract: false, final false
inline bool Exists(int32_t  id) ;

/// @brief Method ExpandItem, addr 0xb7374f4, size 0xcc, virtual false, abstract: false, final false
inline void ExpandItem(int32_t  id, bool  expandAllChildren, bool  refresh) ;

/// @brief Method ExpandItemByIndex, addr 0xb736970, size 0x15c, virtual false, abstract: false, final false
inline void ExpandItemByIndex(int32_t  index, bool  expandAllChildren, bool  refresh) ;

/// @brief Method ExpandItemByNode, addr 0xb737018, size 0x4dc, virtual false, abstract: false, final false
inline void ExpandItemByNode(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode>  node, bool  expandAllChildren, bool  refresh) ;

/// @brief Method Finalize, addr 0xb734a6c, size 0x84, virtual true, abstract: false, final false
inline void Finalize() ;

/// [IteratorStateMachine(typeof(UnityEngine.UIElements.BaseTreeViewController::<GetAllItemIds>d__23))]
/// @brief Method GetAllItemIds, addr 0xb734c14, size 0x9c, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetAllItemIds(::System::Collections::Generic::IEnumerable_1<int32_t>*  rootIds) ;

/// @brief Method GetChildIndexForId, addr 0xb7352b8, size 0x1f8, virtual false, abstract: false, final false
inline int32_t GetChildIndexForId(int32_t  id) ;

/// [IteratorStateMachine(typeof(UnityEngine.UIElements.BaseTreeViewController::<GetChildrenIds>d__25))]
/// @brief Method GetChildrenIds, addr 0xb734ef0, size 0x90, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetChildrenIds(int32_t  id) ;

/// [IteratorStateMachine(typeof(UnityEngine.UIElements.BaseTreeViewController::<GetChildrenIdsByIndex>d__41))]
/// @brief Method GetChildrenIdsByIndex, addr 0xb7365b4, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetChildrenIdsByIndex(int32_t  index) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method GetExpandedItemIds, addr 0xb737aec, size 0x284, virtual false, abstract: false, final false
inline void GetExpandedItemIds(::System::Collections::Generic::List_1<int32_t>*  list) ;

/// @brief Method GetHierarchyNodeById, addr 0xb734e54, size 0x9c, virtual false, abstract: false, final false
inline ::Unity::Hierarchy::HierarchyNode GetHierarchyNodeById(int32_t  id) ;

/// @brief Method GetHierarchyNodeByIndex, addr 0xb736644, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Hierarchy::HierarchyNode GetHierarchyNodeByIndex(int32_t  index) ;

/// @brief Method GetIdForIndex, addr 0xb736b84, size 0x170, virtual true, abstract: false, final false
inline int32_t GetIdForIndex(int32_t  index) ;

/// @brief Method GetIndentationDepth, addr 0xb736e58, size 0xb8, virtual false, abstract: false, final false
inline int32_t GetIndentationDepth(int32_t  id) ;

/// @brief Method GetIndentationDepthByIndex, addr 0xb735998, size 0x24, virtual false, abstract: false, final false
inline int32_t GetIndentationDepthByIndex(int32_t  index) ;

/// @brief Method GetIndexForId, addr 0xb736acc, size 0xb8, virtual true, abstract: false, final false
inline int32_t GetIndexForId(int32_t  id) ;

/// @brief Method GetParentId, addr 0xb734ce4, size 0x170, virtual true, abstract: false, final false
inline int32_t GetParentId(int32_t  id) ;

/// @brief Method HasChildren, addr 0xb736d20, size 0xac, virtual true, abstract: false, final false
inline bool HasChildren(int32_t  id) ;

/// @brief Method HasChildrenByIndex, addr 0xb735a40, size 0x54, virtual false, abstract: false, final false
inline bool HasChildrenByIndex(int32_t  index) ;

/// @brief Method InvokeBindItem, addr 0xb735870, size 0x128, virtual true, abstract: false, final false
inline void InvokeBindItem(::UnityEngine::UIElements::ReusableCollectionItem*  reusableItem, int32_t  index) ;

/// @brief Method InvokeDestroyItem, addr 0xb735aac, size 0x12c, virtual true, abstract: false, final false
inline void InvokeDestroyItem(::UnityEngine::UIElements::ReusableCollectionItem*  reusableItem) ;

/// @brief Method InvokeMakeItem, addr 0xb7356e4, size 0xb0, virtual true, abstract: false, final false
inline void InvokeMakeItem(::UnityEngine::UIElements::ReusableCollectionItem*  reusableItem) ;

/// @brief Method IsChildOf, addr 0xb735160, size 0x158, virtual false, abstract: false, final false
inline bool IsChildOf(int32_t  childId, int32_t  id) ;

/// @brief Method IsExpanded, addr 0xb736f18, size 0x100, virtual false, abstract: false, final false
inline bool IsExpanded(int32_t  id) ;

/// @brief Method IsExpandedByIndex, addr 0xb7359d0, size 0x50, virtual false, abstract: false, final false
inline bool IsExpandedByIndex(int32_t  index) ;

/// @brief Method IsIndexValid, addr 0xb736cf4, size 0x2c, virtual false, abstract: false, final false
inline bool IsIndexValid(int32_t  index) ;

/// @brief Method IsViewDataKeyEnabled, addr 0xb736564, size 0x50, virtual false, abstract: false, final false
inline bool IsViewDataKeyEnabled() ;

/// @brief Method Move, addr 0xb734fb4, size 0x1ac, virtual true, abstract: false, final false
inline void Move(int32_t  id, int32_t  newParentId, int32_t  childIndex, bool  rebuildTree) ;

static inline ::UnityEngine::UIElements::BaseTreeViewController* New_ctor() ;

/// @brief Method OnItemPointerUp, addr 0xb735eb8, size 0x6ac, virtual false, abstract: false, final false
inline void OnItemPointerUp(::UnityEngine::UIElements::PointerUpEvent*  evt) ;

/// @brief Method OnToggleValueChanged, addr 0xb7367b4, size 0x14c, virtual false, abstract: false, final false
inline void OnToggleValueChanged(::UnityEngine::UIElements::ChangeEvent_1<bool>*  evt) ;

/// @brief Method OnViewDataReadyUpdateNodes, addr 0xb737f7c, size 0x198, virtual false, abstract: false, final false
inline void OnViewDataReadyUpdateNodes() ;

/// @brief Method PostInitRegistration, addr 0xb735794, size 0xdc, virtual false, abstract: false, final false
inline void PostInitRegistration(::UnityEngine::UIElements::ReusableTreeViewItem*  treeItem) ;

/// @brief Method PreRefresh, addr 0xb737d70, size 0x10, virtual true, abstract: false, final false
inline void PreRefresh() ;

/// @brief Method RaiseItemExpandedChanged, addr 0xb736708, size 0xac, virtual false, abstract: false, final false
inline void RaiseItemExpandedChanged(int32_t  id, bool  isExpanded, bool  isAppliedToAllChildren) ;

/// @brief Method RaiseItemParentChanged, addr 0xb7356c8, size 0x1c, virtual false, abstract: false, final false
inline void RaiseItemParentChanged(int32_t  id, int32_t  newParentId) ;

/// @brief Method UpdateHierarchy, addr 0xb736684, size 0x84, virtual false, abstract: false, final false
inline void UpdateHierarchy() ;

/// @brief Method UpdateIdToNodeDictionary, addr 0xb737e00, size 0x12c, virtual false, abstract: false, final false
inline void UpdateIdToNodeDictionary(int32_t  id, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode>  node, bool  isAdd) ;

/// @brief Method UpdateSortOrder, addr 0xb7354b0, size 0x218, virtual false, abstract: false, final false
inline void UpdateSortOrder(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode>  newParent, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode>  insertedNode, int32_t  insertedIndex) ;

constexpr ::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>* const& __cordl_internal_get_itemExpandedChanged() const;

constexpr ::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>*& __cordl_internal_get_itemExpandedChanged() ;

constexpr ::Unity::Hierarchy::Hierarchy* const& __cordl_internal_get_m_Hierarchy() const;

constexpr ::Unity::Hierarchy::Hierarchy*& __cordl_internal_get_m_Hierarchy() ;

constexpr ::Unity::Hierarchy::HierarchyFlattened* const& __cordl_internal_get_m_HierarchyFlattened() const;

constexpr ::Unity::Hierarchy::HierarchyFlattened*& __cordl_internal_get_m_HierarchyFlattened() ;

constexpr bool const& __cordl_internal_get_m_HierarchyHasPendingChanged() const;

constexpr bool& __cordl_internal_get_m_HierarchyHasPendingChanged() ;

constexpr ::Unity::Hierarchy::HierarchyViewModel* const& __cordl_internal_get_m_HierarchyViewModel() const;

constexpr ::Unity::Hierarchy::HierarchyViewModel*& __cordl_internal_get_m_HierarchyViewModel() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Hierarchy::HierarchyNode>* const& __cordl_internal_get_m_IdToNodeDictionary() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Hierarchy::HierarchyNode>*& __cordl_internal_get_m_IdToNodeDictionary() ;

constexpr ::Unity::Hierarchy::IHierarchyProperty_1<int32_t>* const& __cordl_internal_get_m_TreeViewDataProperty() const;

constexpr ::Unity::Hierarchy::IHierarchyProperty_1<int32_t>*& __cordl_internal_get_m_TreeViewDataProperty() ;

constexpr void __cordl_internal_set_itemExpandedChanged(::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>*  value) ;

constexpr void __cordl_internal_set_m_Hierarchy(::Unity::Hierarchy::Hierarchy*  value) ;

constexpr void __cordl_internal_set_m_HierarchyFlattened(::Unity::Hierarchy::HierarchyFlattened*  value) ;

constexpr void __cordl_internal_set_m_HierarchyHasPendingChanged(bool  value) ;

constexpr void __cordl_internal_set_m_HierarchyViewModel(::Unity::Hierarchy::HierarchyViewModel*  value) ;

constexpr void __cordl_internal_set_m_IdToNodeDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Hierarchy::HierarchyNode>*  value) ;

constexpr void __cordl_internal_set_m_TreeViewDataProperty(::Unity::Hierarchy::IHierarchyProperty_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0xb734848, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_itemExpandedChanged, addr 0xb7346e8, size 0xb0, virtual false, abstract: false, final false
inline void add_itemExpandedChanged(::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>*  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_K_ExpandItemByIndex() ;

/// @brief Method get_baseTreeView, addr 0xb73466c, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::BaseTreeView* get_baseTreeView() ;

/// @brief Method get_hierarchy, addr 0xb734bb8, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Hierarchy::Hierarchy* get_hierarchy() ;

/// @brief Method get_itemsSource, addr 0xb734bc0, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::IList* get_itemsSource() ;

/// [CompilerGenerated]
/// @brief Method remove_itemExpandedChanged, addr 0xb734798, size 0xb0, virtual false, abstract: false, final false
inline void remove_itemExpandedChanged(::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>*  value) ;

static inline void setStaticF_K_ExpandItemByIndex(::Unity::Profiling::ProfilerMarker  value) ;

/// @brief Method set_hierarchy, addr 0xb734904, size 0x168, virtual false, abstract: false, final false
inline void set_hierarchy(::Unity::Hierarchy::Hierarchy*  value) ;

/// @brief Method set_itemsSource, addr 0xb734bc8, size 0x4c, virtual true, abstract: false, final false
inline void set_itemsSource(::System::Collections::IList*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseTreeViewController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseTreeViewController(BaseTreeViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseTreeViewController(BaseTreeViewController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7238};

/// @brief Field m_Hierarchy, offset: 0x30, size: 0x8, def value: None
 ::Unity::Hierarchy::Hierarchy*  ___m_Hierarchy;

/// @brief Field m_HierarchyFlattened, offset: 0x38, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyFlattened*  ___m_HierarchyFlattened;

/// @brief Field m_HierarchyViewModel, offset: 0x40, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyViewModel*  ___m_HierarchyViewModel;

/// @brief Field m_IdToNodeDictionary, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Hierarchy::HierarchyNode>*  ___m_IdToNodeDictionary;

/// @brief Field m_TreeViewDataProperty, offset: 0x50, size: 0x8, def value: None
 ::Unity::Hierarchy::IHierarchyProperty_1<int32_t>*  ___m_TreeViewDataProperty;

/// @brief Field m_HierarchyHasPendingChanged, offset: 0x58, size: 0x1, def value: None
 bool  ___m_HierarchyHasPendingChanged;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field itemExpandedChanged, offset: 0x60, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>*  ___itemExpandedChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_Hierarchy) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_HierarchyFlattened) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_HierarchyViewModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_IdToNodeDictionary) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_TreeViewDataProperty) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_HierarchyHasPendingChanged) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___itemExpandedChanged) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::BaseTreeViewController) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object, Unity.Hierarchy.HierarchyNode, Unity.Hierarchy.HierarchyNodeChildren, Unity.Hierarchy.HierarchyNodeChildren::Enumerator
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseTreeViewController/<GetChildrenIdsByIndex>d__41
class CORDL_TYPE BaseTreeViewController__GetChildrenIdsByIndex_d__41 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Int32__get_Current)) int32_t  System_Collections_Generic_IEnumerator_System_Int32__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) int32_t  __2__current;

/// @brief Field <>3__index, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___3__index, put=__cordl_internal_set___3__index)) int32_t  __3__index;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityEngine::UIElements::BaseTreeViewController*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__2, offset 0x48, size 0x20 
 __declspec(property(get=__cordl_internal_get___s__2, put=__cordl_internal_set___s__2)) ::GlobalNamespace::HierarchyNodeChildren_Enumerator  __s__2;

/// @brief Field <node>5__3, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__node_5__3, put=__cordl_internal_set__node_5__3)) ::Unity::Hierarchy::HierarchyNode  _node_5__3;

/// @brief Field <nodes>5__1, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get__nodes_5__1, put=__cordl_internal_set__nodes_5__1)) ::Unity::Hierarchy::HierarchyNodeChildren  _nodes_5__1;

/// @brief Field index, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb738e7c, size 0x22c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0xb739110, size 0xac, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Int32>.get_Current, addr 0xb7390a8, size 0x8, virtual true, abstract: false, final true
inline int32_t System_Collections_Generic_IEnumerator_System_Int32__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb7391bc, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb7390b0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb7390e8, size 0x28, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb738e78, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr int32_t const& __cordl_internal_get___2__current() const;

constexpr int32_t& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get___3__index() const;

constexpr int32_t& __cordl_internal_get___3__index() ;

constexpr ::UnityEngine::UIElements::BaseTreeViewController* const& __cordl_internal_get___4__this() const;

constexpr ::UnityEngine::UIElements::BaseTreeViewController*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::GlobalNamespace::HierarchyNodeChildren_Enumerator const& __cordl_internal_get___s__2() const;

constexpr ::GlobalNamespace::HierarchyNodeChildren_Enumerator& __cordl_internal_get___s__2() ;

constexpr ::Unity::Hierarchy::HierarchyNode const& __cordl_internal_get__node_5__3() const;

constexpr ::Unity::Hierarchy::HierarchyNode& __cordl_internal_get__node_5__3() ;

constexpr ::Unity::Hierarchy::HierarchyNodeChildren const& __cordl_internal_get__nodes_5__1() const;

constexpr ::Unity::Hierarchy::HierarchyNodeChildren& __cordl_internal_get__nodes_5__1() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(int32_t  value) ;

constexpr void __cordl_internal_set___3__index(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::BaseTreeViewController*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__2(::GlobalNamespace::HierarchyNodeChildren_Enumerator  value) ;

constexpr void __cordl_internal_set__node_5__3(::Unity::Hierarchy::HierarchyNode  value) ;

constexpr void __cordl_internal_set__nodes_5__1(::Unity::Hierarchy::HierarchyNodeChildren  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb736e24, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* i___System__Collections__Generic__IEnumerator_1_int32_t_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseTreeViewController__GetChildrenIdsByIndex_d__41() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController__GetChildrenIdsByIndex_d__41", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseTreeViewController__GetChildrenIdsByIndex_d__41(BaseTreeViewController__GetChildrenIdsByIndex_d__41 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController__GetChildrenIdsByIndex_d__41", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseTreeViewController__GetChildrenIdsByIndex_d__41(BaseTreeViewController__GetChildrenIdsByIndex_d__41 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7237};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
 int32_t  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field index, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field <>3__index, offset: 0x20, size: 0x4, def value: None
 int32_t  _____3__index;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::UIElements::BaseTreeViewController*  _____4__this;

/// @brief Field <nodes>5__1, offset: 0x30, size: 0x18, def value: None
 ::Unity::Hierarchy::HierarchyNodeChildren  ____nodes_5__1;

/// @brief Field <>s__2, offset: 0x48, size: 0x20, def value: None
 ::GlobalNamespace::HierarchyNodeChildren_Enumerator  _____s__2;

/// @brief Field <node>5__3, offset: 0x68, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyNode  ____node_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, ___index) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, _____3__index) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, ____nodes_5__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, _____s__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, ____node_5__3) == 0x68, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41) == 0x70, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object, Unity.Hierarchy.HierarchyNode, Unity.Hierarchy.HierarchyNodeChildren, Unity.Hierarchy.HierarchyNodeChildren::Enumerator
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseTreeViewController/<GetChildrenIds>d__25
class CORDL_TYPE BaseTreeViewController__GetChildrenIds_d__25 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Int32__get_Current)) int32_t  System_Collections_Generic_IEnumerator_System_Int32__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) int32_t  __2__current;

/// @brief Field <>3__id, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___3__id, put=__cordl_internal_set___3__id)) int32_t  __3__id;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityEngine::UIElements::BaseTreeViewController*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__3, offset 0x50, size 0x20 
 __declspec(property(get=__cordl_internal_get___s__3, put=__cordl_internal_set___s__3)) ::GlobalNamespace::HierarchyNodeChildren_Enumerator  __s__3;

/// @brief Field <nodeById>5__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__nodeById_5__1, put=__cordl_internal_set__nodeById_5__1)) ::Unity::Hierarchy::HierarchyNode  _nodeById_5__1;

/// @brief Field <node>5__4, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__node_5__4, put=__cordl_internal_set__node_5__4)) ::Unity::Hierarchy::HierarchyNode  _node_5__4;

/// @brief Field <nodes>5__2, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get__nodes_5__2, put=__cordl_internal_set__nodes_5__2)) ::Unity::Hierarchy::HierarchyNodeChildren  _nodes_5__2;

/// @brief Field id, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb738b10, size 0x250, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0xb738dc8, size 0xac, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Int32>.get_Current, addr 0xb738d60, size 0x8, virtual true, abstract: false, final true
inline int32_t System_Collections_Generic_IEnumerator_System_Int32__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb738e74, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb738d68, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb738da0, size 0x28, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb738b0c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr int32_t const& __cordl_internal_get___2__current() const;

constexpr int32_t& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get___3__id() const;

constexpr int32_t& __cordl_internal_get___3__id() ;

constexpr ::UnityEngine::UIElements::BaseTreeViewController* const& __cordl_internal_get___4__this() const;

constexpr ::UnityEngine::UIElements::BaseTreeViewController*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::GlobalNamespace::HierarchyNodeChildren_Enumerator const& __cordl_internal_get___s__3() const;

constexpr ::GlobalNamespace::HierarchyNodeChildren_Enumerator& __cordl_internal_get___s__3() ;

constexpr ::Unity::Hierarchy::HierarchyNode const& __cordl_internal_get__nodeById_5__1() const;

constexpr ::Unity::Hierarchy::HierarchyNode& __cordl_internal_get__nodeById_5__1() ;

constexpr ::Unity::Hierarchy::HierarchyNode const& __cordl_internal_get__node_5__4() const;

constexpr ::Unity::Hierarchy::HierarchyNode& __cordl_internal_get__node_5__4() ;

constexpr ::Unity::Hierarchy::HierarchyNodeChildren const& __cordl_internal_get__nodes_5__2() const;

constexpr ::Unity::Hierarchy::HierarchyNodeChildren& __cordl_internal_get__nodes_5__2() ;

constexpr int32_t const& __cordl_internal_get_id() const;

constexpr int32_t& __cordl_internal_get_id() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(int32_t  value) ;

constexpr void __cordl_internal_set___3__id(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::BaseTreeViewController*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__3(::GlobalNamespace::HierarchyNodeChildren_Enumerator  value) ;

constexpr void __cordl_internal_set__nodeById_5__1(::Unity::Hierarchy::HierarchyNode  value) ;

constexpr void __cordl_internal_set__node_5__4(::Unity::Hierarchy::HierarchyNode  value) ;

constexpr void __cordl_internal_set__nodes_5__2(::Unity::Hierarchy::HierarchyNodeChildren  value) ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb734f80, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* i___System__Collections__Generic__IEnumerator_1_int32_t_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseTreeViewController__GetChildrenIds_d__25() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController__GetChildrenIds_d__25", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseTreeViewController__GetChildrenIds_d__25(BaseTreeViewController__GetChildrenIds_d__25 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController__GetChildrenIds_d__25", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseTreeViewController__GetChildrenIds_d__25(BaseTreeViewController__GetChildrenIds_d__25 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7236};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
 int32_t  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field id, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___id;

/// @brief Field <>3__id, offset: 0x20, size: 0x4, def value: None
 int32_t  _____3__id;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::UIElements::BaseTreeViewController*  _____4__this;

/// @brief Field <nodeById>5__1, offset: 0x30, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyNode  ____nodeById_5__1;

/// @brief Field <nodes>5__2, offset: 0x38, size: 0x18, def value: None
 ::Unity::Hierarchy::HierarchyNodeChildren  ____nodes_5__2;

/// @brief Field <>s__3, offset: 0x50, size: 0x20, def value: None
 ::GlobalNamespace::HierarchyNodeChildren_Enumerator  _____s__3;

/// @brief Field <node>5__4, offset: 0x70, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyNode  ____node_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, ___id) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, _____3__id) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, ____nodeById_5__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, ____nodes_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, _____s__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, ____node_5__4) == 0x70, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25) == 0x78, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object, Unity.Hierarchy.HierarchyFlattened::Enumerator, Unity.Hierarchy.HierarchyFlattenedNode, Unity.Hierarchy.HierarchyFlattenedNodeChildren, Unity.Hierarchy.HierarchyFlattenedNodeChildren::Enumerator, Unity.Hierarchy.HierarchyNode
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseTreeViewController/<GetAllItemIds>d__23
class CORDL_TYPE BaseTreeViewController__GetAllItemIds_d__23 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Int32__get_Current)) int32_t  System_Collections_Generic_IEnumerator_System_Int32__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) int32_t  __2__current;

/// @brief Field <>3__rootIds, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__rootIds, put=__cordl_internal_set___3__rootIds)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  __3__rootIds;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityEngine::UIElements::BaseTreeViewController*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__1, offset 0x38, size 0x20 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::GlobalNamespace::HierarchyFlattened_Enumerator  __s__1;

/// @brief Field <>s__4, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__4, put=__cordl_internal_set___s__4)) ::System::Collections::Generic::IEnumerator_1<int32_t>*  __s__4;

/// @brief Field <>s__8, offset 0xb0, size 0x38 
 __declspec(property(get=__cordl_internal_get___s__8, put=__cordl_internal_set___s__8)) ::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator  __s__8;

/// @brief Field <flattenedNodeChildren>5__7, offset 0x98, size 0x18 
 __declspec(property(get=__cordl_internal_get__flattenedNodeChildren_5__7, put=__cordl_internal_set__flattenedNodeChildren_5__7)) ::Unity::Hierarchy::HierarchyFlattenedNodeChildren  _flattenedNodeChildren_5__7;

/// @brief Field <flattenedNode>5__2, offset 0x58, size 0x1c 
 __declspec(property(get=__cordl_internal_get__flattenedNode_5__2, put=__cordl_internal_set__flattenedNode_5__2)) ::Unity::Hierarchy::HierarchyFlattenedNode  _flattenedNode_5__2;

/// @brief Field <id>5__5, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__id_5__5, put=__cordl_internal_set__id_5__5)) int32_t  _id_5__5;

/// @brief Field <node>5__3, offset 0x74, size 0x8 
 __declspec(property(get=__cordl_internal_get__node_5__3, put=__cordl_internal_set__node_5__3)) ::Unity::Hierarchy::HierarchyNode  _node_5__3;

/// @brief Field <node>5__9, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__node_5__9, put=__cordl_internal_set__node_5__9)) ::Unity::Hierarchy::HierarchyNode  _node_5__9;

/// @brief Field <parentNode>5__6, offset 0x8c, size 0x8 
 __declspec(property(get=__cordl_internal_get__parentNode_5__6, put=__cordl_internal_set__parentNode_5__6)) ::Unity::Hierarchy::HierarchyNode  _parentNode_5__6;

/// @brief Field rootIds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rootIds, put=__cordl_internal_set_rootIds)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  rootIds;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb7381cc, size 0x770, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0xb738a54, size 0xb4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Int32>.get_Current, addr 0xb7389ec, size 0x8, virtual true, abstract: false, final true
inline int32_t System_Collections_Generic_IEnumerator_System_Int32__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb738b08, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb7389f4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb738a2c, size 0x28, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb7381a0, size 0x2c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr int32_t const& __cordl_internal_get___2__current() const;

constexpr int32_t& __cordl_internal_get___2__current() ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* const& __cordl_internal_get___3__rootIds() const;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>*& __cordl_internal_get___3__rootIds() ;

constexpr ::UnityEngine::UIElements::BaseTreeViewController* const& __cordl_internal_get___4__this() const;

constexpr ::UnityEngine::UIElements::BaseTreeViewController*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::GlobalNamespace::HierarchyFlattened_Enumerator const& __cordl_internal_get___s__1() const;

constexpr ::GlobalNamespace::HierarchyFlattened_Enumerator& __cordl_internal_get___s__1() ;

constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* const& __cordl_internal_get___s__4() const;

constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>*& __cordl_internal_get___s__4() ;

constexpr ::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator const& __cordl_internal_get___s__8() const;

constexpr ::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator& __cordl_internal_get___s__8() ;

constexpr ::Unity::Hierarchy::HierarchyFlattenedNodeChildren const& __cordl_internal_get__flattenedNodeChildren_5__7() const;

constexpr ::Unity::Hierarchy::HierarchyFlattenedNodeChildren& __cordl_internal_get__flattenedNodeChildren_5__7() ;

constexpr ::Unity::Hierarchy::HierarchyFlattenedNode const& __cordl_internal_get__flattenedNode_5__2() const;

constexpr ::Unity::Hierarchy::HierarchyFlattenedNode& __cordl_internal_get__flattenedNode_5__2() ;

constexpr int32_t const& __cordl_internal_get__id_5__5() const;

constexpr int32_t& __cordl_internal_get__id_5__5() ;

constexpr ::Unity::Hierarchy::HierarchyNode const& __cordl_internal_get__node_5__3() const;

constexpr ::Unity::Hierarchy::HierarchyNode& __cordl_internal_get__node_5__3() ;

constexpr ::Unity::Hierarchy::HierarchyNode const& __cordl_internal_get__node_5__9() const;

constexpr ::Unity::Hierarchy::HierarchyNode& __cordl_internal_get__node_5__9() ;

constexpr ::Unity::Hierarchy::HierarchyNode const& __cordl_internal_get__parentNode_5__6() const;

constexpr ::Unity::Hierarchy::HierarchyNode& __cordl_internal_get__parentNode_5__6() ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* const& __cordl_internal_get_rootIds() const;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>*& __cordl_internal_get_rootIds() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(int32_t  value) ;

constexpr void __cordl_internal_set___3__rootIds(::System::Collections::Generic::IEnumerable_1<int32_t>*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::BaseTreeViewController*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__1(::GlobalNamespace::HierarchyFlattened_Enumerator  value) ;

constexpr void __cordl_internal_set___s__4(::System::Collections::Generic::IEnumerator_1<int32_t>*  value) ;

constexpr void __cordl_internal_set___s__8(::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator  value) ;

constexpr void __cordl_internal_set__flattenedNodeChildren_5__7(::Unity::Hierarchy::HierarchyFlattenedNodeChildren  value) ;

constexpr void __cordl_internal_set__flattenedNode_5__2(::Unity::Hierarchy::HierarchyFlattenedNode  value) ;

constexpr void __cordl_internal_set__id_5__5(int32_t  value) ;

constexpr void __cordl_internal_set__node_5__3(::Unity::Hierarchy::HierarchyNode  value) ;

constexpr void __cordl_internal_set__node_5__9(::Unity::Hierarchy::HierarchyNode  value) ;

constexpr void __cordl_internal_set__parentNode_5__6(::Unity::Hierarchy::HierarchyNode  value) ;

constexpr void __cordl_internal_set_rootIds(::System::Collections::Generic::IEnumerable_1<int32_t>*  value) ;

/// @brief Method <>m__Finally1, addr 0xb73893c, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb734cb0, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* i___System__Collections__Generic__IEnumerator_1_int32_t_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseTreeViewController__GetAllItemIds_d__23() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController__GetAllItemIds_d__23", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseTreeViewController__GetAllItemIds_d__23(BaseTreeViewController__GetAllItemIds_d__23 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController__GetAllItemIds_d__23", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseTreeViewController__GetAllItemIds_d__23(BaseTreeViewController__GetAllItemIds_d__23 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7235};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
 int32_t  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field rootIds, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<int32_t>*  ___rootIds;

/// @brief Field <>3__rootIds, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<int32_t>*  _____3__rootIds;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::UIElements::BaseTreeViewController*  _____4__this;

/// @brief Field <>s__1, offset: 0x38, size: 0x20, def value: None
 ::GlobalNamespace::HierarchyFlattened_Enumerator  _____s__1;

/// @brief Field <flattenedNode>5__2, offset: 0x58, size: 0x1c, def value: None
 ::Unity::Hierarchy::HierarchyFlattenedNode  ____flattenedNode_5__2;

/// @brief Field <node>5__3, offset: 0x74, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyNode  ____node_5__3;

/// @brief Field <>s__4, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<int32_t>*  _____s__4;

/// @brief Field <id>5__5, offset: 0x88, size: 0x4, def value: None
 int32_t  ____id_5__5;

/// @brief Field <parentNode>5__6, offset: 0x8c, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyNode  ____parentNode_5__6;

/// @brief Field <flattenedNodeChildren>5__7, offset: 0x98, size: 0x18, def value: None
 ::Unity::Hierarchy::HierarchyFlattenedNodeChildren  ____flattenedNodeChildren_5__7;

/// @brief Field <>s__8, offset: 0xb0, size: 0x38, def value: None
 ::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator  _____s__8;

/// @brief Field <node>5__9, offset: 0xe8, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyNode  ____node_5__9;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, ___rootIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, _____3__rootIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, _____s__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, ____flattenedNode_5__2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, ____node_5__3) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, _____s__4) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, ____id_5__5) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, ____parentNode_5__6) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, ____flattenedNodeChildren_5__7) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, _____s__8) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, ____node_5__9) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23) == 0xf0, "Size mismatch!");

} // namespace end def UnityEngine::UIElements

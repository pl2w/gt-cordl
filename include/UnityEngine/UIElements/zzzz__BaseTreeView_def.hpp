#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseTreeView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseTreeView)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IList;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::UIElements {
class BaseTreeViewController;
}
namespace UnityEngine::UIElements {
class BaseTreeView_UxmlTraits;
}
namespace UnityEngine::UIElements {
class CollectionViewController;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class TreeViewExpansionChangedArgs;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseTreeView;
}
namespace UnityEngine::UIElements {
class BaseTreeView_UxmlTraits;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::BaseTreeView*);
MARK_REF_T(::UnityEngine::UIElements::BaseTreeView_UxmlTraits*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::BaseTreeView*, "UnityEngine.UIElements", "BaseTreeView");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::BaseTreeView_UxmlTraits*, "UnityEngine.UIElements", "BaseTreeView/UxmlTraits");
// Dependencies System.Nullable`1<T>, UnityEngine.UIElements.BaseVerticalCollectionView, UnityEngine.UIElements.BindingId, UnityEngine.UIElements.CustomStyleProperty`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseTreeView
class CORDL_TYPE BaseTreeView : public ::UnityEngine::UIElements::BaseVerticalCollectionView {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::BaseTreeView_UxmlTraits;

/// @brief Field <customIdent>k__BackingField, offset 0x3d8, size 0x10 
 __declspec(property(get=__cordl_internal_get__customIdent_k__BackingField, put=__cordl_internal_set__customIdent_k__BackingField)) ::System::Nullable_1<float_t>  _customIdent_k__BackingField;

/// @brief [CreateProperty]
 __declspec(property(get=get_autoExpand, put=set_autoExpand)) bool  autoExpand;

/// @brief Field autoExpandProperty, offset 0xffffffff, size 0x98 
 __declspec(property(get=getStaticF_autoExpandProperty, put=setStaticF_autoExpandProperty)) ::UnityEngine::UIElements::BindingId  autoExpandProperty;

 __declspec(property(get=get_customIdent, put=set_customIdent)) ::System::Nullable_1<float_t>  customIdent;

 __declspec(property(get=get_expandedItemIds, put=set_expandedItemIds)) ::System::Collections::Generic::List_1<int32_t>*  expandedItemIds;

/// @brief Field invalidId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_invalidId, put=setStaticF_invalidId)) int32_t  invalidId;

/// @brief Field itemContentContainerUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_itemContentContainerUssClassName, put=setStaticF_itemContentContainerUssClassName)) ::StringW  itemContentContainerUssClassName;

/// @brief Field itemExpandedChanged, offset 0x3c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemExpandedChanged, put=__cordl_internal_set_itemExpandedChanged)) ::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>*  itemExpandedChanged;

/// @brief Field itemIndentUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_itemIndentUssClassName, put=setStaticF_itemIndentUssClassName)) ::StringW  itemIndentUssClassName;

/// @brief Field itemIndentsContainerUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_itemIndentsContainerUssClassName, put=setStaticF_itemIndentsContainerUssClassName)) ::StringW  itemIndentsContainerUssClassName;

/// @brief Field itemToggleUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_itemToggleUssClassName, put=setStaticF_itemToggleUssClassName)) ::StringW  itemToggleUssClassName;

/// @brief Field itemUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_itemUssClassName, put=setStaticF_itemUssClassName)) ::StringW  itemUssClassName;

/// @brief [CreateProperty(ReadOnly = true)]
 __declspec(property(get=get_itemsSource, put=set_itemsSource)) ::System::Collections::IList*  itemsSource;

/// @brief Field m_AutoExpand, offset 0x3c8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutoExpand, put=__cordl_internal_set_m_AutoExpand)) bool  m_AutoExpand;

/// @brief Field m_ExpandedItemIds, offset 0x3d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ExpandedItemIds, put=__cordl_internal_set_m_ExpandedItemIds)) ::System::Collections::Generic::List_1<int32_t>*  m_ExpandedItemIds;

/// @brief Field s_TreeViewIndentProperty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TreeViewIndentProperty, put=setStaticF_s_TreeViewIndentProperty)) ::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  s_TreeViewIndentProperty;

/// @brief Field ussClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ussClassName, put=setStaticF_ussClassName)) ::StringW  ussClassName;

 __declspec(property(get=get_viewController)) ::UnityEngine::UIElements::BaseTreeViewController*  viewController;

/// @brief Method CollapseItem, addr 0xb81f524, size 0x3c, virtual false, abstract: false, final false
inline void CollapseItem(int32_t  id, bool  collapseAllChildren, bool  refresh) ;

/// @brief Method CollapseItemByIndex, addr 0xb81eb4c, size 0x78, virtual false, abstract: false, final false
inline void CollapseItemByIndex(int32_t  index, bool  collapseAll) ;

/// @brief Method CreateDragAndDropController, addr 0xb81e024, size 0x5c, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* CreateDragAndDropController() ;

/// @brief Method CreateVirtualizationController, addr 0xb81db2c, size 0x48, virtual true, abstract: false, final false
inline void CreateVirtualizationController() ;

/// @brief Method ExpandItem, addr 0xb81f560, size 0x3c, virtual false, abstract: false, final false
inline void ExpandItem(int32_t  id, bool  expandAllChildren, bool  refresh) ;

/// @brief Method ExpandItemByIndex, addr 0xb81ead4, size 0x78, virtual false, abstract: false, final false
inline void ExpandItemByIndex(int32_t  index, bool  expandAll) ;

/// @brief Method GetItemIndex, addr 0xb81f368, size 0x198, virtual false, abstract: false, final false
inline int32_t GetItemIndex(int32_t  id, bool  expand) ;

/// @brief Method HandleItemNavigation, addr 0xb81e58c, size 0x50c, virtual true, abstract: false, final false
inline bool HandleItemNavigation(bool  moveIn, bool  altPressed) ;

/// @brief Method IsExpanded, addr 0xb81f500, size 0x24, virtual false, abstract: false, final false
inline bool IsExpanded(int32_t  id) ;

/// @brief Method IsExpandedByIndex, addr 0xb81eab0, size 0x24, virtual false, abstract: false, final false
inline bool IsExpandedByIndex(int32_t  index) ;

static inline ::UnityEngine::UIElements::BaseTreeView* New_ctor() ;

static inline ::UnityEngine::UIElements::BaseTreeView* New_ctor(int32_t  itemHeight) ;

/// @brief Method OnCustomStyleResolved, addr 0xb81e360, size 0x170, virtual false, abstract: false, final false
inline void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent*  evt) ;

/// @brief Method OnItemExpandedChanged, addr 0xb81e008, size 0x1c, virtual false, abstract: false, final false
inline void OnItemExpandedChanged(::UnityEngine::UIElements::TreeViewExpansionChangedArgs*  arg) ;

/// @brief Method OnItemIndexChanged, addr 0xb81de0c, size 0x4, virtual false, abstract: false, final false
inline void OnItemIndexChanged(int32_t  srcIndex, int32_t  dstIndex) ;

/// @brief Method OnViewDataReady, addr 0xb81e500, size 0x44, virtual true, abstract: false, final false
inline void OnViewDataReady() ;

/// @brief Method SetSelectionById, addr 0xb81ebfc, size 0x7c, virtual false, abstract: false, final false
inline void SetSelectionById(int32_t  id) ;

/// @brief Method SetSelectionById, addr 0xb81ee08, size 0x8, virtual false, abstract: false, final false
inline void SetSelectionById(::System::Collections::Generic::IEnumerable_1<int32_t>*  ids) ;

/// @brief Method SetSelectionInternalById, addr 0xb81ee10, size 0xec, virtual false, abstract: false, final false
inline void SetSelectionInternalById(::System::Collections::Generic::IEnumerable_1<int32_t>*  ids, bool  sendNotification) ;

/// @brief Method SetViewController, addr 0xb81db74, size 0x1d4, virtual true, abstract: false, final false
inline void SetViewController(::UnityEngine::UIElements::CollectionViewController*  controller) ;

/// [CompilerGenerated]
/// @brief Method <SetSelectionInternalById>b__60_0, addr 0xb81f850, size 0x8, virtual false, abstract: false, final false
inline int32_t _SetSelectionInternalById_b__60_0(int32_t  id) ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get__customIdent_k__BackingField() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get__customIdent_k__BackingField() ;

constexpr ::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>* const& __cordl_internal_get_itemExpandedChanged() const;

constexpr ::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>*& __cordl_internal_get_itemExpandedChanged() ;

constexpr bool const& __cordl_internal_get_m_AutoExpand() const;

constexpr bool& __cordl_internal_get_m_AutoExpand() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_ExpandedItemIds() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_ExpandedItemIds() ;

constexpr void __cordl_internal_set__customIdent_k__BackingField(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set_itemExpandedChanged(::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>*  value) ;

constexpr void __cordl_internal_set_m_AutoExpand(bool  value) ;

constexpr void __cordl_internal_set_m_ExpandedItemIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0xb81e138, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb81e140, size 0x16c, virtual false, abstract: false, final false
inline void _ctor(int32_t  itemHeight) ;

static inline ::UnityEngine::UIElements::BindingId getStaticF_autoExpandProperty() ;

static inline int32_t getStaticF_invalidId() ;

static inline ::StringW getStaticF_itemContentContainerUssClassName() ;

static inline ::StringW getStaticF_itemIndentUssClassName() ;

static inline ::StringW getStaticF_itemIndentsContainerUssClassName() ;

static inline ::StringW getStaticF_itemToggleUssClassName() ;

static inline ::StringW getStaticF_itemUssClassName() ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_TreeViewIndentProperty() ;

static inline ::StringW getStaticF_ussClassName() ;

/// @brief Method get_autoExpand, addr 0xb81e080, size 0x8, virtual false, abstract: false, final false
inline bool get_autoExpand() ;

/// [CompilerGenerated]
/// @brief Method get_customIdent, addr 0xb81e128, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<float_t> get_customIdent() ;

/// @brief Method get_expandedItemIds, addr 0xb81e110, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* get_expandedItemIds() ;

/// @brief Method get_itemsSource, addr 0xb81d9dc, size 0x24, virtual false, abstract: false, final false
inline ::System::Collections::IList* get_itemsSource() ;

/// @brief Method get_viewController, addr 0xb81da00, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::BaseTreeViewController* get_viewController() ;

static inline void setStaticF_autoExpandProperty(::UnityEngine::UIElements::BindingId  value) ;

static inline void setStaticF_invalidId(int32_t  value) ;

static inline void setStaticF_itemContentContainerUssClassName(::StringW  value) ;

static inline void setStaticF_itemIndentUssClassName(::StringW  value) ;

static inline void setStaticF_itemIndentsContainerUssClassName(::StringW  value) ;

static inline void setStaticF_itemToggleUssClassName(::StringW  value) ;

static inline void setStaticF_itemUssClassName(::StringW  value) ;

static inline void setStaticF_s_TreeViewIndentProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  value) ;

static inline void setStaticF_ussClassName(::StringW  value) ;

/// @brief Method set_autoExpand, addr 0xb81e088, size 0x88, virtual false, abstract: false, final false
inline void set_autoExpand(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_customIdent, addr 0xb81e130, size 0x8, virtual false, abstract: false, final false
inline void set_customIdent(::System::Nullable_1<float_t>  value) ;

/// @brief Method set_expandedItemIds, addr 0xb81e118, size 0x10, virtual false, abstract: false, final false
inline void set_expandedItemIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method set_itemsSource, addr 0xb81da7c, size 0x68, virtual false, abstract: false, final false
inline void set_itemsSource(::System::Collections::IList*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseTreeView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseTreeView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseTreeView(BaseTreeView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseTreeView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseTreeView(BaseTreeView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7281};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field itemExpandedChanged, offset: 0x3c0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>*  ___itemExpandedChanged;

/// @brief Field m_AutoExpand, offset: 0x3c8, size: 0x1, def value: None
 bool  ___m_AutoExpand;

/// [SerializeField]
/// [DontCreateProperty]
/// @brief Field m_ExpandedItemIds, offset: 0x3d0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_ExpandedItemIds;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <customIdent>k__BackingField, offset: 0x3d8, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  ____customIdent_k__BackingField;

/// @brief Size padding 0x3e0 - 0x3e8 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseTreeView, ___itemExpandedChanged) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeView, ___m_AutoExpand) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeView, ___m_ExpandedItemIds) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeView, ____customIdent_k__BackingField) == 0x3d8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::BaseTreeView) == 0x3e0, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
// Dependencies UnityEngine.UIElements.BaseVerticalCollectionView::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseTreeView/UxmlTraits
class CORDL_TYPE BaseTreeView_UxmlTraits : public ::UnityEngine::UIElements::BaseVerticalCollectionView_UxmlTraits {
public:
// Declarations
/// @brief Field m_AutoExpand, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AutoExpand, put=__cordl_internal_set_m_AutoExpand)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_AutoExpand;

/// @brief Method Init, addr 0xb81f858, size 0x10c, virtual true, abstract: false, final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::BaseTreeView_UxmlTraits* New_ctor() ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_AutoExpand() const;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_AutoExpand() ;

constexpr void __cordl_internal_set_m_AutoExpand(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

/// @brief Method .ctor, addr 0xb81f964, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseTreeView_UxmlTraits() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseTreeView_UxmlTraits", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseTreeView_UxmlTraits(BaseTreeView_UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseTreeView_UxmlTraits", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseTreeView_UxmlTraits(BaseTreeView_UxmlTraits const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7280};

/// @brief Field m_AutoExpand, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  ___m_AutoExpand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseTreeView_UxmlTraits, ___m_AutoExpand) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::BaseTreeView_UxmlTraits) == 0xd0, "Size mismatch!");

} // namespace end def UnityEngine::UIElements

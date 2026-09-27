#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ListViewDragger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DragEventsProcessor_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_DragPosition_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ListViewDragger)
namespace GlobalNamespace {
struct ListViewDragger_DragPosition;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
struct DragAndDropArgs;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
struct StartDragArgs;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListViewDragger;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::ListViewDragger*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ListViewDragger*, "UnityEngine.UIElements", "ListViewDragger");
// Dependencies UnityEngine.UIElements.DragEventsProcessor, UnityEngine.UIElements.ListViewDragger::DragPosition
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ListViewDragger
class CORDL_TYPE ListViewDragger : public ::UnityEngine::UIElements::DragEventsProcessor {
public:
// Declarations
using DragPosition = ::GlobalNamespace::ListViewDragger_DragPosition;

/// @brief Field <dragAndDropController>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__dragAndDropController_k__BackingField, put=__cordl_internal_set__dragAndDropController_k__BackingField)) ::UnityEngine::UIElements::ICollectionDragAndDropController*  _dragAndDropController_k__BackingField;

 __declspec(property(get=get_dragAndDropController, put=set_dragAndDropController)) ::UnityEngine::UIElements::ICollectionDragAndDropController*  dragAndDropController;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

/// @brief Field m_DragHoverBar, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DragHoverBar, put=__cordl_internal_set_m_DragHoverBar)) ::UnityEngine::UIElements::VisualElement*  m_DragHoverBar;

/// @brief Field m_DragHoverItemMarker, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DragHoverItemMarker, put=__cordl_internal_set_m_DragHoverItemMarker)) ::UnityEngine::UIElements::VisualElement*  m_DragHoverItemMarker;

/// @brief Field m_DragHoverSiblingMarker, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DragHoverSiblingMarker, put=__cordl_internal_set_m_DragHoverSiblingMarker)) ::UnityEngine::UIElements::VisualElement*  m_DragHoverSiblingMarker;

/// @brief Field m_Enabled, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Enabled, put=__cordl_internal_set_m_Enabled)) bool  m_Enabled;

/// @brief Field m_LastDragPosition, offset 0x30, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_LastDragPosition, put=__cordl_internal_set_m_LastDragPosition)) ::GlobalNamespace::ListViewDragger_DragPosition  m_LastDragPosition;

/// @brief Field m_LeftIndentation, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LeftIndentation, put=__cordl_internal_set_m_LeftIndentation)) float_t  m_LeftIndentation;

/// @brief Field m_SiblingBottom, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SiblingBottom, put=__cordl_internal_set_m_SiblingBottom)) float_t  m_SiblingBottom;

 __declspec(property(get=get_targetScrollView)) ::UnityEngine::UIElements::ScrollView*  targetScrollView;

 __declspec(property(get=get_targetView)) ::UnityEngine::UIElements::BaseVerticalCollectionView*  targetView;

/// @brief Method ApplyDragAndDropUI, addr 0xb8845b4, size 0x7d0, virtual false, abstract: false, final false
inline void ApplyDragAndDropUI(::GlobalNamespace::ListViewDragger_DragPosition  dragPosition) ;

/// @brief Method CanStartDrag, addr 0xb8835c4, size 0x300, virtual true, abstract: false, final false
inline bool CanStartDrag(::UnityEngine::Vector3  pointerPosition) ;

/// @brief Method ClearDragAndDropUI, addr 0xb886744, size 0x630, virtual true, abstract: false, final false
inline void ClearDragAndDropUI(bool  dragCancelled) ;

/// @brief Method GetHoverBarTopPosition, addr 0xb8866b8, size 0x8c, virtual false, abstract: false, final false
inline float_t GetHoverBarTopPosition(::UnityEngine::UIElements::ReusableCollectionItem*  item) ;

/// @brief Method GetPreviousAndNextItemsIgnoringDraggedItems, addr 0xb886440, size 0x278, virtual false, abstract: false, final false
inline void GetPreviousAndNextItemsIgnoringDraggedItems(int32_t  insertAtIndex, ::by_ref<int32_t>  previousItemId, ::by_ref<int32_t>  nextItemId) ;

/// @brief Method GetRecycledItem, addr 0xb8838c4, size 0x338, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::ReusableCollectionItem* GetRecycledItem(::UnityEngine::Vector3  pointerPosition) ;

/// @brief Method GetVisualMode, addr 0xb884144, size 0x188, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::DragVisualMode GetVisualMode(::UnityEngine::Vector3  pointerPosition, ::by_ref<::GlobalNamespace::ListViewDragger_DragPosition>  dragPosition) ;

/// @brief Method HandleAutoExpansion, addr 0xb8844c8, size 0xec, virtual false, abstract: false, final false
inline void HandleAutoExpansion(::UnityEngine::Vector2  pointerPosition) ;

/// @brief Method HandleDragAndScroll, addr 0xb8842cc, size 0x1fc, virtual false, abstract: false, final false
inline void HandleDragAndScroll(::UnityEngine::Vector2  pointerPosition) ;

/// @brief Method HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded, addr 0xb885e84, size 0x5bc, virtual false, abstract: false, final false
inline void HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded(::by_ref<::GlobalNamespace::ListViewDragger_DragPosition>  dragPosition, ::UnityEngine::Vector2  pointerPosition) ;

/// @brief Method HandleTreePosition, addr 0xb885d78, size 0x10c, virtual false, abstract: false, final false
inline void HandleTreePosition(::UnityEngine::Vector2  pointerPosition, ::by_ref<::GlobalNamespace::ListViewDragger_DragPosition>  dragPosition) ;

/// @brief Method IsDraggingDisabled, addr 0xb885268, size 0xe8, virtual false, abstract: false, final false
inline bool IsDraggingDisabled() ;

/// @brief Method MakeDragAndDropArgs, addr 0xb884d84, size 0x15c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::DragAndDropArgs MakeDragAndDropArgs(::GlobalNamespace::ListViewDragger_DragPosition  dragPosition) ;

static inline ::UnityEngine::UIElements::ListViewDragger* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView*  listView) ;

/// @brief Method OnDrop, addr 0xb884ee0, size 0x388, virtual true, abstract: false, final false
inline void OnDrop(::UnityEngine::Vector3  pointerPosition) ;

/// @brief Method PlaceHoverBarAt, addr 0xb885350, size 0x658, virtual false, abstract: false, final false
inline void PlaceHoverBarAt(float_t  top, float_t  indentationPadding, float_t  siblingBottom) ;

/// @brief Method PlaceHoverBarAtElement, addr 0xb8859a8, size 0x1c, virtual false, abstract: false, final false
inline void PlaceHoverBarAtElement(::UnityEngine::UIElements::ReusableCollectionItem*  item) ;

/// @brief Method StartDrag, addr 0xb883bfc, size 0x378, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::StartDragArgs StartDrag(::UnityEngine::Vector3  pointerPosition) ;

/// @brief Method TryGetDragPosition, addr 0xb8859c4, size 0x3b4, virtual true, abstract: false, final false
inline bool TryGetDragPosition(::UnityEngine::Vector2  pointerPosition, ::by_ref<::GlobalNamespace::ListViewDragger_DragPosition>  dragPosition) ;

/// @brief Method UpdateDrag, addr 0xb883f74, size 0x1d0, virtual true, abstract: false, final false
inline void UpdateDrag(::UnityEngine::Vector3  pointerPosition) ;

/// [CompilerGenerated]
/// @brief Method <ApplyDragAndDropUI>g__GeometryChangedCallback|31_0, addr 0xb886d74, size 0x240, virtual false, abstract: false, final false
inline void _ApplyDragAndDropUI_g__GeometryChangedCallback_31_0(::UnityEngine::UIElements::GeometryChangedEvent*  e) ;

constexpr ::UnityEngine::UIElements::ICollectionDragAndDropController* const& __cordl_internal_get__dragAndDropController_k__BackingField() const;

constexpr ::UnityEngine::UIElements::ICollectionDragAndDropController*& __cordl_internal_get__dragAndDropController_k__BackingField() ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_DragHoverBar() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_DragHoverBar() ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_DragHoverItemMarker() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_DragHoverItemMarker() ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_DragHoverSiblingMarker() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_DragHoverSiblingMarker() ;

constexpr bool const& __cordl_internal_get_m_Enabled() const;

constexpr bool& __cordl_internal_get_m_Enabled() ;

constexpr ::GlobalNamespace::ListViewDragger_DragPosition const& __cordl_internal_get_m_LastDragPosition() const;

constexpr ::GlobalNamespace::ListViewDragger_DragPosition& __cordl_internal_get_m_LastDragPosition() ;

constexpr float_t const& __cordl_internal_get_m_LeftIndentation() const;

constexpr float_t& __cordl_internal_get_m_LeftIndentation() ;

constexpr float_t const& __cordl_internal_get_m_SiblingBottom() const;

constexpr float_t& __cordl_internal_get_m_SiblingBottom() ;

constexpr void __cordl_internal_set__dragAndDropController_k__BackingField(::UnityEngine::UIElements::ICollectionDragAndDropController*  value) ;

constexpr void __cordl_internal_set_m_DragHoverBar(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr void __cordl_internal_set_m_DragHoverItemMarker(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr void __cordl_internal_set_m_DragHoverSiblingMarker(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr void __cordl_internal_set_m_Enabled(bool  value) ;

constexpr void __cordl_internal_set_m_LastDragPosition(::GlobalNamespace::ListViewDragger_DragPosition  value) ;

constexpr void __cordl_internal_set_m_LeftIndentation(float_t  value) ;

constexpr void __cordl_internal_set_m_SiblingBottom(float_t  value) ;

/// @brief Method .ctor, addr 0xb8835b0, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView*  listView) ;

/// [CompilerGenerated]
/// @brief Method get_dragAndDropController, addr 0xb883218, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* get_dragAndDropController() ;

/// @brief Method get_enabled, addr 0xb883228, size 0x8, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_targetScrollView, addr 0xb8831fc, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::ScrollView* get_targetScrollView() ;

/// @brief Method get_targetView, addr 0xb883180, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::BaseVerticalCollectionView* get_targetView() ;

/// [CompilerGenerated]
/// @brief Method set_dragAndDropController, addr 0xb883220, size 0x8, virtual false, abstract: false, final false
inline void set_dragAndDropController(::UnityEngine::UIElements::ICollectionDragAndDropController*  value) ;

/// @brief Method set_enabled, addr 0xb883230, size 0x380, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListViewDragger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListViewDragger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListViewDragger(ListViewDragger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListViewDragger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListViewDragger(ListViewDragger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7556};

/// @brief Field m_LastDragPosition, offset: 0x30, size: 0x20, def value: None
 ::GlobalNamespace::ListViewDragger_DragPosition  ___m_LastDragPosition;

/// @brief Field m_DragHoverBar, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ___m_DragHoverBar;

/// @brief Field m_DragHoverItemMarker, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ___m_DragHoverItemMarker;

/// @brief Field m_DragHoverSiblingMarker, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ___m_DragHoverSiblingMarker;

/// @brief Field m_LeftIndentation, offset: 0x68, size: 0x4, def value: None
 float_t  ___m_LeftIndentation;

/// @brief Field m_SiblingBottom, offset: 0x6c, size: 0x4, def value: None
 float_t  ___m_SiblingBottom;

/// @brief Field m_Enabled, offset: 0x70, size: 0x1, def value: None
 bool  ___m_Enabled;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <dragAndDropController>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::UIElements::ICollectionDragAndDropController*  ____dragAndDropController_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_LastDragPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_DragHoverBar) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_DragHoverItemMarker) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_DragHoverSiblingMarker) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_LeftIndentation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_SiblingBottom) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_Enabled) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ____dragAndDropController_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::ListViewDragger) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::UIElements

#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIDocument.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PivotReferenceSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__Pivot_def.hpp"
#include "UnityEngine/UIElements/zzzz__Position_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_WorldSpaceSizeMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIDocument)
namespace GlobalNamespace {
struct UIDocument_WorldSpaceSizeMode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct ColliderUpdateMode;
}
namespace UnityEngine::UIElements {
class IRuntimePanel;
}
namespace UnityEngine::UIElements {
class PanelSettings;
}
namespace UnityEngine::UIElements {
struct PivotReferenceSize;
}
namespace UnityEngine::UIElements {
struct Pivot;
}
namespace UnityEngine::UIElements {
struct Position;
}
namespace UnityEngine::UIElements {
class RuntimePanel;
}
namespace UnityEngine::UIElements {
class UIDocumentList;
}
namespace UnityEngine::UIElements {
class UIDocumentRootElement;
}
namespace UnityEngine::UIElements {
class VisualElementFocusRing;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIDocument;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIDocument*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIDocument*, "UnityEngine.UIElements", "UIDocument");
// [ExecuteAlways]
// [DisallowMultipleComponent]
// [DefaultExecutionOrder(-100)]
// [AddComponentMenu("UI Toolkit/UI Document")]
// [HelpURL("UIE-get-started-with-runtime-ui")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.UIElements.Pivot, UnityEngine.UIElements.PivotReferenceSize, UnityEngine.UIElements.Position, UnityEngine.UIElements.UIDocument::WorldSpaceSizeMode
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIDocument
class CORDL_TYPE UIDocument : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using WorldSpaceSizeMode = ::GlobalNamespace::UIDocument_WorldSpaceSizeMode;

/// @brief Field EnabledDocumentCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_EnabledDocumentCount, put=setStaticF_EnabledDocumentCount)) int32_t  EnabledDocumentCount;

/// @brief Field <focusRing>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__focusRing_k__BackingField, put=__cordl_internal_set__focusRing_k__BackingField)) ::UnityEngine::UIElements::VisualElementFocusRing*  _focusRing_k__BackingField;

 __declspec(property(get=get_containerPanel)) ::UnityEngine::UIElements::RuntimePanel*  containerPanel;

 __declspec(property(get=get_firstChildInserIndex)) int32_t  firstChildInserIndex;

 __declspec(property(get=get_focusRing, put=set_focusRing)) ::UnityEngine::UIElements::VisualElementFocusRing*  focusRing;

 __declspec(property(get=get_isTransformControlledByGameObject)) bool  isTransformControlledByGameObject;

 __declspec(property(get=get_isWorldSpace)) bool  isWorldSpace;

/// @brief Field m_ChildrenContent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ChildrenContent, put=__cordl_internal_set_m_ChildrenContent)) ::UnityEngine::UIElements::UIDocumentList*  m_ChildrenContent;

/// @brief Field m_ChildrenContentCopy, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ChildrenContentCopy, put=__cordl_internal_set_m_ChildrenContentCopy)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>*  m_ChildrenContentCopy;

/// @brief Field m_FirstChildInsertIndex, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FirstChildInsertIndex, put=__cordl_internal_set_m_FirstChildInsertIndex)) int32_t  m_FirstChildInsertIndex;

/// @brief Field m_PanelSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PanelSettings, put=__cordl_internal_set_m_PanelSettings)) ::UnityW<::UnityEngine::UIElements::PanelSettings>  m_PanelSettings;

/// @brief Field m_ParentUI, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ParentUI, put=__cordl_internal_set_m_ParentUI)) ::UnityW<::UnityEngine::UIElements::UIDocument>  m_ParentUI;

/// @brief Field m_Pivot, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Pivot, put=__cordl_internal_set_m_Pivot)) ::UnityEngine::UIElements::Pivot  m_Pivot;

/// @brief Field m_PivotReferenceSize, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PivotReferenceSize, put=__cordl_internal_set_m_PivotReferenceSize)) ::UnityEngine::UIElements::PivotReferenceSize  m_PivotReferenceSize;

/// @brief Field m_Position, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Position, put=__cordl_internal_set_m_Position)) ::UnityEngine::UIElements::Position  m_Position;

/// @brief Field m_PreviousPanelSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreviousPanelSettings, put=__cordl_internal_set_m_PreviousPanelSettings)) ::UnityW<::UnityEngine::UIElements::PanelSettings>  m_PreviousPanelSettings;

/// @brief Field m_RootHasWorldTransform, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RootHasWorldTransform, put=__cordl_internal_set_m_RootHasWorldTransform)) bool  m_RootHasWorldTransform;

/// @brief Field m_RootVisualElement, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RootVisualElement, put=__cordl_internal_set_m_RootVisualElement)) ::UnityEngine::UIElements::UIDocumentRootElement*  m_RootVisualElement;

/// @brief Field m_SortingOrder, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SortingOrder, put=__cordl_internal_set_m_SortingOrder)) float_t  m_SortingOrder;

/// @brief Field m_UIDocumentCreationIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UIDocumentCreationIndex, put=__cordl_internal_set_m_UIDocumentCreationIndex)) int32_t  m_UIDocumentCreationIndex;

/// @brief Field m_WorldSpaceCollider, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_WorldSpaceCollider, put=__cordl_internal_set_m_WorldSpaceCollider)) ::UnityW<::UnityEngine::BoxCollider>  m_WorldSpaceCollider;

/// @brief Field m_WorldSpaceHeight, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_WorldSpaceHeight, put=__cordl_internal_set_m_WorldSpaceHeight)) float_t  m_WorldSpaceHeight;

/// @brief Field m_WorldSpaceSizeMode, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_WorldSpaceSizeMode, put=__cordl_internal_set_m_WorldSpaceSizeMode)) ::GlobalNamespace::UIDocument_WorldSpaceSizeMode  m_WorldSpaceSizeMode;

/// @brief Field m_WorldSpaceWidth, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_WorldSpaceWidth, put=__cordl_internal_set_m_WorldSpaceWidth)) float_t  m_WorldSpaceWidth;

 __declspec(property(get=get_panelSettings, put=set_panelSettings)) ::UnityW<::UnityEngine::UIElements::PanelSettings>  panelSettings;

 __declspec(property(get=get_parentUI, put=set_parentUI)) ::UnityW<::UnityEngine::UIElements::UIDocument>  parentUI;

 __declspec(property(get=get_pivot, put=set_pivot)) ::UnityEngine::UIElements::Pivot  pivot;

 __declspec(property(get=get_pivotReferenceSize, put=set_pivotReferenceSize)) ::UnityEngine::UIElements::PivotReferenceSize  pivotReferenceSize;

 __declspec(property(get=get_pixelsPerUnit)) float_t  pixelsPerUnit;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::UIElements::Position  position;

 __declspec(property(get=get_rootVisualElement, put=set_rootVisualElement)) ::UnityEngine::UIElements::VisualElement*  rootVisualElement;

 __declspec(property(get=get_runtimePanel)) ::UnityEngine::UIElements::IRuntimePanel*  runtimePanel;

/// @brief Field s_CurrentUIDocumentCounter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CurrentUIDocumentCounter, put=setStaticF_s_CurrentUIDocumentCounter)) int32_t  s_CurrentUIDocumentCounter;

/// @brief Field softPointerCaptures, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_softPointerCaptures, put=__cordl_internal_set_softPointerCaptures)) int32_t  softPointerCaptures;

 __declspec(property(get=get_sortingOrder, put=set_sortingOrder)) float_t  sortingOrder;

/// @brief Field sourceAsset, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceAsset, put=__cordl_internal_set_sourceAsset)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  sourceAsset;

 __declspec(property(get=get_visualTreeAsset, put=set_visualTreeAsset)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  visualTreeAsset;

 __declspec(property(get=get_worldSpaceSize, put=set_worldSpaceSize)) ::UnityEngine::Vector2  worldSpaceSize;

 __declspec(property(get=get_worldSpaceSizeMode, put=set_worldSpaceSizeMode)) ::GlobalNamespace::UIDocument_WorldSpaceSizeMode  worldSpaceSizeMode;

/// @brief Method AddChildAndInsertContentToVisualTree, addr 0xb8b48bc, size 0xb0, virtual false, abstract: false, final false
inline void AddChildAndInsertContentToVisualTree(::UnityEngine::UIElements::UIDocument*  child) ;

/// @brief Method AddOrRemoveRendererComponent, addr 0xb8b2ff4, size 0x108, virtual false, abstract: false, final false
inline void AddOrRemoveRendererComponent() ;

/// @brief Method AddRootVisualElementToTree, addr 0xb8b2ac8, size 0xd4, virtual false, abstract: false, final false
inline void AddRootVisualElementToTree() ;

/// @brief Method ApplySortingOrder, addr 0xb8b2ac4, size 0x4, virtual false, abstract: false, final false
inline void ApplySortingOrder() ;

/// @brief Method Awake, addr 0xb8b2c60, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearTransform, addr 0xb8b3518, size 0x30c, virtual false, abstract: false, final false
inline void ClearTransform() ;

/// @brief Method ComputeTransform, addr 0xb8b4140, size 0x25c, virtual false, abstract: false, final false
inline void ComputeTransform(::UnityEngine::Transform*  transform, ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method DoUpdate, addr 0xb8b2e74, size 0x114, virtual false, abstract: false, final false
inline void DoUpdate() ;

/// @brief Method FindRootUIDocument, addr 0xb8ac63c, size 0xbc, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::UIElements::UIDocument> FindRootUIDocument(::UnityEngine::UIElements::VisualElement*  element) ;

/// @brief Method FindUIDocumentParent, addr 0xb8b46d8, size 0xd8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UIElements::UIDocument> FindUIDocumentParent() ;

/// @brief Method GetPivotAsPercent, addr 0xb8b4698, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 GetPivotAsPercent(::UnityEngine::UIElements::Pivot  origin) ;

/// @brief Method IsValidBounds, addr 0xb8b410c, size 0x34, virtual false, abstract: false, final false
static inline bool IsValidBounds(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds>  b) ;

/// @brief Method LateUpdate, addr 0xb8b2e70, size 0x4, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LocalBoundsFromPivotSource, addr 0xb8b457c, size 0xc4, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds LocalBoundsFromPivotSource() ;

static inline ::UnityEngine::UIElements::UIDocument* New_ctor() ;

/// @brief Method OnDisable, addr 0xb8b4cdc, size 0xf4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb8b2d00, size 0x5c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTransformChildrenChanged, addr 0xb8b4dd0, size 0x1f4, virtual false, abstract: false, final false
inline void OnTransformChildrenChanged() ;

/// @brief Method OnTransformParentChanged, addr 0xb8b5068, size 0x4, virtual false, abstract: false, final false
inline void OnTransformParentChanged() ;

/// @brief Method PivotOffset, addr 0xb8b4640, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 PivotOffset() ;

/// @brief Method ReactToHierarchyChanged, addr 0xb8b4fc4, size 0xa4, virtual false, abstract: false, final false
inline void ReactToHierarchyChanged() ;

/// @brief Method RecreateUI, addr 0xb8b1cfc, size 0x480, virtual false, abstract: false, final false
inline void RecreateUI() ;

/// @brief Method RemoveChild, addr 0xb8b46c8, size 0x10, virtual false, abstract: false, final false
inline void RemoveChild(::UnityEngine::UIElements::UIDocument*  child) ;

/// @brief Method RemoveFromHierarchy, addr 0xb8b496c, size 0xcc, virtual false, abstract: false, final false
inline void RemoveFromHierarchy() ;

/// @brief Method RemoveWorldSpaceCollider, addr 0xb8b2f88, size 0x6c, virtual false, abstract: false, final false
inline void RemoveWorldSpaceCollider() ;

/// @brief Method Reset, addr 0xb8b47b0, size 0x10c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SanitizeRendererBounds, addr 0xb8b3e2c, size 0x134, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds SanitizeRendererBounds(::UnityEngine::Bounds  b) ;

/// @brief Method ScaleAndFlipMatrix, addr 0xb8b439c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 ScaleAndFlipMatrix() ;

/// @brief Method SetTransform, addr 0xb8b30fc, size 0x41c, virtual false, abstract: false, final false
inline void SetTransform() ;

/// @brief Method SetupFromHierarchy, addr 0xb8b2c64, size 0x9c, virtual false, abstract: false, final false
inline void SetupFromHierarchy() ;

/// @brief Method SetupPosition, addr 0xb8b22b8, size 0x1b8, virtual false, abstract: false, final false
inline void SetupPosition() ;

/// @brief Method SetupRootClassList, addr 0xb8b4a38, size 0x2a4, virtual false, abstract: false, final false
inline void SetupRootClassList() ;

/// @brief Method SetupWorldSpaceSize, addr 0xb8b2490, size 0x4b0, virtual false, abstract: false, final false
inline void SetupWorldSpaceSize() ;

/// @brief Method TransformToGameObjectMatrix, addr 0xb8b3f60, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 TransformToGameObjectMatrix() ;

/// @brief Method UpdateIsWorldSpaceRootFlag, addr 0xb8b3d30, size 0xd8, virtual false, abstract: false, final false
inline void UpdateIsWorldSpaceRootFlag() ;

/// @brief Method UpdateRenderer, addr 0xb8b3824, size 0x260, virtual false, abstract: false, final false
inline void UpdateRenderer() ;

/// @brief Method UpdateWorldSpaceCollider, addr 0xb8b3a84, size 0x2ac, virtual false, abstract: false, final false
inline void UpdateWorldSpaceCollider(::UnityEngine::UIElements::ColliderUpdateMode  mode) ;

/// @brief Method _Enable, addr 0xb8b2d5c, size 0x110, virtual false, abstract: false, final false
inline void _Enable() ;

constexpr ::UnityEngine::UIElements::VisualElementFocusRing* const& __cordl_internal_get__focusRing_k__BackingField() const;

constexpr ::UnityEngine::UIElements::VisualElementFocusRing*& __cordl_internal_get__focusRing_k__BackingField() ;

constexpr ::UnityEngine::UIElements::UIDocumentList* const& __cordl_internal_get_m_ChildrenContent() const;

constexpr ::UnityEngine::UIElements::UIDocumentList*& __cordl_internal_get_m_ChildrenContent() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* const& __cordl_internal_get_m_ChildrenContentCopy() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>*& __cordl_internal_get_m_ChildrenContentCopy() ;

constexpr int32_t const& __cordl_internal_get_m_FirstChildInsertIndex() const;

constexpr int32_t& __cordl_internal_get_m_FirstChildInsertIndex() ;

constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings> const& __cordl_internal_get_m_PanelSettings() const;

constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings>& __cordl_internal_get_m_PanelSettings() ;

constexpr ::UnityW<::UnityEngine::UIElements::UIDocument> const& __cordl_internal_get_m_ParentUI() const;

constexpr ::UnityW<::UnityEngine::UIElements::UIDocument>& __cordl_internal_get_m_ParentUI() ;

constexpr ::UnityEngine::UIElements::Pivot const& __cordl_internal_get_m_Pivot() const;

constexpr ::UnityEngine::UIElements::Pivot& __cordl_internal_get_m_Pivot() ;

constexpr ::UnityEngine::UIElements::PivotReferenceSize const& __cordl_internal_get_m_PivotReferenceSize() const;

constexpr ::UnityEngine::UIElements::PivotReferenceSize& __cordl_internal_get_m_PivotReferenceSize() ;

constexpr ::UnityEngine::UIElements::Position const& __cordl_internal_get_m_Position() const;

constexpr ::UnityEngine::UIElements::Position& __cordl_internal_get_m_Position() ;

constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings> const& __cordl_internal_get_m_PreviousPanelSettings() const;

constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings>& __cordl_internal_get_m_PreviousPanelSettings() ;

constexpr bool const& __cordl_internal_get_m_RootHasWorldTransform() const;

constexpr bool& __cordl_internal_get_m_RootHasWorldTransform() ;

constexpr ::UnityEngine::UIElements::UIDocumentRootElement* const& __cordl_internal_get_m_RootVisualElement() const;

constexpr ::UnityEngine::UIElements::UIDocumentRootElement*& __cordl_internal_get_m_RootVisualElement() ;

constexpr float_t const& __cordl_internal_get_m_SortingOrder() const;

constexpr float_t& __cordl_internal_get_m_SortingOrder() ;

constexpr int32_t const& __cordl_internal_get_m_UIDocumentCreationIndex() const;

constexpr int32_t& __cordl_internal_get_m_UIDocumentCreationIndex() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_m_WorldSpaceCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_m_WorldSpaceCollider() ;

constexpr float_t const& __cordl_internal_get_m_WorldSpaceHeight() const;

constexpr float_t& __cordl_internal_get_m_WorldSpaceHeight() ;

constexpr ::GlobalNamespace::UIDocument_WorldSpaceSizeMode const& __cordl_internal_get_m_WorldSpaceSizeMode() const;

constexpr ::GlobalNamespace::UIDocument_WorldSpaceSizeMode& __cordl_internal_get_m_WorldSpaceSizeMode() ;

constexpr float_t const& __cordl_internal_get_m_WorldSpaceWidth() const;

constexpr float_t& __cordl_internal_get_m_WorldSpaceWidth() ;

constexpr int32_t const& __cordl_internal_get_softPointerCaptures() const;

constexpr int32_t& __cordl_internal_get_softPointerCaptures() ;

constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get_sourceAsset() const;

constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get_sourceAsset() ;

constexpr void __cordl_internal_set__focusRing_k__BackingField(::UnityEngine::UIElements::VisualElementFocusRing*  value) ;

constexpr void __cordl_internal_set_m_ChildrenContent(::UnityEngine::UIElements::UIDocumentList*  value) ;

constexpr void __cordl_internal_set_m_ChildrenContentCopy(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>*  value) ;

constexpr void __cordl_internal_set_m_FirstChildInsertIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_PanelSettings(::UnityW<::UnityEngine::UIElements::PanelSettings>  value) ;

constexpr void __cordl_internal_set_m_ParentUI(::UnityW<::UnityEngine::UIElements::UIDocument>  value) ;

constexpr void __cordl_internal_set_m_Pivot(::UnityEngine::UIElements::Pivot  value) ;

constexpr void __cordl_internal_set_m_PivotReferenceSize(::UnityEngine::UIElements::PivotReferenceSize  value) ;

constexpr void __cordl_internal_set_m_Position(::UnityEngine::UIElements::Position  value) ;

constexpr void __cordl_internal_set_m_PreviousPanelSettings(::UnityW<::UnityEngine::UIElements::PanelSettings>  value) ;

constexpr void __cordl_internal_set_m_RootHasWorldTransform(bool  value) ;

constexpr void __cordl_internal_set_m_RootVisualElement(::UnityEngine::UIElements::UIDocumentRootElement*  value) ;

constexpr void __cordl_internal_set_m_SortingOrder(float_t  value) ;

constexpr void __cordl_internal_set_m_UIDocumentCreationIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_WorldSpaceCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_m_WorldSpaceHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_WorldSpaceSizeMode(::GlobalNamespace::UIDocument_WorldSpaceSizeMode  value) ;

constexpr void __cordl_internal_set_m_WorldSpaceWidth(float_t  value) ;

constexpr void __cordl_internal_set_softPointerCaptures(int32_t  value) ;

constexpr void __cordl_internal_set_sourceAsset(::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  value) ;

/// @brief Method .ctor, addr 0xb8b2b9c, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_EnabledDocumentCount() ;

static inline int32_t getStaticF_s_CurrentUIDocumentCounter() ;

/// @brief Method get_containerPanel, addr 0xb8a5ce4, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::RuntimePanel* get_containerPanel() ;

/// @brief Method get_firstChildInserIndex, addr 0xb8b2290, size 0x8, virtual false, abstract: false, final false
inline int32_t get_firstChildInserIndex() ;

/// [CompilerGenerated]
/// @brief Method get_focusRing, addr 0xb8b2280, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElementFocusRing* get_focusRing() ;

/// @brief Method get_isTransformControlledByGameObject, addr 0xb8b29f4, size 0x90, virtual false, abstract: false, final false
inline bool get_isTransformControlledByGameObject() ;

/// @brief Method get_isWorldSpace, addr 0xb8b296c, size 0x88, virtual false, abstract: false, final false
inline bool get_isWorldSpace() ;

/// @brief Method get_panelSettings, addr 0xb8b19ec, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UIElements::PanelSettings> get_panelSettings() ;

/// @brief Method get_parentUI, addr 0xb8b1cc8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UIElements::UIDocument> get_parentUI() ;

/// @brief Method get_pivot, addr 0xb8b2a94, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Pivot get_pivot() ;

/// @brief Method get_pivotReferenceSize, addr 0xb8b2a84, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::PivotReferenceSize get_pivotReferenceSize() ;

/// @brief Method get_pixelsPerUnit, addr 0xb8b3e08, size 0x24, virtual false, abstract: false, final false
inline float_t get_pixelsPerUnit() ;

/// @brief Method get_position, addr 0xb8b2298, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Position get_position() ;

/// @brief Method get_rootVisualElement, addr 0xb8a5cdc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* get_rootVisualElement() ;

/// @brief Method get_runtimePanel, addr 0xb8b2e6c, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::IRuntimePanel* get_runtimePanel() ;

/// @brief Method get_sortingOrder, addr 0xb8b2aa4, size 0x8, virtual false, abstract: false, final false
inline float_t get_sortingOrder() ;

/// @brief Method get_visualTreeAsset, addr 0xb8b1cd8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> get_visualTreeAsset() ;

/// @brief Method get_worldSpaceSize, addr 0xb8b2940, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_worldSpaceSize() ;

/// @brief Method get_worldSpaceSizeMode, addr 0xb8b2470, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::UIDocument_WorldSpaceSizeMode get_worldSpaceSizeMode() ;

static inline void setStaticF_EnabledDocumentCount(int32_t  value) ;

static inline void setStaticF_s_CurrentUIDocumentCounter(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_focusRing, addr 0xb8b2288, size 0x8, virtual false, abstract: false, final false
inline void set_focusRing(::UnityEngine::UIElements::VisualElementFocusRing*  value) ;

/// @brief Method set_panelSettings, addr 0xb8b19f4, size 0x2d4, virtual false, abstract: false, final false
inline void set_panelSettings(::UnityEngine::UIElements::PanelSettings*  value) ;

/// @brief Method set_parentUI, addr 0xb8b1cd0, size 0x8, virtual false, abstract: false, final false
inline void set_parentUI(::UnityEngine::UIElements::UIDocument*  value) ;

/// @brief Method set_pivot, addr 0xb8b2a9c, size 0x8, virtual false, abstract: false, final false
inline void set_pivot(::UnityEngine::UIElements::Pivot  value) ;

/// @brief Method set_pivotReferenceSize, addr 0xb8b2a8c, size 0x8, virtual false, abstract: false, final false
inline void set_pivotReferenceSize(::UnityEngine::UIElements::PivotReferenceSize  value) ;

/// @brief Method set_position, addr 0xb8b22a0, size 0x18, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::UIElements::Position  value) ;

/// @brief Method set_rootVisualElement, addr 0xb8b217c, size 0x104, virtual false, abstract: false, final false
inline void set_rootVisualElement(::UnityEngine::UIElements::VisualElement*  value) ;

/// @brief Method set_sortingOrder, addr 0xb8b2aac, size 0x18, virtual false, abstract: false, final false
inline void set_sortingOrder(float_t  value) ;

/// @brief Method set_visualTreeAsset, addr 0xb8b1ce0, size 0x1c, virtual false, abstract: false, final false
inline void set_visualTreeAsset(::UnityEngine::UIElements::VisualTreeAsset*  value) ;

/// @brief Method set_worldSpaceSize, addr 0xb8b2948, size 0x24, virtual false, abstract: false, final false
inline void set_worldSpaceSize(::UnityEngine::Vector2  value) ;

/// @brief Method set_worldSpaceSizeMode, addr 0xb8b2478, size 0x18, virtual false, abstract: false, final false
inline void set_worldSpaceSizeMode(::GlobalNamespace::UIDocument_WorldSpaceSizeMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIDocument() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIDocument", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UIDocument(UIDocument && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIDocument", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIDocument(UIDocument const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7789};

/// @brief Field k_DefaultSortingOrder offset 0xffffffff size 0x4
static constexpr int32_t  k_DefaultSortingOrder{static_cast<int32_t>(0x0)};

/// @brief Field k_RootStyleClassName offset 0xffffffff size 0x8
static constexpr ::ConstString  k_RootStyleClassName{u"unity-ui-document__root"};

/// @brief Field k_VisualElementNameSuffix offset 0xffffffff size 0x8
static constexpr ::ConstString  k_VisualElementNameSuffix{u"-container"};

/// @brief Field m_UIDocumentCreationIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_UIDocumentCreationIndex;

/// [SerializeField]
/// @brief Field m_PanelSettings, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::PanelSettings>  ___m_PanelSettings;

/// @brief Field m_PreviousPanelSettings, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::PanelSettings>  ___m_PreviousPanelSettings;

/// [SerializeField]
/// @brief Field m_ParentUI, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::UIDocument>  ___m_ParentUI;

/// @brief Field m_ChildrenContent, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIDocumentList*  ___m_ChildrenContent;

/// @brief Field m_ChildrenContentCopy, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>*  ___m_ChildrenContentCopy;

/// [SerializeField]
/// @brief Field sourceAsset, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  ___sourceAsset;

/// @brief Field m_RootVisualElement, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIDocumentRootElement*  ___m_RootVisualElement;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <focusRing>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElementFocusRing*  ____focusRing_k__BackingField;

/// @brief Field softPointerCaptures, offset: 0x68, size: 0x4, def value: None
 int32_t  ___softPointerCaptures;

/// @brief Field m_FirstChildInsertIndex, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___m_FirstChildInsertIndex;

/// [SerializeField]
/// @brief Field m_SortingOrder, offset: 0x70, size: 0x4, def value: None
 float_t  ___m_SortingOrder;

/// [SerializeField]
/// @brief Field m_Position, offset: 0x74, size: 0x4, def value: None
 ::UnityEngine::UIElements::Position  ___m_Position;

/// [SerializeField]
/// @brief Field m_WorldSpaceSizeMode, offset: 0x78, size: 0x4, def value: None
 ::GlobalNamespace::UIDocument_WorldSpaceSizeMode  ___m_WorldSpaceSizeMode;

/// [SerializeField]
/// @brief Field m_WorldSpaceWidth, offset: 0x7c, size: 0x4, def value: None
 float_t  ___m_WorldSpaceWidth;

/// [SerializeField]
/// @brief Field m_WorldSpaceHeight, offset: 0x80, size: 0x4, def value: None
 float_t  ___m_WorldSpaceHeight;

/// [SerializeField]
/// @brief Field m_PivotReferenceSize, offset: 0x84, size: 0x4, def value: None
 ::UnityEngine::UIElements::PivotReferenceSize  ___m_PivotReferenceSize;

/// [SerializeField]
/// @brief Field m_Pivot, offset: 0x88, size: 0x4, def value: None
 ::UnityEngine::UIElements::Pivot  ___m_Pivot;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_WorldSpaceCollider, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___m_WorldSpaceCollider;

/// @brief Field m_RootHasWorldTransform, offset: 0x98, size: 0x1, def value: None
 bool  ___m_RootHasWorldTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_UIDocumentCreationIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_PanelSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_PreviousPanelSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_ParentUI) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_ChildrenContent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_ChildrenContentCopy) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___sourceAsset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_RootVisualElement) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ____focusRing_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___softPointerCaptures) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_FirstChildInsertIndex) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_SortingOrder) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_Position) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_WorldSpaceSizeMode) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_WorldSpaceWidth) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_WorldSpaceHeight) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_PivotReferenceSize) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_Pivot) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_WorldSpaceCollider) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_RootHasWorldTransform) == 0x98, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIDocument) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::UIElements

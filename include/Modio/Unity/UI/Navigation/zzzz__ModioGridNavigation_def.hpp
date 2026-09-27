#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Navigation/ModioGridNavigation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ModioGridNavigation)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
struct MoveDirection;
}
namespace UnityEngine::UI {
class ILayoutController;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Modio::Unity::UI::Navigation {
class ModioGridNavigation;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Navigation::ModioGridNavigation*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Navigation::ModioGridNavigation*, "Modio.Unity.UI.Navigation", "ModioGridNavigation");
// Dependencies UnityEngine.UI.Selectable, UnityEngine.Vector3
namespace Modio::Unity::UI::Navigation {
// Is value type: false
// CS Name: Modio.Unity.UI.Navigation.ModioGridNavigation
class CORDL_TYPE ModioGridNavigation : public ::UnityEngine::UI::Selectable {
public:
// Declarations
/// @brief Field PrevCorners, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PrevCorners, put=setStaticF_PrevCorners)) ::ArrayW<::UnityEngine::Vector3>  PrevCorners;

/// @brief Field PrevRow, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PrevRow, put=setStaticF_PrevRow)) ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::UI::Selectable>>*  PrevRow;

/// @brief Field ReusedSelectables, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReusedSelectables, put=setStaticF_ReusedSelectables)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Selectable>>*  ReusedSelectables;

/// @brief Field TransCorners, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TransCorners, put=setStaticF_TransCorners)) ::ArrayW<::UnityEngine::Vector3>  TransCorners;

/// @brief Field _fallbackSelectionToIfNoValidChildren, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__fallbackSelectionToIfNoValidChildren, put=__cordl_internal_set__fallbackSelectionToIfNoValidChildren)) ::UnityW<::UnityEngine::GameObject>  _fallbackSelectionToIfNoValidChildren;

/// @brief Field _getSelectablesInChildrensChildren, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get__getSelectablesInChildrensChildren, put=__cordl_internal_set__getSelectablesInChildrensChildren)) bool  _getSelectablesInChildrensChildren;

/// @brief Field _lastSelectedGameObject, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastSelectedGameObject, put=__cordl_internal_set__lastSelectedGameObject)) ::UnityW<::UnityEngine::GameObject>  _lastSelectedGameObject;

/// @brief Field _needsDelayedNavigationCorrection, offset 0x111, size 0x1 
 __declspec(property(get=__cordl_internal_get__needsDelayedNavigationCorrection, put=__cordl_internal_set__needsDelayedNavigationCorrection)) bool  _needsDelayedNavigationCorrection;

/// @brief Field _selectChildImmediately, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get__selectChildImmediately, put=__cordl_internal_set__selectChildImmediately)) bool  _selectChildImmediately;

/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr operator  ::UnityEngine::UI::ILayoutController*() noexcept;

/// @brief Method GetNeighbourInDir, addr 0x9fb2670, size 0x184, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Selectable> GetNeighbourInDir(::UnityEngine::EventSystems::MoveDirection  moveDirection) ;

/// @brief Method IsToTheRight, addr 0x9fb2510, size 0x160, virtual false, abstract: false, final false
static inline bool IsToTheRight(::UnityEngine::RectTransform*  prevRectTransform, ::UnityEngine::RectTransform*  rectTransform) ;

/// @brief Method LateUpdate, addr 0x9fb0b14, size 0xa70, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method NeedsNavigationCorrection, addr 0x9fad1f8, size 0xc, virtual false, abstract: false, final false
inline void NeedsNavigationCorrection() ;

static inline ::Modio::Unity::UI::Navigation::ModioGridNavigation* New_ctor() ;

/// @brief Method OnEnable, addr 0x9fb0a38, size 0xcc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSelect, addr 0x9fb2504, size 0xc, virtual true, abstract: false, final false
inline void OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method RecalculateNavigation, addr 0x9fb1584, size 0xf80, virtual false, abstract: false, final false
inline void RecalculateNavigation() ;

/// @brief Method SetLayoutHorizontal, addr 0x9fb0b04, size 0x4, virtual true, abstract: false, final true
inline void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical, addr 0x9fb0b08, size 0xc, virtual true, abstract: false, final true
inline void SetLayoutVertical() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__fallbackSelectionToIfNoValidChildren() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__fallbackSelectionToIfNoValidChildren() ;

constexpr bool const& __cordl_internal_get__getSelectablesInChildrensChildren() const;

constexpr bool& __cordl_internal_get__getSelectablesInChildrensChildren() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__lastSelectedGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__lastSelectedGameObject() ;

constexpr bool const& __cordl_internal_get__needsDelayedNavigationCorrection() const;

constexpr bool& __cordl_internal_get__needsDelayedNavigationCorrection() ;

constexpr bool const& __cordl_internal_get__selectChildImmediately() const;

constexpr bool& __cordl_internal_get__selectChildImmediately() ;

constexpr void __cordl_internal_set__fallbackSelectionToIfNoValidChildren(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__getSelectablesInChildrensChildren(bool  value) ;

constexpr void __cordl_internal_set__lastSelectedGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__needsDelayedNavigationCorrection(bool  value) ;

constexpr void __cordl_internal_set__selectChildImmediately(bool  value) ;

/// @brief Method .ctor, addr 0x9fb27f4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF_PrevCorners() ;

static inline ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::UI::Selectable>>* getStaticF_PrevRow() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Selectable>>* getStaticF_ReusedSelectables() ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF_TransCorners() ;

/// @brief Convert to "::UnityEngine::UI::ILayoutController"
constexpr ::UnityEngine::UI::ILayoutController* i___UnityEngine__UI__ILayoutController() noexcept;

static inline void setStaticF_PrevCorners(::ArrayW<::UnityEngine::Vector3>  value) ;

static inline void setStaticF_PrevRow(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::UI::Selectable>>*  value) ;

static inline void setStaticF_ReusedSelectables(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Selectable>>*  value) ;

static inline void setStaticF_TransCorners(::ArrayW<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioGridNavigation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioGridNavigation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioGridNavigation(ModioGridNavigation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioGridNavigation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioGridNavigation(ModioGridNavigation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27113};

/// [SerializeField]
/// @brief Field _getSelectablesInChildrensChildren, offset: 0x100, size: 0x1, def value: None
 bool  ____getSelectablesInChildrensChildren;

/// [SerializeField]
/// @brief Field _fallbackSelectionToIfNoValidChildren, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____fallbackSelectionToIfNoValidChildren;

/// @brief Field _selectChildImmediately, offset: 0x110, size: 0x1, def value: None
 bool  ____selectChildImmediately;

/// @brief Field _needsDelayedNavigationCorrection, offset: 0x111, size: 0x1, def value: None
 bool  ____needsDelayedNavigationCorrection;

/// @brief Field _lastSelectedGameObject, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____lastSelectedGameObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioGridNavigation, ____getSelectablesInChildrensChildren) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioGridNavigation, ____fallbackSelectionToIfNoValidChildren) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioGridNavigation, ____selectChildImmediately) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioGridNavigation, ____needsDelayedNavigationCorrection) == 0x111, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioGridNavigation, ____lastSelectedGameObject) == 0x118, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Navigation::ModioGridNavigation) == 0x120, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Navigation

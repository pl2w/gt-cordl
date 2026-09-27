#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseVisualTreeHierarchyTrackerUpdater.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeHierarchyTrackerUpdater_State_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
CORDL_MODULE_EXPORT(BaseVisualTreeHierarchyTrackerUpdater)
namespace GlobalNamespace {
struct BaseVisualTreeHierarchyTrackerUpdater_State;
}
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseVisualTreeHierarchyTrackerUpdater;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*, "UnityEngine.UIElements", "BaseVisualTreeHierarchyTrackerUpdater");
// Dependencies UnityEngine.UIElements.BaseVisualTreeHierarchyTrackerUpdater::State, UnityEngine.UIElements.BaseVisualTreeUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseVisualTreeHierarchyTrackerUpdater
class CORDL_TYPE BaseVisualTreeHierarchyTrackerUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
// Declarations
using State = ::GlobalNamespace::BaseVisualTreeHierarchyTrackerUpdater_State;

/// @brief Field m_CurrentChangeElement, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentChangeElement, put=__cordl_internal_set_m_CurrentChangeElement)) ::UnityEngine::UIElements::VisualElement*  m_CurrentChangeElement;

/// @brief Field m_CurrentChangeParent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentChangeParent, put=__cordl_internal_set_m_CurrentChangeParent)) ::UnityEngine::UIElements::VisualElement*  m_CurrentChangeParent;

/// @brief Field m_State, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_State, put=__cordl_internal_set_m_State)) ::GlobalNamespace::BaseVisualTreeHierarchyTrackerUpdater_State  m_State;

static inline ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater* New_ctor() ;

/// @brief Method OnHierarchyChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnHierarchyChange(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::HierarchyChangeType  type) ;

/// @brief Method OnVersionChanged, addr 0xb7c7278, size 0x2c, virtual true, abstract: false, final false
inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::VersionChangeType  versionChangeType) ;

/// @brief Method ProcessAddOrMove, addr 0xb7c73d0, size 0xb8, virtual false, abstract: false, final false
inline void ProcessAddOrMove(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method ProcessNewChange, addr 0xb7c72a4, size 0x9c, virtual false, abstract: false, final false
inline void ProcessNewChange(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method ProcessRemove, addr 0xb7c7340, size 0x90, virtual false, abstract: false, final false
inline void ProcessRemove(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method Update, addr 0xb7c7488, size 0xac, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_CurrentChangeElement() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CurrentChangeElement() ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_CurrentChangeParent() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CurrentChangeParent() ;

constexpr ::GlobalNamespace::BaseVisualTreeHierarchyTrackerUpdater_State const& __cordl_internal_get_m_State() const;

constexpr ::GlobalNamespace::BaseVisualTreeHierarchyTrackerUpdater_State& __cordl_internal_get_m_State() ;

constexpr void __cordl_internal_set_m_CurrentChangeElement(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr void __cordl_internal_set_m_CurrentChangeParent(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr void __cordl_internal_set_m_State(::GlobalNamespace::BaseVisualTreeHierarchyTrackerUpdater_State  value) ;

/// @brief Method .ctor, addr 0xb7c7534, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseVisualTreeHierarchyTrackerUpdater() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseVisualTreeHierarchyTrackerUpdater", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseVisualTreeHierarchyTrackerUpdater(BaseVisualTreeHierarchyTrackerUpdater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseVisualTreeHierarchyTrackerUpdater", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseVisualTreeHierarchyTrackerUpdater(BaseVisualTreeHierarchyTrackerUpdater const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8483};

/// @brief Field m_State, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::BaseVisualTreeHierarchyTrackerUpdater_State  ___m_State;

/// @brief Field m_CurrentChangeElement, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ___m_CurrentChangeElement;

/// @brief Field m_CurrentChangeParent, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ___m_CurrentChangeParent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater, ___m_State) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater, ___m_CurrentChangeElement) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater, ___m_CurrentChangeParent) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::UIElements

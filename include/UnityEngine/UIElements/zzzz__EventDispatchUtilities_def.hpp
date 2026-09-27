#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventDispatchUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventDispatchUtilities)
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventDispatchUtilities;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::EventDispatchUtilities*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::EventDispatchUtilities*, "UnityEngine.UIElements", "EventDispatchUtilities");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EventDispatchUtilities
class CORDL_TYPE EventDispatchUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method DefaultDispatch, addr 0xb88f634, size 0x34, virtual false, abstract: false, final false
static inline void DefaultDispatch(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel) ;

/// @brief Method Disabled, addr 0xb89243c, size 0x3c, virtual false, abstract: false, final false
static inline bool Disabled(/* [NotNull] */ ::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement*  target) ;

/// @brief Method DispatchToAssignedTarget, addr 0xb892f14, size 0x98, virtual false, abstract: false, final false
static inline void DispatchToAssignedTarget(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel) ;

/// @brief Method DispatchToCapturingElement, addr 0xb892ff0, size 0x1fc, virtual false, abstract: false, final false
static inline bool DispatchToCapturingElement(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, int32_t  pointerId) ;

/// @brief Method DispatchToCapturingElementOrElementUnderPointer, addr 0xb892fac, size 0x44, virtual false, abstract: false, final false
static inline void DispatchToCapturingElementOrElementUnderPointer(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, int32_t  pointerId, ::UnityEngine::Vector2  position) ;

/// @brief Method DispatchToElementUnderPointerOrPanelRoot, addr 0xb892e08, size 0x10c, virtual false, abstract: false, final false
static inline void DispatchToElementUnderPointerOrPanelRoot(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, int32_t  pointerId, ::UnityEngine::Vector2  position) ;

/// @brief Method DispatchToFocusedElementOrPanelRoot, addr 0xb892b54, size 0x24c, virtual false, abstract: false, final false
static inline void DispatchToFocusedElementOrPanelRoot(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel) ;

/// @brief Method DispatchToPanelRoot, addr 0xb8931ec, size 0x64, virtual false, abstract: false, final false
static inline void DispatchToPanelRoot(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel) ;

/// @brief Method HandleEventAcrossPropagationPath, addr 0xb89195c, size 0x70c, virtual false, abstract: false, final false
static inline void HandleEventAcrossPropagationPath(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement*  target, bool  isCapturingTarget) ;

/// @brief Method HandleEventAcrossPropagationPathWithCompatibilityEvent, addr 0xb890e78, size 0xae4, virtual false, abstract: false, final false
static inline void HandleEventAcrossPropagationPathWithCompatibilityEvent(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::EventBase*  compatibilityEvt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement*  target, bool  isCapturingTarget) ;

/// @brief Method HandleEventAtTargetAndDefaultPhase, addr 0xb892068, size 0x3d4, virtual false, abstract: false, final false
static inline void HandleEventAtTargetAndDefaultPhase(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement*  target) ;

/// @brief Method HandleEvent_BubbleUpAllDefaultActions, addr 0xb892a50, size 0x104, virtual false, abstract: false, final false
static inline void HandleEvent_BubbleUpAllDefaultActions(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement*  element, bool  disabled, bool  isCapturingTarget) ;

/// @brief Method HandleEvent_BubbleUpCallbacks, addr 0xb892974, size 0x2c, virtual false, abstract: false, final false
static inline void HandleEvent_BubbleUpCallbacks(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement*  element) ;

/// @brief Method HandleEvent_BubbleUpHandleEvent, addr 0xb8929f8, size 0x58, virtual false, abstract: false, final false
static inline void HandleEvent_BubbleUpHandleEvent(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement*  element, bool  disabled) ;

/// @brief Method HandleEvent_DefaultAction, addr 0xb892858, size 0xf0, virtual false, abstract: false, final false
static inline void HandleEvent_DefaultAction(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement*  element, bool  disabled) ;

/// @brief Method HandleEvent_DefaultActionAtTarget, addr 0xb892768, size 0xf0, virtual false, abstract: false, final false
static inline void HandleEvent_DefaultActionAtTarget(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement*  element, bool  disabled) ;

/// @brief Method HandleEvent_TrickleDownCallbacks, addr 0xb892948, size 0x2c, virtual false, abstract: false, final false
static inline void HandleEvent_TrickleDownCallbacks(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement*  element) ;

/// @brief Method HandleEvent_TrickleDownHandleEvent, addr 0xb8929a0, size 0x58, virtual false, abstract: false, final false
static inline void HandleEvent_TrickleDownHandleEvent(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement*  element, bool  disabled) ;

/// @brief Method PropagateEvent, addr 0xb890d34, size 0x144, virtual false, abstract: false, final false
static inline void PropagateEvent(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement*  target, bool  isCapturingTarget) ;

/// @brief Method PropagateToRemainingIMGUIContainerRecursive, addr 0xb893250, size 0x3cc, virtual false, abstract: false, final false
static inline void PropagateToRemainingIMGUIContainerRecursive(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement*  root) ;

/// @brief Method PropagateToRemainingIMGUIContainers, addr 0xb892da0, size 0x68, virtual false, abstract: false, final false
static inline void PropagateToRemainingIMGUIContainers(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement*  root) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventDispatchUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventDispatchUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventDispatchUtilities(EventDispatchUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventDispatchUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventDispatchUtilities(EventDispatchUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7611};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::EventDispatchUtilities) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements

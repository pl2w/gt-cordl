#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/UIHoverExitEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(UIHoverExitEvent)
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class UIHoverEventArgs;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class UIHoverExitEvent;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*, "UnityEngine.XR.Interaction.Toolkit.UI", "UIHoverExitEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.UIHoverExitEvent
class CORDL_TYPE UIHoverExitEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb43f038, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIHoverExitEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIHoverExitEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UIHoverExitEvent(UIHoverExitEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIHoverExitEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIHoverExitEvent(UIHoverExitEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11305};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI

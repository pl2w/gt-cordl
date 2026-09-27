#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/IUIHoverInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUIHoverInteractor)
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class UIHoverEnterEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class UIHoverEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class UIHoverExitEvent;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIHoverInteractor;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*, "UnityEngine.XR.Interaction.Toolkit.UI", "IUIHoverInteractor");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor
class CORDL_TYPE IUIHoverInteractor {
public:
// Declarations
 __declspec(property(get=get_uiHoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  uiHoverEntered;

 __declspec(property(get=get_uiHoverExited)) ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  uiHoverExited;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*() noexcept;

/// @brief Method OnUIHoverEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnUIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args) ;

/// @brief Method OnUIHoverExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnUIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args) ;

/// @brief Method get_uiHoverEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* get_uiHoverEntered() ;

/// @brief Method get_uiHoverExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* get_uiHoverExited() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* i___UnityEngine__XR__Interaction__Toolkit__UI__IUIInteractor() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IUIHoverInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUIHoverInteractor(IUIHoverInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11308};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI

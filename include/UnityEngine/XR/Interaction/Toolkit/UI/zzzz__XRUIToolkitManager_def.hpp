#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIToolkitManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(XRUIToolkitManager)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class XRUIToolkitManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitManager*, "UnityEngine.XR.Interaction.Toolkit.UI", "XRUIToolkitManager");
// [AddComponentMenu("XR/XR UI Toolkit Manager", 11)]
// [DisallowMultipleComponent]
// [DefaultExecutionOrder(-200)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.XRUIToolkitManager.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.XRUIToolkitManager
class CORDL_TYPE XRUIToolkitManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitManager* New_ctor() ;

/// @brief Method OnDisable, addr 0xb44317c, size 0x88, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4430f0, size 0x8c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method .ctor, addr 0xb443204, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRUIToolkitManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRUIToolkitManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRUIToolkitManager(XRUIToolkitManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRUIToolkitManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRUIToolkitManager(XRUIToolkitManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11318};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitManager) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI

#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/Visuals/XRTintInteractableVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(XRTintInteractableVisual)
namespace GlobalNamespace {
struct XRTintInteractableVisual_ShaderPropertyLookup;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals {
class XRTintInteractableVisual;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*, "UnityEngine.XR.Interaction.Toolkit.Interactables.Visuals", "XRTintInteractableVisual");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// [AddComponentMenu("XR/Visual/XR Tint Interactable Visual", 11)]
// [DisallowMultipleComponent]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactables.Visuals.XRTintInteractableVisual.html")]
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.Visuals.XRTintInteractableVisual
class CORDL_TYPE XRTintInteractableVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ShaderPropertyLookup = ::GlobalNamespace::XRTintInteractableVisual_ShaderPropertyLookup;

/// @brief Field m_EmissionEnabled, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EmissionEnabled, put=__cordl_internal_set_m_EmissionEnabled)) bool  m_EmissionEnabled;

/// @brief Field m_HasLoggedMaterialInstance, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasLoggedMaterialInstance, put=__cordl_internal_set_m_HasLoggedMaterialInstance)) bool  m_HasLoggedMaterialInstance;

/// @brief Field m_HoverInteractable, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverInteractable, put=__cordl_internal_set_m_HoverInteractable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  m_HoverInteractable;

/// @brief Field m_Interactable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Interactable, put=__cordl_internal_set_m_Interactable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  m_Interactable;

/// @brief Field m_SelectInteractable, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectInteractable, put=__cordl_internal_set_m_SelectInteractable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  m_SelectInteractable;

/// @brief Field m_TintColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_TintColor, put=__cordl_internal_set_m_TintColor)) ::UnityEngine::Color  m_TintColor;

/// @brief Field m_TintOnHover, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TintOnHover, put=__cordl_internal_set_m_TintOnHover)) bool  m_TintOnHover;

/// @brief Field m_TintOnSelection, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TintOnSelection, put=__cordl_internal_set_m_TintOnSelection)) bool  m_TintOnSelection;

/// @brief Field m_TintPropertyBlock, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TintPropertyBlock, put=__cordl_internal_set_m_TintPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  m_TintPropertyBlock;

/// @brief Field m_TintRenderers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TintRenderers, put=__cordl_internal_set_m_TintRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  m_TintRenderers;

/// @brief Field s_Materials, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Materials, put=setStaticF_s_Materials)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  s_Materials;

 __declspec(property(get=get_tintColor, put=set_tintColor)) ::UnityEngine::Color  tintColor;

 __declspec(property(get=get_tintOnHover, put=set_tintOnHover)) bool  tintOnHover;

 __declspec(property(get=get_tintOnSelection, put=set_tintOnSelection)) bool  tintOnSelection;

 __declspec(property(get=get_tintRenderers, put=set_tintRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  tintRenderers;

/// @brief Method Awake, addr 0xb4a0df8, size 0x770, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetEmissionEnabled, addr 0xb4a1e9c, size 0x3f4, virtual true, abstract: false, final false
inline bool GetEmissionEnabled() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb4a1568, size 0x42c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnFirstHoverEntered, addr 0xb4a2290, size 0x1c, virtual false, abstract: false, final false
inline void OnFirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method OnFirstSelectEntered, addr 0xb4a2390, size 0x1c, virtual false, abstract: false, final false
inline void OnFirstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnLastHoverExited, addr 0xb4a22ac, size 0xe4, virtual false, abstract: false, final false
inline void OnLastHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method OnLastSelectExited, addr 0xb4a23ac, size 0xe4, virtual false, abstract: false, final false
inline void OnLastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method SetTint, addr 0xb4a1994, size 0x508, virtual true, abstract: false, final false
inline void SetTint(bool  on) ;

constexpr bool const& __cordl_internal_get_m_EmissionEnabled() const;

constexpr bool& __cordl_internal_get_m_EmissionEnabled() ;

constexpr bool const& __cordl_internal_get_m_HasLoggedMaterialInstance() const;

constexpr bool& __cordl_internal_get_m_HasLoggedMaterialInstance() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable* const& __cordl_internal_get_m_HoverInteractable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*& __cordl_internal_get_m_HoverInteractable() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& __cordl_internal_get_m_Interactable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& __cordl_internal_get_m_Interactable() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* const& __cordl_internal_get_m_SelectInteractable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*& __cordl_internal_get_m_SelectInteractable() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_TintColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_TintColor() ;

constexpr bool const& __cordl_internal_get_m_TintOnHover() const;

constexpr bool& __cordl_internal_get_m_TintOnHover() ;

constexpr bool const& __cordl_internal_get_m_TintOnSelection() const;

constexpr bool& __cordl_internal_get_m_TintOnSelection() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_m_TintPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_TintPropertyBlock() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_m_TintRenderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_m_TintRenderers() ;

constexpr void __cordl_internal_set_m_EmissionEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_HasLoggedMaterialInstance(bool  value) ;

constexpr void __cordl_internal_set_m_HoverInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  value) ;

constexpr void __cordl_internal_set_m_Interactable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value) ;

constexpr void __cordl_internal_set_m_SelectInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  value) ;

constexpr void __cordl_internal_set_m_TintColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_TintOnHover(bool  value) ;

constexpr void __cordl_internal_set_m_TintOnSelection(bool  value) ;

constexpr void __cordl_internal_set_m_TintPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_m_TintRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

/// @brief Method .ctor, addr 0xb4a2490, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* getStaticF_s_Materials() ;

/// @brief Method get_tintColor, addr 0xb4a0db0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_tintColor() ;

/// @brief Method get_tintOnHover, addr 0xb4a0dc8, size 0x8, virtual false, abstract: false, final false
inline bool get_tintOnHover() ;

/// @brief Method get_tintOnSelection, addr 0xb4a0dd8, size 0x8, virtual false, abstract: false, final false
inline bool get_tintOnSelection() ;

/// @brief Method get_tintRenderers, addr 0xb4a0de8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* get_tintRenderers() ;

static inline void setStaticF_s_Materials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

/// @brief Method set_tintColor, addr 0xb4a0dbc, size 0xc, virtual false, abstract: false, final false
inline void set_tintColor(::UnityEngine::Color  value) ;

/// @brief Method set_tintOnHover, addr 0xb4a0dd0, size 0x8, virtual false, abstract: false, final false
inline void set_tintOnHover(bool  value) ;

/// @brief Method set_tintOnSelection, addr 0xb4a0de0, size 0x8, virtual false, abstract: false, final false
inline void set_tintOnSelection(bool  value) ;

/// @brief Method set_tintRenderers, addr 0xb4a0df0, size 0x8, virtual false, abstract: false, final false
inline void set_tintRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRTintInteractableVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRTintInteractableVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRTintInteractableVisual(XRTintInteractableVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRTintInteractableVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRTintInteractableVisual(XRTintInteractableVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11533};

/// [SerializeField]
/// [Tooltip("Tint color for interactable.")]
/// @brief Field m_TintColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_TintColor;

/// [SerializeField]
/// [Tooltip("Tint on hover.")]
/// @brief Field m_TintOnHover, offset: 0x30, size: 0x1, def value: None
 bool  ___m_TintOnHover;

/// [SerializeField]
/// [Tooltip("Tint on selection.")]
/// @brief Field m_TintOnSelection, offset: 0x31, size: 0x1, def value: None
 bool  ___m_TintOnSelection;

/// [SerializeField]
/// [Tooltip("Renderer(s) to use for tinting (will default to any Renderer on the GameObject if not specified).")]
/// @brief Field m_TintRenderers, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___m_TintRenderers;

/// @brief Field m_Interactable, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  ___m_Interactable;

/// @brief Field m_HoverInteractable, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  ___m_HoverInteractable;

/// @brief Field m_SelectInteractable, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  ___m_SelectInteractable;

/// @brief Field m_TintPropertyBlock, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___m_TintPropertyBlock;

/// @brief Field m_EmissionEnabled, offset: 0x60, size: 0x1, def value: None
 bool  ___m_EmissionEnabled;

/// @brief Field m_HasLoggedMaterialInstance, offset: 0x61, size: 0x1, def value: None
 bool  ___m_HasLoggedMaterialInstance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual, ___m_TintColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual, ___m_TintOnHover) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual, ___m_TintOnSelection) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual, ___m_TintRenderers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual, ___m_Interactable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual, ___m_HoverInteractable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual, ___m_SelectInteractable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual, ___m_TintPropertyBlock) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual, ___m_EmissionEnabled) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual, ___m_HasLoggedMaterialInstance) == 0x61, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals

#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Rendering/ColorGradientLineRendererAffordanceReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__ColorAffordanceReceiver_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Rendering/zzzz__ColorGradientLineRendererAffordanceReceiver_LineColorProperty_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(ColorGradientLineRendererAffordanceReceiver)
namespace GlobalNamespace {
struct ColorGradientLineRendererAffordanceReceiver_LineColorProperty;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class LineRenderer;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
class ColorGradientLineRendererAffordanceReceiver;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorGradientLineRendererAffordanceReceiver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorGradientLineRendererAffordanceReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering", "ColorGradientLineRendererAffordanceReceiver");
// [AddComponentMenu("Affordance System/Receiver/Rendering/Color Gradient Line Renderer Affordance Receiver", 12)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.ColorGradientLineRendererAffordanceReceiver.html")]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.Color, UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.ColorAffordanceReceiver, UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.ColorGradientLineRendererAffordanceReceiver::LineColorProperty
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.ColorGradientLineRendererAffordanceReceiver
class CORDL_TYPE ColorGradientLineRendererAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver {
public:
// Declarations
using LineColorProperty = ::GlobalNamespace::ColorGradientLineRendererAffordanceReceiver_LineColorProperty;

 __declspec(property(get=get_disableXRInteractorLineVisualColorControlIfPresent, put=set_disableXRInteractorLineVisualColorControlIfPresent)) bool  disableXRInteractorLineVisualColorControlIfPresent;

 __declspec(property(get=get_lineColorProperty, put=set_lineColorProperty)) ::GlobalNamespace::ColorGradientLineRendererAffordanceReceiver_LineColorProperty  lineColorProperty;

 __declspec(property(get=get_lineRenderer, put=set_lineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  lineRenderer;

/// @brief Field m_DisableXRInteractorLineVisualColorControlIfPresent, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DisableXRInteractorLineVisualColorControlIfPresent, put=__cordl_internal_set_m_DisableXRInteractorLineVisualColorControlIfPresent)) bool  m_DisableXRInteractorLineVisualColorControlIfPresent;

/// @brief Field m_InitialEndColor, offset 0xd0, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_InitialEndColor, put=__cordl_internal_set_m_InitialEndColor)) ::UnityEngine::Color  m_InitialEndColor;

/// @brief Field m_InitialStartColor, offset 0xc0, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_InitialStartColor, put=__cordl_internal_set_m_InitialStartColor)) ::UnityEngine::Color  m_InitialStartColor;

/// @brief Field m_LineColorProperty, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LineColorProperty, put=__cordl_internal_set_m_LineColorProperty)) ::GlobalNamespace::ColorGradientLineRendererAffordanceReceiver_LineColorProperty  m_LineColorProperty;

/// @brief Field m_LineRenderer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LineRenderer, put=__cordl_internal_set_m_LineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  m_LineRenderer;

/// @brief Method Awake, addr 0xb4daa48, size 0x17c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CaptureInitialValue, addr 0xb4dad24, size 0x9c, virtual true, abstract: false, final false
inline void CaptureInitialValue() ;

/// @brief Method GetCurrentValueForCapture, addr 0xb4dadc0, size 0x74, virtual true, abstract: false, final false
inline ::UnityEngine::Color GetCurrentValueForCapture() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorGradientLineRendererAffordanceReceiver* New_ctor() ;

/// @brief Method OnAffordanceValueUpdated, addr 0xb4dac84, size 0xa0, virtual true, abstract: false, final false
inline void OnAffordanceValueUpdated(::UnityEngine::Color  newValue) ;

/// @brief Method Start, addr 0xb4dabc4, size 0xc0, virtual true, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get_m_DisableXRInteractorLineVisualColorControlIfPresent() const;

constexpr bool& __cordl_internal_get_m_DisableXRInteractorLineVisualColorControlIfPresent() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_InitialEndColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_InitialEndColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_InitialStartColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_InitialStartColor() ;

constexpr ::GlobalNamespace::ColorGradientLineRendererAffordanceReceiver_LineColorProperty const& __cordl_internal_get_m_LineColorProperty() const;

constexpr ::GlobalNamespace::ColorGradientLineRendererAffordanceReceiver_LineColorProperty& __cordl_internal_get_m_LineColorProperty() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_m_LineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_m_LineRenderer() ;

constexpr void __cordl_internal_set_m_DisableXRInteractorLineVisualColorControlIfPresent(bool  value) ;

constexpr void __cordl_internal_set_m_InitialEndColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_InitialStartColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_LineColorProperty(::GlobalNamespace::ColorGradientLineRendererAffordanceReceiver_LineColorProperty  value) ;

constexpr void __cordl_internal_set_m_LineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

/// @brief Method .ctor, addr 0xb4dae34, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_disableXRInteractorLineVisualColorControlIfPresent, addr 0xb4daa38, size 0x8, virtual false, abstract: false, final false
inline bool get_disableXRInteractorLineVisualColorControlIfPresent() ;

/// @brief Method get_lineColorProperty, addr 0xb4daa14, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ColorGradientLineRendererAffordanceReceiver_LineColorProperty get_lineColorProperty() ;

/// @brief Method get_lineRenderer, addr 0xb4daa04, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::LineRenderer> get_lineRenderer() ;

/// @brief Method set_disableXRInteractorLineVisualColorControlIfPresent, addr 0xb4daa40, size 0x8, virtual false, abstract: false, final false
inline void set_disableXRInteractorLineVisualColorControlIfPresent(bool  value) ;

/// @brief Method set_lineColorProperty, addr 0xb4daa1c, size 0x1c, virtual false, abstract: false, final false
inline void set_lineColorProperty(::GlobalNamespace::ColorGradientLineRendererAffordanceReceiver_LineColorProperty  value) ;

/// @brief Method set_lineRenderer, addr 0xb4daa0c, size 0x8, virtual false, abstract: false, final false
inline void set_lineRenderer(::UnityEngine::LineRenderer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorGradientLineRendererAffordanceReceiver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorGradientLineRendererAffordanceReceiver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorGradientLineRendererAffordanceReceiver(ColorGradientLineRendererAffordanceReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorGradientLineRendererAffordanceReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorGradientLineRendererAffordanceReceiver(ColorGradientLineRendererAffordanceReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11755};

/// [SerializeField]
/// [Tooltip("Line Renderer on which to animate colors.")]
/// @brief Field m_LineRenderer, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___m_LineRenderer;

/// [SerializeField]
/// [Tooltip("Mode determining how color is applied to the associated Line Renderer.")]
/// @brief Field m_LineColorProperty, offset: 0xb8, size: 0x4, def value: None
 ::GlobalNamespace::ColorGradientLineRendererAffordanceReceiver_LineColorProperty  ___m_LineColorProperty;

/// [SerializeField]
/// [Tooltip("Prevent XR Interactor Line Visual from controlling line rendering color if present.")]
/// @brief Field m_DisableXRInteractorLineVisualColorControlIfPresent, offset: 0xbc, size: 0x1, def value: None
 bool  ___m_DisableXRInteractorLineVisualColorControlIfPresent;

/// @brief Field m_InitialStartColor, offset: 0xc0, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_InitialStartColor;

/// @brief Field m_InitialEndColor, offset: 0xd0, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_InitialEndColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorGradientLineRendererAffordanceReceiver, ___m_LineRenderer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorGradientLineRendererAffordanceReceiver, ___m_LineColorProperty) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorGradientLineRendererAffordanceReceiver, ___m_DisableXRInteractorLineVisualColorControlIfPresent) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorGradientLineRendererAffordanceReceiver, ___m_InitialStartColor) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorGradientLineRendererAffordanceReceiver, ___m_InitialEndColor) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorGradientLineRendererAffordanceReceiver) == 0xe0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering

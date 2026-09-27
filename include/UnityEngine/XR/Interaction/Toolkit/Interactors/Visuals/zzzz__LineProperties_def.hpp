#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/LineProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LineProperties)
namespace UnityEngine {
class Gradient;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class LineProperties;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "LineProperties");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.LineProperties
class CORDL_TYPE LineProperties : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_adjustGradient, put=set_adjustGradient)) bool  adjustGradient;

 __declspec(property(get=get_adjustWidth, put=set_adjustWidth)) bool  adjustWidth;

 __declspec(property(get=get_customizeExpandLineDrawPercent, put=set_customizeExpandLineDrawPercent)) bool  customizeExpandLineDrawPercent;

 __declspec(property(get=get_endWidth, put=set_endWidth)) float_t  endWidth;

 __declspec(property(get=get_endWidthScaleDistanceFactor, put=set_endWidthScaleDistanceFactor)) float_t  endWidthScaleDistanceFactor;

 __declspec(property(get=get_expandModeLineDrawPercent, put=set_expandModeLineDrawPercent)) float_t  expandModeLineDrawPercent;

 __declspec(property(get=get_gradient, put=set_gradient)) ::UnityEngine::Gradient*  gradient;

 __declspec(property(get=get_lineBendRatio, put=set_lineBendRatio)) float_t  lineBendRatio;

/// @brief Field m_AdjustGradient, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AdjustGradient, put=__cordl_internal_set_m_AdjustGradient)) bool  m_AdjustGradient;

/// @brief Field m_AdjustWidth, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AdjustWidth, put=__cordl_internal_set_m_AdjustWidth)) bool  m_AdjustWidth;

/// @brief Field m_CustomizeExpandLineDrawPercent, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CustomizeExpandLineDrawPercent, put=__cordl_internal_set_m_CustomizeExpandLineDrawPercent)) bool  m_CustomizeExpandLineDrawPercent;

/// @brief Field m_EndWidth, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EndWidth, put=__cordl_internal_set_m_EndWidth)) float_t  m_EndWidth;

/// @brief Field m_EndWidthScaleDistanceFactor, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EndWidthScaleDistanceFactor, put=__cordl_internal_set_m_EndWidthScaleDistanceFactor)) float_t  m_EndWidthScaleDistanceFactor;

/// @brief Field m_ExpandModeLineDrawPercent, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ExpandModeLineDrawPercent, put=__cordl_internal_set_m_ExpandModeLineDrawPercent)) float_t  m_ExpandModeLineDrawPercent;

/// @brief Field m_Gradient, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Gradient, put=__cordl_internal_set_m_Gradient)) ::UnityEngine::Gradient*  m_Gradient;

/// @brief Field m_LineBendRatio, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LineBendRatio, put=__cordl_internal_set_m_LineBendRatio)) float_t  m_LineBendRatio;

/// @brief Field m_SmoothlyCurveLine, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SmoothlyCurveLine, put=__cordl_internal_set_m_SmoothlyCurveLine)) bool  m_SmoothlyCurveLine;

/// @brief Field m_StarWidth, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StarWidth, put=__cordl_internal_set_m_StarWidth)) float_t  m_StarWidth;

 __declspec(property(get=get_smoothlyCurveLine, put=set_smoothlyCurveLine)) bool  smoothlyCurveLine;

 __declspec(property(get=get_starWidth, put=set_starWidth)) float_t  starWidth;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* New_ctor() ;

constexpr bool const& __cordl_internal_get_m_AdjustGradient() const;

constexpr bool& __cordl_internal_get_m_AdjustGradient() ;

constexpr bool const& __cordl_internal_get_m_AdjustWidth() const;

constexpr bool& __cordl_internal_get_m_AdjustWidth() ;

constexpr bool const& __cordl_internal_get_m_CustomizeExpandLineDrawPercent() const;

constexpr bool& __cordl_internal_get_m_CustomizeExpandLineDrawPercent() ;

constexpr float_t const& __cordl_internal_get_m_EndWidth() const;

constexpr float_t& __cordl_internal_get_m_EndWidth() ;

constexpr float_t const& __cordl_internal_get_m_EndWidthScaleDistanceFactor() const;

constexpr float_t& __cordl_internal_get_m_EndWidthScaleDistanceFactor() ;

constexpr float_t const& __cordl_internal_get_m_ExpandModeLineDrawPercent() const;

constexpr float_t& __cordl_internal_get_m_ExpandModeLineDrawPercent() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_m_Gradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_m_Gradient() ;

constexpr float_t const& __cordl_internal_get_m_LineBendRatio() const;

constexpr float_t& __cordl_internal_get_m_LineBendRatio() ;

constexpr bool const& __cordl_internal_get_m_SmoothlyCurveLine() const;

constexpr bool& __cordl_internal_get_m_SmoothlyCurveLine() ;

constexpr float_t const& __cordl_internal_get_m_StarWidth() const;

constexpr float_t& __cordl_internal_get_m_StarWidth() ;

constexpr void __cordl_internal_set_m_AdjustGradient(bool  value) ;

constexpr void __cordl_internal_set_m_AdjustWidth(bool  value) ;

constexpr void __cordl_internal_set_m_CustomizeExpandLineDrawPercent(bool  value) ;

constexpr void __cordl_internal_set_m_EndWidth(float_t  value) ;

constexpr void __cordl_internal_set_m_EndWidthScaleDistanceFactor(float_t  value) ;

constexpr void __cordl_internal_set_m_ExpandModeLineDrawPercent(float_t  value) ;

constexpr void __cordl_internal_set_m_Gradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_m_LineBendRatio(float_t  value) ;

constexpr void __cordl_internal_set_m_SmoothlyCurveLine(bool  value) ;

constexpr void __cordl_internal_set_m_StarWidth(float_t  value) ;

/// @brief Method .ctor, addr 0xb483e28, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_adjustGradient, addr 0xb483de8, size 0x8, virtual false, abstract: false, final false
inline bool get_adjustGradient() ;

/// @brief Method get_adjustWidth, addr 0xb483da8, size 0x8, virtual false, abstract: false, final false
inline bool get_adjustWidth() ;

/// @brief Method get_customizeExpandLineDrawPercent, addr 0xb483e08, size 0x8, virtual false, abstract: false, final false
inline bool get_customizeExpandLineDrawPercent() ;

/// @brief Method get_endWidth, addr 0xb483dc8, size 0x8, virtual false, abstract: false, final false
inline float_t get_endWidth() ;

/// @brief Method get_endWidthScaleDistanceFactor, addr 0xb483dd8, size 0x8, virtual false, abstract: false, final false
inline float_t get_endWidthScaleDistanceFactor() ;

/// @brief Method get_expandModeLineDrawPercent, addr 0xb483e18, size 0x8, virtual false, abstract: false, final false
inline float_t get_expandModeLineDrawPercent() ;

/// @brief Method get_gradient, addr 0xb483df8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Gradient* get_gradient() ;

/// @brief Method get_lineBendRatio, addr 0xb483d98, size 0x8, virtual false, abstract: false, final false
inline float_t get_lineBendRatio() ;

/// @brief Method get_smoothlyCurveLine, addr 0xb483d88, size 0x8, virtual false, abstract: false, final false
inline bool get_smoothlyCurveLine() ;

/// @brief Method get_starWidth, addr 0xb483db8, size 0x8, virtual false, abstract: false, final false
inline float_t get_starWidth() ;

/// @brief Method set_adjustGradient, addr 0xb483df0, size 0x8, virtual false, abstract: false, final false
inline void set_adjustGradient(bool  value) ;

/// @brief Method set_adjustWidth, addr 0xb483db0, size 0x8, virtual false, abstract: false, final false
inline void set_adjustWidth(bool  value) ;

/// @brief Method set_customizeExpandLineDrawPercent, addr 0xb483e10, size 0x8, virtual false, abstract: false, final false
inline void set_customizeExpandLineDrawPercent(bool  value) ;

/// @brief Method set_endWidth, addr 0xb483dd0, size 0x8, virtual false, abstract: false, final false
inline void set_endWidth(float_t  value) ;

/// @brief Method set_endWidthScaleDistanceFactor, addr 0xb483de0, size 0x8, virtual false, abstract: false, final false
inline void set_endWidthScaleDistanceFactor(float_t  value) ;

/// @brief Method set_expandModeLineDrawPercent, addr 0xb483e20, size 0x8, virtual false, abstract: false, final false
inline void set_expandModeLineDrawPercent(float_t  value) ;

/// @brief Method set_gradient, addr 0xb483e00, size 0x8, virtual false, abstract: false, final false
inline void set_gradient(::UnityEngine::Gradient*  value) ;

/// @brief Method set_lineBendRatio, addr 0xb483da0, size 0x8, virtual false, abstract: false, final false
inline void set_lineBendRatio(float_t  value) ;

/// @brief Method set_smoothlyCurveLine, addr 0xb483d90, size 0x8, virtual false, abstract: false, final false
inline void set_smoothlyCurveLine(bool  value) ;

/// @brief Method set_starWidth, addr 0xb483dc0, size 0x8, virtual false, abstract: false, final false
inline void set_starWidth(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LineProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LineProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LineProperties(LineProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LineProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LineProperties(LineProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11474};

/// @brief Field k_DefaultLineWidth offset 0xffffffff size 0x4
static constexpr float_t  k_DefaultLineWidth{static_cast<float_t>(0.005f)};

/// [Header("Bend Settings")]
/// [SerializeField]
/// [Tooltip("Determine if the line should smoothly curve when this state property is active. If false, a straight line will be drawn.")]
/// @brief Field m_SmoothlyCurveLine, offset: 0x10, size: 0x1, def value: None
 bool  ___m_SmoothlyCurveLine;

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("Ratio to control the bend of the line by adjusting the mid-point. A value of 1 defaults to a straight line.")]
/// @brief Field m_LineBendRatio, offset: 0x14, size: 0x4, def value: None
 float_t  ___m_LineBendRatio;

/// [Header("Width Settings")]
/// [SerializeField]
/// [Tooltip("Determine if the line width should be customized from defaults when this state property is active.")]
/// @brief Field m_AdjustWidth, offset: 0x18, size: 0x1, def value: None
 bool  ___m_AdjustWidth;

/// [SerializeField]
/// [Tooltip("Width of the line at the start.")]
/// @brief Field m_StarWidth, offset: 0x1c, size: 0x4, def value: None
 float_t  ___m_StarWidth;

/// [SerializeField]
/// [Tooltip("Width of the line at the end.")]
/// @brief Field m_EndWidth, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_EndWidth;

/// [SerializeField]
/// [Range(0, 10)]
/// [Tooltip("If greater than 0, the curve end width will be scaled based on the the percentage of the line length to the max visual curve distance, multiplied by the scale factor.")]
/// @brief Field m_EndWidthScaleDistanceFactor, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_EndWidthScaleDistanceFactor;

/// [Header("Gradient Settings")]
/// [SerializeField]
/// [Tooltip("Determine if the line color should change when this state property is active.")]
/// @brief Field m_AdjustGradient, offset: 0x28, size: 0x1, def value: None
 bool  ___m_AdjustGradient;

/// [SerializeField]
/// [Tooltip("Color gradient to use when this state property is active.")]
/// @brief Field m_Gradient, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___m_Gradient;

/// [Header("Expand Settings")]
/// [SerializeField]
/// [Tooltip("Determine if the line mode expansion should be customized from defaults")]
/// @brief Field m_CustomizeExpandLineDrawPercent, offset: 0x38, size: 0x1, def value: None
 bool  ___m_CustomizeExpandLineDrawPercent;

/// [SerializeField]
/// [Tooltip("Percent of the line to draw when using the expand from hit point mode when this state property is active.")]
/// @brief Field m_ExpandModeLineDrawPercent, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m_ExpandModeLineDrawPercent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties, ___m_SmoothlyCurveLine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties, ___m_LineBendRatio) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties, ___m_AdjustWidth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties, ___m_StarWidth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties, ___m_EndWidth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties, ___m_EndWidthScaleDistanceFactor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties, ___m_AdjustGradient) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties, ___m_Gradient) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties, ___m_CustomizeExpandLineDrawPercent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties, ___m_ExpandModeLineDrawPercent) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals

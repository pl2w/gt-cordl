#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrabGlow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__HandGrabGlow_GlowState_def.hpp"
#include "Oculus/Interaction/zzzz__HandGrabGlow_GlowType_def.hpp"
#include "Oculus/Interaction/zzzz__HandGrabGlow_GrabState_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandGrabGlow)
namespace GlobalNamespace {
struct HandGrabGlow_GlowState;
}
namespace GlobalNamespace {
struct HandGrabGlow_GlowType;
}
namespace GlobalNamespace {
struct HandGrabGlow_GrabState;
}
namespace Oculus::Interaction::GrabAPI {
struct GrabbingRule;
}
namespace Oculus::Interaction::HandGrab {
class IHandGrabInteractor;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction {
class HandVisual;
}
namespace Oculus::Interaction {
class IInteractor;
}
namespace Oculus::Interaction {
class MaterialPropertyBlockEditor;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandGrabGlow;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrabGlow*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrabGlow*, "Oculus.Interaction", "HandGrabGlow");
// Dependencies Oculus.Interaction.HandGrabGlow::GlowState, Oculus.Interaction.HandGrabGlow::GlowType, Oculus.Interaction.HandGrabGlow::GrabState, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrabGlow
class CORDL_TYPE HandGrabGlow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GlowState = ::GlobalNamespace::HandGrabGlow_GlowState;

using GlowType = ::GlobalNamespace::HandGrabGlow_GlowType;

using GrabState = ::GlobalNamespace::HandGrabGlow_GrabState;

/// @brief Field HandGrabInteractor, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_HandGrabInteractor, put=__cordl_internal_set_HandGrabInteractor)) ::Oculus::Interaction::HandGrab::IHandGrabInteractor*  HandGrabInteractor;

/// @brief Field Interactor, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Interactor, put=__cordl_internal_set_Interactor)) ::Oculus::Interaction::IInteractor*  Interactor;

/// @brief Field _accumulatedSelectedTime, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__accumulatedSelectedTime, put=__cordl_internal_set__accumulatedSelectedTime)) float_t  _accumulatedSelectedTime;

/// @brief Field _colorChangeSpeed, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__colorChangeSpeed, put=__cordl_internal_set__colorChangeSpeed)) float_t  _colorChangeSpeed;

/// @brief Field _currentColor, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentColor, put=__cordl_internal_set__currentColor)) ::UnityEngine::Color  _currentColor;

/// @brief Field _fadeOut, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get__fadeOut, put=__cordl_internal_set__fadeOut)) bool  _fadeOut;

/// @brief Field _fingersGlowIDs, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingersGlowIDs, put=__cordl_internal_set__fingersGlowIDs)) ::ArrayW<int32_t>  _fingersGlowIDs;

/// @brief Field _generateGlowID, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__generateGlowID, put=__cordl_internal_set__generateGlowID)) int32_t  _generateGlowID;

/// @brief Field _glowColorGrabing, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__glowColorGrabing, put=__cordl_internal_set__glowColorGrabing)) ::UnityEngine::Color  _glowColorGrabing;

/// @brief Field _glowColorHover, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__glowColorHover, put=__cordl_internal_set__glowColorHover)) ::UnityEngine::Color  _glowColorHover;

/// @brief Field _glowColorID, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowColorID, put=__cordl_internal_set__glowColorID)) int32_t  _glowColorID;

/// @brief Field _glowFadeStartTime, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowFadeStartTime, put=__cordl_internal_set__glowFadeStartTime)) float_t  _glowFadeStartTime;

/// @brief Field _glowFadeValue, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowFadeValue, put=__cordl_internal_set__glowFadeValue)) float_t  _glowFadeValue;

/// @brief Field _glowParameterID, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowParameterID, put=__cordl_internal_set__glowParameterID)) int32_t  _glowParameterID;

/// @brief Field _glowStregth, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__glowStregth, put=__cordl_internal_set__glowStregth)) ::ArrayW<float_t>  _glowStregth;

/// @brief Field _glowStrengthChangeSpeed, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowStrengthChangeSpeed, put=__cordl_internal_set__glowStrengthChangeSpeed)) float_t  _glowStrengthChangeSpeed;

/// @brief Field _glowType, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowType, put=__cordl_internal_set__glowType)) ::GlobalNamespace::HandGrabGlow_GlowType  _glowType;

/// @brief Field _glowTypeID, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowTypeID, put=__cordl_internal_set__glowTypeID)) int32_t  _glowTypeID;

/// @brief Field _grabState, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__grabState, put=__cordl_internal_set__grabState)) ::GlobalNamespace::HandGrabGlow_GrabState  _grabState;

/// @brief Field _gradientLength, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__gradientLength, put=__cordl_internal_set__gradientLength)) float_t  _gradientLength;

/// @brief Field _handGrabInteractor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabInteractor, put=__cordl_internal_set__handGrabInteractor)) ::UnityW<::UnityEngine::Object>  _handGrabInteractor;

/// @brief Field _handRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__handRenderer, put=__cordl_internal_set__handRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  _handRenderer;

/// @brief Field _handVisual, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__handVisual, put=__cordl_internal_set__handVisual)) ::UnityW<::Oculus::Interaction::HandVisual>  _handVisual;

/// @brief Field _materialEditor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialEditor, put=__cordl_internal_set__materialEditor)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _materialEditor;

/// @brief Field _started, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _state, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::GlobalNamespace::HandGrabGlow_GlowState  _state;

/// @brief Method Awake, addr 0xa405174, size 0xc0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearGlow, addr 0xa4066cc, size 0xa0, virtual false, abstract: false, final false
inline void ClearGlow() ;

/// @brief Method FingerOptionalOrRequired, addr 0xa40566c, size 0x9c, virtual false, abstract: false, final false
inline bool FingerOptionalOrRequired(::Oculus::Interaction::GrabAPI::GrabbingRule  rules, ::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method InjectAllHandGrabGlow, addr 0xa4067d8, size 0x110, virtual false, abstract: false, final false
inline void InjectAllHandGrabGlow(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::UnityEngine::SkinnedMeshRenderer*  handRenderer, ::Oculus::Interaction::MaterialPropertyBlockEditor*  materialEditor, ::Oculus::Interaction::HandVisual*  handVisual, ::UnityEngine::Color  grabbingColor, ::UnityEngine::Color  hoverColor, float_t  colorChangeSpeed, float_t  fadeStartTime, float_t  glowStrengthChangeSpeed, bool  fadeOut, float_t  gradientLength, ::GlobalNamespace::HandGrabGlow_GlowType  glowType) ;

/// @brief Method InjectFadeOut, addr 0xa406a58, size 0x8, virtual false, abstract: false, final false
inline void InjectFadeOut(bool  fadeOut) ;

/// @brief Method InjectGlowColors, addr 0xa406a00, size 0x14, virtual false, abstract: false, final false
inline void InjectGlowColors(::UnityEngine::Color  grabbingColor, ::UnityEngine::Color  hoverColor) ;

/// @brief Method InjectGlowType, addr 0xa406a60, size 0x8, virtual false, abstract: false, final false
inline void InjectGlowType(::GlobalNamespace::HandGrabGlow_GlowType  glowType) ;

/// @brief Method InjectGradientLength, addr 0xa406a20, size 0x20, virtual false, abstract: false, final false
inline void InjectGradientLength(float_t  gradientLength) ;

/// @brief Method InjectHandGrabInteractor, addr 0xa4068e8, size 0x118, virtual false, abstract: false, final false
inline void InjectHandGrabInteractor(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor) ;

/// @brief Method InjectHandRenderer, addr 0xa406a40, size 0x8, virtual false, abstract: false, final false
inline void InjectHandRenderer(::UnityEngine::SkinnedMeshRenderer*  handRenderer) ;

/// @brief Method InjectHandVisual, addr 0xa406a50, size 0x8, virtual false, abstract: false, final false
inline void InjectHandVisual(::Oculus::Interaction::HandVisual*  handVisual) ;

/// @brief Method InjectMaterialPropertyBlockEditor, addr 0xa406a48, size 0x8, virtual false, abstract: false, final false
inline void InjectMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  materialEditor) ;

/// @brief Method InjectVisualChangeSpeed, addr 0xa406a14, size 0xc, virtual false, abstract: false, final false
inline void InjectVisualChangeSpeed(float_t  colorChangeSpeed, float_t  fadeStartTime, float_t  glowStrengthChangeSpeed) ;

static inline ::Oculus::Interaction::HandGrabGlow* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4053d4, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4052d4, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetMaterialPropertyBlockValues, addr 0xa4054d4, size 0x13c, virtual false, abstract: false, final false
inline void SetMaterialPropertyBlockValues() ;

/// @brief Method Start, addr 0xa405234, size 0xa0, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TargetSupportsPalm, addr 0xa405e2c, size 0x1f8, virtual false, abstract: false, final false
inline bool TargetSupportsPalm() ;

/// @brief Method TargetSupportsPinch, addr 0xa405c34, size 0x1f8, virtual false, abstract: false, final false
inline bool TargetSupportsPinch() ;

/// @brief Method UpdateFingerGlowStrength, addr 0xa405610, size 0x5c, virtual false, abstract: false, final false
inline void UpdateFingerGlowStrength(int32_t  fingerIndex, float_t  strength) ;

/// @brief Method UpdateGlowColorAndFade, addr 0xa4061a4, size 0x150, virtual false, abstract: false, final false
inline void UpdateGlowColorAndFade() ;

/// @brief Method UpdateGlowState, addr 0xa406024, size 0x180, virtual false, abstract: false, final false
inline void UpdateGlowState() ;

/// @brief Method UpdateGlowStrength, addr 0xa405708, size 0x52c, virtual false, abstract: false, final false
inline void UpdateGlowStrength() ;

/// @brief Method UpdateGrabState, addr 0xa4062f4, size 0x3d8, virtual false, abstract: false, final false
inline void UpdateGrabState() ;

/// @brief Method UpdateVisual, addr 0xa40676c, size 0x6c, virtual false, abstract: false, final false
inline void UpdateVisual() ;

constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor* const& __cordl_internal_get_HandGrabInteractor() const;

constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor*& __cordl_internal_get_HandGrabInteractor() ;

constexpr ::Oculus::Interaction::IInteractor* const& __cordl_internal_get_Interactor() const;

constexpr ::Oculus::Interaction::IInteractor*& __cordl_internal_get_Interactor() ;

constexpr float_t const& __cordl_internal_get__accumulatedSelectedTime() const;

constexpr float_t& __cordl_internal_get__accumulatedSelectedTime() ;

constexpr float_t const& __cordl_internal_get__colorChangeSpeed() const;

constexpr float_t& __cordl_internal_get__colorChangeSpeed() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__currentColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__currentColor() ;

constexpr bool const& __cordl_internal_get__fadeOut() const;

constexpr bool& __cordl_internal_get__fadeOut() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__fingersGlowIDs() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__fingersGlowIDs() ;

constexpr int32_t const& __cordl_internal_get__generateGlowID() const;

constexpr int32_t& __cordl_internal_get__generateGlowID() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__glowColorGrabing() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__glowColorGrabing() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__glowColorHover() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__glowColorHover() ;

constexpr int32_t const& __cordl_internal_get__glowColorID() const;

constexpr int32_t& __cordl_internal_get__glowColorID() ;

constexpr float_t const& __cordl_internal_get__glowFadeStartTime() const;

constexpr float_t& __cordl_internal_get__glowFadeStartTime() ;

constexpr float_t const& __cordl_internal_get__glowFadeValue() const;

constexpr float_t& __cordl_internal_get__glowFadeValue() ;

constexpr int32_t const& __cordl_internal_get__glowParameterID() const;

constexpr int32_t& __cordl_internal_get__glowParameterID() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__glowStregth() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__glowStregth() ;

constexpr float_t const& __cordl_internal_get__glowStrengthChangeSpeed() const;

constexpr float_t& __cordl_internal_get__glowStrengthChangeSpeed() ;

constexpr ::GlobalNamespace::HandGrabGlow_GlowType const& __cordl_internal_get__glowType() const;

constexpr ::GlobalNamespace::HandGrabGlow_GlowType& __cordl_internal_get__glowType() ;

constexpr int32_t const& __cordl_internal_get__glowTypeID() const;

constexpr int32_t& __cordl_internal_get__glowTypeID() ;

constexpr ::GlobalNamespace::HandGrabGlow_GrabState const& __cordl_internal_get__grabState() const;

constexpr ::GlobalNamespace::HandGrabGlow_GrabState& __cordl_internal_get__grabState() ;

constexpr float_t const& __cordl_internal_get__gradientLength() const;

constexpr float_t& __cordl_internal_get__gradientLength() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__handGrabInteractor() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__handGrabInteractor() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get__handRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get__handRenderer() ;

constexpr ::UnityW<::Oculus::Interaction::HandVisual> const& __cordl_internal_get__handVisual() const;

constexpr ::UnityW<::Oculus::Interaction::HandVisual>& __cordl_internal_get__handVisual() ;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& __cordl_internal_get__materialEditor() const;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& __cordl_internal_get__materialEditor() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::GlobalNamespace::HandGrabGlow_GlowState const& __cordl_internal_get__state() const;

constexpr ::GlobalNamespace::HandGrabGlow_GlowState& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set_HandGrabInteractor(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  value) ;

constexpr void __cordl_internal_set_Interactor(::Oculus::Interaction::IInteractor*  value) ;

constexpr void __cordl_internal_set__accumulatedSelectedTime(float_t  value) ;

constexpr void __cordl_internal_set__colorChangeSpeed(float_t  value) ;

constexpr void __cordl_internal_set__currentColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__fadeOut(bool  value) ;

constexpr void __cordl_internal_set__fingersGlowIDs(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__generateGlowID(int32_t  value) ;

constexpr void __cordl_internal_set__glowColorGrabing(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__glowColorHover(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__glowColorID(int32_t  value) ;

constexpr void __cordl_internal_set__glowFadeStartTime(float_t  value) ;

constexpr void __cordl_internal_set__glowFadeValue(float_t  value) ;

constexpr void __cordl_internal_set__glowParameterID(int32_t  value) ;

constexpr void __cordl_internal_set__glowStregth(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__glowStrengthChangeSpeed(float_t  value) ;

constexpr void __cordl_internal_set__glowType(::GlobalNamespace::HandGrabGlow_GlowType  value) ;

constexpr void __cordl_internal_set__glowTypeID(int32_t  value) ;

constexpr void __cordl_internal_set__grabState(::GlobalNamespace::HandGrabGlow_GrabState  value) ;

constexpr void __cordl_internal_set__gradientLength(float_t  value) ;

constexpr void __cordl_internal_set__handGrabInteractor(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set__handVisual(::UnityW<::Oculus::Interaction::HandVisual>  value) ;

constexpr void __cordl_internal_set__materialEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__state(::GlobalNamespace::HandGrabGlow_GlowState  value) ;

/// @brief Method .ctor, addr 0xa406a68, size 0x284, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabGlow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabGlow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabGlow(HandGrabGlow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabGlow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabGlow(HandGrabGlow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15715};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.HandGrab.IHandGrabInteractor), new[] { typeof(Oculus.Interaction.IInteractor) })]
/// @brief Field _handGrabInteractor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____handGrabInteractor;

/// [SerializeField]
/// @brief Field _handVisual, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandVisual>  ____handVisual;

/// [SerializeField]
/// @brief Field _handRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ____handRenderer;

/// [SerializeField]
/// @brief Field _materialEditor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____materialEditor;

/// [SerializeField]
/// @brief Field _glowColorGrabing, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____glowColorGrabing;

/// [SerializeField]
/// @brief Field _glowColorHover, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____glowColorHover;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _colorChangeSpeed, offset: 0x60, size: 0x4, def value: None
 float_t  ____colorChangeSpeed;

/// [SerializeField]
/// [Range(0, 0.25)]
/// @brief Field _glowFadeStartTime, offset: 0x64, size: 0x4, def value: None
 float_t  ____glowFadeStartTime;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _glowStrengthChangeSpeed, offset: 0x68, size: 0x4, def value: None
 float_t  ____glowStrengthChangeSpeed;

/// [SerializeField]
/// @brief Field _fadeOut, offset: 0x6c, size: 0x1, def value: None
 bool  ____fadeOut;

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("Recommended from 0.7 to 1.0")]
/// @brief Field _gradientLength, offset: 0x70, size: 0x4, def value: None
 float_t  ____gradientLength;

/// [SerializeField]
/// @brief Field _glowType, offset: 0x74, size: 0x4, def value: None
 ::GlobalNamespace::HandGrabGlow_GlowType  ____glowType;

/// @brief Field _state, offset: 0x78, size: 0x4, def value: None
 ::GlobalNamespace::HandGrabGlow_GlowState  ____state;

/// @brief Field _accumulatedSelectedTime, offset: 0x7c, size: 0x4, def value: None
 float_t  ____accumulatedSelectedTime;

/// @brief Field _grabState, offset: 0x80, size: 0x4, def value: None
 ::GlobalNamespace::HandGrabGlow_GrabState  ____grabState;

/// @brief Field _glowFadeValue, offset: 0x84, size: 0x4, def value: None
 float_t  ____glowFadeValue;

/// @brief Field _currentColor, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Color  ____currentColor;

/// @brief Field HandGrabInteractor, offset: 0x98, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::IHandGrabInteractor*  ___HandGrabInteractor;

/// @brief Field Interactor, offset: 0xa0, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractor*  ___Interactor;

/// @brief Field _glowStregth, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<float_t>  ____glowStregth;

/// @brief Field _generateGlowID, offset: 0xb0, size: 0x4, def value: None
 int32_t  ____generateGlowID;

/// @brief Field _glowColorID, offset: 0xb4, size: 0x4, def value: None
 int32_t  ____glowColorID;

/// @brief Field _glowTypeID, offset: 0xb8, size: 0x4, def value: None
 int32_t  ____glowTypeID;

/// @brief Field _glowParameterID, offset: 0xbc, size: 0x4, def value: None
 int32_t  ____glowParameterID;

/// @brief Field _fingersGlowIDs, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____fingersGlowIDs;

/// @brief Field _started, offset: 0xc8, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____handGrabInteractor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____handVisual) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____handRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____materialEditor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____glowColorGrabing) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____glowColorHover) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____colorChangeSpeed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____glowFadeStartTime) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____glowStrengthChangeSpeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____fadeOut) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____gradientLength) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____glowType) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____state) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____accumulatedSelectedTime) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____grabState) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____glowFadeValue) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____currentColor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ___HandGrabInteractor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ___Interactor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____glowStregth) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____generateGlowID) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____glowColorID) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____glowTypeID) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____glowParameterID) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____fingersGlowIDs) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrabGlow, ____started) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrabGlow) == 0xd0, "Size mismatch!");

} // namespace end def Oculus::Interaction

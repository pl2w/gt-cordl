#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/LocomotionTutorialTurnVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LocomotionTutorialTurnVisual)
namespace Oculus::Interaction {
class MaterialPropertyBlockEditor;
}
namespace Oculus::Interaction {
struct TubePoint;
}
namespace Oculus::Interaction {
class TubeRenderer;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class LocomotionTutorialTurnVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*, "Oculus.Interaction.Samples", "LocomotionTutorialTurnVisual");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.LocomotionTutorialTurnVisual
class CORDL_TYPE LocomotionTutorialTurnVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_DisabledColor, put=set_DisabledColor)) ::UnityEngine::Color  DisabledColor;

 __declspec(property(get=get_EnabledColor, put=set_EnabledColor)) ::UnityEngine::Color  EnabledColor;

 __declspec(property(get=get_HighligtedColor, put=set_HighligtedColor)) ::UnityEngine::Color  HighligtedColor;

 __declspec(property(get=get_VerticalOffset, put=set_VerticalOffset)) float_t  VerticalOffset;

/// @brief Field _colorShaderPropertyID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__colorShaderPropertyID, put=setStaticF__colorShaderPropertyID)) int32_t  _colorShaderPropertyID;

/// @brief Field _disabledColor, offset 0x74, size 0x10 
 __declspec(property(get=__cordl_internal_get__disabledColor, put=__cordl_internal_set__disabledColor)) ::UnityEngine::Color  _disabledColor;

/// @brief Field _enabledColor, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get__enabledColor, put=__cordl_internal_set__enabledColor)) ::UnityEngine::Color  _enabledColor;

/// @brief Field _highligtedColor, offset 0x94, size 0x10 
 __declspec(property(get=__cordl_internal_get__highligtedColor, put=__cordl_internal_set__highligtedColor)) ::UnityEngine::Color  _highligtedColor;

/// @brief Field _leftArrow, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftArrow, put=__cordl_internal_set__leftArrow)) ::UnityW<::UnityEngine::Renderer>  _leftArrow;

/// @brief Field _leftMaterialBlock, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftMaterialBlock, put=__cordl_internal_set__leftMaterialBlock)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _leftMaterialBlock;

/// @brief Field _leftTrail, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftTrail, put=__cordl_internal_set__leftTrail)) ::UnityW<::Oculus::Interaction::TubeRenderer>  _leftTrail;

/// @brief Field _margin, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__margin, put=__cordl_internal_set__margin)) float_t  _margin;

/// @brief Field _maxAngle, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAngle, put=__cordl_internal_set__maxAngle)) float_t  _maxAngle;

/// @brief Field _progress, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__progress, put=__cordl_internal_set__progress)) float_t  _progress;

/// @brief Field _radius, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__radius, put=__cordl_internal_set__radius)) float_t  _radius;

/// @brief Field _railGap, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__railGap, put=__cordl_internal_set__railGap)) float_t  _railGap;

/// @brief Field _rightArrow, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightArrow, put=__cordl_internal_set__rightArrow)) ::UnityW<::UnityEngine::Renderer>  _rightArrow;

/// @brief Field _rightMaterialBlock, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightMaterialBlock, put=__cordl_internal_set__rightMaterialBlock)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _rightMaterialBlock;

/// @brief Field _rightTrail, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightTrail, put=__cordl_internal_set__rightTrail)) ::UnityW<::Oculus::Interaction::TubeRenderer>  _rightTrail;

/// @brief Field _rotationCorrectionLeft, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__rotationCorrectionLeft, put=setStaticF__rotationCorrectionLeft)) ::UnityEngine::Quaternion  _rotationCorrectionLeft;

/// @brief Field _squeezeLength, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__squeezeLength, put=__cordl_internal_set__squeezeLength)) float_t  _squeezeLength;

/// @brief Field _started, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _trailLength, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__trailLength, put=__cordl_internal_set__trailLength)) float_t  _trailLength;

/// @brief Field _value, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) float_t  _value;

/// @brief Field _verticalOffset, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__verticalOffset, put=__cordl_internal_set__verticalOffset)) float_t  _verticalOffset;

/// @brief Method InitializeSegment, addr 0xa43927c, size 0x338, virtual false, abstract: false, final false
inline ::ArrayW<::Oculus::Interaction::TubePoint> InitializeSegment(::UnityEngine::Vector2  minMax) ;

/// @brief Method InitializeVisuals, addr 0xa438e8c, size 0x64, virtual false, abstract: false, final false
inline void InitializeVisuals() ;

static inline ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa438f50, size 0x60, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa438ef0, size 0x60, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RotateTrail, addr 0xa439770, size 0x88, virtual false, abstract: false, final false
inline void RotateTrail(float_t  angle, ::Oculus::Interaction::TubeRenderer*  trail) ;

/// @brief Method Start, addr 0xa438e58, size 0x34, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa438fb0, size 0x18, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateArrowPosition, addr 0xa4395b4, size 0x1bc, virtual false, abstract: false, final false
inline void UpdateArrowPosition(float_t  angle, ::UnityEngine::Transform*  arrow) ;

/// @brief Method UpdateArrows, addr 0xa438fc8, size 0x128, virtual false, abstract: false, final false
inline void UpdateArrows() ;

/// @brief Method UpdateColors, addr 0xa4390f0, size 0x18c, virtual false, abstract: false, final false
inline void UpdateColors() ;

/// @brief Method UpdateTrail, addr 0xa4397f8, size 0x54, virtual false, abstract: false, final false
inline void UpdateTrail(float_t  angle, ::Oculus::Interaction::TubeRenderer*  trail) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__disabledColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__disabledColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__enabledColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__enabledColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__highligtedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__highligtedColor() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__leftArrow() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__leftArrow() ;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& __cordl_internal_get__leftMaterialBlock() const;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& __cordl_internal_get__leftMaterialBlock() ;

constexpr ::UnityW<::Oculus::Interaction::TubeRenderer> const& __cordl_internal_get__leftTrail() const;

constexpr ::UnityW<::Oculus::Interaction::TubeRenderer>& __cordl_internal_get__leftTrail() ;

constexpr float_t const& __cordl_internal_get__margin() const;

constexpr float_t& __cordl_internal_get__margin() ;

constexpr float_t const& __cordl_internal_get__maxAngle() const;

constexpr float_t& __cordl_internal_get__maxAngle() ;

constexpr float_t const& __cordl_internal_get__progress() const;

constexpr float_t& __cordl_internal_get__progress() ;

constexpr float_t const& __cordl_internal_get__radius() const;

constexpr float_t& __cordl_internal_get__radius() ;

constexpr float_t const& __cordl_internal_get__railGap() const;

constexpr float_t& __cordl_internal_get__railGap() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__rightArrow() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__rightArrow() ;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& __cordl_internal_get__rightMaterialBlock() const;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& __cordl_internal_get__rightMaterialBlock() ;

constexpr ::UnityW<::Oculus::Interaction::TubeRenderer> const& __cordl_internal_get__rightTrail() const;

constexpr ::UnityW<::Oculus::Interaction::TubeRenderer>& __cordl_internal_get__rightTrail() ;

constexpr float_t const& __cordl_internal_get__squeezeLength() const;

constexpr float_t& __cordl_internal_get__squeezeLength() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr float_t const& __cordl_internal_get__trailLength() const;

constexpr float_t& __cordl_internal_get__trailLength() ;

constexpr float_t const& __cordl_internal_get__value() const;

constexpr float_t& __cordl_internal_get__value() ;

constexpr float_t const& __cordl_internal_get__verticalOffset() const;

constexpr float_t& __cordl_internal_get__verticalOffset() ;

constexpr void __cordl_internal_set__disabledColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__enabledColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__highligtedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__leftArrow(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__leftMaterialBlock(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__leftTrail(::UnityW<::Oculus::Interaction::TubeRenderer>  value) ;

constexpr void __cordl_internal_set__margin(float_t  value) ;

constexpr void __cordl_internal_set__maxAngle(float_t  value) ;

constexpr void __cordl_internal_set__progress(float_t  value) ;

constexpr void __cordl_internal_set__radius(float_t  value) ;

constexpr void __cordl_internal_set__railGap(float_t  value) ;

constexpr void __cordl_internal_set__rightArrow(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__rightMaterialBlock(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__rightTrail(::UnityW<::Oculus::Interaction::TubeRenderer>  value) ;

constexpr void __cordl_internal_set__squeezeLength(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__trailLength(float_t  value) ;

constexpr void __cordl_internal_set__value(float_t  value) ;

constexpr void __cordl_internal_set__verticalOffset(float_t  value) ;

/// @brief Method .ctor, addr 0xa43984c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__colorShaderPropertyID() ;

static inline ::UnityEngine::Quaternion getStaticF__rotationCorrectionLeft() ;

/// @brief Method get_DisabledColor, addr 0xa438e10, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_DisabledColor() ;

/// @brief Method get_EnabledColor, addr 0xa438e28, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_EnabledColor() ;

/// @brief Method get_HighligtedColor, addr 0xa438e40, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_HighligtedColor() ;

/// @brief Method get_VerticalOffset, addr 0xa438e00, size 0x8, virtual false, abstract: false, final false
inline float_t get_VerticalOffset() ;

static inline void setStaticF__colorShaderPropertyID(int32_t  value) ;

static inline void setStaticF__rotationCorrectionLeft(::UnityEngine::Quaternion  value) ;

/// @brief Method set_DisabledColor, addr 0xa438e1c, size 0xc, virtual false, abstract: false, final false
inline void set_DisabledColor(::UnityEngine::Color  value) ;

/// @brief Method set_EnabledColor, addr 0xa438e34, size 0xc, virtual false, abstract: false, final false
inline void set_EnabledColor(::UnityEngine::Color  value) ;

/// @brief Method set_HighligtedColor, addr 0xa438e4c, size 0xc, virtual false, abstract: false, final false
inline void set_HighligtedColor(::UnityEngine::Color  value) ;

/// @brief Method set_VerticalOffset, addr 0xa438e08, size 0x8, virtual false, abstract: false, final false
inline void set_VerticalOffset(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionTutorialTurnVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTutorialTurnVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionTutorialTurnVisual(LocomotionTutorialTurnVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTutorialTurnVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionTutorialTurnVisual(LocomotionTutorialTurnVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28307};

/// @brief Field _degreesPerSegment offset 0xffffffff size 0x4
static constexpr float_t  _degreesPerSegment{static_cast<float_t>(1.0f)};

/// [SerializeField]
/// [Range(-1, 1)]
/// @brief Field _value, offset: 0x20, size: 0x4, def value: None
 float_t  ____value;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _progress, offset: 0x24, size: 0x4, def value: None
 float_t  ____progress;

/// [Header("Visual renderers")]
/// [SerializeField]
/// @brief Field _leftArrow, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____leftArrow;

/// [SerializeField]
/// @brief Field _rightArrow, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____rightArrow;

/// [SerializeField]
/// @brief Field _leftTrail, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::TubeRenderer>  ____leftTrail;

/// [SerializeField]
/// @brief Field _rightTrail, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::TubeRenderer>  ____rightTrail;

/// [SerializeField]
/// @brief Field _leftMaterialBlock, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____leftMaterialBlock;

/// [SerializeField]
/// @brief Field _rightMaterialBlock, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____rightMaterialBlock;

/// [Header("Visual parameters")]
/// [SerializeField]
/// @brief Field _verticalOffset, offset: 0x58, size: 0x4, def value: None
 float_t  ____verticalOffset;

/// [SerializeField]
/// @brief Field _radius, offset: 0x5c, size: 0x4, def value: None
 float_t  ____radius;

/// [SerializeField]
/// @brief Field _margin, offset: 0x60, size: 0x4, def value: None
 float_t  ____margin;

/// [SerializeField]
/// @brief Field _trailLength, offset: 0x64, size: 0x4, def value: None
 float_t  ____trailLength;

/// [SerializeField]
/// @brief Field _maxAngle, offset: 0x68, size: 0x4, def value: None
 float_t  ____maxAngle;

/// [SerializeField]
/// @brief Field _railGap, offset: 0x6c, size: 0x4, def value: None
 float_t  ____railGap;

/// [SerializeField]
/// @brief Field _squeezeLength, offset: 0x70, size: 0x4, def value: None
 float_t  ____squeezeLength;

/// [SerializeField]
/// @brief Field _disabledColor, offset: 0x74, size: 0x10, def value: None
 ::UnityEngine::Color  ____disabledColor;

/// [SerializeField]
/// @brief Field _enabledColor, offset: 0x84, size: 0x10, def value: None
 ::UnityEngine::Color  ____enabledColor;

/// [SerializeField]
/// @brief Field _highligtedColor, offset: 0x94, size: 0x10, def value: None
 ::UnityEngine::Color  ____highligtedColor;

/// @brief Field _started, offset: 0xa4, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____value) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____progress) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____leftArrow) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____rightArrow) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____leftTrail) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____rightTrail) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____leftMaterialBlock) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____rightMaterialBlock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____verticalOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____radius) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____margin) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____trailLength) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____maxAngle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____railGap) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____squeezeLength) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____disabledColor) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____enabledColor) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____highligtedColor) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual, ____started) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual) == 0xa8, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples

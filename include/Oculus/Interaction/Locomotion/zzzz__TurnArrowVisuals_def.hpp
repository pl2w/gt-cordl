#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TurnArrowVisuals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TurnArrowVisuals)
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
namespace Oculus::Interaction::Locomotion {
class TurnArrowVisuals;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::TurnArrowVisuals*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::TurnArrowVisuals*, "Oculus.Interaction.Locomotion", "TurnArrowVisuals");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.TurnArrowVisuals
class CORDL_TYPE TurnArrowVisuals : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_DisabledColor, put=set_DisabledColor)) ::UnityEngine::Color  DisabledColor;

 __declspec(property(get=get_EnabledColor, put=set_EnabledColor)) ::UnityEngine::Color  EnabledColor;

 __declspec(property(get=get_FollowArrow, put=set_FollowArrow)) bool  FollowArrow;

 __declspec(property(get=get_HighLight, put=set_HighLight)) bool  HighLight;

 __declspec(property(get=get_HighligtedColor, put=set_HighligtedColor)) ::UnityEngine::Color  HighligtedColor;

 __declspec(property(get=get_Margin)) float_t  Margin;

 __declspec(property(get=get_MaxAngle)) float_t  MaxAngle;

 __declspec(property(get=get_Progress, put=set_Progress)) float_t  Progress;

 __declspec(property(get=get_Radius)) float_t  Radius;

 __declspec(property(get=get_RailGap)) float_t  RailGap;

 __declspec(property(get=get_SqueezeLength)) float_t  SqueezeLength;

 __declspec(property(get=get_TrailLength)) float_t  TrailLength;

 __declspec(property(get=get_Value, put=set_Value)) float_t  Value;

/// @brief Field _colorShaderPropertyID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__colorShaderPropertyID, put=setStaticF__colorShaderPropertyID)) int32_t  _colorShaderPropertyID;

/// @brief Field _disabledColor, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get__disabledColor, put=__cordl_internal_set__disabledColor)) ::UnityEngine::Color  _disabledColor;

/// @brief Field _enabledColor, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get__enabledColor, put=__cordl_internal_set__enabledColor)) ::UnityEngine::Color  _enabledColor;

/// @brief Field _followArrow, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get__followArrow, put=__cordl_internal_set__followArrow)) bool  _followArrow;

/// @brief Field _highLight, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__highLight, put=__cordl_internal_set__highLight)) bool  _highLight;

/// @brief Field _highligtedColor, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get__highligtedColor, put=__cordl_internal_set__highligtedColor)) ::UnityEngine::Color  _highligtedColor;

/// @brief Field _leftArrow, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftArrow, put=__cordl_internal_set__leftArrow)) ::UnityW<::UnityEngine::Renderer>  _leftArrow;

/// @brief Field _leftMaterialBlock, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftMaterialBlock, put=__cordl_internal_set__leftMaterialBlock)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _leftMaterialBlock;

/// @brief Field _leftRail, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftRail, put=__cordl_internal_set__leftRail)) ::UnityW<::Oculus::Interaction::TubeRenderer>  _leftRail;

/// @brief Field _leftTrail, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftTrail, put=__cordl_internal_set__leftTrail)) ::UnityW<::Oculus::Interaction::TubeRenderer>  _leftTrail;

/// @brief Field _margin, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__margin, put=__cordl_internal_set__margin)) float_t  _margin;

/// @brief Field _maxAngle, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAngle, put=__cordl_internal_set__maxAngle)) float_t  _maxAngle;

/// @brief Field _progress, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__progress, put=__cordl_internal_set__progress)) float_t  _progress;

/// @brief Field _radius, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__radius, put=__cordl_internal_set__radius)) float_t  _radius;

/// @brief Field _railGap, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__railGap, put=__cordl_internal_set__railGap)) float_t  _railGap;

/// @brief Field _rightArrow, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightArrow, put=__cordl_internal_set__rightArrow)) ::UnityW<::UnityEngine::Renderer>  _rightArrow;

/// @brief Field _rightMaterialBlock, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightMaterialBlock, put=__cordl_internal_set__rightMaterialBlock)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _rightMaterialBlock;

/// @brief Field _rightRail, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightRail, put=__cordl_internal_set__rightRail)) ::UnityW<::Oculus::Interaction::TubeRenderer>  _rightRail;

/// @brief Field _rightTrail, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightTrail, put=__cordl_internal_set__rightTrail)) ::UnityW<::Oculus::Interaction::TubeRenderer>  _rightTrail;

/// @brief Field _rotationCorrectionLeft, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__rotationCorrectionLeft, put=setStaticF__rotationCorrectionLeft)) ::UnityEngine::Quaternion  _rotationCorrectionLeft;

/// @brief Field _squeezeLength, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__squeezeLength, put=__cordl_internal_set__squeezeLength)) float_t  _squeezeLength;

/// @brief Field _started, offset 0xb5, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _trailLength, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__trailLength, put=__cordl_internal_set__trailLength)) float_t  _trailLength;

/// @brief Field _value, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) float_t  _value;

/// @brief Method DisableVisuals, addr 0xa4d497c, size 0x88, virtual false, abstract: false, final false
inline void DisableVisuals() ;

/// @brief Method InitializeSegment, addr 0xa4d51fc, size 0x338, virtual false, abstract: false, final false
inline ::ArrayW<::Oculus::Interaction::TubePoint> InitializeSegment(::UnityEngine::Vector2  minMax) ;

/// @brief Method InitializeVisuals, addr 0xa4d5140, size 0xac, virtual false, abstract: false, final false
inline void InitializeVisuals() ;

/// @brief Method InjectAllTurnArrowVisuals, addr 0xa4d5c2c, size 0x100, virtual false, abstract: false, final false
inline void InjectAllTurnArrowVisuals(::UnityEngine::Renderer*  leftArrow, ::UnityEngine::Renderer*  rightArrow, ::Oculus::Interaction::TubeRenderer*  leftRail, ::Oculus::Interaction::TubeRenderer*  rightRail, ::Oculus::Interaction::TubeRenderer*  leftTrail, ::Oculus::Interaction::TubeRenderer*  rightTrail, ::Oculus::Interaction::MaterialPropertyBlockEditor*  leftMaterialBlock, ::Oculus::Interaction::MaterialPropertyBlockEditor*  rightMaterialBlock, float_t  radius, float_t  margin, float_t  trailLength, float_t  maxAngle, float_t  railGap, float_t  squeezeLength) ;

/// @brief Method InjectLeftArrow, addr 0xa4d5d2c, size 0x8, virtual false, abstract: false, final false
inline void InjectLeftArrow(::UnityEngine::Renderer*  leftArrow) ;

/// @brief Method InjectLeftMaterialBlock, addr 0xa4d5d5c, size 0x8, virtual false, abstract: false, final false
inline void InjectLeftMaterialBlock(::Oculus::Interaction::MaterialPropertyBlockEditor*  leftMaterialBlock) ;

/// @brief Method InjectLeftRail, addr 0xa4d5d3c, size 0x8, virtual false, abstract: false, final false
inline void InjectLeftRail(::Oculus::Interaction::TubeRenderer*  leftRail) ;

/// @brief Method InjectLeftTrail, addr 0xa4d5d4c, size 0x8, virtual false, abstract: false, final false
inline void InjectLeftTrail(::Oculus::Interaction::TubeRenderer*  leftTrail) ;

/// @brief Method InjectMargin, addr 0xa4d5d74, size 0x8, virtual false, abstract: false, final false
inline void InjectMargin(float_t  margin) ;

/// @brief Method InjectMaxAngle, addr 0xa4d5d84, size 0x8, virtual false, abstract: false, final false
inline void InjectMaxAngle(float_t  maxAngle) ;

/// @brief Method InjectRadius, addr 0xa4d5d6c, size 0x8, virtual false, abstract: false, final false
inline void InjectRadius(float_t  radius) ;

/// @brief Method InjectRailGap, addr 0xa4d5d8c, size 0x8, virtual false, abstract: false, final false
inline void InjectRailGap(float_t  railGap) ;

/// @brief Method InjectRightArrow, addr 0xa4d5d34, size 0x8, virtual false, abstract: false, final false
inline void InjectRightArrow(::UnityEngine::Renderer*  rightArrow) ;

/// @brief Method InjectRightMaterialBlock, addr 0xa4d5d64, size 0x8, virtual false, abstract: false, final false
inline void InjectRightMaterialBlock(::Oculus::Interaction::MaterialPropertyBlockEditor*  rightMaterialBlock) ;

/// @brief Method InjectRightRail, addr 0xa4d5d44, size 0x8, virtual false, abstract: false, final false
inline void InjectRightRail(::Oculus::Interaction::TubeRenderer*  rightRail) ;

/// @brief Method InjectRightTrail, addr 0xa4d5d54, size 0x8, virtual false, abstract: false, final false
inline void InjectRightTrail(::Oculus::Interaction::TubeRenderer*  rightTrail) ;

/// @brief Method InjectSqueezeLength, addr 0xa4d5d94, size 0x8, virtual false, abstract: false, final false
inline void InjectSqueezeLength(float_t  squeezeLength) ;

/// @brief Method InjectTrailLength, addr 0xa4d5d7c, size 0x8, virtual false, abstract: false, final false
inline void InjectTrailLength(float_t  trailLength) ;

static inline ::Oculus::Interaction::Locomotion::TurnArrowVisuals* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4d51ec, size 0x10, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method RotateTrail, addr 0xa4d5ae8, size 0x88, virtual false, abstract: false, final false
inline void RotateTrail(float_t  angle, ::Oculus::Interaction::TubeRenderer*  trail) ;

/// @brief Method Start, addr 0xa4d5104, size 0x3c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateArrowPosition, addr 0xa4d592c, size 0x1bc, virtual false, abstract: false, final false
inline void UpdateArrowPosition(float_t  angle, ::UnityEngine::Transform*  arrow) ;

/// @brief Method UpdateArrows, addr 0xa4d5534, size 0x240, virtual false, abstract: false, final false
inline void UpdateArrows(float_t  value) ;

/// @brief Method UpdateColors, addr 0xa4d5774, size 0x1b8, virtual false, abstract: false, final false
inline void UpdateColors(bool  isSelection, float_t  value) ;

/// @brief Method UpdateRail, addr 0xa4d5bc4, size 0x68, virtual false, abstract: false, final false
inline void UpdateRail(float_t  angle, float_t  extra, ::Oculus::Interaction::TubeRenderer*  rail) ;

/// @brief Method UpdateTrail, addr 0xa4d5b70, size 0x54, virtual false, abstract: false, final false
inline void UpdateTrail(float_t  angle, ::Oculus::Interaction::TubeRenderer*  trail) ;

/// @brief Method UpdateVisual, addr 0xa4d2074, size 0x24, virtual false, abstract: false, final false
inline void UpdateVisual() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__disabledColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__disabledColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__enabledColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__enabledColor() ;

constexpr bool const& __cordl_internal_get__followArrow() const;

constexpr bool& __cordl_internal_get__followArrow() ;

constexpr bool const& __cordl_internal_get__highLight() const;

constexpr bool& __cordl_internal_get__highLight() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__highligtedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__highligtedColor() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__leftArrow() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__leftArrow() ;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& __cordl_internal_get__leftMaterialBlock() const;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& __cordl_internal_get__leftMaterialBlock() ;

constexpr ::UnityW<::Oculus::Interaction::TubeRenderer> const& __cordl_internal_get__leftRail() const;

constexpr ::UnityW<::Oculus::Interaction::TubeRenderer>& __cordl_internal_get__leftRail() ;

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

constexpr ::UnityW<::Oculus::Interaction::TubeRenderer> const& __cordl_internal_get__rightRail() const;

constexpr ::UnityW<::Oculus::Interaction::TubeRenderer>& __cordl_internal_get__rightRail() ;

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

constexpr void __cordl_internal_set__disabledColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__enabledColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__followArrow(bool  value) ;

constexpr void __cordl_internal_set__highLight(bool  value) ;

constexpr void __cordl_internal_set__highligtedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__leftArrow(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__leftMaterialBlock(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__leftRail(::UnityW<::Oculus::Interaction::TubeRenderer>  value) ;

constexpr void __cordl_internal_set__leftTrail(::UnityW<::Oculus::Interaction::TubeRenderer>  value) ;

constexpr void __cordl_internal_set__margin(float_t  value) ;

constexpr void __cordl_internal_set__maxAngle(float_t  value) ;

constexpr void __cordl_internal_set__progress(float_t  value) ;

constexpr void __cordl_internal_set__radius(float_t  value) ;

constexpr void __cordl_internal_set__railGap(float_t  value) ;

constexpr void __cordl_internal_set__rightArrow(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__rightMaterialBlock(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__rightRail(::UnityW<::Oculus::Interaction::TubeRenderer>  value) ;

constexpr void __cordl_internal_set__rightTrail(::UnityW<::Oculus::Interaction::TubeRenderer>  value) ;

constexpr void __cordl_internal_set__squeezeLength(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__trailLength(float_t  value) ;

constexpr void __cordl_internal_set__value(float_t  value) ;

/// @brief Method .ctor, addr 0xa4d5d9c, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__colorShaderPropertyID() ;

static inline ::UnityEngine::Quaternion getStaticF__rotationCorrectionLeft() ;

/// @brief Method get_DisabledColor, addr 0xa4d507c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_DisabledColor() ;

/// @brief Method get_EnabledColor, addr 0xa4d5094, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_EnabledColor() ;

/// @brief Method get_FollowArrow, addr 0xa4d50f4, size 0x8, virtual false, abstract: false, final false
inline bool get_FollowArrow() ;

/// @brief Method get_HighLight, addr 0xa4d50c4, size 0x8, virtual false, abstract: false, final false
inline bool get_HighLight() ;

/// @brief Method get_HighligtedColor, addr 0xa4d50ac, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_HighligtedColor() ;

/// @brief Method get_Margin, addr 0xa4d5054, size 0x8, virtual false, abstract: false, final false
inline float_t get_Margin() ;

/// @brief Method get_MaxAngle, addr 0xa4d5064, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxAngle() ;

/// @brief Method get_Progress, addr 0xa4d50e4, size 0x8, virtual false, abstract: false, final false
inline float_t get_Progress() ;

/// @brief Method get_Radius, addr 0xa4d504c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method get_RailGap, addr 0xa4d506c, size 0x8, virtual false, abstract: false, final false
inline float_t get_RailGap() ;

/// @brief Method get_SqueezeLength, addr 0xa4d5074, size 0x8, virtual false, abstract: false, final false
inline float_t get_SqueezeLength() ;

/// @brief Method get_TrailLength, addr 0xa4d505c, size 0x8, virtual false, abstract: false, final false
inline float_t get_TrailLength() ;

/// @brief Method get_Value, addr 0xa4d50d4, size 0x8, virtual false, abstract: false, final false
inline float_t get_Value() ;

static inline void setStaticF__colorShaderPropertyID(int32_t  value) ;

static inline void setStaticF__rotationCorrectionLeft(::UnityEngine::Quaternion  value) ;

/// @brief Method set_DisabledColor, addr 0xa4d5088, size 0xc, virtual false, abstract: false, final false
inline void set_DisabledColor(::UnityEngine::Color  value) ;

/// @brief Method set_EnabledColor, addr 0xa4d50a0, size 0xc, virtual false, abstract: false, final false
inline void set_EnabledColor(::UnityEngine::Color  value) ;

/// @brief Method set_FollowArrow, addr 0xa4d50fc, size 0x8, virtual false, abstract: false, final false
inline void set_FollowArrow(bool  value) ;

/// @brief Method set_HighLight, addr 0xa4d50cc, size 0x8, virtual false, abstract: false, final false
inline void set_HighLight(bool  value) ;

/// @brief Method set_HighligtedColor, addr 0xa4d50b8, size 0xc, virtual false, abstract: false, final false
inline void set_HighligtedColor(::UnityEngine::Color  value) ;

/// @brief Method set_Progress, addr 0xa4d50ec, size 0x8, virtual false, abstract: false, final false
inline void set_Progress(float_t  value) ;

/// @brief Method set_Value, addr 0xa4d50dc, size 0x8, virtual false, abstract: false, final false
inline void set_Value(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TurnArrowVisuals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TurnArrowVisuals", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TurnArrowVisuals(TurnArrowVisuals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TurnArrowVisuals", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TurnArrowVisuals(TurnArrowVisuals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16302};

/// @brief Field _degreesPerSegment offset 0xffffffff size 0x4
static constexpr float_t  _degreesPerSegment{static_cast<float_t>(1.0f)};

/// [Header("Visual renderers")]
/// [Tooltip("Renderer for the Left arrow cone")]
/// [SerializeField]
/// @brief Field _leftArrow, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____leftArrow;

/// [Tooltip("Renderer for the Right arrow cone")]
/// [SerializeField]
/// @brief Field _rightArrow, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____rightArrow;

/// [Tooltip("TubeRenderer that will draw the rail of the left arrow")]
/// [SerializeField]
/// @brief Field _leftRail, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::TubeRenderer>  ____leftRail;

/// [Tooltip("TubeRenderer that will draw the rail of the right arrow")]
/// [SerializeField]
/// @brief Field _rightRail, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::TubeRenderer>  ____rightRail;

/// [Tooltip("TubeRenderer that will draw the trail of the right arrow")]
/// [SerializeField]
/// @brief Field _leftTrail, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::TubeRenderer>  ____leftTrail;

/// [Tooltip("TubeRenderer that will draw the trail of the right arrow")]
/// [SerializeField]
/// @brief Field _rightTrail, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::TubeRenderer>  ____rightTrail;

/// [Tooltip("Material block for the left arrow items so they can be controller")]
/// [SerializeField]
/// @brief Field _leftMaterialBlock, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____leftMaterialBlock;

/// [Tooltip("Material block for the right arrow items so they can be controller")]
/// [SerializeField]
/// @brief Field _rightMaterialBlock, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____rightMaterialBlock;

/// [Header("Visual parameters")]
/// [Tooltip("Radius of the circle in which the arrows are circunscribed")]
/// [SerializeField]
/// @brief Field _radius, offset: 0x60, size: 0x4, def value: None
 float_t  ____radius;

/// [Tooltip("Gap, in degrees, left between the arrows")]
/// [SerializeField]
/// @brief Field _margin, offset: 0x64, size: 0x4, def value: None
 float_t  ____margin;

/// [Tooltip("Length, in degrees, of the trail of the arrows")]
/// [SerializeField]
/// @brief Field _trailLength, offset: 0x68, size: 0x4, def value: None
 float_t  ____trailLength;

/// [Tooltip("Max angle, in degrees, the arrows can follow when highlighted")]
/// [SerializeField]
/// @brief Field _maxAngle, offset: 0x6c, size: 0x4, def value: None
 float_t  ____maxAngle;

/// [Tooltip("Length of the transparent gap in the rail left by the arrow")]
/// [SerializeField]
/// @brief Field _railGap, offset: 0x70, size: 0x4, def value: None
 float_t  ____railGap;

/// [Tooltip("Length, in degrees, that the arrows can grow when highlighted")]
/// [SerializeField]
/// @brief Field _squeezeLength, offset: 0x74, size: 0x4, def value: None
 float_t  ____squeezeLength;

/// [Header("Visual controllers")]
/// [Tooltip("Color of the arrow when not active")]
/// [SerializeField]
/// @brief Field _disabledColor, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ____disabledColor;

/// [Tooltip("Color of the arrow when active")]
/// [SerializeField]
/// @brief Field _enabledColor, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Color  ____enabledColor;

/// [Tooltip("Color of the arrow when highlighted")]
/// [SerializeField]
/// @brief Field _highligtedColor, offset: 0x98, size: 0x10, def value: None
 ::UnityEngine::Color  ____highligtedColor;

/// [Tooltip("If true, the current active arrow will")]
/// [SerializeField]
/// @brief Field _highLight, offset: 0xa8, size: 0x1, def value: None
 bool  ____highLight;

/// [Tooltip("This value controls wich arrow is active, <0 for the left and >0 for the right")]
/// [SerializeField]
/// @brief Field _value, offset: 0xac, size: 0x4, def value: None
 float_t  ____value;

/// [Tooltip("Indicates how much the active arrow must grow")]
/// [SerializeField]
/// @brief Field _progress, offset: 0xb0, size: 0x4, def value: None
 float_t  ____progress;

/// [Tooltip("Indicates wheter the active arrow should follow the rail")]
/// [SerializeField]
/// @brief Field _followArrow, offset: 0xb4, size: 0x1, def value: None
 bool  ____followArrow;

/// @brief Field _started, offset: 0xb5, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____leftArrow) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____rightArrow) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____leftRail) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____rightRail) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____leftTrail) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____rightTrail) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____leftMaterialBlock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____rightMaterialBlock) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____radius) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____margin) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____trailLength) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____maxAngle) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____railGap) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____squeezeLength) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____disabledColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____enabledColor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____highligtedColor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____highLight) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____value) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____progress) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____followArrow) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnArrowVisuals, ____started) == 0xb5, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::TurnArrowVisuals) == 0xb8, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion

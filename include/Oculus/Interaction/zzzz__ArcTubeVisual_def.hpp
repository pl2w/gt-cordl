#pragma once
// IWYU pragma private; include "Oculus/Interaction/ArcTubeVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ArcTubeVisual)
namespace Oculus::Interaction {
struct TubePoint;
}
namespace Oculus::Interaction {
class TubeRenderer;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Oculus::Interaction {
class ArcTubeVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ArcTubeVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ArcTubeVisual*, "Oculus.Interaction", "ArcTubeVisual");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ArcTubeVisual
class CORDL_TYPE ArcTubeVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _maxAngle, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAngle, put=__cordl_internal_set__maxAngle)) float_t  _maxAngle;

/// @brief Field _minAngle, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__minAngle, put=__cordl_internal_set__minAngle)) float_t  _minAngle;

/// @brief Field _radius, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__radius, put=__cordl_internal_set__radius)) float_t  _radius;

/// @brief Field _rotationCorrectionLeft, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__rotationCorrectionLeft, put=setStaticF__rotationCorrectionLeft)) ::UnityEngine::Quaternion  _rotationCorrectionLeft;

/// @brief Field _started, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _tubeRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__tubeRenderer, put=__cordl_internal_set__tubeRenderer)) ::UnityW<::Oculus::Interaction::TubeRenderer>  _tubeRenderer;

/// @brief Method InitializeSegment, addr 0xa400f40, size 0x338, virtual false, abstract: false, final false
inline ::ArrayW<::Oculus::Interaction::TubePoint> InitializeSegment(::UnityEngine::Vector2  minMaxAngle) ;

/// @brief Method InitializeVisuals, addr 0xa400ee4, size 0x30, virtual false, abstract: false, final false
inline void InitializeVisuals() ;

/// @brief Method InjectAllArcTubeVisual, addr 0xa401354, size 0x40, virtual false, abstract: false, final false
inline void InjectAllArcTubeVisual(::Oculus::Interaction::TubeRenderer*  tubeRenderer, float_t  radius, float_t  minAngle, float_t  maxAngle) ;

/// @brief Method InjectMaxAngle, addr 0xa4013ac, size 0x8, virtual false, abstract: false, final false
inline void InjectMaxAngle(float_t  maxAngle) ;

/// @brief Method InjectMinAngle, addr 0xa4013a4, size 0x8, virtual false, abstract: false, final false
inline void InjectMinAngle(float_t  minAngle) ;

/// @brief Method InjectRadius, addr 0xa40139c, size 0x8, virtual false, abstract: false, final false
inline void InjectRadius(float_t  radius) ;

/// @brief Method InjectTubeRenderer, addr 0xa401394, size 0x8, virtual false, abstract: false, final false
inline void InjectTubeRenderer(::Oculus::Interaction::TubeRenderer*  tubeRenderer) ;

static inline ::Oculus::Interaction::ArcTubeVisual* New_ctor() ;

/// @brief Method Start, addr 0xa400e44, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get__maxAngle() const;

constexpr float_t& __cordl_internal_get__maxAngle() ;

constexpr float_t const& __cordl_internal_get__minAngle() const;

constexpr float_t& __cordl_internal_get__minAngle() ;

constexpr float_t const& __cordl_internal_get__radius() const;

constexpr float_t& __cordl_internal_get__radius() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::Oculus::Interaction::TubeRenderer> const& __cordl_internal_get__tubeRenderer() const;

constexpr ::UnityW<::Oculus::Interaction::TubeRenderer>& __cordl_internal_get__tubeRenderer() ;

constexpr void __cordl_internal_set__maxAngle(float_t  value) ;

constexpr void __cordl_internal_set__minAngle(float_t  value) ;

constexpr void __cordl_internal_set__radius(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__tubeRenderer(::UnityW<::Oculus::Interaction::TubeRenderer>  value) ;

/// @brief Method .ctor, addr 0xa4013b4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Quaternion getStaticF__rotationCorrectionLeft() ;

static inline void setStaticF__rotationCorrectionLeft(::UnityEngine::Quaternion  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArcTubeVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArcTubeVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArcTubeVisual(ArcTubeVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArcTubeVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArcTubeVisual(ArcTubeVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15699};

/// @brief Field _degreesPerSegment offset 0xffffffff size 0x4
static constexpr float_t  _degreesPerSegment{static_cast<float_t>(1.0f)};

/// [Header("Visual renderers")]
/// [SerializeField]
/// @brief Field _tubeRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::TubeRenderer>  ____tubeRenderer;

/// [Header("Visual parameters")]
/// [SerializeField]
/// @brief Field _radius, offset: 0x28, size: 0x4, def value: None
 float_t  ____radius;

/// [SerializeField]
/// @brief Field _minAngle, offset: 0x2c, size: 0x4, def value: None
 float_t  ____minAngle;

/// [SerializeField]
/// @brief Field _maxAngle, offset: 0x30, size: 0x4, def value: None
 float_t  ____maxAngle;

/// @brief Field _started, offset: 0x34, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ArcTubeVisual, ____tubeRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ArcTubeVisual, ____radius) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ArcTubeVisual, ____minAngle) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ArcTubeVisual, ____maxAngle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ArcTubeVisual, ____started) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ArcTubeVisual) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction

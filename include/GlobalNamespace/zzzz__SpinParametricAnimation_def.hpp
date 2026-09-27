#pragma once
// IWYU pragma private; include "GlobalNamespace/SpinParametricAnimation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpinParametricAnimation)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class SpinParametricAnimation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpinParametricAnimation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpinParametricAnimation*, "", "SpinParametricAnimation");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpinParametricAnimation
class CORDL_TYPE SpinParametricAnimation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field WorldSpaceRotation, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_WorldSpaceRotation, put=__cordl_internal_set_WorldSpaceRotation)) bool  WorldSpaceRotation;

/// @brief Field _animationProgress, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__animationProgress, put=__cordl_internal_set__animationProgress)) float_t  _animationProgress;

/// @brief Field _oldAngle, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__oldAngle, put=__cordl_internal_set__oldAngle)) float_t  _oldAngle;

/// @brief Field axis, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_axis, put=__cordl_internal_set_axis)) ::UnityEngine::Vector3  axis;

/// @brief Field revolutionsPerSecond, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_revolutionsPerSecond, put=__cordl_internal_set_revolutionsPerSecond)) float_t  revolutionsPerSecond;

/// @brief Field timeCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeCurve, put=__cordl_internal_set_timeCurve)) ::UnityEngine::AnimationCurve*  timeCurve;

/// @brief Method LateUpdate, addr 0x56adea8, size 0x1d0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::SpinParametricAnimation* New_ctor() ;

/// @brief Method OnEnable, addr 0x56addd4, size 0xd4, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr bool const& __cordl_internal_get_WorldSpaceRotation() const;

constexpr bool& __cordl_internal_get_WorldSpaceRotation() ;

constexpr float_t const& __cordl_internal_get__animationProgress() const;

constexpr float_t& __cordl_internal_get__animationProgress() ;

constexpr float_t const& __cordl_internal_get__oldAngle() const;

constexpr float_t& __cordl_internal_get__oldAngle() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_axis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_axis() ;

constexpr float_t const& __cordl_internal_get_revolutionsPerSecond() const;

constexpr float_t& __cordl_internal_get_revolutionsPerSecond() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_timeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_timeCurve() ;

constexpr void __cordl_internal_set_WorldSpaceRotation(bool  value) ;

constexpr void __cordl_internal_set__animationProgress(float_t  value) ;

constexpr void __cordl_internal_set__oldAngle(float_t  value) ;

constexpr void __cordl_internal_set_axis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_revolutionsPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_timeCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x56ae078, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpinParametricAnimation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpinParametricAnimation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpinParametricAnimation(SpinParametricAnimation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpinParametricAnimation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpinParametricAnimation(SpinParametricAnimation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{932};

/// [Tooltip("Axis to rotate around.")]
/// @brief Field axis, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___axis;

/// [Tooltip("Whether rotation is in World Space or Local Space")]
/// @brief Field WorldSpaceRotation, offset: 0x2c, size: 0x1, def value: None
 bool  ___WorldSpaceRotation;

/// [FormerlySerializedAs("speed")]
/// [Tooltip("Speed of rotation.")]
/// @brief Field revolutionsPerSecond, offset: 0x30, size: 0x4, def value: None
 float_t  ___revolutionsPerSecond;

/// [Tooltip("Affects the progress of the animation over time.")]
/// @brief Field timeCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___timeCurve;

/// @brief Field _animationProgress, offset: 0x40, size: 0x4, def value: None
 float_t  ____animationProgress;

/// @brief Field _oldAngle, offset: 0x44, size: 0x4, def value: None
 float_t  ____oldAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpinParametricAnimation, ___axis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinParametricAnimation, ___WorldSpaceRotation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinParametricAnimation, ___revolutionsPerSecond) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinParametricAnimation, ___timeCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinParametricAnimation, ____animationProgress) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinParametricAnimation, ____oldAngle) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpinParametricAnimation) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

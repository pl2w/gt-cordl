#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/SimpleTransformAnimatorCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__SimpleTransformAnimatorCosmetic_animModes_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__SimpleTransformAnimatorCosmetic_animatedPropertyChoices_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SimpleTransformAnimatorCosmetic)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
struct SimpleTransformAnimatorCosmetic_animModes;
}
namespace GlobalNamespace {
struct SimpleTransformAnimatorCosmetic_animatedPropertyChoices;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class SimpleTransformAnimatorCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::SimpleTransformAnimatorCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::SimpleTransformAnimatorCosmetic*, "GorillaTag.Cosmetics", "SimpleTransformAnimatorCosmetic");
// Dependencies GorillaTag.Cosmetics.SimpleTransformAnimatorCosmetic::animModes, GorillaTag.Cosmetics.SimpleTransformAnimatorCosmetic::animatedPropertyChoices, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.SimpleTransformAnimatorCosmetic
class CORDL_TYPE SimpleTransformAnimatorCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using animModes = ::GlobalNamespace::SimpleTransformAnimatorCosmetic_animModes;

using animatedPropertyChoices = ::GlobalNamespace::SimpleTransformAnimatorCosmetic_animatedPropertyChoices;

/// @brief Field InterpolationCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_InterpolationCurve, put=__cordl_internal_set_InterpolationCurve)) ::UnityEngine::AnimationCurve*  InterpolationCurve;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field animMode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_animMode, put=__cordl_internal_set_animMode)) ::GlobalNamespace::SimpleTransformAnimatorCosmetic_animModes  animMode;

/// @brief Field animatedProperties, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_animatedProperties, put=__cordl_internal_set_animatedProperties)) ::GlobalNamespace::SimpleTransformAnimatorCosmetic_animatedPropertyChoices  animatedProperties;

/// @brief Field animationDuration, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationDuration, put=__cordl_internal_set_animationDuration)) float_t  animationDuration;

/// @brief Field isAnimating, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAnimating, put=__cordl_internal_set_isAnimating)) bool  isAnimating;

/// @brief Field loopAnim, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_loopAnim, put=__cordl_internal_set_loopAnim)) bool  loopAnim;

/// @brief Field posBlendCurrent, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_posBlendCurrent, put=__cordl_internal_set_posBlendCurrent)) float_t  posBlendCurrent;

/// @brief Field posBlendTarget, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_posBlendTarget, put=__cordl_internal_set_posBlendTarget)) float_t  posBlendTarget;

/// @brief Field poseA, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_poseA, put=__cordl_internal_set_poseA)) ::UnityW<::UnityEngine::Transform>  poseA;

/// @brief Field poseB, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_poseB, put=__cordl_internal_set_poseB)) ::UnityW<::UnityEngine::Transform>  poseB;

/// @brief Field targetTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetTransform, put=__cordl_internal_set_targetTransform)) ::UnityW<::UnityEngine::Transform>  targetTransform;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method CheckAnimationNeeded, addr 0x5da7260, size 0x164, virtual false, abstract: false, final false
inline void CheckAnimationNeeded() ;

/// @brief Method DebugA, addr 0x5da6fe4, size 0xc, virtual false, abstract: false, final false
inline void DebugA() ;

/// @brief Method DebugB, addr 0x5da6ffc, size 0x10, virtual false, abstract: false, final false
inline void DebugB() ;

/// @brief Method DebugPlayAnimationOneShot, addr 0x5da7448, size 0x18, virtual false, abstract: false, final false
inline void DebugPlayAnimationOneShot() ;

/// @brief Method DebugToggle, addr 0x5da6f9c, size 0x24, virtual false, abstract: false, final false
inline void DebugToggle() ;

static inline ::GorillaTag::Cosmetics::SimpleTransformAnimatorCosmetic* New_ctor() ;

/// @brief Method OnDisable, addr 0x5da71e4, size 0x7c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5da702c, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Tick, addr 0x5da73c4, size 0x6c, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method Toggle, addr 0x5da6fc0, size 0x24, virtual false, abstract: false, final false
inline void Toggle() ;

/// @brief Method TogglePoseA, addr 0x5da6ff0, size 0xc, virtual false, abstract: false, final false
inline void TogglePoseA() ;

/// @brief Method TogglePoseB, addr 0x5da700c, size 0x10, virtual false, abstract: false, final false
inline void TogglePoseB() ;

/// @brief Method UpdateTransform, addr 0x5da7038, size 0x1ac, virtual false, abstract: false, final false
inline void UpdateTransform() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_InterpolationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_InterpolationCurve() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::GlobalNamespace::SimpleTransformAnimatorCosmetic_animModes const& __cordl_internal_get_animMode() const;

constexpr ::GlobalNamespace::SimpleTransformAnimatorCosmetic_animModes& __cordl_internal_get_animMode() ;

constexpr ::GlobalNamespace::SimpleTransformAnimatorCosmetic_animatedPropertyChoices const& __cordl_internal_get_animatedProperties() const;

constexpr ::GlobalNamespace::SimpleTransformAnimatorCosmetic_animatedPropertyChoices& __cordl_internal_get_animatedProperties() ;

constexpr float_t const& __cordl_internal_get_animationDuration() const;

constexpr float_t& __cordl_internal_get_animationDuration() ;

constexpr bool const& __cordl_internal_get_isAnimating() const;

constexpr bool& __cordl_internal_get_isAnimating() ;

constexpr bool const& __cordl_internal_get_loopAnim() const;

constexpr bool& __cordl_internal_get_loopAnim() ;

constexpr float_t const& __cordl_internal_get_posBlendCurrent() const;

constexpr float_t& __cordl_internal_get_posBlendCurrent() ;

constexpr float_t const& __cordl_internal_get_posBlendTarget() const;

constexpr float_t& __cordl_internal_get_posBlendTarget() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_poseA() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_poseA() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_poseB() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_poseB() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetTransform() ;

constexpr void __cordl_internal_set_InterpolationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_animMode(::GlobalNamespace::SimpleTransformAnimatorCosmetic_animModes  value) ;

constexpr void __cordl_internal_set_animatedProperties(::GlobalNamespace::SimpleTransformAnimatorCosmetic_animatedPropertyChoices  value) ;

constexpr void __cordl_internal_set_animationDuration(float_t  value) ;

constexpr void __cordl_internal_set_isAnimating(bool  value) ;

constexpr void __cordl_internal_set_loopAnim(bool  value) ;

constexpr void __cordl_internal_set_posBlendCurrent(float_t  value) ;

constexpr void __cordl_internal_set_posBlendTarget(float_t  value) ;

constexpr void __cordl_internal_set_poseA(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_poseB(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targetTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5da7460, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5da701c, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// @brief Method playAnimationOneshot, addr 0x5da7430, size 0x18, virtual false, abstract: false, final false
inline void playAnimationOneshot() ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5da7024, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleTransformAnimatorCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleTransformAnimatorCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleTransformAnimatorCosmetic(SimpleTransformAnimatorCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTransformAnimatorCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleTransformAnimatorCosmetic(SimpleTransformAnimatorCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4992};

/// @brief Field animMode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SimpleTransformAnimatorCosmetic_animModes  ___animMode;

/// [Tooltip("Shapes how the transform will interpolate over the course of the animation.")]
/// @brief Field InterpolationCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___InterpolationCurve;

/// [SerializeField]
/// [Tooltip("The object that will animate (blend) between the poses.")]
/// @brief Field targetTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetTransform;

/// [SerializeField]
/// [Tooltip("Start pose (blend value 0).")]
/// @brief Field poseA, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___poseA;

/// [SerializeField]
/// [Tooltip("End pose (blend value 1).")]
/// @brief Field poseB, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___poseB;

/// [FormerlySerializedAs("transitionTime")]
/// [SerializeField]
/// [Tooltip("Total time (in seconds) to animate fully between poses.")]
/// @brief Field animationDuration, offset: 0x48, size: 0x4, def value: None
 float_t  ___animationDuration;

/// [SerializeField]
/// [Tooltip("Controls what aspect of the transform is affected by the blend.")]
/// @brief Field animatedProperties, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::SimpleTransformAnimatorCosmetic_animatedPropertyChoices  ___animatedProperties;

/// @brief Field loopAnim, offset: 0x50, size: 0x1, def value: None
 bool  ___loopAnim;

/// @brief Field posBlendCurrent, offset: 0x54, size: 0x4, def value: None
 float_t  ___posBlendCurrent;

/// @brief Field posBlendTarget, offset: 0x58, size: 0x4, def value: None
 float_t  ___posBlendTarget;

/// @brief Field isAnimating, offset: 0x5c, size: 0x1, def value: None
 bool  ___isAnimating;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x5d, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::SimpleTransformAnimatorCosmetic, ___animMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SimpleTransformAnimatorCosmetic, ___InterpolationCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SimpleTransformAnimatorCosmetic, ___targetTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SimpleTransformAnimatorCosmetic, ___poseA) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SimpleTransformAnimatorCosmetic, ___poseB) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SimpleTransformAnimatorCosmetic, ___animationDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SimpleTransformAnimatorCosmetic, ___animatedProperties) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SimpleTransformAnimatorCosmetic, ___loopAnim) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SimpleTransformAnimatorCosmetic, ___posBlendCurrent) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SimpleTransformAnimatorCosmetic, ___posBlendTarget) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SimpleTransformAnimatorCosmetic, ___isAnimating) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SimpleTransformAnimatorCosmetic, ____TickRunning_k__BackingField) == 0x5d, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::SimpleTransformAnimatorCosmetic) == 0x60, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics

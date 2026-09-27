#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseManager_EnvelopeDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineImpulseManager_EnvelopeDefinition)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineImpulseManager_EnvelopeDefinition;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition, "Unity.Cinemachine", "CinemachineImpulseManager/EnvelopeDefinition");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
struct CORDL_TYPE CinemachineImpulseManager_EnvelopeDefinition {
public:
// Declarations
 __declspec(property(get=get_Duration)) float_t  Duration;

/// @brief Method ChangeStopTime, addr 0xaee53b0, size 0x34, virtual false, abstract: false, final false
inline void ChangeStopTime(float_t  offset, bool  forceNoDecay) ;

/// @brief Method Clear, addr 0xaee53e4, size 0x34, virtual false, abstract: false, final false
inline void Clear() ;

/// [IsReadOnly]
/// @brief Method GetValueAt, addr 0xaee528c, size 0x124, virtual false, abstract: false, final false
inline float_t GetValueAt(float_t  offset) ;

/// @brief Method Validate, addr 0xaee5418, size 0x28, virtual false, abstract: false, final false
inline void Validate() ;

/// @brief Method get_Default, addr 0xaee5240, size 0x28, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition get_Default() ;

/// [IsReadOnly]
/// @brief Method get_Duration, addr 0xaee5268, size 0x24, virtual false, abstract: false, final false
inline float_t get_Duration() ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineImpulseManager_EnvelopeDefinition() ;

// Ctor Parameters [CppParam { name: "AttackShape", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None, comment: None }, CppParam { name: "DecayShape", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None, comment: None }, CppParam { name: "AttackTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SustainTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DecayTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ScaleWithImpact", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "HoldForever", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineImpulseManager_EnvelopeDefinition(::UnityEngine::AnimationCurve*  AttackShape, ::UnityEngine::AnimationCurve*  DecayShape, float_t  AttackTime, float_t  SustainTime, float_t  DecayTime, bool  ScaleWithImpact, bool  HoldForever) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22479};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [Tooltip("Normalized curve defining the shape of the start of the envelope.  If blank a default curve will be used")]
/// [FormerlySerializedAs("m_AttackShape")]
/// @brief Field AttackShape, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  AttackShape;

/// [Tooltip("Normalized curve defining the shape of the end of the envelope.  If blank a default curve will be used")]
/// [FormerlySerializedAs("m_DecayShape")]
/// @brief Field DecayShape, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  DecayShape;

/// [Tooltip("Duration in seconds of the attack.  Attack curve will be scaled to fit.  Must be >= 0.")]
/// [FormerlySerializedAs("m_AttackTime")]
/// @brief Field AttackTime, offset: 0x10, size: 0x4, def value: None
 float_t  AttackTime;

/// [Tooltip("Duration in seconds of the central fully-scaled part of the envelope.  Must be >= 0.")]
/// [FormerlySerializedAs("m_SustainTime")]
/// @brief Field SustainTime, offset: 0x14, size: 0x4, def value: None
 float_t  SustainTime;

/// [Tooltip("Duration in seconds of the decay.  Decay curve will be scaled to fit.  Must be >= 0.")]
/// [FormerlySerializedAs("m_DecayTime")]
/// @brief Field DecayTime, offset: 0x18, size: 0x4, def value: None
 float_t  DecayTime;

/// [Tooltip("If checked, signal amplitude scaling will also be applied to the time envelope of the signal.  Stronger signals will last longer.")]
/// [FormerlySerializedAs("m_ScaleWithImpact")]
/// @brief Field ScaleWithImpact, offset: 0x1c, size: 0x1, def value: None
 bool  ScaleWithImpact;

/// [Tooltip("If true, then duration is infinite.")]
/// [FormerlySerializedAs("m_HoldForever")]
/// @brief Field HoldForever, offset: 0x1d, size: 0x1, def value: None
 bool  HoldForever;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition, AttackShape) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition, DecayShape) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition, AttackTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition, SustainTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition, DecayTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition, ScaleWithImpact) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition, HoldForever) == 0x1d, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

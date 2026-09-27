#pragma once
// IWYU pragma private; include "GlobalNamespace/ProximityEffectScoreCurvesSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ProximityEffectScoreCurvesSO)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class ProximityEffectScoreCurvesSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ProximityEffectScoreCurvesSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProximityEffectScoreCurvesSO*, "", "ProximityEffectScoreCurvesSO");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProximityEffectScoreCurvesSO
class CORDL_TYPE ProximityEffectScoreCurvesSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field alignmentModifierCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_alignmentModifierCurve, put=__cordl_internal_set_alignmentModifierCurve)) ::UnityEngine::AnimationCurve*  alignmentModifierCurve;

/// @brief Field distanceModifierCurve, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_distanceModifierCurve, put=__cordl_internal_set_distanceModifierCurve)) ::UnityEngine::AnimationCurve*  distanceModifierCurve;

/// @brief Field parallelModifierCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_parallelModifierCurve, put=__cordl_internal_set_parallelModifierCurve)) ::UnityEngine::AnimationCurve*  parallelModifierCurve;

static inline ::GlobalNamespace::ProximityEffectScoreCurvesSO* New_ctor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_alignmentModifierCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_alignmentModifierCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_distanceModifierCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_distanceModifierCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_parallelModifierCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_parallelModifierCurve() ;

constexpr void __cordl_internal_set_alignmentModifierCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_distanceModifierCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_parallelModifierCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x565a56c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProximityEffectScoreCurvesSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProximityEffectScoreCurvesSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProximityEffectScoreCurvesSO(ProximityEffectScoreCurvesSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProximityEffectScoreCurvesSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProximityEffectScoreCurvesSO(ProximityEffectScoreCurvesSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{760};

/// [Tooltip("How far apart the transforms are. A distance. Contributes \'red\' to the debug line. Y value should be in the range 0-1.")]
/// @brief Field distanceModifierCurve, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___distanceModifierCurve;

/// [Tooltip("How closely the transforms\' Z vectors are pointed towards each other. A dot product. Contributes \'green\' to the debug line. Y value should be in the range 0-1.")]
/// @brief Field alignmentModifierCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___alignmentModifierCurve;

/// [Tooltip("Whether each transform is in front of the other transform. The average of two dot products. Contributes \'blue\' to the debug line. Y value should be in the range 0-1.")]
/// @brief Field parallelModifierCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___parallelModifierCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProximityEffectScoreCurvesSO, ___distanceModifierCurve) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffectScoreCurvesSO, ___alignmentModifierCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffectScoreCurvesSO, ___parallelModifierCurve) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProximityEffectScoreCurvesSO) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

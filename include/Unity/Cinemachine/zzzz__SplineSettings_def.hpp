#pragma once
// IWYU pragma private; include "Unity/Cinemachine/SplineSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Splines/zzzz__PathIndexUnit_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineSettings)
namespace Unity::Cinemachine {
class CachedScaledSpline;
}
namespace UnityEngine::Splines {
struct PathIndexUnit;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct SplineSettings;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::SplineSettings);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::SplineSettings, "Unity.Cinemachine", "SplineSettings");
// Dependencies UnityEngine.Splines.PathIndexUnit
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.SplineSettings
struct CORDL_TYPE SplineSettings {
public:
// Declarations
/// @brief Method ChangeUnitPreservePosition, addr 0xaebe0c0, size 0x84, virtual false, abstract: false, final false
inline void ChangeUnitPreservePosition(::UnityEngine::Splines::PathIndexUnit  newUnits) ;

/// @brief Method GetCachedSpline, addr 0xaebe144, size 0x140, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CachedScaledSpline* GetCachedSpline() ;

/// @brief Method InvalidateCache, addr 0xaebe284, size 0x44, virtual false, abstract: false, final false
inline void InvalidateCache() ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineSettings() ;

// Ctor Parameters [CppParam { name: "Spline", ty: "::UnityW<::UnityEngine::Splines::SplineContainer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Position", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Units", ty: "::UnityEngine::Splines::PathIndexUnit", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CachedSpline", ty: "::Unity::Cinemachine::CachedScaledSpline*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CachedFrame", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SplineSettings(::UnityW<::UnityEngine::Splines::SplineContainer>  Spline, float_t  Position, ::UnityEngine::Splines::PathIndexUnit  Units, ::Unity::Cinemachine::CachedScaledSpline*  m_CachedSpline, int32_t  m_CachedFrame) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22367};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [Tooltip("The Spline container to which the position will apply.")]
/// @brief Field Spline, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  Spline;

/// [NoSaveDuringPlay]
/// [Tooltip("The position along the spline.  The actual value corresponding to a given point on the spline will depend on the unity type.")]
/// @brief Field Position, offset: 0x8, size: 0x4, def value: None
 float_t  Position;

/// [Tooltip("How to interpret the Spline Position:\n- <b>Distance</b>: Values range from 0 (start of Spline) to Length of the Spline (end of Spline).\n- <b>Normalized</b>: Values range from 0 (start of Spline) to 1 (end of Spline).\n- <b>Knot</b>: Values are defined by knot indices and a fractional value representing the normalized interpolation between the specific knot index and the next knot.\n")]
/// @brief Field Units, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::Splines::PathIndexUnit  Units;

/// @brief Field m_CachedSpline, offset: 0x10, size: 0x8, def value: None
 ::Unity::Cinemachine::CachedScaledSpline*  m_CachedSpline;

/// @brief Field m_CachedFrame, offset: 0x18, size: 0x4, def value: None
 int32_t  m_CachedFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::SplineSettings, Spline) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::SplineSettings, Position) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::SplineSettings, Units) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::SplineSettings, m_CachedSpline) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::SplineSettings, m_CachedFrame) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::SplineSettings) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine

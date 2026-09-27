#pragma once
// IWYU pragma private; include "Drawing/Examples/GizmoCharacterExample.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__MonoBehaviourGizmos_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GizmoCharacterExample)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Drawing::Examples {
class GizmoCharacterExample;
}
// Write type traits
MARK_REF_T(::Drawing::Examples::GizmoCharacterExample*);
DEFINE_IL2CPP_CLASS(::Drawing::Examples::GizmoCharacterExample*, "Drawing.Examples", "GizmoCharacterExample");
// Dependencies Drawing.MonoBehaviourGizmos, UnityEngine.Color, UnityEngine.Vector3
namespace Drawing::Examples {
// Is value type: false
// CS Name: Drawing.Examples.GizmoCharacterExample
class CORDL_TYPE GizmoCharacterExample : public ::Drawing::MonoBehaviourGizmos {
public:
// Declarations
/// @brief Field futurePathPlotSteps, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_futurePathPlotSteps, put=__cordl_internal_set_futurePathPlotSteps)) int32_t  futurePathPlotSteps;

/// @brief Field gizmoColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_gizmoColor, put=__cordl_internal_set_gizmoColor)) ::UnityEngine::Color  gizmoColor;

/// @brief Field gizmoColor2, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_gizmoColor2, put=__cordl_internal_set_gizmoColor2)) ::UnityEngine::Color  gizmoColor2;

/// @brief Field movementNoiseScale, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_movementNoiseScale, put=__cordl_internal_set_movementNoiseScale)) float_t  movementNoiseScale;

/// @brief Field plotEveryNSteps, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_plotEveryNSteps, put=__cordl_internal_set_plotEveryNSteps)) int32_t  plotEveryNSteps;

/// @brief Field plotStartStep, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_plotStartStep, put=__cordl_internal_set_plotStartStep)) int32_t  plotStartStep;

/// @brief Field seed, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_seed, put=__cordl_internal_set_seed)) float_t  seed;

/// @brief Field startPointAttractionStrength, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_startPointAttractionStrength, put=__cordl_internal_set_startPointAttractionStrength)) float_t  startPointAttractionStrength;

/// @brief Field startPosition, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_startPosition, put=__cordl_internal_set_startPosition)) ::UnityEngine::Vector3  startPosition;

/// @brief Method DrawGizmos, addr 0x55e00c8, size 0x374, virtual true, abstract: false, final false
inline void DrawGizmos() ;

/// @brief Method GetSmoothRandomVelocity, addr 0x55dfc7c, size 0xb8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetSmoothRandomVelocity(float_t  time, ::UnityEngine::Vector3  position) ;

static inline ::Drawing::Examples::GizmoCharacterExample* New_ctor() ;

/// @brief Method PlotFuturePath, addr 0x55dfd34, size 0x220, virtual false, abstract: false, final false
inline void PlotFuturePath(float_t  time, ::UnityEngine::Vector3  position) ;

/// @brief Method Start, addr 0x55dfc30, size 0x4c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x55dff54, size 0x174, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_futurePathPlotSteps() const;

constexpr int32_t& __cordl_internal_get_futurePathPlotSteps() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_gizmoColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_gizmoColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_gizmoColor2() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_gizmoColor2() ;

constexpr float_t const& __cordl_internal_get_movementNoiseScale() const;

constexpr float_t& __cordl_internal_get_movementNoiseScale() ;

constexpr int32_t const& __cordl_internal_get_plotEveryNSteps() const;

constexpr int32_t& __cordl_internal_get_plotEveryNSteps() ;

constexpr int32_t const& __cordl_internal_get_plotStartStep() const;

constexpr int32_t& __cordl_internal_get_plotStartStep() ;

constexpr float_t const& __cordl_internal_get_seed() const;

constexpr float_t& __cordl_internal_get_seed() ;

constexpr float_t const& __cordl_internal_get_startPointAttractionStrength() const;

constexpr float_t& __cordl_internal_get_startPointAttractionStrength() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startPosition() ;

constexpr void __cordl_internal_set_futurePathPlotSteps(int32_t  value) ;

constexpr void __cordl_internal_set_gizmoColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_gizmoColor2(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_movementNoiseScale(float_t  value) ;

constexpr void __cordl_internal_set_plotEveryNSteps(int32_t  value) ;

constexpr void __cordl_internal_set_plotStartStep(int32_t  value) ;

constexpr void __cordl_internal_set_seed(float_t  value) ;

constexpr void __cordl_internal_set_startPointAttractionStrength(float_t  value) ;

constexpr void __cordl_internal_set_startPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x55e043c, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GizmoCharacterExample() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GizmoCharacterExample", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GizmoCharacterExample(GizmoCharacterExample && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GizmoCharacterExample", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GizmoCharacterExample(GizmoCharacterExample const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27778};

/// @brief Field gizmoColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___gizmoColor;

/// @brief Field gizmoColor2, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___gizmoColor2;

/// @brief Field movementNoiseScale, offset: 0x40, size: 0x4, def value: None
 float_t  ___movementNoiseScale;

/// @brief Field startPointAttractionStrength, offset: 0x44, size: 0x4, def value: None
 float_t  ___startPointAttractionStrength;

/// @brief Field futurePathPlotSteps, offset: 0x48, size: 0x4, def value: None
 int32_t  ___futurePathPlotSteps;

/// @brief Field plotStartStep, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___plotStartStep;

/// @brief Field plotEveryNSteps, offset: 0x50, size: 0x4, def value: None
 int32_t  ___plotEveryNSteps;

/// @brief Field seed, offset: 0x54, size: 0x4, def value: None
 float_t  ___seed;

/// @brief Field startPosition, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Drawing::Examples::GizmoCharacterExample, ___gizmoColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::GizmoCharacterExample, ___gizmoColor2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::GizmoCharacterExample, ___movementNoiseScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::GizmoCharacterExample, ___startPointAttractionStrength) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::GizmoCharacterExample, ___futurePathPlotSteps) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::GizmoCharacterExample, ___plotStartStep) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::GizmoCharacterExample, ___plotEveryNSteps) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::GizmoCharacterExample, ___seed) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::GizmoCharacterExample, ___startPosition) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Drawing::Examples::GizmoCharacterExample) == 0x68, "Size mismatch!");

} // namespace end def Drawing::Examples

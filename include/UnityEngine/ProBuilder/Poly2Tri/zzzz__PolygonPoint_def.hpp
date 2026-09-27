#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/PolygonPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PolygonPoint)
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class PolygonPoint;
}
// Write type traits
MARK_REF_T(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*, "UnityEngine.ProBuilder.Poly2Tri", "PolygonPoint");
// Dependencies UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Poly2Tri.PolygonPoint
class CORDL_TYPE PolygonPoint : public ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint {
public:
// Declarations
static inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* New_ctor(double_t  x, double_t  y, int32_t  index) ;

/// @brief Method .ctor, addr 0xb07cf28, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(double_t  x, double_t  y, int32_t  index) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolygonPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolygonPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PolygonPoint(PolygonPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolygonPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolygonPoint(PolygonPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32402};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Poly2Tri

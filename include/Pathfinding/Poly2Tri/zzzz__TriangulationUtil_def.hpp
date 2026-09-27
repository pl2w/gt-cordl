#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/TriangulationUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TriangulationUtil)
namespace Pathfinding::Poly2Tri {
struct Orientation;
}
namespace Pathfinding::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class TriangulationUtil;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::TriangulationUtil*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::TriangulationUtil*, "Pathfinding.Poly2Tri", "TriangulationUtil");
// Dependencies System.Object
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.TriangulationUtil
class CORDL_TYPE TriangulationUtil : public ::System::Object {
public:
// Declarations
/// @brief Field EPSILON, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EPSILON, put=setStaticF_EPSILON)) double_t  EPSILON;

/// @brief Method InScanArea, addr 0xa6b509c, size 0x78, virtual false, abstract: false, final false
static inline bool InScanArea(::Pathfinding::Poly2Tri::TriangulationPoint*  pa, ::Pathfinding::Poly2Tri::TriangulationPoint*  pb, ::Pathfinding::Poly2Tri::TriangulationPoint*  pc, ::Pathfinding::Poly2Tri::TriangulationPoint*  pd) ;

/// @brief Method Orient2d, addr 0xa6b3880, size 0xe8, virtual false, abstract: false, final false
static inline ::Pathfinding::Poly2Tri::Orientation Orient2d(::Pathfinding::Poly2Tri::TriangulationPoint*  pa, ::Pathfinding::Poly2Tri::TriangulationPoint*  pb, ::Pathfinding::Poly2Tri::TriangulationPoint*  pc) ;

/// @brief Method SmartIncircle, addr 0xa6b5994, size 0xc4, virtual false, abstract: false, final false
static inline bool SmartIncircle(::Pathfinding::Poly2Tri::TriangulationPoint*  pa, ::Pathfinding::Poly2Tri::TriangulationPoint*  pb, ::Pathfinding::Poly2Tri::TriangulationPoint*  pc, ::Pathfinding::Poly2Tri::TriangulationPoint*  pd) ;

static inline double_t getStaticF_EPSILON() ;

static inline void setStaticF_EPSILON(double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriangulationUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriangulationUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TriangulationUtil(TriangulationUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriangulationUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriangulationUtil(TriangulationUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32349};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Poly2Tri::TriangulationUtil) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri

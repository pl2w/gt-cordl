#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/DTSweepPointComparator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DTSweepPointComparator)
namespace Pathfinding::Poly2Tri {
class TriangulationPoint;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class DTSweepPointComparator;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::DTSweepPointComparator*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::DTSweepPointComparator*, "Pathfinding.Poly2Tri", "DTSweepPointComparator");
// Dependencies System.Object
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.DTSweepPointComparator
class CORDL_TYPE DTSweepPointComparator : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Pathfinding::Poly2Tri::TriangulationPoint*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*() noexcept;

/// @brief Method Compare, addr 0xa6b63fc, size 0x54, virtual true, abstract: false, final true
inline int32_t Compare(::Pathfinding::Poly2Tri::TriangulationPoint*  p1, ::Pathfinding::Poly2Tri::TriangulationPoint*  p2) ;

static inline ::Pathfinding::Poly2Tri::DTSweepPointComparator* New_ctor() ;

/// @brief Method .ctor, addr 0xa6b5c24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Pathfinding::Poly2Tri::TriangulationPoint*>"
constexpr ::System::Collections::Generic::IComparer_1<::Pathfinding::Poly2Tri::TriangulationPoint*>* i___System__Collections__Generic__IComparer_1___Pathfinding__Poly2Tri__TriangulationPoint__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DTSweepPointComparator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DTSweepPointComparator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DTSweepPointComparator(DTSweepPointComparator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepPointComparator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DTSweepPointComparator(DTSweepPointComparator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32339};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Poly2Tri::DTSweepPointComparator) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri

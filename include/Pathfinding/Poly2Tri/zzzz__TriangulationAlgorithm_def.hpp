#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/TriangulationAlgorithm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TriangulationAlgorithm)
// Forward declare root types
namespace Pathfinding::Poly2Tri {
struct TriangulationAlgorithm;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Poly2Tri::TriangulationAlgorithm);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::TriangulationAlgorithm, "Pathfinding.Poly2Tri", "TriangulationAlgorithm");
// Dependencies 
namespace Pathfinding::Poly2Tri {
// Is value type: true
// CS Name: Pathfinding.Poly2Tri.TriangulationAlgorithm
struct CORDL_TYPE TriangulationAlgorithm {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TriangulationAlgorithm_Unwrapped
enum struct __TriangulationAlgorithm_Unwrapped : int32_t {
__E_DTSweep = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TriangulationAlgorithm_Unwrapped () const noexcept {
return static_cast<__TriangulationAlgorithm_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TriangulationAlgorithm() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TriangulationAlgorithm(int32_t  value__) noexcept;

/// @brief Field DTSweep value: I32(0)
static ::Pathfinding::Poly2Tri::TriangulationAlgorithm const DTSweep;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32343};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Poly2Tri::TriangulationAlgorithm, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Poly2Tri::TriangulationAlgorithm) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri

#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/IntPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntPoint)
namespace System {
class Object;
}
// Forward declare root types
namespace Pathfinding::ClipperLib {
struct IntPoint;
}
// Write type traits
MARK_VAL_T(::Pathfinding::ClipperLib::IntPoint);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::IntPoint, "Pathfinding.ClipperLib", "IntPoint");
// Dependencies 
namespace Pathfinding::ClipperLib {
// Is value type: true
// CS Name: Pathfinding.ClipperLib.IntPoint
struct CORDL_TYPE IntPoint {
public:
// Declarations
/// @brief Method Equals, addr 0xa6834b4, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xa68353c, size 0x64, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0xa6834a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int64_t  X, int64_t  Y) ;

/// @brief Method .ctor, addr 0xa6834ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::ClipperLib::IntPoint  pt) ;

/// @brief Method op_Equality, addr 0xa6835a0, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Pathfinding::ClipperLib::IntPoint  a, ::Pathfinding::ClipperLib::IntPoint  b) ;

/// @brief Method op_Inequality, addr 0xa6835b0, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Pathfinding::ClipperLib::IntPoint  a, ::Pathfinding::ClipperLib::IntPoint  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr IntPoint() ;

// Ctor Parameters [CppParam { name: "X", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Y", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr IntPoint(int64_t  X, int64_t  Y) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31649};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field X, offset: 0x0, size: 0x8, def value: None
 int64_t  X;

/// @brief Field Y, offset: 0x8, size: 0x8, def value: None
 int64_t  Y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ClipperLib::IntPoint, X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::IntPoint, Y) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ClipperLib::IntPoint) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib

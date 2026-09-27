#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/Int128.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Int128)
namespace System {
class Object;
}
// Forward declare root types
namespace Pathfinding::ClipperLib {
struct Int128;
}
// Write type traits
MARK_VAL_T(::Pathfinding::ClipperLib::Int128);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::Int128, "Pathfinding.ClipperLib", "Int128");
// Dependencies 
namespace Pathfinding::ClipperLib {
// Is value type: true
// CS Name: Pathfinding.ClipperLib.Int128
struct CORDL_TYPE Int128 {
public:
// Declarations
/// @brief Method Equals, addr 0xa68309c, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xa683124, size 0x34, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Int128Mul, addr 0xa683158, size 0x5c, virtual false, abstract: false, final false
static inline ::Pathfinding::ClipperLib::Int128 Int128Mul(int64_t  lhs, int64_t  rhs) ;

/// @brief Method .ctor, addr 0xa683094, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int64_t  _hi, uint64_t  _lo) ;

/// @brief Method .ctor, addr 0xa683088, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int64_t  _lo) ;

/// @brief Method op_Addition, addr 0xa68329c, size 0xc, virtual false, abstract: false, final false
static inline ::Pathfinding::ClipperLib::Int128 op_Addition(::Pathfinding::ClipperLib::Int128  lhs, ::Pathfinding::ClipperLib::Int128  rhs) ;

/// @brief Method op_Division, addr 0xa6832cc, size 0x1d8, virtual false, abstract: false, final false
static inline ::Pathfinding::ClipperLib::Int128 op_Division(::Pathfinding::ClipperLib::Int128  lhs, ::Pathfinding::ClipperLib::Int128  rhs) ;

/// @brief Method op_Equality, addr 0xa6831c8, size 0xa4, virtual false, abstract: false, final false
static inline bool op_Equality(::Pathfinding::ClipperLib::Int128  val1, ::Pathfinding::ClipperLib::Int128  val2) ;

/// @brief Method op_GreaterThan, addr 0xa68326c, size 0x18, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::Pathfinding::ClipperLib::Int128  val1, ::Pathfinding::ClipperLib::Int128  val2) ;

/// @brief Method op_LessThan, addr 0xa683284, size 0x18, virtual false, abstract: false, final false
static inline bool op_LessThan(::Pathfinding::ClipperLib::Int128  val1, ::Pathfinding::ClipperLib::Int128  val2) ;

/// @brief Method op_Subtraction, addr 0xa6832a8, size 0x24, virtual false, abstract: false, final false
static inline ::Pathfinding::ClipperLib::Int128 op_Subtraction(::Pathfinding::ClipperLib::Int128  lhs, ::Pathfinding::ClipperLib::Int128  rhs) ;

/// @brief Method op_UnaryNegation, addr 0xa6831b4, size 0x14, virtual false, abstract: false, final false
static inline ::Pathfinding::ClipperLib::Int128 op_UnaryNegation(::Pathfinding::ClipperLib::Int128  val) ;

// Ctor Parameters []
// @brief default ctor
constexpr Int128() ;

// Ctor Parameters [CppParam { name: "hi", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lo", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr Int128(int64_t  hi, uint64_t  lo) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31648};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field hi, offset: 0x0, size: 0x8, def value: None
 int64_t  hi;

/// @brief Field lo, offset: 0x8, size: 0x8, def value: None
 uint64_t  lo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ClipperLib::Int128, hi) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Int128, lo) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ClipperLib::Int128) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib

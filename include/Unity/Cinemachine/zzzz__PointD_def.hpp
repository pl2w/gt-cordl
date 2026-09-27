#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PointD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointD)
namespace System {
class Object;
}
namespace Unity::Cinemachine {
struct Point64;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct PointD;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::PointD);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::PointD, "Unity.Cinemachine", "PointD");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.PointD
struct CORDL_TYPE PointD {
public:
// Declarations
/// @brief Method Equals, addr 0xaee7c64, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xaee7cdc, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsAlmostZero, addr 0xaee7b7c, size 0x6c, virtual false, abstract: false, final false
static inline bool IsAlmostZero(double_t  value) ;

/// @brief Method ToString, addr 0xaee7ae0, size 0x9c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xaee7a90, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::Point64  pt) ;

/// @brief Method .ctor, addr 0xaee7ab0, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::Point64  pt, double_t  scale) ;

/// @brief Method .ctor, addr 0xaee7a88, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::PointD  pt) ;

/// @brief Method .ctor, addr 0xaee7aa0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::PointD  pt, double_t  scale) ;

/// @brief Method .ctor, addr 0xaee7ad8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(double_t  x, double_t  y) ;

/// @brief Method .ctor, addr 0xaee7ac8, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int64_t  x, int64_t  y) ;

/// @brief Method op_Equality, addr 0xaee7be8, size 0x3c, virtual false, abstract: false, final false
static inline bool op_Equality(::Unity::Cinemachine::PointD  lhs, ::Unity::Cinemachine::PointD  rhs) ;

/// @brief Method op_Inequality, addr 0xaee7c24, size 0x40, virtual false, abstract: false, final false
static inline bool op_Inequality(::Unity::Cinemachine::PointD  lhs, ::Unity::Cinemachine::PointD  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr PointD() ;

// Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr PointD(double_t  x, double_t  y) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22495};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field x, offset: 0x0, size: 0x8, def value: None
 double_t  x;

/// @brief Field y, offset: 0x8, size: 0x8, def value: None
 double_t  y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::PointD, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::PointD, y) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::PointD) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine

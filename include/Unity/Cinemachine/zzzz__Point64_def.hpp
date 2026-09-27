#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Point64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Point64)
namespace System {
class Object;
}
namespace Unity::Cinemachine {
struct PointD;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct Point64;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::Point64);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::Point64, "Unity.Cinemachine", "Point64");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.Point64
struct CORDL_TYPE Point64 {
public:
// Declarations
/// @brief Method Equals, addr 0xaee7a04, size 0x7c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xaee7a80, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xaee7968, size 0x9c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xaee7338, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::Point64  pt) ;

/// @brief Method .ctor, addr 0xaee7628, size 0x18c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::Point64  pt, double_t  scale) ;

/// @brief Method .ctor, addr 0xaee74b8, size 0x170, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::PointD  pt) ;

/// @brief Method .ctor, addr 0xaee77b4, size 0x17c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::PointD  pt, double_t  scale) ;

/// @brief Method .ctor, addr 0xaee7348, size 0x170, virtual false, abstract: false, final false
inline void _ctor(double_t  x, double_t  y) ;

/// @brief Method .ctor, addr 0xaee7340, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int64_t  x, int64_t  y) ;

/// @brief Method op_Addition, addr 0xaee7950, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::Point64 op_Addition(::Unity::Cinemachine::Point64  lhs, ::Unity::Cinemachine::Point64  rhs) ;

/// @brief Method op_Equality, addr 0xaee7930, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Unity::Cinemachine::Point64  lhs, ::Unity::Cinemachine::Point64  rhs) ;

/// @brief Method op_Inequality, addr 0xaee7940, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Unity::Cinemachine::Point64  lhs, ::Unity::Cinemachine::Point64  rhs) ;

/// @brief Method op_Subtraction, addr 0xaee795c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::Point64 op_Subtraction(::Unity::Cinemachine::Point64  lhs, ::Unity::Cinemachine::Point64  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr Point64() ;

// Ctor Parameters [CppParam { name: "X", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Y", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr Point64(int64_t  X, int64_t  Y) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22494};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field X, offset: 0x0, size: 0x8, def value: None
 int64_t  X;

/// @brief Field Y, offset: 0x8, size: 0x8, def value: None
 int64_t  Y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::Point64, X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Point64, Y) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::Point64) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine

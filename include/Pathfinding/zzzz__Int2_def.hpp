#pragma once
// IWYU pragma private; include "Pathfinding/Int2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Int2)
namespace Pathfinding {
struct Int3;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Pathfinding {
struct Int2;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Int2);
DEFINE_IL2CPP_CLASS(::Pathfinding::Int2, "Pathfinding", "Int2");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.Int2
struct CORDL_TYPE Int2 {
public:
// Declarations
 __declspec(property(get=get_sqrMagnitudeLong)) int64_t  sqrMagnitudeLong;

/// @brief Convert operator to "::System::IEquatable_1<::Pathfinding::Int2>"
constexpr operator  ::System::IEquatable_1<::Pathfinding::Int2>*() ;

/// @brief Method DotLong, addr 0x5e5daf4, size 0x1c, virtual false, abstract: false, final false
static inline int64_t DotLong(::Pathfinding::Int2  a, ::Pathfinding::Int2  b) ;

/// @brief Method Equals, addr 0x5e5db10, size 0x94, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x5e5dba4, size 0x28, virtual true, abstract: false, final true
inline bool Equals(::Pathfinding::Int2  other) ;

/// @brief Method FromInt3XZ, addr 0x5e5dd08, size 0x8, virtual false, abstract: false, final false
static inline ::Pathfinding::Int2 FromInt3XZ(::Pathfinding::Int3  o) ;

/// @brief Method GetHashCode, addr 0x5e5dbcc, size 0x1c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Max, addr 0x5e5dc78, size 0x90, virtual false, abstract: false, final false
static inline ::Pathfinding::Int2 Max(::Pathfinding::Int2  a, ::Pathfinding::Int2  b) ;

/// @brief Method Min, addr 0x5e5dbe8, size 0x90, virtual false, abstract: false, final false
static inline ::Pathfinding::Int2 Min(::Pathfinding::Int2  a, ::Pathfinding::Int2  b) ;

/// @brief Method ToInt3XZ, addr 0x5e5dd10, size 0xc, virtual false, abstract: false, final false
static inline ::Pathfinding::Int3 ToInt3XZ(::Pathfinding::Int2  o) ;

/// @brief Method ToString, addr 0x5e5dd1c, size 0x150, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5e5da84, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  x, int32_t  y) ;

/// @brief Method get_sqrMagnitudeLong, addr 0x5e5da8c, size 0x10, virtual false, abstract: false, final false
inline int64_t get_sqrMagnitudeLong() ;

/// @brief Convert to "::System::IEquatable_1<::Pathfinding::Int2>"
constexpr ::System::IEquatable_1<::Pathfinding::Int2>* i___System__IEquatable_1___Pathfinding__Int2_() ;

/// @brief Method op_Addition, addr 0x5e5daac, size 0x18, virtual false, abstract: false, final false
static inline ::Pathfinding::Int2 op_Addition(::Pathfinding::Int2  a, ::Pathfinding::Int2  b) ;

/// @brief Method op_Equality, addr 0x5e5dadc, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Pathfinding::Int2  a, ::Pathfinding::Int2  b) ;

/// @brief Method op_Inequality, addr 0x5e5dae8, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::Pathfinding::Int2  a, ::Pathfinding::Int2  b) ;

/// @brief Method op_Subtraction, addr 0x5e5dac4, size 0x18, virtual false, abstract: false, final false
static inline ::Pathfinding::Int2 op_Subtraction(::Pathfinding::Int2  a, ::Pathfinding::Int2  b) ;

/// @brief Method op_UnaryNegation, addr 0x5e5da9c, size 0x10, virtual false, abstract: false, final false
static inline ::Pathfinding::Int2 op_UnaryNegation(::Pathfinding::Int2  lhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr Int2() ;

// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Int2(int32_t  x, int32_t  y) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21254};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 int32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 int32_t  y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Int2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Int2, y) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Int2) == 0x8, "Size mismatch!");

} // namespace end def Pathfinding

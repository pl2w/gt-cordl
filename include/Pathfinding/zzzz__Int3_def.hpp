#pragma once
// IWYU pragma private; include "Pathfinding/Int3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Int3)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
struct Int3;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Int3);
DEFINE_IL2CPP_CLASS(::Pathfinding::Int3, "Pathfinding", "Int3");
// [DefaultMember("Item")]
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.Int3
struct CORDL_TYPE Int3 {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) int32_t  Item[];

 __declspec(property(get=get_costMagnitude)) int32_t  costMagnitude;

 __declspec(property(get=get_magnitude)) float_t  magnitude;

 __declspec(property(get=get_sqrMagnitude)) float_t  sqrMagnitude;

 __declspec(property(get=get_sqrMagnitudeLong)) int64_t  sqrMagnitudeLong;

/// @brief Convert operator to "::System::IEquatable_1<::Pathfinding::Int3>"
constexpr operator  ::System::IEquatable_1<::Pathfinding::Int3>*() ;

/// @brief Method Angle, addr 0x5e5d4b4, size 0xec, virtual false, abstract: false, final false
static inline float_t Angle(::Pathfinding::Int3  lhs, ::Pathfinding::Int3  rhs) ;

/// @brief Method Dot, addr 0x5e5d5a0, size 0x18, virtual false, abstract: false, final false
static inline int32_t Dot(::Pathfinding::Int3  lhs, ::Pathfinding::Int3  rhs) ;

/// @brief Method DotLong, addr 0x5e5d63c, size 0x28, virtual false, abstract: false, final false
static inline int64_t DotLong(::Pathfinding::Int3  lhs, ::Pathfinding::Int3  rhs) ;

/// @brief Method Equals, addr 0x5e5d974, size 0xa4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5e5da18, size 0x34, virtual true, abstract: false, final true
inline bool Equals(::Pathfinding::Int3  other) ;

/// @brief Method GetHashCode, addr 0x5e5da4c, size 0x38, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Normal2D, addr 0x5e5d664, size 0x14, virtual false, abstract: false, final false
inline ::Pathfinding::Int3 Normal2D() ;

/// @brief Method ToString, addr 0x5e5d7d0, size 0x1a4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5e5cde0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  _x, int32_t  _y, int32_t  _z) ;

/// @brief Method .ctor, addr 0x5e5cbb0, size 0x230, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  position) ;

/// @brief Method get_Item, addr 0x5e5d474, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Item(int32_t  i) ;

/// @brief Method get_costMagnitude, addr 0x5e5d678, size 0xf0, virtual false, abstract: false, final false
inline int32_t get_costMagnitude() ;

/// @brief Method get_magnitude, addr 0x5e5d5b8, size 0x84, virtual false, abstract: false, final false
inline float_t get_magnitude() ;

/// @brief Method get_sqrMagnitude, addr 0x5e5d768, size 0x2c, virtual false, abstract: false, final false
inline float_t get_sqrMagnitude() ;

/// @brief Method get_sqrMagnitudeLong, addr 0x5e5d794, size 0x18, virtual false, abstract: false, final false
inline int64_t get_sqrMagnitudeLong() ;

/// @brief Method get_zero, addr 0x5e5c7a8, size 0xc, virtual false, abstract: false, final false
static inline ::Pathfinding::Int3 get_zero() ;

/// @brief Convert to "::System::IEquatable_1<::Pathfinding::Int3>"
constexpr ::System::IEquatable_1<::Pathfinding::Int3>* i___System__IEquatable_1___Pathfinding__Int3_() ;

/// @brief Method op_Addition, addr 0x5e5c7b4, size 0x1c, virtual false, abstract: false, final false
static inline ::Pathfinding::Int3 op_Addition(::Pathfinding::Int3  lhs, ::Pathfinding::Int3  rhs) ;

/// @brief Method op_Division, addr 0x5e5c7d0, size 0x20c, virtual false, abstract: false, final false
static inline ::Pathfinding::Int3 op_Division(::Pathfinding::Int3  lhs, float_t  rhs) ;

/// @brief Method op_Equality, addr 0x5e5cdec, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Pathfinding::Int3  lhs, ::Pathfinding::Int3  rhs) ;

/// @brief Method op_Explicit, addr 0x5e5ce0c, size 0x20c, virtual false, abstract: false, final false
static inline ::Pathfinding::Int3 op_Explicit___Pathfinding__Int3(::UnityEngine::Vector3  ob) ;

/// @brief Method op_Explicit, addr 0x5e5a694, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Explicit___UnityEngine__Vector3(::Pathfinding::Int3  ob) ;

/// @brief Method op_Implicit, addr 0x5e5d7ac, size 0x24, virtual false, abstract: false, final false
static inline ::StringW op_Implicit___StringW(::Pathfinding::Int3  obj) ;

/// @brief Method op_Inequality, addr 0x5e5cdfc, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Pathfinding::Int3  lhs, ::Pathfinding::Int3  rhs) ;

/// @brief Method op_Multiply, addr 0x5e5d26c, size 0x208, virtual false, abstract: false, final false
static inline ::Pathfinding::Int3 op_Multiply(::Pathfinding::Int3  lhs, double_t  rhs) ;

/// @brief Method op_Multiply, addr 0x5e5d060, size 0x20c, virtual false, abstract: false, final false
static inline ::Pathfinding::Int3 op_Multiply(::Pathfinding::Int3  lhs, float_t  rhs) ;

/// @brief Method op_Multiply, addr 0x5e5d048, size 0x18, virtual false, abstract: false, final false
static inline ::Pathfinding::Int3 op_Multiply(::Pathfinding::Int3  lhs, int32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x5e5d018, size 0x1c, virtual false, abstract: false, final false
static inline ::Pathfinding::Int3 op_Subtraction(::Pathfinding::Int3  lhs, ::Pathfinding::Int3  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x5e5d034, size 0x14, virtual false, abstract: false, final false
static inline ::Pathfinding::Int3 op_UnaryNegation(::Pathfinding::Int3  lhs) ;

/// @brief Method set_Item, addr 0x5e5d494, size 0x20, virtual false, abstract: false, final false
inline void set_Item(int32_t  i, int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Int3() ;

// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Int3(int32_t  x, int32_t  y, int32_t  z) noexcept;

/// @brief Field FloatPrecision offset 0xffffffff size 0x4
static constexpr float_t  FloatPrecision{static_cast<float_t>(1000.0f)};

/// @brief Field Precision offset 0xffffffff size 0x4
static constexpr int32_t  Precision{static_cast<int32_t>(0x3e8)};

/// @brief Field PrecisionFactor offset 0xffffffff size 0x4
static constexpr float_t  PrecisionFactor{static_cast<float_t>(0.001f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21253};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 int32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 int32_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 int32_t  z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Int3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Int3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Int3, z) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Int3) == 0xc, "Size mismatch!");

} // namespace end def Pathfinding

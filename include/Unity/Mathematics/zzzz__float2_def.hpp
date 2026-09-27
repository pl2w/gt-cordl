#pragma once
// IWYU pragma private; include "Unity/Mathematics/float2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float2)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool2;
}
namespace Unity::Mathematics {
class float2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct uint2;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Unity::Mathematics {
class float2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct float2;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::float2_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::float2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float2_DebuggerProxy*, "Unity.Mathematics", "float2/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float2, "Unity.Mathematics", "float2");
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.float2::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float2
struct CORDL_TYPE float2 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::float2_DebuggerProxy;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_xxx)) ::Unity::Mathematics::float3  xxx;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_xy)) ::Unity::Mathematics::float2  xy;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_yyy)) ::Unity::Mathematics::float3  yyy;

/// @brief Field zero, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::float2  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::float2>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0xb05e394, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb05e370, size 0x24, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::float2  rhs) ;

/// @brief Method GetHashCode, addr 0xb05e41c, size 0x34, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb05e450, size 0x94, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb05e4e4, size 0x90, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb05e234, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2  v) ;

/// @brief Method .ctor, addr 0xb05e248, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint2  v) ;

/// @brief Method .ctor, addr 0xb05e220, size 0x8, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0xb05e228, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0xb05e218, size 0x8, virtual false, abstract: false, final false
inline void _ctor(float_t  x, float_t  y) ;

static inline ::Unity::Mathematics::float2 getStaticF_zero() ;

/// @brief Method get_xxx, addr 0xb05e348, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_xxx() ;

/// @brief Method get_xy, addr 0xb05e368, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_xy() ;

/// @brief Method get_yyy, addr 0xb05e358, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_yyy() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float2>* i___System__IEquatable_1___Unity__Mathematics__float2_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0xb05e2b8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_Addition(::Unity::Mathematics::float2  lhs, ::Unity::Mathematics::float2  rhs) ;

/// @brief Method op_Addition, addr 0xb05e2c4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_Addition(::Unity::Mathematics::float2  lhs, float_t  rhs) ;

/// @brief Method op_Addition, addr 0xb05e2d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_Addition(float_t  lhs, ::Unity::Mathematics::float2  rhs) ;

/// @brief Method op_Division, addr 0xb05e2fc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_Division(::Unity::Mathematics::float2  lhs, ::Unity::Mathematics::float2  rhs) ;

/// @brief Method op_Division, addr 0xb05e308, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_Division(::Unity::Mathematics::float2  lhs, float_t  rhs) ;

/// @brief Method op_Division, addr 0xb05e314, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_Division(float_t  lhs, ::Unity::Mathematics::float2  rhs) ;

/// @brief Method op_Equality, addr 0xb05e330, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::float2  lhs, float_t  rhs) ;

/// @brief Method op_Implicit, addr 0xb05e574, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::Unity::Mathematics::float2  v) ;

/// @brief Method op_Implicit, addr 0xb05e270, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(::Unity::Mathematics::int2  v) ;

/// @brief Method op_Implicit, addr 0xb05e280, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(::Unity::Mathematics::uint2  v) ;

/// @brief Method op_Implicit, addr 0xb05e578, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(::UnityEngine::Vector2  v) ;

/// @brief Method op_Implicit, addr 0xb05e25c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(float_t  v) ;

/// @brief Method op_Implicit, addr 0xb05e264, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(int32_t  v) ;

/// @brief Method op_Multiply, addr 0xb05e290, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_Multiply(::Unity::Mathematics::float2  lhs, ::Unity::Mathematics::float2  rhs) ;

/// @brief Method op_Multiply, addr 0xb05e29c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_Multiply(::Unity::Mathematics::float2  lhs, float_t  rhs) ;

/// @brief Method op_Multiply, addr 0xb05e2a8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_Multiply(float_t  lhs, ::Unity::Mathematics::float2  rhs) ;

/// @brief Method op_Subtraction, addr 0xb05e2e0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_Subtraction(::Unity::Mathematics::float2  lhs, ::Unity::Mathematics::float2  rhs) ;

/// @brief Method op_Subtraction, addr 0xb05e2ec, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_Subtraction(float_t  lhs, ::Unity::Mathematics::float2  rhs) ;

/// @brief Method op_UnaryNegation, addr 0xb05e324, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 op_UnaryNegation(::Unity::Mathematics::float2  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::float2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr float2() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr float2(float_t  x, float_t  y) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31483};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2, y) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float2) == 0x8, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.float2/DebuggerProxy
class CORDL_TYPE float2_DebuggerProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr float2_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "float2_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
float2_DebuggerProxy(float2_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "float2_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
float2_DebuggerProxy(float2_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31482};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::float2_DebuggerProxy) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

#pragma once
// IWYU pragma private; include "Unity/Mathematics/float3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float3)
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
struct bool3;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
class float3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct half3;
}
namespace Unity::Mathematics {
struct int3;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Mathematics {
class float3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct float3;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::float3_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::float3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float3_DebuggerProxy*, "Unity.Mathematics", "float3/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float3, "Unity.Mathematics", "float3");
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.float3::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float3
struct CORDL_TYPE float3 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::float3_DebuggerProxy;

 __declspec(property(get=get_Item, put=set_Item)) float_t  Item[];

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_xxxx)) ::Unity::Mathematics::float4  xxxx;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_xy)) ::Unity::Mathematics::float2  xy;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_xyz)) ::Unity::Mathematics::float3  xyz;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_xz)) ::Unity::Mathematics::float2  xz;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_yxxy)) ::Unity::Mathematics::float4  yxxy;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_yyyy)) ::Unity::Mathematics::float4  yyyy;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_yz)) ::Unity::Mathematics::float2  yz;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_yzx)) ::Unity::Mathematics::float3  yzx;

/// @brief Field zero, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::float3  zero;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_zxy)) ::Unity::Mathematics::float3  zxy;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_zy)) ::Unity::Mathematics::float2  zy;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_zzyz)) ::Unity::Mathematics::float4  zzyz;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_zzzz)) ::Unity::Mathematics::float4  zzzz;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::float3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0xb05ef34, size 0x98, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb05ef04, size 0x30, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::float3  rhs) ;

/// @brief Method GetHashCode, addr 0xb05efcc, size 0x44, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb05f010, size 0xb8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb05f0c8, size 0xb4, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb05eb10, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::half3  v) ;

/// @brief Method .ctor, addr 0xb05eaf4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3  v) ;

/// @brief Method .ctor, addr 0xb05ead8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0xb05eae4, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0xb05eab4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  x, float_t  y, float_t  z) ;

/// @brief Method .ctor, addr 0xb05eac0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  x, ::Unity::Mathematics::float2  yz) ;

/// @brief Method .ctor, addr 0xb05eacc, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2  xy, float_t  z) ;

static inline ::Unity::Mathematics::float3 getStaticF_zero() ;

/// @brief Method get_Item, addr 0xb05eef4, size 0x8, virtual false, abstract: false, final false
inline float_t get_Item(int32_t  index) ;

/// @brief Method get_xxxx, addr 0xb05ee50, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xxxx() ;

/// @brief Method get_xy, addr 0xb05eed0, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_xy() ;

/// @brief Method get_xyz, addr 0xb05eeac, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_xyz() ;

/// @brief Method get_xz, addr 0xb05eed8, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_xz() ;

/// @brief Method get_yxxy, addr 0xb05ee64, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yxxy() ;

/// @brief Method get_yyyy, addr 0xb05ee74, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yyyy() ;

/// @brief Method get_yz, addr 0xb05eee4, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_yz() ;

/// @brief Method get_yzx, addr 0xb05eeb8, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_yzx() ;

/// @brief Method get_zxy, addr 0xb05eec4, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_zxy() ;

/// @brief Method get_zy, addr 0xb05eeec, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_zy() ;

/// @brief Method get_zzyz, addr 0xb05ee88, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zzyz() ;

/// @brief Method get_zzzz, addr 0xb05ee98, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zzzz() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float3>* i___System__IEquatable_1___Unity__Mathematics__float3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0xb05ed14, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Addition(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Addition, addr 0xb05ed24, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Addition(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_Division, addr 0xb05ed58, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Division(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Division, addr 0xb05ed68, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Division(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_Equality, addr 0xb05edd8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Equality, addr 0xb05ee00, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0xb05eda0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Implicit, addr 0xb05f17c, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::Unity::Mathematics::float3  v) ;

/// @brief Method op_Implicit, addr 0xb05ec10, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::half3  v) ;

/// @brief Method op_Implicit, addr 0xb05ebfc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::int3  v) ;

/// @brief Method op_Implicit, addr 0xb05f180, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::UnityEngine::Vector3  v) ;

/// @brief Method op_Implicit, addr 0xb05ebe0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(float_t  v) ;

/// @brief Method op_Implicit, addr 0xb05ebec, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(int32_t  v) ;

/// @brief Method op_Inequality, addr 0xb05ee28, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_LessThan, addr 0xb05ed78, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_Multiply, addr 0xb05ece0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Multiply(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Multiply, addr 0xb05ecf0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Multiply(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_Multiply, addr 0xb05ed00, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Multiply(float_t  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Subtraction, addr 0xb05ed34, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Subtraction(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Subtraction, addr 0xb05ed44, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Subtraction(float_t  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_UnaryNegation, addr 0xb05edc8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_UnaryNegation(::Unity::Mathematics::float3  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::float3  value) ;

/// @brief Method set_Item, addr 0xb05eefc, size 0x8, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr float3() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr float3(float_t  x, float_t  y, float_t  z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31486};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 float_t  z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3, z) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float3) == 0xc, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.float3/DebuggerProxy
class CORDL_TYPE float3_DebuggerProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr float3_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "float3_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
float3_DebuggerProxy(float3_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "float3_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
float3_DebuggerProxy(float3_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31485};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::float3_DebuggerProxy) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

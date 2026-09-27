#pragma once
// IWYU pragma private; include "Unity/Mathematics/float4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float4)
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
struct bool4;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
class float4_DebuggerProxy;
}
namespace Unity::Mathematics {
struct int4;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Unity::Mathematics {
class float4_DebuggerProxy;
}
namespace Unity::Mathematics {
struct float4;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::float4_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::float4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float4_DebuggerProxy*, "Unity.Mathematics", "float4/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float4, "Unity.Mathematics", "float4");
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.float4::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float4
struct CORDL_TYPE float4 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::float4_DebuggerProxy;

 __declspec(property(get=get_Item, put=set_Item)) float_t  Item[];

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_wwww)) ::Unity::Mathematics::float4  wwww;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_wwwx)) ::Unity::Mathematics::float4  wwwx;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_wyz)) ::Unity::Mathematics::float3  wyz;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_wzy)) ::Unity::Mathematics::float3  wzy;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_wzyx)) ::Unity::Mathematics::float4  wzyx;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_xxyy)) ::Unity::Mathematics::float4  xxyy;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_xy)) ::Unity::Mathematics::float2  xy;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_xyz)) ::Unity::Mathematics::float3  xyz;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_xyzx)) ::Unity::Mathematics::float4  xyzx;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_xzx)) ::Unity::Mathematics::float3  xzx;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_xzyw)) ::Unity::Mathematics::float4  xzyw;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_yxw)) ::Unity::Mathematics::float3  yxw;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_yyy)) ::Unity::Mathematics::float3  yyy;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_yzxy)) ::Unity::Mathematics::float4  yzxy;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_yzxz)) ::Unity::Mathematics::float4  yzxz;

/// @brief Field zero, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::float4  zero;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_zw)) ::Unity::Mathematics::float2  zw;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_zwx)) ::Unity::Mathematics::float3  zwx;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_zwxy)) ::Unity::Mathematics::float4  zwxy;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_zxyy)) ::Unity::Mathematics::float4  zxyy;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_zxyz)) ::Unity::Mathematics::float4  zxyz;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_zzww)) ::Unity::Mathematics::float4  zzww;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::float4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0xb05febc, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb05fe80, size 0x3c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::float4  rhs) ;

/// @brief Method GetHashCode, addr 0xb05ff64, size 0x5c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb05ffc0, size 0x1d0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb060190, size 0x1c4, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb05fb60, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int4  v) ;

/// @brief Method .ctor, addr 0xb05fb54, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0xb05fb24, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method .ctor, addr 0xb05fb30, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2  xy, float_t  z, float_t  w) ;

/// @brief Method .ctor, addr 0xb05fb3c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2  xy, ::Unity::Mathematics::float2  zw) ;

/// @brief Method .ctor, addr 0xb05fb48, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  xyz, float_t  w) ;

static inline ::Unity::Mathematics::float4 getStaticF_zero() ;

/// @brief Method get_Item, addr 0xb05fe70, size 0x8, virtual false, abstract: false, final false
inline float_t get_Item(int32_t  index) ;

/// @brief Method get_wwww, addr 0xb05fdf0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_wwww() ;

/// @brief Method get_wwwx, addr 0xb05fddc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_wwwx() ;

/// @brief Method get_wyz, addr 0xb05fe48, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_wyz() ;

/// @brief Method get_wzy, addr 0xb05fe54, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_wzy() ;

/// @brief Method get_wzyx, addr 0xb05fdd0, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_wzyx() ;

/// @brief Method get_xxyy, addr 0xb05fd48, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xxyy() ;

/// @brief Method get_xy, addr 0xb05fe60, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_xy() ;

/// @brief Method get_xyz, addr 0xb05fe04, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_xyz() ;

/// @brief Method get_xyzx, addr 0xb05fd58, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xyzx() ;

/// @brief Method get_xzx, addr 0xb05fe10, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_xzx() ;

/// @brief Method get_xzyw, addr 0xb05fd68, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xzyw() ;

/// @brief Method get_yxw, addr 0xb05fe20, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_yxw() ;

/// @brief Method get_yyy, addr 0xb05fe2c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_yyy() ;

/// @brief Method get_yzxy, addr 0xb05fd74, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yzxy() ;

/// @brief Method get_yzxz, addr 0xb05fd84, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yzxz() ;

/// @brief Method get_zw, addr 0xb05fe68, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_zw() ;

/// @brief Method get_zwx, addr 0xb05fe3c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_zwx() ;

/// @brief Method get_zwxy, addr 0xb05fdc4, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zwxy() ;

/// @brief Method get_zxyy, addr 0xb05fd94, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zxyy() ;

/// @brief Method get_zxyz, addr 0xb05fda4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zxyz() ;

/// @brief Method get_zzww, addr 0xb05fdb4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zzww() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float4>* i___System__IEquatable_1___Unity__Mathematics__float4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0xb05fbf0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 op_Addition(::Unity::Mathematics::float4  lhs, ::Unity::Mathematics::float4  rhs) ;

/// @brief Method op_Addition, addr 0xb05fc04, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 op_Addition(::Unity::Mathematics::float4  lhs, float_t  rhs) ;

/// @brief Method op_Addition, addr 0xb05fc18, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 op_Addition(float_t  lhs, ::Unity::Mathematics::float4  rhs) ;

/// @brief Method op_Division, addr 0xb05fc70, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 op_Division(::Unity::Mathematics::float4  lhs, ::Unity::Mathematics::float4  rhs) ;

/// @brief Method op_Division, addr 0xb05fc84, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 op_Division(::Unity::Mathematics::float4  lhs, float_t  rhs) ;

/// @brief Method op_Equality, addr 0xb05fd14, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::float4  lhs, ::Unity::Mathematics::float4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0xb05fccc, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_GreaterThanOrEqual(::Unity::Mathematics::float4  lhs, ::Unity::Mathematics::float4  rhs) ;

/// @brief Method op_Implicit, addr 0xb060358, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::Unity::Mathematics::float4  v) ;

/// @brief Method op_Implicit, addr 0xb05fb94, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 op_Implicit___Unity__Mathematics__float4(::Unity::Mathematics::int4  v) ;

/// @brief Method op_Implicit, addr 0xb060354, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 op_Implicit___Unity__Mathematics__float4(::UnityEngine::Vector4  v) ;

/// @brief Method op_Implicit, addr 0xb05fb84, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 op_Implicit___Unity__Mathematics__float4(float_t  v) ;

/// @brief Method op_LessThan, addr 0xb05fc98, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_LessThan(::Unity::Mathematics::float4  lhs, ::Unity::Mathematics::float4  rhs) ;

/// @brief Method op_Multiply, addr 0xb05fbb0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 op_Multiply(::Unity::Mathematics::float4  lhs, ::Unity::Mathematics::float4  rhs) ;

/// @brief Method op_Multiply, addr 0xb05fbc4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 op_Multiply(::Unity::Mathematics::float4  lhs, float_t  rhs) ;

/// @brief Method op_Multiply, addr 0xb05fbd8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 op_Multiply(float_t  lhs, ::Unity::Mathematics::float4  rhs) ;

/// @brief Method op_Subtraction, addr 0xb05fc30, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 op_Subtraction(::Unity::Mathematics::float4  lhs, ::Unity::Mathematics::float4  rhs) ;

/// @brief Method op_Subtraction, addr 0xb05fc44, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 op_Subtraction(::Unity::Mathematics::float4  lhs, float_t  rhs) ;

/// @brief Method op_Subtraction, addr 0xb05fc58, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 op_Subtraction(float_t  lhs, ::Unity::Mathematics::float4  rhs) ;

/// @brief Method op_UnaryNegation, addr 0xb05fd00, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 op_UnaryNegation(::Unity::Mathematics::float4  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::float4  value) ;

/// @brief Method set_Item, addr 0xb05fe78, size 0x8, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr float4() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr float4(float_t  x, float_t  y, float_t  z, float_t  w) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31489};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 float_t  z;

/// @brief Field w, offset: 0xc, size: 0x4, def value: None
 float_t  w;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4, w) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float4) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.float4/DebuggerProxy
class CORDL_TYPE float4_DebuggerProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr float4_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "float4_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
float4_DebuggerProxy(float4_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "float4_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
float4_DebuggerProxy(float4_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31488};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::float4_DebuggerProxy) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

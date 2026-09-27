#pragma once
// IWYU pragma private; include "Unity/Mathematics/float4x4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float4x4)
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
struct bool4x4;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float4x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float4x4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float4x4, "Unity.Mathematics", "float4x4");
// [DefaultMember("Item")]
// [Il2CppEagerStaticClassConstruction]
// Dependencies Unity.Mathematics.float4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float4x4
struct CORDL_TYPE float4x4 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::float4  Item[];

/// @brief Field identity, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::float4x4  identity;

/// @brief Field zero, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::float4x4  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float4x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::float4x4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0xb0605f4, size 0x168, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb0604e8, size 0x10c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::float4x4  rhs) ;

/// @brief Method GetHashCode, addr 0xb06075c, size 0x120, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method RotateX, addr 0xb061554, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 RotateX(float_t  angle) ;

/// @brief Method RotateZ, addr 0xb061630, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 RotateZ(float_t  angle) ;

/// @brief Method TRS, addr 0xb061708, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 TRS(::Unity::Mathematics::float3  translation, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  scale) ;

/// @brief Method ToString, addr 0xb06087c, size 0x560, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb060ddc, size 0x554, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb06035c, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1, ::Unity::Mathematics::float4  c2, ::Unity::Mathematics::float4  c3) ;

/// @brief Method .ctor, addr 0xb060380, size 0x54, virtual false, abstract: false, final false
inline void _ctor(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23, float_t  m30, float_t  m31, float_t  m32, float_t  m33) ;

/// @brief Method .ctor, addr 0xb061470, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3x3  rotation, ::Unity::Mathematics::float3  translation) ;

/// @brief Method .ctor, addr 0xb0614c0, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  translation) ;

static inline ::Unity::Mathematics::float4x4 getStaticF_identity() ;

static inline ::Unity::Mathematics::float4x4 getStaticF_zero() ;

/// @brief Method get_Item, addr 0xb0604e0, size 0x8, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::float4> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float4x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float4x4>* i___System__IEquatable_1___Unity__Mathematics__float4x4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Equality, addr 0xb0603d4, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::float4x4  lhs, ::Unity::Mathematics::float4x4  rhs) ;

/// @brief Method op_Implicit, addr 0xb06140c, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 op_Implicit___UnityEngine__Matrix4x4(::Unity::Mathematics::float4x4  m) ;

/// @brief Method op_Implicit, addr 0xb061330, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 op_Implicit___Unity__Mathematics__float4x4(::UnityEngine::Matrix4x4  m) ;

static inline void setStaticF_identity(::Unity::Mathematics::float4x4  value) ;

static inline void setStaticF_zero(::Unity::Mathematics::float4x4  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr float4x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }]
constexpr float4x4(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1, ::Unity::Mathematics::float4  c2, ::Unity::Mathematics::float4  c3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31490};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field c0, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::float4  c0;

/// @brief Field c1, offset: 0x10, size: 0x10, def value: None
 ::Unity::Mathematics::float4  c1;

/// @brief Field c2, offset: 0x20, size: 0x10, def value: None
 ::Unity::Mathematics::float4  c2;

/// @brief Field c3, offset: 0x30, size: 0x10, def value: None
 ::Unity::Mathematics::float4  c3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float4x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4x4, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4x4, c2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4x4, c3) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float4x4) == 0x40, "Size mismatch!");

} // namespace end def Unity::Mathematics

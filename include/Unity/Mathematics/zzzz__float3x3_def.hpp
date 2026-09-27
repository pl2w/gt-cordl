#pragma once
// IWYU pragma private; include "Unity/Mathematics/float3x3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float3x3)
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
struct float3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct quaternion;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float3x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float3x3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float3x3, "Unity.Mathematics", "float3x3");
// [DefaultMember("Item")]
// [Il2CppEagerStaticClassConstruction]
// Dependencies Unity.Mathematics.float3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float3x3
struct CORDL_TYPE float3x3 {
public:
// Declarations
/// @brief Field identity, offset 0xffffffff, size 0x24 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::float3x3  identity;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3x3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::float3x3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0xb05f260, size 0xf8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb05f1c4, size 0x9c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method GetHashCode, addr 0xb05f358, size 0x84, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb05f3dc, size 0x34c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb05f728, size 0x340, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb05f184, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2) ;

/// @brief Method .ctor, addr 0xb05fa68, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4x4  f4x4) ;

/// @brief Method .ctor, addr 0xb05f1a8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12, float_t  m20, float_t  m21, float_t  m22) ;

/// @brief Method .ctor, addr 0xb05c4ac, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::quaternion  q) ;

static inline ::Unity::Mathematics::float3x3 getStaticF_identity() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3x3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float3x3>* i___System__IEquatable_1___Unity__Mathematics__float3x3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Explicit, addr 0xb05fa9c, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::float4x4  f4x4) ;

static inline void setStaticF_identity(::Unity::Mathematics::float3x3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr float3x3() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }]
constexpr float3x3(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31487};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field c0, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c0;

/// @brief Field c1, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c1;

/// @brief Field c2, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float3x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x3, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x3, c2) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float3x3) == 0x24, "Size mismatch!");

} // namespace end def Unity::Mathematics

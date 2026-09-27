#pragma once
// IWYU pragma private; include "Unity/Mathematics/int3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int3)
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
class int3_DebuggerProxy;
}
// Forward declare root types
namespace Unity::Mathematics {
class int3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct int3;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::int3_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::int3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::int3_DebuggerProxy*, "Unity.Mathematics", "int3/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::int3, "Unity.Mathematics", "int3");
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.int3::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int3
struct CORDL_TYPE int3 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::int3_DebuggerProxy;

/// @brief Field zero, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::int3  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::int3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0xb062e48, size 0x98, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb062e14, size 0x34, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::int3  rhs) ;

/// @brief Method GetHashCode, addr 0xb062ee0, size 0x48, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb062f28, size 0xb8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb062fe0, size 0xb4, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb062ca8, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  v) ;

/// @brief Method .ctor, addr 0xb062c9c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0xb062c90, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  x, int32_t  y, int32_t  z) ;

static inline ::Unity::Mathematics::int3 getStaticF_zero() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::int3>* i___System__IEquatable_1___Unity__Mathematics__int3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0xb062d64, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Addition(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Addition, addr 0xb062d80, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Addition(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_Division, addr 0xb062dcc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Division(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Division, addr 0xb062de8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Division(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_Explicit, addr 0xb062cf0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Explicit___Unity__Mathematics__int3(::Unity::Mathematics::float3  v) ;

/// @brief Method op_Implicit, addr 0xb062ce4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Implicit___Unity__Mathematics__int3(int32_t  v) ;

/// @brief Method op_Multiply, addr 0xb062d30, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Multiply(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Multiply, addr 0xb062d4c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Multiply(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0xb062d98, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Subtraction(::Unity::Mathematics::int3  lhs, ::Unity::Mathematics::int3  rhs) ;

/// @brief Method op_Subtraction, addr 0xb062db4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_Subtraction(::Unity::Mathematics::int3  lhs, int32_t  rhs) ;

/// @brief Method op_UnaryNegation, addr 0xb062e00, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 op_UnaryNegation(::Unity::Mathematics::int3  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::int3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr int3() ;

// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr int3(int32_t  x, int32_t  y, int32_t  z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31501};

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
static_assert(offsetof(::Unity::Mathematics::int3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3, z) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::int3) == 0xc, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.int3/DebuggerProxy
class CORDL_TYPE int3_DebuggerProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr int3_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "int3_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
int3_DebuggerProxy(int3_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "int3_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
int3_DebuggerProxy(int3_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31500};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::int3_DebuggerProxy) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

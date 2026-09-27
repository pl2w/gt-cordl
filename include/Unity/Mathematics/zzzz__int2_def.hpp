#pragma once
// IWYU pragma private; include "Unity/Mathematics/int2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int2)
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
class int2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct int4;
}
// Forward declare root types
namespace Unity::Mathematics {
class int2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct int2;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::int2_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::int2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::int2_DebuggerProxy*, "Unity.Mathematics", "int2/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::int2, "Unity.Mathematics", "int2");
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.int2::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int2
struct CORDL_TYPE int2 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::int2_DebuggerProxy;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_xyxy)) ::Unity::Mathematics::int4  xyxy;

/// @brief Field zero, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::int2  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::int2>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0xb062ab0, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb062a88, size 0x28, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::int2  rhs) ;

/// @brief Method GetHashCode, addr 0xb062b38, size 0x34, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb062b6c, size 0x94, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb062c00, size 0x90, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb0629d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0xb0629d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  x, int32_t  y) ;

static inline ::Unity::Mathematics::int2 getStaticF_zero() ;

/// @brief Method get_xyxy, addr 0xb062a7c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyxy() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::int2>* i___System__IEquatable_1___Unity__Mathematics__int2_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0xb0629ec, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 op_Addition(::Unity::Mathematics::int2  lhs, ::Unity::Mathematics::int2  rhs) ;

/// @brief Method op_Addition, addr 0xb062a04, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 op_Addition(::Unity::Mathematics::int2  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0xb062a74, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 op_BitwiseOr(::Unity::Mathematics::int2  lhs, ::Unity::Mathematics::int2  rhs) ;

/// @brief Method op_Division, addr 0xb062a2c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 op_Division(::Unity::Mathematics::int2  lhs, int32_t  rhs) ;

/// @brief Method op_Implicit, addr 0xb0629e0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 op_Implicit___Unity__Mathematics__int2(int32_t  v) ;

/// @brief Method op_LessThan, addr 0xb062a40, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::int2  lhs, ::Unity::Mathematics::int2  rhs) ;

/// @brief Method op_RightShift, addr 0xb062a60, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 op_RightShift(::Unity::Mathematics::int2  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0xb062a18, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 op_Subtraction(::Unity::Mathematics::int2  lhs, int32_t  rhs) ;

static inline void setStaticF_zero(::Unity::Mathematics::int2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr int2() ;

// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr int2(int32_t  x, int32_t  y) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31499};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 int32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 int32_t  y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2, y) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::int2) == 0x8, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.int2/DebuggerProxy
class CORDL_TYPE int2_DebuggerProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr int2_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "int2_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
int2_DebuggerProxy(int2_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "int2_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
int2_DebuggerProxy(int2_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31498};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::int2_DebuggerProxy) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

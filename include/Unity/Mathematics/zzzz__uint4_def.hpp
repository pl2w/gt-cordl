#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint4)
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
class uint4_DebuggerProxy;
}
// Forward declare root types
namespace Unity::Mathematics {
class uint4_DebuggerProxy;
}
namespace Unity::Mathematics {
struct uint4;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::uint4_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::uint4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint4_DebuggerProxy*, "Unity.Mathematics", "uint4/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint4, "Unity.Mathematics", "uint4");
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.uint4::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint4
struct CORDL_TYPE uint4 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::uint4_DebuggerProxy;

 __declspec(property(put=set_Item)) int32_t  Item;

/// @brief Field zero, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::uint4  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::uint4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0xb0653f0, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb0653ac, size 0x44, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::uint4  rhs) ;

/// @brief Method GetHashCode, addr 0xb065498, size 0x5c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb0654f4, size 0x1d0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb0656c4, size 0x347c, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb0652a4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0xb065298, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

/// @brief Method .ctor, addr 0xb06528c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint32_t  x, uint32_t  y, uint32_t  z, uint32_t  w) ;

static inline ::Unity::Mathematics::uint4 getStaticF_zero() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::uint4>* i___System__IEquatable_1___Unity__Mathematics__uint4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0xb0652ec, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 op_Addition(::Unity::Mathematics::uint4  lhs, ::Unity::Mathematics::uint4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0xb06535c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 op_BitwiseAnd(::Unity::Mathematics::uint4  lhs, ::Unity::Mathematics::uint4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0xb065368, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 op_BitwiseAnd(::Unity::Mathematics::uint4  lhs, uint32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0xb06538c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 op_BitwiseOr(::Unity::Mathematics::uint4  lhs, ::Unity::Mathematics::uint4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0xb065398, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 op_ExclusiveOr(::Unity::Mathematics::uint4  lhs, ::Unity::Mathematics::uint4  rhs) ;

/// @brief Method op_GreaterThan, addr 0xb065318, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_GreaterThan(::Unity::Mathematics::uint4  lhs, uint32_t  rhs) ;

/// @brief Method op_Implicit, addr 0xb0652b0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 op_Implicit___Unity__Mathematics__uint4(uint32_t  v) ;

/// @brief Method op_Multiply, addr 0xb0652c0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 op_Multiply(::Unity::Mathematics::uint4  lhs, ::Unity::Mathematics::uint4  rhs) ;

/// @brief Method op_OnesComplement, addr 0xb065350, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 op_OnesComplement(::Unity::Mathematics::uint4  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::uint4  value) ;

/// @brief Method set_Item, addr 0xb0653a4, size 0x8, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr uint4() ;

// Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "w", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr uint4(uint32_t  x, uint32_t  y, uint32_t  z, uint32_t  w) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31512};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 uint32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 uint32_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 uint32_t  z;

/// @brief Field w, offset: 0xc, size: 0x4, def value: None
 uint32_t  w;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4, w) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::uint4) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.uint4/DebuggerProxy
class CORDL_TYPE uint4_DebuggerProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr uint4_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "uint4_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
uint4_DebuggerProxy(uint4_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "uint4_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
uint4_DebuggerProxy(uint4_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31511};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::uint4_DebuggerProxy) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

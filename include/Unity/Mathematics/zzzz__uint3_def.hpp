#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint3)
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
class uint3_DebuggerProxy;
}
// Forward declare root types
namespace Unity::Mathematics {
class uint3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct uint3;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::uint3_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::uint3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint3_DebuggerProxy*, "Unity.Mathematics", "uint3/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint3, "Unity.Mathematics", "uint3");
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.uint3::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint3
struct CORDL_TYPE uint3 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::uint3_DebuggerProxy;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::uint3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0xb065040, size 0x98, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb06500c, size 0x34, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::uint3  rhs) ;

/// @brief Method GetHashCode, addr 0xb0650d8, size 0x48, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb065120, size 0xb8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb0651d8, size 0xb4, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb064f7c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::uint3>* i___System__IEquatable_1___Unity__Mathematics__uint3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0xb064fa4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Addition(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0xb064fe8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_BitwiseAnd(::Unity::Mathematics::uint3  lhs, uint32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0xb065000, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_ExclusiveOr(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_GreaterThan, addr 0xb064fc0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::uint3  lhs, uint32_t  rhs) ;

/// @brief Method op_Multiply, addr 0xb064f88, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Multiply(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr uint3() ;

// Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr uint3(uint32_t  x, uint32_t  y, uint32_t  z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31510};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 uint32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 uint32_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 uint32_t  z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3, z) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::uint3) == 0xc, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.uint3/DebuggerProxy
class CORDL_TYPE uint3_DebuggerProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr uint3_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "uint3_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
uint3_DebuggerProxy(uint3_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "uint3_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
uint3_DebuggerProxy(uint3_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31509};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::uint3_DebuggerProxy) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

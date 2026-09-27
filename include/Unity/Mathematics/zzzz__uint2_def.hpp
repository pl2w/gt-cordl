#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint2)
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
class uint2_DebuggerProxy;
}
// Forward declare root types
namespace Unity::Mathematics {
class uint2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct uint2;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::uint2_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::uint2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint2_DebuggerProxy*, "Unity.Mathematics", "uint2/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint2, "Unity.Mathematics", "uint2");
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.uint2::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint2
struct CORDL_TYPE uint2 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::uint2_DebuggerProxy;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::uint2>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0xb064d9c, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb064d74, size 0x28, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::uint2  rhs) ;

/// @brief Method GetHashCode, addr 0xb064e24, size 0x34, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb064e58, size 0x94, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb064eec, size 0x90, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb064d3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint32_t  x, uint32_t  y) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::uint2>* i___System__IEquatable_1___Unity__Mathematics__uint2_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0xb064d5c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Addition(::Unity::Mathematics::uint2  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_Multiply, addr 0xb064d44, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Multiply(::Unity::Mathematics::uint2  lhs, ::Unity::Mathematics::uint2  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr uint2() ;

// Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr uint2(uint32_t  x, uint32_t  y) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31508};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 uint32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 uint32_t  y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2, y) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::uint2) == 0x8, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.uint2/DebuggerProxy
class CORDL_TYPE uint2_DebuggerProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr uint2_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "uint2_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
uint2_DebuggerProxy(uint2_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "uint2_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
uint2_DebuggerProxy(uint2_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31507};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::uint2_DebuggerProxy) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

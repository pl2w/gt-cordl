#pragma once
// IWYU pragma private; include "Unity/Mathematics/half4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__half_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(half4)
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
class half4_DebuggerProxy;
}
namespace Unity::Mathematics {
struct half;
}
// Forward declare root types
namespace Unity::Mathematics {
class half4_DebuggerProxy;
}
namespace Unity::Mathematics {
struct half4;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::half4_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::half4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::half4_DebuggerProxy*, "Unity.Mathematics", "half4/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::half4, "Unity.Mathematics", "half4");
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.half4::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies Unity.Mathematics.half
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.half4
struct CORDL_TYPE half4 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::half4_DebuggerProxy;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::half4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::half4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0xb0623a4, size 0xa4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb062360, size 0x44, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::half4  rhs) ;

/// @brief Method GetHashCode, addr 0xb062448, size 0x6c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb0624b4, size 0x1dc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb062690, size 0x340, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb06234c, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z, ::Unity::Mathematics::half  w) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::half4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::half4>* i___System__IEquatable_1___Unity__Mathematics__half4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

// Ctor Parameters []
// @brief default ctor
constexpr half4() ;

// Ctor Parameters [CppParam { name: "x", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None, comment: None }, CppParam { name: "w", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None, comment: None }]
constexpr half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z, ::Unity::Mathematics::half  w) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31497};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field x, offset: 0x0, size: 0x2, def value: None
 ::Unity::Mathematics::half  x;

/// @brief Field y, offset: 0x2, size: 0x2, def value: None
 ::Unity::Mathematics::half  y;

/// @brief Field z, offset: 0x4, size: 0x2, def value: None
 ::Unity::Mathematics::half  z;

/// @brief Field w, offset: 0x6, size: 0x2, def value: None
 ::Unity::Mathematics::half  w;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::half4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half4, y) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half4, z) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half4, w) == 0x6, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::half4) == 0x8, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.half4/DebuggerProxy
class CORDL_TYPE half4_DebuggerProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr half4_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "half4_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
half4_DebuggerProxy(half4_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "half4_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
half4_DebuggerProxy(half4_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31496};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::half4_DebuggerProxy) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

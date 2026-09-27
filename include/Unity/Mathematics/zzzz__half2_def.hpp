#pragma once
// IWYU pragma private; include "Unity/Mathematics/half2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__half_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(half2)
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
class half2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct half;
}
// Forward declare root types
namespace Unity::Mathematics {
class half2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct half2;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::half2_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::half2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::half2_DebuggerProxy*, "Unity.Mathematics", "half2/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::half2, "Unity.Mathematics", "half2");
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.half2::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies Unity.Mathematics.half
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.half2
struct CORDL_TYPE half2 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::half2_DebuggerProxy;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::half2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::half2>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0xb061b2c, size 0x84, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb061b08, size 0x24, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::half2  rhs) ;

/// @brief Method GetHashCode, addr 0xb061bb0, size 0x3c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb061bec, size 0xa0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb061c8c, size 0x158, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb061afc, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::half2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::half2>* i___System__IEquatable_1___Unity__Mathematics__half2_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

// Ctor Parameters []
// @brief default ctor
constexpr half2() ;

// Ctor Parameters [CppParam { name: "x", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None, comment: None }]
constexpr half2(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31493};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field x, offset: 0x0, size: 0x2, def value: None
 ::Unity::Mathematics::half  x;

/// @brief Field y, offset: 0x2, size: 0x2, def value: None
 ::Unity::Mathematics::half  y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::half2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half2, y) == 0x2, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::half2) == 0x4, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.half2/DebuggerProxy
class CORDL_TYPE half2_DebuggerProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr half2_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "half2_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
half2_DebuggerProxy(half2_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "half2_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
half2_DebuggerProxy(half2_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31492};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::half2_DebuggerProxy) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

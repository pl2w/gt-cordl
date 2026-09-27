#pragma once
// IWYU pragma private; include "Unity/Mathematics/half3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__half_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(half3)
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
class half3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct half;
}
// Forward declare root types
namespace Unity::Mathematics {
class half3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct half3;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::half3_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::half3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::half3_DebuggerProxy*, "Unity.Mathematics", "half3/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::half3, "Unity.Mathematics", "half3");
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.half3::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies Unity.Mathematics.half
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.half3
struct CORDL_TYPE half3 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::half3_DebuggerProxy;

/// @brief Field zero, offset 0xffffffff, size 0x6 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::half3  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::half3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::half3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0xb061fe0, size 0x9c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb061fac, size 0x34, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::half3  rhs) ;

/// @brief Method GetHashCode, addr 0xb06207c, size 0x50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb0620cc, size 0xc4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb062190, size 0x1bc, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb061df4, size 0xd8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  v) ;

/// @brief Method .ctor, addr 0xb061de4, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z) ;

static inline ::Unity::Mathematics::half3 getStaticF_zero() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::half3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::half3>* i___System__IEquatable_1___Unity__Mathematics__half3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Explicit, addr 0xb061ecc, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 op_Explicit___Unity__Mathematics__half3(::Unity::Mathematics::float3  v) ;

static inline void setStaticF_zero(::Unity::Mathematics::half3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr half3() ;

// Ctor Parameters [CppParam { name: "x", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None, comment: None }]
constexpr half3(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31495};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x6};

/// @brief Field x, offset: 0x0, size: 0x2, def value: None
 ::Unity::Mathematics::half  x;

/// @brief Field y, offset: 0x2, size: 0x2, def value: None
 ::Unity::Mathematics::half  y;

/// @brief Field z, offset: 0x4, size: 0x2, def value: None
 ::Unity::Mathematics::half  z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::half3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half3, y) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half3, z) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::half3) == 0x6, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.half3/DebuggerProxy
class CORDL_TYPE half3_DebuggerProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr half3_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "half3_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
half3_DebuggerProxy(half3_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "half3_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
half3_DebuggerProxy(half3_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31494};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::half3_DebuggerProxy) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

#pragma once
// IWYU pragma private; include "Unity/Mathematics/int4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int4)
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
struct float4;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
class int4_DebuggerProxy;
}
// Forward declare root types
namespace Unity::Mathematics {
class int4_DebuggerProxy;
}
namespace Unity::Mathematics {
struct int4;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::int4_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::int4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::int4_DebuggerProxy*, "Unity.Mathematics", "int4/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::int4, "Unity.Mathematics", "int4");
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.int4::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int4
struct CORDL_TYPE int4 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::int4_DebuggerProxy;

 __declspec(property(get=get_Item, put=set_Item)) int32_t  Item[];

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_xy)) ::Unity::Mathematics::int2  xy;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_xyz)) ::Unity::Mathematics::int3  xyz;

/// @brief Field zero, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::int4  zero;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_zw)) ::Unity::Mathematics::int2  zw;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::int4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0xb0631a8, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb063164, size 0x44, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::int4  rhs) ;

/// @brief Method GetHashCode, addr 0xb063250, size 0x5c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb0632ac, size 0x1d0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb06347c, size 0x1c4, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb0630b0, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4  v) ;

/// @brief Method .ctor, addr 0xb063094, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  x, int32_t  y, int32_t  z, int32_t  w) ;

/// @brief Method .ctor, addr 0xb0630a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  x, ::Unity::Mathematics::int3  yzw) ;

static inline ::Unity::Mathematics::int4 getStaticF_zero() ;

/// @brief Method get_Item, addr 0xb063154, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Item(int32_t  index) ;

/// @brief Method get_xy, addr 0xb063144, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_xy() ;

/// @brief Method get_xyz, addr 0xb063134, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xyz() ;

/// @brief Method get_zw, addr 0xb06314c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_zw() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::int4>* i___System__IEquatable_1___Unity__Mathematics__int4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Explicit, addr 0xb0630dc, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(::Unity::Mathematics::float4  v) ;

static inline void setStaticF_zero(::Unity::Mathematics::int4  value) ;

/// @brief Method set_Item, addr 0xb06315c, size 0x8, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr int4() ;

// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr int4(int32_t  x, int32_t  y, int32_t  z, int32_t  w) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31503};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 int32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 int32_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 int32_t  z;

/// @brief Field w, offset: 0xc, size: 0x4, def value: None
 int32_t  w;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4, w) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::int4) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.int4/DebuggerProxy
class CORDL_TYPE int4_DebuggerProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr int4_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "int4_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
int4_DebuggerProxy(int4_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "int4_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
int4_DebuggerProxy(int4_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31502};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::int4_DebuggerProxy) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

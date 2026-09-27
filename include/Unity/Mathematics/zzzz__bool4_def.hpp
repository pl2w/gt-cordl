#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool4)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
class bool4_DebuggerProxy;
}
// Forward declare root types
namespace Unity::Mathematics {
class bool4_DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool4;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::bool4_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::bool4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::bool4_DebuggerProxy*, "Unity.Mathematics", "bool4/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::bool4, "Unity.Mathematics", "bool4");
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.bool4::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.bool4
struct CORDL_TYPE bool4 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::bool4_DebuggerProxy;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::bool4>*() ;

/// @brief Method Equals, addr 0xb05d6e4, size 0xac, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb05d698, size 0x4c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::bool4  rhs) ;

/// @brief Method GetHashCode, addr 0xb05d790, size 0x4c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb05d7dc, size 0x1d0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb05d678, size 0x14, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0xb05d664, size 0x14, virtual false, abstract: false, final false
inline void _ctor(bool  x, bool  y, bool  z, bool  w) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::bool4>* i___System__IEquatable_1___Unity__Mathematics__bool4_() ;

/// @brief Method op_BitwiseOr, addr 0xb05d68c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_BitwiseOr(::Unity::Mathematics::bool4  lhs, ::Unity::Mathematics::bool4  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr bool4() ;

// Ctor Parameters [CppParam { name: "x", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "w", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr bool4(bool  x, bool  y, bool  z, bool  w) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31480};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field x, offset: 0x0, size: 0x1, def value: None
 bool  x;

/// @brief Field y, offset: 0x1, size: 0x1, def value: None
 bool  y;

/// @brief Field z, offset: 0x2, size: 0x1, def value: None
 bool  z;

/// @brief Field w, offset: 0x3, size: 0x1, def value: None
 bool  w;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::bool4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4, y) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4, z) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4, w) == 0x3, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::bool4) == 0x4, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.bool4/DebuggerProxy
class CORDL_TYPE bool4_DebuggerProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr bool4_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "bool4_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
bool4_DebuggerProxy(bool4_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "bool4_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
bool4_DebuggerProxy(bool4_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31479};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::bool4_DebuggerProxy) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

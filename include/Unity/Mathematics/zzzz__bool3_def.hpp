#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool3)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
class bool3_DebuggerProxy;
}
// Forward declare root types
namespace Unity::Mathematics {
class bool3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool3;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::bool3_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::bool3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::bool3_DebuggerProxy*, "Unity.Mathematics", "bool3/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::bool3, "Unity.Mathematics", "bool3");
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.bool3::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.bool3
struct CORDL_TYPE bool3 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::bool3_DebuggerProxy;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::bool3>*() ;

/// @brief Method Equals, addr 0xb05d4a8, size 0xa4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb05d46c, size 0x3c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::bool3  rhs) ;

/// @brief Method GetHashCode, addr 0xb05d54c, size 0x60, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb05d5ac, size 0xb8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb05d448, size 0x10, virtual false, abstract: false, final false
inline void _ctor(bool  x, bool  y, bool  z) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::bool3>* i___System__IEquatable_1___Unity__Mathematics__bool3_() ;

/// @brief Method op_BitwiseAnd, addr 0xb05d458, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_BitwiseAnd(::Unity::Mathematics::bool3  lhs, ::Unity::Mathematics::bool3  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr bool3() ;

// Ctor Parameters [CppParam { name: "x", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr bool3(bool  x, bool  y, bool  z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31478};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3};

/// @brief Field x, offset: 0x0, size: 0x1, def value: None
 bool  x;

/// @brief Field y, offset: 0x1, size: 0x1, def value: None
 bool  y;

/// @brief Field z, offset: 0x2, size: 0x1, def value: None
 bool  z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::bool3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3, y) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3, z) == 0x2, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::bool3) == 0x3, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.bool3/DebuggerProxy
class CORDL_TYPE bool3_DebuggerProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr bool3_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "bool3_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
bool3_DebuggerProxy(bool3_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "bool3_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
bool3_DebuggerProxy(bool3_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31477};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::bool3_DebuggerProxy) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

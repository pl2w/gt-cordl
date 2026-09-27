#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool2)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
class bool2_DebuggerProxy;
}
// Forward declare root types
namespace Unity::Mathematics {
class bool2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool2;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::bool2_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::bool2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::bool2_DebuggerProxy*, "Unity.Mathematics", "bool2/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::bool2, "Unity.Mathematics", "bool2");
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.bool2::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.bool2
struct CORDL_TYPE bool2 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::bool2_DebuggerProxy;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::bool2>*() ;

/// @brief Method Equals, addr 0xb05d2ec, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb05d2c0, size 0x2c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::bool2  rhs) ;

/// @brief Method GetHashCode, addr 0xb05d378, size 0x3c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb05d3b4, size 0x94, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb05d2b4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(bool  x, bool  y) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::bool2>* i___System__IEquatable_1___Unity__Mathematics__bool2_() ;

// Ctor Parameters []
// @brief default ctor
constexpr bool2() ;

// Ctor Parameters [CppParam { name: "x", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr bool2(bool  x, bool  y) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31476};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field x, offset: 0x0, size: 0x1, def value: None
 bool  x;

/// @brief Field y, offset: 0x1, size: 0x1, def value: None
 bool  y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::bool2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2, y) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::bool2) == 0x2, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.bool2/DebuggerProxy
class CORDL_TYPE bool2_DebuggerProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr bool2_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "bool2_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
bool2_DebuggerProxy(bool2_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "bool2_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
bool2_DebuggerProxy(bool2_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31475};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::bool2_DebuggerProxy) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

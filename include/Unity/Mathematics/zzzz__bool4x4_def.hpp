#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool4x4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__bool4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool4x4)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct bool4x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::bool4x4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::bool4x4, "Unity.Mathematics", "bool4x4");
// [DefaultMember("Item")]
// [Il2CppEagerStaticClassConstruction]
// Dependencies Unity.Mathematics.bool4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.bool4x4
struct CORDL_TYPE bool4x4 {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool4x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::bool4x4>*() ;

/// @brief Method Equals, addr 0xb05dacc, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb05d9b8, size 0x114, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::bool4x4  rhs) ;

/// @brief Method GetHashCode, addr 0xb05db4c, size 0x16c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb05dcb8, size 0x560, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb05d9ac, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1, ::Unity::Mathematics::bool4  c2, ::Unity::Mathematics::bool4  c3) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool4x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::bool4x4>* i___System__IEquatable_1___Unity__Mathematics__bool4x4_() ;

// Ctor Parameters []
// @brief default ctor
constexpr bool4x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value: None, comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value: None, comment: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value: None, comment: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value: None, comment: None }]
constexpr bool4x4(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1, ::Unity::Mathematics::bool4  c2, ::Unity::Mathematics::bool4  c3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31481};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field c0, offset: 0x0, size: 0x4, def value: None
 ::Unity::Mathematics::bool4  c0;

/// @brief Field c1, offset: 0x4, size: 0x4, def value: None
 ::Unity::Mathematics::bool4  c1;

/// @brief Field c2, offset: 0x8, size: 0x4, def value: None
 ::Unity::Mathematics::bool4  c2;

/// @brief Field c3, offset: 0xc, size: 0x4, def value: None
 ::Unity::Mathematics::bool4  c3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::bool4x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4x4, c1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4x4, c2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4x4, c3) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::bool4x4) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

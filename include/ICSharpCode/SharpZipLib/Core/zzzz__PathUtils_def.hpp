#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/PathUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PathUtils)
namespace ICSharpCode::SharpZipLib::Core {
class PathUtils___c__DisplayClass0_0;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Core {
class PathUtils;
}
namespace ICSharpCode::SharpZipLib::Core {
class PathUtils___c__DisplayClass0_0;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::PathUtils*);
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::PathUtils*, "ICSharpCode.SharpZipLib.Core", "PathUtils");
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0*, "ICSharpCode.SharpZipLib.Core", "PathUtils/<>c__DisplayClass0_0");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.PathUtils
class CORDL_TYPE PathUtils : public ::System::Object {
public:
// Declarations
using __c__DisplayClass0_0 = ::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0;

/// @brief Method DropPathRoot, addr 0x9ffc3fc, size 0x24c, virtual false, abstract: false, final false
static inline ::StringW DropPathRoot(::StringW  path) ;

/// @brief Method GetTempFileName, addr 0x9ffc650, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW GetTempFileName(::StringW  original) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathUtils(PathUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathUtils(PathUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17436};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::PathUtils) == 0x10, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core
// [CompilerGenerated]
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.PathUtils/<>c__DisplayClass0_0
class CORDL_TYPE PathUtils___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field cleanRootSep, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_cleanRootSep, put=__cordl_internal_set_cleanRootSep)) bool  cleanRootSep;

/// @brief Field invalidChars, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_invalidChars, put=__cordl_internal_set_invalidChars)) ::ArrayW<char16_t>  invalidChars;

static inline ::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0* New_ctor() ;

/// @brief Method <DropPathRoot>b__0, addr 0x9ffc730, size 0x7c, virtual false, abstract: false, final false
inline char16_t _DropPathRoot_b__0(char16_t  c, int32_t  i) ;

constexpr bool const& __cordl_internal_get_cleanRootSep() const;

constexpr bool& __cordl_internal_get_cleanRootSep() ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get_invalidChars() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get_invalidChars() ;

constexpr void __cordl_internal_set_cleanRootSep(bool  value) ;

constexpr void __cordl_internal_set_invalidChars(::ArrayW<char16_t>  value) ;

/// @brief Method .ctor, addr 0x9ffc648, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathUtils___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathUtils___c__DisplayClass0_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathUtils___c__DisplayClass0_0(PathUtils___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathUtils___c__DisplayClass0_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathUtils___c__DisplayClass0_0(PathUtils___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17435};

/// @brief Field invalidChars, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<char16_t>  ___invalidChars;

/// @brief Field cleanRootSep, offset: 0x18, size: 0x1, def value: None
 bool  ___cleanRootSep;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0, ___invalidChars) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0, ___cleanRootSep) == 0x18, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0) == 0x20, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core

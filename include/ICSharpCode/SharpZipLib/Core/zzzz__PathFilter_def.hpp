#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/PathFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PathFilter)
namespace ICSharpCode::SharpZipLib::Core {
class IScanFilter;
}
namespace ICSharpCode::SharpZipLib::Core {
class NameFilter;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Core {
class PathFilter;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::PathFilter*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::PathFilter*, "ICSharpCode.SharpZipLib.Core", "PathFilter");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.PathFilter
class CORDL_TYPE PathFilter : public ::System::Object {
public:
// Declarations
/// @brief Field nameFilter_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameFilter_, put=__cordl_internal_set_nameFilter_)) ::ICSharpCode::SharpZipLib::Core::NameFilter*  nameFilter_;

/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Core::IScanFilter"
constexpr operator  ::ICSharpCode::SharpZipLib::Core::IScanFilter*() noexcept;

/// @brief Method IsMatch, addr 0x9ffbb8c, size 0xac, virtual true, abstract: false, final false
inline bool IsMatch(::StringW  name) ;

static inline ::ICSharpCode::SharpZipLib::Core::PathFilter* New_ctor(::StringW  filter) ;

constexpr ::ICSharpCode::SharpZipLib::Core::NameFilter* const& __cordl_internal_get_nameFilter_() const;

constexpr ::ICSharpCode::SharpZipLib::Core::NameFilter*& __cordl_internal_get_nameFilter_() ;

constexpr void __cordl_internal_set_nameFilter_(::ICSharpCode::SharpZipLib::Core::NameFilter*  value) ;

/// @brief Method .ctor, addr 0x9ffa44c, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::StringW  filter) ;

/// @brief Convert to "::ICSharpCode::SharpZipLib::Core::IScanFilter"
constexpr ::ICSharpCode::SharpZipLib::Core::IScanFilter* i___ICSharpCode__SharpZipLib__Core__IScanFilter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathFilter(PathFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathFilter(PathFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17432};

/// @brief Field nameFilter_, offset: 0x10, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::NameFilter*  ___nameFilter_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::PathFilter, ___nameFilter_) == 0x10, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::PathFilter) == 0x18, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core

#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/NameAndSizeFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Core/zzzz__PathFilter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NameAndSizeFilter)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Core {
class NameAndSizeFilter;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter*, "ICSharpCode.SharpZipLib.Core", "NameAndSizeFilter");
// [Obsolete("Use ExtendedPathFilter instead")]
// Dependencies ICSharpCode.SharpZipLib.Core.PathFilter
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.NameAndSizeFilter
class CORDL_TYPE NameAndSizeFilter : public ::ICSharpCode::SharpZipLib::Core::PathFilter {
public:
// Declarations
 __declspec(property(get=get_MaxSize, put=set_MaxSize)) int64_t  MaxSize;

 __declspec(property(get=get_MinSize, put=set_MinSize)) int64_t  MinSize;

/// @brief Field maxSize_, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxSize_, put=__cordl_internal_set_maxSize_)) int64_t  maxSize_;

/// @brief Field minSize_, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_minSize_, put=__cordl_internal_set_minSize_)) int64_t  minSize_;

/// @brief Method IsMatch, addr 0x9ffc34c, size 0xa0, virtual true, abstract: false, final false
inline bool IsMatch(::StringW  name) ;

static inline ::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter* New_ctor(::StringW  filter, int64_t  minSize, int64_t  maxSize) ;

constexpr int64_t const& __cordl_internal_get_maxSize_() const;

constexpr int64_t& __cordl_internal_get_maxSize_() ;

constexpr int64_t const& __cordl_internal_get_minSize_() const;

constexpr int64_t& __cordl_internal_get_minSize_() ;

constexpr void __cordl_internal_set_maxSize_(int64_t  value) ;

constexpr void __cordl_internal_set_minSize_(int64_t  value) ;

/// @brief Method .ctor, addr 0x9ffc244, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  filter, int64_t  minSize, int64_t  maxSize) ;

/// @brief Method get_MaxSize, addr 0x9ffc3f4, size 0x8, virtual false, abstract: false, final false
inline int64_t get_MaxSize() ;

/// @brief Method get_MinSize, addr 0x9ffc3ec, size 0x8, virtual false, abstract: false, final false
inline int64_t get_MinSize() ;

/// @brief Method set_MaxSize, addr 0x9ffc2e8, size 0x64, virtual false, abstract: false, final false
inline void set_MaxSize(int64_t  value) ;

/// @brief Method set_MinSize, addr 0x9ffc284, size 0x64, virtual false, abstract: false, final false
inline void set_MinSize(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NameAndSizeFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NameAndSizeFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NameAndSizeFilter(NameAndSizeFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NameAndSizeFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NameAndSizeFilter(NameAndSizeFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17434};

/// @brief Field minSize_, offset: 0x18, size: 0x8, def value: None
 int64_t  ___minSize_;

/// @brief Field maxSize_, offset: 0x20, size: 0x8, def value: None
 int64_t  ___maxSize_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter, ___minSize_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter, ___maxSize_) == 0x20, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter) == 0x28, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core

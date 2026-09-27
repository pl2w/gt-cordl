#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/NameFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NameFilter)
namespace ICSharpCode::SharpZipLib::Core {
class IScanFilter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Core {
class NameFilter;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::NameFilter*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::NameFilter*, "ICSharpCode.SharpZipLib.Core", "NameFilter");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.NameFilter
class CORDL_TYPE NameFilter : public ::System::Object {
public:
// Declarations
/// @brief Field exclusions_, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_exclusions_, put=__cordl_internal_set_exclusions_)) ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Regex*>*  exclusions_;

/// @brief Field filter_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_filter_, put=__cordl_internal_set_filter_)) ::StringW  filter_;

/// @brief Field inclusions_, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_inclusions_, put=__cordl_internal_set_inclusions_)) ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Regex*>*  inclusions_;

/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Core::IScanFilter"
constexpr operator  ::ICSharpCode::SharpZipLib::Core::IScanFilter*() noexcept;

/// @brief Method Compile, addr 0x9ffb004, size 0x204, virtual false, abstract: false, final false
inline void Compile() ;

/// @brief Method IsExcluded, addr 0x9ffb9fc, size 0x150, virtual false, abstract: false, final false
inline bool IsExcluded(::StringW  name) ;

/// @brief Method IsIncluded, addr 0x9ffb890, size 0x16c, virtual false, abstract: false, final false
inline bool IsIncluded(::StringW  name) ;

/// @brief Method IsMatch, addr 0x9ffbb4c, size 0x40, virtual true, abstract: false, final true
inline bool IsMatch(::StringW  name) ;

/// @brief Method IsValidExpression, addr 0x9ffb208, size 0xd0, virtual false, abstract: false, final false
static inline bool IsValidExpression(::StringW  expression) ;

/// @brief Method IsValidFilterExpression, addr 0x9ffb2d8, size 0x230, virtual false, abstract: false, final false
static inline bool IsValidFilterExpression(::StringW  toTest) ;

static inline ::ICSharpCode::SharpZipLib::Core::NameFilter* New_ctor(::StringW  filter) ;

/// @brief Method SplitQuoted, addr 0x9ffb508, size 0x380, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> SplitQuoted(::StringW  original) ;

/// @brief Method ToString, addr 0x9ffb888, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Regex*>* const& __cordl_internal_get_exclusions_() const;

constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Regex*>*& __cordl_internal_get_exclusions_() ;

constexpr ::StringW const& __cordl_internal_get_filter_() const;

constexpr ::StringW& __cordl_internal_get_filter_() ;

constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Regex*>* const& __cordl_internal_get_inclusions_() const;

constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Regex*>*& __cordl_internal_get_inclusions_() ;

constexpr void __cordl_internal_set_exclusions_(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Regex*>*  value) ;

constexpr void __cordl_internal_set_filter_(::StringW  value) ;

constexpr void __cordl_internal_set_inclusions_(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Regex*>*  value) ;

/// @brief Method .ctor, addr 0x9ffaf3c, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::StringW  filter) ;

/// @brief Convert to "::ICSharpCode::SharpZipLib::Core::IScanFilter"
constexpr ::ICSharpCode::SharpZipLib::Core::IScanFilter* i___ICSharpCode__SharpZipLib__Core__IScanFilter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NameFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NameFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NameFilter(NameFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NameFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NameFilter(NameFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17431};

/// @brief Field filter_, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___filter_;

/// @brief Field inclusions_, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Regex*>*  ___inclusions_;

/// @brief Field exclusions_, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Regex*>*  ___exclusions_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::NameFilter, ___filter_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::NameFilter, ___inclusions_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::NameFilter, ___exclusions_) == 0x20, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::NameFilter) == 0x28, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core

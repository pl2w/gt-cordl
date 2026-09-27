#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/ExtendedPathFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Core/zzzz__PathFilter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExtendedPathFilter)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Core {
class ExtendedPathFilter;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::ExtendedPathFilter*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::ExtendedPathFilter*, "ICSharpCode.SharpZipLib.Core", "ExtendedPathFilter");
// Dependencies ICSharpCode.SharpZipLib.Core.PathFilter, System.DateTime
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.ExtendedPathFilter
class CORDL_TYPE ExtendedPathFilter : public ::ICSharpCode::SharpZipLib::Core::PathFilter {
public:
// Declarations
 __declspec(property(get=get_MaxDate, put=set_MaxDate)) ::System::DateTime  MaxDate;

 __declspec(property(get=get_MaxSize, put=set_MaxSize)) int64_t  MaxSize;

 __declspec(property(get=get_MinDate, put=set_MinDate)) ::System::DateTime  MinDate;

 __declspec(property(get=get_MinSize, put=set_MinSize)) int64_t  MinSize;

/// @brief Field maxDate_, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxDate_, put=__cordl_internal_set_maxDate_)) ::System::DateTime  maxDate_;

/// @brief Field maxSize_, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxSize_, put=__cordl_internal_set_maxSize_)) int64_t  maxSize_;

/// @brief Field minDate_, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_minDate_, put=__cordl_internal_set_minDate_)) ::System::DateTime  minDate_;

/// @brief Field minSize_, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_minSize_, put=__cordl_internal_set_minSize_)) int64_t  minSize_;

/// @brief Method IsMatch, addr 0x9ffc0e0, size 0x144, virtual true, abstract: false, final false
inline bool IsMatch(::StringW  name) ;

static inline ::ICSharpCode::SharpZipLib::Core::ExtendedPathFilter* New_ctor(::StringW  filter, ::System::DateTime  minDate, ::System::DateTime  maxDate) ;

static inline ::ICSharpCode::SharpZipLib::Core::ExtendedPathFilter* New_ctor(::StringW  filter, int64_t  minSize, int64_t  maxSize) ;

static inline ::ICSharpCode::SharpZipLib::Core::ExtendedPathFilter* New_ctor(::StringW  filter, int64_t  minSize, int64_t  maxSize, ::System::DateTime  minDate, ::System::DateTime  maxDate) ;

constexpr ::System::DateTime const& __cordl_internal_get_maxDate_() const;

constexpr ::System::DateTime& __cordl_internal_get_maxDate_() ;

constexpr int64_t const& __cordl_internal_get_maxSize_() const;

constexpr int64_t& __cordl_internal_get_maxSize_() ;

constexpr ::System::DateTime const& __cordl_internal_get_minDate_() const;

constexpr ::System::DateTime& __cordl_internal_get_minDate_() ;

constexpr int64_t const& __cordl_internal_get_minSize_() const;

constexpr int64_t& __cordl_internal_get_minSize_() ;

constexpr void __cordl_internal_set_maxDate_(::System::DateTime  value) ;

constexpr void __cordl_internal_set_maxSize_(int64_t  value) ;

constexpr void __cordl_internal_set_minDate_(::System::DateTime  value) ;

constexpr void __cordl_internal_set_minSize_(int64_t  value) ;

/// @brief Method .ctor, addr 0x9ffbdb0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::StringW  filter, ::System::DateTime  minDate, ::System::DateTime  maxDate) ;

/// @brief Method .ctor, addr 0x9ffbc38, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::StringW  filter, int64_t  minSize, int64_t  maxSize) ;

/// @brief Method .ctor, addr 0x9ffc008, size 0xd8, virtual false, abstract: false, final false
inline void _ctor(::StringW  filter, int64_t  minSize, int64_t  maxSize, ::System::DateTime  minDate, ::System::DateTime  maxDate) ;

/// @brief Method get_MaxDate, addr 0x9ffc23c, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_MaxDate() ;

/// @brief Method get_MaxSize, addr 0x9ffc22c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_MaxSize() ;

/// @brief Method get_MinDate, addr 0x9ffc234, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_MinDate() ;

/// @brief Method get_MinSize, addr 0x9ffc224, size 0x8, virtual false, abstract: false, final false
inline int64_t get_MinSize() ;

/// @brief Method set_MaxDate, addr 0x9ffbf34, size 0xd4, virtual false, abstract: false, final false
inline void set_MaxDate(::System::DateTime  value) ;

/// @brief Method set_MaxSize, addr 0x9ffbd4c, size 0x64, virtual false, abstract: false, final false
inline void set_MaxSize(int64_t  value) ;

/// @brief Method set_MinDate, addr 0x9ffbe60, size 0xd4, virtual false, abstract: false, final false
inline void set_MinDate(::System::DateTime  value) ;

/// @brief Method set_MinSize, addr 0x9ffbce8, size 0x64, virtual false, abstract: false, final false
inline void set_MinSize(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExtendedPathFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExtendedPathFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExtendedPathFilter(ExtendedPathFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedPathFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExtendedPathFilter(ExtendedPathFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17433};

/// @brief Field minSize_, offset: 0x18, size: 0x8, def value: None
 int64_t  ___minSize_;

/// @brief Field maxSize_, offset: 0x20, size: 0x8, def value: None
 int64_t  ___maxSize_;

/// @brief Field minDate_, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  ___minDate_;

/// @brief Field maxDate_, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  ___maxDate_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::ExtendedPathFilter, ___minSize_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::ExtendedPathFilter, ___maxSize_) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::ExtendedPathFilter, ___minDate_) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::ExtendedPathFilter, ___maxDate_) == 0x30, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::ExtendedPathFilter) == 0x38, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core

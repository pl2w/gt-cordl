#pragma once
// IWYU pragma private; include "System/Net/HttpDateParse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpDateParse)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Net {
class HttpDateParse;
}
// Write type traits
MARK_REF_T(::System::Net::HttpDateParse*);
DEFINE_IL2CPP_CLASS(::System::Net::HttpDateParse*, "System.Net", "HttpDateParse");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpDateParse
class CORDL_TYPE HttpDateParse : public ::System::Object {
public:
// Declarations
/// @brief Method MAKE_UPPER, addr 0xac6f718, size 0x84, virtual false, abstract: false, final false
static inline char16_t MAKE_UPPER(char16_t  c) ;

/// @brief Method MapDayMonthToDword, addr 0xac6f79c, size 0x280, virtual false, abstract: false, final false
static inline int32_t MapDayMonthToDword(::ArrayW<char16_t>  lpszDay, int32_t  index) ;

/// @brief Method ParseHttpDate, addr 0xac6fa1c, size 0x45c, virtual false, abstract: false, final false
static inline bool ParseHttpDate(::StringW  DateString, ::by_ref<::System::DateTime>  dtOut) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpDateParse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpDateParse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpDateParse(HttpDateParse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpDateParse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpDateParse(HttpDateParse const& ) = delete;

/// @brief Field BASE_DEC offset 0xffffffff size 0x4
static constexpr int32_t  BASE_DEC{static_cast<int32_t>(0xa)};

/// @brief Field DATE_1123_INDEX_DAY offset 0xffffffff size 0x4
static constexpr int32_t  DATE_1123_INDEX_DAY{static_cast<int32_t>(0x1)};

/// @brief Field DATE_1123_INDEX_HRS offset 0xffffffff size 0x4
static constexpr int32_t  DATE_1123_INDEX_HRS{static_cast<int32_t>(0x4)};

/// @brief Field DATE_1123_INDEX_MINS offset 0xffffffff size 0x4
static constexpr int32_t  DATE_1123_INDEX_MINS{static_cast<int32_t>(0x5)};

/// @brief Field DATE_1123_INDEX_MONTH offset 0xffffffff size 0x4
static constexpr int32_t  DATE_1123_INDEX_MONTH{static_cast<int32_t>(0x2)};

/// @brief Field DATE_1123_INDEX_SECS offset 0xffffffff size 0x4
static constexpr int32_t  DATE_1123_INDEX_SECS{static_cast<int32_t>(0x6)};

/// @brief Field DATE_1123_INDEX_YEAR offset 0xffffffff size 0x4
static constexpr int32_t  DATE_1123_INDEX_YEAR{static_cast<int32_t>(0x3)};

/// @brief Field DATE_ANSI_INDEX_DAY offset 0xffffffff size 0x4
static constexpr int32_t  DATE_ANSI_INDEX_DAY{static_cast<int32_t>(0x2)};

/// @brief Field DATE_ANSI_INDEX_HRS offset 0xffffffff size 0x4
static constexpr int32_t  DATE_ANSI_INDEX_HRS{static_cast<int32_t>(0x3)};

/// @brief Field DATE_ANSI_INDEX_MINS offset 0xffffffff size 0x4
static constexpr int32_t  DATE_ANSI_INDEX_MINS{static_cast<int32_t>(0x4)};

/// @brief Field DATE_ANSI_INDEX_MONTH offset 0xffffffff size 0x4
static constexpr int32_t  DATE_ANSI_INDEX_MONTH{static_cast<int32_t>(0x1)};

/// @brief Field DATE_ANSI_INDEX_SECS offset 0xffffffff size 0x4
static constexpr int32_t  DATE_ANSI_INDEX_SECS{static_cast<int32_t>(0x5)};

/// @brief Field DATE_ANSI_INDEX_YEAR offset 0xffffffff size 0x4
static constexpr int32_t  DATE_ANSI_INDEX_YEAR{static_cast<int32_t>(0x6)};

/// @brief Field DATE_INDEX_DAY_OF_WEEK offset 0xffffffff size 0x4
static constexpr int32_t  DATE_INDEX_DAY_OF_WEEK{static_cast<int32_t>(0x0)};

/// @brief Field DATE_INDEX_LAST offset 0xffffffff size 0x4
static constexpr int32_t  DATE_INDEX_LAST{static_cast<int32_t>(0x7)};

/// @brief Field DATE_INDEX_TZ offset 0xffffffff size 0x4
static constexpr int32_t  DATE_INDEX_TZ{static_cast<int32_t>(0x7)};

/// @brief Field DATE_TOKEN_APRIL offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_APRIL{static_cast<int32_t>(0x4)};

/// @brief Field DATE_TOKEN_AUGUST offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_AUGUST{static_cast<int32_t>(0x8)};

/// @brief Field DATE_TOKEN_DECEMBER offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_DECEMBER{static_cast<int32_t>(0xc)};

/// @brief Field DATE_TOKEN_ERROR offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_ERROR{static_cast<int32_t>(0xfffffc19)};

/// @brief Field DATE_TOKEN_FEBRUARY offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_FEBRUARY{static_cast<int32_t>(0x2)};

/// @brief Field DATE_TOKEN_FRIDAY offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_FRIDAY{static_cast<int32_t>(0x5)};

/// @brief Field DATE_TOKEN_GMT offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_GMT{static_cast<int32_t>(0xfffffc18)};

/// @brief Field DATE_TOKEN_JANUARY offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_JANUARY{static_cast<int32_t>(0x1)};

/// @brief Field DATE_TOKEN_JULY offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_JULY{static_cast<int32_t>(0x7)};

/// @brief Field DATE_TOKEN_JUNE offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_JUNE{static_cast<int32_t>(0x6)};

/// @brief Field DATE_TOKEN_LAST offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_LAST{static_cast<int32_t>(0xfffffc18)};

/// @brief Field DATE_TOKEN_LAST_DAY offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_LAST_DAY{static_cast<int32_t>(0x7)};

/// @brief Field DATE_TOKEN_LAST_MONTH offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_LAST_MONTH{static_cast<int32_t>(0xd)};

/// @brief Field DATE_TOKEN_MAY offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_MAY{static_cast<int32_t>(0x5)};

/// @brief Field DATE_TOKEN_MONDAY offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_MONDAY{static_cast<int32_t>(0x1)};

/// @brief Field DATE_TOKEN_Microsoft offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_Microsoft{static_cast<int32_t>(0x3)};

/// @brief Field DATE_TOKEN_NOVEMBER offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_NOVEMBER{static_cast<int32_t>(0xb)};

/// @brief Field DATE_TOKEN_OCTOBER offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_OCTOBER{static_cast<int32_t>(0xa)};

/// @brief Field DATE_TOKEN_SATURDAY offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_SATURDAY{static_cast<int32_t>(0x6)};

/// @brief Field DATE_TOKEN_SEPTEMBER offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_SEPTEMBER{static_cast<int32_t>(0x9)};

/// @brief Field DATE_TOKEN_SUNDAY offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_SUNDAY{static_cast<int32_t>(0x0)};

/// @brief Field DATE_TOKEN_THURSDAY offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_THURSDAY{static_cast<int32_t>(0x4)};

/// @brief Field DATE_TOKEN_TUESDAY offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_TUESDAY{static_cast<int32_t>(0x2)};

/// @brief Field DATE_TOKEN_WEDNESDAY offset 0xffffffff size 0x4
static constexpr int32_t  DATE_TOKEN_WEDNESDAY{static_cast<int32_t>(0x3)};

/// @brief Field MAX_FIELD_DATE_ENTRIES offset 0xffffffff size 0x4
static constexpr int32_t  MAX_FIELD_DATE_ENTRIES{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10583};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::HttpDateParse) == 0x10, "Size mismatch!");

} // namespace end def System::Net

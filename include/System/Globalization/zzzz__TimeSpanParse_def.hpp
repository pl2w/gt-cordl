#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanParse)
namespace GlobalNamespace {
struct TimeSpanParse_ParseFailureKind;
}
namespace GlobalNamespace {
struct TimeSpanParse_StringParser;
}
namespace GlobalNamespace {
struct TimeSpanParse_TTT;
}
namespace GlobalNamespace {
struct TimeSpanParse_TimeSpanRawInfo;
}
namespace GlobalNamespace {
struct TimeSpanParse_TimeSpanResult;
}
namespace GlobalNamespace {
struct TimeSpanParse_TimeSpanStandardStyles;
}
namespace GlobalNamespace {
struct TimeSpanParse_TimeSpanToken;
}
namespace GlobalNamespace {
struct TimeSpanParse_TimeSpanTokenizer;
}
namespace System::Globalization {
struct TimeSpanStyles;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IFormatProvider;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Globalization {
class TimeSpanParse;
}
// Write type traits
MARK_REF_T(::System::Globalization::TimeSpanParse*);
DEFINE_IL2CPP_CLASS(::System::Globalization::TimeSpanParse*, "System.Globalization", "TimeSpanParse");
// Dependencies System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.TimeSpanParse
class CORDL_TYPE TimeSpanParse : public ::System::Object {
public:
// Declarations
using ParseFailureKind = ::GlobalNamespace::TimeSpanParse_ParseFailureKind;

using StringParser = ::GlobalNamespace::TimeSpanParse_StringParser;

using TTT = ::GlobalNamespace::TimeSpanParse_TTT;

using TimeSpanRawInfo = ::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo;

using TimeSpanResult = ::GlobalNamespace::TimeSpanParse_TimeSpanResult;

using TimeSpanStandardStyles = ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles;

using TimeSpanToken = ::GlobalNamespace::TimeSpanParse_TimeSpanToken;

using TimeSpanTokenizer = ::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer;

/// @brief Method Parse, addr 0xa237db8, size 0x34, virtual false, abstract: false, final false
static inline ::System::TimeSpan Parse(::System::ReadOnlySpan_1<char16_t>  input, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method ParseExactDigits, addr 0xa23c9bc, size 0xc4, virtual false, abstract: false, final false
static inline bool ParseExactDigits(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>  tokenizer, int32_t  minDigitLength, int32_t  maxDigitLength, ::by_ref<int32_t>  zeroes, ::by_ref<int32_t>  result) ;

/// @brief Method ParseExactDigits, addr 0xa23c98c, size 0x30, virtual false, abstract: false, final false
static inline bool ParseExactDigits(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>  tokenizer, int32_t  minDigitLength, ::by_ref<int32_t>  result) ;

/// @brief Method ParseExactLiteral, addr 0xa23ca80, size 0x8c, virtual false, abstract: false, final false
static inline bool ParseExactLiteral(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>  tokenizer, ::System::Text::StringBuilder*  enquotedString) ;

/// @brief Method Pow10, addr 0xa2377e4, size 0x90, virtual false, abstract: false, final false
static inline int64_t Pow10(int32_t  pow) ;

/// @brief Method ProcessTerminalState, addr 0xa238698, size 0x17c, virtual false, abstract: false, final false
static inline bool ProcessTerminalState(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>  raw, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result) ;

/// @brief Method ProcessTerminal_D, addr 0xa238814, size 0x2c8, virtual false, abstract: false, final false
static inline bool ProcessTerminal_D(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>  raw, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result) ;

/// @brief Method ProcessTerminal_DHMSF, addr 0xa23a4b0, size 0x25c, virtual false, abstract: false, final false
static inline bool ProcessTerminal_DHMSF(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>  raw, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result) ;

/// @brief Method ProcessTerminal_HM, addr 0xa238adc, size 0x2c0, virtual false, abstract: false, final false
static inline bool ProcessTerminal_HM(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>  raw, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result) ;

/// @brief Method ProcessTerminal_HMS_F_D, addr 0xa239968, size 0xb48, virtual false, abstract: false, final false
static inline bool ProcessTerminal_HMS_F_D(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>  raw, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result) ;

/// @brief Method ProcessTerminal_HM_S_D, addr 0xa238d9c, size 0xbcc, virtual false, abstract: false, final false
static inline bool ProcessTerminal_HM_S_D(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>  raw, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result) ;

/// @brief Method TryParse, addr 0xa237f84, size 0x44, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<char16_t>  input, ::System::IFormatProvider*  formatProvider, ::by_ref<::System::TimeSpan>  result) ;

/// @brief Method TryParseByFormat, addr 0xa23c2b0, size 0x6d0, virtual false, abstract: false, final false
static inline bool TryParseByFormat(::System::ReadOnlySpan_1<char16_t>  input, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::TimeSpanStyles  styles, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result) ;

/// @brief Method TryParseExact, addr 0xa237fc8, size 0x3c, virtual false, abstract: false, final false
static inline bool TryParseExact(::System::ReadOnlySpan_1<char16_t>  input, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  formatProvider, ::System::Globalization::TimeSpanStyles  styles, ::by_ref<::System::TimeSpan>  result) ;

/// @brief Method TryParseExactTimeSpan, addr 0xa238004, size 0x17c, virtual false, abstract: false, final false
static inline bool TryParseExactTimeSpan(::System::ReadOnlySpan_1<char16_t>  input, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  formatProvider, ::System::Globalization::TimeSpanStyles  styles, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result) ;

/// @brief Method TryParseTimeSpan, addr 0xa237df8, size 0x18c, virtual false, abstract: false, final false
static inline bool TryParseTimeSpan(::System::ReadOnlySpan_1<char16_t>  input, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles  style, ::System::IFormatProvider*  formatProvider, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result) ;

/// @brief Method TryParseTimeSpanConstant, addr 0xa23c27c, size 0x34, virtual false, abstract: false, final false
static inline bool TryParseTimeSpanConstant(::System::ReadOnlySpan_1<char16_t>  input, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result) ;

/// @brief Method TryTimeToTicks, addr 0xa237c0c, size 0x150, virtual false, abstract: false, final false
static inline bool TryTimeToTicks(bool  positive, ::GlobalNamespace::TimeSpanParse_TimeSpanToken  days, ::GlobalNamespace::TimeSpanParse_TimeSpanToken  hours, ::GlobalNamespace::TimeSpanParse_TimeSpanToken  minutes, ::GlobalNamespace::TimeSpanParse_TimeSpanToken  seconds, ::GlobalNamespace::TimeSpanParse_TimeSpanToken  fraction, ::by_ref<int64_t>  result) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanParse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanParse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSpanParse(TimeSpanParse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanParse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSpanParse(TimeSpanParse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6743};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Globalization::TimeSpanParse) == 0x10, "Size mismatch!");

} // namespace end def System::Globalization

#pragma once
// IWYU pragma private; include "System/Buffers/Text/Utf8Parser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Utf8Parser)
namespace GlobalNamespace {
struct Utf8Parser_ComponentParseResult;
}
namespace GlobalNamespace {
struct Utf8Parser_ParseNumberOptions;
}
namespace GlobalNamespace {
struct Utf8Parser_TimeSpanSplitter;
}
namespace System::Buffers::Text {
struct NumberBuffer;
}
namespace System {
struct DateTimeKind;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Buffers::Text {
class Utf8Parser;
}
// Write type traits
MARK_REF_T(::System::Buffers::Text::Utf8Parser*);
DEFINE_IL2CPP_CLASS(::System::Buffers::Text::Utf8Parser*, "System.Buffers.Text", "Utf8Parser");
// Dependencies System.Object
namespace System::Buffers::Text {
// Is value type: false
// CS Name: System.Buffers.Text.Utf8Parser
class CORDL_TYPE Utf8Parser : public ::System::Object {
public:
// Declarations
using ComponentParseResult = ::GlobalNamespace::Utf8Parser_ComponentParseResult;

using ParseNumberOptions = ::GlobalNamespace::Utf8Parser_ParseNumberOptions;

using TimeSpanSplitter = ::GlobalNamespace::Utf8Parser_TimeSpanSplitter;

/// @brief Field s_daysToMonth365, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_daysToMonth365, put=setStaticF_s_daysToMonth365)) ::ArrayW<int32_t>  s_daysToMonth365;

/// @brief Field s_daysToMonth366, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_daysToMonth366, put=setStaticF_s_daysToMonth366)) ::ArrayW<int32_t>  s_daysToMonth366;

/// @brief Method TryCreateDateTime, addr 0xa2794f4, size 0x23c, virtual false, abstract: false, final false
static inline bool TryCreateDateTime(int32_t  year, int32_t  month, int32_t  day, int32_t  hour, int32_t  minute, int32_t  second, int32_t  fraction, ::System::DateTimeKind  kind, ::by_ref<::System::DateTime>  value) ;

/// @brief Method TryCreateDateTimeOffset, addr 0xa2790c8, size 0x18c, virtual false, abstract: false, final false
static inline bool TryCreateDateTimeOffset(::System::DateTime  dateTime, bool  offsetNegative, int32_t  offsetHours, int32_t  offsetMinutes, ::by_ref<::System::DateTimeOffset>  value) ;

/// @brief Method TryCreateDateTimeOffset, addr 0xa2793e0, size 0x114, virtual false, abstract: false, final false
static inline bool TryCreateDateTimeOffset(int32_t  year, int32_t  month, int32_t  day, int32_t  hour, int32_t  minute, int32_t  second, int32_t  fraction, bool  offsetNegative, int32_t  offsetHours, int32_t  offsetMinutes, ::by_ref<::System::DateTimeOffset>  value) ;

/// @brief Method TryCreateDateTimeOffsetInterpretingDataAsLocalTime, addr 0xa279254, size 0x18c, virtual false, abstract: false, final false
static inline bool TryCreateDateTimeOffsetInterpretingDataAsLocalTime(int32_t  year, int32_t  month, int32_t  day, int32_t  hour, int32_t  minute, int32_t  second, int32_t  fraction, ::by_ref<::System::DateTimeOffset>  value) ;

/// @brief Method TryCreateTimeSpan, addr 0xa27dc88, size 0xb0, virtual false, abstract: false, final false
static inline bool TryCreateTimeSpan(bool  isNegative, uint32_t  days, uint32_t  hours, uint32_t  minutes, uint32_t  seconds, uint32_t  fraction, ::by_ref<::System::TimeSpan>  timeSpan) ;

/// @brief Method TryParse, addr 0xa27a03c, size 0x290, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::DateTime>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat) ;

/// @brief Method TryParse, addr 0xa27a2cc, size 0x1e8, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::DateTimeOffset>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat) ;

/// @brief Method TryParse, addr 0xa27a4b4, size 0x1dc, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::Decimal>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat) ;

/// @brief Method TryParse, addr 0xa27b1fc, size 0x190, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::Guid>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat) ;

/// @brief Method TryParse, addr 0xa27e568, size 0x16c, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::TimeSpan>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat) ;

/// @brief Method TryParse, addr 0xa27b080, size 0xf4, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<double_t>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat) ;

/// @brief Method TryParse, addr 0xa27ad88, size 0x128, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<float_t>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat) ;

/// @brief Method TryParse, addr 0xa27c83c, size 0x1ac, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat) ;

/// @brief Method TryParse, addr 0xa27c9e8, size 0x1ac, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int64_t>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat) ;

/// [CLSCompliant(false)]
/// @brief Method TryParse, addr 0xa27d434, size 0x1a8, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint32_t>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat) ;

/// [CLSCompliant(false)]
/// @brief Method TryParse, addr 0xa27d5dc, size 0x1a8, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint64_t>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat) ;

/// @brief Method TryParseAsSpecialFloatingPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool TryParseAsSpecialFloatingPoint(::System::ReadOnlySpan_1<uint8_t>  source, T  positiveInfinity, T  negativeInfinity, T  nan, ::by_ref<T>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseDateTimeG, addr 0xa278e68, size 0x260, virtual false, abstract: false, final false
static inline bool TryParseDateTimeG(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::DateTime>  value, ::by_ref<::System::DateTimeOffset>  valueAsOffset, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseDateTimeOffsetDefault, addr 0xa278c84, size 0x1e4, virtual false, abstract: false, final false
static inline bool TryParseDateTimeOffsetDefault(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::DateTimeOffset>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseDateTimeOffsetO, addr 0xa279730, size 0x428, virtual false, abstract: false, final false
static inline bool TryParseDateTimeOffsetO(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::DateTimeOffset>  value, ::by_ref<int32_t>  bytesConsumed, ::by_ref<::System::DateTimeKind>  kind) ;

/// @brief Method TryParseDateTimeOffsetR, addr 0xa279b58, size 0x4e4, virtual false, abstract: false, final false
static inline bool TryParseDateTimeOffsetR(::System::ReadOnlySpan_1<uint8_t>  source, uint32_t  caseFlipXorMask, ::by_ref<::System::DateTimeOffset>  dateTimeOffset, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseGuidCore, addr 0xa27b38c, size 0x384, virtual false, abstract: false, final false
static inline bool TryParseGuidCore(::System::ReadOnlySpan_1<uint8_t>  source, bool  ends, char16_t  begin, char16_t  end, ::by_ref<::System::Guid>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseGuidN, addr 0xa27b710, size 0x2a4, virtual false, abstract: false, final false
static inline bool TryParseGuidN(::System::ReadOnlySpan_1<uint8_t>  text, ::by_ref<::System::Guid>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseInt32D, addr 0xa27be74, size 0x3a0, virtual false, abstract: false, final false
static inline bool TryParseInt32D(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseInt32N, addr 0xa27c420, size 0x208, virtual false, abstract: false, final false
static inline bool TryParseInt32N(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseInt64D, addr 0xa27c214, size 0x20c, virtual false, abstract: false, final false
static inline bool TryParseInt64D(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int64_t>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseInt64N, addr 0xa27c628, size 0x214, virtual false, abstract: false, final false
static inline bool TryParseInt64N(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int64_t>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseNormalAsFloatingPoint, addr 0xa27aeb0, size 0x1d0, virtual false, abstract: false, final false
static inline bool TryParseNormalAsFloatingPoint(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<double_t>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat) ;

/// @brief Method TryParseNumber, addr 0xa27a690, size 0x524, virtual false, abstract: false, final false
static inline bool TryParseNumber(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::Buffers::Text::NumberBuffer>  number, ::by_ref<int32_t>  bytesConsumed, ::GlobalNamespace::Utf8Parser_ParseNumberOptions  options, ::by_ref<bool>  textUsedExponentNotation) ;

/// @brief Method TryParseTimeSpanBigG, addr 0xa27d784, size 0x398, virtual false, abstract: false, final false
static inline bool TryParseTimeSpanBigG(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::TimeSpan>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseTimeSpanC, addr 0xa27dd38, size 0x2f8, virtual false, abstract: false, final false
static inline bool TryParseTimeSpanC(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::TimeSpan>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseTimeSpanFraction, addr 0xa27db1c, size 0x16c, virtual false, abstract: false, final false
static inline bool TryParseTimeSpanFraction(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint32_t>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseTimeSpanLittleG, addr 0xa27e2c0, size 0x2a8, virtual false, abstract: false, final false
static inline bool TryParseTimeSpanLittleG(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::TimeSpan>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseUInt16X, addr 0xa27bb4c, size 0x190, virtual false, abstract: false, final false
static inline bool TryParseUInt16X(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint16_t>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseUInt32D, addr 0xa27cb94, size 0x36c, virtual false, abstract: false, final false
static inline bool TryParseUInt32D(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint32_t>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseUInt32N, addr 0xa27d050, size 0x1f0, virtual false, abstract: false, final false
static inline bool TryParseUInt32N(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint32_t>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseUInt32X, addr 0xa27b9b4, size 0x198, virtual false, abstract: false, final false
static inline bool TryParseUInt32X(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint32_t>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseUInt64D, addr 0xa27cf00, size 0x150, virtual false, abstract: false, final false
static inline bool TryParseUInt64D(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint64_t>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseUInt64N, addr 0xa27d240, size 0x1f4, virtual false, abstract: false, final false
static inline bool TryParseUInt64N(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint64_t>  value, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method TryParseUInt64X, addr 0xa27bcdc, size 0x198, virtual false, abstract: false, final false
static inline bool TryParseUInt64X(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint64_t>  value, ::by_ref<int32_t>  bytesConsumed) ;

static inline ::ArrayW<int32_t> getStaticF_s_daysToMonth365() ;

static inline ::ArrayW<int32_t> getStaticF_s_daysToMonth366() ;

static inline void setStaticF_s_daysToMonth365(::ArrayW<int32_t>  value) ;

static inline void setStaticF_s_daysToMonth366(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utf8Parser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utf8Parser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utf8Parser(Utf8Parser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utf8Parser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utf8Parser(Utf8Parser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6982};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Buffers::Text::Utf8Parser) == 0x10, "Size mismatch!");

} // namespace end def System::Buffers::Text

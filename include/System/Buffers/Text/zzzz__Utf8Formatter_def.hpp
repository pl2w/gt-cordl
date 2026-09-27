#pragma once
// IWYU pragma private; include "System/Buffers/Text/Utf8Formatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Utf8Formatter)
namespace GlobalNamespace {
struct Utf8Formatter_DecomposedGuid;
}
namespace System::Buffers::Text {
struct NumberBuffer;
}
namespace System::Buffers {
struct StandardFormat;
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
struct Span_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Buffers::Text {
class Utf8Formatter;
}
// Write type traits
MARK_REF_T(::System::Buffers::Text::Utf8Formatter*);
DEFINE_IL2CPP_CLASS(::System::Buffers::Text::Utf8Formatter*, "System.Buffers.Text", "Utf8Formatter");
// Dependencies System.IFormattable, System.Object
namespace System::Buffers::Text {
// Is value type: false
// CS Name: System.Buffers.Text.Utf8Formatter
class CORDL_TYPE Utf8Formatter : public ::System::Object {
public:
// Declarations
using DecomposedGuid = ::GlobalNamespace::Utf8Formatter_DecomposedGuid;

/// @brief Field DayAbbreviations, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DayAbbreviations, put=setStaticF_DayAbbreviations)) ::ArrayW<uint32_t>  DayAbbreviations;

/// @brief Field DayAbbreviationsLowercase, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DayAbbreviationsLowercase, put=setStaticF_DayAbbreviationsLowercase)) ::ArrayW<uint32_t>  DayAbbreviationsLowercase;

/// @brief Field MonthAbbreviations, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MonthAbbreviations, put=setStaticF_MonthAbbreviations)) ::ArrayW<uint32_t>  MonthAbbreviations;

/// @brief Field MonthAbbreviationsLowercase, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MonthAbbreviationsLowercase, put=setStaticF_MonthAbbreviationsLowercase)) ::ArrayW<uint32_t>  MonthAbbreviationsLowercase;

/// @brief Method TryFormat, addr 0xa274230, size 0x1f4, virtual false, abstract: false, final false
static inline bool TryFormat(::System::DateTime  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// @brief Method TryFormat, addr 0xa273f80, size 0x2b0, virtual false, abstract: false, final false
static inline bool TryFormat(::System::DateTimeOffset  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// @brief Method TryFormat, addr 0xa274c90, size 0x330, virtual false, abstract: false, final false
static inline bool TryFormat(::System::Decimal  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// @brief Method TryFormat, addr 0xa275438, size 0x624, virtual false, abstract: false, final false
static inline bool TryFormat(::System::Guid  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// @brief Method TryFormat, addr 0xa2782c8, size 0x798, virtual false, abstract: false, final false
static inline bool TryFormat(::System::TimeSpan  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// @brief Method TryFormat, addr 0xa272f1c, size 0x2a8, virtual false, abstract: false, final false
static inline bool TryFormat(bool  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// @brief Method TryFormat, addr 0xa2752f0, size 0xa4, virtual false, abstract: false, final false
static inline bool TryFormat(double_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// @brief Method TryFormat, addr 0xa275394, size 0xa4, virtual false, abstract: false, final false
static inline bool TryFormat(float_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// @brief Method TryFormat, addr 0xa278014, size 0x8c, virtual false, abstract: false, final false
static inline bool TryFormat(int16_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// @brief Method TryFormat, addr 0xa278128, size 0x8c, virtual false, abstract: false, final false
static inline bool TryFormat(int32_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// @brief Method TryFormat, addr 0xa27823c, size 0x8c, virtual false, abstract: false, final false
static inline bool TryFormat(int64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// [CLSCompliant(false)]
/// @brief Method TryFormat, addr 0xa277f00, size 0x8c, virtual false, abstract: false, final false
static inline bool TryFormat(int8_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// [CLSCompliant(false)]
/// @brief Method TryFormat, addr 0xa277f8c, size 0x88, virtual false, abstract: false, final false
static inline bool TryFormat(uint16_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// [CLSCompliant(false)]
/// @brief Method TryFormat, addr 0xa2780a0, size 0x88, virtual false, abstract: false, final false
static inline bool TryFormat(uint32_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// [CLSCompliant(false)]
/// @brief Method TryFormat, addr 0xa2781b4, size 0x88, virtual false, abstract: false, final false
static inline bool TryFormat(uint64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// @brief Method TryFormat, addr 0xa277e78, size 0x88, virtual false, abstract: false, final false
static inline bool TryFormat(uint8_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// @brief Method TryFormatDateTimeG, addr 0xa2731c4, size 0x3a0, virtual false, abstract: false, final false
static inline bool TryFormatDateTimeG(::System::DateTime  value, ::System::TimeSpan  offset, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatDateTimeL, addr 0xa273564, size 0x2a0, virtual false, abstract: false, final false
static inline bool TryFormatDateTimeL(::System::DateTime  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatDateTimeO, addr 0xa273804, size 0x4dc, virtual false, abstract: false, final false
static inline bool TryFormatDateTimeO(::System::DateTime  value, ::System::TimeSpan  offset, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatDateTimeR, addr 0xa273ce0, size 0x2a0, virtual false, abstract: false, final false
static inline bool TryFormatDateTimeR(::System::DateTime  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatDecimalE, addr 0xa274424, size 0x28c, virtual false, abstract: false, final false
static inline bool TryFormatDecimalE(::by_ref<::System::Buffers::Text::NumberBuffer>  number, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, uint8_t  precision, uint8_t  exponentSymbol) ;

/// @brief Method TryFormatDecimalF, addr 0xa2746f0, size 0x2d0, virtual false, abstract: false, final false
static inline bool TryFormatDecimalF(::by_ref<::System::Buffers::Text::NumberBuffer>  number, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, uint8_t  precision) ;

/// @brief Method TryFormatDecimalG, addr 0xa2749c0, size 0x260, virtual false, abstract: false, final false
static inline bool TryFormatDecimalG(::by_ref<::System::Buffers::Text::NumberBuffer>  number, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatFloatingPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IFormattable*>)
static inline bool TryFormatFloatingPoint(T  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// @brief Method TryFormatInt32MultipleDigits, addr 0xa2769cc, size 0x1ec, virtual false, abstract: false, final false
static inline bool TryFormatInt32MultipleDigits(int32_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatInt64, addr 0xa2771d0, size 0x324, virtual false, abstract: false, final false
static inline bool TryFormatInt64(int64_t  value, uint64_t  mask, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// @brief Method TryFormatInt64D, addr 0xa275a5c, size 0x8c, virtual false, abstract: false, final false
static inline bool TryFormatInt64D(int64_t  value, uint8_t  precision, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatInt64Default, addr 0xa275dd4, size 0x210, virtual false, abstract: false, final false
static inline bool TryFormatInt64Default(int64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatInt64LessThanNegativeBillionMaxUInt, addr 0xa276718, size 0x2b4, virtual false, abstract: false, final false
static inline bool TryFormatInt64LessThanNegativeBillionMaxUInt(int64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatInt64MoreThanNegativeBillionMaxUInt, addr 0xa276224, size 0x274, virtual false, abstract: false, final false
static inline bool TryFormatInt64MoreThanNegativeBillionMaxUInt(int64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatInt64MultipleDigits, addr 0xa276bb8, size 0x260, virtual false, abstract: false, final false
static inline bool TryFormatInt64MultipleDigits(int64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatInt64N, addr 0xa276e18, size 0x8c, virtual false, abstract: false, final false
static inline bool TryFormatInt64N(int64_t  value, uint8_t  precision, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatUInt32MultipleDigits, addr 0xa277878, size 0x184, virtual false, abstract: false, final false
static inline bool TryFormatUInt32MultipleDigits(uint32_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatUInt32SingleDigit, addr 0xa277804, size 0x74, virtual false, abstract: false, final false
static inline bool TryFormatUInt32SingleDigit(uint32_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatUInt64, addr 0xa277bf4, size 0x284, virtual false, abstract: false, final false
static inline bool TryFormatUInt64(uint64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format) ;

/// @brief Method TryFormatUInt64D, addr 0xa275ae8, size 0x2ec, virtual false, abstract: false, final false
static inline bool TryFormatUInt64D(uint64_t  value, uint8_t  precision, ::System::Span_1<uint8_t>  destination, bool  insertNegationSign, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatUInt64Default, addr 0xa277660, size 0x1a4, virtual false, abstract: false, final false
static inline bool TryFormatUInt64Default(uint64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatUInt64LessThanBillionMaxUInt, addr 0xa275fe4, size 0x240, virtual false, abstract: false, final false
static inline bool TryFormatUInt64LessThanBillionMaxUInt(uint64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatUInt64MoreThanBillionMaxUInt, addr 0xa276498, size 0x280, virtual false, abstract: false, final false
static inline bool TryFormatUInt64MoreThanBillionMaxUInt(uint64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatUInt64MultipleDigits, addr 0xa2779fc, size 0x1f8, virtual false, abstract: false, final false
static inline bool TryFormatUInt64MultipleDigits(uint64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatUInt64N, addr 0xa276ea4, size 0x32c, virtual false, abstract: false, final false
static inline bool TryFormatUInt64N(uint64_t  value, uint8_t  precision, ::System::Span_1<uint8_t>  destination, bool  insertNegationSign, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryFormatUInt64X, addr 0xa2774f4, size 0x16c, virtual false, abstract: false, final false
static inline bool TryFormatUInt64X(uint64_t  value, uint8_t  precision, bool  useLower, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

static inline ::ArrayW<uint32_t> getStaticF_DayAbbreviations() ;

static inline ::ArrayW<uint32_t> getStaticF_DayAbbreviationsLowercase() ;

static inline ::ArrayW<uint32_t> getStaticF_MonthAbbreviations() ;

static inline ::ArrayW<uint32_t> getStaticF_MonthAbbreviationsLowercase() ;

static inline void setStaticF_DayAbbreviations(::ArrayW<uint32_t>  value) ;

static inline void setStaticF_DayAbbreviationsLowercase(::ArrayW<uint32_t>  value) ;

static inline void setStaticF_MonthAbbreviations(::ArrayW<uint32_t>  value) ;

static inline void setStaticF_MonthAbbreviationsLowercase(::ArrayW<uint32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utf8Formatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utf8Formatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utf8Formatter(Utf8Formatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utf8Formatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utf8Formatter(Utf8Formatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6977};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Buffers::Text::Utf8Formatter) == 0x10, "Size mismatch!");

} // namespace end def System::Buffers::Text

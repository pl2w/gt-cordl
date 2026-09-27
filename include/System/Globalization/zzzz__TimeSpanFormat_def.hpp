#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__TimeSpanFormat_FormatLiterals_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanFormat)
namespace GlobalNamespace {
struct TimeSpanFormat_FormatLiterals;
}
namespace GlobalNamespace {
struct TimeSpanFormat_Pattern;
}
namespace System::Globalization {
class DateTimeFormatInfo;
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
template<typename T>
struct Span_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Globalization {
class TimeSpanFormat;
}
// Write type traits
MARK_REF_T(::System::Globalization::TimeSpanFormat*);
DEFINE_IL2CPP_CLASS(::System::Globalization::TimeSpanFormat*, "System.Globalization", "TimeSpanFormat");
// Dependencies System.Globalization.TimeSpanFormat::FormatLiterals, System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.TimeSpanFormat
class CORDL_TYPE TimeSpanFormat : public ::System::Object {
public:
// Declarations
using FormatLiterals = ::GlobalNamespace::TimeSpanFormat_FormatLiterals;

using Pattern = ::GlobalNamespace::TimeSpanFormat_Pattern;

/// @brief Field NegativeInvariantFormatLiterals, offset 0xffffffff, size 0x28 
 __declspec(property(get=getStaticF_NegativeInvariantFormatLiterals, put=setStaticF_NegativeInvariantFormatLiterals)) ::GlobalNamespace::TimeSpanFormat_FormatLiterals  NegativeInvariantFormatLiterals;

/// @brief Field PositiveInvariantFormatLiterals, offset 0xffffffff, size 0x28 
 __declspec(property(get=getStaticF_PositiveInvariantFormatLiterals, put=setStaticF_PositiveInvariantFormatLiterals)) ::GlobalNamespace::TimeSpanFormat_FormatLiterals  PositiveInvariantFormatLiterals;

/// @brief Method AppendNonNegativeInt32, addr 0xa2362d4, size 0x104, virtual false, abstract: false, final false
static inline void AppendNonNegativeInt32(::System::Text::StringBuilder*  sb, int32_t  n, int32_t  digits) ;

/// @brief Method Format, addr 0xa2363d8, size 0xb8, virtual false, abstract: false, final false
static inline ::StringW Format(::System::TimeSpan  value, ::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method FormatCustomized, addr 0xa236d80, size 0x6cc, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* FormatCustomized(::System::TimeSpan  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Text::StringBuilder*  result) ;

/// @brief Method FormatStandard, addr 0xa2368a4, size 0x4dc, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* FormatStandard(::System::TimeSpan  value, bool  isInvariant, ::System::ReadOnlySpan_1<char16_t>  format, ::GlobalNamespace::TimeSpanFormat_Pattern  pattern) ;

/// @brief Method FormatToBuilder, addr 0xa236490, size 0x2f4, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* FormatToBuilder(::System::TimeSpan  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method TryFormat, addr 0xa236784, size 0x120, virtual false, abstract: false, final false
static inline bool TryFormat(::System::TimeSpan  value, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  formatProvider) ;

static inline ::GlobalNamespace::TimeSpanFormat_FormatLiterals getStaticF_NegativeInvariantFormatLiterals() ;

static inline ::GlobalNamespace::TimeSpanFormat_FormatLiterals getStaticF_PositiveInvariantFormatLiterals() ;

static inline void setStaticF_NegativeInvariantFormatLiterals(::GlobalNamespace::TimeSpanFormat_FormatLiterals  value) ;

static inline void setStaticF_PositiveInvariantFormatLiterals(::GlobalNamespace::TimeSpanFormat_FormatLiterals  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanFormat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanFormat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSpanFormat(TimeSpanFormat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanFormat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSpanFormat(TimeSpanFormat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6734};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Globalization::TimeSpanFormat) == 0x10, "Size mismatch!");

} // namespace end def System::Globalization

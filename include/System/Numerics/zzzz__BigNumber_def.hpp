#pragma once
// IWYU pragma private; include "System/Numerics/BigNumber.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BigNumber)
namespace GlobalNamespace {
struct BigNumber_BigNumberBuffer;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System::Numerics {
struct BigInteger;
}
namespace System {
class ArgumentException;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Numerics {
class BigNumber;
}
// Write type traits
MARK_REF_T(::System::Numerics::BigNumber*);
DEFINE_IL2CPP_CLASS(::System::Numerics::BigNumber*, "System.Numerics", "BigNumber");
// Dependencies System.Object
namespace System::Numerics {
// Is value type: false
// CS Name: System.Numerics.BigNumber
class CORDL_TYPE BigNumber : public ::System::Object {
public:
// Declarations
using BigNumberBuffer = ::GlobalNamespace::BigNumber_BigNumberBuffer;

/// @brief Method FormatBigInteger, addr 0xa9fda48, size 0xb6c, virtual false, abstract: false, final false
static inline ::StringW FormatBigInteger(bool  targetSpan, ::System::Numerics::BigInteger  value, ::StringW  formatString, ::System::ReadOnlySpan_1<char16_t>  formatSpan, ::System::Globalization::NumberFormatInfo*  info, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::by_ref<bool>  spanSuccess) ;

/// @brief Method FormatBigInteger, addr 0xa9f7c5c, size 0xac, virtual false, abstract: false, final false
static inline ::StringW FormatBigInteger(::System::Numerics::BigInteger  value, ::StringW  format, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method FormatBigIntegerToHex, addr 0xa9fd070, size 0x638, virtual false, abstract: false, final false
static inline ::StringW FormatBigIntegerToHex(bool  targetSpan, ::System::Numerics::BigInteger  value, char16_t  format, int32_t  digits, ::System::Globalization::NumberFormatInfo*  info, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::by_ref<bool>  spanSuccess) ;

/// @brief Method HexNumberToBigInteger, addr 0xa9fca64, size 0x1b8, virtual false, abstract: false, final false
static inline bool HexNumberToBigInteger(::by_ref<::GlobalNamespace::BigNumber_BigNumberBuffer>  number, ::by_ref<::System::Numerics::BigInteger>  value) ;

/// @brief Method NumberToBigInteger, addr 0xa9fcc1c, size 0x228, virtual false, abstract: false, final false
static inline bool NumberToBigInteger(::by_ref<::GlobalNamespace::BigNumber_BigNumberBuffer>  number, ::by_ref<::System::Numerics::BigInteger>  value) ;

/// @brief Method ParseBigInteger, addr 0xa9f6610, size 0xac, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger ParseBigInteger(::StringW  value, ::System::Globalization::NumberStyles  style, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method ParseBigInteger, addr 0xa9fce44, size 0x13c, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger ParseBigInteger(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  style, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method ParseFormatSpecifier, addr 0xa9fcf80, size 0xf0, virtual false, abstract: false, final false
static inline char16_t ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t>  format, ::by_ref<int32_t>  digits) ;

/// @brief Method TryParseBigInteger, addr 0xa9fc7a8, size 0x154, virtual false, abstract: false, final false
static inline bool TryParseBigInteger(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  style, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<::System::Numerics::BigInteger>  result) ;

/// @brief Method TryValidateParseStyleInteger, addr 0xa9fc6a8, size 0x100, virtual false, abstract: false, final false
static inline bool TryValidateParseStyleInteger(::System::Globalization::NumberStyles  style, ::by_ref<::System::ArgumentException*>  e) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BigNumber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BigNumber", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BigNumber(BigNumber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BigNumber", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BigNumber(BigNumber const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31673};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Numerics::BigNumber) == 0x10, "Size mismatch!");

} // namespace end def System::Numerics

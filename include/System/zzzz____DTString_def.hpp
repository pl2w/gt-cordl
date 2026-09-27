#pragma once
// IWYU pragma private; include "System/__DTString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(__DTString)
namespace System::Globalization {
class CompareInfo;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System {
struct DTSubString;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
struct TokenType;
}
// Forward declare root types
namespace System {
struct __DTString;
}
// Write type traits
MARK_VAL_T(::System::__DTString);
DEFINE_IL2CPP_CLASS(::System::__DTString, "System", "__DTString");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies System.ReadOnlySpan`1<T>
namespace System {
// Is value type: true
// CS Name: System.__DTString
struct CORDL_TYPE __DTString {
public:
// Declarations
 __declspec(property(get=get_CompareInfo)) ::System::Globalization::CompareInfo*  CompareInfo;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Field WhiteSpaceChecks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WhiteSpaceChecks, put=setStaticF_WhiteSpaceChecks)) ::ArrayW<char16_t>  WhiteSpaceChecks;

/// @brief Method Advance, addr 0xa2d3814, size 0xb8, virtual false, abstract: false, final false
inline bool Advance(int32_t  count) ;

/// @brief Method AtEnd, addr 0xa2d3794, size 0x80, virtual false, abstract: false, final false
inline bool AtEnd() ;

/// @brief Method ConsumeSubString, addr 0xa2d5154, size 0xb0, virtual false, abstract: false, final false
inline void ConsumeSubString(::System::DTSubString  sub) ;

/// @brief Method GetChar, addr 0xa2d48b4, size 0x24, virtual false, abstract: false, final false
inline char16_t GetChar() ;

/// @brief Method GetDigit, addr 0xa2d48d8, size 0x28, virtual false, abstract: false, final false
inline int32_t GetDigit() ;

/// @brief Method GetNext, addr 0xa2d36e8, size 0xac, virtual false, abstract: false, final false
inline bool GetNext() ;

/// @brief Method GetNextDigit, addr 0xa2d47d8, size 0xdc, virtual false, abstract: false, final false
inline bool GetNextDigit() ;

/// @brief Method GetRegularToken, addr 0xa2d38cc, size 0x330, virtual false, abstract: false, final false
inline void GetRegularToken(::by_ref<::System::TokenType>  tokenType, ::by_ref<int32_t>  tokenValue, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method GetRepeatCount, addr 0xa2d46fc, size 0xdc, virtual false, abstract: false, final false
inline int32_t GetRepeatCount() ;

/// @brief Method GetSeparatorToken, addr 0xa2d3bfc, size 0x104, virtual false, abstract: false, final false
inline ::System::TokenType GetSeparatorToken(::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  indexBeforeSeparator, ::by_ref<char16_t>  charBeforeSeparator) ;

/// @brief Method GetSubString, addr 0xa2d4fdc, size 0x178, virtual false, abstract: false, final false
inline ::System::DTSubString GetSubString() ;

/// @brief Method Match, addr 0xa2d452c, size 0xd4, virtual false, abstract: false, final false
inline bool Match(char16_t  ch) ;

/// @brief Method Match, addr 0xa2d43d8, size 0x154, virtual false, abstract: false, final false
inline bool Match(::StringW  str) ;

/// @brief Method MatchLongestWords, addr 0xa2d4600, size 0xfc, virtual false, abstract: false, final false
inline int32_t MatchLongestWords(::ArrayW<::StringW>  words, ::by_ref<int32_t>  maxMatchStrLen) ;

/// @brief Method MatchSpecifiedWord, addr 0xa2d3e5c, size 0x128, virtual false, abstract: false, final false
inline bool MatchSpecifiedWord(::StringW  target) ;

/// @brief Method MatchSpecifiedWords, addr 0xa2d3f84, size 0x454, virtual false, abstract: false, final false
inline bool MatchSpecifiedWords(::StringW  target, bool  checkWordBoundary, ::by_ref<int32_t>  matchLength) ;

/// @brief Method RemoveLeadingInQuoteSpaces, addr 0xa2d4d50, size 0x28c, virtual false, abstract: false, final false
inline void RemoveLeadingInQuoteSpaces() ;

/// @brief Method RemoveTrailingInQuoteSpaces, addr 0xa2d4b28, size 0x228, virtual false, abstract: false, final false
inline void RemoveTrailingInQuoteSpaces() ;

/// @brief Method SkipWhiteSpaceCurrent, addr 0xa2d3d00, size 0x15c, virtual false, abstract: false, final false
inline bool SkipWhiteSpaceCurrent() ;

/// @brief Method SkipWhiteSpaces, addr 0xa2d4900, size 0xec, virtual false, abstract: false, final false
inline void SkipWhiteSpaces() ;

/// @brief Method TrimTail, addr 0xa2d49ec, size 0x13c, virtual false, abstract: false, final false
inline void TrimTail() ;

/// @brief Method .ctor, addr 0xa2d3618, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::System::ReadOnlySpan_1<char16_t>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method .ctor, addr 0xa2d358c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::ReadOnlySpan_1<char16_t>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi, bool  checkDigitToken) ;

static inline ::ArrayW<char16_t> getStaticF_WhiteSpaceChecks() ;

/// @brief Method get_CompareInfo, addr 0xa2d36e0, size 0x8, virtual false, abstract: false, final false
inline ::System::Globalization::CompareInfo* get_CompareInfo() ;

/// @brief Method get_Length, addr 0xa2d3550, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_Length() ;

static inline void setStaticF_WhiteSpaceChecks(::ArrayW<char16_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr __DTString() ;

// Ctor Parameters [CppParam { name: "Value", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_current", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_info", ty: "::System::Globalization::CompareInfo*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_checkDigitToken", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr __DTString(::System::ReadOnlySpan_1<char16_t>  Value, int32_t  Index, char16_t  m_current, ::System::Globalization::CompareInfo*  m_info, bool  m_checkDigitToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5497};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Value, offset: 0x0, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  Value;

/// @brief Field Index, offset: 0x10, size: 0x4, def value: None
 int32_t  Index;

/// @brief Field m_current, offset: 0x14, size: 0x2, def value: None
 char16_t  m_current;

/// @brief Field m_info, offset: 0x18, size: 0x8, def value: None
 ::System::Globalization::CompareInfo*  m_info;

/// @brief Field m_checkDigitToken, offset: 0x20, size: 0x1, def value: None
 bool  m_checkDigitToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::__DTString, Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::__DTString, Index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__DTString, m_current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::__DTString, m_info) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::__DTString, m_checkDigitToken) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::__DTString) == 0x28, "Size mismatch!");

} // namespace end def System

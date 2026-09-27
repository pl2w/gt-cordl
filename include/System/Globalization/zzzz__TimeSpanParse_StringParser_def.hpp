#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse_StringParser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanParse_StringParser)
namespace GlobalNamespace {
struct TimeSpanParse_TimeSpanResult;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct TimeSpanParse_StringParser;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeSpanParse_StringParser);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeSpanParse_StringParser, "System.Globalization", "TimeSpanParse/StringParser");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies System.ReadOnlySpan`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Globalization.TimeSpanParse/StringParser
struct CORDL_TYPE TimeSpanParse_StringParser {
public:
// Declarations
/// @brief Method NextChar, addr 0xa23d0b4, size 0x48, virtual false, abstract: false, final false
inline void NextChar() ;

/// @brief Method NextNonDigit, addr 0xa23d0fc, size 0x60, virtual false, abstract: false, final false
inline char16_t NextNonDigit() ;

/// @brief Method ParseInt, addr 0xa23d344, size 0x10c, virtual false, abstract: false, final false
inline bool ParseInt(int32_t  max, ::by_ref<int32_t>  i, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result) ;

/// @brief Method ParseTime, addr 0xa23d18c, size 0x1b8, virtual false, abstract: false, final false
inline bool ParseTime(::by_ref<int64_t>  time, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result) ;

/// @brief Method SkipBlanks, addr 0xa23d15c, size 0x30, virtual false, abstract: false, final false
inline void SkipBlanks() ;

/// @brief Method TryParse, addr 0xa23cbe0, size 0x1e0, virtual false, abstract: false, final false
inline bool TryParse(::System::ReadOnlySpan_1<char16_t>  input, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result) ;

// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanParse_StringParser() ;

// Ctor Parameters [CppParam { name: "_str", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ch", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_len", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TimeSpanParse_StringParser(::System::ReadOnlySpan_1<char16_t>  _str, char16_t  _ch, int32_t  _pos, int32_t  _len) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6742};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _str, offset: 0x0, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _str;

/// @brief Field _ch, offset: 0x10, size: 0x2, def value: None
 char16_t  _ch;

/// @brief Field _pos, offset: 0x14, size: 0x4, def value: None
 int32_t  _pos;

/// @brief Field _len, offset: 0x18, size: 0x4, def value: None
 int32_t  _len;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeSpanParse_StringParser, _str) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_StringParser, _ch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_StringParser, _pos) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_StringParser, _len) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeSpanParse_StringParser) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse_TimeSpanToken.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__TimeSpanParse_TTT_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanParse_TimeSpanToken)
namespace GlobalNamespace {
struct TimeSpanParse_TTT;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct TimeSpanParse_TimeSpanToken;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeSpanParse_TimeSpanToken);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeSpanParse_TimeSpanToken, "System.Globalization", "TimeSpanParse/TimeSpanToken");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies System.Globalization.TimeSpanParse::TTT, System.ReadOnlySpan`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Globalization.TimeSpanParse/TimeSpanToken
struct CORDL_TYPE TimeSpanParse_TimeSpanToken {
public:
// Declarations
/// @brief Method IsInvalidFraction, addr 0xa237d5c, size 0x5c, virtual false, abstract: false, final false
inline bool IsInvalidFraction() ;

/// @brief Method .ctor, addr 0xa23abcc, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int32_t  number) ;

/// @brief Method .ctor, addr 0xa23cbb8, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int32_t  number, int32_t  leadingZeroes) ;

/// @brief Method .ctor, addr 0xa23cdc0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::TimeSpanParse_TTT  type) ;

/// @brief Method .ctor, addr 0xa23cdd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::TimeSpanParse_TTT  type, int32_t  number, int32_t  leadingZeroes, ::System::ReadOnlySpan_1<char16_t>  separator) ;

// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanParse_TimeSpanToken() ;

// Ctor Parameters [CppParam { name: "_ttt", ty: "::GlobalNamespace::TimeSpanParse_TTT", modifiers: "", def_value: None, comment: None }, CppParam { name: "_num", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_zeroes", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sep", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None, comment: None }]
constexpr TimeSpanParse_TimeSpanToken(::GlobalNamespace::TimeSpanParse_TTT  _ttt, int32_t  _num, int32_t  _zeroes, ::System::ReadOnlySpan_1<char16_t>  _sep) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6738};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _ttt, offset: 0x0, size: 0x1, def value: None
 ::GlobalNamespace::TimeSpanParse_TTT  _ttt;

/// @brief Field _num, offset: 0x4, size: 0x4, def value: None
 int32_t  _num;

/// @brief Field _zeroes, offset: 0x8, size: 0x4, def value: None
 int32_t  _zeroes;

/// @brief Field _sep, offset: 0x10, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _sep;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanToken, _ttt) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanToken, _num) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanToken, _zeroes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanToken, _sep) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeSpanParse_TimeSpanToken) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

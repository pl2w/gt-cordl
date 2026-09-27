#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse_TimeSpanRawInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__TimeSpanFormat_FormatLiterals_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_TTT_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_TimeSpanToken_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanParse_TimeSpanRawInfo)
namespace GlobalNamespace {
struct TimeSpanFormat_FormatLiterals;
}
namespace GlobalNamespace {
struct TimeSpanParse_TimeSpanResult;
}
namespace GlobalNamespace {
struct TimeSpanParse_TimeSpanToken;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct TimeSpanParse_TimeSpanRawInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, "System.Globalization", "TimeSpanParse/TimeSpanRawInfo");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies System.Globalization.TimeSpanFormat::FormatLiterals, System.Globalization.TimeSpanParse::TTT, System.Globalization.TimeSpanParse::TimeSpanToken, System.ReadOnlySpan`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Globalization.TimeSpanParse/TimeSpanRawInfo
struct CORDL_TYPE TimeSpanParse_TimeSpanRawInfo {
public:
// Declarations
 __declspec(property(get=get_NegativeInvariant)) ::GlobalNamespace::TimeSpanFormat_FormatLiterals  NegativeInvariant;

 __declspec(property(get=get_NegativeLocalized)) ::GlobalNamespace::TimeSpanFormat_FormatLiterals  NegativeLocalized;

 __declspec(property(get=get_PositiveInvariant)) ::GlobalNamespace::TimeSpanFormat_FormatLiterals  PositiveInvariant;

 __declspec(property(get=get_PositiveLocalized)) ::GlobalNamespace::TimeSpanFormat_FormatLiterals  PositiveLocalized;

/// @brief Method AddNum, addr 0xa23cfc8, size 0xec, virtual false, abstract: false, final false
inline bool AddNum(::GlobalNamespace::TimeSpanParse_TimeSpanToken  num, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result) ;

/// @brief Method AddSep, addr 0xa23ceb4, size 0x114, virtual false, abstract: false, final false
inline bool AddSep(::System::ReadOnlySpan_1<char16_t>  sep, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result) ;

/// @brief Method FullAppCompatMatch, addr 0xa23b238, size 0x324, virtual false, abstract: false, final false
inline bool FullAppCompatMatch(::GlobalNamespace::TimeSpanFormat_FormatLiterals  pattern) ;

/// @brief Method FullDHMMatch, addr 0xa23b860, size 0x304, virtual false, abstract: false, final false
inline bool FullDHMMatch(::GlobalNamespace::TimeSpanFormat_FormatLiterals  pattern) ;

/// @brief Method FullDHMSMatch, addr 0xa23af0c, size 0x32c, virtual false, abstract: false, final false
inline bool FullDHMSMatch(::GlobalNamespace::TimeSpanFormat_FormatLiterals  pattern) ;

/// @brief Method FullDMatch, addr 0xa23c0c0, size 0x1bc, virtual false, abstract: false, final false
inline bool FullDMatch(::GlobalNamespace::TimeSpanFormat_FormatLiterals  pattern) ;

/// @brief Method FullHMMatch, addr 0xa23be60, size 0x260, virtual false, abstract: false, final false
inline bool FullHMMatch(::GlobalNamespace::TimeSpanFormat_FormatLiterals  pattern) ;

/// @brief Method FullHMSFMatch, addr 0xa23abe0, size 0x32c, virtual false, abstract: false, final false
inline bool FullHMSFMatch(::GlobalNamespace::TimeSpanFormat_FormatLiterals  pattern) ;

/// @brief Method FullHMSMatch, addr 0xa23b55c, size 0x304, virtual false, abstract: false, final false
inline bool FullHMSMatch(::GlobalNamespace::TimeSpanFormat_FormatLiterals  pattern) ;

/// @brief Method FullMatch, addr 0xa23a70c, size 0x35c, virtual false, abstract: false, final false
inline bool FullMatch(::GlobalNamespace::TimeSpanFormat_FormatLiterals  pattern) ;

/// @brief Method Init, addr 0xa2382b4, size 0x54, virtual false, abstract: false, final false
inline void Init(::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method PartialAppCompatMatch, addr 0xa23bb64, size 0x2fc, virtual false, abstract: false, final false
inline bool PartialAppCompatMatch(::GlobalNamespace::TimeSpanFormat_FormatLiterals  pattern) ;

/// @brief Method ProcessToken, addr 0xa238584, size 0x114, virtual false, abstract: false, final false
inline bool ProcessToken(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanToken>  tok, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result) ;

/// @brief Method get_NegativeInvariant, addr 0xa23ce48, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::TimeSpanFormat_FormatLiterals get_NegativeInvariant() ;

/// @brief Method get_NegativeLocalized, addr 0xa23ab18, size 0xb4, virtual false, abstract: false, final false
inline ::GlobalNamespace::TimeSpanFormat_FormatLiterals get_NegativeLocalized() ;

/// @brief Method get_PositiveInvariant, addr 0xa23cde0, size 0x68, virtual false, abstract: false, final false
inline ::GlobalNamespace::TimeSpanFormat_FormatLiterals get_PositiveInvariant() ;

/// @brief Method get_PositiveLocalized, addr 0xa23aa68, size 0xb0, virtual false, abstract: false, final false
inline ::GlobalNamespace::TimeSpanFormat_FormatLiterals get_PositiveLocalized() ;

// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanParse_TimeSpanRawInfo() ;

// Ctor Parameters [CppParam { name: "_lastSeenTTT", ty: "::GlobalNamespace::TimeSpanParse_TTT", modifiers: "", def_value: None, comment: None }, CppParam { name: "_tokenCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sepCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_numCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_posLoc", ty: "::GlobalNamespace::TimeSpanFormat_FormatLiterals", modifiers: "", def_value: None, comment: None }, CppParam { name: "_negLoc", ty: "::GlobalNamespace::TimeSpanFormat_FormatLiterals", modifiers: "", def_value: None, comment: None }, CppParam { name: "_posLocInit", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_negLocInit", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_fullPosPattern", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_fullNegPattern", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_numbers0", ty: "::GlobalNamespace::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_numbers1", ty: "::GlobalNamespace::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_numbers2", ty: "::GlobalNamespace::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_numbers3", ty: "::GlobalNamespace::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_numbers4", ty: "::GlobalNamespace::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_literals0", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_literals1", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_literals2", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_literals3", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_literals4", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_literals5", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None, comment: None }]
constexpr TimeSpanParse_TimeSpanRawInfo(::GlobalNamespace::TimeSpanParse_TTT  _lastSeenTTT, int32_t  _tokenCount, int32_t  _sepCount, int32_t  _numCount, ::GlobalNamespace::TimeSpanFormat_FormatLiterals  _posLoc, ::GlobalNamespace::TimeSpanFormat_FormatLiterals  _negLoc, bool  _posLocInit, bool  _negLocInit, ::StringW  _fullPosPattern, ::StringW  _fullNegPattern, ::GlobalNamespace::TimeSpanParse_TimeSpanToken  _numbers0, ::GlobalNamespace::TimeSpanParse_TimeSpanToken  _numbers1, ::GlobalNamespace::TimeSpanParse_TimeSpanToken  _numbers2, ::GlobalNamespace::TimeSpanParse_TimeSpanToken  _numbers3, ::GlobalNamespace::TimeSpanParse_TimeSpanToken  _numbers4, ::System::ReadOnlySpan_1<char16_t>  _literals0, ::System::ReadOnlySpan_1<char16_t>  _literals1, ::System::ReadOnlySpan_1<char16_t>  _literals2, ::System::ReadOnlySpan_1<char16_t>  _literals3, ::System::ReadOnlySpan_1<char16_t>  _literals4, ::System::ReadOnlySpan_1<char16_t>  _literals5) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6740};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x178};

/// @brief Field _lastSeenTTT, offset: 0x0, size: 0x1, def value: None
 ::GlobalNamespace::TimeSpanParse_TTT  _lastSeenTTT;

/// @brief Field _tokenCount, offset: 0x4, size: 0x4, def value: None
 int32_t  _tokenCount;

/// @brief Field _sepCount, offset: 0x8, size: 0x4, def value: None
 int32_t  _sepCount;

/// @brief Field _numCount, offset: 0xc, size: 0x4, def value: None
 int32_t  _numCount;

/// @brief Field _posLoc, offset: 0x10, size: 0x28, def value: None
 ::GlobalNamespace::TimeSpanFormat_FormatLiterals  _posLoc;

/// @brief Field _negLoc, offset: 0x38, size: 0x28, def value: None
 ::GlobalNamespace::TimeSpanFormat_FormatLiterals  _negLoc;

/// @brief Field _posLocInit, offset: 0x60, size: 0x1, def value: None
 bool  _posLocInit;

/// @brief Field _negLocInit, offset: 0x61, size: 0x1, def value: None
 bool  _negLocInit;

/// @brief Field _fullPosPattern, offset: 0x68, size: 0x8, def value: None
 ::StringW  _fullPosPattern;

/// @brief Field _fullNegPattern, offset: 0x70, size: 0x8, def value: None
 ::StringW  _fullNegPattern;

/// @brief Field _numbers0, offset: 0x78, size: 0x20, def value: None
 ::GlobalNamespace::TimeSpanParse_TimeSpanToken  _numbers0;

/// @brief Field _numbers1, offset: 0x98, size: 0x20, def value: None
 ::GlobalNamespace::TimeSpanParse_TimeSpanToken  _numbers1;

/// @brief Field _numbers2, offset: 0xb8, size: 0x20, def value: None
 ::GlobalNamespace::TimeSpanParse_TimeSpanToken  _numbers2;

/// @brief Field _numbers3, offset: 0xd8, size: 0x20, def value: None
 ::GlobalNamespace::TimeSpanParse_TimeSpanToken  _numbers3;

/// @brief Field _numbers4, offset: 0xf8, size: 0x20, def value: None
 ::GlobalNamespace::TimeSpanParse_TimeSpanToken  _numbers4;

/// @brief Field _literals0, offset: 0x118, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _literals0;

/// @brief Field _literals1, offset: 0x128, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _literals1;

/// @brief Field _literals2, offset: 0x138, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _literals2;

/// @brief Field _literals3, offset: 0x148, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _literals3;

/// @brief Field _literals4, offset: 0x158, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _literals4;

/// @brief Field _literals5, offset: 0x168, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _literals5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _lastSeenTTT) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _tokenCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _sepCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _numCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _posLoc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _negLoc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _posLocInit) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _negLocInit) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _fullPosPattern) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _fullNegPattern) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _numbers0) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _numbers1) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _numbers2) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _numbers3) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _numbers4) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _literals0) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _literals1) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _literals2) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _literals3) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _literals4) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo, _literals5) == 0x168, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo) == 0x178, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanFormat_FormatLiterals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanFormat_FormatLiterals)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct TimeSpanFormat_FormatLiterals;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeSpanFormat_FormatLiterals);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeSpanFormat_FormatLiterals, "System.Globalization", "TimeSpanFormat/FormatLiterals");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Globalization.TimeSpanFormat/FormatLiterals
struct CORDL_TYPE TimeSpanFormat_FormatLiterals {
public:
// Declarations
 __declspec(property(get=get_DayHourSep)) ::StringW  DayHourSep;

 __declspec(property(get=get_End)) ::StringW  End;

 __declspec(property(get=get_HourMinuteSep)) ::StringW  HourMinuteSep;

 __declspec(property(get=get_MinuteSecondSep)) ::StringW  MinuteSecondSep;

 __declspec(property(get=get_SecondFractionSep)) ::StringW  SecondFractionSep;

 __declspec(property(get=get_Start)) ::StringW  Start;

/// @brief Method Init, addr 0xa23744c, size 0x398, virtual false, abstract: false, final false
inline void Init(::System::ReadOnlySpan_1<char16_t>  format, bool  useInvariantFieldLengths) ;

/// @brief Method InitInvariant, addr 0xa237a28, size 0x1e4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TimeSpanFormat_FormatLiterals InitInvariant(bool  isNegative) ;

/// @brief Method get_DayHourSep, addr 0xa23789c, size 0x2c, virtual false, abstract: false, final false
inline ::StringW get_DayHourSep() ;

/// @brief Method get_End, addr 0xa23794c, size 0x2c, virtual false, abstract: false, final false
inline ::StringW get_End() ;

/// @brief Method get_HourMinuteSep, addr 0xa2378c8, size 0x2c, virtual false, abstract: false, final false
inline ::StringW get_HourMinuteSep() ;

/// @brief Method get_MinuteSecondSep, addr 0xa2378f4, size 0x2c, virtual false, abstract: false, final false
inline ::StringW get_MinuteSecondSep() ;

/// @brief Method get_SecondFractionSep, addr 0xa237920, size 0x2c, virtual false, abstract: false, final false
inline ::StringW get_SecondFractionSep() ;

/// @brief Method get_Start, addr 0xa237874, size 0x28, virtual false, abstract: false, final false
inline ::StringW get_Start() ;

// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanFormat_FormatLiterals() ;

// Ctor Parameters [CppParam { name: "AppCompatLiteral", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "dd", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hh", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mm", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ss", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ff", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_literals", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr TimeSpanFormat_FormatLiterals(::StringW  AppCompatLiteral, int32_t  dd, int32_t  hh, int32_t  mm, int32_t  ss, int32_t  ff, ::ArrayW<::StringW>  _literals) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6733};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field AppCompatLiteral, offset: 0x0, size: 0x8, def value: None
 ::StringW  AppCompatLiteral;

/// @brief Field dd, offset: 0x8, size: 0x4, def value: None
 int32_t  dd;

/// @brief Field hh, offset: 0xc, size: 0x4, def value: None
 int32_t  hh;

/// @brief Field mm, offset: 0x10, size: 0x4, def value: None
 int32_t  mm;

/// @brief Field ss, offset: 0x14, size: 0x4, def value: None
 int32_t  ss;

/// @brief Field ff, offset: 0x18, size: 0x4, def value: None
 int32_t  ff;

/// @brief Field _literals, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  _literals;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeSpanFormat_FormatLiterals, AppCompatLiteral) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanFormat_FormatLiterals, dd) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanFormat_FormatLiterals, hh) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanFormat_FormatLiterals, mm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanFormat_FormatLiterals, ss) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanFormat_FormatLiterals, ff) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanFormat_FormatLiterals, _literals) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeSpanFormat_FormatLiterals) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

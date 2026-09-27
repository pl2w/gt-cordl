#pragma once
// IWYU pragma private; include "System/Globalization/DateTimeFormatInfoScanner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__DateTimeFormatInfoScanner_FoundDatePattern_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeFormatInfoScanner)
namespace GlobalNamespace {
struct DateTimeFormatInfoScanner_FoundDatePattern;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
struct FORMATFLAGS;
}
// Forward declare root types
namespace System::Globalization {
class DateTimeFormatInfoScanner;
}
// Write type traits
MARK_REF_T(::System::Globalization::DateTimeFormatInfoScanner*);
DEFINE_IL2CPP_CLASS(::System::Globalization::DateTimeFormatInfoScanner*, "System.Globalization", "DateTimeFormatInfoScanner");
// Dependencies System.Globalization.DateTimeFormatInfoScanner::FoundDatePattern, System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.DateTimeFormatInfoScanner
class CORDL_TYPE DateTimeFormatInfoScanner : public ::System::Object {
public:
// Declarations
using FoundDatePattern = ::GlobalNamespace::DateTimeFormatInfoScanner_FoundDatePattern;

/// @brief Field _ymdFlags, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__ymdFlags, put=__cordl_internal_set__ymdFlags)) ::GlobalNamespace::DateTimeFormatInfoScanner_FoundDatePattern  _ymdFlags;

/// @brief Field m_dateWords, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_dateWords, put=__cordl_internal_set_m_dateWords)) ::System::Collections::Generic::List_1<::StringW>*  m_dateWords;

/// @brief Field s_knownWords, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_knownWords, put=setStaticF_s_knownWords)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  s_knownWords;

/// @brief Method AddDateWordOrPostfix, addr 0xa216a08, size 0x248, virtual false, abstract: false, final false
inline void AddDateWordOrPostfix(::StringW  formatPostfix, ::StringW  str) ;

/// @brief Method AddDateWords, addr 0xa216dc4, size 0x1d8, virtual false, abstract: false, final false
inline int32_t AddDateWords(::StringW  pattern, int32_t  index, ::StringW  formatPostfix) ;

/// @brief Method AddIgnorableSymbols, addr 0xa216c50, size 0x174, virtual false, abstract: false, final false
inline void AddIgnorableSymbols(::StringW  text) ;

/// @brief Method ArrayElementsBeginWithDigit, addr 0xa217300, size 0x250, virtual false, abstract: false, final false
static inline bool ArrayElementsBeginWithDigit(::ArrayW<::StringW>  array) ;

/// @brief Method ArrayElementsHaveSpace, addr 0xa217550, size 0x27c, virtual false, abstract: false, final false
static inline bool ArrayElementsHaveSpace(::ArrayW<::StringW>  array) ;

/// @brief Method EqualStringArrays, addr 0xa217250, size 0xb0, virtual false, abstract: false, final false
static inline bool EqualStringArrays(::ArrayW<::StringW>  array1, ::ArrayW<::StringW>  array2) ;

/// @brief Method GetDateWordsOfDTFI, addr 0xa215598, size 0x2a4, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetDateWordsOfDTFI(::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method GetFormatFlagGenitiveMonth, addr 0xa213a1c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Globalization::FORMATFLAGS GetFormatFlagGenitiveMonth(::ArrayW<::StringW>  monthNames, ::ArrayW<::StringW>  genitveMonthNames, ::ArrayW<::StringW>  abbrevMonthNames, ::ArrayW<::StringW>  genetiveAbbrevMonthNames) ;

/// @brief Method GetFormatFlagUseHebrewCalendar, addr 0xa213b34, size 0x10, virtual false, abstract: false, final false
static inline ::System::Globalization::FORMATFLAGS GetFormatFlagUseHebrewCalendar(int32_t  calID) ;

/// @brief Method GetFormatFlagUseSpaceInDayNames, addr 0xa213b04, size 0x30, virtual false, abstract: false, final false
static inline ::System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInDayNames(::ArrayW<::StringW>  dayNames, ::ArrayW<::StringW>  abbrevDayNames) ;

/// @brief Method GetFormatFlagUseSpaceInMonthNames, addr 0xa213a5c, size 0xa8, virtual false, abstract: false, final false
static inline ::System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInMonthNames(::ArrayW<::StringW>  monthNames, ::ArrayW<::StringW>  genitveMonthNames, ::ArrayW<::StringW>  abbrevMonthNames, ::ArrayW<::StringW>  genetiveAbbrevMonthNames) ;

static inline ::System::Globalization::DateTimeFormatInfoScanner* New_ctor() ;

/// @brief Method ScanDateWord, addr 0xa217020, size 0x230, virtual false, abstract: false, final false
inline void ScanDateWord(::StringW  pattern) ;

/// @brief Method ScanRepeatChar, addr 0xa216f9c, size 0x84, virtual false, abstract: false, final false
static inline int32_t ScanRepeatChar(::StringW  pattern, char16_t  ch, int32_t  index, ::by_ref<int32_t>  count) ;

/// @brief Method SkipWhiteSpacesAndNonLetter, addr 0xa21692c, size 0xdc, virtual false, abstract: false, final false
static inline int32_t SkipWhiteSpacesAndNonLetter(::StringW  pattern, int32_t  currentIndex) ;

constexpr ::GlobalNamespace::DateTimeFormatInfoScanner_FoundDatePattern const& __cordl_internal_get__ymdFlags() const;

constexpr ::GlobalNamespace::DateTimeFormatInfoScanner_FoundDatePattern& __cordl_internal_get__ymdFlags() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_dateWords() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_dateWords() ;

constexpr void __cordl_internal_set__ymdFlags(::GlobalNamespace::DateTimeFormatInfoScanner_FoundDatePattern  value) ;

constexpr void __cordl_internal_set_m_dateWords(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa215510, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_s_knownWords() ;

/// @brief Method get_KnownWords, addr 0xa216540, size 0x3ec, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_KnownWords() ;

static inline void setStaticF_s_knownWords(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DateTimeFormatInfoScanner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DateTimeFormatInfoScanner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeFormatInfoScanner(DateTimeFormatInfoScanner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeFormatInfoScanner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeFormatInfoScanner(DateTimeFormatInfoScanner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6720};

/// @brief Field m_dateWords, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___m_dateWords;

/// @brief Field _ymdFlags, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::DateTimeFormatInfoScanner_FoundDatePattern  ____ymdFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::DateTimeFormatInfoScanner, ___m_dateWords) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfoScanner, ____ymdFlags) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Globalization::DateTimeFormatInfoScanner) == 0x20, "Size mismatch!");

} // namespace end def System::Globalization

#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexCharClass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__RegexCharClass_LowerCaseMapping_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegexCharClass)
namespace GlobalNamespace {
struct RegexCharClass_LowerCaseMapping;
}
namespace GlobalNamespace {
struct RegexCharClass_SingleRange;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
struct UnicodeCategory;
}
namespace System::Text::RegularExpressions {
class RegexCharClass_SingleRangeComparer;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexCharClass;
}
namespace System::Text::RegularExpressions {
class RegexCharClass_SingleRangeComparer;
}
// Write type traits
MARK_REF_T(::System::Text::RegularExpressions::RegexCharClass*);
MARK_REF_T(::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer*);
DEFINE_IL2CPP_CLASS(::System::Text::RegularExpressions::RegexCharClass*, "System.Text.RegularExpressions", "RegexCharClass");
DEFINE_IL2CPP_CLASS(::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer*, "System.Text.RegularExpressions", "RegexCharClass/SingleRangeComparer");
// Dependencies System.Object, System.Text.RegularExpressions.RegexCharClass::LowerCaseMapping
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.RegexCharClass
class CORDL_TYPE RegexCharClass : public ::System::Object {
public:
// Declarations
using LowerCaseMapping = ::GlobalNamespace::RegexCharClass_LowerCaseMapping;

using SingleRange = ::GlobalNamespace::RegexCharClass_SingleRange;

using SingleRangeComparer = ::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer;

 __declspec(property(get=get_CanMerge)) bool  CanMerge;

/// @brief Field DigitClass, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DigitClass, put=setStaticF_DigitClass)) ::StringW  DigitClass;

 __declspec(property(put=set_Negate)) bool  Negate;

/// @brief Field NotDigitClass, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NotDigitClass, put=setStaticF_NotDigitClass)) ::StringW  NotDigitClass;

/// @brief Field NotSpaceClass, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NotSpaceClass, put=setStaticF_NotSpaceClass)) ::StringW  NotSpaceClass;

/// @brief Field NotWordClass, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NotWordClass, put=setStaticF_NotWordClass)) ::StringW  NotWordClass;

/// @brief Field SpaceClass, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SpaceClass, put=setStaticF_SpaceClass)) ::StringW  SpaceClass;

/// @brief Field WordClass, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WordClass, put=setStaticF_WordClass)) ::StringW  WordClass;

/// @brief Field _canonical, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__canonical, put=__cordl_internal_set__canonical)) bool  _canonical;

/// @brief Field _categories, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__categories, put=__cordl_internal_set__categories)) ::System::Text::StringBuilder*  _categories;

/// @brief Field _negate, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__negate, put=__cordl_internal_set__negate)) bool  _negate;

/// @brief Field _rangelist, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__rangelist, put=__cordl_internal_set__rangelist)) ::System::Collections::Generic::List_1<::GlobalNamespace::RegexCharClass_SingleRange>*  _rangelist;

/// @brief Field _subtractor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__subtractor, put=__cordl_internal_set__subtractor)) ::System::Text::RegularExpressions::RegexCharClass*  _subtractor;

/// @brief Field s_definedCategories, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_definedCategories, put=setStaticF_s_definedCategories)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  s_definedCategories;

/// @brief Field s_internalRegexIgnoreCase, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_internalRegexIgnoreCase, put=setStaticF_s_internalRegexIgnoreCase)) ::StringW  s_internalRegexIgnoreCase;

/// @brief Field s_lcTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_lcTable, put=setStaticF_s_lcTable)) ::ArrayW<::GlobalNamespace::RegexCharClass_LowerCaseMapping>  s_lcTable;

/// @brief Field s_notSpace, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_notSpace, put=setStaticF_s_notSpace)) ::StringW  s_notSpace;

/// @brief Field s_notWord, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_notWord, put=setStaticF_s_notWord)) ::StringW  s_notWord;

/// @brief Field s_propTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_propTable, put=setStaticF_s_propTable)) ::ArrayW<::ArrayW<::StringW>>  s_propTable;

/// @brief Field s_space, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_space, put=setStaticF_s_space)) ::StringW  s_space;

/// @brief Field s_word, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_word, put=setStaticF_s_word)) ::StringW  s_word;

/// @brief Method AddCategory, addr 0xad12138, size 0x18, virtual false, abstract: false, final false
inline void AddCategory(::StringW  category) ;

/// @brief Method AddCategoryFromName, addr 0xad11c44, size 0x210, virtual false, abstract: false, final false
inline void AddCategoryFromName(::StringW  categoryName, bool  invert, bool  caseInsensitive, ::StringW  pattern) ;

/// @brief Method AddChar, addr 0xad11714, size 0x8, virtual false, abstract: false, final false
inline void AddChar(char16_t  c) ;

/// @brief Method AddCharClass, addr 0xad11820, size 0x170, virtual false, abstract: false, final false
inline void AddCharClass(::System::Text::RegularExpressions::RegexCharClass*  cc) ;

/// @brief Method AddDigit, addr 0xad12698, size 0xb4, virtual false, abstract: false, final false
inline void AddDigit(bool  ecma, bool  negate, ::StringW  pattern) ;

/// @brief Method AddLowercase, addr 0xad12150, size 0x120, virtual false, abstract: false, final false
inline void AddLowercase(::System::Globalization::CultureInfo*  culture) ;

/// @brief Method AddLowercaseRange, addr 0xad12270, size 0x230, virtual false, abstract: false, final false
inline void AddLowercaseRange(char16_t  chMin, char16_t  chMax, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method AddRange, addr 0xad1171c, size 0x104, virtual false, abstract: false, final false
inline void AddRange(char16_t  first, char16_t  last) ;

/// @brief Method AddSet, addr 0xad11a30, size 0x200, virtual false, abstract: false, final false
inline void AddSet(::StringW  set) ;

/// @brief Method AddSpace, addr 0xad1259c, size 0xfc, virtual false, abstract: false, final false
inline void AddSpace(bool  ecma, bool  negate) ;

/// @brief Method AddSubtraction, addr 0xad11c3c, size 0x8, virtual false, abstract: false, final false
inline void AddSubtraction(::System::Text::RegularExpressions::RegexCharClass*  sub) ;

/// @brief Method AddWord, addr 0xad124a0, size 0xfc, virtual false, abstract: false, final false
inline void AddWord(bool  ecma, bool  negate) ;

/// @brief Method Canonicalize, addr 0xad13574, size 0x234, virtual false, abstract: false, final false
inline void Canonicalize() ;

/// @brief Method CharInCategory, addr 0xad12edc, size 0x184, virtual false, abstract: false, final false
static inline bool CharInCategory(char16_t  ch, ::StringW  set, int32_t  start, int32_t  mySetLength, int32_t  myCategoryLength) ;

/// @brief Method CharInCategoryGroup, addr 0xad13060, size 0xd0, virtual false, abstract: false, final false
static inline bool CharInCategoryGroup(char16_t  ch, ::System::Globalization::UnicodeCategory  chcategory, ::StringW  category, ::by_ref<int32_t>  i) ;

/// @brief Method CharInClass, addr 0xad12bc8, size 0x68, virtual false, abstract: false, final false
static inline bool CharInClass(char16_t  ch, ::StringW  set) ;

/// @brief Method CharInClassInternal, addr 0xad12dcc, size 0x110, virtual false, abstract: false, final false
static inline bool CharInClassInternal(char16_t  ch, ::StringW  set, int32_t  start, int32_t  mySetLength, int32_t  myCategoryLength) ;

/// @brief Method CharInClassRecursive, addr 0xad12cac, size 0x120, virtual false, abstract: false, final false
static inline bool CharInClassRecursive(char16_t  ch, ::StringW  set, int32_t  start) ;

/// @brief Method GetRangeAt, addr 0xad119d8, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::RegexCharClass_SingleRange GetRangeAt(int32_t  i) ;

/// @brief Method IsECMAWordChar, addr 0xad12b5c, size 0x6c, virtual false, abstract: false, final false
static inline bool IsECMAWordChar(char16_t  ch) ;

/// @brief Method IsEmpty, addr 0xad12880, size 0xc0, virtual false, abstract: false, final false
static inline bool IsEmpty(::StringW  charClass) ;

/// @brief Method IsMergeable, addr 0xad12764, size 0x9c, virtual false, abstract: false, final false
static inline bool IsMergeable(::StringW  charClass) ;

/// @brief Method IsNegated, addr 0xad12800, size 0x28, virtual false, abstract: false, final false
static inline bool IsNegated(::StringW  set) ;

/// @brief Method IsSingleton, addr 0xad12940, size 0x10c, virtual false, abstract: false, final false
static inline bool IsSingleton(::StringW  set) ;

/// @brief Method IsSingletonInverse, addr 0xad12a4c, size 0x110, virtual false, abstract: false, final false
static inline bool IsSingletonInverse(::StringW  set) ;

/// @brief Method IsSubtraction, addr 0xad12828, size 0x58, virtual false, abstract: false, final false
static inline bool IsSubtraction(::StringW  charClass) ;

/// @brief Method IsWordChar, addr 0xad12c30, size 0x7c, virtual false, abstract: false, final false
static inline bool IsWordChar(char16_t  ch) ;

/// @brief Method NegateCategory, addr 0xad11e54, size 0x88, virtual false, abstract: false, final false
static inline ::StringW NegateCategory(::StringW  category) ;

static inline ::System::Text::RegularExpressions::RegexCharClass* New_ctor() ;

static inline ::System::Text::RegularExpressions::RegexCharClass* New_ctor(bool  negate, ::System::Collections::Generic::List_1<::GlobalNamespace::RegexCharClass_SingleRange>*  ranges, ::System::Text::StringBuilder*  categories, ::System::Text::RegularExpressions::RegexCharClass*  subtraction) ;

/// @brief Method Parse, addr 0xad13130, size 0x58, virtual false, abstract: false, final false
static inline ::System::Text::RegularExpressions::RegexCharClass* Parse(::StringW  charClass) ;

/// @brief Method ParseRecursive, addr 0xad13188, size 0x250, virtual false, abstract: false, final false
static inline ::System::Text::RegularExpressions::RegexCharClass* ParseRecursive(::StringW  charClass, int32_t  start) ;

/// @brief Method RangeCount, addr 0xad11990, size 0x48, virtual false, abstract: false, final false
inline int32_t RangeCount() ;

/// @brief Method SetFromProperty, addr 0xad11edc, size 0x25c, virtual false, abstract: false, final false
static inline ::StringW SetFromProperty(::StringW  capname, bool  invert, ::StringW  pattern) ;

/// @brief Method SingletonChar, addr 0xad1274c, size 0x18, virtual false, abstract: false, final false
static inline char16_t SingletonChar(::StringW  set) ;

/// @brief Method ToStringClass, addr 0xad133d8, size 0x19c, virtual false, abstract: false, final false
inline ::StringW ToStringClass() ;

constexpr bool const& __cordl_internal_get__canonical() const;

constexpr bool& __cordl_internal_get__canonical() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__categories() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get__categories() ;

constexpr bool const& __cordl_internal_get__negate() const;

constexpr bool& __cordl_internal_get__negate() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RegexCharClass_SingleRange>* const& __cordl_internal_get__rangelist() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RegexCharClass_SingleRange>*& __cordl_internal_get__rangelist() ;

constexpr ::System::Text::RegularExpressions::RegexCharClass* const& __cordl_internal_get__subtractor() const;

constexpr ::System::Text::RegularExpressions::RegexCharClass*& __cordl_internal_get__subtractor() ;

constexpr void __cordl_internal_set__canonical(bool  value) ;

constexpr void __cordl_internal_set__categories(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set__negate(bool  value) ;

constexpr void __cordl_internal_set__rangelist(::System::Collections::Generic::List_1<::GlobalNamespace::RegexCharClass_SingleRange>*  value) ;

constexpr void __cordl_internal_set__subtractor(::System::Text::RegularExpressions::RegexCharClass*  value) ;

/// @brief Method .ctor, addr 0xad115b0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xad1167c, size 0x70, virtual false, abstract: false, final false
inline void _ctor(bool  negate, ::System::Collections::Generic::List_1<::GlobalNamespace::RegexCharClass_SingleRange>*  ranges, ::System::Text::StringBuilder*  categories, ::System::Text::RegularExpressions::RegexCharClass*  subtraction) ;

static inline ::StringW getStaticF_DigitClass() ;

static inline ::StringW getStaticF_NotDigitClass() ;

static inline ::StringW getStaticF_NotSpaceClass() ;

static inline ::StringW getStaticF_NotWordClass() ;

static inline ::StringW getStaticF_SpaceClass() ;

static inline ::StringW getStaticF_WordClass() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_s_definedCategories() ;

static inline ::StringW getStaticF_s_internalRegexIgnoreCase() ;

static inline ::ArrayW<::GlobalNamespace::RegexCharClass_LowerCaseMapping> getStaticF_s_lcTable() ;

static inline ::StringW getStaticF_s_notSpace() ;

static inline ::StringW getStaticF_s_notWord() ;

static inline ::ArrayW<::ArrayW<::StringW>> getStaticF_s_propTable() ;

static inline ::StringW getStaticF_s_space() ;

static inline ::StringW getStaticF_s_word() ;

/// @brief Method get_CanMerge, addr 0xad116ec, size 0x20, virtual false, abstract: false, final false
inline bool get_CanMerge() ;

static inline void setStaticF_DigitClass(::StringW  value) ;

static inline void setStaticF_NotDigitClass(::StringW  value) ;

static inline void setStaticF_NotSpaceClass(::StringW  value) ;

static inline void setStaticF_NotWordClass(::StringW  value) ;

static inline void setStaticF_SpaceClass(::StringW  value) ;

static inline void setStaticF_WordClass(::StringW  value) ;

static inline void setStaticF_s_definedCategories(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline void setStaticF_s_internalRegexIgnoreCase(::StringW  value) ;

static inline void setStaticF_s_lcTable(::ArrayW<::GlobalNamespace::RegexCharClass_LowerCaseMapping>  value) ;

static inline void setStaticF_s_notSpace(::StringW  value) ;

static inline void setStaticF_s_notWord(::StringW  value) ;

static inline void setStaticF_s_propTable(::ArrayW<::ArrayW<::StringW>>  value) ;

static inline void setStaticF_s_space(::StringW  value) ;

static inline void setStaticF_s_word(::StringW  value) ;

/// @brief Method set_Negate, addr 0xad1170c, size 0x8, virtual false, abstract: false, final false
inline void set_Negate(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegexCharClass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegexCharClass", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegexCharClass(RegexCharClass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegexCharClass", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegexCharClass(RegexCharClass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9983};

/// @brief Field _rangelist, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::RegexCharClass_SingleRange>*  ____rangelist;

/// @brief Field _categories, offset: 0x18, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ____categories;

/// @brief Field _canonical, offset: 0x20, size: 0x1, def value: None
 bool  ____canonical;

/// @brief Field _negate, offset: 0x21, size: 0x1, def value: None
 bool  ____negate;

/// @brief Field _subtractor, offset: 0x28, size: 0x8, def value: None
 ::System::Text::RegularExpressions::RegexCharClass*  ____subtractor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::RegexCharClass, ____rangelist) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCharClass, ____categories) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCharClass, ____canonical) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCharClass, ____negate) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCharClass, ____subtractor) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Text::RegularExpressions::RegexCharClass) == 0x30, "Size mismatch!");

} // namespace end def System::Text::RegularExpressions
// Dependencies System.Object
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer
class CORDL_TYPE RegexCharClass_SingleRangeComparer : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer*  Instance;

/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::RegexCharClass_SingleRange>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::GlobalNamespace::RegexCharClass_SingleRange>*() noexcept;

/// @brief Method Compare, addr 0xad18d30, size 0x44, virtual true, abstract: false, final true
inline int32_t Compare(::GlobalNamespace::RegexCharClass_SingleRange  x, ::GlobalNamespace::RegexCharClass_SingleRange  y) ;

static inline ::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer* New_ctor() ;

/// @brief Method .ctor, addr 0xad18d28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer* getStaticF_Instance() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::RegexCharClass_SingleRange>"
constexpr ::System::Collections::Generic::IComparer_1<::GlobalNamespace::RegexCharClass_SingleRange>* i___System__Collections__Generic__IComparer_1___GlobalNamespace__RegexCharClass_SingleRange_() noexcept;

static inline void setStaticF_Instance(::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegexCharClass_SingleRangeComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegexCharClass_SingleRangeComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegexCharClass_SingleRangeComparer(RegexCharClass_SingleRangeComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegexCharClass_SingleRangeComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegexCharClass_SingleRangeComparer(RegexCharClass_SingleRangeComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9981};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer) == 0x10, "Size mismatch!");

} // namespace end def System::Text::RegularExpressions

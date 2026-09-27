#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/Format.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__FormatItem_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Format)
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class FormatItem;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format_SplitList;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Placeholder;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format_SplitList;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*, "UnityEngine.Localization.SmartFormat.Core.Parsing", "Format");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*, "UnityEngine.Localization.SmartFormat.Core.Parsing", "Format/SplitList");
// Dependencies UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.Format
class CORDL_TYPE Format : public ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem {
public:
// Declarations
using SplitList = ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList;

 __declspec(property(get=get_HasNested, put=set_HasNested)) bool  HasNested;

 __declspec(property(get=get_Items)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>*  Items;

/// @brief Field <HasNested>k__BackingField, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasNested_k__BackingField, put=__cordl_internal_set__HasNested_k__BackingField)) bool  _HasNested_k__BackingField;

/// @brief Field <Items>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Items_k__BackingField, put=__cordl_internal_set__Items_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>*  _Items_k__BackingField;

/// @brief Field m_Splits, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Splits, put=__cordl_internal_set_m_Splits)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>*  m_Splits;

/// @brief Field parent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  parent;

/// @brief Field splitCache, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_splitCache, put=__cordl_internal_set_splitCache)) ::System::Collections::Generic::IList_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*  splitCache;

/// @brief Field splitCacheChar, offset 0x60, size 0x2 
 __declspec(property(get=__cordl_internal_get_splitCacheChar, put=__cordl_internal_set_splitCacheChar)) char16_t  splitCacheChar;

/// @brief Method FindAll, addr 0xb04516c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* FindAll(char16_t  search) ;

/// @brief Method FindAll, addr 0xb045174, size 0x128, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* FindAll(char16_t  search, int32_t  maxCount) ;

/// @brief Method GetLiteralText, addr 0xb03b3b8, size 0x270, virtual false, abstract: false, final false
inline ::StringW GetLiteralText() ;

/// @brief Method IndexOf, addr 0xb044f80, size 0x8, virtual false, abstract: false, final false
inline int32_t IndexOf(char16_t  search) ;

/// @brief Method IndexOf, addr 0xb044f88, size 0x1e4, virtual false, abstract: false, final false
inline int32_t IndexOf(char16_t  search, int32_t  startIndex) ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* New_ctor() ;

/// @brief Method ReleaseToPool, addr 0xb02e218, size 0x334, virtual false, abstract: false, final false
inline void ReleaseToPool() ;

/// @brief Method Split, addr 0xb038f10, size 0x54, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>* Split(char16_t  search) ;

/// @brief Method Split, addr 0xb03e584, size 0x108, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>* Split(char16_t  search, int32_t  maxCount) ;

/// @brief Method Substring, addr 0xb03a1f0, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* Substring(int32_t  startIndex) ;

/// @brief Method Substring, addr 0xb044b94, size 0x3ec, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* Substring(int32_t  startIndex, int32_t  length) ;

/// @brief Method ToString, addr 0xb04529c, size 0x294, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr bool const& __cordl_internal_get__HasNested_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasNested_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>* const& __cordl_internal_get__Items_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>*& __cordl_internal_get__Items_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>* const& __cordl_internal_get_m_Splits() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>*& __cordl_internal_get_m_Splits() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder* const& __cordl_internal_get_parent() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*& __cordl_internal_get_parent() ;

constexpr ::System::Collections::Generic::IList_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>* const& __cordl_internal_get_splitCache() const;

constexpr ::System::Collections::Generic::IList_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*& __cordl_internal_get_splitCache() ;

constexpr char16_t const& __cordl_internal_get_splitCacheChar() const;

constexpr char16_t& __cordl_internal_get_splitCacheChar() ;

constexpr void __cordl_internal_set__HasNested_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Items_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>*  value) ;

constexpr void __cordl_internal_set_m_Splits(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>*  value) ;

constexpr void __cordl_internal_set_parent(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  value) ;

constexpr void __cordl_internal_set_splitCache(::System::Collections::Generic::IList_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*  value) ;

constexpr void __cordl_internal_set_splitCacheChar(char16_t  value) ;

/// @brief Method .ctor, addr 0xb02e128, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_HasNested, addr 0xb044b84, size 0x8, virtual false, abstract: false, final false
inline bool get_HasNested() ;

/// [CompilerGenerated]
/// @brief Method get_Items, addr 0xb044b7c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>* get_Items() ;

/// [CompilerGenerated]
/// @brief Method set_HasNested, addr 0xb044b8c, size 0x8, virtual false, abstract: false, final false
inline void set_HasNested(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Format() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Format", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Format(Format && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Format", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Format(Format const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25214};

/// @brief Field parent, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  ___parent;

/// [CompilerGenerated]
/// @brief Field <Items>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>*  ____Items_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HasNested>k__BackingField, offset: 0x50, size: 0x1, def value: None
 bool  ____HasNested_k__BackingField;

/// @brief Field m_Splits, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>*  ___m_Splits;

/// @brief Field splitCacheChar, offset: 0x60, size: 0x2, def value: None
 char16_t  ___splitCacheChar;

/// @brief Field splitCache, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*  ___splitCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format, ___parent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format, ____Items_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format, ____HasNested_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format, ___m_Splits) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format, ___splitCacheChar) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format, ___splitCache) == 0x68, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format) == 0x70, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Parsing
// [DefaultMember("Item")]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.Format/SplitList
class CORDL_TYPE Format_SplitList : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  Item[];

/// @brief Field m_Format, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Format, put=__cordl_internal_set_m_Format)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  m_Format;

/// @brief Field m_FormatCache, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FormatCache, put=__cordl_internal_set_m_FormatCache)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*  m_FormatCache;

/// @brief Field m_Splits, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Splits, put=__cordl_internal_set_m_Splits)) ::System::Collections::Generic::List_1<int32_t>*  m_Splits;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>"
constexpr operator  ::System::Collections::Generic::IList_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0xb045998, size 0x38, virtual true, abstract: false, final true
inline void Add(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  item) ;

/// @brief Method Clear, addr 0xb02f2b8, size 0x17c, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0xb0459d0, size 0x38, virtual true, abstract: false, final true
inline bool Contains(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  item) ;

/// @brief Method CopyTo, addr 0xb0457ec, size 0xfc, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>  array, int32_t  arrayIndex) ;

/// @brief Method GetEnumerator, addr 0xb045a40, size 0x38, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>* GetEnumerator() ;

/// @brief Method IndexOf, addr 0xb0458f0, size 0x38, virtual true, abstract: false, final true
inline int32_t IndexOf(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  item) ;

/// @brief Method Init, addr 0xb02ee48, size 0x100, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format, ::System::Collections::Generic::List_1<int32_t>*  splits) ;

/// @brief Method Insert, addr 0xb045928, size 0x38, virtual true, abstract: false, final true
inline void Insert(int32_t  index, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  item) ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList* New_ctor() ;

/// @brief Method Remove, addr 0xb045a08, size 0x38, virtual true, abstract: false, final true
inline bool Remove(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  item) ;

/// @brief Method RemoveAt, addr 0xb045960, size 0x38, virtual true, abstract: false, final true
inline void RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb045a78, size 0x38, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* const& __cordl_internal_get_m_Format() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*& __cordl_internal_get_m_Format() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>* const& __cordl_internal_get_m_FormatCache() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*& __cordl_internal_get_m_FormatCache() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_Splits() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_Splits() ;

constexpr void __cordl_internal_set_m_Format(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value) ;

constexpr void __cordl_internal_set_m_FormatCache(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*  value) ;

constexpr void __cordl_internal_set_m_Splits(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0xb02f21c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0xb045538, size 0x4c, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0xb0458e8, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0xb045584, size 0x230, virtual true, abstract: false, final true
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>"
constexpr ::System::Collections::Generic::ICollection_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>* i___System__Collections__Generic__ICollection_1___UnityEngine__Localization__SmartFormat__Core__Parsing__Format__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__Localization__SmartFormat__Core__Parsing__Format__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IList_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>"
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>* i___System__Collections__Generic__IList_1___UnityEngine__Localization__SmartFormat__Core__Parsing__Format__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0xb0457b4, size 0x38, virtual true, abstract: false, final true
inline void set_Item(int32_t  index, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Format_SplitList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Format_SplitList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Format_SplitList(Format_SplitList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Format_SplitList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Format_SplitList(Format_SplitList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25213};

/// @brief Field m_Format, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  ___m_Format;

/// @brief Field m_Splits, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_Splits;

/// @brief Field m_FormatCache, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*  ___m_FormatCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList, ___m_Format) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList, ___m_Splits) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList, ___m_FormatCache) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Parsing

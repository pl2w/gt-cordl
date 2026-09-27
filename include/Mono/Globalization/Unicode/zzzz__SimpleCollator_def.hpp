#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/SimpleCollator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Globalization/Unicode/zzzz__Contraction_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__Level2Map_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleCollator)
namespace GlobalNamespace {
struct SimpleCollator_Context;
}
namespace GlobalNamespace {
struct SimpleCollator_Escape;
}
namespace GlobalNamespace {
struct SimpleCollator_ExtenderType;
}
namespace GlobalNamespace {
struct SimpleCollator_PreviousInfo;
}
namespace Mono::Globalization::Unicode {
class CodePointIndexer;
}
namespace Mono::Globalization::Unicode {
class Contraction;
}
namespace Mono::Globalization::Unicode {
class SortKeyBuffer;
}
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
class ISimpleCollator;
}
namespace System::Globalization {
class SortKey;
}
namespace System::Globalization {
class TextInfo;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class SimpleCollator;
}
// Write type traits
MARK_REF_T(::Mono::Globalization::Unicode::SimpleCollator*);
DEFINE_IL2CPP_CLASS(::Mono::Globalization::Unicode::SimpleCollator*, "Mono.Globalization.Unicode", "SimpleCollator");
// Dependencies Mono.Globalization.Unicode.Contraction, Mono.Globalization.Unicode.Level2Map, System.Object
namespace Mono::Globalization::Unicode {
// Is value type: false
// CS Name: Mono.Globalization.Unicode.SimpleCollator
class CORDL_TYPE SimpleCollator : public ::System::Object {
public:
// Declarations
using Context = ::GlobalNamespace::SimpleCollator_Context;

using Escape = ::GlobalNamespace::SimpleCollator_Escape;

using ExtenderType = ::GlobalNamespace::SimpleCollator_ExtenderType;

using PreviousInfo = ::GlobalNamespace::SimpleCollator_PreviousInfo;

/// @brief Field cjkCatTable, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_cjkCatTable, put=__cordl_internal_set_cjkCatTable)) uint8_t*  cjkCatTable;

/// @brief Field cjkIndexer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cjkIndexer, put=__cordl_internal_set_cjkIndexer)) ::Mono::Globalization::Unicode::CodePointIndexer*  cjkIndexer;

/// @brief Field cjkLv1Table, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cjkLv1Table, put=__cordl_internal_set_cjkLv1Table)) uint8_t*  cjkLv1Table;

/// @brief Field cjkLv2Indexer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_cjkLv2Indexer, put=__cordl_internal_set_cjkLv2Indexer)) ::Mono::Globalization::Unicode::CodePointIndexer*  cjkLv2Indexer;

/// @brief Field cjkLv2Table, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_cjkLv2Table, put=__cordl_internal_set_cjkLv2Table)) uint8_t*  cjkLv2Table;

/// @brief Field contractions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_contractions, put=__cordl_internal_set_contractions)) ::ArrayW<::Mono::Globalization::Unicode::Contraction*>  contractions;

/// @brief Field frenchSort, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_frenchSort, put=__cordl_internal_set_frenchSort)) bool  frenchSort;

/// @brief Field invariant, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_invariant, put=setStaticF_invariant)) ::Mono::Globalization::Unicode::SimpleCollator*  invariant;

/// @brief Field lcid, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_lcid, put=__cordl_internal_set_lcid)) int32_t  lcid;

/// @brief Field level2Maps, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_level2Maps, put=__cordl_internal_set_level2Maps)) ::ArrayW<::Mono::Globalization::Unicode::Level2Map*>  level2Maps;

/// @brief Field textInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_textInfo, put=__cordl_internal_set_textInfo)) ::System::Globalization::TextInfo*  textInfo;

/// @brief Field unsafeFlags, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_unsafeFlags, put=__cordl_internal_set_unsafeFlags)) ::ArrayW<uint8_t>  unsafeFlags;

/// @brief Convert operator to "::System::Globalization::ISimpleCollator"
constexpr operator  ::System::Globalization::ISimpleCollator*() noexcept;

/// @brief Method Category, addr 0xa113cb8, size 0x94, virtual false, abstract: false, final false
inline uint8_t Category(int32_t  cp) ;

/// @brief Method ClearBuffer, addr 0xa114f94, size 0x264, virtual false, abstract: false, final false
inline void ClearBuffer(uint8_t*  buffer, int32_t  size) ;

/// @brief Method Compare, addr 0xa115880, size 0xb8, virtual false, abstract: false, final false
inline int32_t Compare(::StringW  s1, int32_t  idx1, int32_t  len1, ::StringW  s2, int32_t  idx2, int32_t  len2, ::System::Globalization::CompareOptions  options) ;

/// @brief Method CompareFlagPair, addr 0xa116da4, size 0x1c, virtual false, abstract: false, final false
inline int32_t CompareFlagPair(bool  b1, bool  b2) ;

/// @brief Method CompareInternal, addr 0xa115938, size 0x145c, virtual false, abstract: false, final false
inline int32_t CompareInternal(::StringW  s1, int32_t  idx1, int32_t  len1, ::StringW  s2, int32_t  idx2, int32_t  len2, ::by_ref<bool>  targetConsumed, ::by_ref<bool>  sourceConsumed, bool  skipHeadingExtenders, bool  immediateBreakup, ::by_ref<::GlobalNamespace::SimpleCollator_Context>  ctx) ;

/// @brief Method FillSortKeyRaw, addr 0xa115214, size 0x36c, virtual false, abstract: false, final false
inline void FillSortKeyRaw(int32_t  i, ::GlobalNamespace::SimpleCollator_ExtenderType  ext, ::Mono::Globalization::Unicode::SortKeyBuffer*  buf, ::System::Globalization::CompareOptions  opt) ;

/// @brief Method FillSurrogateSortKeyRaw, addr 0xa115734, size 0xb4, virtual false, abstract: false, final false
inline void FillSurrogateSortKeyRaw(int32_t  i, ::Mono::Globalization::Unicode::SortKeyBuffer*  buf) ;

/// @brief Method FilterExtender, addr 0xa114618, size 0x210, virtual false, abstract: false, final false
inline int32_t FilterExtender(int32_t  i, ::GlobalNamespace::SimpleCollator_ExtenderType  ext, ::System::Globalization::CompareOptions  opt) ;

/// @brief Method FilterOptions, addr 0xa114410, size 0xe4, virtual false, abstract: false, final false
inline int32_t FilterOptions(int32_t  i, ::System::Globalization::CompareOptions  opt) ;

/// @brief Method GetContraction, addr 0xa113f88, size 0xc0, virtual false, abstract: false, final false
inline ::Mono::Globalization::Unicode::Contraction* GetContraction(::StringW  s, int32_t  start, int32_t  end) ;

/// @brief Method GetContraction, addr 0xa114048, size 0x128, virtual false, abstract: false, final false
inline ::Mono::Globalization::Unicode::Contraction* GetContraction(::StringW  s, int32_t  start, int32_t  end, ::ArrayW<::Mono::Globalization::Unicode::Contraction*>  clist) ;

/// @brief Method GetExtenderType, addr 0xa1144f4, size 0xfc, virtual false, abstract: false, final false
inline ::GlobalNamespace::SimpleCollator_ExtenderType GetExtenderType(int32_t  i) ;

/// @brief Method GetNeutralCulture, addr 0xa113c48, size 0x70, virtual false, abstract: false, final false
static inline ::System::Globalization::CultureInfo* GetNeutralCulture(::System::Globalization::CultureInfo*  info) ;

/// @brief Method GetSortKey, addr 0xa114900, size 0x1c, virtual true, abstract: false, final true
inline ::System::Globalization::SortKey* GetSortKey(::StringW  s, ::System::Globalization::CompareOptions  options) ;

/// @brief Method GetSortKey, addr 0xa11491c, size 0xc8, virtual false, abstract: false, final false
inline ::System::Globalization::SortKey* GetSortKey(::StringW  s, int32_t  start, int32_t  length, ::System::Globalization::CompareOptions  options) ;

/// @brief Method GetSortKey, addr 0xa114c00, size 0x370, virtual false, abstract: false, final false
inline void GetSortKey(::StringW  s, int32_t  start, int32_t  end, ::Mono::Globalization::Unicode::SortKeyBuffer*  buf, ::System::Globalization::CompareOptions  opt) ;

/// @brief Method GetTailContraction, addr 0xa114170, size 0xc0, virtual false, abstract: false, final false
inline ::Mono::Globalization::Unicode::Contraction* GetTailContraction(::StringW  s, int32_t  start, int32_t  end) ;

/// @brief Method GetTailContraction, addr 0xa114230, size 0x1e0, virtual false, abstract: false, final false
inline ::Mono::Globalization::Unicode::Contraction* GetTailContraction(::StringW  s, int32_t  start, int32_t  end, ::ArrayW<::Mono::Globalization::Unicode::Contraction*>  clist) ;

/// @brief Method IndexOf, addr 0xa1172ac, size 0x200, virtual true, abstract: false, final true
inline int32_t IndexOf(::StringW  s, ::StringW  target, int32_t  start, int32_t  length, ::System::Globalization::CompareOptions  opt) ;

/// @brief Method IndexOf, addr 0xa1174ac, size 0x474, virtual false, abstract: false, final false
inline int32_t IndexOf(::StringW  s, ::StringW  target, int32_t  start, int32_t  length, uint8_t*  targetSortKey, ::by_ref<::GlobalNamespace::SimpleCollator_Context>  ctx) ;

/// @brief Method IndexOfOrdinal, addr 0xa117920, size 0xd8, virtual false, abstract: false, final false
inline int32_t IndexOfOrdinal(::StringW  s, ::StringW  target, int32_t  start, int32_t  length) ;

/// @brief Method IndexOfOrdinal, addr 0xa1179f8, size 0x70, virtual false, abstract: false, final false
inline int32_t IndexOfOrdinal(::StringW  s, char16_t  target, int32_t  start, int32_t  length) ;

/// @brief Method IndexOfSortKey, addr 0xa117a68, size 0x94, virtual false, abstract: false, final false
inline int32_t IndexOfSortKey(::StringW  s, int32_t  start, int32_t  length, uint8_t*  sortkey, char16_t  target, int32_t  ti, bool  noLv4, ::by_ref<::GlobalNamespace::SimpleCollator_Context>  ctx) ;

/// @brief Method IsHalfKana, addr 0xa113f18, size 0x70, virtual false, abstract: false, final false
static inline bool IsHalfKana(int32_t  cp, ::System::Globalization::CompareOptions  opt) ;

/// @brief Method IsIgnorable, addr 0xa114828, size 0x7c, virtual false, abstract: false, final false
static inline bool IsIgnorable(int32_t  i, ::System::Globalization::CompareOptions  opt) ;

/// @brief Method IsPrefix, addr 0xa116ddc, size 0xb0, virtual false, abstract: false, final false
inline bool IsPrefix(::StringW  s, ::StringW  target, int32_t  start, int32_t  length, ::System::Globalization::CompareOptions  opt) ;

/// @brief Method IsPrefix, addr 0xa116e8c, size 0x6c, virtual false, abstract: false, final false
inline bool IsPrefix(::StringW  s, ::StringW  target, int32_t  start, int32_t  length, bool  skipHeadingExtenders, ::by_ref<::GlobalNamespace::SimpleCollator_Context>  ctx) ;

/// @brief Method IsPrefix, addr 0xa116dc0, size 0x1c, virtual true, abstract: false, final true
inline bool IsPrefix(::StringW  src, ::StringW  target, ::System::Globalization::CompareOptions  opt) ;

/// @brief Method IsSafe, addr 0xa1148a4, size 0x5c, virtual false, abstract: false, final false
inline bool IsSafe(int32_t  i) ;

/// @brief Method IsSuffix, addr 0xa116f14, size 0x94, virtual false, abstract: false, final false
inline bool IsSuffix(::StringW  s, ::StringW  target, int32_t  start, int32_t  length, ::System::Globalization::CompareOptions  opt) ;

/// @brief Method IsSuffix, addr 0xa116ef8, size 0x1c, virtual true, abstract: false, final true
inline bool IsSuffix(::StringW  src, ::StringW  target, ::System::Globalization::CompareOptions  opt) ;

/// @brief Method LastIndexOf, addr 0xa116fa8, size 0x19c, virtual true, abstract: false, final true
inline int32_t LastIndexOf(::StringW  s, ::StringW  target, int32_t  start, int32_t  length, ::System::Globalization::CompareOptions  opt) ;

/// @brief Method LastIndexOf, addr 0xa117ca0, size 0x508, virtual false, abstract: false, final false
inline int32_t LastIndexOf(::StringW  s, ::StringW  target, int32_t  start, int32_t  length, uint8_t*  targetSortKey, ::by_ref<::GlobalNamespace::SimpleCollator_Context>  ctx) ;

/// @brief Method LastIndexOfOrdinal, addr 0xa1181a8, size 0x138, virtual false, abstract: false, final false
inline int32_t LastIndexOfOrdinal(::StringW  s, ::StringW  target, int32_t  start, int32_t  length) ;

/// @brief Method LastIndexOfSortKey, addr 0xa1182e0, size 0x9c, virtual false, abstract: false, final false
inline int32_t LastIndexOfSortKey(::StringW  s, int32_t  start, int32_t  orgStart, int32_t  length, uint8_t*  sortkey, int32_t  ti, bool  noLv4, ::by_ref<::GlobalNamespace::SimpleCollator_Context>  ctx) ;

/// @brief Method Level1, addr 0xa113d4c, size 0x94, virtual false, abstract: false, final false
inline uint8_t Level1(int32_t  cp) ;

/// @brief Method Level2, addr 0xa113de0, size 0x138, virtual false, abstract: false, final false
inline uint8_t Level2(int32_t  cp, ::GlobalNamespace::SimpleCollator_ExtenderType  ext) ;

/// @brief Method MatchesBackward, addr 0xa11837c, size 0x1b0, virtual false, abstract: false, final false
inline bool MatchesBackward(::StringW  s, ::by_ref<int32_t>  idx, int32_t  end, int32_t  orgStart, int32_t  ti, uint8_t*  sortkey, bool  noLv4, ::by_ref<::GlobalNamespace::SimpleCollator_Context>  ctx) ;

/// @brief Method MatchesBackwardCore, addr 0xa118ad4, size 0x4a8, virtual false, abstract: false, final false
inline bool MatchesBackwardCore(::StringW  s, ::by_ref<int32_t>  idx, int32_t  end, int32_t  orgStart, int32_t  ti, uint8_t*  sortkey, bool  noLv4, ::GlobalNamespace::SimpleCollator_ExtenderType  ext, ::by_ref<::Mono::Globalization::Unicode::Contraction*>  ct, ::by_ref<::GlobalNamespace::SimpleCollator_Context>  ctx) ;

/// @brief Method MatchesForward, addr 0xa117afc, size 0x1a4, virtual false, abstract: false, final false
inline bool MatchesForward(::StringW  s, ::by_ref<int32_t>  idx, int32_t  end, int32_t  ti, uint8_t*  sortkey, bool  noLv4, ::by_ref<::GlobalNamespace::SimpleCollator_Context>  ctx) ;

/// @brief Method MatchesForwardCore, addr 0xa11852c, size 0x374, virtual false, abstract: false, final false
inline bool MatchesForwardCore(::StringW  s, ::by_ref<int32_t>  idx, int32_t  end, int32_t  ti, uint8_t*  sortkey, bool  noLv4, ::GlobalNamespace::SimpleCollator_ExtenderType  ext, ::by_ref<::Mono::Globalization::Unicode::Contraction*>  ct, ::by_ref<::GlobalNamespace::SimpleCollator_Context>  ctx) ;

/// @brief Method MatchesPrimitive, addr 0xa1188a0, size 0x234, virtual false, abstract: false, final false
inline bool MatchesPrimitive(::System::Globalization::CompareOptions  opt, uint8_t*  source, int32_t  si, ::GlobalNamespace::SimpleCollator_ExtenderType  ext, uint8_t*  target, int32_t  ti, bool  noLv4) ;

static inline ::Mono::Globalization::Unicode::SimpleCollator* New_ctor(::System::Globalization::CultureInfo*  culture) ;

/// @brief Method QuickIndexOf, addr 0xa117144, size 0x168, virtual false, abstract: false, final false
inline int32_t QuickIndexOf(::StringW  s, ::StringW  target, int32_t  start, int32_t  length, ::by_ref<bool>  testWasUnable) ;

/// @brief Method SetCJKTable, addr 0xa113b6c, size 0xdc, virtual false, abstract: false, final false
inline void SetCJKTable(::System::Globalization::CultureInfo*  culture, ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>  cjkIndexer, ::by_ref<uint8_t*>  catTable, ::by_ref<uint8_t*>  lv1Table, ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>  lv2Indexer, ::by_ref<uint8_t*>  lv2Table) ;

/// @brief Method System.Globalization.ISimpleCollator.Compare, addr 0xa11587c, size 0x4, virtual true, abstract: false, final true
inline int32_t System_Globalization_ISimpleCollator_Compare(::StringW  s1, int32_t  idx1, int32_t  len1, ::StringW  s2, int32_t  idx2, int32_t  len2, ::System::Globalization::CompareOptions  options) ;

/// @brief Method ToDashTypeValue, addr 0xa1145f0, size 0x28, virtual false, abstract: false, final false
static inline uint8_t ToDashTypeValue(::GlobalNamespace::SimpleCollator_ExtenderType  ext, ::System::Globalization::CompareOptions  opt) ;

constexpr uint8_t* const& __cordl_internal_get_cjkCatTable() const;

constexpr uint8_t*& __cordl_internal_get_cjkCatTable() ;

constexpr ::Mono::Globalization::Unicode::CodePointIndexer* const& __cordl_internal_get_cjkIndexer() const;

constexpr ::Mono::Globalization::Unicode::CodePointIndexer*& __cordl_internal_get_cjkIndexer() ;

constexpr uint8_t* const& __cordl_internal_get_cjkLv1Table() const;

constexpr uint8_t*& __cordl_internal_get_cjkLv1Table() ;

constexpr ::Mono::Globalization::Unicode::CodePointIndexer* const& __cordl_internal_get_cjkLv2Indexer() const;

constexpr ::Mono::Globalization::Unicode::CodePointIndexer*& __cordl_internal_get_cjkLv2Indexer() ;

constexpr uint8_t* const& __cordl_internal_get_cjkLv2Table() const;

constexpr uint8_t*& __cordl_internal_get_cjkLv2Table() ;

constexpr ::ArrayW<::Mono::Globalization::Unicode::Contraction*> const& __cordl_internal_get_contractions() const;

constexpr ::ArrayW<::Mono::Globalization::Unicode::Contraction*>& __cordl_internal_get_contractions() ;

constexpr bool const& __cordl_internal_get_frenchSort() const;

constexpr bool& __cordl_internal_get_frenchSort() ;

constexpr int32_t const& __cordl_internal_get_lcid() const;

constexpr int32_t& __cordl_internal_get_lcid() ;

constexpr ::ArrayW<::Mono::Globalization::Unicode::Level2Map*> const& __cordl_internal_get_level2Maps() const;

constexpr ::ArrayW<::Mono::Globalization::Unicode::Level2Map*>& __cordl_internal_get_level2Maps() ;

constexpr ::System::Globalization::TextInfo* const& __cordl_internal_get_textInfo() const;

constexpr ::System::Globalization::TextInfo*& __cordl_internal_get_textInfo() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_unsafeFlags() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_unsafeFlags() ;

constexpr void __cordl_internal_set_cjkCatTable(uint8_t*  value) ;

constexpr void __cordl_internal_set_cjkIndexer(::Mono::Globalization::Unicode::CodePointIndexer*  value) ;

constexpr void __cordl_internal_set_cjkLv1Table(uint8_t*  value) ;

constexpr void __cordl_internal_set_cjkLv2Indexer(::Mono::Globalization::Unicode::CodePointIndexer*  value) ;

constexpr void __cordl_internal_set_cjkLv2Table(uint8_t*  value) ;

constexpr void __cordl_internal_set_contractions(::ArrayW<::Mono::Globalization::Unicode::Contraction*>  value) ;

constexpr void __cordl_internal_set_frenchSort(bool  value) ;

constexpr void __cordl_internal_set_lcid(int32_t  value) ;

constexpr void __cordl_internal_set_level2Maps(::ArrayW<::Mono::Globalization::Unicode::Level2Map*>  value) ;

constexpr void __cordl_internal_set_textInfo(::System::Globalization::TextInfo*  value) ;

constexpr void __cordl_internal_set_unsafeFlags(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0xa11382c, size 0x340, virtual false, abstract: false, final false
inline void _ctor(::System::Globalization::CultureInfo*  culture) ;

static inline ::Mono::Globalization::Unicode::SimpleCollator* getStaticF_invariant() ;

/// @brief Convert to "::System::Globalization::ISimpleCollator"
constexpr ::System::Globalization::ISimpleCollator* i___System__Globalization__ISimpleCollator() noexcept;

static inline void setStaticF_invariant(::Mono::Globalization::Unicode::SimpleCollator*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleCollator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleCollator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleCollator(SimpleCollator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleCollator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleCollator(SimpleCollator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5371};

/// @brief Field textInfo, offset: 0x10, size: 0x8, def value: None
 ::System::Globalization::TextInfo*  ___textInfo;

/// @brief Field cjkIndexer, offset: 0x18, size: 0x8, def value: None
 ::Mono::Globalization::Unicode::CodePointIndexer*  ___cjkIndexer;

/// @brief Field contractions, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Mono::Globalization::Unicode::Contraction*>  ___contractions;

/// @brief Field level2Maps, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Mono::Globalization::Unicode::Level2Map*>  ___level2Maps;

/// @brief Field unsafeFlags, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___unsafeFlags;

/// @brief Field cjkCatTable, offset: 0x38, size: 0x8, def value: None
 uint8_t*  ___cjkCatTable;

/// @brief Field cjkLv1Table, offset: 0x40, size: 0x8, def value: None
 uint8_t*  ___cjkLv1Table;

/// @brief Field cjkLv2Table, offset: 0x48, size: 0x8, def value: None
 uint8_t*  ___cjkLv2Table;

/// @brief Field cjkLv2Indexer, offset: 0x50, size: 0x8, def value: None
 ::Mono::Globalization::Unicode::CodePointIndexer*  ___cjkLv2Indexer;

/// @brief Field lcid, offset: 0x58, size: 0x4, def value: None
 int32_t  ___lcid;

/// @brief Field frenchSort, offset: 0x5c, size: 0x1, def value: None
 bool  ___frenchSort;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___textInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___cjkIndexer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___contractions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___level2Maps) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___unsafeFlags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___cjkCatTable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___cjkLv1Table) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___cjkLv2Table) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___cjkLv2Indexer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___lcid) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___frenchSort) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::Mono::Globalization::Unicode::SimpleCollator) == 0x60, "Size mismatch!");

} // namespace end def Mono::Globalization::Unicode

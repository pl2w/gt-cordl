#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleSheetCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSheetCache)
namespace GlobalNamespace {
struct StyleSheetCache_SheetHandleKey;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements::StyleSheets {
class StyleSheetCache_SheetHandleKeyComparer;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StyleSheetCache;
}
namespace UnityEngine::UIElements::StyleSheets {
class StyleSheetCache_SheetHandleKeyComparer;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StyleSheets::StyleSheetCache*);
MARK_REF_T(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheets::StyleSheetCache*, "UnityEngine.UIElements.StyleSheets", "StyleSheetCache");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*, "UnityEngine.UIElements.StyleSheets", "StyleSheetCache/SheetHandleKeyComparer");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies System.Object
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.StyleSheetCache
class CORDL_TYPE StyleSheetCache : public ::System::Object {
public:
// Declarations
using SheetHandleKey = ::GlobalNamespace::StyleSheetCache_SheetHandleKey;

using SheetHandleKeyComparer = ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer;

/// @brief Field s_Comparer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Comparer, put=setStaticF_s_Comparer)) ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*  s_Comparer;

/// @brief Field s_RulePropertyIdsCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RulePropertyIdsCache, put=setStaticF_s_RulePropertyIdsCache)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StyleSheetCache_SheetHandleKey,::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>>*  s_RulePropertyIdsCache;

/// @brief Method GetPropertyId, addr 0xb815104, size 0xf4, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId GetPropertyId(::UnityEngine::UIElements::StyleRule*  rule, int32_t  index) ;

/// @brief Method GetPropertyIds, addr 0xb8151f8, size 0xe0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId> GetPropertyIds(::UnityEngine::UIElements::StyleRule*  rule) ;

/// @brief Method GetPropertyIds, addr 0xb80f2cc, size 0x1bc, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId> GetPropertyIds(::UnityEngine::UIElements::StyleSheet*  sheet, int32_t  ruleIndex) ;

static inline ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer* getStaticF_s_Comparer() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StyleSheetCache_SheetHandleKey,::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>>* getStaticF_s_RulePropertyIdsCache() ;

static inline void setStaticF_s_Comparer(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*  value) ;

static inline void setStaticF_s_RulePropertyIdsCache(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StyleSheetCache_SheetHandleKey,::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyleSheetCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyleSheetCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StyleSheetCache(StyleSheetCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyleSheetCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyleSheetCache(StyleSheetCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8701};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StyleSheets::StyleSheetCache) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
// Dependencies System.Object
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.StyleSheetCache/SheetHandleKeyComparer
class CORDL_TYPE StyleSheetCache_SheetHandleKeyComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StyleSheetCache_SheetHandleKey>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StyleSheetCache_SheetHandleKey>*() noexcept;

/// @brief Method Equals, addr 0xb8153c4, size 0xc, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::StyleSheetCache_SheetHandleKey  x, ::GlobalNamespace::StyleSheetCache_SheetHandleKey  y) ;

/// @brief Method GetHashCode, addr 0xb8153d0, size 0x3c, virtual true, abstract: false, final true
inline int32_t GetHashCode(::GlobalNamespace::StyleSheetCache_SheetHandleKey  key) ;

static inline ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer* New_ctor() ;

/// @brief Method .ctor, addr 0xb8153bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StyleSheetCache_SheetHandleKey>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StyleSheetCache_SheetHandleKey>* i___System__Collections__Generic__IEqualityComparer_1___GlobalNamespace__StyleSheetCache_SheetHandleKey_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyleSheetCache_SheetHandleKeyComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyleSheetCache_SheetHandleKeyComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StyleSheetCache_SheetHandleKeyComparer(StyleSheetCache_SheetHandleKeyComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyleSheetCache_SheetHandleKeyComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyleSheetCache_SheetHandleKeyComparer(StyleSheetCache_SheetHandleKeyComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8700};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets

#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__ScalableImage_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_ImportStruct_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSheet)
namespace GlobalNamespace {
struct StyleSheet_ImportStruct;
}
namespace GlobalNamespace {
struct StyleSheet_OrderedSelectorType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Enum;
}
namespace UnityEngine::UIElements::StyleSheets {
struct Dimension;
}
namespace UnityEngine::UIElements::StyleSheets {
struct ScalableImage;
}
namespace UnityEngine::UIElements {
struct Angle;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace UnityEngine::UIElements {
struct StyleValueFunction;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
namespace UnityEngine::UIElements {
struct StyleValueKeyword;
}
namespace UnityEngine::UIElements {
struct StyleValueType;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleSheet;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StyleSheet*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheet*, "UnityEngine.UIElements", "StyleSheet");
// [HelpURL("UIE-USS")]
// Dependencies System.Collections.Generic.Dictionary`2<TKey, TValue>, UnityEngine.Color, UnityEngine.Object, UnityEngine.ScriptableObject, UnityEngine.UIElements.StyleComplexSelector, UnityEngine.UIElements.StyleRule, UnityEngine.UIElements.StyleSheet::ImportStruct, UnityEngine.UIElements.StyleSheets.Dimension, UnityEngine.UIElements.StyleSheets.ScalableImage
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheet
class CORDL_TYPE StyleSheet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using ImportStruct = ::GlobalNamespace::StyleSheet_ImportStruct;

using OrderedSelectorType = ::GlobalNamespace::StyleSheet_OrderedSelectorType;

/// @brief Field assets, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_assets, put=__cordl_internal_set_assets)) ::ArrayW<::UnityW<::UnityEngine::Object>>  assets;

/// @brief Field colors, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_colors, put=__cordl_internal_set_colors)) ::ArrayW<::UnityEngine::Color>  colors;

/// @brief [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
 __declspec(property(get=get_complexSelectors, put=set_complexSelectors)) ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*>  complexSelectors;

 __declspec(property(get=get_contentHash, put=set_contentHash)) int32_t  contentHash;

/// @brief Field dimensions, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_dimensions, put=__cordl_internal_set_dimensions)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension>  dimensions;

/// @brief Field firstRootSelector, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_firstRootSelector, put=__cordl_internal_set_firstRootSelector)) ::UnityEngine::UIElements::StyleComplexSelector*  firstRootSelector;

/// @brief Field firstWildCardSelector, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_firstWildCardSelector, put=__cordl_internal_set_firstWildCardSelector)) ::UnityEngine::UIElements::StyleComplexSelector*  firstWildCardSelector;

 __declspec(property(get=get_flattenedRecursiveImports)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*  flattenedRecursiveImports;

/// @brief Field floats, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_floats, put=__cordl_internal_set_floats)) ::ArrayW<float_t>  floats;

 __declspec(property(get=get_importedWithErrors, put=set_importedWithErrors)) bool  importedWithErrors;

 __declspec(property(get=get_importedWithWarnings, put=set_importedWithWarnings)) bool  importedWithWarnings;

/// @brief Field imports, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_imports, put=__cordl_internal_set_imports)) ::ArrayW<::GlobalNamespace::StyleSheet_ImportStruct>  imports;

/// @brief [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
 __declspec(property(get=get_isDefaultStyleSheet, put=set_isDefaultStyleSheet)) bool  isDefaultStyleSheet;

/// @brief Field kCustomPropertyMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kCustomPropertyMarker, put=setStaticF_kCustomPropertyMarker)) ::StringW  kCustomPropertyMarker;

/// @brief Field m_ComplexSelectors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ComplexSelectors, put=__cordl_internal_set_m_ComplexSelectors)) ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*>  m_ComplexSelectors;

/// @brief Field m_ContentHash, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ContentHash, put=__cordl_internal_set_m_ContentHash)) int32_t  m_ContentHash;

/// @brief Field m_FlattenedImportedStyleSheets, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FlattenedImportedStyleSheets, put=__cordl_internal_set_m_FlattenedImportedStyleSheets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*  m_FlattenedImportedStyleSheets;

/// @brief Field m_ImportedWithErrors, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ImportedWithErrors, put=__cordl_internal_set_m_ImportedWithErrors)) bool  m_ImportedWithErrors;

/// @brief Field m_ImportedWithWarnings, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ImportedWithWarnings, put=__cordl_internal_set_m_ImportedWithWarnings)) bool  m_ImportedWithWarnings;

/// @brief Field m_IsDefaultStyleSheet, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsDefaultStyleSheet, put=__cordl_internal_set_m_IsDefaultStyleSheet)) bool  m_IsDefaultStyleSheet;

/// @brief Field m_Rules, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Rules, put=__cordl_internal_set_m_Rules)) ::ArrayW<::UnityEngine::UIElements::StyleRule*>  m_Rules;

/// @brief Field nonEmptyTablesMask, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_nonEmptyTablesMask, put=__cordl_internal_set_nonEmptyTablesMask)) int32_t  nonEmptyTablesMask;

/// @brief [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
 __declspec(property(get=get_rules, put=set_rules)) ::ArrayW<::UnityEngine::UIElements::StyleRule*>  rules;

/// @brief Field scalableImages, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_scalableImages, put=__cordl_internal_set_scalableImages)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage>  scalableImages;

/// @brief Field strings, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_strings, put=__cordl_internal_set_strings)) ::ArrayW<::StringW>  strings;

/// @brief Field tables, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_tables, put=__cordl_internal_set_tables)) ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*>  tables;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method AddValue, addr 0xb78f4fc, size 0x48, virtual false, abstract: false, final false
inline int32_t AddValue(::UnityEngine::UIElements::StyleValueFunction  function) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method AddValue, addr 0xb78f478, size 0x48, virtual false, abstract: false, final false
inline int32_t AddValue(::UnityEngine::UIElements::StyleValueKeyword  keyword) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method AddValue, addr 0xb78f6dc, size 0x5c, virtual false, abstract: false, final false
inline int32_t AddValue(::StringW  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method AddValue, addr 0xb78f794, size 0x88, virtual false, abstract: false, final false
inline int32_t AddValue(::System::Enum*  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method AddValue, addr 0xb78f5fc, size 0x7c, virtual false, abstract: false, final false
inline int32_t AddValue(::UnityEngine::Color  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method AddValue, addr 0xb78f738, size 0x5c, virtual false, abstract: false, final false
inline int32_t AddValue(::UnityEngine::Object*  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method AddValue, addr 0xb78f5a0, size 0x5c, virtual false, abstract: false, final false
inline int32_t AddValue(::UnityEngine::UIElements::StyleSheets::Dimension  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method AddValue, addr 0xb78f678, size 0x64, virtual false, abstract: false, final false
inline int32_t AddValue(::UnityEngine::UIElements::StyleSheets::ScalableImage  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method AddValue, addr 0xb78f544, size 0x5c, virtual false, abstract: false, final false
inline int32_t AddValue(float_t  value) ;

/// @brief Method AddValueToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline int32_t AddValueToArray(::by_ref<::ArrayW<T>>  array, T  value) ;

/// @brief Method CheckAccess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T CheckAccess(::ArrayW<T>  list, ::UnityEngine::UIElements::StyleValueType  type, ::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method CustomStartsWith, addr 0xb78f390, size 0xc4, virtual false, abstract: false, final false
static inline bool CustomStartsWith(::StringW  originalString, ::StringW  pattern) ;

/// @brief Method FlattenImportedStyleSheetsRecursive, addr 0xb78f1b8, size 0x88, virtual false, abstract: false, final false
inline void FlattenImportedStyleSheetsRecursive() ;

/// @brief Method FlattenImportedStyleSheetsRecursive, addr 0xb78f240, size 0x150, virtual false, abstract: false, final false
inline void FlattenImportedStyleSheetsRecursive(::UnityEngine::UIElements::StyleSheet*  sheet) ;

static inline ::UnityEngine::UIElements::StyleSheet* New_ctor() ;

/// @brief Method OnEnable, addr 0xb78f1b4, size 0x4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadAngle, addr 0xb790838, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Angle ReadAngle(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method ReadAssetReference, addr 0xb7900b8, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> ReadAssetReference(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method ReadColor, addr 0xb78fbac, size 0xd4, virtual false, abstract: false, final false
inline ::UnityEngine::Color ReadColor(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method ReadDimension, addr 0xb78fa14, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleSheets::Dimension ReadDimension(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method ReadEnum, addr 0xb78fc80, size 0x60, virtual false, abstract: false, final false
inline ::StringW ReadEnum(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method ReadEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline TEnum ReadEnum(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method ReadFloat, addr 0xb78f8b4, size 0xa0, virtual false, abstract: false, final false
inline float_t ReadFloat(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method ReadFunction, addr 0xb790248, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleValueFunction ReadFunction(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method ReadFunctionName, addr 0xb790264, size 0x188, virtual false, abstract: false, final false
inline ::StringW ReadFunctionName(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method ReadKeyword, addr 0xb78f890, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleValueKeyword ReadKeyword(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method ReadLength, addr 0xb790734, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Length ReadLength(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method ReadMissingAssetReferenceUrl, addr 0xb790118, size 0x60, virtual false, abstract: false, final false
inline ::StringW ReadMissingAssetReferenceUrl(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method ReadResourcePath, addr 0xb78fff0, size 0x60, virtual false, abstract: false, final false
inline ::StringW ReadResourcePath(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method ReadScalableImage, addr 0xb79053c, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleSheets::ScalableImage ReadScalableImage(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method ReadString, addr 0xb78fdf8, size 0x60, virtual false, abstract: false, final false
inline ::StringW ReadString(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method ReadStylePropertyName, addr 0xb790604, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StylePropertyName ReadStylePropertyName(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method ReadTimeValue, addr 0xb790914, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::TimeValue ReadTimeValue(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method ReadVariable, addr 0xb78ff28, size 0x60, virtual false, abstract: false, final false
inline ::StringW ReadVariable(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method SetTemporaryContentHash, addr 0xb78f4c0, size 0x3c, virtual false, abstract: false, final false
inline void SetTemporaryContentHash() ;

/// @brief Method SetupReferences, addr 0xb78e98c, size 0x6a4, virtual false, abstract: false, final false
inline void SetupReferences() ;

/// @brief Method TryCheckAccess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryCheckAccess(::ArrayW<T>  list, ::UnityEngine::UIElements::StyleValueType  type, ::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<T>  value) ;

/// @brief Method TryReadAngle, addr 0xb790898, size 0x7c, virtual false, abstract: false, final false
inline bool TryReadAngle(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<::UnityEngine::UIElements::Angle>  value) ;

/// @brief Method TryReadAssetReference, addr 0xb7901e0, size 0x68, virtual false, abstract: false, final false
inline bool TryReadAssetReference(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<::UnityEngine::Object*>  value) ;

/// @brief Method TryReadColor, addr 0xb78fce0, size 0x118, virtual false, abstract: false, final false
inline bool TryReadColor(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method TryReadDimension, addr 0xb78fad0, size 0xdc, virtual false, abstract: false, final false
inline bool TryReadDimension(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<::UnityEngine::UIElements::StyleSheets::Dimension>  value) ;

/// @brief Method TryReadEnum, addr 0xb78fec0, size 0x68, virtual false, abstract: false, final false
inline bool TryReadEnum(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<::StringW>  value) ;

/// @brief Method TryReadEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline bool TryReadEnum(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<TEnum>  value) ;

/// @brief Method TryReadFloat, addr 0xb78f954, size 0xc0, virtual false, abstract: false, final false
inline bool TryReadFloat(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<float_t>  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method TryReadFunction, addr 0xb790250, size 0x14, virtual false, abstract: false, final false
inline bool TryReadFunction(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<::UnityEngine::UIElements::StyleValueFunction>  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method TryReadKeyword, addr 0xb78f898, size 0x14, virtual false, abstract: false, final false
inline bool TryReadKeyword(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<::UnityEngine::UIElements::StyleValueKeyword>  value) ;

/// @brief Method TryReadLength, addr 0xb7907a8, size 0x90, virtual false, abstract: false, final false
inline bool TryReadLength(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<::UnityEngine::UIElements::Length>  value) ;

/// @brief Method TryReadMissingAssetReferenceUrl, addr 0xb790178, size 0x68, virtual false, abstract: false, final false
inline bool TryReadMissingAssetReferenceUrl(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<::StringW>  value) ;

/// @brief Method TryReadResourcePath, addr 0xb790050, size 0x68, virtual false, abstract: false, final false
inline bool TryReadResourcePath(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<::StringW>  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method TryReadScalableImage, addr 0xb79059c, size 0x68, virtual false, abstract: false, final false
inline bool TryReadScalableImage(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<::UnityEngine::UIElements::StyleSheets::ScalableImage>  value) ;

/// @brief Method TryReadString, addr 0xb78fe58, size 0x68, virtual false, abstract: false, final false
inline bool TryReadString(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<::StringW>  value) ;

/// @brief Method TryReadStylePropertyName, addr 0xb790684, size 0xb0, virtual false, abstract: false, final false
inline bool TryReadStylePropertyName(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<::UnityEngine::UIElements::StylePropertyName>  value) ;

/// @brief Method TryReadTimeValue, addr 0xb79094c, size 0x5c, virtual false, abstract: false, final false
inline bool TryReadTimeValue(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<::UnityEngine::UIElements::TimeValue>  value) ;

/// @brief Method TryReadVariable, addr 0xb78ff88, size 0x68, virtual false, abstract: false, final false
inline bool TryReadVariable(::UnityEngine::UIElements::StyleValueHandle  handle, ::by_ref<::StringW>  value) ;

/// @brief Method WriteAngle, addr 0xb791350, size 0xc8, virtual false, abstract: false, final false
inline void WriteAngle(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, ::UnityEngine::UIElements::Angle  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method WriteAssetReference, addr 0xb790e1c, size 0xcc, virtual false, abstract: false, final false
inline void WriteAssetReference(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, ::UnityEngine::Object*  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method WriteColor, addr 0xb790b18, size 0x94, virtual false, abstract: false, final false
inline void WriteColor(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, ::UnityEngine::Color  color) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method WriteCommaSeparator, addr 0xb791104, size 0x48, virtual false, abstract: false, final false
inline void WriteCommaSeparator(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method WriteDimension, addr 0xb790a84, size 0x94, virtual false, abstract: false, final false
inline void WriteDimension(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, ::UnityEngine::UIElements::StyleSheets::Dimension  dimension) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method WriteEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
inline void WriteEnum(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, TEnum  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method WriteEnumAsString, addr 0xb790c48, size 0x9c, virtual false, abstract: false, final false
inline void WriteEnumAsString(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, ::StringW  valueStr) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method WriteFloat, addr 0xb7909f4, size 0x90, virtual false, abstract: false, final false
inline void WriteFloat(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, float_t  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method WriteFunction, addr 0xb790f84, size 0x44, virtual false, abstract: false, final false
inline void WriteFunction(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, ::UnityEngine::UIElements::StyleValueFunction  function) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method WriteKeyword, addr 0xb7909a8, size 0x44, virtual false, abstract: false, final false
inline void WriteKeyword(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, ::UnityEngine::UIElements::StyleValueKeyword  value) ;

/// @brief Method WriteLength, addr 0xb79114c, size 0xe4, virtual false, abstract: false, final false
inline void WriteLength(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, ::UnityEngine::UIElements::Length  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method WriteMissingAssetReferenceUrl, addr 0xb790ee8, size 0x9c, virtual false, abstract: false, final false
inline void WriteMissingAssetReferenceUrl(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, ::StringW  assetReference) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method WriteResourcePath, addr 0xb790d80, size 0x9c, virtual false, abstract: false, final false
inline void WriteResourcePath(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, ::StringW  resourcePath) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method WriteScalableImage, addr 0xb790fc8, size 0xa0, virtual false, abstract: false, final false
inline void WriteScalableImage(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, ::UnityEngine::UIElements::StyleSheets::ScalableImage  scalableImage) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method WriteString, addr 0xb790bac, size 0x9c, virtual false, abstract: false, final false
inline void WriteString(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, ::StringW  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method WriteStylePropertyName, addr 0xb791068, size 0x9c, virtual false, abstract: false, final false
inline void WriteStylePropertyName(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, ::UnityEngine::UIElements::StylePropertyName  propertyName) ;

/// @brief Method WriteTimeValue, addr 0xb791528, size 0x74, virtual false, abstract: false, final false
inline void WriteTimeValue(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, ::UnityEngine::UIElements::TimeValue  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method WriteVariable, addr 0xb790ce4, size 0x9c, virtual false, abstract: false, final false
inline void WriteVariable(::by_ref<::UnityEngine::UIElements::StyleValueHandle>  handle, ::StringW  variableName) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Object>> const& __cordl_internal_get_assets() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Object>>& __cordl_internal_get_assets() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_colors() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_colors() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension> const& __cordl_internal_get_dimensions() const;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension>& __cordl_internal_get_dimensions() ;

constexpr ::UnityEngine::UIElements::StyleComplexSelector* const& __cordl_internal_get_firstRootSelector() const;

constexpr ::UnityEngine::UIElements::StyleComplexSelector*& __cordl_internal_get_firstRootSelector() ;

constexpr ::UnityEngine::UIElements::StyleComplexSelector* const& __cordl_internal_get_firstWildCardSelector() const;

constexpr ::UnityEngine::UIElements::StyleComplexSelector*& __cordl_internal_get_firstWildCardSelector() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_floats() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_floats() ;

constexpr ::ArrayW<::GlobalNamespace::StyleSheet_ImportStruct> const& __cordl_internal_get_imports() const;

constexpr ::ArrayW<::GlobalNamespace::StyleSheet_ImportStruct>& __cordl_internal_get_imports() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> const& __cordl_internal_get_m_ComplexSelectors() const;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*>& __cordl_internal_get_m_ComplexSelectors() ;

constexpr int32_t const& __cordl_internal_get_m_ContentHash() const;

constexpr int32_t& __cordl_internal_get_m_ContentHash() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* const& __cordl_internal_get_m_FlattenedImportedStyleSheets() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*& __cordl_internal_get_m_FlattenedImportedStyleSheets() ;

constexpr bool const& __cordl_internal_get_m_ImportedWithErrors() const;

constexpr bool& __cordl_internal_get_m_ImportedWithErrors() ;

constexpr bool const& __cordl_internal_get_m_ImportedWithWarnings() const;

constexpr bool& __cordl_internal_get_m_ImportedWithWarnings() ;

constexpr bool const& __cordl_internal_get_m_IsDefaultStyleSheet() const;

constexpr bool& __cordl_internal_get_m_IsDefaultStyleSheet() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleRule*> const& __cordl_internal_get_m_Rules() const;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleRule*>& __cordl_internal_get_m_Rules() ;

constexpr int32_t const& __cordl_internal_get_nonEmptyTablesMask() const;

constexpr int32_t& __cordl_internal_get_nonEmptyTablesMask() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage> const& __cordl_internal_get_scalableImages() const;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage>& __cordl_internal_get_scalableImages() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_strings() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_strings() ;

constexpr ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*> const& __cordl_internal_get_tables() const;

constexpr ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*>& __cordl_internal_get_tables() ;

constexpr void __cordl_internal_set_assets(::ArrayW<::UnityW<::UnityEngine::Object>>  value) ;

constexpr void __cordl_internal_set_colors(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_dimensions(::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension>  value) ;

constexpr void __cordl_internal_set_firstRootSelector(::UnityEngine::UIElements::StyleComplexSelector*  value) ;

constexpr void __cordl_internal_set_firstWildCardSelector(::UnityEngine::UIElements::StyleComplexSelector*  value) ;

constexpr void __cordl_internal_set_floats(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_imports(::ArrayW<::GlobalNamespace::StyleSheet_ImportStruct>  value) ;

constexpr void __cordl_internal_set_m_ComplexSelectors(::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*>  value) ;

constexpr void __cordl_internal_set_m_ContentHash(int32_t  value) ;

constexpr void __cordl_internal_set_m_FlattenedImportedStyleSheets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*  value) ;

constexpr void __cordl_internal_set_m_ImportedWithErrors(bool  value) ;

constexpr void __cordl_internal_set_m_ImportedWithWarnings(bool  value) ;

constexpr void __cordl_internal_set_m_IsDefaultStyleSheet(bool  value) ;

constexpr void __cordl_internal_set_m_Rules(::ArrayW<::UnityEngine::UIElements::StyleRule*>  value) ;

constexpr void __cordl_internal_set_nonEmptyTablesMask(int32_t  value) ;

constexpr void __cordl_internal_set_scalableImages(::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage>  value) ;

constexpr void __cordl_internal_set_strings(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_tables(::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*>  value) ;

/// @brief Method .ctor, addr 0xb79161c, size 0x4c0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_kCustomPropertyMarker() ;

/// @brief Method get_complexSelectors, addr 0xb78f030, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> get_complexSelectors() ;

/// @brief Method get_contentHash, addr 0xb78f05c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_contentHash() ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method get_flattenedRecursiveImports, addr 0xb78f054, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* get_flattenedRecursiveImports() ;

/// @brief Method get_importedWithErrors, addr 0xb78e948, size 0x8, virtual false, abstract: false, final false
inline bool get_importedWithErrors() ;

/// @brief Method get_importedWithWarnings, addr 0xb78e958, size 0x8, virtual false, abstract: false, final false
inline bool get_importedWithWarnings() ;

/// @brief Method get_isDefaultStyleSheet, addr 0xb78f06c, size 0x8, virtual false, abstract: false, final false
inline bool get_isDefaultStyleSheet() ;

/// @brief Method get_rules, addr 0xb78e968, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::UIElements::StyleRule*> get_rules() ;

static inline void setStaticF_kCustomPropertyMarker(::StringW  value) ;

/// @brief Method set_complexSelectors, addr 0xb78f038, size 0x1c, virtual false, abstract: false, final false
inline void set_complexSelectors(::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*>  value) ;

/// @brief Method set_contentHash, addr 0xb78f064, size 0x8, virtual false, abstract: false, final false
inline void set_contentHash(int32_t  value) ;

/// @brief Method set_importedWithErrors, addr 0xb78e950, size 0x8, virtual false, abstract: false, final false
inline void set_importedWithErrors(bool  value) ;

/// @brief Method set_importedWithWarnings, addr 0xb78e960, size 0x8, virtual false, abstract: false, final false
inline void set_importedWithWarnings(bool  value) ;

/// @brief Method set_isDefaultStyleSheet, addr 0xb78f074, size 0x140, virtual false, abstract: false, final false
inline void set_isDefaultStyleSheet(bool  value) ;

/// @brief Method set_rules, addr 0xb78e970, size 0x1c, virtual false, abstract: false, final false
inline void set_rules(::ArrayW<::UnityEngine::UIElements::StyleRule*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyleSheet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyleSheet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StyleSheet(StyleSheet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyleSheet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyleSheet(StyleSheet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8274};

/// [SerializeField]
/// @brief Field m_ImportedWithErrors, offset: 0x18, size: 0x1, def value: None
 bool  ___m_ImportedWithErrors;

/// [SerializeField]
/// @brief Field m_ImportedWithWarnings, offset: 0x19, size: 0x1, def value: None
 bool  ___m_ImportedWithWarnings;

/// [SerializeField]
/// @brief Field m_Rules, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIElements::StyleRule*>  ___m_Rules;

/// [SerializeField]
/// @brief Field m_ComplexSelectors, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*>  ___m_ComplexSelectors;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// [SerializeField]
/// @brief Field floats, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ___floats;

/// [SerializeField]
/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Field dimensions, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension>  ___dimensions;

/// [SerializeField]
/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Field colors, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___colors;

/// [SerializeField]
/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Field strings, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___strings;

/// [SerializeField]
/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Field assets, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Object>>  ___assets;

/// [SerializeField]
/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Field imports, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::StyleSheet_ImportStruct>  ___imports;

/// [SerializeField]
/// @brief Field m_FlattenedImportedStyleSheets, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*  ___m_FlattenedImportedStyleSheets;

/// [SerializeField]
/// @brief Field m_ContentHash, offset: 0x68, size: 0x4, def value: None
 int32_t  ___m_ContentHash;

/// [SerializeField]
/// @brief Field scalableImages, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage>  ___scalableImages;

/// @brief Field tables, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*>  ___tables;

/// @brief Field nonEmptyTablesMask, offset: 0x80, size: 0x4, def value: None
 int32_t  ___nonEmptyTablesMask;

/// @brief Field firstRootSelector, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::UIElements::StyleComplexSelector*  ___firstRootSelector;

/// @brief Field firstWildCardSelector, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::UIElements::StyleComplexSelector*  ___firstWildCardSelector;

/// @brief Field m_IsDefaultStyleSheet, offset: 0x98, size: 0x1, def value: None
 bool  ___m_IsDefaultStyleSheet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_ImportedWithErrors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_ImportedWithWarnings) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_Rules) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_ComplexSelectors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___floats) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___dimensions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___colors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___strings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___assets) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___imports) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_FlattenedImportedStyleSheets) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_ContentHash) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___scalableImages) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___tables) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___nonEmptyTablesMask) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___firstRootSelector) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___firstWildCardSelector) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_IsDefaultStyleSheet) == 0x98, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleSheet) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::UIElements

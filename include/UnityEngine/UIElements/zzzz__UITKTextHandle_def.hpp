#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UITKTextHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include "beatsaber-hook/shared/valuew.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UITKTextHandle)
namespace GlobalNamespace {
struct RichTextTagParser_TagType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct RenderedText;
}
namespace UnityEngine::TextCore::Text {
struct TextOverflowMode;
}
namespace UnityEngine::UIElements {
class ATGTextEventHandler;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class TextEventHandler;
}
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UITKTextHandle;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UITKTextHandle*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UITKTextHandle*, "UnityEngine.UIElements", "UITKTextHandle");
// Dependencies System.Nullable`1<T>, UnityEngine.Color, UnityEngine.TextCore.Text.TextHandle, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UITKTextHandle
class CORDL_TYPE UITKTextHandle : public ::UnityEngine::TextCore::Text::TextHandle {
public:
// Declarations
 __declspec(property(get=get_ATGMeasuredSizes, put=set_ATGMeasuredSizes)) ::UnityEngine::Vector2  ATGMeasuredSizes;

 __declspec(property(get=get_ATGRoundedSizes, put=set_ATGRoundedSizes)) ::UnityEngine::Vector2  ATGRoundedSizes;

 __declspec(property(get=get_IsPlaceholder)) bool  IsPlaceholder;

 __declspec(property(get=get_LastPixelPerPoint, put=set_LastPixelPerPoint)) float_t  LastPixelPerPoint;

 __declspec(property(get=get_Links)) ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::GlobalNamespace::RichTextTagParser_TagType,::StringW>>*  Links;

 __declspec(property(get=get_MeasuredWidth, put=set_MeasuredWidth)) ::System::Nullable_1<float_t>  MeasuredWidth;

 __declspec(property(get=get_RoundedWidth, put=set_RoundedWidth)) float_t  RoundedWidth;

/// @brief Field <ATGMeasuredSizes>k__BackingField, offset 0xf4, size 0x8 
 __declspec(property(get=__cordl_internal_get__ATGMeasuredSizes_k__BackingField, put=__cordl_internal_set__ATGMeasuredSizes_k__BackingField)) ::UnityEngine::Vector2  _ATGMeasuredSizes_k__BackingField;

/// @brief Field <ATGRoundedSizes>k__BackingField, offset 0xfc, size 0x8 
 __declspec(property(get=__cordl_internal_get__ATGRoundedSizes_k__BackingField, put=__cordl_internal_set__ATGRoundedSizes_k__BackingField)) ::UnityEngine::Vector2  _ATGRoundedSizes_k__BackingField;

/// @brief Field <LastPixelPerPoint>k__BackingField, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastPixelPerPoint_k__BackingField, put=__cordl_internal_set__LastPixelPerPoint_k__BackingField)) float_t  _LastPixelPerPoint_k__BackingField;

/// @brief Field <MeasuredWidth>k__BackingField, offset 0xe0, size 0x10 
 __declspec(property(get=__cordl_internal_get__MeasuredWidth_k__BackingField, put=__cordl_internal_set__MeasuredWidth_k__BackingField)) ::System::Nullable_1<float_t>  _MeasuredWidth_k__BackingField;

/// @brief Field <RoundedWidth>k__BackingField, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get__RoundedWidth_k__BackingField, put=__cordl_internal_set__RoundedWidth_k__BackingField)) float_t  _RoundedWidth_k__BackingField;

/// @brief Field atgHyperlinkColor, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get_atgHyperlinkColor, put=__cordl_internal_set_atgHyperlinkColor)) ::UnityEngine::Color  atgHyperlinkColor;

/// @brief Field k_MinPadding, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MinPadding, put=setStaticF_k_MinPadding)) float_t  k_MinPadding;

/// @brief Field m_ATGTextEventHandler, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ATGTextEventHandler, put=__cordl_internal_set_m_ATGTextEventHandler)) ::UnityEngine::UIElements::ATGTextEventHandler*  m_ATGTextEventHandler;

/// @brief Field m_Links, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Links, put=__cordl_internal_set_m_Links)) ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::GlobalNamespace::RichTextTagParser_TagType,::StringW>>*  m_Links;

/// @brief Field m_TextElement, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TextElement, put=__cordl_internal_set_m_TextElement)) ::UnityEngine::UIElements::TextElement*  m_TextElement;

/// @brief Field m_TextEventHandler, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TextEventHandler, put=__cordl_internal_set_m_TextEventHandler)) ::UnityEngine::UIElements::TextEventHandler*  m_TextEventHandler;

/// @brief Field s_TextLib, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TextLib, put=setStaticF_s_TextLib)) Il2CppObject*  s_TextLib;

 __declspec(property(get=get_textLib)) Il2CppObject*  textLib;

/// @brief Field wasAdvancedTextEnabledForElement, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasAdvancedTextEnabledForElement, put=__cordl_internal_set_wasAdvancedTextEnabledForElement)) bool  wasAdvancedTextEnabledForElement;

/// @brief Method ATGFindIntersectingLink, addr 0xb794f80, size 0x190, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::GlobalNamespace::RichTextTagParser_TagType,::StringW> ATGFindIntersectingLink(::UnityEngine::Vector2  point) ;

/// @brief Method AddToPermanentCacheAndGenerateMesh, addr 0xb797a14, size 0x7c, virtual true, abstract: false, final false
inline void AddToPermanentCacheAndGenerateMesh() ;

/// @brief Method CacheTextGenerationInfo, addr 0xb796acc, size 0x9c, virtual false, abstract: false, final false
inline void CacheTextGenerationInfo() ;

/// @brief Method ComputeNativeTextSize, addr 0xb7960f8, size 0x1f8, virtual false, abstract: false, final false
inline void ComputeNativeTextSize(/* [IsReadOnly] */ ::by_ref<::UnityEngine::TextCore::Text::RenderedText>  textToMeasure, float_t  width, float_t  height, ::System::Nullable_1<float_t>  fontsize) ;

/// @brief Method ComputeSettingsAndUpdate, addr 0xb797888, size 0x84, virtual false, abstract: false, final false
inline void ComputeSettingsAndUpdate() ;

/// @brief Method ComputeTextSize, addr 0xb797750, size 0x138, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ComputeTextSize(/* [IsReadOnly] */ ::by_ref<::UnityEngine::TextCore::Text::RenderedText>  textToMeasure, float_t  width, float_t  height, ::System::Nullable_1<float_t>  fontsize) ;

/// @brief Method ConvertUssToNativeTextGenerationSettings, addr 0xb7962f0, size 0x534, virtual false, abstract: false, final false
inline bool ConvertUssToNativeTextGenerationSettings(::System::Nullable_1<float_t>  fontsize) ;

/// @brief Method ConvertUssToTextGenerationSettings, addr 0xb797b30, size 0x780, virtual true, abstract: false, final false
inline bool ConvertUssToTextGenerationSettings(bool  populateScreenRect, ::System::Nullable_1<float_t>  fontsize) ;

/// @brief Method GetICUAsset, addr 0xb797200, size 0x214, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::TextAsset> GetICUAsset() ;

/// @brief Method GetICUAssetStaticFalback, addr 0xb797414, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::TextAsset> GetICUAssetStaticFalback() ;

/// @brief Method GetPixelsPerPoint, addr 0xb7976dc, size 0x18, virtual true, abstract: false, final false
inline float_t GetPixelsPerPoint() ;

/// @brief Method GetTextOverflowMode, addr 0xb797a90, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::TextCore::Text::TextOverflowMode GetTextOverflowMode() ;

/// @brief Method GetVertexPadding, addr 0xb797018, size 0x1e8, virtual false, abstract: false, final false
inline float_t GetVertexPadding(::UnityEngine::TextCore::Text::FontAsset*  fontAsset) ;

/// @brief Method HandleATag, addr 0xb7979d8, size 0x14, virtual false, abstract: false, final false
inline void HandleATag() ;

/// @brief Method HandleLinkAndATagCallbacks, addr 0xb797a00, size 0x14, virtual false, abstract: false, final false
inline void HandleLinkAndATagCallbacks() ;

/// @brief Method HandleLinkTag, addr 0xb7979ec, size 0x14, virtual false, abstract: false, final false
inline void HandleLinkTag() ;

/// @brief Method InitTextLib, addr 0xb797540, size 0xe0, virtual false, abstract: false, final false
inline void InitTextLib() ;

/// @brief Method IsAdvancedTextEnabledForElement, addr 0xb7983a4, size 0xc, virtual true, abstract: false, final false
inline bool IsAdvancedTextEnabledForElement() ;

/// @brief Method IsElided, addr 0xb79858c, size 0x4c, virtual false, abstract: false, final false
inline bool IsElided() ;

static inline ::UnityEngine::UIElements::UITKTextHandle* New_ctor(::UnityEngine::UIElements::TextElement*  te) ;

/// @brief Method ProcessMeshInfos, addr 0xb796b68, size 0xac, virtual false, abstract: false, final false
inline void ProcessMeshInfos(::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">  textInfo) ;

/// @brief Method ReleaseResourcesIfPossible, addr 0xb7983b0, size 0x1a8, virtual false, abstract: false, final false
inline void ReleaseResourcesIfPossible() ;

/// @brief Method SetDirty, addr 0xb797704, size 0xc, virtual true, abstract: false, final false
inline void SetDirty() ;

/// @brief Method TextLibraryCanElide, addr 0xb796e18, size 0x30, virtual false, abstract: false, final false
inline bool TextLibraryCanElide() ;

/// @brief Method UpdateATGTextEventHandler, addr 0xb796da8, size 0x70, virtual false, abstract: false, final false
inline void UpdateATGTextEventHandler() ;

/// @brief Method UpdateMesh, addr 0xb79790c, size 0xcc, virtual false, abstract: false, final false
inline void UpdateMesh() ;

/// @brief Method UpdateNative, addr 0xb796824, size 0x2a8, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">,bool> UpdateNative(bool  generateNativeSettings) ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__ATGMeasuredSizes_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__ATGMeasuredSizes_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__ATGRoundedSizes_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__ATGRoundedSizes_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__LastPixelPerPoint_k__BackingField() const;

constexpr float_t& __cordl_internal_get__LastPixelPerPoint_k__BackingField() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get__MeasuredWidth_k__BackingField() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get__MeasuredWidth_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__RoundedWidth_k__BackingField() const;

constexpr float_t& __cordl_internal_get__RoundedWidth_k__BackingField() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_atgHyperlinkColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_atgHyperlinkColor() ;

constexpr ::UnityEngine::UIElements::ATGTextEventHandler* const& __cordl_internal_get_m_ATGTextEventHandler() const;

constexpr ::UnityEngine::UIElements::ATGTextEventHandler*& __cordl_internal_get_m_ATGTextEventHandler() ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::GlobalNamespace::RichTextTagParser_TagType,::StringW>>* const& __cordl_internal_get_m_Links() const;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::GlobalNamespace::RichTextTagParser_TagType,::StringW>>*& __cordl_internal_get_m_Links() ;

constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_m_TextElement() const;

constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_m_TextElement() ;

constexpr ::UnityEngine::UIElements::TextEventHandler* const& __cordl_internal_get_m_TextEventHandler() const;

constexpr ::UnityEngine::UIElements::TextEventHandler*& __cordl_internal_get_m_TextEventHandler() ;

constexpr bool const& __cordl_internal_get_wasAdvancedTextEnabledForElement() const;

constexpr bool& __cordl_internal_get_wasAdvancedTextEnabledForElement() ;

constexpr void __cordl_internal_set__ATGMeasuredSizes_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__ATGRoundedSizes_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__LastPixelPerPoint_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MeasuredWidth_k__BackingField(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set__RoundedWidth_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_atgHyperlinkColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_ATGTextEventHandler(::UnityEngine::UIElements::ATGTextEventHandler*  value) ;

constexpr void __cordl_internal_set_m_Links(::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::GlobalNamespace::RichTextTagParser_TagType,::StringW>>*  value) ;

constexpr void __cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement*  value) ;

constexpr void __cordl_internal_set_m_TextEventHandler(::UnityEngine::UIElements::TextEventHandler*  value) ;

constexpr void __cordl_internal_set_wasAdvancedTextEnabledForElement(bool  value) ;

/// @brief Method .ctor, addr 0xb797620, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::TextElement*  te) ;

static inline float_t getStaticF_k_MinPadding() ;

static inline Il2CppObject* getStaticF_s_TextLib() ;

/// [CompilerGenerated]
/// @brief Method get_ATGMeasuredSizes, addr 0xb797730, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_ATGMeasuredSizes() ;

/// [CompilerGenerated]
/// @brief Method get_ATGRoundedSizes, addr 0xb797740, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_ATGRoundedSizes() ;

/// @brief Method get_IsPlaceholder, addr 0xb798558, size 0x34, virtual true, abstract: false, final false
inline bool get_IsPlaceholder() ;

/// [CompilerGenerated]
/// @brief Method get_LastPixelPerPoint, addr 0xb7976f4, size 0x8, virtual false, abstract: false, final false
inline float_t get_LastPixelPerPoint() ;

/// @brief Method get_Links, addr 0xb796074, size 0x84, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::GlobalNamespace::RichTextTagParser_TagType,::StringW>>* get_Links() ;

/// [CompilerGenerated]
/// @brief Method get_MeasuredWidth, addr 0xb797710, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<float_t> get_MeasuredWidth() ;

/// [CompilerGenerated]
/// @brief Method get_RoundedWidth, addr 0xb797720, size 0x8, virtual false, abstract: false, final false
inline float_t get_RoundedWidth() ;

/// @brief Method get_textLib, addr 0xb7974dc, size 0x64, virtual false, abstract: false, final false
inline Il2CppObject* get_textLib() ;

/// @brief Method hasLinkAndHyperlink, addr 0xb796c14, size 0x194, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<bool,bool> hasLinkAndHyperlink() ;

static inline void setStaticF_k_MinPadding(float_t  value) ;

static inline void setStaticF_s_TextLib(Il2CppObject*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ATGMeasuredSizes, addr 0xb797738, size 0x8, virtual false, abstract: false, final false
inline void set_ATGMeasuredSizes(::UnityEngine::Vector2  value) ;

/// [CompilerGenerated]
/// @brief Method set_ATGRoundedSizes, addr 0xb797748, size 0x8, virtual false, abstract: false, final false
inline void set_ATGRoundedSizes(::UnityEngine::Vector2  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastPixelPerPoint, addr 0xb7976fc, size 0x8, virtual false, abstract: false, final false
inline void set_LastPixelPerPoint(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_MeasuredWidth, addr 0xb797718, size 0x8, virtual false, abstract: false, final false
inline void set_MeasuredWidth(::System::Nullable_1<float_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_RoundedWidth, addr 0xb797728, size 0x8, virtual false, abstract: false, final false
inline void set_RoundedWidth(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UITKTextHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UITKTextHandle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UITKTextHandle(UITKTextHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UITKTextHandle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UITKTextHandle(UITKTextHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8294};

/// @brief Field m_ATGTextEventHandler, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::UIElements::ATGTextEventHandler*  ___m_ATGTextEventHandler;

/// @brief Field m_Links, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::GlobalNamespace::RichTextTagParser_TagType,::StringW>>*  ___m_Links;

/// @brief Field atgHyperlinkColor, offset: 0xc8, size: 0x10, def value: None
 ::UnityEngine::Color  ___atgHyperlinkColor;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <LastPixelPerPoint>k__BackingField, offset: 0xd8, size: 0x4, def value: None
 float_t  ____LastPixelPerPoint_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <MeasuredWidth>k__BackingField, offset: 0xe0, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  ____MeasuredWidth_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <RoundedWidth>k__BackingField, offset: 0xf0, size: 0x4, def value: None
 float_t  ____RoundedWidth_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <ATGMeasuredSizes>k__BackingField, offset: 0xf4, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____ATGMeasuredSizes_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ATGRoundedSizes>k__BackingField, offset: 0xfc, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____ATGRoundedSizes_k__BackingField;

/// @brief Field m_TextEventHandler, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::UIElements::TextEventHandler*  ___m_TextEventHandler;

/// @brief Field m_TextElement, offset: 0x110, size: 0x8, def value: None
 ::UnityEngine::UIElements::TextElement*  ___m_TextElement;

/// @brief Size padding 0x110 - 0x120 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field wasAdvancedTextEnabledForElement, offset: 0x118, size: 0x1, def value: None
 bool  ___wasAdvancedTextEnabledForElement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___m_ATGTextEventHandler) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___m_Links) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___atgHyperlinkColor) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ____LastPixelPerPoint_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ____MeasuredWidth_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ____RoundedWidth_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ____ATGMeasuredSizes_k__BackingField) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ____ATGRoundedSizes_k__BackingField) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___m_TextEventHandler) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___m_TextElement) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___wasAdvancedTextEnabledForElement) == 0x118, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UITKTextHandle) == 0x110, "Size mismatch!");

} // namespace end def UnityEngine::UIElements

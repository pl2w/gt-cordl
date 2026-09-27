#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerationSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerator_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
#include "UnityEngine/TextCore/zzzz__NativeTextGenerationSettings_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextHandle)
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct LineInfo;
}
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
namespace UnityEngine::TextCore::Text {
class TextGenerator;
}
namespace UnityEngine::TextCore::Text {
class TextHandlePermanentCache;
}
namespace UnityEngine::TextCore::Text {
class TextHandleTemporaryCache;
}
namespace UnityEngine::TextCore::Text {
class TextHandle___c;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextHandle;
}
namespace UnityEngine::TextCore::Text {
class TextHandle___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextCore::Text::TextHandle*);
MARK_REF_T(::UnityEngine::TextCore::Text::TextHandle___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::TextHandle*, "UnityEngine.TextCore.Text", "TextHandle");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::TextHandle___c*, "UnityEngine.TextCore.Text", "TextHandle/<>c");
// [DebuggerDisplay("{settings.text}")]
// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
// Dependencies System.IntPtr, System.Object, UnityEngine.Rect, UnityEngine.TextCore.NativeTextGenerationSettings, UnityEngine.TextCore.Text.TextGenerationSettings, UnityEngine.TextCore.Text.TextGenerator, UnityEngine.TextCore.Text.TextInfo, UnityEngine.Vector2
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextHandle
class CORDL_TYPE TextHandle : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::TextCore::Text::TextHandle___c;

 __declspec(property(get=get_IsCachedPermanent, put=set_IsCachedPermanent)) bool  IsCachedPermanent;

 __declspec(property(get=get_IsCachedTemporary, put=set_IsCachedTemporary)) bool  IsCachedTemporary;

 __declspec(property(get=get_IsPlaceholder)) bool  IsPlaceholder;

 __declspec(property(get=get_TextInfoNode, put=set_TextInfoNode)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextInfo*>*  TextInfoNode;

/// @brief Field <IsCachedPermanent>k__BackingField, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsCachedPermanent_k__BackingField, put=__cordl_internal_set__IsCachedPermanent_k__BackingField)) bool  _IsCachedPermanent_k__BackingField;

/// @brief Field <IsCachedTemporary>k__BackingField, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsCachedTemporary_k__BackingField, put=__cordl_internal_set__IsCachedTemporary_k__BackingField)) bool  _IsCachedTemporary_k__BackingField;

/// @brief Field <TextInfoNode>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__TextInfoNode_k__BackingField, put=__cordl_internal_set__TextInfoNode_k__BackingField)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextInfo*>*  _TextInfoNode_k__BackingField;

 __declspec(property(get=get_characterCount)) int32_t  characterCount;

/// @brief Field isDirty, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDirty, put=__cordl_internal_set_isDirty)) bool  isDirty;

/// @brief Field m_IsElided, offset 0x95, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsElided, put=__cordl_internal_set_m_IsElided)) bool  m_IsElided;

/// @brief Field m_IsPlaceholder, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsPlaceholder, put=__cordl_internal_set_m_IsPlaceholder)) bool  m_IsPlaceholder;

/// @brief Field m_LineHeightDefault, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LineHeightDefault, put=__cordl_internal_set_m_LineHeightDefault)) float_t  m_LineHeightDefault;

/// @brief Field m_PreviousGenerationSettingsHash, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PreviousGenerationSettingsHash, put=__cordl_internal_set_m_PreviousGenerationSettingsHash)) int32_t  m_PreviousGenerationSettingsHash;

/// @brief Field m_ScreenRect, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_ScreenRect, put=__cordl_internal_set_m_ScreenRect)) ::UnityEngine::Rect  m_ScreenRect;

/// @brief Field nativeSettings, offset 0x10, size 0x68 
 __declspec(property(get=__cordl_internal_get_nativeSettings, put=__cordl_internal_set_nativeSettings)) ::UnityEngine::TextCore::NativeTextGenerationSettings  nativeSettings;

/// @brief Field pixelPreferedSize, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_pixelPreferedSize, put=__cordl_internal_set_pixelPreferedSize)) ::UnityEngine::Vector2  pixelPreferedSize;

 __declspec(property(get=get_preferredSize)) ::UnityEngine::Vector2  preferredSize;

/// @brief Field s_Generators, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Generators, put=setStaticF_s_Generators)) ::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*>  s_Generators;

/// @brief Field s_PermanentCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PermanentCache, put=setStaticF_s_PermanentCache)) ::UnityEngine::TextCore::Text::TextHandlePermanentCache*  s_PermanentCache;

/// @brief Field s_Settings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Settings, put=setStaticF_s_Settings)) ::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*>  s_Settings;

/// @brief Field s_TemporaryCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TemporaryCache, put=setStaticF_s_TemporaryCache)) ::UnityEngine::TextCore::Text::TextHandleTemporaryCache*  s_TemporaryCache;

/// @brief Field s_TextInfosCommon, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TextInfosCommon, put=setStaticF_s_TextInfosCommon)) ::ArrayW<::UnityEngine::TextCore::Text::TextInfo*>  s_TextInfosCommon;

/// @brief Field textGenerationInfo, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_textGenerationInfo, put=__cordl_internal_set_textGenerationInfo)) ::System::IntPtr  textGenerationInfo;

 __declspec(property(get=get_textInfo)) ::UnityEngine::TextCore::Text::TextInfo*  textInfo;

 __declspec(property(get=get_useAdvancedText)) bool  useAdvancedText;

/// @brief Method AddTextInfoToTemporaryCache, addr 0xb6f26cc, size 0x90, virtual false, abstract: false, final false
inline void AddTextInfoToTemporaryCache(int32_t  hashCode) ;

/// @brief Method AddToPermanentCacheAndGenerateMesh, addr 0xb6f2600, size 0xcc, virtual true, abstract: false, final false
inline void AddToPermanentCacheAndGenerateMesh() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method ConvertPixelUnitsToTextCoreRelativeUnits, addr 0xb6f3528, size 0x84, virtual false, abstract: false, final false
static inline float_t ConvertPixelUnitsToTextCoreRelativeUnits(float_t  fontSize, ::UnityEngine::TextCore::Text::FontAsset*  fontAsset) ;

/// @brief Method Finalize, addr 0xb6f19a0, size 0x8c, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FindIntersectingLink, addr 0xb6f3a24, size 0xf8, virtual false, abstract: false, final false
inline int32_t FindIntersectingLink(::UnityEngine::Vector3  position, bool  inverseYAxis) ;

/// @brief Method GetCharacterHeightFromIndex, addr 0xb6f3e34, size 0xa8, virtual false, abstract: false, final false
inline float_t GetCharacterHeightFromIndex(int32_t  index) ;

/// @brief Method GetCorrespondingStringIndex, addr 0xb6f3b1c, size 0x58, virtual false, abstract: false, final false
inline int32_t GetCorrespondingStringIndex(int32_t  index) ;

/// @brief Method GetCursorIndexFromPosition, addr 0xb6f3858, size 0xcc, virtual false, abstract: false, final false
inline int32_t GetCursorIndexFromPosition(::UnityEngine::Vector2  position, bool  inverseYAxis) ;

/// @brief Method GetCursorPositionFromStringIndexUsingCharacterHeight, addr 0xb6f35ac, size 0xb0, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 GetCursorPositionFromStringIndexUsingCharacterHeight(int32_t  index, bool  inverseYAxis) ;

/// @brief Method GetCursorPositionFromStringIndexUsingLineHeight, addr 0xb6f365c, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCursorPositionFromStringIndexUsingLineHeight(int32_t  index, bool  useXAdvance, bool  inverseYAxis) ;

/// @brief Method GetEndOfPreviousWord, addr 0xb6f4190, size 0xc4, virtual false, abstract: false, final false
inline int32_t GetEndOfPreviousWord(int32_t  currentIndex) ;

/// @brief Method GetFirstCharacterIndexOnLine, addr 0xb6f4254, size 0x88, virtual false, abstract: false, final false
inline int32_t GetFirstCharacterIndexOnLine(int32_t  currentIndex) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
/// @brief Method GetHighlightRectangles, addr 0xb6f3718, size 0x140, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rect> GetHighlightRectangles(int32_t  cursorIndex, int32_t  selectIndex) ;

/// @brief Method GetLastCharacterIndexOnLine, addr 0xb6f42dc, size 0x88, virtual false, abstract: false, final false
inline int32_t GetLastCharacterIndexOnLine(int32_t  currentIndex) ;

/// @brief Method GetLineHeight, addr 0xb6f3ce4, size 0xa8, virtual false, abstract: false, final false
inline float_t GetLineHeight(int32_t  lineNumber) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule" })]
/// @brief Method GetLineHeightDefault, addr 0xb6f3088, size 0x14c, virtual false, abstract: false, final false
static inline float_t GetLineHeightDefault(::UnityEngine::TextCore::Text::TextGenerationSettings*  settings) ;

/// @brief Method GetLineHeightFromCharacterIndex, addr 0xb6f3d8c, size 0xa8, virtual false, abstract: false, final false
inline float_t GetLineHeightFromCharacterIndex(int32_t  index) ;

/// @brief Method GetLineInfoFromCharacterIndex, addr 0xb6f3b74, size 0xf0, virtual false, abstract: false, final false
inline ::UnityEngine::TextCore::Text::LineInfo GetLineInfoFromCharacterIndex(int32_t  index) ;

/// @brief Method GetLineNumber, addr 0xb6f3c64, size 0x80, virtual false, abstract: false, final false
inline int32_t GetLineNumber(int32_t  index) ;

/// @brief Method GetPixelsPerPoint, addr 0xb6f2500, size 0x8, virtual true, abstract: false, final false
inline float_t GetPixelsPerPoint() ;

/// @brief Method GetStartOfNextWord, addr 0xb6f40cc, size 0xc4, virtual false, abstract: false, final false
inline int32_t GetStartOfNextWord(int32_t  currentIndex) ;

/// @brief Method IndexOf, addr 0xb6f4364, size 0xc4, virtual false, abstract: false, final false
inline int32_t IndexOf(char16_t  value, int32_t  startIndex) ;

/// @brief Method InitArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void InitArray(::by_ref<::ArrayW<T>>  array, ::System::Func_1<T>*  createInstance) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
/// @brief Method InitThreadArrays, addr 0xb6f1b44, size 0x338, virtual false, abstract: false, final false
static inline void InitThreadArrays() ;

/// @brief Method IsAdvancedTextEnabledForElement, addr 0xb6f4984, size 0x8, virtual true, abstract: false, final false
inline bool IsAdvancedTextEnabledForElement() ;

/// @brief Method IsDirty, addr 0xb6f2d94, size 0x3c, virtual false, abstract: false, final false
inline bool IsDirty(int32_t  hashCode) ;

/// @brief Method LastIndexOf, addr 0xb6f4428, size 0xc4, virtual false, abstract: false, final false
inline int32_t LastIndexOf(char16_t  value, int32_t  startIndex) ;

/// @brief Method LineDownCharacterPosition, addr 0xb6f3924, size 0x80, virtual false, abstract: false, final false
inline int32_t LineDownCharacterPosition(int32_t  originalLogicalPos) ;

/// @brief Method LineUpCharacterPosition, addr 0xb6f39a4, size 0x80, virtual false, abstract: false, final false
inline int32_t LineUpCharacterPosition(int32_t  originalLogicalPos) ;

static inline ::UnityEngine::TextCore::Text::TextHandle* New_ctor() ;

/// @brief Method NextCodePointIndex, addr 0xb6f4008, size 0xc4, virtual false, abstract: false, final false
inline int32_t NextCodePointIndex(int32_t  currentIndex) ;

/// @brief Method PixelsToPoints, addr 0xb6f2470, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 PixelsToPoints(::UnityEngine::Vector2  pixel) ;

/// @brief Method PixelsToPoints, addr 0xb6f24a4, size 0x28, virtual false, abstract: false, final false
inline float_t PixelsToPoints(float_t  pixel) ;

/// @brief Method PointsToPixels, addr 0xb6f24cc, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 PointsToPixels(::UnityEngine::Vector2  point) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
/// @brief Method PrepareFontAsset, addr 0xb6f31d4, size 0x128, virtual false, abstract: false, final false
inline bool PrepareFontAsset() ;

/// @brief Method PreviousCodePointIndex, addr 0xb6f3f44, size 0xc4, virtual false, abstract: false, final false
inline int32_t PreviousCodePointIndex(int32_t  currentIndex) ;

/// @brief Method RemoveTextInfoFromPermanentCache, addr 0xb6f1a9c, size 0xa8, virtual false, abstract: false, final false
inline void RemoveTextInfoFromPermanentCache() ;

/// @brief Method RemoveTextInfoFromTemporaryCache, addr 0xb6f1a2c, size 0x70, virtual false, abstract: false, final false
inline void RemoveTextInfoFromTemporaryCache() ;

/// @brief Method SelectCurrentParagraph, addr 0xb6f45c4, size 0xd0, virtual false, abstract: false, final false
inline void SelectCurrentParagraph(::by_ref<int32_t>  cursorIndex, ::by_ref<int32_t>  selectIndex) ;

/// @brief Method SelectCurrentWord, addr 0xb6f44ec, size 0xd8, virtual false, abstract: false, final false
inline void SelectCurrentWord(int32_t  index, ::by_ref<int32_t>  cursorIndex, ::by_ref<int32_t>  selectIndex) ;

/// @brief Method SelectToEndOfParagraph, addr 0xb6f48c8, size 0xbc, virtual false, abstract: false, final false
inline void SelectToEndOfParagraph(::by_ref<int32_t>  cursorIndex) ;

/// @brief Method SelectToNextParagraph, addr 0xb6f4750, size 0xbc, virtual false, abstract: false, final false
inline void SelectToNextParagraph(::by_ref<int32_t>  cursorIndex) ;

/// @brief Method SelectToPreviousParagraph, addr 0xb6f4694, size 0xbc, virtual false, abstract: false, final false
inline void SelectToPreviousParagraph(::by_ref<int32_t>  cursorIndex) ;

/// @brief Method SelectToStartOfParagraph, addr 0xb6f480c, size 0xbc, virtual false, abstract: false, final false
inline void SelectToStartOfParagraph(::by_ref<int32_t>  cursorIndex) ;

/// @brief Method SetDirty, addr 0xb6f2d88, size 0xc, virtual true, abstract: false, final false
inline void SetDirty() ;

/// @brief Method Substring, addr 0xb6f3edc, size 0x68, virtual false, abstract: false, final false
inline ::StringW Substring(int32_t  startIndex, int32_t  length) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
/// @brief Method Update, addr 0xb6f2e60, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::TextCore::Text::TextInfo* Update() ;

/// @brief Method UpdateCurrentFrame, addr 0xb6f2d00, size 0x6c, virtual false, abstract: false, final false
static inline void UpdateCurrentFrame() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule" })]
/// @brief Method UpdatePreferredSize, addr 0xb6f32fc, size 0x22c, virtual false, abstract: false, final false
inline void UpdatePreferredSize() ;

/// @brief Method UpdatePreferredValues, addr 0xb6f2dd8, size 0x88, virtual false, abstract: false, final false
inline void UpdatePreferredValues(::UnityEngine::TextCore::Text::TextGenerationSettings*  tgs) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
/// @brief Method UpdateWithHash, addr 0xb6f2ed0, size 0x1b8, virtual false, abstract: false, final false
inline ::UnityEngine::TextCore::Text::TextInfo* UpdateWithHash(int32_t  hashCode) ;

constexpr bool const& __cordl_internal_get__IsCachedPermanent_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsCachedPermanent_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsCachedTemporary_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsCachedTemporary_k__BackingField() ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextInfo*>* const& __cordl_internal_get__TextInfoNode_k__BackingField() const;

constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextInfo*>*& __cordl_internal_get__TextInfoNode_k__BackingField() ;

constexpr bool const& __cordl_internal_get_isDirty() const;

constexpr bool& __cordl_internal_get_isDirty() ;

constexpr bool const& __cordl_internal_get_m_IsElided() const;

constexpr bool& __cordl_internal_get_m_IsElided() ;

constexpr bool const& __cordl_internal_get_m_IsPlaceholder() const;

constexpr bool& __cordl_internal_get_m_IsPlaceholder() ;

constexpr float_t const& __cordl_internal_get_m_LineHeightDefault() const;

constexpr float_t& __cordl_internal_get_m_LineHeightDefault() ;

constexpr int32_t const& __cordl_internal_get_m_PreviousGenerationSettingsHash() const;

constexpr int32_t& __cordl_internal_get_m_PreviousGenerationSettingsHash() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_ScreenRect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_m_ScreenRect() ;

constexpr ::UnityEngine::TextCore::NativeTextGenerationSettings const& __cordl_internal_get_nativeSettings() const;

constexpr ::UnityEngine::TextCore::NativeTextGenerationSettings& __cordl_internal_get_nativeSettings() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_pixelPreferedSize() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_pixelPreferedSize() ;

constexpr ::System::IntPtr const& __cordl_internal_get_textGenerationInfo() const;

constexpr ::System::IntPtr& __cordl_internal_get_textGenerationInfo() ;

constexpr void __cordl_internal_set__IsCachedPermanent_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsCachedTemporary_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TextInfoNode_k__BackingField(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextInfo*>*  value) ;

constexpr void __cordl_internal_set_isDirty(bool  value) ;

constexpr void __cordl_internal_set_m_IsElided(bool  value) ;

constexpr void __cordl_internal_set_m_IsPlaceholder(bool  value) ;

constexpr void __cordl_internal_set_m_LineHeightDefault(float_t  value) ;

constexpr void __cordl_internal_set_m_PreviousGenerationSettingsHash(int32_t  value) ;

constexpr void __cordl_internal_set_m_ScreenRect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_nativeSettings(::UnityEngine::TextCore::NativeTextGenerationSettings  value) ;

constexpr void __cordl_internal_set_pixelPreferedSize(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_textGenerationInfo(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0xb6f1950, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*> getStaticF_s_Generators() ;

static inline ::UnityEngine::TextCore::Text::TextHandlePermanentCache* getStaticF_s_PermanentCache() ;

static inline ::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*> getStaticF_s_Settings() ;

static inline ::UnityEngine::TextCore::Text::TextHandleTemporaryCache* getStaticF_s_TemporaryCache() ;

static inline ::ArrayW<::UnityEngine::TextCore::Text::TextInfo*> getStaticF_s_TextInfosCommon() ;

/// [CompilerGenerated]
/// @brief Method get_IsCachedPermanent, addr 0xb6f2518, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCachedPermanent() ;

/// [CompilerGenerated]
/// @brief Method get_IsCachedTemporary, addr 0xb6f2528, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCachedTemporary() ;

/// @brief Method get_IsPlaceholder, addr 0xb6f2dd0, size 0x8, virtual true, abstract: false, final false
inline bool get_IsPlaceholder() ;

/// [CompilerGenerated]
/// @brief Method get_TextInfoNode, addr 0xb6f2508, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextInfo*>* get_TextInfoNode() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
/// @brief Method get_characterCount, addr 0xb6f2544, size 0x48, virtual false, abstract: false, final false
inline int32_t get_characterCount() ;

/// @brief Method get_generator, addr 0xb6f2348, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::TextCore::Text::TextGenerator* get_generator() ;

/// @brief Method get_generators, addr 0xb6f1fec, size 0x170, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*> get_generators() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
/// @brief Method get_preferredSize, addr 0xb6f2440, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_preferredSize() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
/// @brief Method get_settings, addr 0xb6f23c4, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::TextCore::Text::TextGenerationSettings* get_settings() ;

/// @brief Method get_settingsArray, addr 0xb6f1e7c, size 0x170, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*> get_settingsArray() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
/// @brief Method get_textInfo, addr 0xb6f258c, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::TextCore::Text::TextInfo* get_textInfo() ;

/// @brief Method get_textInfoCommon, addr 0xb6f22cc, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::TextCore::Text::TextInfo* get_textInfoCommon() ;

/// @brief Method get_textInfosCommon, addr 0xb6f215c, size 0x170, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::TextCore::Text::TextInfo*> get_textInfosCommon() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
/// @brief Method get_useAdvancedText, addr 0xb6f2538, size 0xc, virtual false, abstract: false, final false
inline bool get_useAdvancedText() ;

static inline void setStaticF_s_Generators(::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*>  value) ;

static inline void setStaticF_s_PermanentCache(::UnityEngine::TextCore::Text::TextHandlePermanentCache*  value) ;

static inline void setStaticF_s_Settings(::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*>  value) ;

static inline void setStaticF_s_TemporaryCache(::UnityEngine::TextCore::Text::TextHandleTemporaryCache*  value) ;

static inline void setStaticF_s_TextInfosCommon(::ArrayW<::UnityEngine::TextCore::Text::TextInfo*>  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsCachedPermanent, addr 0xb6f2520, size 0x8, virtual false, abstract: false, final false
inline void set_IsCachedPermanent(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsCachedTemporary, addr 0xb6f2530, size 0x8, virtual false, abstract: false, final false
inline void set_IsCachedTemporary(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TextInfoNode, addr 0xb6f2510, size 0x8, virtual false, abstract: false, final false
inline void set_TextInfoNode(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextInfo*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextHandle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextHandle(TextHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextHandle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextHandle(TextHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26290};

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Field nativeSettings, offset: 0x10, size: 0x68, def value: None
 ::UnityEngine::TextCore::NativeTextGenerationSettings  ___nativeSettings;

/// @brief Field pixelPreferedSize, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___pixelPreferedSize;

/// @brief Field m_ScreenRect, offset: 0x80, size: 0x10, def value: None
 ::UnityEngine::Rect  ___m_ScreenRect;

/// @brief Field m_LineHeightDefault, offset: 0x90, size: 0x4, def value: None
 float_t  ___m_LineHeightDefault;

/// @brief Field m_IsPlaceholder, offset: 0x94, size: 0x1, def value: None
 bool  ___m_IsPlaceholder;

/// @brief Field m_IsElided, offset: 0x95, size: 0x1, def value: None
 bool  ___m_IsElided;

/// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
/// @brief Field textGenerationInfo, offset: 0x98, size: 0x8, def value: None
 ::System::IntPtr  ___textGenerationInfo;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <TextInfoNode>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextInfo*>*  ____TextInfoNode_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <IsCachedPermanent>k__BackingField, offset: 0xa8, size: 0x1, def value: None
 bool  ____IsCachedPermanent_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <IsCachedTemporary>k__BackingField, offset: 0xa9, size: 0x1, def value: None
 bool  ____IsCachedTemporary_k__BackingField;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Field m_PreviousGenerationSettingsHash, offset: 0xac, size: 0x4, def value: None
 int32_t  ___m_PreviousGenerationSettingsHash;

/// @brief Field isDirty, offset: 0xb0, size: 0x1, def value: None
 bool  ___isDirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___nativeSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___pixelPreferedSize) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_ScreenRect) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_LineHeightDefault) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_IsPlaceholder) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_IsElided) == 0x95, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___textGenerationInfo) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ____TextInfoNode_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ____IsCachedPermanent_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ____IsCachedTemporary_k__BackingField) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_PreviousGenerationSettingsHash) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___isDirty) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::Text::TextHandle) == 0xb8, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextHandle/<>c
class CORDL_TYPE TextHandle___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::TextCore::Text::TextHandle___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>*  __9__10_0;

/// @brief Field <>9__13_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_0, put=setStaticF___9__13_0)) ::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>*  __9__13_0;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>*  __9__4_0;

/// @brief Field <>9__4_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_1, put=setStaticF___9__4_1)) ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>*  __9__4_1;

/// @brief Field <>9__4_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_2, put=setStaticF___9__4_2)) ::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>*  __9__4_2;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>*  __9__7_0;

static inline ::UnityEngine::TextCore::Text::TextHandle___c* New_ctor() ;

/// @brief Method <InitThreadArrays>b__4_0, addr 0xb6f4c34, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::TextCore::Text::TextGenerationSettings* _InitThreadArrays_b__4_0() ;

/// @brief Method <InitThreadArrays>b__4_1, addr 0xb6f4c84, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::TextCore::Text::TextGenerator* _InitThreadArrays_b__4_1() ;

/// @brief Method <InitThreadArrays>b__4_2, addr 0xb6f4cd8, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::TextCore::Text::TextInfo* _InitThreadArrays_b__4_2() ;

/// @brief Method .ctor, addr 0xb6f4c2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_generators>b__10_0, addr 0xb6f4d7c, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::TextCore::Text::TextGenerator* _get_generators_b__10_0() ;

/// @brief Method <get_settingsArray>b__7_0, addr 0xb6f4d2c, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::TextCore::Text::TextGenerationSettings* _get_settingsArray_b__7_0() ;

/// @brief Method <get_textInfosCommon>b__13_0, addr 0xb6f4dd0, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::TextCore::Text::TextInfo* _get_textInfosCommon_b__13_0() ;

static inline ::UnityEngine::TextCore::Text::TextHandle___c* getStaticF___9() ;

static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* getStaticF___9__10_0() ;

static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* getStaticF___9__13_0() ;

static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* getStaticF___9__4_0() ;

static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* getStaticF___9__4_1() ;

static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* getStaticF___9__4_2() ;

static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::UnityEngine::TextCore::Text::TextHandle___c*  value) ;

static inline void setStaticF___9__10_0(::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>*  value) ;

static inline void setStaticF___9__13_0(::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>*  value) ;

static inline void setStaticF___9__4_0(::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>*  value) ;

static inline void setStaticF___9__4_1(::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>*  value) ;

static inline void setStaticF___9__4_2(::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>*  value) ;

static inline void setStaticF___9__7_0(::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextHandle___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextHandle___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextHandle___c(TextHandle___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextHandle___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextHandle___c(TextHandle___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26289};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextCore::Text::TextHandle___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text

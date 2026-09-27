#pragma once
// IWYU pragma private; include "UnityEngine/TextSelectingUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TextEditor_DblClickSnapping_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextSelectingUtilities)
namespace GlobalNamespace {
struct TextEditor_DblClickSnapping;
}
namespace GlobalNamespace {
struct TextSelectingUtilities_CharacterType;
}
namespace GlobalNamespace {
struct TextSelectingUtilities_Direction;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Action;
}
namespace UnityEngine::TextCore::Text {
struct TextElementInfo;
}
namespace UnityEngine::TextCore::Text {
class TextHandle;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct TextSelectOp;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class TextSelectingUtilities;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextSelectingUtilities*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextSelectingUtilities*, "UnityEngine", "TextSelectingUtilities");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule", "UnityEditor.UIBuilderModule" })]
// Dependencies System.Object, UnityEngine.TextEditor::DblClickSnapping
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextSelectingUtilities
class CORDL_TYPE TextSelectingUtilities : public ::System::Object {
public:
// Declarations
using CharacterType = ::GlobalNamespace::TextSelectingUtilities_CharacterType;

using Direction = ::GlobalNamespace::TextSelectingUtilities_Direction;

/// @brief Field OnCursorIndexChange, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCursorIndexChange, put=__cordl_internal_set_OnCursorIndexChange)) ::System::Action*  OnCursorIndexChange;

/// @brief Field OnRevealCursorChange, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRevealCursorChange, put=__cordl_internal_set_OnRevealCursorChange)) ::System::Action*  OnRevealCursorChange;

/// @brief Field OnSelectIndexChange, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSelectIndexChange, put=__cordl_internal_set_OnSelectIndexChange)) ::System::Action*  OnSelectIndexChange;

 __declspec(property(get=get_characterCount)) int32_t  characterCount;

 __declspec(property(get=get_cursorIndex, put=set_cursorIndex)) int32_t  cursorIndex;

 __declspec(property(get=get_cursorIndexNoValidation, put=set_cursorIndexNoValidation)) int32_t  cursorIndexNoValidation;

/// @brief Field dblClickSnap, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_dblClickSnap, put=__cordl_internal_set_dblClickSnap)) ::GlobalNamespace::TextEditor_DblClickSnapping  dblClickSnap;

/// @brief Field hasHorizontalCursorPos, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasHorizontalCursorPos, put=__cordl_internal_set_hasHorizontalCursorPos)) bool  hasHorizontalCursorPos;

 __declspec(property(get=get_hasSelection)) bool  hasSelection;

/// @brief Field iAltCursorPos, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_iAltCursorPos, put=__cordl_internal_set_iAltCursorPos)) int32_t  iAltCursorPos;

 __declspec(property(get=get_m_CharacterCount)) int32_t  m_CharacterCount;

/// @brief Field m_CursorIndex, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CursorIndex, put=__cordl_internal_set_m_CursorIndex)) int32_t  m_CursorIndex;

/// @brief Field m_DblClickInitPosEnd, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DblClickInitPosEnd, put=__cordl_internal_set_m_DblClickInitPosEnd)) int32_t  m_DblClickInitPosEnd;

/// @brief Field m_DblClickInitPosStart, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DblClickInitPosStart, put=__cordl_internal_set_m_DblClickInitPosStart)) int32_t  m_DblClickInitPosStart;

/// @brief Field m_MouseDragSelectsWholeWords, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_MouseDragSelectsWholeWords, put=__cordl_internal_set_m_MouseDragSelectsWholeWords)) bool  m_MouseDragSelectsWholeWords;

/// @brief Field m_RevealCursor, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RevealCursor, put=__cordl_internal_set_m_RevealCursor)) bool  m_RevealCursor;

/// @brief Field m_SelectIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SelectIndex, put=__cordl_internal_set_m_SelectIndex)) int32_t  m_SelectIndex;

 __declspec(property(get=get_m_TextElementInfos)) ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo>  m_TextElementInfos;

/// @brief Field m_bJustSelected, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_bJustSelected, put=__cordl_internal_set_m_bJustSelected)) bool  m_bJustSelected;

 __declspec(property(get=get_revealCursor, put=set_revealCursor)) bool  revealCursor;

/// @brief Field s_KeySelectOps, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_KeySelectOps, put=setStaticF_s_KeySelectOps)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*,::UnityEngine::TextSelectOp>*  s_KeySelectOps;

 __declspec(property(get=get_selectIndex, put=set_selectIndex)) int32_t  selectIndex;

 __declspec(property(put=set_selectIndexNoValidation)) int32_t  selectIndexNoValidation;

 __declspec(property(get=get_selectedText)) ::StringW  selectedText;

/// @brief Field textHandle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textHandle, put=__cordl_internal_set_textHandle)) ::UnityEngine::TextCore::Text::TextHandle*  textHandle;

/// @brief Method ClampTextIndex, addr 0xb65baa8, size 0x24, virtual false, abstract: false, final false
inline int32_t ClampTextIndex(int32_t  index) ;

/// @brief Method ClassifyChar, addr 0xb65d25c, size 0xe4, virtual false, abstract: false, final false
inline ::GlobalNamespace::TextSelectingUtilities_CharacterType ClassifyChar(int32_t  index) ;

/// @brief Method ClearCursorPos, addr 0xb6595f8, size 0x10, virtual false, abstract: false, final false
inline void ClearCursorPos() ;

/// @brief Method Copy, addr 0xb65979c, size 0x90, virtual false, abstract: false, final false
inline void Copy() ;

/// @brief Method DblClickSnap, addr 0xb65ac8c, size 0x8, virtual false, abstract: false, final false
inline void DblClickSnap(::GlobalNamespace::TextEditor_DblClickSnapping  snapping) ;

/// @brief Method ExpandSelectGraphicalLineEnd, addr 0xb65c94c, size 0xf8, virtual false, abstract: false, final false
inline void ExpandSelectGraphicalLineEnd() ;

/// @brief Method ExpandSelectGraphicalLineStart, addr 0xb65c854, size 0xf8, virtual false, abstract: false, final false
inline void ExpandSelectGraphicalLineStart() ;

/// @brief Method FindEndOfClassification, addr 0xb65cffc, size 0x140, virtual false, abstract: false, final false
inline int32_t FindEndOfClassification(int32_t  p, ::GlobalNamespace::TextSelectingUtilities_Direction  dir) ;

/// @brief Method FindEndOfPreviousWord, addr 0xb659290, size 0x110, virtual false, abstract: false, final false
inline int32_t FindEndOfPreviousWord(int32_t  p) ;

/// @brief Method FindNextSeperator, addr 0xb65d13c, size 0x84, virtual false, abstract: false, final false
inline int32_t FindNextSeperator(int32_t  startPos) ;

/// @brief Method FindPrevSeperator, addr 0xb65d1c0, size 0x9c, virtual false, abstract: false, final false
inline int32_t FindPrevSeperator(int32_t  startPos) ;

/// @brief Method FindStartOfNextWord, addr 0xb6593a0, size 0x1fc, virtual false, abstract: false, final false
inline int32_t FindStartOfNextWord(int32_t  p) ;

/// @brief Method GetGraphicalLineEnd, addr 0xb65cfa4, size 0x18, virtual false, abstract: false, final false
inline int32_t GetGraphicalLineEnd(int32_t  p) ;

/// @brief Method GetGraphicalLineStart, addr 0xb65cf8c, size 0x18, virtual false, abstract: false, final false
inline int32_t GetGraphicalLineStart(int32_t  p) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method HandleKeyEvent, addr 0xb65a340, size 0x10c, virtual false, abstract: false, final false
inline bool HandleKeyEvent(::UnityEngine::Event*  e) ;

/// @brief Method IndexOfEndOfLine, addr 0xb65cfbc, size 0x40, virtual false, abstract: false, final false
inline int32_t IndexOfEndOfLine(int32_t  startIndex) ;

/// @brief Method InitKeyActions, addr 0xb65bbd0, size 0x41c, virtual false, abstract: false, final false
inline void InitKeyActions() ;

/// @brief Method MapKey, addr 0xb65ce9c, size 0x90, virtual false, abstract: false, final false
static inline void MapKey(::StringW  key, ::UnityEngine::TextSelectOp  action) ;

/// @brief Method MouseDragSelectsWholeWords, addr 0xb65abf4, size 0x80, virtual false, abstract: false, final false
inline void MouseDragSelectsWholeWords(bool  on) ;

/// @brief Method MoveCursorToPosition_Internal, addr 0xb65a5d8, size 0x98, virtual false, abstract: false, final false
inline void MoveCursorToPosition_Internal(::UnityEngine::Vector2  cursorPosition, bool  shift) ;

/// @brief Method MoveDown, addr 0xb657b78, size 0x124, virtual false, abstract: false, final false
inline void MoveDown() ;

/// @brief Method MoveGraphicalLineEnd, addr 0xb65879c, size 0xbc, virtual false, abstract: false, final false
inline void MoveGraphicalLineEnd() ;

/// @brief Method MoveGraphicalLineStart, addr 0xb6586e0, size 0xbc, virtual false, abstract: false, final false
inline void MoveGraphicalLineStart() ;

/// @brief Method MoveLeft, addr 0xb657880, size 0xec, virtual false, abstract: false, final false
inline void MoveLeft() ;

/// @brief Method MoveLineEnd, addr 0xb657dc8, size 0x14c, virtual false, abstract: false, final false
inline void MoveLineEnd() ;

/// @brief Method MoveLineStart, addr 0xb657c9c, size 0x12c, virtual false, abstract: false, final false
inline void MoveLineStart() ;

/// @brief Method MoveParagraphBackward, addr 0xb658508, size 0x1d8, virtual false, abstract: false, final false
inline void MoveParagraphBackward() ;

/// @brief Method MoveParagraphForward, addr 0xb658370, size 0x198, virtual false, abstract: false, final false
inline void MoveParagraphForward() ;

/// @brief Method MoveRight, addr 0xb65796c, size 0xf4, virtual false, abstract: false, final false
inline void MoveRight() ;

/// @brief Method MoveTextEnd, addr 0xb6582f8, size 0x78, virtual false, abstract: false, final false
inline void MoveTextEnd() ;

/// @brief Method MoveTextStart, addr 0xb65829c, size 0x5c, virtual false, abstract: false, final false
inline void MoveTextStart() ;

/// @brief Method MoveToEndOfPreviousWord, addr 0xb6580d8, size 0xbc, virtual false, abstract: false, final false
inline void MoveToEndOfPreviousWord() ;

/// @brief Method MoveToStartOfNextWord, addr 0xb65801c, size 0xbc, virtual false, abstract: false, final false
inline void MoveToStartOfNextWord() ;

/// @brief Method MoveUp, addr 0xb657a60, size 0x118, virtual false, abstract: false, final false
inline void MoveUp() ;

/// @brief Method MoveWordLeft, addr 0xb658194, size 0x108, virtual false, abstract: false, final false
inline void MoveWordLeft() ;

/// @brief Method MoveWordRight, addr 0xb657f14, size 0x108, virtual false, abstract: false, final false
inline void MoveWordRight() ;

static inline ::UnityEngine::TextSelectingUtilities* New_ctor(::UnityEngine::TextCore::Text::TextHandle*  textHandle) ;

/// @brief Method NextCodePointIndex, addr 0xb65cf2c, size 0x60, virtual false, abstract: false, final false
inline int32_t NextCodePointIndex(int32_t  index) ;

/// @brief Method OnFocus, addr 0xb65a2a4, size 0x48, virtual false, abstract: false, final false
inline void OnFocus(bool  selectAll) ;

/// @brief Method PerformOperation, addr 0xb65bfec, size 0x1f0, virtual false, abstract: false, final false
inline bool PerformOperation(::UnityEngine::TextSelectOp  operation) ;

/// @brief Method PreviousCodePointIndex, addr 0xb65959c, size 0x5c, virtual false, abstract: false, final false
inline int32_t PreviousCodePointIndex(int32_t  index) ;

/// @brief Method SelectAll, addr 0xb65ce30, size 0x6c, virtual false, abstract: false, final false
inline void SelectAll() ;

/// @brief Method SelectCurrentParagraph, addr 0xb65aeb0, size 0x194, virtual false, abstract: false, final false
inline void SelectCurrentParagraph() ;

/// @brief Method SelectCurrentWord, addr 0xb65aca8, size 0x1f4, virtual false, abstract: false, final false
inline void SelectCurrentWord() ;

/// @brief Method SelectDown, addr 0xb65c414, size 0x68, virtual false, abstract: false, final false
inline void SelectDown() ;

/// @brief Method SelectGraphicalLineEnd, addr 0xb65cdc8, size 0x68, virtual false, abstract: false, final false
inline void SelectGraphicalLineEnd() ;

/// @brief Method SelectGraphicalLineStart, addr 0xb65cd60, size 0x68, virtual false, abstract: false, final false
inline void SelectGraphicalLineStart() ;

/// @brief Method SelectLeft, addr 0xb65c1dc, size 0xe8, virtual false, abstract: false, final false
inline void SelectLeft() ;

/// @brief Method SelectNone, addr 0xb6598f0, size 0x48, virtual false, abstract: false, final false
inline void SelectNone() ;

/// @brief Method SelectParagraphBackward, addr 0xb65cbb4, size 0x1ac, virtual false, abstract: false, final false
inline void SelectParagraphBackward() ;

/// @brief Method SelectParagraphForward, addr 0xb65ca44, size 0x170, virtual false, abstract: false, final false
inline void SelectParagraphForward() ;

/// @brief Method SelectRight, addr 0xb65c2c4, size 0xe8, virtual false, abstract: false, final false
inline void SelectRight() ;

/// @brief Method SelectTextEnd, addr 0xb65c814, size 0x40, virtual false, abstract: false, final false
inline void SelectTextEnd() ;

/// @brief Method SelectTextStart, addr 0xb65c7ec, size 0x28, virtual false, abstract: false, final false
inline void SelectTextStart() ;

/// @brief Method SelectToEndOfPreviousWord, addr 0xb65c73c, size 0x58, virtual false, abstract: false, final false
inline void SelectToEndOfPreviousWord() ;

/// @brief Method SelectToPosition, addr 0xb65a690, size 0x54c, virtual false, abstract: false, final false
inline void SelectToPosition(::UnityEngine::Vector2  cursorPosition) ;

/// @brief Method SelectToStartOfNextWord, addr 0xb65c794, size 0x58, virtual false, abstract: false, final false
inline void SelectToStartOfNextWord() ;

/// @brief Method SelectUp, addr 0xb65c3ac, size 0x68, virtual false, abstract: false, final false
inline void SelectUp() ;

/// @brief Method SelectWordLeft, addr 0xb65c5dc, size 0x160, virtual false, abstract: false, final false
inline void SelectWordLeft() ;

/// @brief Method SelectWordRight, addr 0xb65c47c, size 0x160, virtual false, abstract: false, final false
inline void SelectWordRight() ;

/// @brief Method SetCursorIndexWithoutNotify, addr 0xb65bacc, size 0x8, virtual false, abstract: false, final false
inline void SetCursorIndexWithoutNotify(int32_t  index) ;

/// @brief Method SetSelectIndexWithoutNotify, addr 0xb65bad4, size 0x8, virtual false, abstract: false, final false
inline void SetSelectIndexWithoutNotify(int32_t  index) ;

constexpr ::System::Action* const& __cordl_internal_get_OnCursorIndexChange() const;

constexpr ::System::Action*& __cordl_internal_get_OnCursorIndexChange() ;

constexpr ::System::Action* const& __cordl_internal_get_OnRevealCursorChange() const;

constexpr ::System::Action*& __cordl_internal_get_OnRevealCursorChange() ;

constexpr ::System::Action* const& __cordl_internal_get_OnSelectIndexChange() const;

constexpr ::System::Action*& __cordl_internal_get_OnSelectIndexChange() ;

constexpr ::GlobalNamespace::TextEditor_DblClickSnapping const& __cordl_internal_get_dblClickSnap() const;

constexpr ::GlobalNamespace::TextEditor_DblClickSnapping& __cordl_internal_get_dblClickSnap() ;

constexpr bool const& __cordl_internal_get_hasHorizontalCursorPos() const;

constexpr bool& __cordl_internal_get_hasHorizontalCursorPos() ;

constexpr int32_t const& __cordl_internal_get_iAltCursorPos() const;

constexpr int32_t& __cordl_internal_get_iAltCursorPos() ;

constexpr int32_t const& __cordl_internal_get_m_CursorIndex() const;

constexpr int32_t& __cordl_internal_get_m_CursorIndex() ;

constexpr int32_t const& __cordl_internal_get_m_DblClickInitPosEnd() const;

constexpr int32_t& __cordl_internal_get_m_DblClickInitPosEnd() ;

constexpr int32_t const& __cordl_internal_get_m_DblClickInitPosStart() const;

constexpr int32_t& __cordl_internal_get_m_DblClickInitPosStart() ;

constexpr bool const& __cordl_internal_get_m_MouseDragSelectsWholeWords() const;

constexpr bool& __cordl_internal_get_m_MouseDragSelectsWholeWords() ;

constexpr bool const& __cordl_internal_get_m_RevealCursor() const;

constexpr bool& __cordl_internal_get_m_RevealCursor() ;

constexpr int32_t const& __cordl_internal_get_m_SelectIndex() const;

constexpr int32_t& __cordl_internal_get_m_SelectIndex() ;

constexpr bool const& __cordl_internal_get_m_bJustSelected() const;

constexpr bool& __cordl_internal_get_m_bJustSelected() ;

constexpr ::UnityEngine::TextCore::Text::TextHandle* const& __cordl_internal_get_textHandle() const;

constexpr ::UnityEngine::TextCore::Text::TextHandle*& __cordl_internal_get_textHandle() ;

constexpr void __cordl_internal_set_OnCursorIndexChange(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnRevealCursorChange(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnSelectIndexChange(::System::Action*  value) ;

constexpr void __cordl_internal_set_dblClickSnap(::GlobalNamespace::TextEditor_DblClickSnapping  value) ;

constexpr void __cordl_internal_set_hasHorizontalCursorPos(bool  value) ;

constexpr void __cordl_internal_set_iAltCursorPos(int32_t  value) ;

constexpr void __cordl_internal_set_m_CursorIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_DblClickInitPosEnd(int32_t  value) ;

constexpr void __cordl_internal_set_m_DblClickInitPosStart(int32_t  value) ;

constexpr void __cordl_internal_set_m_MouseDragSelectsWholeWords(bool  value) ;

constexpr void __cordl_internal_set_m_RevealCursor(bool  value) ;

constexpr void __cordl_internal_set_m_SelectIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_bJustSelected(bool  value) ;

constexpr void __cordl_internal_set_textHandle(::UnityEngine::TextCore::Text::TextHandle*  value) ;

/// @brief Method .ctor, addr 0xb65a1a8, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::TextCore::Text::TextHandle*  textHandle) ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*,::UnityEngine::TextSelectOp>* getStaticF_s_KeySelectOps() ;

/// @brief Method get_characterCount, addr 0xb65b9b0, size 0xd0, virtual false, abstract: false, final false
inline int32_t get_characterCount() ;

/// @brief Method get_cursorIndex, addr 0xb6565f4, size 0x58, virtual false, abstract: false, final false
inline int32_t get_cursorIndex() ;

/// @brief Method get_cursorIndexNoValidation, addr 0xb6566cc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_cursorIndexNoValidation() ;

/// @brief Method get_hasSelection, addr 0xb65650c, size 0x30, virtual false, abstract: false, final false
inline bool get_hasSelection() ;

/// @brief Method get_m_CharacterCount, addr 0xb65b998, size 0x18, virtual false, abstract: false, final false
inline int32_t get_m_CharacterCount() ;

/// @brief Method get_m_TextElementInfos, addr 0xb65ba80, size 0x28, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo> get_m_TextElementInfos() ;

/// @brief Method get_revealCursor, addr 0xb65b990, size 0x8, virtual false, abstract: false, final false
inline bool get_revealCursor() ;

/// @brief Method get_selectIndex, addr 0xb6567ec, size 0x58, virtual false, abstract: false, final false
inline int32_t get_selectIndex() ;

/// @brief Method get_selectedText, addr 0xb65badc, size 0xf4, virtual false, abstract: false, final false
inline ::StringW get_selectedText() ;

static inline void setStaticF_s_KeySelectOps(::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*,::UnityEngine::TextSelectOp>*  value) ;

/// @brief Method set_cursorIndex, addr 0xb656688, size 0x2c, virtual false, abstract: false, final false
inline void set_cursorIndex(int32_t  value) ;

/// @brief Method set_cursorIndexNoValidation, addr 0xb656710, size 0x2c, virtual false, abstract: false, final false
inline void set_cursorIndexNoValidation(int32_t  value) ;

/// @brief Method set_revealCursor, addr 0xb65657c, size 0x30, virtual false, abstract: false, final false
inline void set_revealCursor(bool  value) ;

/// @brief Method set_selectIndex, addr 0xb656880, size 0x2c, virtual false, abstract: false, final false
inline void set_selectIndex(int32_t  value) ;

/// @brief Method set_selectIndexNoValidation, addr 0xb656778, size 0x2c, virtual false, abstract: false, final false
inline void set_selectIndexNoValidation(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextSelectingUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextSelectingUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextSelectingUtilities(TextSelectingUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextSelectingUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextSelectingUtilities(TextSelectingUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28855};

/// @brief Field kMoveDownHeight offset 0xffffffff size 0x4
static constexpr int32_t  kMoveDownHeight{static_cast<int32_t>(0x5)};

/// @brief Field kNewLineChar offset 0xffffffff size 0x2
static constexpr char16_t  kNewLineChar{u'\n'};

/// @brief Field dblClickSnap, offset: 0x10, size: 0x1, def value: None
 ::GlobalNamespace::TextEditor_DblClickSnapping  ___dblClickSnap;

/// @brief Field iAltCursorPos, offset: 0x14, size: 0x4, def value: None
 int32_t  ___iAltCursorPos;

/// @brief Field hasHorizontalCursorPos, offset: 0x18, size: 0x1, def value: None
 bool  ___hasHorizontalCursorPos;

/// @brief Field m_bJustSelected, offset: 0x19, size: 0x1, def value: None
 bool  ___m_bJustSelected;

/// @brief Field m_MouseDragSelectsWholeWords, offset: 0x1a, size: 0x1, def value: None
 bool  ___m_MouseDragSelectsWholeWords;

/// @brief Field m_DblClickInitPosStart, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___m_DblClickInitPosStart;

/// @brief Field m_DblClickInitPosEnd, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_DblClickInitPosEnd;

/// @brief Field textHandle, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::TextCore::Text::TextHandle*  ___textHandle;

/// @brief Field m_RevealCursor, offset: 0x30, size: 0x1, def value: None
 bool  ___m_RevealCursor;

/// @brief Field m_CursorIndex, offset: 0x34, size: 0x4, def value: None
 int32_t  ___m_CursorIndex;

/// @brief Field m_SelectIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ___m_SelectIndex;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Field OnCursorIndexChange, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___OnCursorIndexChange;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Field OnSelectIndexChange, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___OnSelectIndexChange;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Field OnRevealCursorChange, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  ___OnRevealCursorChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___dblClickSnap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___iAltCursorPos) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___hasHorizontalCursorPos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___m_bJustSelected) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___m_MouseDragSelectsWholeWords) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___m_DblClickInitPosStart) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___m_DblClickInitPosEnd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___textHandle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___m_RevealCursor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___m_CursorIndex) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___m_SelectIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___OnCursorIndexChange) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___OnSelectIndexChange) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___OnRevealCursorChange) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextSelectingUtilities) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine

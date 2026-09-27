#pragma once
// IWYU pragma private; include "UnityEngine/TextEditor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextEditor)
namespace GlobalNamespace {
struct TextEditor_DblClickSnapping;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class IMGUITextHandle;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class TextEditingUtilities;
}
namespace UnityEngine {
class TextSelectingUtilities;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class TextEditor;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextEditor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextEditor*, "UnityEngine", "TextEditor");
// Dependencies System.Object, UnityEngine.Rect, UnityEngine.Vector2
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextEditor
class CORDL_TYPE TextEditor : public ::System::Object {
public:
// Declarations
using DblClickSnapping = ::GlobalNamespace::TextEditor_DblClickSnapping;

/// @brief Field <position>k__BackingField, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__position_k__BackingField, put=__cordl_internal_set__position_k__BackingField)) ::UnityEngine::Rect  _position_k__BackingField;

/// @brief Field controlID, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_controlID, put=__cordl_internal_set_controlID)) int32_t  controlID;

 __declspec(property(get=get_cursorIndex)) int32_t  cursorIndex;

/// @brief Field focus, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_focus, put=__cordl_internal_set_focus)) bool  focus;

/// @brief Field graphicalCursorPos, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphicalCursorPos, put=__cordl_internal_set_graphicalCursorPos)) ::UnityEngine::Vector2  graphicalCursorPos;

/// @brief Field hasHorizontalCursorPos, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasHorizontalCursorPos, put=__cordl_internal_set_hasHorizontalCursorPos)) bool  hasHorizontalCursorPos;

 __declspec(property(put=set_isMultiline)) bool  isMultiline;

/// @brief Field isPasswordField, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPasswordField, put=__cordl_internal_set_isPasswordField)) bool  isPasswordField;

/// @brief Field keyboardOnScreen, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyboardOnScreen, put=__cordl_internal_set_keyboardOnScreen)) ::UnityEngine::TouchScreenKeyboard*  keyboardOnScreen;

/// @brief Field lastCursorPos, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastCursorPos, put=__cordl_internal_set_lastCursorPos)) ::UnityEngine::Vector2  lastCursorPos;

/// @brief Field m_Content, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Content, put=__cordl_internal_set_m_Content)) ::UnityEngine::GUIContent*  m_Content;

 __declspec(property(get=get_m_HasFocus, put=set_m_HasFocus)) bool  m_HasFocus;

/// @brief Field m_TextEditing, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TextEditing, put=__cordl_internal_set_m_TextEditing)) ::UnityEngine::TextEditingUtilities*  m_TextEditing;

/// @brief Field m_TextHandle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TextHandle, put=__cordl_internal_set_m_TextHandle)) ::UnityEngine::IMGUITextHandle*  m_TextHandle;

/// @brief Field m_TextSelecting, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TextSelecting, put=__cordl_internal_set_m_TextSelecting)) ::UnityEngine::TextSelectingUtilities*  m_TextSelecting;

/// @brief Field m_TextWithWhitespace, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TextWithWhitespace, put=__cordl_internal_set_m_TextWithWhitespace)) ::StringW  m_TextWithWhitespace;

/// @brief Field oldPos, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_oldPos, put=__cordl_internal_set_oldPos)) int32_t  oldPos;

/// @brief Field oldSelectPos, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_oldSelectPos, put=__cordl_internal_set_oldSelectPos)) int32_t  oldSelectPos;

/// @brief Field oldText, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_oldText, put=__cordl_internal_set_oldText)) ::StringW  oldText;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Rect  position;

/// @brief Field previousContentSize, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_previousContentSize, put=__cordl_internal_set_previousContentSize)) ::UnityEngine::Vector2  previousContentSize;

/// @brief Field scrollOffset, offset 0x4c, size 0x8 
 __declspec(property(get=__cordl_internal_get_scrollOffset, put=__cordl_internal_set_scrollOffset)) ::UnityEngine::Vector2  scrollOffset;

 __declspec(property(get=get_selectIndex)) int32_t  selectIndex;

 __declspec(property(get=get_showCursor)) bool  showCursor;

/// @brief Field style, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_style, put=__cordl_internal_set_style)) ::UnityEngine::GUIStyle*  style;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

 __declspec(property(get=get_textWithWhitespace, put=set_textWithWhitespace)) ::StringW  textWithWhitespace;

/// @brief Method DblClickSnap, addr 0xb65ac74, size 0x18, virtual false, abstract: false, final false
inline void DblClickSnap(::GlobalNamespace::TextEditor_DblClickSnapping  snapping) ;

/// @brief Method DetectFocusChange, addr 0xb65b8cc, size 0xc, virtual false, abstract: false, final false
inline void DetectFocusChange() ;

/// @brief Method DrawCursor, addr 0xb65b498, size 0x3d8, virtual false, abstract: false, final false
inline void DrawCursor(::StringW  newText) ;

/// @brief Method GetLocalCursorPosition, addr 0xb65a4f0, size 0xe8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetLocalCursorPosition(::UnityEngine::Vector2  cursorPosition) ;

/// @brief Method HandleKeyEvent, addr 0xb65a2f4, size 0x4c, virtual false, abstract: false, final false
inline bool HandleKeyEvent(::UnityEngine::Event*  e) ;

/// @brief Method Insert, addr 0xb65a460, size 0x14, virtual false, abstract: false, final false
inline void Insert(char16_t  c) ;

/// @brief Method MouseDragSelectsWholeWords, addr 0xb65abdc, size 0x18, virtual false, abstract: false, final false
inline void MouseDragSelectsWholeWords(bool  on) ;

/// @brief Method MoveCursorToPosition, addr 0xb65a474, size 0x4c, virtual false, abstract: false, final false
inline void MoveCursorToPosition(::UnityEngine::Vector2  cursorPosition) ;

/// @brief Method MoveCursorToPosition_Internal, addr 0xb65a4c0, size 0x30, virtual false, abstract: false, final false
inline void MoveCursorToPosition_Internal(::UnityEngine::Vector2  cursorPosition, bool  shift) ;

/// @brief [RequiredByNativeCode]
static inline ::UnityEngine::TextEditor* New_ctor() ;

/// @brief Method OnContentTextChangedHandle, addr 0xb65a240, size 0x40, virtual false, abstract: false, final false
inline void OnContentTextChangedHandle() ;

/// @brief Method OnCursorIndexChange, addr 0xb65b988, size 0x4, virtual true, abstract: false, final false
inline void OnCursorIndexChange() ;

/// @brief Method OnDetectFocusChange, addr 0xb65b8d8, size 0xb0, virtual true, abstract: false, final false
inline void OnDetectFocusChange() ;

/// @brief Method OnFocus, addr 0xb65a280, size 0x24, virtual false, abstract: false, final false
inline void OnFocus() ;

/// @brief Method OnLostFocus, addr 0xb65a2ec, size 0x8, virtual false, abstract: false, final false
inline void OnLostFocus() ;

/// @brief Method OnSelectIndexChange, addr 0xb65b98c, size 0x4, virtual true, abstract: false, final false
inline void OnSelectIndexChange() ;

/// @brief Method OnTextChangedHandle, addr 0xb65a1f8, size 0x48, virtual false, abstract: false, final false
inline void OnTextChangedHandle() ;

/// @brief Method ReplaceSelection, addr 0xb65a44c, size 0x14, virtual false, abstract: false, final false
inline void ReplaceSelection(::StringW  replace) ;

/// @brief Method SaveBackup, addr 0xb65b870, size 0x5c, virtual false, abstract: false, final false
inline void SaveBackup() ;

/// @brief Method SelectCurrentParagraph, addr 0xb65ae9c, size 0x14, virtual false, abstract: false, final false
inline void SelectCurrentParagraph() ;

/// @brief Method SelectCurrentWord, addr 0xb65ac94, size 0x14, virtual false, abstract: false, final false
inline void SelectCurrentWord() ;

/// @brief Method SelectToPosition, addr 0xb65a670, size 0x20, virtual false, abstract: false, final false
inline void SelectToPosition(::UnityEngine::Vector2  cursorPosition) ;

/// [VisibleToOtherModules]
/// @brief Method UpdateScrollOffset, addr 0xb65b0a0, size 0x3f8, virtual false, abstract: false, final false
inline void UpdateScrollOffset() ;

/// @brief Method UpdateScrollOffsetIfNeeded, addr 0xb65b044, size 0x5c, virtual false, abstract: false, final false
inline void UpdateScrollOffsetIfNeeded(::UnityEngine::Event*  evt) ;

/// @brief Method UpdateTextHandle, addr 0xb659b5c, size 0x140, virtual false, abstract: false, final false
inline void UpdateTextHandle() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get__position_k__BackingField() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get__position_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_controlID() const;

constexpr int32_t& __cordl_internal_get_controlID() ;

constexpr bool const& __cordl_internal_get_focus() const;

constexpr bool& __cordl_internal_get_focus() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_graphicalCursorPos() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_graphicalCursorPos() ;

constexpr bool const& __cordl_internal_get_hasHorizontalCursorPos() const;

constexpr bool& __cordl_internal_get_hasHorizontalCursorPos() ;

constexpr bool const& __cordl_internal_get_isPasswordField() const;

constexpr bool& __cordl_internal_get_isPasswordField() ;

constexpr ::UnityEngine::TouchScreenKeyboard* const& __cordl_internal_get_keyboardOnScreen() const;

constexpr ::UnityEngine::TouchScreenKeyboard*& __cordl_internal_get_keyboardOnScreen() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_lastCursorPos() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_lastCursorPos() ;

constexpr ::UnityEngine::GUIContent* const& __cordl_internal_get_m_Content() const;

constexpr ::UnityEngine::GUIContent*& __cordl_internal_get_m_Content() ;

constexpr ::UnityEngine::TextEditingUtilities* const& __cordl_internal_get_m_TextEditing() const;

constexpr ::UnityEngine::TextEditingUtilities*& __cordl_internal_get_m_TextEditing() ;

constexpr ::UnityEngine::IMGUITextHandle* const& __cordl_internal_get_m_TextHandle() const;

constexpr ::UnityEngine::IMGUITextHandle*& __cordl_internal_get_m_TextHandle() ;

constexpr ::UnityEngine::TextSelectingUtilities* const& __cordl_internal_get_m_TextSelecting() const;

constexpr ::UnityEngine::TextSelectingUtilities*& __cordl_internal_get_m_TextSelecting() ;

constexpr ::StringW const& __cordl_internal_get_m_TextWithWhitespace() const;

constexpr ::StringW& __cordl_internal_get_m_TextWithWhitespace() ;

constexpr int32_t const& __cordl_internal_get_oldPos() const;

constexpr int32_t& __cordl_internal_get_oldPos() ;

constexpr int32_t const& __cordl_internal_get_oldSelectPos() const;

constexpr int32_t& __cordl_internal_get_oldSelectPos() ;

constexpr ::StringW const& __cordl_internal_get_oldText() const;

constexpr ::StringW& __cordl_internal_get_oldText() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_previousContentSize() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_previousContentSize() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scrollOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_scrollOffset() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get_style() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_style() ;

constexpr void __cordl_internal_set__position_k__BackingField(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_controlID(int32_t  value) ;

constexpr void __cordl_internal_set_focus(bool  value) ;

constexpr void __cordl_internal_set_graphicalCursorPos(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_hasHorizontalCursorPos(bool  value) ;

constexpr void __cordl_internal_set_isPasswordField(bool  value) ;

constexpr void __cordl_internal_set_keyboardOnScreen(::UnityEngine::TouchScreenKeyboard*  value) ;

constexpr void __cordl_internal_set_lastCursorPos(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_Content(::UnityEngine::GUIContent*  value) ;

constexpr void __cordl_internal_set_m_TextEditing(::UnityEngine::TextEditingUtilities*  value) ;

constexpr void __cordl_internal_set_m_TextHandle(::UnityEngine::IMGUITextHandle*  value) ;

constexpr void __cordl_internal_set_m_TextSelecting(::UnityEngine::TextSelectingUtilities*  value) ;

constexpr void __cordl_internal_set_m_TextWithWhitespace(::StringW  value) ;

constexpr void __cordl_internal_set_oldPos(int32_t  value) ;

constexpr void __cordl_internal_set_oldSelectPos(int32_t  value) ;

constexpr void __cordl_internal_set_oldText(::StringW  value) ;

constexpr void __cordl_internal_set_previousContentSize(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_scrollOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_style(::UnityEngine::GUIStyle*  value) ;

/// [RequiredByNativeCode]
/// @brief Method .ctor, addr 0xb659d4c, size 0x45c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_cursorIndex, addr 0xb659d24, size 0x14, virtual false, abstract: false, final false
inline int32_t get_cursorIndex() ;

/// @brief Method get_m_HasFocus, addr 0xb6599f4, size 0x8, virtual false, abstract: false, final false
inline bool get_m_HasFocus() ;

/// [CompilerGenerated]
/// @brief Method get_position, addr 0xb659d0c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_position() ;

/// @brief Method get_selectIndex, addr 0xb659d38, size 0x14, virtual false, abstract: false, final false
inline int32_t get_selectIndex() ;

/// @brief Method get_showCursor, addr 0xb6599dc, size 0x18, virtual false, abstract: false, final false
inline bool get_showCursor() ;

/// @brief Method get_text, addr 0xb659a04, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_text() ;

/// @brief Method get_textWithWhitespace, addr 0xb659c9c, size 0x70, virtual false, abstract: false, final false
inline ::StringW get_textWithWhitespace() ;

/// @brief Method set_isMultiline, addr 0xb6599c0, size 0x1c, virtual false, abstract: false, final false
inline void set_isMultiline(bool  value) ;

/// @brief Method set_m_HasFocus, addr 0xb6599fc, size 0x8, virtual false, abstract: false, final false
inline void set_m_HasFocus(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_position, addr 0xb659d18, size 0xc, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Rect  value) ;

/// @brief Method set_text, addr 0xb659a1c, size 0xc0, virtual false, abstract: false, final false
inline void set_text(::StringW  value) ;

/// @brief Method set_textWithWhitespace, addr 0xb659adc, size 0x80, virtual false, abstract: false, final false
inline void set_textWithWhitespace(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextEditor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextEditor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextEditor(TextEditor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextEditor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextEditor(TextEditor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28852};

/// @brief Field m_Content, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::GUIContent*  ___m_Content;

/// @brief Field m_TextSelecting, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::TextSelectingUtilities*  ___m_TextSelecting;

/// @brief Field m_TextEditing, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::TextEditingUtilities*  ___m_TextEditing;

/// @brief Field m_TextHandle, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::IMGUITextHandle*  ___m_TextHandle;

/// @brief Field keyboardOnScreen, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::TouchScreenKeyboard*  ___keyboardOnScreen;

/// @brief Field controlID, offset: 0x38, size: 0x4, def value: None
 int32_t  ___controlID;

/// @brief Field style, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ___style;

/// [Obsolete("\'hasHorizontalCursorPos\' has been deprecated. Changes to this member will not be observed. Use \'hasHorizontalCursor\' instead.", true)]
/// @brief Field hasHorizontalCursorPos, offset: 0x48, size: 0x1, def value: None
 bool  ___hasHorizontalCursorPos;

/// @brief Field isPasswordField, offset: 0x49, size: 0x1, def value: None
 bool  ___isPasswordField;

/// @brief Field scrollOffset, offset: 0x4c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___scrollOffset;

/// @brief Field focus, offset: 0x54, size: 0x1, def value: None
 bool  ___focus;

/// @brief Field m_TextWithWhitespace, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___m_TextWithWhitespace;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <position>k__BackingField, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Rect  ____position_k__BackingField;

/// @brief Field graphicalCursorPos, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___graphicalCursorPos;

/// @brief Field lastCursorPos, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___lastCursorPos;

/// @brief Field previousContentSize, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___previousContentSize;

/// @brief Field oldText, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___oldText;

/// @brief Field oldPos, offset: 0x90, size: 0x4, def value: None
 int32_t  ___oldPos;

/// @brief Field oldSelectPos, offset: 0x94, size: 0x4, def value: None
 int32_t  ___oldSelectPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextEditor, ___m_Content) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___m_TextSelecting) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___m_TextEditing) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___m_TextHandle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___keyboardOnScreen) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___controlID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___style) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___hasHorizontalCursorPos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___isPasswordField) == 0x49, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___scrollOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___focus) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___m_TextWithWhitespace) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ____position_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___graphicalCursorPos) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___lastCursorPos) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___previousContentSize) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___oldText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___oldPos) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___oldSelectPos) == 0x94, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextEditor) == 0x98, "Size mismatch!");

} // namespace end def UnityEngine

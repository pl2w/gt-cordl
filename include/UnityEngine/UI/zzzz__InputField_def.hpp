#pragma once
// IWYU pragma private; include "UnityEngine/UI/InputField.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_CharacterValidation_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_ContentType_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_InputType_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_LineType_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputField)
namespace GlobalNamespace {
struct InputField_CharacterValidation;
}
namespace GlobalNamespace {
struct InputField_ContentType;
}
namespace GlobalNamespace {
struct InputField_EditState;
}
namespace GlobalNamespace {
struct InputField_InputType;
}
namespace GlobalNamespace {
struct InputField_LineType;
}
namespace GlobalNamespace {
struct Selectable_SelectionState;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class BaseInput;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::EventSystems {
class IEndDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class IUpdateSelectedHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine::UI {
class InputField_EndEditEvent;
}
namespace UnityEngine::UI {
class InputField_OnChangeEvent;
}
namespace UnityEngine::UI {
class InputField_OnValidateInput;
}
namespace UnityEngine::UI {
class InputField_SubmitEvent;
}
namespace UnityEngine::UI {
class InputField__CaretBlink_d__172;
}
namespace UnityEngine::UI {
class InputField__MouseDragOutsideRect_d__196;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
class CanvasRenderer;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct RangeInt;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class TextGenerator;
}
namespace UnityEngine {
struct TouchScreenKeyboardType;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class WaitForSecondsRealtime;
}
// Forward declare root types
namespace UnityEngine::UI {
class InputField;
}
namespace UnityEngine::UI {
class InputField_EndEditEvent;
}
namespace UnityEngine::UI {
class InputField_OnChangeEvent;
}
namespace UnityEngine::UI {
class InputField_OnValidateInput;
}
namespace UnityEngine::UI {
class InputField_SubmitEvent;
}
namespace UnityEngine::UI {
class InputField__CaretBlink_d__172;
}
namespace UnityEngine::UI {
class InputField__MouseDragOutsideRect_d__196;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::InputField*);
MARK_REF_T(::UnityEngine::UI::InputField_EndEditEvent*);
MARK_REF_T(::UnityEngine::UI::InputField_OnChangeEvent*);
MARK_REF_T(::UnityEngine::UI::InputField_OnValidateInput*);
MARK_REF_T(::UnityEngine::UI::InputField_SubmitEvent*);
MARK_REF_T(::UnityEngine::UI::InputField__CaretBlink_d__172*);
MARK_REF_T(::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::InputField*, "UnityEngine.UI", "InputField");
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::InputField_EndEditEvent*, "UnityEngine.UI", "InputField/EndEditEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::InputField_OnChangeEvent*, "UnityEngine.UI", "InputField/OnChangeEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::InputField_OnValidateInput*, "UnityEngine.UI", "InputField/OnValidateInput");
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::InputField_SubmitEvent*, "UnityEngine.UI", "InputField/SubmitEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::InputField__CaretBlink_d__172*, "UnityEngine.UI", "InputField/<CaretBlink>d__172");
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196*, "UnityEngine.UI", "InputField/<MouseDragOutsideRect>d__196");
// [AddComponentMenu("UI/Legacy/Input Field", 103)]
// Dependencies UnityEngine.Color, UnityEngine.TouchScreenKeyboardType, UnityEngine.UI.InputField::CharacterValidation, UnityEngine.UI.InputField::ContentType, UnityEngine.UI.InputField::InputType, UnityEngine.UI.InputField::LineType, UnityEngine.UI.Selectable, UnityEngine.UIVertex
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.InputField
class CORDL_TYPE InputField : public ::UnityEngine::UI::Selectable {
public:
// Declarations
using CharacterValidation = ::GlobalNamespace::InputField_CharacterValidation;

using ContentType = ::GlobalNamespace::InputField_ContentType;

using EditState = ::GlobalNamespace::InputField_EditState;

using InputType = ::GlobalNamespace::InputField_InputType;

using LineType = ::GlobalNamespace::InputField_LineType;

using EndEditEvent = ::UnityEngine::UI::InputField_EndEditEvent;

using OnChangeEvent = ::UnityEngine::UI::InputField_OnChangeEvent;

using OnValidateInput = ::UnityEngine::UI::InputField_OnValidateInput;

using SubmitEvent = ::UnityEngine::UI::InputField_SubmitEvent;

using _CaretBlink_d__172 = ::UnityEngine::UI::InputField__CaretBlink_d__172;

using _MouseDragOutsideRect_d__196 = ::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196;

 __declspec(property(get=get_asteriskChar, put=set_asteriskChar)) char16_t  asteriskChar;

 __declspec(property(get=get_cachedInputTextGenerator)) ::UnityEngine::TextGenerator*  cachedInputTextGenerator;

 __declspec(property(get=get_caretBlinkRate, put=set_caretBlinkRate)) float_t  caretBlinkRate;

 __declspec(property(get=get_caretColor, put=set_caretColor)) ::UnityEngine::Color  caretColor;

 __declspec(property(get=get_caretPosition, put=set_caretPosition)) int32_t  caretPosition;

 __declspec(property(get=get_caretPositionInternal, put=set_caretPositionInternal)) int32_t  caretPositionInternal;

/// @brief Field caretRectTrans, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_caretRectTrans, put=__cordl_internal_set_caretRectTrans)) ::UnityW<::UnityEngine::RectTransform>  caretRectTrans;

 __declspec(property(get=get_caretSelectPositionInternal, put=set_caretSelectPositionInternal)) int32_t  caretSelectPositionInternal;

 __declspec(property(get=get_caretWidth, put=set_caretWidth)) int32_t  caretWidth;

 __declspec(property(get=get_characterLimit, put=set_characterLimit)) int32_t  characterLimit;

 __declspec(property(get=get_characterValidation, put=set_characterValidation)) ::GlobalNamespace::InputField_CharacterValidation  characterValidation;

 __declspec(property(get=get_compositionString)) ::StringW  compositionString;

 __declspec(property(get=get_contentType, put=set_contentType)) ::GlobalNamespace::InputField_ContentType  contentType;

 __declspec(property(get=get_customCaretColor, put=set_customCaretColor)) bool  customCaretColor;

 __declspec(property(get=get_flexibleHeight)) float_t  flexibleHeight;

 __declspec(property(get=get_flexibleWidth)) float_t  flexibleWidth;

 __declspec(property(get=get_hasSelection)) bool  hasSelection;

 __declspec(property(get=get_input)) ::UnityW<::UnityEngine::EventSystems::BaseInput>  input;

 __declspec(property(get=get_inputType, put=set_inputType)) ::GlobalNamespace::InputField_InputType  inputType;

 __declspec(property(get=get_isFocused)) bool  isFocused;

/// @brief Field kSeparators, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kSeparators, put=setStaticF_kSeparators)) ::ArrayW<char16_t>  kSeparators;

 __declspec(property(get=get_keyboardType, put=set_keyboardType)) ::UnityEngine::TouchScreenKeyboardType  keyboardType;

 __declspec(property(get=get_layoutPriority)) int32_t  layoutPriority;

 __declspec(property(get=get_lineType, put=set_lineType)) ::GlobalNamespace::InputField_LineType  lineType;

/// @brief Field m_AllowInput, offset 0x1d0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowInput, put=__cordl_internal_set_m_AllowInput)) bool  m_AllowInput;

/// @brief Field m_AsteriskChar, offset 0x120, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_AsteriskChar, put=__cordl_internal_set_m_AsteriskChar)) char16_t  m_AsteriskChar;

/// @brief Field m_BlinkCoroutine, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BlinkCoroutine, put=__cordl_internal_set_m_BlinkCoroutine)) ::UnityEngine::Coroutine*  m_BlinkCoroutine;

/// @brief Field m_BlinkStartTime, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BlinkStartTime, put=__cordl_internal_set_m_BlinkStartTime)) float_t  m_BlinkStartTime;

/// @brief Field m_CachedInputRenderer, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedInputRenderer, put=__cordl_internal_set_m_CachedInputRenderer)) ::UnityW<::UnityEngine::CanvasRenderer>  m_CachedInputRenderer;

/// @brief Field m_CaretBlinkRate, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CaretBlinkRate, put=__cordl_internal_set_m_CaretBlinkRate)) float_t  m_CaretBlinkRate;

/// @brief Field m_CaretColor, offset 0x158, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_CaretColor, put=__cordl_internal_set_m_CaretColor)) ::UnityEngine::Color  m_CaretColor;

/// @brief Field m_CaretPosition, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CaretPosition, put=__cordl_internal_set_m_CaretPosition)) int32_t  m_CaretPosition;

/// @brief Field m_CaretSelectPosition, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CaretSelectPosition, put=__cordl_internal_set_m_CaretSelectPosition)) int32_t  m_CaretSelectPosition;

/// @brief Field m_CaretVisible, offset 0x1d4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CaretVisible, put=__cordl_internal_set_m_CaretVisible)) bool  m_CaretVisible;

/// @brief Field m_CaretWidth, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CaretWidth, put=__cordl_internal_set_m_CaretWidth)) int32_t  m_CaretWidth;

/// @brief Field m_CharacterLimit, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CharacterLimit, put=__cordl_internal_set_m_CharacterLimit)) int32_t  m_CharacterLimit;

/// @brief Field m_CharacterValidation, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CharacterValidation, put=__cordl_internal_set_m_CharacterValidation)) ::GlobalNamespace::InputField_CharacterValidation  m_CharacterValidation;

/// @brief Field m_ContentType, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ContentType, put=__cordl_internal_set_m_ContentType)) ::GlobalNamespace::InputField_ContentType  m_ContentType;

/// @brief Field m_CursorVerts, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CursorVerts, put=__cordl_internal_set_m_CursorVerts)) ::ArrayW<::UnityEngine::UIVertex>  m_CursorVerts;

/// @brief Field m_CustomCaretColor, offset 0x168, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CustomCaretColor, put=__cordl_internal_set_m_CustomCaretColor)) bool  m_CustomCaretColor;

/// @brief Field m_DragCoroutine, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DragCoroutine, put=__cordl_internal_set_m_DragCoroutine)) ::UnityEngine::Coroutine*  m_DragCoroutine;

/// @brief Field m_DragPositionOutOfBounds, offset 0x1d3, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DragPositionOutOfBounds, put=__cordl_internal_set_m_DragPositionOutOfBounds)) bool  m_DragPositionOutOfBounds;

/// @brief Field m_DrawEnd, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DrawEnd, put=__cordl_internal_set_m_DrawEnd)) int32_t  m_DrawEnd;

/// @brief Field m_DrawStart, offset 0x1e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DrawStart, put=__cordl_internal_set_m_DrawStart)) int32_t  m_DrawStart;

/// @brief Field m_HasDoneFocusTransition, offset 0x201, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasDoneFocusTransition, put=__cordl_internal_set_m_HasDoneFocusTransition)) bool  m_HasDoneFocusTransition;

/// @brief Field m_HideMobileInput, offset 0x12c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HideMobileInput, put=__cordl_internal_set_m_HideMobileInput)) bool  m_HideMobileInput;

/// @brief Field m_InputTextCache, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputTextCache, put=__cordl_internal_set_m_InputTextCache)) ::UnityEngine::TextGenerator*  m_InputTextCache;

/// @brief Field m_InputType, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InputType, put=__cordl_internal_set_m_InputType)) ::GlobalNamespace::InputField_InputType  m_InputType;

/// @brief Field m_IsCompositionActive, offset 0x211, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsCompositionActive, put=__cordl_internal_set_m_IsCompositionActive)) bool  m_IsCompositionActive;

/// @brief Field m_Keyboard, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Keyboard, put=__cordl_internal_set_m_Keyboard)) ::UnityEngine::TouchScreenKeyboard*  m_Keyboard;

/// @brief Field m_KeyboardType, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_KeyboardType, put=__cordl_internal_set_m_KeyboardType)) ::UnityEngine::TouchScreenKeyboardType  m_KeyboardType;

/// @brief Field m_LineType, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LineType, put=__cordl_internal_set_m_LineType)) ::GlobalNamespace::InputField_LineType  m_LineType;

/// @brief Field m_Mesh, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Mesh, put=__cordl_internal_set_m_Mesh)) ::UnityW<::UnityEngine::Mesh>  m_Mesh;

/// @brief Field m_OnDidEndEdit, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnDidEndEdit, put=__cordl_internal_set_m_OnDidEndEdit)) ::UnityEngine::UI::InputField_EndEditEvent*  m_OnDidEndEdit;

/// @brief Field m_OnSubmit, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnSubmit, put=__cordl_internal_set_m_OnSubmit)) ::UnityEngine::UI::InputField_SubmitEvent*  m_OnSubmit;

/// @brief Field m_OnValidateInput, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnValidateInput, put=__cordl_internal_set_m_OnValidateInput)) ::UnityEngine::UI::InputField_OnValidateInput*  m_OnValidateInput;

/// @brief Field m_OnValueChanged, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnValueChanged, put=__cordl_internal_set_m_OnValueChanged)) ::UnityEngine::UI::InputField_OnChangeEvent*  m_OnValueChanged;

/// @brief Field m_OriginalText, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OriginalText, put=__cordl_internal_set_m_OriginalText)) ::StringW  m_OriginalText;

/// @brief Field m_Placeholder, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Placeholder, put=__cordl_internal_set_m_Placeholder)) ::UnityW<::UnityEngine::UI::Graphic>  m_Placeholder;

/// @brief Field m_PreventFontCallback, offset 0x1c0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PreventFontCallback, put=__cordl_internal_set_m_PreventFontCallback)) bool  m_PreventFontCallback;

/// @brief Field m_ProcessingEvent, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ProcessingEvent, put=__cordl_internal_set_m_ProcessingEvent)) ::UnityEngine::Event*  m_ProcessingEvent;

/// @brief Field m_ReadOnly, offset 0x190, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ReadOnly, put=__cordl_internal_set_m_ReadOnly)) bool  m_ReadOnly;

/// @brief Field m_SelectionColor, offset 0x16c, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_SelectionColor, put=__cordl_internal_set_m_SelectionColor)) ::UnityEngine::Color  m_SelectionColor;

/// @brief Field m_ShouldActivateNextUpdate, offset 0x1d1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ShouldActivateNextUpdate, put=__cordl_internal_set_m_ShouldActivateNextUpdate)) bool  m_ShouldActivateNextUpdate;

/// @brief Field m_ShouldActivateOnSelect, offset 0x191, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ShouldActivateOnSelect, put=__cordl_internal_set_m_ShouldActivateOnSelect)) bool  m_ShouldActivateOnSelect;

/// @brief Field m_Text, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Text, put=__cordl_internal_set_m_Text)) ::StringW  m_Text;

/// @brief Field m_TextComponent, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TextComponent, put=__cordl_internal_set_m_TextComponent)) ::UnityW<::UnityEngine::UI::Text>  m_TextComponent;

/// @brief Field m_TouchKeyboardAllowsInPlaceEditing, offset 0x210, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing, put=__cordl_internal_set_m_TouchKeyboardAllowsInPlaceEditing)) bool  m_TouchKeyboardAllowsInPlaceEditing;

/// @brief Field m_UpdateDrag, offset 0x1d2, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UpdateDrag, put=__cordl_internal_set_m_UpdateDrag)) bool  m_UpdateDrag;

/// @brief Field m_WaitForSecondsRealtime, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_WaitForSecondsRealtime, put=__cordl_internal_set_m_WaitForSecondsRealtime)) ::UnityEngine::WaitForSecondsRealtime*  m_WaitForSecondsRealtime;

/// @brief Field m_WasCanceled, offset 0x200, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WasCanceled, put=__cordl_internal_set_m_WasCanceled)) bool  m_WasCanceled;

 __declspec(property(get=get_mesh)) ::UnityW<::UnityEngine::Mesh>  mesh;

 __declspec(property(get=get_minHeight)) float_t  minHeight;

 __declspec(property(get=get_minWidth)) float_t  minWidth;

 __declspec(property(get=get_multiLine)) bool  multiLine;

 __declspec(property(get=get_onEndEdit, put=set_onEndEdit)) ::UnityEngine::UI::InputField_EndEditEvent*  onEndEdit;

 __declspec(property(get=get_onSubmit, put=set_onSubmit)) ::UnityEngine::UI::InputField_SubmitEvent*  onSubmit;

 __declspec(property(get=get_onValidateInput, put=set_onValidateInput)) ::UnityEngine::UI::InputField_OnValidateInput*  onValidateInput;

/// @brief [Obsolete("onValueChange has been renamed to onValueChanged")]
 __declspec(property(get=get_onValueChange, put=set_onValueChange)) ::UnityEngine::UI::InputField_OnChangeEvent*  onValueChange;

 __declspec(property(get=get_onValueChanged, put=set_onValueChanged)) ::UnityEngine::UI::InputField_OnChangeEvent*  onValueChanged;

 __declspec(property(get=get_placeholder, put=set_placeholder)) ::UnityW<::UnityEngine::UI::Graphic>  placeholder;

 __declspec(property(get=get_preferredHeight)) float_t  preferredHeight;

 __declspec(property(get=get_preferredWidth)) float_t  preferredWidth;

 __declspec(property(get=get_readOnly, put=set_readOnly)) bool  readOnly;

/// @brief Field s_IsQuestDevice, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_IsQuestDevice, put=setStaticF_s_IsQuestDevice)) bool  s_IsQuestDevice;

/// @brief Field s_IsQuestDeviceEvaluated, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_IsQuestDeviceEvaluated, put=setStaticF_s_IsQuestDeviceEvaluated)) bool  s_IsQuestDeviceEvaluated;

 __declspec(property(get=get_selectionAnchorPosition, put=set_selectionAnchorPosition)) int32_t  selectionAnchorPosition;

 __declspec(property(get=get_selectionColor, put=set_selectionColor)) ::UnityEngine::Color  selectionColor;

 __declspec(property(get=get_selectionFocusPosition, put=set_selectionFocusPosition)) int32_t  selectionFocusPosition;

 __declspec(property(get=get_shouldActivateOnSelect, put=set_shouldActivateOnSelect)) bool  shouldActivateOnSelect;

 __declspec(property(get=get_shouldHideMobileInput, put=set_shouldHideMobileInput)) bool  shouldHideMobileInput;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

 __declspec(property(get=get_textComponent, put=set_textComponent)) ::UnityW<::UnityEngine::UI::Text>  textComponent;

 __declspec(property(get=get_touchScreenKeyboard)) ::UnityEngine::TouchScreenKeyboard*  touchScreenKeyboard;

 __declspec(property(get=get_wasCanceled)) bool  wasCanceled;

/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IEndDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr operator  ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
constexpr operator  ::UnityEngine::EventSystems::IUpdateSelectedHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr operator  ::UnityEngine::UI::ICanvasElement*() noexcept;

/// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
constexpr operator  ::UnityEngine::UI::ILayoutElement*() noexcept;

/// @brief Method ActivateInputField, addr 0xb8f31bc, size 0x120, virtual false, abstract: false, final false
inline void ActivateInputField() ;

/// @brief Method ActivateInputFieldInternal, addr 0xb8ed21c, size 0x33c, virtual false, abstract: false, final false
inline void ActivateInputFieldInternal() ;

/// @brief Method Append, addr 0xb8f0b78, size 0xbc, virtual true, abstract: false, final false
inline void Append(::StringW  input) ;

/// @brief Method Append, addr 0xb8f0c34, size 0x264, virtual true, abstract: false, final false
inline void Append(char16_t  input) ;

/// @brief Method AssignPositioningIfNeeded, addr 0xb8ed558, size 0x500, virtual false, abstract: false, final false
inline void AssignPositioningIfNeeded() ;

/// @brief Method Awake, addr 0xb8ebd84, size 0xc0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Backspace, addr 0xb8ef57c, size 0x11c, virtual false, abstract: false, final false
inline void Backspace() ;

/// @brief Method CalculateLayoutInputHorizontal, addr 0xb8f33d4, size 0x4, virtual true, abstract: false, final false
inline void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical, addr 0xb8f33d8, size 0x4, virtual true, abstract: false, final false
inline void CalculateLayoutInputVertical() ;

/// [IteratorStateMachine(typeof(UnityEngine.UI.InputField::<CaretBlink>d__172))]
/// @brief Method CaretBlink, addr 0xb8ec4d0, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CaretBlink() ;

/// @brief Method ClampPos, addr 0xb8ebb2c, size 0x34, virtual false, abstract: false, final false
inline void ClampPos(::by_ref<int32_t>  pos) ;

/// @brief Method CreateCursorVerts, addr 0xb8f3078, size 0x144, virtual false, abstract: false, final false
inline void CreateCursorVerts() ;

/// @brief Method DeactivateInputField, addr 0xb8ec2e4, size 0x188, virtual false, abstract: false, final false
inline void DeactivateInputField() ;

/// @brief Method Delete, addr 0xb8ef7ec, size 0x1c8, virtual false, abstract: false, final false
inline void Delete() ;

/// @brief Method DetermineCharacterLine, addr 0xb8efff4, size 0x110, virtual false, abstract: false, final false
inline int32_t DetermineCharacterLine(int32_t  charPos, ::UnityEngine::TextGenerator*  generator) ;

/// @brief Method DoStateTransition, addr 0xb8f33a8, size 0x2c, virtual true, abstract: false, final false
inline void DoStateTransition(::GlobalNamespace::Selectable_SelectionState  state, bool  instant) ;

/// @brief Method EnforceContentType, addr 0xb8eb688, size 0x108, virtual false, abstract: false, final false
inline void EnforceContentType() ;

/// @brief Method EnforceTextHOverflow, addr 0xb8ea2b8, size 0xa4, virtual false, abstract: false, final false
inline void EnforceTextHOverflow() ;

/// @brief Method FindtNextWordBegin, addr 0xb8efe98, size 0xbc, virtual false, abstract: false, final false
inline int32_t FindtNextWordBegin() ;

/// @brief Method FindtPrevWordBegin, addr 0xb8eff54, size 0xa0, virtual false, abstract: false, final false
inline int32_t FindtPrevWordBegin() ;

/// @brief Method ForceLabelUpdate, addr 0xb8f1b98, size 0x4, virtual false, abstract: false, final false
inline void ForceLabelUpdate() ;

/// @brief Method ForwardSpace, addr 0xb8ef698, size 0xb0, virtual false, abstract: false, final false
inline void ForwardSpace() ;

/// @brief Method GenerateCaret, addr 0xb8f2230, size 0x714, virtual false, abstract: false, final false
inline void GenerateCaret(::UnityEngine::UI::VertexHelper*  vbo, ::UnityEngine::Vector2  roundingOffset) ;

/// @brief Method GenerateHighlight, addr 0xb8f2944, size 0x734, virtual false, abstract: false, final false
inline void GenerateHighlight(::UnityEngine::UI::VertexHelper*  vbo, ::UnityEngine::Vector2  roundingOffset) ;

/// @brief Method GetCharacterIndexFromPosition, addr 0xb8ee7a4, size 0x294, virtual false, abstract: false, final false
inline int32_t GetCharacterIndexFromPosition(::UnityEngine::Vector2  pos) ;

/// @brief Method GetInternalSelection, addr 0xb8ec9d0, size 0xb4, virtual false, abstract: false, final false
inline ::UnityEngine::RangeInt GetInternalSelection() ;

/// @brief Method GetLineEndPosition, addr 0xb8eea38, size 0x164, virtual false, abstract: false, final false
static inline int32_t GetLineEndPosition(::UnityEngine::TextGenerator*  gen, int32_t  line) ;

/// @brief Method GetLineStartPosition, addr 0xb8f1a48, size 0x150, virtual false, abstract: false, final false
static inline int32_t GetLineStartPosition(::UnityEngine::TextGenerator*  gen, int32_t  line) ;

/// @brief Method GetSelectedString, addr 0xb8ef748, size 0xa4, virtual false, abstract: false, final false
inline ::StringW GetSelectedString() ;

/// @brief Method GetUnclampedCharacterLineFromPosition, addr 0xb8ee594, size 0x210, virtual false, abstract: false, final false
inline int32_t GetUnclampedCharacterLineFromPosition(::UnityEngine::Vector2  pos, ::UnityEngine::TextGenerator*  generator) ;

/// @brief Method GraphicUpdateComplete, addr 0xb8f1ff4, size 0x4, virtual true, abstract: false, final false
inline void GraphicUpdateComplete() ;

/// @brief Method InPlaceEditing, addr 0xb8ec920, size 0x30, virtual false, abstract: false, final false
inline bool InPlaceEditing() ;

/// @brief Method InPlaceEditingChanged, addr 0xb8ec950, size 0x80, virtual false, abstract: false, final false
inline bool InPlaceEditingChanged() ;

/// @brief Method Insert, addr 0xb8f09e8, size 0x110, virtual false, abstract: false, final false
inline void Insert(char16_t  c) ;

/// @brief Method IsSelectionVisible, addr 0xb8f19dc, size 0x6c, virtual false, abstract: false, final false
inline bool IsSelectionVisible() ;

/// @brief Method IsValidChar, addr 0xb8efc9c, size 0x70, virtual false, abstract: false, final false
inline bool IsValidChar(char16_t  c) ;

/// @brief Method KeyPressed, addr 0xb8ef16c, size 0x410, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputField_EditState KeyPressed(::UnityEngine::Event*  evt) ;

/// @brief Method LateUpdate, addr 0xb8ecc44, size 0x5d8, virtual true, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LayoutComplete, addr 0xb8f1ff0, size 0x4, virtual true, abstract: false, final false
inline void LayoutComplete() ;

/// @brief Method LineDownCharacterPosition, addr 0xb8f045c, size 0x2b4, virtual false, abstract: false, final false
inline int32_t LineDownCharacterPosition(int32_t  originalPos, bool  goToLastChar) ;

/// @brief Method LineUpCharacterPosition, addr 0xb8f0104, size 0x358, virtual false, abstract: false, final false
inline int32_t LineUpCharacterPosition(int32_t  originalPos, bool  goToFirstChar) ;

/// @brief Method MarkGeometryAsDirty, addr 0xb8eafa8, size 0x58, virtual false, abstract: false, final false
inline void MarkGeometryAsDirty() ;

/// @brief Method MayDrag, addr 0xb8eeb9c, size 0xd8, virtual false, abstract: false, final false
inline bool MayDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// [IteratorStateMachine(typeof(UnityEngine.UI.InputField::<MouseDragOutsideRect>d__196))]
/// @brief Method MouseDragOutsideRect, addr 0xb8eee94, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* MouseDragOutsideRect(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method MoveDown, addr 0xb8efc94, size 0x8, virtual false, abstract: false, final false
inline void MoveDown(bool  shift) ;

/// @brief Method MoveDown, addr 0xb8f0710, size 0x160, virtual false, abstract: false, final false
inline void MoveDown(bool  shift, bool  goToLastChar) ;

/// @brief Method MoveLeft, addr 0xb8ef9fc, size 0x148, virtual false, abstract: false, final false
inline void MoveLeft(bool  shift, bool  ctrl) ;

/// @brief Method MoveRight, addr 0xb8efb44, size 0x148, virtual false, abstract: false, final false
inline void MoveRight(bool  shift, bool  ctrl) ;

/// @brief Method MoveTextEnd, addr 0xb8ec6e4, size 0x60, virtual false, abstract: false, final false
inline void MoveTextEnd(bool  shift) ;

/// @brief Method MoveTextStart, addr 0xb8ec744, size 0x7c, virtual false, abstract: false, final false
inline void MoveTextStart(bool  shift) ;

/// @brief Method MoveUp, addr 0xb8efc8c, size 0x8, virtual false, abstract: false, final false
inline void MoveUp(bool  shift) ;

/// @brief Method MoveUp, addr 0xb8f0870, size 0x178, virtual false, abstract: false, final false
inline void MoveUp(bool  shift, bool  goToFirstChar) ;

static inline ::UnityEngine::UI::InputField* New_ctor() ;

/// @brief Method OnBeginDrag, addr 0xb8eec74, size 0x20, virtual true, abstract: false, final false
inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnDeselect, addr 0xb8f3334, size 0x2c, virtual true, abstract: false, final false
inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnDestroy, addr 0xb8ec46c, size 0x64, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb8ec0a4, size 0x240, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrag, addr 0xb8eec94, size 0x200, virtual true, abstract: false, final false
inline void OnDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnEnable, addr 0xb8ebe44, size 0x260, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEndDrag, addr 0xb8eef44, size 0x1c, virtual true, abstract: false, final false
inline void OnEndDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnFillVBO, addr 0xb8f1ff8, size 0x238, virtual false, abstract: false, final false
inline void OnFillVBO(::UnityEngine::Mesh*  vbo) ;

/// @brief Method OnFocus, addr 0xb8ec6a8, size 0x4, virtual false, abstract: false, final false
inline void OnFocus() ;

/// @brief Method OnPointerClick, addr 0xb8f3318, size 0x1c, virtual true, abstract: false, final false
inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerDown, addr 0xb8eef60, size 0x20c, virtual true, abstract: false, final false
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnSelect, addr 0xb8f32dc, size 0x3c, virtual true, abstract: false, final false
inline void OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnSubmit, addr 0xb8f3360, size 0x48, virtual true, abstract: false, final false
inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnUpdateSelected, addr 0xb8efd10, size 0x188, virtual true, abstract: false, final false
inline void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method ProcessEvent, addr 0xb8efd0c, size 0x4, virtual false, abstract: false, final false
inline void ProcessEvent(::UnityEngine::Event*  e) ;

/// @brief Method Rebuild, addr 0xb8f1b9c, size 0x10, virtual true, abstract: false, final false
inline void Rebuild(::UnityEngine::UI::CanvasUpdate  update) ;

/// [Obsolete("This function is no longer used. Please use RectTransformUtility.ScreenPointToLocalPointInRectangle() instead.")]
/// @brief Method ScreenToLocal, addr 0xb8ee1f0, size 0x3a4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ScreenToLocal(::UnityEngine::Vector2  screen) ;

/// @brief Method SelectAll, addr 0xb8ec6ac, size 0x38, virtual false, abstract: false, final false
inline void SelectAll() ;

/// @brief Method SendOnEndEdit, addr 0xb8f0af8, size 0x80, virtual false, abstract: false, final false
inline void SendOnEndEdit() ;

/// @brief Method SendOnSubmit, addr 0xb8eda58, size 0x80, virtual false, abstract: false, final false
inline void SendOnSubmit() ;

/// @brief Method SendOnValueChanged, addr 0xb8ea9bc, size 0x80, virtual false, abstract: false, final false
inline void SendOnValueChanged() ;

/// @brief Method SendOnValueChangedAndUpdateLabel, addr 0xb8ee1d8, size 0x18, virtual false, abstract: false, final false
inline void SendOnValueChangedAndUpdateLabel() ;

/// @brief Method SetCaretActive, addr 0xb8eaecc, size 0x60, virtual false, abstract: false, final false
inline void SetCaretActive() ;

/// @brief Method SetCaretVisible, addr 0xb8ec564, size 0x34, virtual false, abstract: false, final false
inline void SetCaretVisible() ;

/// @brief Method SetDrawRangeToContainCaretPosition, addr 0xb8f0e98, size 0xb44, virtual false, abstract: false, final false
inline void SetDrawRangeToContainCaretPosition(int32_t  caretPos) ;

/// @brief Method SetText, addr 0xb8ea5d8, size 0x328, virtual false, abstract: false, final false
inline void SetText(::StringW  value, bool  sendCallback) ;

/// @brief Method SetTextWithoutNotify, addr 0xb8ea900, size 0x8, virtual false, abstract: false, final false
inline void SetTextWithoutNotify(::StringW  input) ;

/// @brief Method SetToCustom, addr 0xb8eb94c, size 0x18, virtual false, abstract: false, final false
inline void SetToCustom() ;

/// @brief Method SetToCustomIfContentTypeIsNot, addr 0xb8eb858, size 0x68, virtual false, abstract: false, final false
inline void SetToCustomIfContentTypeIsNot(/* [ParamArray] */ ::ArrayW<::GlobalNamespace::InputField_ContentType>  allowedContentTypes) ;

/// @brief Method TouchScreenKeyboardShouldBeUsed, addr 0xb8ec868, size 0xb8, virtual false, abstract: false, final false
inline bool TouchScreenKeyboardShouldBeUsed() ;

/// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0xb8f3738, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> UnityEngine_UI_ICanvasElement_get_transform() ;

/// @brief Method UpdateCaretFromKeyboard, addr 0xb8ecb4c, size 0xf8, virtual false, abstract: false, final false
inline void UpdateCaretFromKeyboard() ;

/// @brief Method UpdateCaretMaterial, addr 0xb8ec598, size 0x110, virtual false, abstract: false, final false
inline void UpdateCaretMaterial() ;

/// @brief Method UpdateGeometry, addr 0xb8f1bac, size 0x444, virtual false, abstract: false, final false
inline void UpdateGeometry() ;

/// @brief Method UpdateKeyboardCaret, addr 0xb8eca84, size 0xc8, virtual false, abstract: false, final false
inline void UpdateKeyboardCaret() ;

/// @brief Method UpdateLabel, addr 0xb8eaa3c, size 0x404, virtual false, abstract: false, final false
inline void UpdateLabel() ;

/// @brief Method UpdateTouchKeyboardFromEditChanges, addr 0xb8ef9b4, size 0x48, virtual false, abstract: false, final false
inline void UpdateTouchKeyboardFromEditChanges() ;

/// @brief Method Validate, addr 0xb8edad8, size 0x700, virtual false, abstract: false, final false
inline char16_t Validate(::StringW  text, int32_t  pos, char16_t  ch) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_caretRectTrans() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_caretRectTrans() ;

constexpr bool const& __cordl_internal_get_m_AllowInput() const;

constexpr bool& __cordl_internal_get_m_AllowInput() ;

constexpr char16_t const& __cordl_internal_get_m_AsteriskChar() const;

constexpr char16_t& __cordl_internal_get_m_AsteriskChar() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_BlinkCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_BlinkCoroutine() ;

constexpr float_t const& __cordl_internal_get_m_BlinkStartTime() const;

constexpr float_t& __cordl_internal_get_m_BlinkStartTime() ;

constexpr ::UnityW<::UnityEngine::CanvasRenderer> const& __cordl_internal_get_m_CachedInputRenderer() const;

constexpr ::UnityW<::UnityEngine::CanvasRenderer>& __cordl_internal_get_m_CachedInputRenderer() ;

constexpr float_t const& __cordl_internal_get_m_CaretBlinkRate() const;

constexpr float_t& __cordl_internal_get_m_CaretBlinkRate() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_CaretColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_CaretColor() ;

constexpr int32_t const& __cordl_internal_get_m_CaretPosition() const;

constexpr int32_t& __cordl_internal_get_m_CaretPosition() ;

constexpr int32_t const& __cordl_internal_get_m_CaretSelectPosition() const;

constexpr int32_t& __cordl_internal_get_m_CaretSelectPosition() ;

constexpr bool const& __cordl_internal_get_m_CaretVisible() const;

constexpr bool& __cordl_internal_get_m_CaretVisible() ;

constexpr int32_t const& __cordl_internal_get_m_CaretWidth() const;

constexpr int32_t& __cordl_internal_get_m_CaretWidth() ;

constexpr int32_t const& __cordl_internal_get_m_CharacterLimit() const;

constexpr int32_t& __cordl_internal_get_m_CharacterLimit() ;

constexpr ::GlobalNamespace::InputField_CharacterValidation const& __cordl_internal_get_m_CharacterValidation() const;

constexpr ::GlobalNamespace::InputField_CharacterValidation& __cordl_internal_get_m_CharacterValidation() ;

constexpr ::GlobalNamespace::InputField_ContentType const& __cordl_internal_get_m_ContentType() const;

constexpr ::GlobalNamespace::InputField_ContentType& __cordl_internal_get_m_ContentType() ;

constexpr ::ArrayW<::UnityEngine::UIVertex> const& __cordl_internal_get_m_CursorVerts() const;

constexpr ::ArrayW<::UnityEngine::UIVertex>& __cordl_internal_get_m_CursorVerts() ;

constexpr bool const& __cordl_internal_get_m_CustomCaretColor() const;

constexpr bool& __cordl_internal_get_m_CustomCaretColor() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_DragCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_DragCoroutine() ;

constexpr bool const& __cordl_internal_get_m_DragPositionOutOfBounds() const;

constexpr bool& __cordl_internal_get_m_DragPositionOutOfBounds() ;

constexpr int32_t const& __cordl_internal_get_m_DrawEnd() const;

constexpr int32_t& __cordl_internal_get_m_DrawEnd() ;

constexpr int32_t const& __cordl_internal_get_m_DrawStart() const;

constexpr int32_t& __cordl_internal_get_m_DrawStart() ;

constexpr bool const& __cordl_internal_get_m_HasDoneFocusTransition() const;

constexpr bool& __cordl_internal_get_m_HasDoneFocusTransition() ;

constexpr bool const& __cordl_internal_get_m_HideMobileInput() const;

constexpr bool& __cordl_internal_get_m_HideMobileInput() ;

constexpr ::UnityEngine::TextGenerator* const& __cordl_internal_get_m_InputTextCache() const;

constexpr ::UnityEngine::TextGenerator*& __cordl_internal_get_m_InputTextCache() ;

constexpr ::GlobalNamespace::InputField_InputType const& __cordl_internal_get_m_InputType() const;

constexpr ::GlobalNamespace::InputField_InputType& __cordl_internal_get_m_InputType() ;

constexpr bool const& __cordl_internal_get_m_IsCompositionActive() const;

constexpr bool& __cordl_internal_get_m_IsCompositionActive() ;

constexpr ::UnityEngine::TouchScreenKeyboard* const& __cordl_internal_get_m_Keyboard() const;

constexpr ::UnityEngine::TouchScreenKeyboard*& __cordl_internal_get_m_Keyboard() ;

constexpr ::UnityEngine::TouchScreenKeyboardType const& __cordl_internal_get_m_KeyboardType() const;

constexpr ::UnityEngine::TouchScreenKeyboardType& __cordl_internal_get_m_KeyboardType() ;

constexpr ::GlobalNamespace::InputField_LineType const& __cordl_internal_get_m_LineType() const;

constexpr ::GlobalNamespace::InputField_LineType& __cordl_internal_get_m_LineType() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_Mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_Mesh() ;

constexpr ::UnityEngine::UI::InputField_EndEditEvent* const& __cordl_internal_get_m_OnDidEndEdit() const;

constexpr ::UnityEngine::UI::InputField_EndEditEvent*& __cordl_internal_get_m_OnDidEndEdit() ;

constexpr ::UnityEngine::UI::InputField_SubmitEvent* const& __cordl_internal_get_m_OnSubmit() const;

constexpr ::UnityEngine::UI::InputField_SubmitEvent*& __cordl_internal_get_m_OnSubmit() ;

constexpr ::UnityEngine::UI::InputField_OnValidateInput* const& __cordl_internal_get_m_OnValidateInput() const;

constexpr ::UnityEngine::UI::InputField_OnValidateInput*& __cordl_internal_get_m_OnValidateInput() ;

constexpr ::UnityEngine::UI::InputField_OnChangeEvent* const& __cordl_internal_get_m_OnValueChanged() const;

constexpr ::UnityEngine::UI::InputField_OnChangeEvent*& __cordl_internal_get_m_OnValueChanged() ;

constexpr ::StringW const& __cordl_internal_get_m_OriginalText() const;

constexpr ::StringW& __cordl_internal_get_m_OriginalText() ;

constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get_m_Placeholder() const;

constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get_m_Placeholder() ;

constexpr bool const& __cordl_internal_get_m_PreventFontCallback() const;

constexpr bool& __cordl_internal_get_m_PreventFontCallback() ;

constexpr ::UnityEngine::Event* const& __cordl_internal_get_m_ProcessingEvent() const;

constexpr ::UnityEngine::Event*& __cordl_internal_get_m_ProcessingEvent() ;

constexpr bool const& __cordl_internal_get_m_ReadOnly() const;

constexpr bool& __cordl_internal_get_m_ReadOnly() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_SelectionColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_SelectionColor() ;

constexpr bool const& __cordl_internal_get_m_ShouldActivateNextUpdate() const;

constexpr bool& __cordl_internal_get_m_ShouldActivateNextUpdate() ;

constexpr bool const& __cordl_internal_get_m_ShouldActivateOnSelect() const;

constexpr bool& __cordl_internal_get_m_ShouldActivateOnSelect() ;

constexpr ::StringW const& __cordl_internal_get_m_Text() const;

constexpr ::StringW& __cordl_internal_get_m_Text() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_TextComponent() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_TextComponent() ;

constexpr bool const& __cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing() const;

constexpr bool& __cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing() ;

constexpr bool const& __cordl_internal_get_m_UpdateDrag() const;

constexpr bool& __cordl_internal_get_m_UpdateDrag() ;

constexpr ::UnityEngine::WaitForSecondsRealtime* const& __cordl_internal_get_m_WaitForSecondsRealtime() const;

constexpr ::UnityEngine::WaitForSecondsRealtime*& __cordl_internal_get_m_WaitForSecondsRealtime() ;

constexpr bool const& __cordl_internal_get_m_WasCanceled() const;

constexpr bool& __cordl_internal_get_m_WasCanceled() ;

constexpr void __cordl_internal_set_caretRectTrans(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_m_AllowInput(bool  value) ;

constexpr void __cordl_internal_set_m_AsteriskChar(char16_t  value) ;

constexpr void __cordl_internal_set_m_BlinkCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_m_BlinkStartTime(float_t  value) ;

constexpr void __cordl_internal_set_m_CachedInputRenderer(::UnityW<::UnityEngine::CanvasRenderer>  value) ;

constexpr void __cordl_internal_set_m_CaretBlinkRate(float_t  value) ;

constexpr void __cordl_internal_set_m_CaretColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_CaretPosition(int32_t  value) ;

constexpr void __cordl_internal_set_m_CaretSelectPosition(int32_t  value) ;

constexpr void __cordl_internal_set_m_CaretVisible(bool  value) ;

constexpr void __cordl_internal_set_m_CaretWidth(int32_t  value) ;

constexpr void __cordl_internal_set_m_CharacterLimit(int32_t  value) ;

constexpr void __cordl_internal_set_m_CharacterValidation(::GlobalNamespace::InputField_CharacterValidation  value) ;

constexpr void __cordl_internal_set_m_ContentType(::GlobalNamespace::InputField_ContentType  value) ;

constexpr void __cordl_internal_set_m_CursorVerts(::ArrayW<::UnityEngine::UIVertex>  value) ;

constexpr void __cordl_internal_set_m_CustomCaretColor(bool  value) ;

constexpr void __cordl_internal_set_m_DragCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_m_DragPositionOutOfBounds(bool  value) ;

constexpr void __cordl_internal_set_m_DrawEnd(int32_t  value) ;

constexpr void __cordl_internal_set_m_DrawStart(int32_t  value) ;

constexpr void __cordl_internal_set_m_HasDoneFocusTransition(bool  value) ;

constexpr void __cordl_internal_set_m_HideMobileInput(bool  value) ;

constexpr void __cordl_internal_set_m_InputTextCache(::UnityEngine::TextGenerator*  value) ;

constexpr void __cordl_internal_set_m_InputType(::GlobalNamespace::InputField_InputType  value) ;

constexpr void __cordl_internal_set_m_IsCompositionActive(bool  value) ;

constexpr void __cordl_internal_set_m_Keyboard(::UnityEngine::TouchScreenKeyboard*  value) ;

constexpr void __cordl_internal_set_m_KeyboardType(::UnityEngine::TouchScreenKeyboardType  value) ;

constexpr void __cordl_internal_set_m_LineType(::GlobalNamespace::InputField_LineType  value) ;

constexpr void __cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_m_OnDidEndEdit(::UnityEngine::UI::InputField_EndEditEvent*  value) ;

constexpr void __cordl_internal_set_m_OnSubmit(::UnityEngine::UI::InputField_SubmitEvent*  value) ;

constexpr void __cordl_internal_set_m_OnValidateInput(::UnityEngine::UI::InputField_OnValidateInput*  value) ;

constexpr void __cordl_internal_set_m_OnValueChanged(::UnityEngine::UI::InputField_OnChangeEvent*  value) ;

constexpr void __cordl_internal_set_m_OriginalText(::StringW  value) ;

constexpr void __cordl_internal_set_m_Placeholder(::UnityW<::UnityEngine::UI::Graphic>  value) ;

constexpr void __cordl_internal_set_m_PreventFontCallback(bool  value) ;

constexpr void __cordl_internal_set_m_ProcessingEvent(::UnityEngine::Event*  value) ;

constexpr void __cordl_internal_set_m_ReadOnly(bool  value) ;

constexpr void __cordl_internal_set_m_SelectionColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_ShouldActivateNextUpdate(bool  value) ;

constexpr void __cordl_internal_set_m_ShouldActivateOnSelect(bool  value) ;

constexpr void __cordl_internal_set_m_Text(::StringW  value) ;

constexpr void __cordl_internal_set_m_TextComponent(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_m_TouchKeyboardAllowsInPlaceEditing(bool  value) ;

constexpr void __cordl_internal_set_m_UpdateDrag(bool  value) ;

constexpr void __cordl_internal_set_m_WaitForSecondsRealtime(::UnityEngine::WaitForSecondsRealtime*  value) ;

constexpr void __cordl_internal_set_m_WasCanceled(bool  value) ;

/// @brief Method .ctor, addr 0xb8ea014, size 0x1cc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<char16_t> getStaticF_kSeparators() ;

static inline bool getStaticF_s_IsQuestDevice() ;

static inline bool getStaticF_s_IsQuestDeviceEvaluated() ;

/// @brief Method get_asteriskChar, addr 0xb8ebaa8, size 0x8, virtual false, abstract: false, final false
inline char16_t get_asteriskChar() ;

/// @brief Method get_cachedInputTextGenerator, addr 0xb8ea400, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::TextGenerator* get_cachedInputTextGenerator() ;

/// @brief Method get_caretBlinkRate, addr 0xb8eae48, size 0x8, virtual false, abstract: false, final false
inline float_t get_caretBlinkRate() ;

/// @brief Method get_caretColor, addr 0xb8eb2e8, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_caretColor() ;

/// @brief Method get_caretPosition, addr 0xb8ebc40, size 0x24, virtual false, abstract: false, final false
inline int32_t get_caretPosition() ;

/// @brief Method get_caretPositionInternal, addr 0xb8ebb60, size 0x24, virtual false, abstract: false, final false
inline int32_t get_caretPositionInternal() ;

/// @brief Method get_caretSelectPositionInternal, addr 0xb8ebbb8, size 0x24, virtual false, abstract: false, final false
inline int32_t get_caretSelectPositionInternal() ;

/// @brief Method get_caretWidth, addr 0xb8eaf2c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_caretWidth() ;

/// @brief Method get_characterLimit, addr 0xb8eb548, size 0x8, virtual false, abstract: false, final false
inline int32_t get_characterLimit() ;

/// @brief Method get_characterValidation, addr 0xb8eb9f8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputField_CharacterValidation get_characterValidation() ;

/// @brief Method get_clipboard, addr 0xb8ec7c0, size 0x50, virtual false, abstract: false, final false
static inline ::StringW get_clipboard() ;

/// @brief Method get_compositionString, addr 0xb8e9f80, size 0x94, virtual false, abstract: false, final false
inline ::StringW get_compositionString() ;

/// @brief Method get_contentType, addr 0xb8eb60c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputField_ContentType get_contentType() ;

/// @brief Method get_customCaretColor, addr 0xb8eb358, size 0x8, virtual false, abstract: false, final false
inline bool get_customCaretColor() ;

/// @brief Method get_flexibleHeight, addr 0xb8f3678, size 0x8, virtual true, abstract: false, final false
inline float_t get_flexibleHeight() ;

/// @brief Method get_flexibleWidth, addr 0xb8f3530, size 0x8, virtual true, abstract: false, final false
inline float_t get_flexibleWidth() ;

/// @brief Method get_hasSelection, addr 0xb8ebc10, size 0x30, virtual false, abstract: false, final false
inline bool get_hasSelection() ;

/// @brief Method get_input, addr 0xb8e9e70, size 0x110, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::EventSystems::BaseInput> get_input() ;

/// @brief Method get_inputType, addr 0xb8eb8c0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputField_InputType get_inputType() ;

/// @brief Method get_isFocused, addr 0xb8eae40, size 0x8, virtual false, abstract: false, final false
inline bool get_isFocused() ;

/// @brief Method get_keyboardType, addr 0xb8eb96c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::TouchScreenKeyboardType get_keyboardType() ;

/// @brief Method get_layoutPriority, addr 0xb8f3680, size 0x8, virtual true, abstract: false, final false
inline int32_t get_layoutPriority() ;

/// @brief Method get_lineType, addr 0xb8eb790, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputField_LineType get_lineType() ;

/// @brief Method get_mesh, addr 0xb8ea35c, size 0xa4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_mesh() ;

/// @brief Method get_minHeight, addr 0xb8f3538, size 0x8, virtual true, abstract: false, final false
inline float_t get_minHeight() ;

/// @brief Method get_minWidth, addr 0xb8f33dc, size 0x8, virtual true, abstract: false, final false
inline float_t get_minWidth() ;

/// @brief Method get_multiLine, addr 0xb8eba94, size 0x14, virtual false, abstract: false, final false
inline bool get_multiLine() ;

/// @brief Method get_onEndEdit, addr 0xb8eb3bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UI::InputField_EndEditEvent* get_onEndEdit() ;

/// @brief Method get_onSubmit, addr 0xb8eb41c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UI::InputField_SubmitEvent* get_onSubmit() ;

/// @brief Method get_onValidateInput, addr 0xb8eb4e8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UI::InputField_OnValidateInput* get_onValidateInput() ;

/// @brief Method get_onValueChange, addr 0xb8eb47c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UI::InputField_OnChangeEvent* get_onValueChange() ;

/// @brief Method get_onValueChanged, addr 0xb8eb4e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UI::InputField_OnChangeEvent* get_onValueChanged() ;

/// @brief Method get_placeholder, addr 0xb8eb288, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Graphic> get_placeholder() ;

/// @brief Method get_preferredHeight, addr 0xb8f3540, size 0x138, virtual true, abstract: false, final false
inline float_t get_preferredHeight() ;

/// @brief Method get_preferredWidth, addr 0xb8f33e4, size 0x14c, virtual true, abstract: false, final false
inline float_t get_preferredWidth() ;

/// @brief Method get_readOnly, addr 0xb8eba84, size 0x8, virtual false, abstract: false, final false
inline bool get_readOnly() ;

/// @brief Method get_selectionAnchorPosition, addr 0xb8ebd3c, size 0x24, virtual false, abstract: false, final false
inline int32_t get_selectionAnchorPosition() ;

/// @brief Method get_selectionColor, addr 0xb8eb37c, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_selectionColor() ;

/// @brief Method get_selectionFocusPosition, addr 0xb8ebd60, size 0x24, virtual false, abstract: false, final false
inline int32_t get_selectionFocusPosition() ;

/// @brief Method get_shouldActivateOnSelect, addr 0xb8ea558, size 0x70, virtual true, abstract: false, final false
inline bool get_shouldActivateOnSelect() ;

/// @brief Method get_shouldHideMobileInput, addr 0xb8ea4c8, size 0x88, virtual false, abstract: false, final false
inline bool get_shouldHideMobileInput() ;

/// @brief Method get_text, addr 0xb8ea5c8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_text() ;

/// @brief Method get_textComponent, addr 0xb8eb000, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Text> get_textComponent() ;

/// @brief Method get_touchScreenKeyboard, addr 0xb8eb964, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::TouchScreenKeyboard* get_touchScreenKeyboard() ;

/// @brief Method get_wasCanceled, addr 0xb8ebb24, size 0x8, virtual false, abstract: false, final false
inline bool get_wasCanceled() ;

/// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr ::UnityEngine::EventSystems::IBeginDragHandler* i___UnityEngine__EventSystems__IBeginDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* i___UnityEngine__EventSystems__IDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr ::UnityEngine::EventSystems::IEndDragHandler* i___UnityEngine__EventSystems__IEndDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
constexpr ::UnityEngine::EventSystems::IUpdateSelectedHandler* i___UnityEngine__EventSystems__IUpdateSelectedHandler() noexcept;

/// @brief Convert to "::UnityEngine::UI::ICanvasElement"
constexpr ::UnityEngine::UI::ICanvasElement* i___UnityEngine__UI__ICanvasElement() noexcept;

/// @brief Convert to "::UnityEngine::UI::ILayoutElement"
constexpr ::UnityEngine::UI::ILayoutElement* i___UnityEngine__UI__ILayoutElement() noexcept;

static inline void setStaticF_kSeparators(::ArrayW<char16_t>  value) ;

static inline void setStaticF_s_IsQuestDevice(bool  value) ;

static inline void setStaticF_s_IsQuestDeviceEvaluated(bool  value) ;

/// @brief Method set_asteriskChar, addr 0xb8ebab0, size 0x74, virtual false, abstract: false, final false
inline void set_asteriskChar(char16_t  value) ;

/// @brief Method set_caretBlinkRate, addr 0xb8eae50, size 0x7c, virtual false, abstract: false, final false
inline void set_caretBlinkRate(float_t  value) ;

/// @brief Method set_caretColor, addr 0xb8eb32c, size 0x2c, virtual false, abstract: false, final false
inline void set_caretColor(::UnityEngine::Color  value) ;

/// @brief Method set_caretPosition, addr 0xb8ebc64, size 0x28, virtual false, abstract: false, final false
inline void set_caretPosition(int32_t  value) ;

/// @brief Method set_caretPositionInternal, addr 0xb8ebb84, size 0x34, virtual false, abstract: false, final false
inline void set_caretPositionInternal(int32_t  value) ;

/// @brief Method set_caretSelectPositionInternal, addr 0xb8ebbdc, size 0x34, virtual false, abstract: false, final false
inline void set_caretSelectPositionInternal(int32_t  value) ;

/// @brief Method set_caretWidth, addr 0xb8eaf34, size 0x74, virtual false, abstract: false, final false
inline void set_caretWidth(int32_t  value) ;

/// @brief Method set_characterLimit, addr 0xb8eb550, size 0xbc, virtual false, abstract: false, final false
inline void set_characterLimit(int32_t  value) ;

/// @brief Method set_characterValidation, addr 0xb8eba00, size 0x84, virtual false, abstract: false, final false
inline void set_characterValidation(::GlobalNamespace::InputField_CharacterValidation  value) ;

/// @brief Method set_clipboard, addr 0xb8ec810, size 0x58, virtual false, abstract: false, final false
static inline void set_clipboard(::StringW  value) ;

/// @brief Method set_contentType, addr 0xb8eb614, size 0x74, virtual false, abstract: false, final false
inline void set_contentType(::GlobalNamespace::InputField_ContentType  value) ;

/// @brief Method set_customCaretColor, addr 0xb8eb360, size 0x1c, virtual false, abstract: false, final false
inline void set_customCaretColor(bool  value) ;

/// @brief Method set_inputType, addr 0xb8eb8c8, size 0x84, virtual false, abstract: false, final false
inline void set_inputType(::GlobalNamespace::InputField_InputType  value) ;

/// @brief Method set_keyboardType, addr 0xb8eb974, size 0x84, virtual false, abstract: false, final false
inline void set_keyboardType(::UnityEngine::TouchScreenKeyboardType  value) ;

/// @brief Method set_lineType, addr 0xb8eb798, size 0xc0, virtual false, abstract: false, final false
inline void set_lineType(::GlobalNamespace::InputField_LineType  value) ;

/// @brief Method set_onEndEdit, addr 0xb8eb3c4, size 0x58, virtual false, abstract: false, final false
inline void set_onEndEdit(::UnityEngine::UI::InputField_EndEditEvent*  value) ;

/// @brief Method set_onSubmit, addr 0xb8eb424, size 0x58, virtual false, abstract: false, final false
inline void set_onSubmit(::UnityEngine::UI::InputField_SubmitEvent*  value) ;

/// @brief Method set_onValidateInput, addr 0xb8eb4f0, size 0x58, virtual false, abstract: false, final false
inline void set_onValidateInput(::UnityEngine::UI::InputField_OnValidateInput*  value) ;

/// @brief Method set_onValueChange, addr 0xb8eb484, size 0x4, virtual false, abstract: false, final false
inline void set_onValueChange(::UnityEngine::UI::InputField_OnChangeEvent*  value) ;

/// @brief Method set_onValueChanged, addr 0xb8eb488, size 0x58, virtual false, abstract: false, final false
inline void set_onValueChanged(::UnityEngine::UI::InputField_OnChangeEvent*  value) ;

/// @brief Method set_placeholder, addr 0xb8eb290, size 0x58, virtual false, abstract: false, final false
inline void set_placeholder(::UnityEngine::UI::Graphic*  value) ;

/// @brief Method set_readOnly, addr 0xb8eba8c, size 0x8, virtual false, abstract: false, final false
inline void set_readOnly(bool  value) ;

/// @brief Method set_selectionAnchorPosition, addr 0xb8ebc8c, size 0x58, virtual false, abstract: false, final false
inline void set_selectionAnchorPosition(int32_t  value) ;

/// @brief Method set_selectionColor, addr 0xb8eb390, size 0x2c, virtual false, abstract: false, final false
inline void set_selectionColor(::UnityEngine::Color  value) ;

/// @brief Method set_selectionFocusPosition, addr 0xb8ebce4, size 0x58, virtual false, abstract: false, final false
inline void set_selectionFocusPosition(int32_t  value) ;

/// @brief Method set_shouldActivateOnSelect, addr 0xb8ea550, size 0x8, virtual true, abstract: false, final false
inline void set_shouldActivateOnSelect(bool  value) ;

/// @brief Method set_shouldHideMobileInput, addr 0xb8ea470, size 0x58, virtual false, abstract: false, final false
inline void set_shouldHideMobileInput(bool  value) ;

/// @brief Method set_text, addr 0xb8ea5d0, size 0x8, virtual false, abstract: false, final false
inline void set_text(::StringW  value) ;

/// @brief Method set_textComponent, addr 0xb8eb008, size 0x280, virtual false, abstract: false, final false
inline void set_textComponent(::UnityEngine::UI::Text*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputField", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputField(InputField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputField", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputField(InputField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26047};

/// @brief Field kEmailSpecialCharacters offset 0xffffffff size 0x8
static constexpr ::ConstString  kEmailSpecialCharacters{u"!#$%&\'*+-/=?^_`{|}~"};

/// @brief Field kHScrollSpeed offset 0xffffffff size 0x4
static constexpr float_t  kHScrollSpeed{static_cast<float_t>(0.05f)};

/// @brief Field kOculusQuestDeviceModel offset 0xffffffff size 0x8
static constexpr ::ConstString  kOculusQuestDeviceModel{u"Oculus Quest"};

/// @brief Field kVScrollSpeed offset 0xffffffff size 0x4
static constexpr float_t  kVScrollSpeed{static_cast<float_t>(0.1f)};

/// @brief Field k_MaxTextLength offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxTextLength{static_cast<int32_t>(0x3ffe)};

/// @brief Field m_Keyboard, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::TouchScreenKeyboard*  ___m_Keyboard;

/// [SerializeField]
/// [FormerlySerializedAs("text")]
/// @brief Field m_TextComponent, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___m_TextComponent;

/// [SerializeField]
/// @brief Field m_Placeholder, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Graphic>  ___m_Placeholder;

/// [SerializeField]
/// @brief Field m_ContentType, offset: 0x118, size: 0x4, def value: None
 ::GlobalNamespace::InputField_ContentType  ___m_ContentType;

/// [FormerlySerializedAs("inputType")]
/// [SerializeField]
/// @brief Field m_InputType, offset: 0x11c, size: 0x4, def value: None
 ::GlobalNamespace::InputField_InputType  ___m_InputType;

/// [FormerlySerializedAs("asteriskChar")]
/// [SerializeField]
/// @brief Field m_AsteriskChar, offset: 0x120, size: 0x2, def value: None
 char16_t  ___m_AsteriskChar;

/// [FormerlySerializedAs("keyboardType")]
/// [SerializeField]
/// @brief Field m_KeyboardType, offset: 0x124, size: 0x4, def value: None
 ::UnityEngine::TouchScreenKeyboardType  ___m_KeyboardType;

/// [SerializeField]
/// @brief Field m_LineType, offset: 0x128, size: 0x4, def value: None
 ::GlobalNamespace::InputField_LineType  ___m_LineType;

/// [FormerlySerializedAs("hideMobileInput")]
/// [SerializeField]
/// @brief Field m_HideMobileInput, offset: 0x12c, size: 0x1, def value: None
 bool  ___m_HideMobileInput;

/// [FormerlySerializedAs("validation")]
/// [SerializeField]
/// @brief Field m_CharacterValidation, offset: 0x130, size: 0x4, def value: None
 ::GlobalNamespace::InputField_CharacterValidation  ___m_CharacterValidation;

/// [FormerlySerializedAs("characterLimit")]
/// [SerializeField]
/// @brief Field m_CharacterLimit, offset: 0x134, size: 0x4, def value: None
 int32_t  ___m_CharacterLimit;

/// [FormerlySerializedAs("onSubmit")]
/// [FormerlySerializedAs("m_OnSubmit")]
/// [FormerlySerializedAs("m_EndEdit")]
/// [FormerlySerializedAs("m_OnEndEdit")]
/// [SerializeField]
/// @brief Field m_OnSubmit, offset: 0x138, size: 0x8, def value: None
 ::UnityEngine::UI::InputField_SubmitEvent*  ___m_OnSubmit;

/// [SerializeField]
/// @brief Field m_OnDidEndEdit, offset: 0x140, size: 0x8, def value: None
 ::UnityEngine::UI::InputField_EndEditEvent*  ___m_OnDidEndEdit;

/// [FormerlySerializedAs("onValueChange")]
/// [FormerlySerializedAs("m_OnValueChange")]
/// [SerializeField]
/// @brief Field m_OnValueChanged, offset: 0x148, size: 0x8, def value: None
 ::UnityEngine::UI::InputField_OnChangeEvent*  ___m_OnValueChanged;

/// [FormerlySerializedAs("onValidateInput")]
/// [SerializeField]
/// @brief Field m_OnValidateInput, offset: 0x150, size: 0x8, def value: None
 ::UnityEngine::UI::InputField_OnValidateInput*  ___m_OnValidateInput;

/// [FormerlySerializedAs("selectionColor")]
/// [SerializeField]
/// @brief Field m_CaretColor, offset: 0x158, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_CaretColor;

/// [SerializeField]
/// @brief Field m_CustomCaretColor, offset: 0x168, size: 0x1, def value: None
 bool  ___m_CustomCaretColor;

/// [SerializeField]
/// @brief Field m_SelectionColor, offset: 0x16c, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_SelectionColor;

/// [SerializeField]
/// [Multiline]
/// [FormerlySerializedAs("mValue")]
/// @brief Field m_Text, offset: 0x180, size: 0x8, def value: None
 ::StringW  ___m_Text;

/// [SerializeField]
/// [Range(0, 4)]
/// @brief Field m_CaretBlinkRate, offset: 0x188, size: 0x4, def value: None
 float_t  ___m_CaretBlinkRate;

/// [SerializeField]
/// [Range(1, 5)]
/// @brief Field m_CaretWidth, offset: 0x18c, size: 0x4, def value: None
 int32_t  ___m_CaretWidth;

/// [SerializeField]
/// @brief Field m_ReadOnly, offset: 0x190, size: 0x1, def value: None
 bool  ___m_ReadOnly;

/// [SerializeField]
/// @brief Field m_ShouldActivateOnSelect, offset: 0x191, size: 0x1, def value: None
 bool  ___m_ShouldActivateOnSelect;

/// @brief Field m_CaretPosition, offset: 0x194, size: 0x4, def value: None
 int32_t  ___m_CaretPosition;

/// @brief Field m_CaretSelectPosition, offset: 0x198, size: 0x4, def value: None
 int32_t  ___m_CaretSelectPosition;

/// @brief Field caretRectTrans, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___caretRectTrans;

/// @brief Field m_CursorVerts, offset: 0x1a8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIVertex>  ___m_CursorVerts;

/// @brief Field m_InputTextCache, offset: 0x1b0, size: 0x8, def value: None
 ::UnityEngine::TextGenerator*  ___m_InputTextCache;

/// @brief Field m_CachedInputRenderer, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CanvasRenderer>  ___m_CachedInputRenderer;

/// @brief Field m_PreventFontCallback, offset: 0x1c0, size: 0x1, def value: None
 bool  ___m_PreventFontCallback;

/// @brief Field m_Mesh, offset: 0x1c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___m_Mesh;

/// @brief Field m_AllowInput, offset: 0x1d0, size: 0x1, def value: None
 bool  ___m_AllowInput;

/// @brief Field m_ShouldActivateNextUpdate, offset: 0x1d1, size: 0x1, def value: None
 bool  ___m_ShouldActivateNextUpdate;

/// @brief Field m_UpdateDrag, offset: 0x1d2, size: 0x1, def value: None
 bool  ___m_UpdateDrag;

/// @brief Field m_DragPositionOutOfBounds, offset: 0x1d3, size: 0x1, def value: None
 bool  ___m_DragPositionOutOfBounds;

/// @brief Field m_CaretVisible, offset: 0x1d4, size: 0x1, def value: None
 bool  ___m_CaretVisible;

/// @brief Field m_BlinkCoroutine, offset: 0x1d8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___m_BlinkCoroutine;

/// @brief Field m_BlinkStartTime, offset: 0x1e0, size: 0x4, def value: None
 float_t  ___m_BlinkStartTime;

/// @brief Field m_DrawStart, offset: 0x1e4, size: 0x4, def value: None
 int32_t  ___m_DrawStart;

/// @brief Field m_DrawEnd, offset: 0x1e8, size: 0x4, def value: None
 int32_t  ___m_DrawEnd;

/// @brief Field m_DragCoroutine, offset: 0x1f0, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___m_DragCoroutine;

/// @brief Field m_OriginalText, offset: 0x1f8, size: 0x8, def value: None
 ::StringW  ___m_OriginalText;

/// @brief Field m_WasCanceled, offset: 0x200, size: 0x1, def value: None
 bool  ___m_WasCanceled;

/// @brief Field m_HasDoneFocusTransition, offset: 0x201, size: 0x1, def value: None
 bool  ___m_HasDoneFocusTransition;

/// @brief Field m_WaitForSecondsRealtime, offset: 0x208, size: 0x8, def value: None
 ::UnityEngine::WaitForSecondsRealtime*  ___m_WaitForSecondsRealtime;

/// @brief Field m_TouchKeyboardAllowsInPlaceEditing, offset: 0x210, size: 0x1, def value: None
 bool  ___m_TouchKeyboardAllowsInPlaceEditing;

/// @brief Field m_IsCompositionActive, offset: 0x211, size: 0x1, def value: None
 bool  ___m_IsCompositionActive;

/// @brief Field m_ProcessingEvent, offset: 0x218, size: 0x8, def value: None
 ::UnityEngine::Event*  ___m_ProcessingEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::InputField, ___m_Keyboard) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_TextComponent) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_Placeholder) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_ContentType) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_InputType) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_AsteriskChar) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_KeyboardType) == 0x124, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_LineType) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_HideMobileInput) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CharacterValidation) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CharacterLimit) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_OnSubmit) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_OnDidEndEdit) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_OnValueChanged) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_OnValidateInput) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CaretColor) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CustomCaretColor) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_SelectionColor) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_Text) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CaretBlinkRate) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CaretWidth) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_ReadOnly) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_ShouldActivateOnSelect) == 0x191, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CaretPosition) == 0x194, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CaretSelectPosition) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___caretRectTrans) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CursorVerts) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_InputTextCache) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CachedInputRenderer) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_PreventFontCallback) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_Mesh) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_AllowInput) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_ShouldActivateNextUpdate) == 0x1d1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_UpdateDrag) == 0x1d2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_DragPositionOutOfBounds) == 0x1d3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CaretVisible) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_BlinkCoroutine) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_BlinkStartTime) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_DrawStart) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_DrawEnd) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_DragCoroutine) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_OriginalText) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_WasCanceled) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_HasDoneFocusTransition) == 0x201, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_WaitForSecondsRealtime) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_TouchKeyboardAllowsInPlaceEditing) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_IsCompositionActive) == 0x211, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_ProcessingEvent) == 0x218, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UI::InputField) == 0x220, "Size mismatch!");

} // namespace end def UnityEngine::UI
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.InputField/<MouseDragOutsideRect>d__196
class CORDL_TYPE InputField__MouseDragOutsideRect_d__196 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::UI::InputField>  __4__this;

/// @brief Field eventData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventData, put=__cordl_internal_set_eventData)) ::UnityEngine::EventSystems::PointerEventData*  eventData;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb8f3974, size 0x288, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xb8f3bfc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb8f3c04, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb8f3c3c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb8f3970, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::EventSystems::PointerEventData* const& __cordl_internal_get_eventData() const;

constexpr ::UnityEngine::EventSystems::PointerEventData*& __cordl_internal_get_eventData() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UI::InputField>  value) ;

constexpr void __cordl_internal_set_eventData(::UnityEngine::EventSystems::PointerEventData*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb8eef1c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputField__MouseDragOutsideRect_d__196() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputField__MouseDragOutsideRect_d__196", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputField__MouseDragOutsideRect_d__196(InputField__MouseDragOutsideRect_d__196 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputField__MouseDragOutsideRect_d__196", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputField__MouseDragOutsideRect_d__196(InputField__MouseDragOutsideRect_d__196 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26046};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field eventData, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::EventSystems::PointerEventData*  ___eventData;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::InputField>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196, ___eventData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196, _____4__this) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::UI
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.InputField/<CaretBlink>d__172
class CORDL_TYPE InputField__CaretBlink_d__172 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::UI::InputField>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb8f3804, size 0x124, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::UI::InputField__CaretBlink_d__172* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xb8f3928, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb8f3930, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb8f3968, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb8f3800, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UI::InputField>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb8ec53c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputField__CaretBlink_d__172() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputField__CaretBlink_d__172", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputField__CaretBlink_d__172(InputField__CaretBlink_d__172 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputField__CaretBlink_d__172", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputField__CaretBlink_d__172(InputField__CaretBlink_d__172 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26045};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::InputField>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::InputField__CaretBlink_d__172, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField__CaretBlink_d__172, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField__CaretBlink_d__172, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UI::InputField__CaretBlink_d__172) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.InputField/OnChangeEvent
class CORDL_TYPE InputField_OnChangeEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
static inline ::UnityEngine::UI::InputField_OnChangeEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb8ea270, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputField_OnChangeEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputField_OnChangeEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputField_OnChangeEvent(InputField_OnChangeEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputField_OnChangeEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputField_OnChangeEvent(InputField_OnChangeEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26043};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UI::InputField_OnChangeEvent) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.InputField/EndEditEvent
class CORDL_TYPE InputField_EndEditEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
static inline ::UnityEngine::UI::InputField_EndEditEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb8ea228, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputField_EndEditEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputField_EndEditEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputField_EndEditEvent(InputField_EndEditEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputField_EndEditEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputField_EndEditEvent(InputField_EndEditEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26042};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UI::InputField_EndEditEvent) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.InputField/SubmitEvent
class CORDL_TYPE InputField_SubmitEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
static inline ::UnityEngine::UI::InputField_SubmitEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb8ea1e0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputField_SubmitEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputField_SubmitEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputField_SubmitEvent(InputField_SubmitEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputField_SubmitEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputField_SubmitEvent(InputField_SubmitEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26041};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UI::InputField_SubmitEvent) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Dependencies System.MulticastDelegate
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.InputField/OnValidateInput
class CORDL_TYPE InputField_OnValidateInput : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb8f3754, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  text, int32_t  charIndex, char16_t  addedChar, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xb8f37d8, size 0x28, virtual true, abstract: false, final false
inline char16_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xb8f3740, size 0x14, virtual true, abstract: false, final false
inline char16_t Invoke(::StringW  text, int32_t  charIndex, char16_t  addedChar) ;

static inline ::UnityEngine::UI::InputField_OnValidateInput* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb8ea908, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputField_OnValidateInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputField_OnValidateInput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputField_OnValidateInput(InputField_OnValidateInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputField_OnValidateInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputField_OnValidateInput(InputField_OnValidateInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26040};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UI::InputField_OnValidateInput) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::UI

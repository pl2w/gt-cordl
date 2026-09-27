#pragma once
// IWYU pragma private; include "UnityEngine/GUIUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUIUtility)
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
struct EventType;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct FocusType;
}
namespace UnityEngine {
class GUISkin;
}
namespace UnityEngine {
struct IMECompositionMode;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
class ObjectGUIState;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class GUIUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::GUIUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GUIUtility*, "UnityEngine", "GUIUtility");
// [NativeHeader("Modules/IMGUI/GUIUtility.h")]
// [NativeHeader("Modules/IMGUI/GUIManager.h")]
// [NativeHeader("Runtime/Input/InputBindings.h")]
// [NativeHeader("Runtime/Input/InputManager.h")]
// [NativeHeader("Runtime/Utilities/CopyPaste.h")]
// [NativeHeader("Runtime/Camera/RenderLayers/GUITexture.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUIUtility
class CORDL_TYPE GUIUtility : public ::System::Object {
public:
// Declarations
/// @brief Field <guiIsExiting>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__guiIsExiting_k__BackingField, put=setStaticF__guiIsExiting_k__BackingField)) bool  _guiIsExiting_k__BackingField;

/// @brief Field <isUITK>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isUITK_k__BackingField, put=setStaticF__isUITK_k__BackingField)) bool  _isUITK_k__BackingField;

/// @brief Field beforeEventProcessed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_beforeEventProcessed, put=setStaticF_beforeEventProcessed)) ::System::Action_3<::UnityEngine::EventType,::UnityEngine::KeyCode,::UnityEngine::EventModifiers>*  beforeEventProcessed;

/// @brief Field cleanupRoots, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cleanupRoots, put=setStaticF_cleanupRoots)) ::System::Action*  cleanupRoots;

/// @brief Field endContainerGUIFromException, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_endContainerGUIFromException, put=setStaticF_endContainerGUIFromException)) ::System::Func_2<::System::Exception*,bool>*  endContainerGUIFromException;

/// @brief Field guiChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_guiChanged, put=setStaticF_guiChanged)) ::System::Action*  guiChanged;

/// @brief Field m_Event, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_Event, put=setStaticF_m_Event)) ::UnityEngine::Event*  m_Event;

/// @brief Field processEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_processEvent, put=setStaticF_processEvent)) ::System::Func_3<int32_t,::System::IntPtr,bool>*  processEvent;

/// @brief Field releaseCapture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_releaseCapture, put=setStaticF_releaseCapture)) ::System::Action*  releaseCapture;

/// @brief Field s_ControlCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ControlCount, put=setStaticF_s_ControlCount)) int32_t  s_ControlCount;

/// @brief Field s_HasCurrentWindowKeyFocusFunc, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_HasCurrentWindowKeyFocusFunc, put=setStaticF_s_HasCurrentWindowKeyFocusFunc)) ::System::Func_1<bool>*  s_HasCurrentWindowKeyFocusFunc;

/// @brief Field s_OriginalID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_OriginalID, put=setStaticF_s_OriginalID)) int32_t  s_OriginalID;

/// @brief Field s_SkinMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SkinMode, put=setStaticF_s_SkinMode)) int32_t  s_SkinMode;

/// @brief Field takeCapture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_takeCapture, put=setStaticF_takeCapture)) ::System::Action*  takeCapture;

/// @brief Method AlignRectToDevice, addr 0xb6500f4, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect AlignRectToDevice(::UnityEngine::Rect  rect) ;

/// @brief Method AlignRectToDevice, addr 0xb64f074, size 0xac, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect AlignRectToDevice(::UnityEngine::Rect  rect, ::by_ref<int32_t>  widthInPixels, ::by_ref<int32_t>  heightInPixels) ;

/// @brief Method AlignRectToDevice_Injected, addr 0xb64f120, size 0x5c, virtual false, abstract: false, final false
static inline void AlignRectToDevice_Injected(::by_ref<::UnityEngine::Rect>  rect, ::by_ref<int32_t>  widthInPixels, ::by_ref<int32_t>  heightInPixels, ::by_ref<::UnityEngine::Rect>  ret) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method BeginContainer, addr 0xb64ee28, size 0x7c, virtual false, abstract: false, final false
static inline void BeginContainer(::UnityEngine::ObjectGUIState*  objectGUIState) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method BeginContainerFromOwner, addr 0xb64ed4c, size 0xa0, virtual false, abstract: false, final false
static inline void BeginContainerFromOwner(::UnityEngine::ScriptableObject*  owner) ;

/// @brief Method BeginContainerFromOwner_Injected, addr 0xb64edec, size 0x3c, virtual false, abstract: false, final false
static inline void BeginContainerFromOwner_Injected(::System::IntPtr  owner) ;

/// @brief Method BeginContainer_Injected, addr 0xb64eea4, size 0x3c, virtual false, abstract: false, final false
static inline void BeginContainer_Injected(::System::IntPtr  objectGUIState) ;

/// [RequiredByNativeCode]
/// @brief Method BeginGUI, addr 0xb64f9e4, size 0xac, virtual false, abstract: false, final false
static inline void BeginGUI(int32_t  skinMode, int32_t  instanceID, int32_t  useGUILayout) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method CheckForTabEvent, addr 0xb64ef08, size 0x7c, virtual false, abstract: false, final false
static inline int32_t CheckForTabEvent(::UnityEngine::Event*  evt) ;

/// @brief Method CheckForTabEvent_Injected, addr 0xb64ef84, size 0x3c, virtual false, abstract: false, final false
static inline int32_t CheckForTabEvent_Injected(::System::IntPtr  evt) ;

/// @brief Method CheckOnGUI, addr 0xb63e8a8, size 0xbc, virtual false, abstract: false, final false
static inline void CheckOnGUI() ;

/// [RequiredByNativeCode]
/// @brief Method DestroyGUI, addr 0xb64fbbc, size 0x58, virtual false, abstract: false, final false
static inline void DestroyGUI(int32_t  instanceID) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method EndContainer, addr 0xb64f95c, size 0x88, virtual false, abstract: false, final false
static inline void EndContainer() ;

/// [RequiredByNativeCode]
/// @brief Method EndContainerGUIFromException, addr 0xb64feb0, size 0xa0, virtual false, abstract: false, final false
static inline bool EndContainerGUIFromException(::System::Exception*  exception) ;

/// [RequiredByNativeCode]
/// @brief Method EndGUI, addr 0xb64fc14, size 0x1d4, virtual false, abstract: false, final false
static inline void EndGUI(int32_t  layoutType) ;

/// [RequiredByNativeCode]
/// @brief Method EndGUIFromException, addr 0xb64fde8, size 0x74, virtual false, abstract: false, final false
static inline bool EndGUIFromException(::System::Exception*  exception) ;

/// @brief Method ExitGUI, addr 0xb64f664, size 0x44, virtual false, abstract: false, final false
static inline void ExitGUI() ;

/// @brief Method GUIToScreenPoint, addr 0xb65008c, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 GUIToScreenPoint(::UnityEngine::Vector2  guiPoint) ;

/// @brief Method GetControlID, addr 0xb644554, size 0x58, virtual false, abstract: false, final false
static inline int32_t GetControlID(::UnityEngine::FocusType  focus) ;

/// @brief Method GetControlID, addr 0xb63f658, size 0x70, virtual false, abstract: false, final false
static inline int32_t GetControlID(int32_t  hint, ::UnityEngine::FocusType  focus) ;

/// @brief Method GetControlID, addr 0xb63fa1c, size 0xa8, virtual false, abstract: false, final false
static inline int32_t GetControlID(int32_t  hint, ::UnityEngine::FocusType  focusType, ::UnityEngine::Rect  rect) ;

/// @brief Method GetDefaultSkin, addr 0xb63eab4, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GUISkin> GetDefaultSkin() ;

/// @brief Method GetStateObject, addr 0xb640258, size 0x64, virtual false, abstract: false, final false
static inline ::System::Object* GetStateObject(::System::Type*  t, int32_t  controlID) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method HasFocusableControls, addr 0xb64f010, size 0x28, virtual false, abstract: false, final false
static inline bool HasFocusableControls() ;

/// @brief Method HasKeyFocus, addr 0xb64d40c, size 0xc0, virtual false, abstract: false, final false
static inline bool HasKeyFocus(int32_t  controlID) ;

/// @brief Method HitTest, addr 0xb6418a0, size 0xb4, virtual false, abstract: false, final false
static inline bool HitTest(::UnityEngine::Rect  rect, ::UnityEngine::Event*  evt) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method HitTest, addr 0xb6501c4, size 0xb4, virtual false, abstract: false, final false
static inline bool HitTest(::UnityEngine::Rect  rect, ::UnityEngine::Vector2  point, bool  isDirectManipulationDevice) ;

/// @brief Method HitTest, addr 0xb650180, size 0x44, virtual false, abstract: false, final false
static inline bool HitTest(::UnityEngine::Rect  rect, ::UnityEngine::Vector2  point, int32_t  offset) ;

/// @brief Method InternalWindowToScreenPoint, addr 0xb64f3d4, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 InternalWindowToScreenPoint(::UnityEngine::Vector2  windowPoint) ;

/// @brief Method InternalWindowToScreenPoint_Injected, addr 0xb64f460, size 0x44, virtual false, abstract: false, final false
static inline void InternalWindowToScreenPoint_Injected(::by_ref<::UnityEngine::Vector2>  windowPoint, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// [NativeMethod("EndContainer")]
/// @brief Method Internal_EndContainer, addr 0xb64eee0, size 0x28, virtual false, abstract: false, final false
static inline void Internal_EndContainer() ;

/// @brief Method Internal_ExitGUI, addr 0xb64f3ac, size 0x28, virtual false, abstract: false, final false
static inline void Internal_ExitGUI() ;

/// [FreeFunction("GetGUIState().GetControlID")]
/// @brief Method Internal_GetControlID, addr 0xb64ec5c, size 0x9c, virtual false, abstract: false, final false
static inline int32_t Internal_GetControlID(int32_t  hint, ::UnityEngine::FocusType  focusType, ::UnityEngine::Rect  rect) ;

/// @brief Method Internal_GetControlID_Injected, addr 0xb64ecf8, size 0x54, virtual false, abstract: false, final false
static inline int32_t Internal_GetControlID_Injected(int32_t  hint, ::UnityEngine::FocusType  focusType, ::by_ref<::UnityEngine::Rect>  rect) ;

/// @brief Method Internal_GetDefaultSkin, addr 0xb64f370, size 0x3c, virtual false, abstract: false, final false
static inline ::System::Object* Internal_GetDefaultSkin(int32_t  skinMode) ;

/// @brief Method Internal_GetHotControl, addr 0xb64f2a8, size 0x28, virtual false, abstract: false, final false
static inline int32_t Internal_GetHotControl() ;

/// @brief Method Internal_GetKeyboardControl, addr 0xb64f2d0, size 0x28, virtual false, abstract: false, final false
static inline int32_t Internal_GetKeyboardControl() ;

/// @brief Method Internal_SetHotControl, addr 0xb64f2f8, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_SetHotControl(int32_t  value) ;

/// @brief Method Internal_SetKeyboardControl, addr 0xb64f334, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_SetKeyboardControl(int32_t  value) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method IsExitGUIException, addr 0xb64ff50, size 0x84, virtual false, abstract: false, final false
static inline bool IsExitGUIException(::System::Exception*  exception) ;

/// [RequiredByNativeCode]
/// @brief Method MarkGUIChanged, addr 0xb64f4a4, size 0x74, virtual false, abstract: false, final false
static inline void MarkGUIChanged() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method OwnsId, addr 0xb64f038, size 0x3c, virtual false, abstract: false, final false
static inline bool OwnsId(int32_t  id) ;

/// [RequiredByNativeCode]
/// @brief Method ProcessEvent, addr 0xb64f768, size 0x1f4, virtual false, abstract: false, final false
static inline void ProcessEvent(int32_t  instanceID, ::System::IntPtr  nativeEventPtr, ::by_ref<bool>  result) ;

/// [RequiredByNativeCode]
/// @brief Method RemoveCapture, addr 0xb64f5f0, size 0x74, virtual false, abstract: false, final false
static inline void RemoveCapture() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method ResetGlobalState, addr 0xb64fa90, size 0x12c, virtual false, abstract: false, final false
static inline void ResetGlobalState() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method SetKeyboardControlToFirstControlId, addr 0xb64efc0, size 0x28, virtual false, abstract: false, final false
static inline void SetKeyboardControlToFirstControlId() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method SetKeyboardControlToLastControlId, addr 0xb64efe8, size 0x28, virtual false, abstract: false, final false
static inline void SetKeyboardControlToLastControlId() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method ShouldRethrowException, addr 0xb64fe5c, size 0x54, virtual false, abstract: false, final false
static inline bool ShouldRethrowException(::System::Exception*  exception) ;

/// [RequiredByNativeCode]
/// @brief Method TakeCapture, addr 0xb64f57c, size 0x74, virtual false, abstract: false, final false
static inline void TakeCapture() ;

/// @brief Method WarnOnGUI, addr 0xb64f578, size 0x4, virtual false, abstract: false, final false
static inline void WarnOnGUI() ;

static inline bool getStaticF__guiIsExiting_k__BackingField() ;

static inline bool getStaticF__isUITK_k__BackingField() ;

static inline ::System::Action_3<::UnityEngine::EventType,::UnityEngine::KeyCode,::UnityEngine::EventModifiers>* getStaticF_beforeEventProcessed() ;

static inline ::System::Action* getStaticF_cleanupRoots() ;

static inline ::System::Func_2<::System::Exception*,bool>* getStaticF_endContainerGUIFromException() ;

static inline ::System::Action* getStaticF_guiChanged() ;

static inline ::UnityEngine::Event* getStaticF_m_Event() ;

static inline ::System::Func_3<int32_t,::System::IntPtr,bool>* getStaticF_processEvent() ;

static inline ::System::Action* getStaticF_releaseCapture() ;

static inline int32_t getStaticF_s_ControlCount() ;

static inline ::System::Func_1<bool>* getStaticF_s_HasCurrentWindowKeyFocusFunc() ;

static inline int32_t getStaticF_s_OriginalID() ;

static inline int32_t getStaticF_s_SkinMode() ;

static inline ::System::Action* getStaticF_takeCapture() ;

/// @brief Method get_compositionString, addr 0xb6410f0, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW get_compositionString() ;

/// @brief Method get_compositionString_Injected, addr 0xb64f17c, size 0x3c, virtual false, abstract: false, final false
static inline void get_compositionString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method get_guiDepth, addr 0xb64e934, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_guiDepth() ;

/// @brief Method get_hotControl, addr 0xb640fd4, size 0x68, virtual false, abstract: false, final false
static inline int32_t get_hotControl() ;

/// [CompilerGenerated]
/// @brief Method get_isUITK, addr 0xb64ffd4, size 0x58, virtual false, abstract: false, final false
static inline bool get_isUITK() ;

/// @brief Method get_keyboardControl, addr 0xb640ecc, size 0x68, virtual false, abstract: false, final false
static inline int32_t get_keyboardControl() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method get_pixelsPerPoint, addr 0xb646dc4, size 0x28, virtual false, abstract: false, final false
static inline float_t get_pixelsPerPoint() ;

/// [FreeFunction("GetCopyBuffer")]
/// @brief Method get_systemCopyBuffer, addr 0xb64e95c, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW get_systemCopyBuffer() ;

/// @brief Method get_systemCopyBuffer_Injected, addr 0xb64ea58, size 0x3c, virtual false, abstract: false, final false
static inline void get_systemCopyBuffer_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_textFieldInput, addr 0xb63db5c, size 0x28, virtual false, abstract: false, final false
static inline bool get_textFieldInput() ;

static inline void setStaticF__guiIsExiting_k__BackingField(bool  value) ;

static inline void setStaticF__isUITK_k__BackingField(bool  value) ;

static inline void setStaticF_beforeEventProcessed(::System::Action_3<::UnityEngine::EventType,::UnityEngine::KeyCode,::UnityEngine::EventModifiers>*  value) ;

static inline void setStaticF_cleanupRoots(::System::Action*  value) ;

static inline void setStaticF_endContainerGUIFromException(::System::Func_2<::System::Exception*,bool>*  value) ;

static inline void setStaticF_guiChanged(::System::Action*  value) ;

static inline void setStaticF_m_Event(::UnityEngine::Event*  value) ;

static inline void setStaticF_processEvent(::System::Func_3<int32_t,::System::IntPtr,bool>*  value) ;

static inline void setStaticF_releaseCapture(::System::Action*  value) ;

static inline void setStaticF_s_ControlCount(int32_t  value) ;

static inline void setStaticF_s_HasCurrentWindowKeyFocusFunc(::System::Func_1<bool>*  value) ;

static inline void setStaticF_s_OriginalID(int32_t  value) ;

static inline void setStaticF_s_SkinMode(int32_t  value) ;

static inline void setStaticF_takeCapture(::System::Action*  value) ;

/// @brief Method set_compositionCursorPos, addr 0xb64f1f4, size 0x78, virtual false, abstract: false, final false
static inline void set_compositionCursorPos(::UnityEngine::Vector2  value) ;

/// @brief Method set_compositionCursorPos_Injected, addr 0xb64f26c, size 0x3c, virtual false, abstract: false, final false
static inline void set_compositionCursorPos_Injected(::by_ref<::UnityEngine::Vector2>  value) ;

/// [CompilerGenerated]
/// @brief Method set_guiIsExiting, addr 0xb64f518, size 0x60, virtual false, abstract: false, final false
static inline void set_guiIsExiting(bool  value) ;

/// @brief Method set_hotControl, addr 0xb640e58, size 0x74, virtual false, abstract: false, final false
static inline void set_hotControl(int32_t  value) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method set_imeCompositionMode, addr 0xb64f1b8, size 0x3c, virtual false, abstract: false, final false
static inline void set_imeCompositionMode(::UnityEngine::IMECompositionMode  value) ;

/// [CompilerGenerated]
/// @brief Method set_isUITK, addr 0xb65002c, size 0x60, virtual false, abstract: false, final false
static inline void set_isUITK(bool  value) ;

/// @brief Method set_keyboardControl, addr 0xb640f34, size 0x74, virtual false, abstract: false, final false
static inline void set_keyboardControl(int32_t  value) ;

/// @brief Method set_mouseUsed, addr 0xb64244c, size 0x3c, virtual false, abstract: false, final false
static inline void set_mouseUsed(bool  value) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method set_pixelsPerPoint, addr 0xb64e8fc, size 0x38, virtual false, abstract: false, final false
static inline void set_pixelsPerPoint(float_t  value) ;

/// [FreeFunction("SetCopyBuffer")]
/// @brief Method set_systemCopyBuffer, addr 0xb64ea94, size 0x18c, virtual false, abstract: false, final false
static inline void set_systemCopyBuffer(::StringW  value) ;

/// @brief Method set_systemCopyBuffer_Injected, addr 0xb64ec20, size 0x3c, virtual false, abstract: false, final false
static inline void set_systemCopyBuffer_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

/// @brief Method set_textFieldInput, addr 0xb6411ec, size 0x3c, virtual false, abstract: false, final false
static inline void set_textFieldInput(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUIUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUIUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GUIUtility(GUIUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUIUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUIUtility(GUIUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28834};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GUIUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine

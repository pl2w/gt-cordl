#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionState_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugManager_UIMode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugManager)
namespace GlobalNamespace {
struct DebugManager_UIMode;
}
namespace GlobalNamespace {
struct DebugUI_Flags;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class Lazy_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerCanvas;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerPersistentCanvas;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering {
class DebugActionDesc;
}
namespace UnityEngine::Rendering {
struct DebugAction;
}
namespace UnityEngine::Rendering {
class DebugManager_UIState;
}
namespace UnityEngine::Rendering {
class DebugManager___c;
}
namespace UnityEngine::Rendering {
class DebugManager___c__DisplayClass67_0;
}
namespace UnityEngine::Rendering {
class DebugUI_IContainer;
}
namespace UnityEngine::Rendering {
class DebugUI_Panel;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::Rendering {
class IDebugData;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugManager;
}
namespace UnityEngine::Rendering {
class DebugManager_UIState;
}
namespace UnityEngine::Rendering {
class DebugManager___c;
}
namespace UnityEngine::Rendering {
class DebugManager___c__DisplayClass67_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::DebugManager*);
MARK_REF_T(::UnityEngine::Rendering::DebugManager_UIState*);
MARK_REF_T(::UnityEngine::Rendering::DebugManager___c*);
MARK_REF_T(::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugManager*, "UnityEngine.Rendering", "DebugManager");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugManager_UIState*, "UnityEngine.Rendering", "DebugManager/UIState");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugManager___c*, "UnityEngine.Rendering", "DebugManager/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0*, "UnityEngine.Rendering", "DebugManager/<>c__DisplayClass67_0");
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.Rendering.DebugActionDesc, UnityEngine.Rendering.DebugActionState
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugManager
class CORDL_TYPE DebugManager : public ::System::Object {
public:
// Declarations
using UIMode = ::GlobalNamespace::DebugManager_UIMode;

using UIState = ::UnityEngine::Rendering::DebugManager_UIState;

using __c = ::UnityEngine::Rendering::DebugManager___c;

using __c__DisplayClass67_0 = ::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0;

/// @brief Field debugActionMap, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugActionMap, put=__cordl_internal_set_debugActionMap)) ::UnityEngine::InputSystem::InputActionMap*  debugActionMap;

 __declspec(property(get=get_displayEditorUI, put=set_displayEditorUI)) bool  displayEditorUI;

 __declspec(property(get=get_displayPersistentRuntimeUI, put=set_displayPersistentRuntimeUI)) bool  displayPersistentRuntimeUI;

 __declspec(property(get=get_displayRuntimeUI, put=set_displayRuntimeUI)) bool  displayRuntimeUI;

/// @brief Field editorUIState, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_editorUIState, put=__cordl_internal_set_editorUIState)) ::UnityEngine::Rendering::DebugManager_UIState*  editorUIState;

 __declspec(property(get=get_enableRuntimeUI, put=set_enableRuntimeUI)) bool  enableRuntimeUI;

 __declspec(property(get=get_isAnyDebugUIActive)) bool  isAnyDebugUIActive;

/// @brief Field m_DebugActionStates, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DebugActionStates, put=__cordl_internal_set_m_DebugActionStates)) ::ArrayW<::UnityEngine::Rendering::DebugActionState*>  m_DebugActionStates;

/// @brief Field m_DebugActions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DebugActions, put=__cordl_internal_set_m_DebugActions)) ::ArrayW<::UnityEngine::Rendering::DebugActionDesc*>  m_DebugActions;

/// @brief Field m_EnableRuntimeUI, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableRuntimeUI, put=__cordl_internal_set_m_EnableRuntimeUI)) bool  m_EnableRuntimeUI;

/// @brief Field m_Panels, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Panels, put=__cordl_internal_set_m_Panels)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Panel*>*  m_Panels;

/// @brief Field m_PersistentRoot, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PersistentRoot, put=__cordl_internal_set_m_PersistentRoot)) ::UnityW<::UnityEngine::GameObject>  m_PersistentRoot;

/// @brief Field m_ReadOnlyPanels, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReadOnlyPanels, put=__cordl_internal_set_m_ReadOnlyPanels)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>*  m_ReadOnlyPanels;

/// @brief Field m_RequestedPanelIndex, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_RequestedPanelIndex, put=__cordl_internal_set_m_RequestedPanelIndex)) ::System::Nullable_1<int32_t>  m_RequestedPanelIndex;

/// @brief Field m_Root, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Root, put=__cordl_internal_set_m_Root)) ::UnityW<::UnityEngine::GameObject>  m_Root;

/// @brief Field m_RootUICanvas, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RootUICanvas, put=__cordl_internal_set_m_RootUICanvas)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas>  m_RootUICanvas;

/// @brief Field m_RootUIPersistentCanvas, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RootUIPersistentCanvas, put=__cordl_internal_set_m_RootUIPersistentCanvas)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas>  m_RootUIPersistentCanvas;

/// @brief Field onDisplayRuntimeUIChanged, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDisplayRuntimeUIChanged, put=__cordl_internal_set_onDisplayRuntimeUIChanged)) ::System::Action_1<bool>*  onDisplayRuntimeUIChanged;

/// @brief Field onSetDirty, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSetDirty, put=__cordl_internal_set_onSetDirty)) ::System::Action*  onSetDirty;

 __declspec(property(get=get_panels)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>*  panels;

/// @brief Field refreshEditorRequested, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_refreshEditorRequested, put=__cordl_internal_set_refreshEditorRequested)) bool  refreshEditorRequested;

/// @brief Field resetData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_resetData, put=__cordl_internal_set_resetData)) ::System::Action*  resetData;

/// @brief Field runtimeUIState, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_runtimeUIState, put=__cordl_internal_set_runtimeUIState)) ::UnityEngine::Rendering::DebugManager_UIState*  runtimeUIState;

/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>*  s_Instance;

/// @brief Field windowStateChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_windowStateChanged, put=setStaticF_windowStateChanged)) ::System::Action_2<::GlobalNamespace::DebugManager_UIMode,bool>*  windowStateChanged;

/// @brief Method AddAction, addr 0xb12fc4c, size 0xf0, virtual false, abstract: false, final false
inline void AddAction(::UnityEngine::Rendering::DebugAction  action, ::UnityEngine::Rendering::DebugActionDesc*  desc) ;

/// @brief Method ChangeSelection, addr 0xb131b60, size 0x1c, virtual false, abstract: false, final false
inline void ChangeSelection(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*  widget, bool  fromNext) ;

/// @brief Method EnableInputActions, addr 0xb12fd3c, size 0x240, virtual false, abstract: false, final false
inline void EnableInputActions() ;

/// @brief Method EnsurePersistentCanvas, addr 0xb131c14, size 0x22c, virtual false, abstract: false, final false
inline void EnsurePersistentCanvas() ;

/// @brief Method FindPanelIndex, addr 0xb1329d4, size 0xe4, virtual false, abstract: false, final false
inline int32_t FindPanelIndex(::StringW  displayName) ;

/// @brief Method GetAction, addr 0xb1303c8, size 0x38, virtual false, abstract: false, final false
inline float_t GetAction(::UnityEngine::Rendering::DebugAction  action) ;

/// @brief Method GetActionReleaseScrollTarget, addr 0xb130650, size 0x160, virtual false, abstract: false, final false
inline bool GetActionReleaseScrollTarget() ;

/// @brief Method GetActionToggleDebugMenuWithTouch, addr 0xb130400, size 0x250, virtual false, abstract: false, final false
inline bool GetActionToggleDebugMenuWithTouch() ;

/// @brief Method GetItem, addr 0xb133400, size 0x14c, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::DebugUI_Widget* GetItem(::StringW  queryPath) ;

/// @brief Method GetItem, addr 0xb13354c, size 0x32c, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::DebugUI_Widget* GetItem(::StringW  queryPath, ::UnityEngine::Rendering::DebugUI_IContainer*  container) ;

/// @brief Method GetItems, addr 0xb132c74, size 0x294, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*> GetItems(::GlobalNamespace::DebugUI_Flags  flags) ;

/// @brief Method GetItemsFromContainer, addr 0xb132f08, size 0x4f8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*> GetItemsFromContainer(::GlobalNamespace::DebugUI_Flags  flags, ::UnityEngine::Rendering::DebugUI_IContainer*  container) ;

/// @brief Method GetPanel, addr 0xb127f1c, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::DebugUI_Panel* GetPanel(::StringW  displayName, bool  createIfNull, int32_t  groupIndex, bool  overrideIfExist) ;

/// @brief Method GetRequestedEditorWindowPanelIndex, addr 0xb132560, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> GetRequestedEditorWindowPanelIndex() ;

/// @brief Method GetState, addr 0xb1319c8, size 0x14c, virtual false, abstract: false, final false
inline int32_t GetState() ;

static inline ::UnityEngine::Rendering::DebugManager* New_ctor() ;

/// @brief Method OnPanelDirty, addr 0xb132370, size 0x20, virtual false, abstract: false, final false
inline void OnPanelDirty(::UnityEngine::Rendering::DebugUI_Panel*  panel) ;

/// @brief Method PanelDiplayName, addr 0xb13245c, size 0x9c, virtual false, abstract: false, final false
inline ::StringW PanelDiplayName(/* [DisallowNull] */ int32_t  panelIndex) ;

/// @brief Method PanelIndex, addr 0xb132390, size 0xcc, virtual false, abstract: false, final false
inline int32_t PanelIndex(/* [DisallowNull] */ ::StringW  displayName) ;

/// @brief Method ReDrawOnScreenDebug, addr 0xb12d1a0, size 0x2c, virtual false, abstract: false, final false
inline void ReDrawOnScreenDebug() ;

/// @brief Method RefreshEditor, addr 0xb127e5c, size 0xc, virtual false, abstract: false, final false
inline void RefreshEditor() ;

/// @brief Method RegisterActions, addr 0xb12f7dc, size 0x468, virtual false, abstract: false, final false
inline void RegisterActions() ;

/// @brief Method RegisterData, addr 0xb127e70, size 0xac, virtual false, abstract: false, final false
inline void RegisterData(::UnityEngine::Rendering::IDebugData*  data) ;

/// @brief Method RegisterInputs, addr 0xb1307b0, size 0x984, virtual false, abstract: false, final false
inline void RegisterInputs() ;

/// @brief Method RegisterRootCanvas, addr 0xb131b14, size 0x4c, virtual false, abstract: false, final false
inline void RegisterRootCanvas(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*  root) ;

/// @brief Method RemovePanel, addr 0xb132ac0, size 0x1b4, virtual false, abstract: false, final false
inline void RemovePanel(::StringW  displayName) ;

/// @brief Method RemovePanel, addr 0xb132620, size 0x70, virtual false, abstract: false, final false
inline void RemovePanel(::UnityEngine::Rendering::DebugUI_Panel*  panel) ;

/// @brief Method RequestEditorWindowPanelIndex, addr 0xb1324f8, size 0x68, virtual false, abstract: false, final false
inline void RequestEditorWindowPanelIndex(int32_t  index) ;

/// @brief Method Reset, addr 0xb13199c, size 0x2c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SampleAction, addr 0xb12ff84, size 0x138, virtual false, abstract: false, final false
inline void SampleAction(int32_t  actionIndex) ;

/// @brief Method SetScrollTarget, addr 0xb131b7c, size 0x98, virtual false, abstract: false, final false
inline void SetScrollTarget(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*  widget) ;

/// [Obsolete("Use DebugManager.instance.displayEditorUI property instead. #from(23.1)")]
/// @brief Method ToggleEditorUI, addr 0xb133f78, size 0x18, virtual false, abstract: false, final false
inline void ToggleEditorUI(bool  open) ;

/// @brief Method TogglePersistent, addr 0xb131e40, size 0x530, virtual false, abstract: false, final false
inline void TogglePersistent(::UnityEngine::Rendering::DebugUI_Widget*  widget, ::System::Nullable_1<int32_t>  forceTupleIndex) ;

/// @brief Method UnregisterData, addr 0xb128110, size 0xac, virtual false, abstract: false, final false
inline void UnregisterData(::UnityEngine::Rendering::IDebugData*  data) ;

/// @brief Method UpdateAction, addr 0xb130134, size 0x64, virtual false, abstract: false, final false
inline void UpdateAction(int32_t  actionIndex) ;

/// @brief Method UpdateActions, addr 0xb130370, size 0x58, virtual false, abstract: false, final false
inline void UpdateActions() ;

/// @brief Method UpdateReadOnlyCollection, addr 0xb131134, size 0x84, virtual false, abstract: false, final false
inline void UpdateReadOnlyCollection() ;

constexpr ::UnityEngine::InputSystem::InputActionMap* const& __cordl_internal_get_debugActionMap() const;

constexpr ::UnityEngine::InputSystem::InputActionMap*& __cordl_internal_get_debugActionMap() ;

constexpr ::UnityEngine::Rendering::DebugManager_UIState* const& __cordl_internal_get_editorUIState() const;

constexpr ::UnityEngine::Rendering::DebugManager_UIState*& __cordl_internal_get_editorUIState() ;

constexpr ::ArrayW<::UnityEngine::Rendering::DebugActionState*> const& __cordl_internal_get_m_DebugActionStates() const;

constexpr ::ArrayW<::UnityEngine::Rendering::DebugActionState*>& __cordl_internal_get_m_DebugActionStates() ;

constexpr ::ArrayW<::UnityEngine::Rendering::DebugActionDesc*> const& __cordl_internal_get_m_DebugActions() const;

constexpr ::ArrayW<::UnityEngine::Rendering::DebugActionDesc*>& __cordl_internal_get_m_DebugActions() ;

constexpr bool const& __cordl_internal_get_m_EnableRuntimeUI() const;

constexpr bool& __cordl_internal_get_m_EnableRuntimeUI() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Panel*>* const& __cordl_internal_get_m_Panels() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Panel*>*& __cordl_internal_get_m_Panels() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_PersistentRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_PersistentRoot() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>* const& __cordl_internal_get_m_ReadOnlyPanels() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>*& __cordl_internal_get_m_ReadOnlyPanels() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_m_RequestedPanelIndex() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_m_RequestedPanelIndex() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_Root() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_Root() ;

constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas> const& __cordl_internal_get_m_RootUICanvas() const;

constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas>& __cordl_internal_get_m_RootUICanvas() ;

constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas> const& __cordl_internal_get_m_RootUIPersistentCanvas() const;

constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas>& __cordl_internal_get_m_RootUIPersistentCanvas() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_onDisplayRuntimeUIChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_onDisplayRuntimeUIChanged() ;

constexpr ::System::Action* const& __cordl_internal_get_onSetDirty() const;

constexpr ::System::Action*& __cordl_internal_get_onSetDirty() ;

constexpr bool const& __cordl_internal_get_refreshEditorRequested() const;

constexpr bool& __cordl_internal_get_refreshEditorRequested() ;

constexpr ::System::Action* const& __cordl_internal_get_resetData() const;

constexpr ::System::Action*& __cordl_internal_get_resetData() ;

constexpr ::UnityEngine::Rendering::DebugManager_UIState* const& __cordl_internal_get_runtimeUIState() const;

constexpr ::UnityEngine::Rendering::DebugManager_UIState*& __cordl_internal_get_runtimeUIState() ;

constexpr void __cordl_internal_set_debugActionMap(::UnityEngine::InputSystem::InputActionMap*  value) ;

constexpr void __cordl_internal_set_editorUIState(::UnityEngine::Rendering::DebugManager_UIState*  value) ;

constexpr void __cordl_internal_set_m_DebugActionStates(::ArrayW<::UnityEngine::Rendering::DebugActionState*>  value) ;

constexpr void __cordl_internal_set_m_DebugActions(::ArrayW<::UnityEngine::Rendering::DebugActionDesc*>  value) ;

constexpr void __cordl_internal_set_m_EnableRuntimeUI(bool  value) ;

constexpr void __cordl_internal_set_m_Panels(::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Panel*>*  value) ;

constexpr void __cordl_internal_set_m_PersistentRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_ReadOnlyPanels(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>*  value) ;

constexpr void __cordl_internal_set_m_RequestedPanelIndex(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_m_Root(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_RootUICanvas(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas>  value) ;

constexpr void __cordl_internal_set_m_RootUIPersistentCanvas(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas>  value) ;

constexpr void __cordl_internal_set_onDisplayRuntimeUIChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_onSetDirty(::System::Action*  value) ;

constexpr void __cordl_internal_set_refreshEditorRequested(bool  value) ;

constexpr void __cordl_internal_set_resetData(::System::Action*  value) ;

constexpr void __cordl_internal_set_runtimeUIState(::UnityEngine::Rendering::DebugManager_UIState*  value) ;

/// @brief Method .ctor, addr 0xb1316e4, size 0x2b0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_onDisplayRuntimeUIChanged, addr 0xb1311dc, size 0xb0, virtual false, abstract: false, final false
inline void add_onDisplayRuntimeUIChanged(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onSetDirty, addr 0xb13133c, size 0x9c, virtual false, abstract: false, final false
inline void add_onSetDirty(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_resetData, addr 0xb131474, size 0x9c, virtual false, abstract: false, final false
inline void add_resetData(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_windowStateChanged, addr 0xb133878, size 0xf4, virtual false, abstract: false, final false
static inline void add_windowStateChanged(::System::Action_2<::GlobalNamespace::DebugManager_UIMode,bool>*  value) ;

static inline ::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>* getStaticF_s_Instance() ;

static inline ::System::Action_2<::GlobalNamespace::DebugManager_UIMode,bool>* getStaticF_windowStateChanged() ;

/// @brief Method get_displayEditorUI, addr 0xb133a60, size 0x18, virtual false, abstract: false, final false
inline bool get_displayEditorUI() ;

/// @brief Method get_displayPersistentRuntimeUI, addr 0xb13165c, size 0x88, virtual false, abstract: false, final false
inline bool get_displayPersistentRuntimeUI() ;

/// @brief Method get_displayRuntimeUI, addr 0xb1315d4, size 0x88, virtual false, abstract: false, final false
inline bool get_displayRuntimeUI() ;

/// @brief Method get_enableRuntimeUI, addr 0xb133b24, size 0x8, virtual false, abstract: false, final false
inline bool get_enableRuntimeUI() ;

/// @brief Method get_instance, addr 0xb127de4, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::DebugManager* get_instance() ;

/// @brief Method get_isAnyDebugUIActive, addr 0xb1315ac, size 0x28, virtual false, abstract: false, final false
inline bool get_isAnyDebugUIActive() ;

/// @brief Method get_panels, addr 0xb1311b8, size 0x24, virtual false, abstract: false, final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>* get_panels() ;

/// [CompilerGenerated]
/// @brief Method remove_onDisplayRuntimeUIChanged, addr 0xb13128c, size 0xb0, virtual false, abstract: false, final false
inline void remove_onDisplayRuntimeUIChanged(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onSetDirty, addr 0xb1313d8, size 0x9c, virtual false, abstract: false, final false
inline void remove_onSetDirty(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_resetData, addr 0xb131510, size 0x9c, virtual false, abstract: false, final false
inline void remove_resetData(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_windowStateChanged, addr 0xb13396c, size 0xf4, virtual false, abstract: false, final false
static inline void remove_windowStateChanged(::System::Action_2<::GlobalNamespace::DebugManager_UIMode,bool>*  value) ;

static inline void setStaticF_s_Instance(::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>*  value) ;

static inline void setStaticF_windowStateChanged(::System::Action_2<::GlobalNamespace::DebugManager_UIMode,bool>*  value) ;

/// @brief Method set_displayEditorUI, addr 0xb133a78, size 0x18, virtual false, abstract: false, final false
inline void set_displayEditorUI(bool  value) ;

/// @brief Method set_displayPersistentRuntimeUI, addr 0xb133ee0, size 0x98, virtual false, abstract: false, final false
inline void set_displayPersistentRuntimeUI(bool  value) ;

/// @brief Method set_displayRuntimeUI, addr 0xb133b5c, size 0x2bc, virtual false, abstract: false, final false
inline void set_displayRuntimeUI(bool  value) ;

/// @brief Method set_enableRuntimeUI, addr 0xb133b2c, size 0x24, virtual false, abstract: false, final false
inline void set_enableRuntimeUI(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugManager(DebugManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugManager(DebugManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16699};

/// @brief Field kDPadHorizontal offset 0xffffffff size 0x8
static constexpr ::ConstString  kDPadHorizontal{u"Debug Horizontal"};

/// @brief Field kDPadVertical offset 0xffffffff size 0x8
static constexpr ::ConstString  kDPadVertical{u"Debug Vertical"};

/// @brief Field kDebugNextBtn offset 0xffffffff size 0x8
static constexpr ::ConstString  kDebugNextBtn{u"Debug Next"};

/// @brief Field kDebugPreviousBtn offset 0xffffffff size 0x8
static constexpr ::ConstString  kDebugPreviousBtn{u"Debug Previous"};

/// @brief Field kEnableDebug offset 0xffffffff size 0x8
static constexpr ::ConstString  kEnableDebug{u"Enable Debug"};

/// @brief Field kEnableDebugBtn1 offset 0xffffffff size 0x8
static constexpr ::ConstString  kEnableDebugBtn1{u"Enable Debug Button 1"};

/// @brief Field kEnableDebugBtn2 offset 0xffffffff size 0x8
static constexpr ::ConstString  kEnableDebugBtn2{u"Enable Debug Button 2"};

/// @brief Field kMultiplierBtn offset 0xffffffff size 0x8
static constexpr ::ConstString  kMultiplierBtn{u"Debug Multiplier"};

/// @brief Field kPersistentBtn offset 0xffffffff size 0x8
static constexpr ::ConstString  kPersistentBtn{u"Debug Persistent"};

/// @brief Field kResetBtn offset 0xffffffff size 0x8
static constexpr ::ConstString  kResetBtn{u"Debug Reset"};

/// @brief Field kValidateBtn offset 0xffffffff size 0x8
static constexpr ::ConstString  kValidateBtn{u"Debug Validate"};

/// @brief Field m_DebugActions, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::DebugActionDesc*>  ___m_DebugActions;

/// @brief Field m_DebugActionStates, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::DebugActionState*>  ___m_DebugActionStates;

/// @brief Field debugActionMap, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputActionMap*  ___debugActionMap;

/// @brief Field m_ReadOnlyPanels, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>*  ___m_ReadOnlyPanels;

/// @brief Field m_Panels, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Panel*>*  ___m_Panels;

/// [CompilerGenerated]
/// @brief Field onDisplayRuntimeUIChanged, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___onDisplayRuntimeUIChanged;

/// [CompilerGenerated]
/// @brief Field onSetDirty, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___onSetDirty;

/// [CompilerGenerated]
/// @brief Field resetData, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___resetData;

/// @brief Field refreshEditorRequested, offset: 0x50, size: 0x1, def value: None
 bool  ___refreshEditorRequested;

/// @brief Field m_RequestedPanelIndex, offset: 0x58, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___m_RequestedPanelIndex;

/// @brief Field m_Root, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_Root;

/// @brief Field m_RootUICanvas, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas>  ___m_RootUICanvas;

/// @brief Field m_PersistentRoot, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_PersistentRoot;

/// @brief Field m_RootUIPersistentCanvas, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas>  ___m_RootUIPersistentCanvas;

/// @brief Field editorUIState, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Rendering::DebugManager_UIState*  ___editorUIState;

/// @brief Field m_EnableRuntimeUI, offset: 0x90, size: 0x1, def value: None
 bool  ___m_EnableRuntimeUI;

/// @brief Field runtimeUIState, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Rendering::DebugManager_UIState*  ___runtimeUIState;

/// @brief Size padding 0x98 - 0xa0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_DebugActions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_DebugActionStates) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___debugActionMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_ReadOnlyPanels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_Panels) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___onDisplayRuntimeUIChanged) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___onSetDirty) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___resetData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___refreshEditorRequested) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_RequestedPanelIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_Root) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_RootUICanvas) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_PersistentRoot) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_RootUIPersistentCanvas) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___editorUIState) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_EnableRuntimeUI) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___runtimeUIState) == 0x98, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::DebugManager) == 0x98, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugManager/<>c__DisplayClass67_0
class CORDL_TYPE DebugManager___c__DisplayClass67_0 : public ::System::Object {
public:
// Declarations
/// @brief Field displayName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayName, put=__cordl_internal_set_displayName)) ::StringW  displayName;

static inline ::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0* New_ctor() ;

/// @brief Method <FindPanelIndex>b__0, addr 0xb1341f4, size 0x20, virtual false, abstract: false, final false
inline bool _FindPanelIndex_b__0(::UnityEngine::Rendering::DebugUI_Panel*  p) ;

constexpr ::StringW const& __cordl_internal_get_displayName() const;

constexpr ::StringW& __cordl_internal_get_displayName() ;

constexpr void __cordl_internal_set_displayName(::StringW  value) ;

/// @brief Method .ctor, addr 0xb132ab8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugManager___c__DisplayClass67_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugManager___c__DisplayClass67_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugManager___c__DisplayClass67_0(DebugManager___c__DisplayClass67_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugManager___c__DisplayClass67_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugManager___c__DisplayClass67_0(DebugManager___c__DisplayClass67_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16698};

/// @brief Field displayName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___displayName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0, ___displayName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugManager/<>c
class CORDL_TYPE DebugManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::DebugManager___c*  __9;

/// @brief Field <>9__49_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__49_0, put=setStaticF___9__49_0)) ::System::Action_1<bool>*  __9__49_0;

/// @brief Field <>9__49_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__49_1, put=setStaticF___9__49_1)) ::System::Action*  __9__49_1;

/// @brief Field <>9__60_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__60_0, put=setStaticF___9__60_0)) ::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*,int32_t>*  __9__60_0;

static inline ::UnityEngine::Rendering::DebugManager___c* New_ctor() ;

/// @brief Method <TogglePersistent>b__60_0, addr 0xb134128, size 0x7c, virtual false, abstract: false, final false
inline int32_t _TogglePersistent_b__60_0(::UnityEngine::Rendering::DebugUI_Widget*  w) ;

/// @brief Method <.cctor>b__95_0, addr 0xb1341a4, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::DebugManager* __cctor_b__95_0() ;

/// @brief Method <.ctor>b__49_0, addr 0xb134120, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__49_0(bool  _p0_) ;

/// @brief Method <.ctor>b__49_1, addr 0xb134124, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__49_1() ;

/// @brief Method .ctor, addr 0xb134118, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::DebugManager___c* getStaticF___9() ;

static inline ::System::Action_1<bool>* getStaticF___9__49_0() ;

static inline ::System::Action* getStaticF___9__49_1() ;

static inline ::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*,int32_t>* getStaticF___9__60_0() ;

static inline void setStaticF___9(::UnityEngine::Rendering::DebugManager___c*  value) ;

static inline void setStaticF___9__49_0(::System::Action_1<bool>*  value) ;

static inline void setStaticF___9__49_1(::System::Action*  value) ;

static inline void setStaticF___9__60_0(::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugManager___c(DebugManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugManager___c(DebugManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16697};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::DebugManager___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.DebugManager::UIMode
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugManager/UIState
class CORDL_TYPE DebugManager_UIState : public ::System::Object {
public:
// Declarations
/// @brief Field m_Open, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Open, put=__cordl_internal_set_m_Open)) bool  m_Open;

/// @brief Field mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::DebugManager_UIMode  mode;

 __declspec(property(get=get_open, put=set_open)) bool  open;

static inline ::UnityEngine::Rendering::DebugManager_UIState* New_ctor() ;

constexpr bool const& __cordl_internal_get_m_Open() const;

constexpr bool& __cordl_internal_get_m_Open() ;

constexpr ::GlobalNamespace::DebugManager_UIMode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::DebugManager_UIMode& __cordl_internal_get_mode() ;

constexpr void __cordl_internal_set_m_Open(bool  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::DebugManager_UIMode  value) ;

/// @brief Method .ctor, addr 0xb131994, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_open, addr 0xb1340a8, size 0x8, virtual false, abstract: false, final false
inline bool get_open() ;

/// @brief Method set_open, addr 0xb133a90, size 0x94, virtual false, abstract: false, final false
inline void set_open(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugManager_UIState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugManager_UIState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugManager_UIState(DebugManager_UIState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugManager_UIState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugManager_UIState(DebugManager_UIState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16696};

/// @brief Field mode, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::DebugManager_UIMode  ___mode;

/// [SerializeField]
/// @brief Field m_Open, offset: 0x14, size: 0x1, def value: None
 bool  ___m_Open;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugManager_UIState, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager_UIState, ___m_Open) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::DebugManager_UIState) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering

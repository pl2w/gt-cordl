#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityRole_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityState_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityNode)
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::Accessibility {
class AccessibilityAction;
}
namespace UnityEngine::Accessibility {
class AccessibilityHierarchy;
}
namespace UnityEngine::Accessibility {
struct AccessibilityNodeData;
}
namespace UnityEngine::Accessibility {
template<typename T>
class AccessibilityNode_ObservableList_1;
}
namespace UnityEngine::Accessibility {
struct AccessibilityRole;
}
namespace UnityEngine::Accessibility {
struct AccessibilityState;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct SystemLanguage;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
class AccessibilityNode;
}
namespace UnityEngine::Accessibility {
template<typename T>
class AccessibilityNode_ObservableList_1;
}
// Write type traits
MARK_REF_T(::UnityEngine::Accessibility::AccessibilityNode*);
MARK_GEN_REF_T_PTR(::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityNode*, "UnityEngine.Accessibility", "AccessibilityNode");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1, "UnityEngine.Accessibility", "AccessibilityNode/ObservableList`1");
// Dependencies System.Object, UnityEngine.Accessibility.AccessibilityRole, UnityEngine.Accessibility.AccessibilityState, UnityEngine.Rect, UnityEngine.SystemLanguage
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AccessibilityNode
class CORDL_TYPE AccessibilityNode : public ::System::Object {
public:
// Declarations
template<typename T>
using ObservableList_1 = ::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>;

/// @brief Field <id>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__id_k__BackingField, put=__cordl_internal_set__id_k__BackingField)) int32_t  _id_k__BackingField;

 __declspec(property(get=get_allowsDirectInteraction)) bool  allowsDirectInteraction;

 __declspec(property(get=get_childList)) ::System::Collections::Generic::IList_1<::UnityEngine::Accessibility::AccessibilityNode*>*  childList;

/// @brief Field decremented, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_decremented, put=__cordl_internal_set_decremented)) ::System::Action*  decremented;

/// @brief Field dismissed, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_dismissed, put=__cordl_internal_set_dismissed)) ::System::Func_1<bool>*  dismissed;

/// @brief Field focusChanged, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_focusChanged, put=__cordl_internal_set_focusChanged)) ::System::Action_2<::UnityEngine::Accessibility::AccessibilityNode*,bool>*  focusChanged;

 __declspec(property(get=get_frame)) ::UnityEngine::Rect  frame;

 __declspec(property(get=get_frameGetter)) ::System::Func_1<::UnityEngine::Rect>*  frameGetter;

 __declspec(property(get=get_hint)) ::StringW  hint;

 __declspec(property(get=get_id)) int32_t  id;

/// @brief Field incremented, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_incremented, put=__cordl_internal_set_incremented)) ::System::Action*  incremented;

 __declspec(property(get=get_isActive)) bool  isActive;

 __declspec(property(get=get_label)) ::StringW  label;

 __declspec(property(get=get_language)) ::UnityEngine::SystemLanguage  language;

/// @brief Field m_Actions, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Actions, put=__cordl_internal_set_m_Actions)) ::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<::UnityEngine::Accessibility::AccessibilityAction*>*  m_Actions;

/// @brief Field m_AllowsDirectInteraction, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowsDirectInteraction, put=__cordl_internal_set_m_AllowsDirectInteraction)) bool  m_AllowsDirectInteraction;

/// @brief Field m_Children, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Children, put=__cordl_internal_set_m_Children)) ::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<::UnityEngine::Accessibility::AccessibilityNode*>*  m_Children;

/// @brief Field m_Frame, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_Frame, put=__cordl_internal_set_m_Frame)) ::UnityEngine::Rect  m_Frame;

/// @brief Field m_FrameGetter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FrameGetter, put=__cordl_internal_set_m_FrameGetter)) ::System::Func_1<::UnityEngine::Rect>*  m_FrameGetter;

/// @brief Field m_Hierarchy, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Hierarchy, put=__cordl_internal_set_m_Hierarchy)) ::UnityEngine::Accessibility::AccessibilityHierarchy*  m_Hierarchy;

/// @brief Field m_Hint, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Hint, put=__cordl_internal_set_m_Hint)) ::StringW  m_Hint;

/// @brief Field m_IsActive, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsActive, put=__cordl_internal_set_m_IsActive)) bool  m_IsActive;

/// @brief Field m_Label, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Label, put=__cordl_internal_set_m_Label)) ::StringW  m_Label;

/// @brief Field m_Language, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Language, put=__cordl_internal_set_m_Language)) ::UnityEngine::SystemLanguage  m_Language;

/// @brief Field m_Parent, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Parent, put=__cordl_internal_set_m_Parent)) ::UnityEngine::Accessibility::AccessibilityNode*  m_Parent;

/// @brief Field m_Role, offset 0x62, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_Role, put=__cordl_internal_set_m_Role)) ::UnityEngine::Accessibility::AccessibilityRole  m_Role;

/// @brief Field m_State, offset 0x66, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_State, put=__cordl_internal_set_m_State)) ::UnityEngine::Accessibility::AccessibilityState  m_State;

/// @brief Field m_Value, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Value, put=__cordl_internal_set_m_Value)) ::StringW  m_Value;

 __declspec(property(get=get_parent)) ::UnityEngine::Accessibility::AccessibilityNode*  parent;

 __declspec(property(get=get_role)) ::UnityEngine::Accessibility::AccessibilityRole  role;

/// @brief Field selected, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_selected, put=__cordl_internal_set_selected)) ::System::Func_1<bool>*  selected;

 __declspec(property(get=get_state)) ::UnityEngine::Accessibility::AccessibilityState  state;

 __declspec(property(get=get_value)) ::StringW  value;

/// @brief Method ActionsChanged, addr 0xb51d2a0, size 0x15c, virtual false, abstract: false, final false
inline void ActionsChanged() ;

/// @brief Method CalculateFrame, addr 0xb51d0ac, size 0x38, virtual false, abstract: false, final false
inline void CalculateFrame() ;

/// @brief Method ChildrenChanged, addr 0xb51d180, size 0x120, virtual false, abstract: false, final false
inline void ChildrenChanged() ;

/// @brief Method Dismissed, addr 0xb51c17c, size 0x20, virtual false, abstract: false, final false
inline bool Dismissed() ;

/// @brief Method FreeNative, addr 0xb51ca40, size 0x390, virtual false, abstract: false, final false
inline void FreeNative(bool  freeChildren) ;

/// @brief Method GetNodeData, addr 0xb51afe4, size 0x1c4, virtual false, abstract: false, final false
inline void GetNodeData(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>  nodeData) ;

/// @brief Method InvokeDecremented, addr 0xb51c0a4, size 0x1c, virtual false, abstract: false, final false
inline void InvokeDecremented() ;

/// @brief Method InvokeFocusChanged, addr 0xb51aac0, size 0x28, virtual false, abstract: false, final false
inline void InvokeFocusChanged(bool  isNodeFocused) ;

/// @brief Method InvokeIncremented, addr 0xb51bfd8, size 0x1c, virtual false, abstract: false, final false
inline void InvokeIncremented() ;

/// @brief Method InvokeSelected, addr 0xb51bf08, size 0x20, virtual false, abstract: false, final false
inline bool InvokeSelected() ;

/// @brief Method IsInActiveHierarchy, addr 0xb51cfec, size 0x70, virtual false, abstract: false, final false
inline bool IsInActiveHierarchy() ;

/// @brief Method NotifyFocusChanged, addr 0xb51bd9c, size 0xb0, virtual false, abstract: false, final false
inline void NotifyFocusChanged(bool  isNodeFocused) ;

/// @brief Method SetFrame, addr 0xb51d0e4, size 0x8c, virtual false, abstract: false, final false
inline void SetFrame(::UnityEngine::Rect  frame) ;

constexpr int32_t const& __cordl_internal_get__id_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__id_k__BackingField() ;

constexpr ::System::Action* const& __cordl_internal_get_decremented() const;

constexpr ::System::Action*& __cordl_internal_get_decremented() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get_dismissed() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get_dismissed() ;

constexpr ::System::Action_2<::UnityEngine::Accessibility::AccessibilityNode*,bool>* const& __cordl_internal_get_focusChanged() const;

constexpr ::System::Action_2<::UnityEngine::Accessibility::AccessibilityNode*,bool>*& __cordl_internal_get_focusChanged() ;

constexpr ::System::Action* const& __cordl_internal_get_incremented() const;

constexpr ::System::Action*& __cordl_internal_get_incremented() ;

constexpr ::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<::UnityEngine::Accessibility::AccessibilityAction*>* const& __cordl_internal_get_m_Actions() const;

constexpr ::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<::UnityEngine::Accessibility::AccessibilityAction*>*& __cordl_internal_get_m_Actions() ;

constexpr bool const& __cordl_internal_get_m_AllowsDirectInteraction() const;

constexpr bool& __cordl_internal_get_m_AllowsDirectInteraction() ;

constexpr ::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<::UnityEngine::Accessibility::AccessibilityNode*>* const& __cordl_internal_get_m_Children() const;

constexpr ::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<::UnityEngine::Accessibility::AccessibilityNode*>*& __cordl_internal_get_m_Children() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_Frame() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_m_Frame() ;

constexpr ::System::Func_1<::UnityEngine::Rect>* const& __cordl_internal_get_m_FrameGetter() const;

constexpr ::System::Func_1<::UnityEngine::Rect>*& __cordl_internal_get_m_FrameGetter() ;

constexpr ::UnityEngine::Accessibility::AccessibilityHierarchy* const& __cordl_internal_get_m_Hierarchy() const;

constexpr ::UnityEngine::Accessibility::AccessibilityHierarchy*& __cordl_internal_get_m_Hierarchy() ;

constexpr ::StringW const& __cordl_internal_get_m_Hint() const;

constexpr ::StringW& __cordl_internal_get_m_Hint() ;

constexpr bool const& __cordl_internal_get_m_IsActive() const;

constexpr bool& __cordl_internal_get_m_IsActive() ;

constexpr ::StringW const& __cordl_internal_get_m_Label() const;

constexpr ::StringW& __cordl_internal_get_m_Label() ;

constexpr ::UnityEngine::SystemLanguage const& __cordl_internal_get_m_Language() const;

constexpr ::UnityEngine::SystemLanguage& __cordl_internal_get_m_Language() ;

constexpr ::UnityEngine::Accessibility::AccessibilityNode* const& __cordl_internal_get_m_Parent() const;

constexpr ::UnityEngine::Accessibility::AccessibilityNode*& __cordl_internal_get_m_Parent() ;

constexpr ::UnityEngine::Accessibility::AccessibilityRole const& __cordl_internal_get_m_Role() const;

constexpr ::UnityEngine::Accessibility::AccessibilityRole& __cordl_internal_get_m_Role() ;

constexpr ::UnityEngine::Accessibility::AccessibilityState const& __cordl_internal_get_m_State() const;

constexpr ::UnityEngine::Accessibility::AccessibilityState& __cordl_internal_get_m_State() ;

constexpr ::StringW const& __cordl_internal_get_m_Value() const;

constexpr ::StringW& __cordl_internal_get_m_Value() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get_selected() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get_selected() ;

constexpr void __cordl_internal_set__id_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_decremented(::System::Action*  value) ;

constexpr void __cordl_internal_set_dismissed(::System::Func_1<bool>*  value) ;

constexpr void __cordl_internal_set_focusChanged(::System::Action_2<::UnityEngine::Accessibility::AccessibilityNode*,bool>*  value) ;

constexpr void __cordl_internal_set_incremented(::System::Action*  value) ;

constexpr void __cordl_internal_set_m_Actions(::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<::UnityEngine::Accessibility::AccessibilityAction*>*  value) ;

constexpr void __cordl_internal_set_m_AllowsDirectInteraction(bool  value) ;

constexpr void __cordl_internal_set_m_Children(::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value) ;

constexpr void __cordl_internal_set_m_Frame(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_m_FrameGetter(::System::Func_1<::UnityEngine::Rect>*  value) ;

constexpr void __cordl_internal_set_m_Hierarchy(::UnityEngine::Accessibility::AccessibilityHierarchy*  value) ;

constexpr void __cordl_internal_set_m_Hint(::StringW  value) ;

constexpr void __cordl_internal_set_m_IsActive(bool  value) ;

constexpr void __cordl_internal_set_m_Label(::StringW  value) ;

constexpr void __cordl_internal_set_m_Language(::UnityEngine::SystemLanguage  value) ;

constexpr void __cordl_internal_set_m_Parent(::UnityEngine::Accessibility::AccessibilityNode*  value) ;

constexpr void __cordl_internal_set_m_Role(::UnityEngine::Accessibility::AccessibilityRole  value) ;

constexpr void __cordl_internal_set_m_State(::UnityEngine::Accessibility::AccessibilityState  value) ;

constexpr void __cordl_internal_set_m_Value(::StringW  value) ;

constexpr void __cordl_internal_set_selected(::System::Func_1<bool>*  value) ;

/// @brief Method get_allowsDirectInteraction, addr 0xb51d08c, size 0x8, virtual false, abstract: false, final false
inline bool get_allowsDirectInteraction() ;

/// @brief Method get_childList, addr 0xb51d0a4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::UnityEngine::Accessibility::AccessibilityNode*>* get_childList() ;

/// @brief Method get_frame, addr 0xb51cfa4, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_frame() ;

/// @brief Method get_frameGetter, addr 0xb51d170, size 0x8, virtual false, abstract: false, final false
inline ::System::Func_1<::UnityEngine::Rect>* get_frameGetter() ;

/// @brief Method get_hint, addr 0xb51d074, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_hint() ;

/// [CompilerGenerated]
/// @brief Method get_id, addr 0xb51d05c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_id() ;

/// @brief Method get_isActive, addr 0xb51d07c, size 0x8, virtual false, abstract: false, final false
inline bool get_isActive() ;

/// @brief Method get_label, addr 0xb51d064, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_label() ;

/// @brief Method get_language, addr 0xb51d178, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::SystemLanguage get_language() ;

/// @brief Method get_parent, addr 0xb51d09c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Accessibility::AccessibilityNode* get_parent() ;

/// @brief Method get_role, addr 0xb51d084, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Accessibility::AccessibilityRole get_role() ;

/// @brief Method get_state, addr 0xb51d094, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Accessibility::AccessibilityState get_state() ;

/// @brief Method get_value, addr 0xb51d06c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessibilityNode(AccessibilityNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessibilityNode(AccessibilityNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32537};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <id>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____id_k__BackingField;

/// @brief Field m_FrameGetter, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<::UnityEngine::Rect>*  ___m_FrameGetter;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field focusChanged, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::Accessibility::AccessibilityNode*,bool>*  ___focusChanged;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field selected, offset: 0x28, size: 0x8, def value: None
 ::System::Func_1<bool>*  ___selected;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field incremented, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___incremented;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field decremented, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___decremented;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field dismissed, offset: 0x40, size: 0x8, def value: None
 ::System::Func_1<bool>*  ___dismissed;

/// @brief Field m_Label, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___m_Label;

/// @brief Field m_Value, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___m_Value;

/// @brief Field m_Hint, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___m_Hint;

/// @brief Field m_IsActive, offset: 0x60, size: 0x1, def value: None
 bool  ___m_IsActive;

/// @brief Field m_Role, offset: 0x62, size: 0x2, def value: None
 ::UnityEngine::Accessibility::AccessibilityRole  ___m_Role;

/// @brief Field m_AllowsDirectInteraction, offset: 0x64, size: 0x1, def value: None
 bool  ___m_AllowsDirectInteraction;

/// @brief Field m_State, offset: 0x66, size: 0x2, def value: None
 ::UnityEngine::Accessibility::AccessibilityState  ___m_State;

/// @brief Field m_Parent, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Accessibility::AccessibilityNode*  ___m_Parent;

/// @brief Field m_Children, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<::UnityEngine::Accessibility::AccessibilityNode*>*  ___m_Children;

/// @brief Field m_Actions, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<::UnityEngine::Accessibility::AccessibilityAction*>*  ___m_Actions;

/// @brief Field m_Frame, offset: 0x80, size: 0x10, def value: None
 ::UnityEngine::Rect  ___m_Frame;

/// @brief Field m_Language, offset: 0x90, size: 0x4, def value: None
 ::UnityEngine::SystemLanguage  ___m_Language;

/// @brief Field m_Hierarchy, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Accessibility::AccessibilityHierarchy*  ___m_Hierarchy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ____id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_FrameGetter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___focusChanged) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___selected) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___incremented) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___decremented) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___dismissed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_Label) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_Value) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_Hint) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_IsActive) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_Role) == 0x62, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_AllowsDirectInteraction) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_State) == 0x66, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_Parent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_Children) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_Actions) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_Frame) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_Language) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_Hierarchy) == 0x98, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityNode) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
// [DefaultMember("Item")]
// Dependencies System.Object
namespace UnityEngine::Accessibility {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Accessibility.AccessibilityNode/ObservableList`1<T>
class CORDL_TYPE AccessibilityNode_ObservableList_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) T  Item[];

/// @brief Field listChanged, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_listChanged, put=__cordl_internal_set_listChanged)) ::System::Action*  listChanged;

/// @brief Field m_Items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Items, put=__cordl_internal_set_m_Items)) ::System::Collections::Generic::List_1<T>*  m_Items;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() ;

constexpr ::System::Action* const& __cordl_internal_get_listChanged() const;

constexpr ::System::Action*& __cordl_internal_get_listChanged() ;

constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_m_Items() const;

constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_m_Items() ;

constexpr void __cordl_internal_set_listChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_m_Items(::System::Collections::Generic::List_1<T>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_listChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_listChanged(::System::Action*  value) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Item(int32_t  index) ;

/// [CompilerGenerated]
/// @brief Method remove_listChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_listChanged(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityNode_ObservableList_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityNode_ObservableList_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessibilityNode_ObservableList_1(AccessibilityNode_ObservableList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityNode_ObservableList_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessibilityNode_ObservableList_1(AccessibilityNode_ObservableList_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32536};

/// @brief Field m_Items, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<T>*  ___m_Items;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field listChanged, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___listChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Accessibility

#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityNodeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Accessibility/zzzz__AccessibilityRole_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityState_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityNodeData)
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
struct AccessibilityNodeData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Accessibility::AccessibilityNodeData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityNodeData, "UnityEngine.Accessibility", "AccessibilityNodeData");
// [RequiredByNativeCode]
// [NativeType((UnityEngine.Bindings.CodegenOptions)1, "MonoAccessibilityNodeData")]
// [NativeHeader("Modules/Accessibility/Bindings/AccessibilityNodeData.bindings.h")]
// [NativeHeader("Modules/Accessibility/Native/AccessibilityNodeData.h")]
// Dependencies UnityEngine.Accessibility.AccessibilityRole, UnityEngine.Accessibility.AccessibilityState, UnityEngine.Rect, UnityEngine.SystemLanguage
namespace UnityEngine::Accessibility {
// Is value type: true
// CS Name: UnityEngine.Accessibility.AccessibilityNodeData
struct CORDL_TYPE AccessibilityNodeData {
public:
// Declarations
 __declspec(property(put=set_allowsDirectInteraction)) bool  allowsDirectInteraction;

 __declspec(property(put=set_childIds)) ::ArrayW<int32_t>  childIds;

 __declspec(property(put=set_frame)) ::UnityEngine::Rect  frame;

 __declspec(property(put=set_hint)) ::StringW  hint;

 __declspec(property(put=set_id)) int32_t  id;

 __declspec(property(put=set_implementsDismissed)) bool  implementsDismissed;

 __declspec(property(put=set_implementsSelected)) bool  implementsSelected;

 __declspec(property(put=set_isActive)) bool  isActive;

 __declspec(property(put=set_label)) ::StringW  label;

 __declspec(property(put=set_language)) ::UnityEngine::SystemLanguage  language;

 __declspec(property(put=set_parentId)) int32_t  parentId;

 __declspec(property(put=set_role)) ::UnityEngine::Accessibility::AccessibilityRole  role;

 __declspec(property(put=set_state)) ::UnityEngine::Accessibility::AccessibilityState  state;

 __declspec(property(put=set_value)) ::StringW  value;

/// [CompilerGenerated]
/// @brief Method set_allowsDirectInteraction, addr 0xb51ba7c, size 0x8, virtual false, abstract: false, final false
inline void set_allowsDirectInteraction(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_childIds, addr 0xb51baa0, size 0x8, virtual false, abstract: false, final false
inline void set_childIds(::ArrayW<int32_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_frame, addr 0xb51ba8c, size 0xc, virtual false, abstract: false, final false
inline void set_frame(::UnityEngine::Rect  value) ;

/// [CompilerGenerated]
/// @brief Method set_hint, addr 0xb51ba6c, size 0x8, virtual false, abstract: false, final false
inline void set_hint(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_id, addr 0xb51ba4c, size 0x8, virtual false, abstract: false, final false
inline void set_id(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_implementsDismissed, addr 0xb51bab8, size 0x8, virtual false, abstract: false, final false
inline void set_implementsDismissed(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_implementsSelected, addr 0xb51bab0, size 0x8, virtual false, abstract: false, final false
inline void set_implementsSelected(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isActive, addr 0xb51ba54, size 0x8, virtual false, abstract: false, final false
inline void set_isActive(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_label, addr 0xb51ba5c, size 0x8, virtual false, abstract: false, final false
inline void set_label(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_language, addr 0xb51baa8, size 0x8, virtual false, abstract: false, final false
inline void set_language(::UnityEngine::SystemLanguage  value) ;

/// [CompilerGenerated]
/// @brief Method set_parentId, addr 0xb51ba98, size 0x8, virtual false, abstract: false, final false
inline void set_parentId(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_role, addr 0xb51ba74, size 0x8, virtual false, abstract: false, final false
inline void set_role(::UnityEngine::Accessibility::AccessibilityRole  value) ;

/// [CompilerGenerated]
/// @brief Method set_state, addr 0xb51ba84, size 0x8, virtual false, abstract: false, final false
inline void set_state(::UnityEngine::Accessibility::AccessibilityState  value) ;

/// [CompilerGenerated]
/// @brief Method set_value, addr 0xb51ba64, size 0x8, virtual false, abstract: false, final false
inline void set_value(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityNodeData() ;

// Ctor Parameters [CppParam { name: "_id_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_isActive_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_label_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_value_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_hint_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_role_k__BackingField", ty: "::UnityEngine::Accessibility::AccessibilityRole", modifiers: "", def_value: None, comment: None }, CppParam { name: "_allowsDirectInteraction_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_state_k__BackingField", ty: "::UnityEngine::Accessibility::AccessibilityState", modifiers: "", def_value: None, comment: None }, CppParam { name: "_frame_k__BackingField", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "_parentId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_childIds_k__BackingField", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_isFocused_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_language_k__BackingField", ty: "::UnityEngine::SystemLanguage", modifiers: "", def_value: None, comment: None }, CppParam { name: "_implementsSelected_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_implementsDismissed_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr AccessibilityNodeData(int32_t  _id_k__BackingField, bool  _isActive_k__BackingField, ::StringW  _label_k__BackingField, ::StringW  _value_k__BackingField, ::StringW  _hint_k__BackingField, ::UnityEngine::Accessibility::AccessibilityRole  _role_k__BackingField, bool  _allowsDirectInteraction_k__BackingField, ::UnityEngine::Accessibility::AccessibilityState  _state_k__BackingField, ::UnityEngine::Rect  _frame_k__BackingField, int32_t  _parentId_k__BackingField, ::ArrayW<int32_t>  _childIds_k__BackingField, bool  _isFocused_k__BackingField, ::UnityEngine::SystemLanguage  _language_k__BackingField, bool  _implementsSelected_k__BackingField, bool  _implementsDismissed_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32528};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <id>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _id_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <isActive>k__BackingField, offset: 0x4, size: 0x1, def value: None
 bool  _isActive_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <label>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::StringW  _label_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <value>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  _value_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <hint>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  _hint_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <role>k__BackingField, offset: 0x20, size: 0x2, def value: None
 ::UnityEngine::Accessibility::AccessibilityRole  _role_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <allowsDirectInteraction>k__BackingField, offset: 0x22, size: 0x1, def value: None
 bool  _allowsDirectInteraction_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <state>k__BackingField, offset: 0x24, size: 0x2, def value: None
 ::UnityEngine::Accessibility::AccessibilityState  _state_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <frame>k__BackingField, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Rect  _frame_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <parentId>k__BackingField, offset: 0x38, size: 0x4, def value: None
 int32_t  _parentId_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <childIds>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<int32_t>  _childIds_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <isFocused>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  _isFocused_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <language>k__BackingField, offset: 0x4c, size: 0x4, def value: None
 ::UnityEngine::SystemLanguage  _language_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <implementsSelected>k__BackingField, offset: 0x50, size: 0x1, def value: None
 bool  _implementsSelected_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <implementsDismissed>k__BackingField, offset: 0x51, size: 0x1, def value: None
 bool  _implementsDismissed_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _id_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _isActive_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _label_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _value_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _hint_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _role_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _allowsDirectInteraction_k__BackingField) == 0x22, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _state_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _frame_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _parentId_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _childIds_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _isFocused_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _language_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _implementsSelected_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _implementsDismissed_k__BackingField) == 0x51, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityNodeData) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility

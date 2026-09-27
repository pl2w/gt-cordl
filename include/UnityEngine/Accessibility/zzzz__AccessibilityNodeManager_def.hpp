#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityNodeManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityNodeManager)
namespace UnityEngine::Accessibility {
class AccessibilityAction;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
class AccessibilityNodeManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::Accessibility::AccessibilityNodeManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityNodeManager*, "UnityEngine.Accessibility", "AccessibilityNodeManager");
// [NativeHeader("Modules/Accessibility/Native/AccessibilityNodeManager.h")]
// Dependencies System.Object
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AccessibilityNodeManager
class CORDL_TYPE AccessibilityNodeManager : public ::System::Object {
public:
// Declarations
/// @brief Method DestroyNativeNode, addr 0xb51bac0, size 0x44, virtual false, abstract: false, final false
static inline void DestroyNativeNode(int32_t  id, int32_t  parentId) ;

/// [RequiredByNativeCode]
/// @brief Method Internal_InvokeDecremented, addr 0xb51bff4, size 0xb0, virtual false, abstract: false, final false
static inline void Internal_InvokeDecremented(int32_t  id) ;

/// [RequiredByNativeCode]
/// @brief Method Internal_InvokeDismissed, addr 0xb51c0c0, size 0xbc, virtual false, abstract: false, final false
static inline bool Internal_InvokeDismissed(int32_t  id) ;

/// [RequiredByNativeCode]
/// @brief Method Internal_InvokeFocusChanged, addr 0xb51bcf8, size 0xa4, virtual false, abstract: false, final false
static inline void Internal_InvokeFocusChanged(int32_t  id, bool  isNodeFocused) ;

/// [RequiredByNativeCode]
/// @brief Method Internal_InvokeIncremented, addr 0xb51bf28, size 0xb0, virtual false, abstract: false, final false
static inline void Internal_InvokeIncremented(int32_t  id) ;

/// [RequiredByNativeCode]
/// @brief Method Internal_InvokeSelected, addr 0xb51be4c, size 0xbc, virtual false, abstract: false, final false
static inline bool Internal_InvokeSelected(int32_t  id) ;

/// @brief Method SetActions, addr 0xb51bcb4, size 0x44, virtual false, abstract: false, final false
static inline void SetActions(int32_t  id, ::ArrayW<::UnityEngine::Accessibility::AccessibilityAction*>  actions) ;

/// @brief Method SetChildren, addr 0xb51bb9c, size 0xd4, virtual false, abstract: false, final false
static inline void SetChildren(int32_t  id, ::ArrayW<int32_t>  childIds) ;

/// @brief Method SetChildren_Injected, addr 0xb51bc70, size 0x44, virtual false, abstract: false, final false
static inline void SetChildren_Injected(int32_t  id, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  childIds) ;

/// @brief Method SetFrame, addr 0xb51bb04, size 0x54, virtual false, abstract: false, final false
static inline void SetFrame(int32_t  id, ::UnityEngine::Rect  frame) ;

/// @brief Method SetFrame_Injected, addr 0xb51bb58, size 0x44, virtual false, abstract: false, final false
static inline void SetFrame_Injected(int32_t  id, ::by_ref<::UnityEngine::Rect>  frame) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityNodeManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityNodeManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessibilityNodeManager(AccessibilityNodeManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityNodeManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessibilityNodeManager(AccessibilityNodeManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32529};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityNodeManager) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility

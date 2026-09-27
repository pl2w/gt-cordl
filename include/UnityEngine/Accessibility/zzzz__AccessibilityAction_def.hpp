#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AccessibilityAction)
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
class AccessibilityAction;
}
// Write type traits
MARK_REF_T(::UnityEngine::Accessibility::AccessibilityAction*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityAction*, "UnityEngine.Accessibility", "AccessibilityAction");
// [RequiredByNativeCode]
// [NativeHeader("Modules/Accessibility/Native/AccessibilityAction.h")]
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AccessibilityAction
class CORDL_TYPE AccessibilityAction : public ::System::Object {
public:
// Declarations
/// @brief Field <activated>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__activated_k__BackingField, put=__cordl_internal_set__activated_k__BackingField)) ::System::Func_1<bool>*  _activated_k__BackingField;

 __declspec(property(get=get_activated)) ::System::Func_1<bool>*  activated;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xb519e58, size 0x94, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xb519eec, size 0x4c, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Internal_Destroy, addr 0xb519f38, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_Destroy(::System::IntPtr  ptr) ;

/// [RequiredByNativeCode]
/// @brief Method Internal_InvokeActivated, addr 0xb519f7c, size 0x20, virtual false, abstract: false, final false
inline bool Internal_InvokeActivated() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get__activated_k__BackingField() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get__activated_k__BackingField() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set__activated_k__BackingField(::System::Func_1<bool>*  value) ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// [CompilerGenerated]
/// @brief Method get_activated, addr 0xb519f74, size 0x8, virtual false, abstract: false, final false
inline ::System::Func_1<bool>* get_activated() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityAction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityAction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessibilityAction(AccessibilityAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityAction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessibilityAction(AccessibilityAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32522};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <activated>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<bool>*  ____activated_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityAction, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityAction, ____activated_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityAction) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility

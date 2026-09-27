#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityManager)
namespace GlobalNamespace {
struct AccessibilityManager_NotificationContext;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Accessibility {
class AccessibilityManager_ExclusiveLock;
}
namespace UnityEngine::Accessibility {
struct AccessibilityNodeData;
}
namespace UnityEngine::Accessibility {
class AccessibilityNode;
}
namespace UnityEngine::Accessibility {
struct AccessibilityNotificationContext;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
class AccessibilityManager;
}
namespace UnityEngine::Accessibility {
class AccessibilityManager_ExclusiveLock;
}
// Write type traits
MARK_REF_T(::UnityEngine::Accessibility::AccessibilityManager*);
MARK_REF_T(::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityManager*, "UnityEngine.Accessibility", "AccessibilityManager");
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*, "UnityEngine.Accessibility", "AccessibilityManager/ExclusiveLock");
// [VisibleToOtherModules(new[] { "UnityEditor.AccessibilityModule" })]
// [NativeHeader("Modules/Accessibility/Native/AccessibilityManager.h")]
// Dependencies System.Object
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AccessibilityManager
class CORDL_TYPE AccessibilityManager : public ::System::Object {
public:
// Declarations
using NotificationContext = ::GlobalNamespace::AccessibilityManager_NotificationContext;

using ExclusiveLock = ::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock;

/// @brief Field asyncNotificationContexts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_asyncNotificationContexts, put=setStaticF_asyncNotificationContexts)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::AccessibilityManager_NotificationContext>*  asyncNotificationContexts;

/// @brief Field nodeFocusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nodeFocusChanged, put=setStaticF_nodeFocusChanged)) ::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  nodeFocusChanged;

/// @brief Field screenReaderStatusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_screenReaderStatusChanged, put=setStaticF_screenReaderStatusChanged)) ::System::Action_1<bool>*  screenReaderStatusChanged;

/// @brief Method GetExclusiveLock, addr 0xb51aa70, size 0x50, virtual false, abstract: false, final false
static inline ::System::IDisposable* GetExclusiveLock() ;

/// [RequiredByNativeCode]
/// @brief Method Internal_GetNode, addr 0xb51aee8, size 0xb0, virtual false, abstract: false, final false
static inline bool Internal_GetNode(int32_t  id, ::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>  nodeData) ;

/// [RequiredByNativeCode]
/// @brief Method Internal_GetNodeIdAt, addr 0xb51b1a8, size 0xac, virtual false, abstract: false, final false
static inline int32_t Internal_GetNodeIdAt(float_t  x, float_t  y) ;

/// [RequiredByNativeCode]
/// @brief Method Internal_GetRootNodeIds, addr 0xb51ac38, size 0x298, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> Internal_GetRootNodeIds() ;

/// [RequiredByNativeCode]
/// [VisibleToOtherModules(new[] { "UnityEditor.AccessibilityModule" })]
/// @brief Method Internal_Initialize, addr 0xb51a3d0, size 0x4c, virtual false, abstract: false, final false
static inline void Internal_Initialize() ;

/// [RequiredByNativeCode]
/// @brief Method Internal_OnAccessibilityNotificationReceived, addr 0xb51b2cc, size 0x98, virtual false, abstract: false, final false
static inline void Internal_OnAccessibilityNotificationReceived(::by_ref<::UnityEngine::Accessibility::AccessibilityNotificationContext>  context) ;

/// [RequiredByNativeCode]
/// @brief Method Internal_Update, addr 0xb51a5d0, size 0x4a0, virtual false, abstract: false, final false
static inline void Internal_Update() ;

/// @brief Method IsScreenReaderEnabled, addr 0xb51a36c, size 0x28, virtual false, abstract: false, final false
static inline bool IsScreenReaderEnabled() ;

/// [ThreadSafe]
/// @brief Method Lock, addr 0xb51b640, size 0x28, virtual false, abstract: false, final false
static inline void Lock() ;

/// @brief Method QueueNotification, addr 0xb51b470, size 0x158, virtual false, abstract: false, final false
static inline void QueueNotification(::GlobalNamespace::AccessibilityManager_NotificationContext  notification) ;

/// @brief Method SendAccessibilityNotification, addr 0xb51a394, size 0x3c, virtual false, abstract: false, final false
static inline void SendAccessibilityNotification(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Accessibility::AccessibilityNotificationContext>  context) ;

/// [ThreadSafe]
/// @brief Method Unlock, addr 0xb51b668, size 0x28, virtual false, abstract: false, final false
static inline void Unlock() ;

/// [CompilerGenerated]
/// @brief Method add_nodeFocusChanged, addr 0xb51a184, size 0xf4, virtual false, abstract: false, final false
static inline void add_nodeFocusChanged(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_screenReaderStatusChanged, addr 0xb519f9c, size 0xf4, virtual false, abstract: false, final false
static inline void add_screenReaderStatusChanged(::System::Action_1<bool>*  value) ;

static inline ::System::Collections::Generic::Queue_1<::GlobalNamespace::AccessibilityManager_NotificationContext>* getStaticF_asyncNotificationContexts() ;

static inline ::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>* getStaticF_nodeFocusChanged() ;

static inline ::System::Action_1<bool>* getStaticF_screenReaderStatusChanged() ;

/// [CompilerGenerated]
/// @brief Method remove_nodeFocusChanged, addr 0xb51a278, size 0xf4, virtual false, abstract: false, final false
static inline void remove_nodeFocusChanged(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_screenReaderStatusChanged, addr 0xb51a090, size 0xf4, virtual false, abstract: false, final false
static inline void remove_screenReaderStatusChanged(::System::Action_1<bool>*  value) ;

static inline void setStaticF_asyncNotificationContexts(::System::Collections::Generic::Queue_1<::GlobalNamespace::AccessibilityManager_NotificationContext>*  value) ;

static inline void setStaticF_nodeFocusChanged(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value) ;

static inline void setStaticF_screenReaderStatusChanged(::System::Action_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessibilityManager(AccessibilityManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessibilityManager(AccessibilityManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32525};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityManager) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
// Dependencies System.Object
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AccessibilityManager/ExclusiveLock
class CORDL_TYPE AccessibilityManager_ExclusiveLock : public ::System::Object {
public:
// Declarations
/// @brief Field m_Disposed, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Disposed, put=__cordl_internal_set_m_Disposed)) bool  m_Disposed;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xb51b9ec, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0xb51b8e8, size 0x84, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method InternalDispose, addr 0xb51b96c, size 0x80, virtual false, abstract: false, final false
inline void InternalDispose() ;

static inline ::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock* New_ctor() ;

constexpr bool const& __cordl_internal_get_m_Disposed() const;

constexpr bool& __cordl_internal_get_m_Disposed() ;

constexpr void __cordl_internal_set_m_Disposed(bool  value) ;

/// @brief Method .ctor, addr 0xb51b5c8, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityManager_ExclusiveLock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityManager_ExclusiveLock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessibilityManager_ExclusiveLock(AccessibilityManager_ExclusiveLock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityManager_ExclusiveLock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessibilityManager_ExclusiveLock(AccessibilityManager_ExclusiveLock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32524};

/// @brief Field m_Disposed, offset: 0x10, size: 0x1, def value: None
 bool  ___m_Disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock, ___m_Disposed) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility

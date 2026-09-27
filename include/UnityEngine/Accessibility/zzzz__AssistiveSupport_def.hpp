#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AssistiveSupport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Accessibility/zzzz__IService_def.hpp"
CORDL_MODULE_EXPORT(AssistiveSupport)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Accessibility {
class AccessibilityHierarchy;
}
namespace UnityEngine::Accessibility {
class AccessibilityNode;
}
namespace UnityEngine::Accessibility {
struct AccessibilityNotificationContext;
}
namespace UnityEngine::Accessibility {
class AssistiveSupport_NotificationDispatcher;
}
namespace UnityEngine::Accessibility {
class IAccessibilityNotificationDispatcher;
}
namespace UnityEngine::Accessibility {
class ServiceManager;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
class AssistiveSupport;
}
namespace UnityEngine::Accessibility {
class AssistiveSupport_NotificationDispatcher;
}
// Write type traits
MARK_REF_T(::UnityEngine::Accessibility::AssistiveSupport*);
MARK_REF_T(::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AssistiveSupport*, "UnityEngine.Accessibility", "AssistiveSupport");
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*, "UnityEngine.Accessibility", "AssistiveSupport/NotificationDispatcher");
// Dependencies System.Object, UnityEngine.Accessibility.IService
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AssistiveSupport
class CORDL_TYPE AssistiveSupport : public ::System::Object {
public:
// Declarations
using NotificationDispatcher = ::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher;

/// @brief Field <isScreenReaderEnabled>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isScreenReaderEnabled_k__BackingField, put=setStaticF__isScreenReaderEnabled_k__BackingField)) bool  _isScreenReaderEnabled_k__BackingField;

/// @brief Field <notificationDispatcher>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__notificationDispatcher_k__BackingField, put=setStaticF__notificationDispatcher_k__BackingField)) ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*  _notificationDispatcher_k__BackingField;

/// @brief Field nodeFocusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nodeFocusChanged, put=setStaticF_nodeFocusChanged)) ::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  nodeFocusChanged;

/// @brief Field s_ServiceManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ServiceManager, put=setStaticF_s_ServiceManager)) ::UnityEngine::Accessibility::ServiceManager*  s_ServiceManager;

/// @brief Field screenReaderStatusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_screenReaderStatusChanged, put=setStaticF_screenReaderStatusChanged)) ::System::Action_1<bool>*  screenReaderStatusChanged;

/// @brief Method GetService, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Accessibility::IService*>)
static inline T GetService() ;

/// @brief Method Initialize, addr 0xb51a41c, size 0x1b4, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method NodeFocusChanged, addr 0xb51c758, size 0x7c, virtual false, abstract: false, final false
static inline void NodeFocusChanged(::UnityEngine::Accessibility::AccessibilityNode*  currentNode) ;

/// @brief Method ScreenReaderStatusChanged, addr 0xb51c5fc, size 0x15c, virtual false, abstract: false, final false
static inline void ScreenReaderStatusChanged(bool  screenReaderEnabled) ;

static inline bool getStaticF__isScreenReaderEnabled_k__BackingField() ;

static inline ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher* getStaticF__notificationDispatcher_k__BackingField() ;

static inline ::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>* getStaticF_nodeFocusChanged() ;

static inline ::UnityEngine::Accessibility::ServiceManager* getStaticF_s_ServiceManager() ;

static inline ::System::Action_1<bool>* getStaticF_screenReaderStatusChanged() ;

/// @brief Method get_activeHierarchy, addr 0xb51b7bc, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Accessibility::AccessibilityHierarchy* get_activeHierarchy() ;

/// [CompilerGenerated]
/// @brief Method get_isScreenReaderEnabled, addr 0xb51c384, size 0x58, virtual false, abstract: false, final false
static inline bool get_isScreenReaderEnabled() ;

/// [CompilerGenerated]
/// @brief Method get_notificationDispatcher, addr 0xb51c43c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher* get_notificationDispatcher() ;

static inline void setStaticF__isScreenReaderEnabled_k__BackingField(bool  value) ;

static inline void setStaticF__notificationDispatcher_k__BackingField(::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*  value) ;

static inline void setStaticF_nodeFocusChanged(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value) ;

static inline void setStaticF_s_ServiceManager(::UnityEngine::Accessibility::ServiceManager*  value) ;

static inline void setStaticF_screenReaderStatusChanged(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_isScreenReaderEnabled, addr 0xb51c3dc, size 0x60, virtual false, abstract: false, final false
static inline void set_isScreenReaderEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssistiveSupport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssistiveSupport", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssistiveSupport(AssistiveSupport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssistiveSupport", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssistiveSupport(AssistiveSupport const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32534};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Accessibility::AssistiveSupport) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
// Dependencies System.Object
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AssistiveSupport/NotificationDispatcher
class CORDL_TYPE AssistiveSupport_NotificationDispatcher : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher"
constexpr operator  ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*() noexcept;

static inline ::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher* New_ctor() ;

/// @brief Method Send, addr 0xb51c850, size 0x74, virtual false, abstract: false, final false
static inline void Send(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Accessibility::AccessibilityNotificationContext>  context) ;

/// @brief Method SendScreenChanged, addr 0xb51c8c4, size 0x4c, virtual true, abstract: false, final true
inline void SendScreenChanged(::UnityEngine::Accessibility::AccessibilityNode*  nodeToFocus) ;

/// @brief Method .ctor, addr 0xb51c848, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher"
constexpr ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher* i___UnityEngine__Accessibility__IAccessibilityNotificationDispatcher() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssistiveSupport_NotificationDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssistiveSupport_NotificationDispatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssistiveSupport_NotificationDispatcher(AssistiveSupport_NotificationDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssistiveSupport_NotificationDispatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssistiveSupport_NotificationDispatcher(AssistiveSupport_NotificationDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32533};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility

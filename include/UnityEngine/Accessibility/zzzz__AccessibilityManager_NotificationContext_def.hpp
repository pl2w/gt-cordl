#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityManager_NotificationContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Accessibility/zzzz__AccessibilityNotificationContext_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNotification_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AccessibilityManager_NotificationContext)
namespace UnityEngine::Accessibility {
class AccessibilityNode;
}
namespace UnityEngine::Accessibility {
struct AccessibilityNotificationContext;
}
namespace UnityEngine::Accessibility {
struct AccessibilityNotification;
}
// Forward declare root types
namespace GlobalNamespace {
struct AccessibilityManager_NotificationContext;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AccessibilityManager_NotificationContext);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AccessibilityManager_NotificationContext, "UnityEngine.Accessibility", "AccessibilityManager/NotificationContext");
// Dependencies UnityEngine.Accessibility.AccessibilityNotification, UnityEngine.Accessibility.AccessibilityNotificationContext
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Accessibility.AccessibilityManager/NotificationContext
struct CORDL_TYPE AccessibilityManager_NotificationContext {
public:
// Declarations
 __declspec(property(put=set_announcement)) ::StringW  announcement;

 __declspec(property(get=get_currentNode, put=set_currentNode)) ::UnityEngine::Accessibility::AccessibilityNode*  currentNode;

 __declspec(property(get=get_fontScale, put=set_fontScale)) float_t  fontScale;

 __declspec(property(get=get_isBoldTextEnabled, put=set_isBoldTextEnabled)) bool  isBoldTextEnabled;

 __declspec(property(get=get_isClosedCaptioningEnabled, put=set_isClosedCaptioningEnabled)) bool  isClosedCaptioningEnabled;

 __declspec(property(get=get_isScreenReaderEnabled, put=set_isScreenReaderEnabled)) bool  isScreenReaderEnabled;

 __declspec(property(put=set_nativeContext)) ::UnityEngine::Accessibility::AccessibilityNotificationContext  nativeContext;

 __declspec(property(put=set_nextNode)) ::UnityEngine::Accessibility::AccessibilityNode*  nextNode;

 __declspec(property(get=get_notification, put=set_notification)) ::UnityEngine::Accessibility::AccessibilityNotification  notification;

 __declspec(property(put=set_wasAnnouncementSuccessful)) bool  wasAnnouncementSuccessful;

/// @brief Method .ctor, addr 0xb51b364, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::UnityEngine::Accessibility::AccessibilityNotificationContext>  nativeNotification) ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_currentNode, addr 0xb51b758, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Accessibility::AccessibilityNode* get_currentNode() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_fontScale, addr 0xb51b770, size 0x8, virtual false, abstract: false, final false
inline float_t get_fontScale() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_isBoldTextEnabled, addr 0xb51b780, size 0x8, virtual false, abstract: false, final false
inline bool get_isBoldTextEnabled() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_isClosedCaptioningEnabled, addr 0xb51b790, size 0x8, virtual false, abstract: false, final false
inline bool get_isClosedCaptioningEnabled() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_isScreenReaderEnabled, addr 0xb51b738, size 0x8, virtual false, abstract: false, final false
inline bool get_isScreenReaderEnabled() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_notification, addr 0xb51b728, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Accessibility::AccessibilityNotification get_notification() ;

/// [CompilerGenerated]
/// @brief Method set_announcement, addr 0xb51b748, size 0x8, virtual false, abstract: false, final false
inline void set_announcement(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_currentNode, addr 0xb51b760, size 0x8, virtual false, abstract: false, final false
inline void set_currentNode(::UnityEngine::Accessibility::AccessibilityNode*  value) ;

/// [CompilerGenerated]
/// @brief Method set_fontScale, addr 0xb51b778, size 0x8, virtual false, abstract: false, final false
inline void set_fontScale(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_isBoldTextEnabled, addr 0xb51b788, size 0x8, virtual false, abstract: false, final false
inline void set_isBoldTextEnabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isClosedCaptioningEnabled, addr 0xb51b798, size 0x8, virtual false, abstract: false, final false
inline void set_isClosedCaptioningEnabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isScreenReaderEnabled, addr 0xb51b740, size 0x8, virtual false, abstract: false, final false
inline void set_isScreenReaderEnabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_nativeContext, addr 0xb51b7a0, size 0x1c, virtual false, abstract: false, final false
inline void set_nativeContext(::UnityEngine::Accessibility::AccessibilityNotificationContext  value) ;

/// [CompilerGenerated]
/// @brief Method set_nextNode, addr 0xb51b768, size 0x8, virtual false, abstract: false, final false
inline void set_nextNode(::UnityEngine::Accessibility::AccessibilityNode*  value) ;

/// [CompilerGenerated]
/// @brief Method set_notification, addr 0xb51b730, size 0x8, virtual false, abstract: false, final false
inline void set_notification(::UnityEngine::Accessibility::AccessibilityNotification  value) ;

/// [CompilerGenerated]
/// @brief Method set_wasAnnouncementSuccessful, addr 0xb51b750, size 0x8, virtual false, abstract: false, final false
inline void set_wasAnnouncementSuccessful(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityManager_NotificationContext() ;

// Ctor Parameters [CppParam { name: "_notification_k__BackingField", ty: "::UnityEngine::Accessibility::AccessibilityNotification", modifiers: "", def_value: None, comment: None }, CppParam { name: "_isScreenReaderEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_announcement_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_wasAnnouncementSuccessful_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_currentNode_k__BackingField", ty: "::UnityEngine::Accessibility::AccessibilityNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_nextNode_k__BackingField", ty: "::UnityEngine::Accessibility::AccessibilityNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_fontScale_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_isBoldTextEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_isClosedCaptioningEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_nativeContext_k__BackingField", ty: "::UnityEngine::Accessibility::AccessibilityNotificationContext", modifiers: "", def_value: None, comment: None }]
constexpr AccessibilityManager_NotificationContext(::UnityEngine::Accessibility::AccessibilityNotification  _notification_k__BackingField, bool  _isScreenReaderEnabled_k__BackingField, ::StringW  _announcement_k__BackingField, bool  _wasAnnouncementSuccessful_k__BackingField, ::UnityEngine::Accessibility::AccessibilityNode*  _currentNode_k__BackingField, ::UnityEngine::Accessibility::AccessibilityNode*  _nextNode_k__BackingField, float_t  _fontScale_k__BackingField, bool  _isBoldTextEnabled_k__BackingField, bool  _isClosedCaptioningEnabled_k__BackingField, ::UnityEngine::Accessibility::AccessibilityNotificationContext  _nativeContext_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32523};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <notification>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::Accessibility::AccessibilityNotification  _notification_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <isScreenReaderEnabled>k__BackingField, offset: 0x4, size: 0x1, def value: None
 bool  _isScreenReaderEnabled_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <announcement>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::StringW  _announcement_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <wasAnnouncementSuccessful>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  _wasAnnouncementSuccessful_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <currentNode>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Accessibility::AccessibilityNode*  _currentNode_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <nextNode>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Accessibility::AccessibilityNode*  _nextNode_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <fontScale>k__BackingField, offset: 0x28, size: 0x4, def value: None
 float_t  _fontScale_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <isBoldTextEnabled>k__BackingField, offset: 0x2c, size: 0x1, def value: None
 bool  _isBoldTextEnabled_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <isClosedCaptioningEnabled>k__BackingField, offset: 0x2d, size: 0x1, def value: None
 bool  _isClosedCaptioningEnabled_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <nativeContext>k__BackingField, offset: 0x30, size: 0x20, def value: None
 ::UnityEngine::Accessibility::AccessibilityNotificationContext  _nativeContext_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AccessibilityManager_NotificationContext, _notification_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccessibilityManager_NotificationContext, _isScreenReaderEnabled_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccessibilityManager_NotificationContext, _announcement_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccessibilityManager_NotificationContext, _wasAnnouncementSuccessful_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccessibilityManager_NotificationContext, _currentNode_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccessibilityManager_NotificationContext, _nextNode_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccessibilityManager_NotificationContext, _fontScale_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccessibilityManager_NotificationContext, _isBoldTextEnabled_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccessibilityManager_NotificationContext, _isClosedCaptioningEnabled_k__BackingField) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccessibilityManager_NotificationContext, _nativeContext_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AccessibilityManager_NotificationContext) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

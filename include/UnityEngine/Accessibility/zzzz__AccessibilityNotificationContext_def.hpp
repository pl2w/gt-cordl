#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityNotificationContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Accessibility/zzzz__AccessibilityNotification_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityNotificationContext)
namespace UnityEngine::Accessibility {
struct AccessibilityNotification;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
struct AccessibilityNotificationContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Accessibility::AccessibilityNotificationContext);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityNotificationContext, "UnityEngine.Accessibility", "AccessibilityNotificationContext");
// [RequiredByNativeCode]
// [NativeType((UnityEngine.Bindings.CodegenOptions)1, "MonoAccessibilityNotificationContext")]
// [NativeHeader("Modules/Accessibility/Native/AccessibilityNotificationContext.h")]
// [NativeHeader("Modules/Accessibility/Bindings/AccessibilityNotificationContext.bindings.h")]
// Dependencies UnityEngine.Accessibility.AccessibilityNotification
namespace UnityEngine::Accessibility {
// Is value type: true
// CS Name: UnityEngine.Accessibility.AccessibilityNotificationContext
struct CORDL_TYPE AccessibilityNotificationContext {
public:
// Declarations
 __declspec(property(get=get_announcement)) ::StringW  announcement;

 __declspec(property(get=get_currentNodeId)) int32_t  currentNodeId;

 __declspec(property(get=get_isScreenReaderEnabled)) bool  isScreenReaderEnabled;

 __declspec(property(get=get_nextNodeId, put=set_nextNodeId)) int32_t  nextNodeId;

 __declspec(property(get=get_notification, put=set_notification)) ::UnityEngine::Accessibility::AccessibilityNotification  notification;

 __declspec(property(get=get_wasAnnouncementSuccessful)) bool  wasAnnouncementSuccessful;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_announcement, addr 0xb51c1b4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_announcement() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_currentNodeId, addr 0xb51c1c4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_currentNodeId() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_isScreenReaderEnabled, addr 0xb51c1ac, size 0x8, virtual false, abstract: false, final false
inline bool get_isScreenReaderEnabled() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_nextNodeId, addr 0xb51c1cc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_nextNodeId() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_notification, addr 0xb51c19c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Accessibility::AccessibilityNotification get_notification() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_wasAnnouncementSuccessful, addr 0xb51c1bc, size 0x8, virtual false, abstract: false, final false
inline bool get_wasAnnouncementSuccessful() ;

/// [CompilerGenerated]
/// @brief Method set_nextNodeId, addr 0xb51c1d4, size 0x8, virtual false, abstract: false, final false
inline void set_nextNodeId(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_notification, addr 0xb51c1a4, size 0x8, virtual false, abstract: false, final false
inline void set_notification(::UnityEngine::Accessibility::AccessibilityNotification  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityNotificationContext() ;

// Ctor Parameters [CppParam { name: "_notification_k__BackingField", ty: "::UnityEngine::Accessibility::AccessibilityNotification", modifiers: "", def_value: None, comment: None }, CppParam { name: "_isScreenReaderEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_announcement_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_wasAnnouncementSuccessful_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_currentNodeId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_nextNodeId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AccessibilityNotificationContext(::UnityEngine::Accessibility::AccessibilityNotification  _notification_k__BackingField, bool  _isScreenReaderEnabled_k__BackingField, ::StringW  _announcement_k__BackingField, bool  _wasAnnouncementSuccessful_k__BackingField, int32_t  _currentNodeId_k__BackingField, int32_t  _nextNodeId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32531};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <notification>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::Accessibility::AccessibilityNotification  _notification_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <isScreenReaderEnabled>k__BackingField, offset: 0x4, size: 0x1, def value: None
 bool  _isScreenReaderEnabled_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <announcement>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::StringW  _announcement_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <wasAnnouncementSuccessful>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  _wasAnnouncementSuccessful_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <currentNodeId>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  _currentNodeId_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <nextNodeId>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  _nextNodeId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNotificationContext, _notification_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNotificationContext, _isScreenReaderEnabled_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNotificationContext, _announcement_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNotificationContext, _wasAnnouncementSuccessful_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNotificationContext, _currentNodeId_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNotificationContext, _nextNodeId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityNotificationContext) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility

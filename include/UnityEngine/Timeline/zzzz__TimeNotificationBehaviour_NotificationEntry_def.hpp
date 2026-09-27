#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimeNotificationBehaviour_NotificationEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__NotificationFlags_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TimeNotificationBehaviour_NotificationEntry)
namespace UnityEngine::Playables {
class INotification;
}
// Forward declare root types
namespace GlobalNamespace {
struct TimeNotificationBehaviour_NotificationEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry, "UnityEngine.Timeline", "TimeNotificationBehaviour/NotificationEntry");
// Dependencies UnityEngine.Timeline.NotificationFlags
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry
struct CORDL_TYPE TimeNotificationBehaviour_NotificationEntry {
public:
// Declarations
 __declspec(property(get=get_prewarm)) bool  prewarm;

 __declspec(property(get=get_triggerInEditor)) bool  triggerInEditor;

 __declspec(property(get=get_triggerOnce)) bool  triggerOnce;

/// @brief Method get_prewarm, addr 0xb3cdbd8, size 0xc, virtual false, abstract: false, final false
inline bool get_prewarm() ;

/// @brief Method get_triggerInEditor, addr 0xb3cdbe4, size 0xc, virtual false, abstract: false, final false
inline bool get_triggerInEditor() ;

/// @brief Method get_triggerOnce, addr 0xb3cd328, size 0xc, virtual false, abstract: false, final false
inline bool get_triggerOnce() ;

// Ctor Parameters []
// @brief default ctor
constexpr TimeNotificationBehaviour_NotificationEntry() ;

// Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "payload", ty: "::UnityEngine::Playables::INotification*", modifiers: "", def_value: None, comment: None }, CppParam { name: "notificationFired", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "flags", ty: "::UnityEngine::Timeline::NotificationFlags", modifiers: "", def_value: None, comment: None }]
constexpr TimeNotificationBehaviour_NotificationEntry(double_t  time, ::UnityEngine::Playables::INotification*  payload, bool  notificationFired, ::UnityEngine::Timeline::NotificationFlags  flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28762};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field time, offset: 0x0, size: 0x8, def value: None
 double_t  time;

/// @brief Field payload, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Playables::INotification*  payload;

/// @brief Field notificationFired, offset: 0x10, size: 0x1, def value: None
 bool  notificationFired;

/// @brief Field flags, offset: 0x12, size: 0x2, def value: None
 ::UnityEngine::Timeline::NotificationFlags  flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry, time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry, payload) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry, notificationFired) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry, flags) == 0x12, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

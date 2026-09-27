#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimeNotificationBehaviour_NotificationEntry.hpp"
#include "UnityEngine/Timeline/zzzz__NotificationFlags_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimeNotificationBehaviour_NotificationEntry_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry.get_triggerInEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry::*)()>(&::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry::get_triggerInEditor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3cdbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry>(),
                        {"get_triggerInEditor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry.get_prewarm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry::*)()>(&::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry::get_prewarm)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3cdbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry>(),
                        {"get_prewarm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry.get_triggerOnce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry::*)()>(&::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry::get_triggerOnce)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3cd328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry>(),
                        {"get_triggerOnce", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::TimeNotificationBehaviour_NotificationEntry::get_triggerInEditor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry>(),
                        {"get_triggerInEditor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::TimeNotificationBehaviour_NotificationEntry::get_prewarm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry>(),
                        {"get_prewarm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::TimeNotificationBehaviour_NotificationEntry::get_triggerOnce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry>(),
                        {"get_triggerOnce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "payload", ty: "::UnityEngine::Playables::INotification*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "notificationFired", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flags", ty: "::UnityEngine::Timeline::NotificationFlags", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry::TimeNotificationBehaviour_NotificationEntry(double_t  time, ::UnityEngine::Playables::INotification*  payload, bool  notificationFired, ::UnityEngine::Timeline::NotificationFlags  flags) noexcept  {
this->time = time;
this->payload = payload;
this->notificationFired = notificationFired;
this->flags = flags;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeNotificationBehaviour_NotificationEntry::TimeNotificationBehaviour_NotificationEntry()   {
}

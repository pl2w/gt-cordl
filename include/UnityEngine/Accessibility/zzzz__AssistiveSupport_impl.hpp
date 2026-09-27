#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AssistiveSupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__IService_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AssistiveSupport_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityHierarchy_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNode_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNotificationContext_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AssistiveSupport_def.hpp"
#include "UnityEngine/Accessibility/zzzz__IAccessibilityNotificationDispatcher_def.hpp"
#include "UnityEngine/Accessibility/zzzz__ServiceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport.get_isScreenReaderEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Accessibility::AssistiveSupport::get_isScreenReaderEnabled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb51c384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"get_isScreenReaderEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport.set_isScreenReaderEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Accessibility::AssistiveSupport::set_isScreenReaderEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb51c3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"set_isScreenReaderEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport.get_notificationDispatcher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher* (*)()>(&::UnityEngine::Accessibility::AssistiveSupport::get_notificationDispatcher)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb51c43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"get_notificationDispatcher", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Accessibility::AssistiveSupport::Initialize)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb51a41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport.ScreenReaderStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Accessibility::AssistiveSupport::ScreenReaderStatusChanged)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb51c5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"ScreenReaderStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport.NodeFocusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Accessibility::AccessibilityNode*)>(&::UnityEngine::Accessibility::AssistiveSupport::NodeFocusChanged)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb51c758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"NodeFocusChanged", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport.get_activeHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AccessibilityHierarchy* (*)()>(&::UnityEngine::Accessibility::AssistiveSupport::get_activeHierarchy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb51b7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"get_activeHierarchy", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Accessibility::AssistiveSupport::setStaticF_nodeFocusChanged(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*, "nodeFocusChanged", ::UnityEngine::Accessibility::AssistiveSupport*>(std::forward<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*>(value));
}
inline ::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>* UnityEngine::Accessibility::AssistiveSupport::getStaticF_nodeFocusChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*, "nodeFocusChanged", ::UnityEngine::Accessibility::AssistiveSupport*>();
}
inline void UnityEngine::Accessibility::AssistiveSupport::setStaticF_screenReaderStatusChanged(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "screenReaderStatusChanged", ::UnityEngine::Accessibility::AssistiveSupport*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::Accessibility::AssistiveSupport::getStaticF_screenReaderStatusChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "screenReaderStatusChanged", ::UnityEngine::Accessibility::AssistiveSupport*>();
}
inline void UnityEngine::Accessibility::AssistiveSupport::setStaticF__isScreenReaderEnabled_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<isScreenReaderEnabled>k__BackingField", ::UnityEngine::Accessibility::AssistiveSupport*>(std::forward<bool>(value));
}
inline bool UnityEngine::Accessibility::AssistiveSupport::getStaticF__isScreenReaderEnabled_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<isScreenReaderEnabled>k__BackingField", ::UnityEngine::Accessibility::AssistiveSupport*>();
}
inline void UnityEngine::Accessibility::AssistiveSupport::setStaticF__notificationDispatcher_k__BackingField(::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*, "<notificationDispatcher>k__BackingField", ::UnityEngine::Accessibility::AssistiveSupport*>(std::forward<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*>(value));
}
inline ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher* UnityEngine::Accessibility::AssistiveSupport::getStaticF__notificationDispatcher_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*, "<notificationDispatcher>k__BackingField", ::UnityEngine::Accessibility::AssistiveSupport*>();
}
inline void UnityEngine::Accessibility::AssistiveSupport::setStaticF_s_ServiceManager(::UnityEngine::Accessibility::ServiceManager*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Accessibility::ServiceManager*, "s_ServiceManager", ::UnityEngine::Accessibility::AssistiveSupport*>(std::forward<::UnityEngine::Accessibility::ServiceManager*>(value));
}
inline ::UnityEngine::Accessibility::ServiceManager* UnityEngine::Accessibility::AssistiveSupport::getStaticF_s_ServiceManager()  {
return ::cordl_internals::getStaticField<::UnityEngine::Accessibility::ServiceManager*, "s_ServiceManager", ::UnityEngine::Accessibility::AssistiveSupport*>();
}
inline bool UnityEngine::Accessibility::AssistiveSupport::get_isScreenReaderEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"get_isScreenReaderEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AssistiveSupport::set_isScreenReaderEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"set_isScreenReaderEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher* UnityEngine::Accessibility::AssistiveSupport::get_notificationDispatcher()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"get_notificationDispatcher", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AssistiveSupport::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Accessibility::IService*>)
inline T UnityEngine::Accessibility::AssistiveSupport::GetService()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                    {"GetService", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AssistiveSupport::ScreenReaderStatusChanged(bool  screenReaderEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"ScreenReaderStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, screenReaderEnabled);
}
inline void UnityEngine::Accessibility::AssistiveSupport::NodeFocusChanged(::UnityEngine::Accessibility::AccessibilityNode*  currentNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"NodeFocusChanged", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentNode);
}
inline ::UnityEngine::Accessibility::AccessibilityHierarchy* UnityEngine::Accessibility::AssistiveSupport::get_activeHierarchy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"get_activeHierarchy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AccessibilityHierarchy*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AssistiveSupport::AssistiveSupport()   {
}
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Accessibility::AccessibilityNotificationContext>)>(&::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::Send)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb51c850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*>(),
                        {"Send", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNotificationContext>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher.SendScreenChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::*)(::UnityEngine::Accessibility::AccessibilityNode*)>(&::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::SendScreenChanged)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb51c8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*>(),
                        {"SendScreenChanged", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::*)()>(&::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51c848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::Send(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Accessibility::AccessibilityNotificationContext>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*>(),
                        {"Send", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNotificationContext>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context);
}
inline void UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::SendScreenChanged(::UnityEngine::Accessibility::AccessibilityNode*  nodeToFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*>(),
                        {"SendScreenChanged", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeToFocus);
}
inline void UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher* UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*>());
}
/// @brief Convert operator to "::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher"
constexpr  UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::operator ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*() noexcept {
return static_cast<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher"
constexpr ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher* UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::i___UnityEngine__Accessibility__IAccessibilityNotificationDispatcher() noexcept {
return static_cast<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::AssistiveSupport_NotificationDispatcher()   {
}

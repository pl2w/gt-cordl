#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityNotificationContext.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNotification_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNotificationContext_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNotification_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNotificationContext.get_notification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AccessibilityNotification (::UnityEngine::Accessibility::AccessibilityNotificationContext::*)()>(&::UnityEngine::Accessibility::AccessibilityNotificationContext::get_notification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51c19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNotificationContext>(),
                        {"get_notification", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNotificationContext.set_notification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNotificationContext::*)(::UnityEngine::Accessibility::AccessibilityNotification)>(&::UnityEngine::Accessibility::AccessibilityNotificationContext::set_notification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51c1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNotificationContext>(),
                        {"set_notification", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityNotification>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNotificationContext.get_isScreenReaderEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityNotificationContext::*)()>(&::UnityEngine::Accessibility::AccessibilityNotificationContext::get_isScreenReaderEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51c1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNotificationContext>(),
                        {"get_isScreenReaderEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNotificationContext.get_announcement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Accessibility::AccessibilityNotificationContext::*)()>(&::UnityEngine::Accessibility::AccessibilityNotificationContext::get_announcement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51c1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNotificationContext>(),
                        {"get_announcement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNotificationContext.get_wasAnnouncementSuccessful
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityNotificationContext::*)()>(&::UnityEngine::Accessibility::AccessibilityNotificationContext::get_wasAnnouncementSuccessful)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51c1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNotificationContext>(),
                        {"get_wasAnnouncementSuccessful", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNotificationContext.get_currentNodeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Accessibility::AccessibilityNotificationContext::*)()>(&::UnityEngine::Accessibility::AccessibilityNotificationContext::get_currentNodeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51c1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNotificationContext>(),
                        {"get_currentNodeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNotificationContext.get_nextNodeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Accessibility::AccessibilityNotificationContext::*)()>(&::UnityEngine::Accessibility::AccessibilityNotificationContext::get_nextNodeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51c1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNotificationContext>(),
                        {"get_nextNodeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNotificationContext.set_nextNodeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNotificationContext::*)(int32_t)>(&::UnityEngine::Accessibility::AccessibilityNotificationContext::set_nextNodeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51c1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNotificationContext>(),
                        {"set_nextNodeId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Accessibility::AccessibilityNotification UnityEngine::Accessibility::AccessibilityNotificationContext::get_notification()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNotificationContext>(),
                        {"get_notification", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AccessibilityNotification>(*this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityNotificationContext::set_notification(::UnityEngine::Accessibility::AccessibilityNotification  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNotificationContext>(),
                        {"set_notification", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityNotification>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Accessibility::AccessibilityNotificationContext::get_isScreenReaderEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNotificationContext>(),
                        {"get_isScreenReaderEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Accessibility::AccessibilityNotificationContext::get_announcement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNotificationContext>(),
                        {"get_announcement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityNotificationContext::get_wasAnnouncementSuccessful()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNotificationContext>(),
                        {"get_wasAnnouncementSuccessful", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t UnityEngine::Accessibility::AccessibilityNotificationContext::get_currentNodeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNotificationContext>(),
                        {"get_currentNodeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Accessibility::AccessibilityNotificationContext::get_nextNodeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNotificationContext>(),
                        {"get_nextNodeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityNotificationContext::set_nextNodeId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNotificationContext>(),
                        {"set_nextNodeId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_notification_k__BackingField", ty: "::UnityEngine::Accessibility::AccessibilityNotification", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_isScreenReaderEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_announcement_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_wasAnnouncementSuccessful_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_currentNodeId_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_nextNodeId_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Accessibility::AccessibilityNotificationContext::AccessibilityNotificationContext(::UnityEngine::Accessibility::AccessibilityNotification  _notification_k__BackingField, bool  _isScreenReaderEnabled_k__BackingField, ::StringW  _announcement_k__BackingField, bool  _wasAnnouncementSuccessful_k__BackingField, int32_t  _currentNodeId_k__BackingField, int32_t  _nextNodeId_k__BackingField) noexcept  {
this->_notification_k__BackingField = _notification_k__BackingField;
this->_isScreenReaderEnabled_k__BackingField = _isScreenReaderEnabled_k__BackingField;
this->_announcement_k__BackingField = _announcement_k__BackingField;
this->_wasAnnouncementSuccessful_k__BackingField = _wasAnnouncementSuccessful_k__BackingField;
this->_currentNodeId_k__BackingField = _currentNodeId_k__BackingField;
this->_nextNodeId_k__BackingField = _nextNodeId_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityNotificationContext::AccessibilityNotificationContext()   {
}

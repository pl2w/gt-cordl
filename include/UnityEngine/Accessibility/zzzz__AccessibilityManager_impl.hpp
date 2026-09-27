#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityManager_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityManager_NotificationContext_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityManager_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNodeData_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNode_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNotificationContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.add_screenReaderStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::UnityEngine::Accessibility::AccessibilityManager::add_screenReaderStatusChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb519f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"add_screenReaderStatusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.remove_screenReaderStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::UnityEngine::Accessibility::AccessibilityManager::remove_screenReaderStatusChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb51a090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"remove_screenReaderStatusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.add_nodeFocusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*)>(&::UnityEngine::Accessibility::AccessibilityManager::add_nodeFocusChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb51a184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"add_nodeFocusChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.remove_nodeFocusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*)>(&::UnityEngine::Accessibility::AccessibilityManager::remove_nodeFocusChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb51a278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"remove_nodeFocusChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.IsScreenReaderEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::IsScreenReaderEnabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb51a36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"IsScreenReaderEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.SendAccessibilityNotification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Accessibility::AccessibilityNotificationContext>)>(&::UnityEngine::Accessibility::AccessibilityManager::SendAccessibilityNotification)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb51a394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"SendAccessibilityNotification", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNotificationContext>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_Initialize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb51a3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_Update)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0xb51a5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_GetRootNodeIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_GetRootNodeIds)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xb51ac38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetRootNodeIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_GetNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>)>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_GetNode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb51aee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_GetNodeIdAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t, float_t)>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_GetNodeIdAt)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb51b1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetNodeIdAt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_OnAccessibilityNotificationReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Accessibility::AccessibilityNotificationContext>)>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_OnAccessibilityNotificationReceived)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb51b2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_OnAccessibilityNotificationReceived", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNotificationContext>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.QueueNotification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AccessibilityManager_NotificationContext)>(&::UnityEngine::Accessibility::AccessibilityManager::QueueNotification)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb51b470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"QueueNotification", {}, {::i2c::type_of<::GlobalNamespace::AccessibilityManager_NotificationContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.GetExclusiveLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IDisposable* (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::GetExclusiveLock)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb51aa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"GetExclusiveLock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Lock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::Lock)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb51b640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Lock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Unlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::Unlock)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb51b668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Unlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Accessibility::AccessibilityManager::setStaticF_asyncNotificationContexts(::System::Collections::Generic::Queue_1<::GlobalNamespace::AccessibilityManager_NotificationContext>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::GlobalNamespace::AccessibilityManager_NotificationContext>*, "asyncNotificationContexts", ::UnityEngine::Accessibility::AccessibilityManager*>(std::forward<::System::Collections::Generic::Queue_1<::GlobalNamespace::AccessibilityManager_NotificationContext>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::GlobalNamespace::AccessibilityManager_NotificationContext>* UnityEngine::Accessibility::AccessibilityManager::getStaticF_asyncNotificationContexts()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::GlobalNamespace::AccessibilityManager_NotificationContext>*, "asyncNotificationContexts", ::UnityEngine::Accessibility::AccessibilityManager*>();
}
inline void UnityEngine::Accessibility::AccessibilityManager::setStaticF_screenReaderStatusChanged(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "screenReaderStatusChanged", ::UnityEngine::Accessibility::AccessibilityManager*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::Accessibility::AccessibilityManager::getStaticF_screenReaderStatusChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "screenReaderStatusChanged", ::UnityEngine::Accessibility::AccessibilityManager*>();
}
inline void UnityEngine::Accessibility::AccessibilityManager::setStaticF_nodeFocusChanged(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*, "nodeFocusChanged", ::UnityEngine::Accessibility::AccessibilityManager*>(std::forward<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*>(value));
}
inline ::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>* UnityEngine::Accessibility::AccessibilityManager::getStaticF_nodeFocusChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*, "nodeFocusChanged", ::UnityEngine::Accessibility::AccessibilityManager*>();
}
inline void UnityEngine::Accessibility::AccessibilityManager::add_screenReaderStatusChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"add_screenReaderStatusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Accessibility::AccessibilityManager::remove_screenReaderStatusChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"remove_screenReaderStatusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Accessibility::AccessibilityManager::add_nodeFocusChanged(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"add_nodeFocusChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Accessibility::AccessibilityManager::remove_nodeFocusChanged(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"remove_nodeFocusChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Accessibility::AccessibilityManager::IsScreenReaderEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"IsScreenReaderEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager::SendAccessibilityNotification(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Accessibility::AccessibilityNotificationContext>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"SendAccessibilityNotification", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNotificationContext>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context);
}
inline void UnityEngine::Accessibility::AccessibilityManager::Internal_Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager::Internal_Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::ArrayW<int32_t> UnityEngine::Accessibility::AccessibilityManager::Internal_GetRootNodeIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetRootNodeIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityManager::Internal_GetNode(int32_t  id, ::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>  nodeData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id, nodeData);
}
inline int32_t UnityEngine::Accessibility::AccessibilityManager::Internal_GetNodeIdAt(float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetNodeIdAt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline void UnityEngine::Accessibility::AccessibilityManager::Internal_OnAccessibilityNotificationReceived(::by_ref<::UnityEngine::Accessibility::AccessibilityNotificationContext>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_OnAccessibilityNotificationReceived", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNotificationContext>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context);
}
inline void UnityEngine::Accessibility::AccessibilityManager::QueueNotification(::GlobalNamespace::AccessibilityManager_NotificationContext  notification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"QueueNotification", {}, {::i2c::type_of<::GlobalNamespace::AccessibilityManager_NotificationContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, notification);
}
inline ::System::IDisposable* UnityEngine::Accessibility::AccessibilityManager::GetExclusiveLock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"GetExclusiveLock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager::Lock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Lock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager::Unlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Unlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityManager::AccessibilityManager()   {
}
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::*)()>(&::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb51b5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::*)()>(&::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::Finalize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb51b8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(),
                    {::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock.InternalDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::*)()>(&::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::InternalDispose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb51b96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(),
                        {"InternalDispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::*)()>(&::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb51b9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::__cordl_internal_get_m_Disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Disposed;
}
constexpr bool const& UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::__cordl_internal_get_m_Disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Disposed;
}
constexpr void UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::__cordl_internal_set_m_Disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Disposed = value;
}
inline void UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::InternalDispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(),
                        {"InternalDispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock* UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::AccessibilityManager_ExclusiveLock()   {
}

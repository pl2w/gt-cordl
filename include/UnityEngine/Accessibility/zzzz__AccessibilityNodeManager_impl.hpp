#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityNodeManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNodeManager_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityAction_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.DestroyNativeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::DestroyNativeNode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51bac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"DestroyNativeNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.SetFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Rect)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::SetFrame)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb51bb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"SetFrame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.SetChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<int32_t>)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::SetChildren)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb51bb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"SetChildren", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.SetActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<::UnityEngine::Accessibility::AccessibilityAction*>)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::SetActions)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51bcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"SetActions", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Accessibility::AccessibilityAction*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.Internal_InvokeFocusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeFocusChanged)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb51bcf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeFocusChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.Internal_InvokeSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeSelected)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb51be4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeSelected", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.Internal_InvokeIncremented
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeIncremented)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb51bf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeIncremented", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.Internal_InvokeDecremented
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeDecremented)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb51bff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeDecremented", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.Internal_InvokeDismissed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeDismissed)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb51c0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeDismissed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.SetFrame_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::SetFrame_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51bb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"SetFrame_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.SetChildren_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::SetChildren_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51bc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"SetChildren_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Accessibility::AccessibilityNodeManager::DestroyNativeNode(int32_t  id, int32_t  parentId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"DestroyNativeNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id, parentId);
}
inline void UnityEngine::Accessibility::AccessibilityNodeManager::SetFrame(int32_t  id, ::UnityEngine::Rect  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"SetFrame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id, frame);
}
inline void UnityEngine::Accessibility::AccessibilityNodeManager::SetChildren(int32_t  id, ::ArrayW<int32_t>  childIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"SetChildren", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id, childIds);
}
inline void UnityEngine::Accessibility::AccessibilityNodeManager::SetActions(int32_t  id, ::ArrayW<::UnityEngine::Accessibility::AccessibilityAction*>  actions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"SetActions", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Accessibility::AccessibilityAction*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id, actions);
}
inline void UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeFocusChanged(int32_t  id, bool  isNodeFocused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeFocusChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id, isNodeFocused);
}
inline bool UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeSelected(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeSelected", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id);
}
inline void UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeIncremented(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeIncremented", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id);
}
inline void UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeDecremented(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeDecremented", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id);
}
inline bool UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeDismissed(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeDismissed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id);
}
inline void UnityEngine::Accessibility::AccessibilityNodeManager::SetFrame_Injected(int32_t  id, ::by_ref<::UnityEngine::Rect>  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"SetFrame_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id, frame);
}
inline void UnityEngine::Accessibility::AccessibilityNodeManager::SetChildren_Injected(int32_t  id, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  childIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"SetChildren_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id, childIds);
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityNodeManager::AccessibilityNodeManager()   {
}

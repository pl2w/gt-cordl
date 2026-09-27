#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityHierarchyService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityHierarchyService_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityHierarchy_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNode_def.hpp"
#include "UnityEngine/Accessibility/zzzz__IService_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchyService.get_hierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AccessibilityHierarchy* (::UnityEngine::Accessibility::AccessibilityHierarchyService::*)()>(&::UnityEngine::Accessibility::AccessibilityHierarchyService::get_hierarchy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51d3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"get_hierarchy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchyService.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityHierarchyService::*)()>(&::UnityEngine::Accessibility::AccessibilityHierarchyService::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb51d404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchyService.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityHierarchyService::*)()>(&::UnityEngine::Accessibility::AccessibilityHierarchyService::Stop)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb51d408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchyService.RemoveActiveHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityHierarchyService::*)(bool)>(&::UnityEngine::Accessibility::AccessibilityHierarchyService::RemoveActiveHierarchy)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb51d41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"RemoveActiveHierarchy", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchyService.TryGetNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityHierarchyService::*)(int32_t, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>)>(&::UnityEngine::Accessibility::AccessibilityHierarchyService::TryGetNode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb51af98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"TryGetNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchyService.GetRootNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>* (::UnityEngine::Accessibility::AccessibilityHierarchyService::*)()>(&::UnityEngine::Accessibility::AccessibilityHierarchyService::GetRootNodes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb51aed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"GetRootNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchyService.TryGetNodeAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityHierarchyService::*)(float_t, float_t, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>)>(&::UnityEngine::Accessibility::AccessibilityHierarchyService::TryGetNodeAt)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb51b254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"TryGetNodeAt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchyService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityHierarchyService::*)()>(&::UnityEngine::Accessibility::AccessibilityHierarchyService::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51d54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Accessibility::AccessibilityHierarchy*& UnityEngine::Accessibility::AccessibilityHierarchyService::__cordl_internal_get_m_Hierarchy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Hierarchy;
}
constexpr ::UnityEngine::Accessibility::AccessibilityHierarchy* const& UnityEngine::Accessibility::AccessibilityHierarchyService::__cordl_internal_get_m_Hierarchy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Hierarchy;
}
constexpr void UnityEngine::Accessibility::AccessibilityHierarchyService::__cordl_internal_set_m_Hierarchy(::UnityEngine::Accessibility::AccessibilityHierarchy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Hierarchy = value;
}
inline ::UnityEngine::Accessibility::AccessibilityHierarchy* UnityEngine::Accessibility::AccessibilityHierarchyService::get_hierarchy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"get_hierarchy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AccessibilityHierarchy*>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityHierarchyService::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityHierarchyService::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityHierarchyService::RemoveActiveHierarchy(bool  notifyScreenChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"RemoveActiveHierarchy", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notifyScreenChanged);
}
inline bool UnityEngine::Accessibility::AccessibilityHierarchyService::TryGetNode(int32_t  id, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"TryGetNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, node);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>* UnityEngine::Accessibility::AccessibilityHierarchyService::GetRootNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"GetRootNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>*>(this, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityHierarchyService::TryGetNodeAt(float_t  x, float_t  y, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"TryGetNodeAt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y, node);
}
inline void UnityEngine::Accessibility::AccessibilityHierarchyService::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Accessibility::AccessibilityHierarchyService* UnityEngine::Accessibility::AccessibilityHierarchyService::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Accessibility::AccessibilityHierarchyService*>());
}
/// @brief Convert operator to "::UnityEngine::Accessibility::IService"
constexpr  UnityEngine::Accessibility::AccessibilityHierarchyService::operator ::UnityEngine::Accessibility::IService*() noexcept {
return static_cast<::UnityEngine::Accessibility::IService*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Accessibility::IService"
constexpr ::UnityEngine::Accessibility::IService* UnityEngine::Accessibility::AccessibilityHierarchyService::i___UnityEngine__Accessibility__IService() noexcept {
return static_cast<::UnityEngine::Accessibility::IService*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityHierarchyService::AccessibilityHierarchyService()   {
}

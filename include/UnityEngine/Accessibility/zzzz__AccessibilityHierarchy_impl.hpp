#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityHierarchy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityHierarchy_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchy.TryGetNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityHierarchy::*)(int32_t, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>)>(&::UnityEngine::Accessibility::AccessibilityHierarchy::TryGetNode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb51b82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"TryGetNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchy.FreeNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityHierarchy::*)()>(&::UnityEngine::Accessibility::AccessibilityHierarchy::FreeNative)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb51c910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"FreeNative", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchy.TryGetNodeAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityHierarchy::*)(float_t, float_t, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>)>(&::UnityEngine::Accessibility::AccessibilityHierarchy::TryGetNodeAt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb51cdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"TryGetNodeAt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchy._TryGetNodeAt_g__FindNodeContainingPoint_27_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AccessibilityNode* (*)(::System::Collections::Generic::IList_1<::UnityEngine::Accessibility::AccessibilityNode*>*, ::UnityEngine::Vector2)>(&::UnityEngine::Accessibility::AccessibilityHierarchy::_TryGetNodeAt_g__FindNodeContainingPoint_27_0)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb51ce04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"<TryGetNodeAt>g__FindNodeContainingPoint|27_0", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Accessibility::AccessibilityNode*>*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>*& UnityEngine::Accessibility::AccessibilityHierarchy::__cordl_internal_get_m_RootNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RootNodes;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>* const& UnityEngine::Accessibility::AccessibilityHierarchy::__cordl_internal_get_m_RootNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RootNodes;
}
constexpr void UnityEngine::Accessibility::AccessibilityHierarchy::__cordl_internal_set_m_RootNodes(::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RootNodes = value;
}
constexpr ::System::Collections::Generic::IDictionary_2<int32_t,::UnityEngine::Accessibility::AccessibilityNode*>*& UnityEngine::Accessibility::AccessibilityHierarchy::__cordl_internal_get_m_Nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Nodes;
}
constexpr ::System::Collections::Generic::IDictionary_2<int32_t,::UnityEngine::Accessibility::AccessibilityNode*>* const& UnityEngine::Accessibility::AccessibilityHierarchy::__cordl_internal_get_m_Nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Nodes;
}
constexpr void UnityEngine::Accessibility::AccessibilityHierarchy::__cordl_internal_set_m_Nodes(::System::Collections::Generic::IDictionary_2<int32_t,::UnityEngine::Accessibility::AccessibilityNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Nodes = value;
}
inline bool UnityEngine::Accessibility::AccessibilityHierarchy::TryGetNode(int32_t  id, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"TryGetNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, node);
}
inline void UnityEngine::Accessibility::AccessibilityHierarchy::FreeNative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"FreeNative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityHierarchy::TryGetNodeAt(float_t  horizontalPosition, float_t  verticalPosition, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"TryGetNodeAt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, horizontalPosition, verticalPosition, node);
}
inline ::UnityEngine::Accessibility::AccessibilityNode* UnityEngine::Accessibility::AccessibilityHierarchy::_TryGetNodeAt_g__FindNodeContainingPoint_27_0(::System::Collections::Generic::IList_1<::UnityEngine::Accessibility::AccessibilityNode*>*  nodes, ::UnityEngine::Vector2  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"<TryGetNodeAt>g__FindNodeContainingPoint|27_0", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Accessibility::AccessibilityNode*>*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AccessibilityNode*>(nullptr, ___internal_method, nodes, pos);
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityHierarchy::AccessibilityHierarchy()   {
}

#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyFlattenedNodeChildren_Enumerator.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNodeChildren_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNodeChildren_Enumerator_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNodeChildren_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattened_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator::*)(::Unity::Hierarchy::HierarchyFlattenedNodeChildren, ::Unity::Hierarchy::HierarchyNode)>(&::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb632968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyNode> (::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator::*)()>(&::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb632a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator::*)()>(&::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xb632b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator::_ctor(::Unity::Hierarchy::HierarchyFlattenedNodeChildren  enumerable, ::Unity::Hierarchy::HierarchyNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerable, node);
}
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyNode>>(*this, ___internal_method);
}
inline bool GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Enumerable", ty: "::Unity::Hierarchy::HierarchyFlattenedNodeChildren", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Node", ty: "::Unity::Hierarchy::HierarchyNode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ChildrenIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ChildrenCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator::HierarchyFlattenedNodeChildren_Enumerator(::Unity::Hierarchy::HierarchyFlattenedNodeChildren  m_Enumerable, ::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened, ::Unity::Hierarchy::HierarchyNode  m_Node, int32_t  m_CurrentIndex, int32_t  m_ChildrenIndex, int32_t  m_ChildrenCount) noexcept  {
this->m_Enumerable = m_Enumerable;
this->m_HierarchyFlattened = m_HierarchyFlattened;
this->m_Node = m_Node;
this->m_CurrentIndex = m_CurrentIndex;
this->m_ChildrenIndex = m_ChildrenIndex;
this->m_ChildrenCount = m_ChildrenCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator::HierarchyFlattenedNodeChildren_Enumerator()   {
}

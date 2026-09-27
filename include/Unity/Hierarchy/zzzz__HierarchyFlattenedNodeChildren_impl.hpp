#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyFlattenedNodeChildren.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNodeChildren_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNodeChildren_Enumerator_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattened_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNodeChildren._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyFlattenedNodeChildren::*)(::Unity::Hierarchy::HierarchyFlattened*, ::by_ref<::Unity::Hierarchy::HierarchyNode>)>(&::Unity::Hierarchy::HierarchyFlattenedNodeChildren::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xb632614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyFlattened*>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNodeChildren.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator (::Unity::Hierarchy::HierarchyFlattenedNodeChildren::*)()>(&::Unity::Hierarchy::HierarchyFlattenedNodeChildren::GetEnumerator)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb6328f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNodeChildren.ThrowIfVersionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyFlattenedNodeChildren::*)()>(&::Unity::Hierarchy::HierarchyFlattenedNodeChildren::ThrowIfVersionChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb6329c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>(),
                        {"ThrowIfVersionChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyFlattenedNodeChildren::_ctor(::Unity::Hierarchy::HierarchyFlattened*  hierarchyFlattened, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode>  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyFlattened*>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hierarchyFlattened, node);
}
inline ::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator Unity::Hierarchy::HierarchyFlattenedNodeChildren::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator>(*this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyFlattenedNodeChildren::ThrowIfVersionChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>(),
                        {"ThrowIfVersionChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Node", ty: "::Unity::Hierarchy::HierarchyNode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Hierarchy::HierarchyFlattenedNodeChildren::HierarchyFlattenedNodeChildren(::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened, ::Unity::Hierarchy::HierarchyNode  m_Node, int32_t  m_Version, int32_t  m_Count) noexcept  {
this->m_HierarchyFlattened = m_HierarchyFlattened;
this->m_Node = m_Node;
this->m_Version = m_Version;
this->m_Count = m_Count;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyFlattenedNodeChildren::HierarchyFlattenedNodeChildren()   {
}

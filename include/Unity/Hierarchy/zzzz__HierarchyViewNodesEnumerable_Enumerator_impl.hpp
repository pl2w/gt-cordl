#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyViewNodesEnumerable_Enumerator.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewNodesEnumerable_Enumerator_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattened_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewNodesEnumerable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator::*)(::Unity::Hierarchy::HierarchyViewNodesEnumerable)>(&::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb6349fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyNode> (::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator::*)()>(&::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb634b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator::*)()>(&::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb634bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator.ThrowIfVersionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator::*)()>(&::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator::ThrowIfVersionChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb634ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator>(),
                        {"ThrowIfVersionChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator::_ctor(::Unity::Hierarchy::HierarchyViewNodesEnumerable  enumerable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerable);
}
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyNode>>(*this, ___internal_method);
}
inline bool GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator::ThrowIfVersionChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator>(),
                        {"ThrowIfVersionChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Predicate", ty: "::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Flags", ty: "::Unity::Hierarchy::HierarchyNodeFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_NodesPtr", ty: "::Unity::Hierarchy::HierarchyFlattenedNode*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_NodesCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator::HierarchyViewNodesEnumerable_Enumerator(::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened, ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*  m_Predicate, ::Unity::Hierarchy::HierarchyNodeFlags  m_Flags, ::Unity::Hierarchy::HierarchyFlattenedNode*  m_NodesPtr, int32_t  m_NodesCount, int32_t  m_Version, int32_t  m_Index) noexcept  {
this->m_HierarchyFlattened = m_HierarchyFlattened;
this->m_Predicate = m_Predicate;
this->m_Flags = m_Flags;
this->m_NodesPtr = m_NodesPtr;
this->m_NodesCount = m_NodesCount;
this->m_Version = m_Version;
this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator::HierarchyViewNodesEnumerable_Enumerator()   {
}

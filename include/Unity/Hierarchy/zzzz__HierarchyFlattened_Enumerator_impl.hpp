#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyFlattened_Enumerator.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattened_Enumerator_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattened_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HierarchyFlattened_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyFlattened_Enumerator::*)(::Unity::Hierarchy::HierarchyFlattened*)>(&::GlobalNamespace::HierarchyFlattened_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb636704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattened_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyFlattened*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyFlattened_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> (::GlobalNamespace::HierarchyFlattened_Enumerator::*)()>(&::GlobalNamespace::HierarchyFlattened_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb636998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattened_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyFlattened_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HierarchyFlattened_Enumerator::*)()>(&::GlobalNamespace::HierarchyFlattened_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb636a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattened_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HierarchyFlattened_Enumerator::_ctor(::Unity::Hierarchy::HierarchyFlattened*  hierarchyFlattened)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattened_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyFlattened*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hierarchyFlattened);
}
inline ::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> GlobalNamespace::HierarchyFlattened_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattened_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode>>(*this, ___internal_method);
}
inline bool GlobalNamespace::HierarchyFlattened_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattened_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_NodesPtr", ty: "::Unity::Hierarchy::HierarchyFlattenedNode*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_NodesCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HierarchyFlattened_Enumerator::HierarchyFlattened_Enumerator(::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened, ::Unity::Hierarchy::HierarchyFlattenedNode*  m_NodesPtr, int32_t  m_NodesCount, int32_t  m_Version, int32_t  m_Index) noexcept  {
this->m_HierarchyFlattened = m_HierarchyFlattened;
this->m_NodesPtr = m_NodesPtr;
this->m_NodesCount = m_NodesCount;
this->m_Version = m_Version;
this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HierarchyFlattened_Enumerator::HierarchyFlattened_Enumerator()   {
}

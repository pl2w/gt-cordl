#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeTypeHandlerBaseEnumerable.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeTypeHandlerBaseEnumerable_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeTypeHandlerBaseEnumerable_Enumerator_def.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::*)(::Unity::Hierarchy::Hierarchy*)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb634358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::Hierarchy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator (::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::*)()>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::GetEnumerator)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb634360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::_ctor(::Unity::Hierarchy::Hierarchy*  hierarchy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::Hierarchy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hierarchy);
}
inline ::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Hierarchy", ty: "::Unity::Hierarchy::Hierarchy*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::HierarchyNodeTypeHandlerBaseEnumerable(::Unity::Hierarchy::Hierarchy*  m_Hierarchy) noexcept  {
this->m_Hierarchy = m_Hierarchy;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::HierarchyNodeTypeHandlerBaseEnumerable()   {
}

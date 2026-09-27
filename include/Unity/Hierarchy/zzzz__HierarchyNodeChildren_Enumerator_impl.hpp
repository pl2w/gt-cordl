#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeChildren_Enumerator.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildren_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildren_Enumerator_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildren_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HierarchyNodeChildren_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyNodeChildren_Enumerator::*)(::by_ref<::Unity::Hierarchy::HierarchyNodeChildren>)>(&::GlobalNamespace::HierarchyNodeChildren_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb632f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeChildren_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNodeChildren>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyNodeChildren_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyNode> (::GlobalNamespace::HierarchyNodeChildren_Enumerator::*)()>(&::GlobalNamespace::HierarchyNodeChildren_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb633018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeChildren_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyNodeChildren_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HierarchyNodeChildren_Enumerator::*)()>(&::GlobalNamespace::HierarchyNodeChildren_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb6330ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeChildren_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HierarchyNodeChildren_Enumerator::_ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNodeChildren>  enumerable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeChildren_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNodeChildren>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerable);
}
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> GlobalNamespace::HierarchyNodeChildren_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeChildren_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyNode>>(*this, ___internal_method);
}
inline bool GlobalNamespace::HierarchyNodeChildren_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeChildren_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Enumerable", ty: "::Unity::Hierarchy::HierarchyNodeChildren", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HierarchyNodeChildren_Enumerator::HierarchyNodeChildren_Enumerator(::Unity::Hierarchy::HierarchyNodeChildren  m_Enumerable, int32_t  m_Index) noexcept  {
this->m_Enumerable = m_Enumerable;
this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HierarchyNodeChildren_Enumerator::HierarchyNodeChildren_Enumerator()   {
}

#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyViewModel_Enumerator.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModel_Enumerator_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattened_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HierarchyViewModel_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyViewModel_Enumerator::*)(::Unity::Hierarchy::HierarchyViewModel*)>(&::GlobalNamespace::HierarchyViewModel_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb638c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyViewModel_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyViewModel_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyNode> (::GlobalNamespace::HierarchyViewModel_Enumerator::*)()>(&::GlobalNamespace::HierarchyViewModel_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb639190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyViewModel_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyViewModel_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HierarchyViewModel_Enumerator::*)()>(&::GlobalNamespace::HierarchyViewModel_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x9cc;
  constexpr static std::size_t addrs = 0xb639274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyViewModel_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HierarchyViewModel_Enumerator::_ctor(::Unity::Hierarchy::HierarchyViewModel*  hierarchyViewModel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyViewModel_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hierarchyViewModel);
}
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> GlobalNamespace::HierarchyViewModel_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyViewModel_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyNode>>(*this, ___internal_method);
}
inline bool GlobalNamespace::HierarchyViewModel_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyViewModel_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_NodesPtr", ty: "int32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_NodesCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HierarchyViewModel_Enumerator::HierarchyViewModel_Enumerator(::Unity::Hierarchy::HierarchyViewModel*  m_ViewModel, ::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened, int32_t*  m_NodesPtr, int32_t  m_NodesCount, int32_t  m_Version, int32_t  m_Index) noexcept  {
this->m_ViewModel = m_ViewModel;
this->m_HierarchyFlattened = m_HierarchyFlattened;
this->m_NodesPtr = m_NodesPtr;
this->m_NodesCount = m_NodesCount;
this->m_Version = m_Version;
this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HierarchyViewModel_Enumerator::HierarchyViewModel_Enumerator()   {
}

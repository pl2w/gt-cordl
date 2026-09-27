#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeChildren.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildren_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildren_Enumerator_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeChildren._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyNodeChildren::*)(::Unity::Hierarchy::Hierarchy*, ::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeChildren::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb632da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::Hierarchy*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeChildren.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HierarchyNodeChildren_Enumerator (::Unity::Hierarchy::HierarchyNodeChildren::*)()>(&::Unity::Hierarchy::HierarchyNodeChildren::GetEnumerator)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb632f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeChildren.ThrowIfVersionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyNodeChildren::*)()>(&::Unity::Hierarchy::HierarchyNodeChildren::ThrowIfVersionChanged)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb632f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren>(),
                        {"ThrowIfVersionChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyNodeChildren::_ctor(::Unity::Hierarchy::Hierarchy*  hierarchy, ::System::IntPtr  nodeChildrenPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::Hierarchy*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hierarchy, nodeChildrenPtr);
}
inline ::GlobalNamespace::HierarchyNodeChildren_Enumerator Unity::Hierarchy::HierarchyNodeChildren::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HierarchyNodeChildren_Enumerator>(*this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyNodeChildren::ThrowIfVersionChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren>(),
                        {"ThrowIfVersionChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Hierarchy", ty: "::Unity::Hierarchy::Hierarchy*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Ptr", ty: "::Unity::Hierarchy::HierarchyNode*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Hierarchy::HierarchyNodeChildren::HierarchyNodeChildren(::Unity::Hierarchy::Hierarchy*  m_Hierarchy, ::Unity::Hierarchy::HierarchyNode*  m_Ptr, int32_t  m_Version, int32_t  m_Count) noexcept  {
this->m_Hierarchy = m_Hierarchy;
this->m_Ptr = m_Ptr;
this->m_Version = m_Version;
this->m_Count = m_Count;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeChildren::HierarchyNodeChildren()   {
}

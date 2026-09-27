#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyViewNodesEnumerable.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewNodesEnumerable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModel_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewNodesEnumerable_Enumerator_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewNodesEnumerable_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewNodesEnumerable::*)(::Unity::Hierarchy::HierarchyViewModel*, ::Unity::Hierarchy::HierarchyNodeFlags, ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*)>(&::Unity::Hierarchy::HierarchyViewNodesEnumerable::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb634914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator (::Unity::Hierarchy::HierarchyViewNodesEnumerable::*)()>(&::Unity::Hierarchy::HierarchyViewNodesEnumerable::GetEnumerator)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb6349c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyViewNodesEnumerable::_ctor(::Unity::Hierarchy::HierarchyViewModel*  viewModel, ::Unity::Hierarchy::HierarchyNodeFlags  flags, ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*  predicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, viewModel, flags, predicate);
}
inline ::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator Unity::Hierarchy::HierarchyViewNodesEnumerable::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_HierarchyViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Predicate", ty: "::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Flags", ty: "::Unity::Hierarchy::HierarchyNodeFlags", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Hierarchy::HierarchyViewNodesEnumerable::HierarchyViewNodesEnumerable(::Unity::Hierarchy::HierarchyViewModel*  m_HierarchyViewModel, ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*  m_Predicate, ::Unity::Hierarchy::HierarchyNodeFlags  m_Flags) noexcept  {
this->m_HierarchyViewModel = m_HierarchyViewModel;
this->m_Predicate = m_Predicate;
this->m_Flags = m_Flags;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewNodesEnumerable::HierarchyViewNodesEnumerable()   {
}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb634a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb634b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>(),
                    {::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, flags);
}
inline ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate* Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::HierarchyViewNodesEnumerable_Predicate()   {
}

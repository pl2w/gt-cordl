#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ReadOnlyHierarchyViewModelList_Enumerator.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModel_Enumerator_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ReadOnlyHierarchyViewModelList_Enumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator::*)(::Unity::Hierarchy::HierarchyViewModel*)>(&::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb7343a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator::*)()>(&::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb734590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator::*)()>(&::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb7345f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator::*)()>(&::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator::Reset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb734618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator::_ctor(::Unity::Hierarchy::HierarchyViewModel*  hierarchyViewModel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hierarchyViewModel);
}
inline ::System::Object* GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline bool GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_HierarchyViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Enumerator", ty: "::GlobalNamespace::HierarchyViewModel_Enumerator", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator::ReadOnlyHierarchyViewModelList_Enumerator(::Unity::Hierarchy::HierarchyViewModel*  m_HierarchyViewModel, ::GlobalNamespace::HierarchyViewModel_Enumerator  m_Enumerator) noexcept  {
this->m_HierarchyViewModel = m_HierarchyViewModel;
this->m_Enumerator = m_Enumerator;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator::ReadOnlyHierarchyViewModelList_Enumerator()   {
}

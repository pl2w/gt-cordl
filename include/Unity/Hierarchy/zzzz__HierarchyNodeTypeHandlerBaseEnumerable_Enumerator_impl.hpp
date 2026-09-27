#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeTypeHandlerBaseEnumerable_Enumerator.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeTypeHandlerBaseEnumerable_Enumerator_def.hpp"
#include "System/Buffers/zzzz__IMemoryOwner_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeTypeHandlerBase_def.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::*)(::Unity::Hierarchy::Hierarchy*)>(&::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xb634388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::Hierarchy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::*)()>(&::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb634690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* (::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::*)()>(&::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb634730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::*)()>(&::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb634850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::_ctor(::Unity::Hierarchy::Hierarchy*  hierarchy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::Hierarchy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hierarchy);
}
inline void GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(*this, ___internal_method);
}
inline bool GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handlers", ty: "::System::Buffers::IMemoryOwner_1<::System::IntPtr>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator(::System::Buffers::IMemoryOwner_1<::System::IntPtr>*  m_Handlers, int32_t  m_Count, int32_t  m_Index) noexcept  {
this->m_Handlers = m_Handlers;
this->m_Count = m_Count;
this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator()   {
}

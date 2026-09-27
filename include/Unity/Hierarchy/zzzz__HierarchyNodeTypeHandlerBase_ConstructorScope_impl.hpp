#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeTypeHandlerBase_ConstructorScope.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeTypeHandlerBase_ConstructorScope_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyCommandList_def.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope.set_Ptr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::set_Ptr)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb634180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope>(),
                        {"set_Ptr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope.set_Hierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Hierarchy::Hierarchy*)>(&::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::set_Hierarchy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb6341cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope>(),
                        {"set_Hierarchy", {}, {::i2c::type_of<::Unity::Hierarchy::Hierarchy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope.set_CommandList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Hierarchy::HierarchyCommandList*)>(&::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::set_CommandList)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb63422c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope>(),
                        {"set_CommandList", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyCommandList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::*)(::System::IntPtr, ::Unity::Hierarchy::Hierarchy*, ::Unity::Hierarchy::HierarchyCommandList*)>(&::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb6338e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyCommandList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::*)()>(&::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::Dispose)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb63428c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::setStaticF_m_Ptr(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_Ptr", ::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::getStaticF_m_Ptr()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_Ptr", ::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope>();
}
inline void GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::setStaticF_m_Hierarchy(::Unity::Hierarchy::Hierarchy*  value)  {
::cordl_internals::setStaticField<::Unity::Hierarchy::Hierarchy*, "m_Hierarchy", ::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope>(std::forward<::Unity::Hierarchy::Hierarchy*>(value));
}
inline ::Unity::Hierarchy::Hierarchy* GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::getStaticF_m_Hierarchy()  {
return ::cordl_internals::getStaticField<::Unity::Hierarchy::Hierarchy*, "m_Hierarchy", ::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope>();
}
inline void GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::setStaticF_m_CommandList(::Unity::Hierarchy::HierarchyCommandList*  value)  {
::cordl_internals::setStaticField<::Unity::Hierarchy::HierarchyCommandList*, "m_CommandList", ::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope>(std::forward<::Unity::Hierarchy::HierarchyCommandList*>(value));
}
inline ::Unity::Hierarchy::HierarchyCommandList* GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::getStaticF_m_CommandList()  {
return ::cordl_internals::getStaticField<::Unity::Hierarchy::HierarchyCommandList*, "m_CommandList", ::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope>();
}
inline void GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::set_Ptr(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope>(),
                        {"set_Ptr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::set_Hierarchy(::Unity::Hierarchy::Hierarchy*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope>(),
                        {"set_Hierarchy", {}, {::i2c::type_of<::Unity::Hierarchy::Hierarchy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::set_CommandList(::Unity::Hierarchy::HierarchyCommandList*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope>(),
                        {"set_CommandList", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyCommandList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::_ctor(::System::IntPtr  nativePtr, ::Unity::Hierarchy::Hierarchy*  hierarchy, ::Unity::Hierarchy::HierarchyCommandList*  cmdList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyCommandList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nativePtr, hierarchy, cmdList);
}
inline void GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope::HierarchyNodeTypeHandlerBase_ConstructorScope()   {
}

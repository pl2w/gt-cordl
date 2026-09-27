#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataBindingManager_IgnoreUIChangesScope.hpp"
#include "UnityEngine/UIElements/zzzz__DataBindingManager_IgnoreUIChangesData_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DataBindingManager_IgnoreUIChangesScope_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__Binding_def.hpp"
#include "UnityEngine/UIElements/zzzz__DataBindingManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope::*)(::UnityEngine::UIElements::DataBindingManager*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::BindingId, ::UnityEngine::UIElements::Binding*)>(&::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb725f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::DataBindingManager*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::BindingId>(), ::i2c::type_of<::UnityEngine::UIElements::Binding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope::*)()>(&::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb72abd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DataBindingManager_IgnoreUIChangesScope::_ctor(::UnityEngine::UIElements::DataBindingManager*  manager, ::UnityEngine::UIElements::VisualElement*  target, ::UnityEngine::UIElements::BindingId  bindingId, ::UnityEngine::UIElements::Binding*  binding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::DataBindingManager*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::BindingId>(), ::i2c::type_of<::UnityEngine::UIElements::Binding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, manager, target, bindingId, binding);
}
inline void GlobalNamespace::DataBindingManager_IgnoreUIChangesScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::DataBindingManager_IgnoreUIChangesScope::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::DataBindingManager_IgnoreUIChangesScope::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ScopeData", ty: "::GlobalNamespace::DataBindingManager_IgnoreUIChangesData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "manager", ty: "::UnityEngine::UIElements::DataBindingManager*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope::DataBindingManager_IgnoreUIChangesScope(::GlobalNamespace::DataBindingManager_IgnoreUIChangesData  m_ScopeData, ::UnityEngine::UIElements::DataBindingManager*  manager) noexcept  {
this->m_ScopeData = m_ScopeData;
this->manager = manager;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope::DataBindingManager_IgnoreUIChangesScope()   {
}

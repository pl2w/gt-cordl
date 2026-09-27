#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionSetupExtensions_CompositeSyntax.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionSetupExtensions_CompositeSyntax_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax.get_bindingIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax::*)()>(&::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax::get_bindingIndex)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaf28120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax>(),
                        {"get_bindingIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax::*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputAction*, int32_t)>(&::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaf24ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax.With
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax (::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax::With)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xaf2814c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax>(),
                        {"With", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::InputActionSetupExtensions_CompositeSyntax::get_bindingIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax>(),
                        {"get_bindingIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::InputActionSetupExtensions_CompositeSyntax::_ctor(::UnityEngine::InputSystem::InputActionMap*  map, ::UnityEngine::InputSystem::InputAction*  action, int32_t  compositeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, map, action, compositeIndex);
}
inline ::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax GlobalNamespace::InputActionSetupExtensions_CompositeSyntax::With(::StringW  name, ::StringW  binding, ::StringW  groups, ::StringW  processors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax>(),
                        {"With", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax>(*this, ___internal_method, name, binding, groups, processors);
}
// Ctor Parameters [CppParam { name: "m_Action", ty: "::UnityEngine::InputSystem::InputAction*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ActionMap", ty: "::UnityEngine::InputSystem::InputActionMap*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BindingIndexInMap", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax::InputActionSetupExtensions_CompositeSyntax(::UnityEngine::InputSystem::InputAction*  m_Action, ::UnityEngine::InputSystem::InputActionMap*  m_ActionMap, int32_t  m_BindingIndexInMap) noexcept  {
this->m_Action = m_Action;
this->m_ActionMap = m_ActionMap;
this->m_BindingIndexInMap = m_BindingIndexInMap;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax::InputActionSetupExtensions_CompositeSyntax()   {
}

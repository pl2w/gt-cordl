#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_BindingOverrideJson.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_BindingOverrideJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputActionMap_BindingOverrideJson.FromBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionMap_BindingOverrideJson (*)(::UnityEngine::InputSystem::InputBinding, ::StringW)>(&::GlobalNamespace::InputActionMap_BindingOverrideJson::FromBinding)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaf156b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_BindingOverrideJson>(),
                        {"FromBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBinding>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionMap_BindingOverrideJson.FromBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionMap_BindingOverrideJson (*)(::UnityEngine::InputSystem::InputBinding)>(&::GlobalNamespace::InputActionMap_BindingOverrideJson::FromBinding)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaf157c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_BindingOverrideJson>(),
                        {"FromBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBinding>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionMap_BindingOverrideJson.ToBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputBinding (*)(::GlobalNamespace::InputActionMap_BindingOverrideJson)>(&::GlobalNamespace::InputActionMap_BindingOverrideJson::ToBinding)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xaf15814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_BindingOverrideJson>(),
                        {"ToBinding", {}, {::i2c::type_of<::GlobalNamespace::InputActionMap_BindingOverrideJson>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::InputActionMap_BindingOverrideJson GlobalNamespace::InputActionMap_BindingOverrideJson::FromBinding(::UnityEngine::InputSystem::InputBinding  binding, ::StringW  actionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_BindingOverrideJson>(),
                        {"FromBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBinding>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionMap_BindingOverrideJson>(nullptr, ___internal_method, binding, actionName);
}
inline ::GlobalNamespace::InputActionMap_BindingOverrideJson GlobalNamespace::InputActionMap_BindingOverrideJson::FromBinding(::UnityEngine::InputSystem::InputBinding  binding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_BindingOverrideJson>(),
                        {"FromBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBinding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionMap_BindingOverrideJson>(nullptr, ___internal_method, binding);
}
inline ::UnityEngine::InputSystem::InputBinding GlobalNamespace::InputActionMap_BindingOverrideJson::ToBinding(::GlobalNamespace::InputActionMap_BindingOverrideJson  bindingOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_BindingOverrideJson>(),
                        {"ToBinding", {}, {::i2c::type_of<::GlobalNamespace::InputActionMap_BindingOverrideJson>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputBinding>(nullptr, ___internal_method, bindingOverride);
}
// Ctor Parameters [CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionMap_BindingOverrideJson::InputActionMap_BindingOverrideJson(::StringW  action, ::StringW  id, ::StringW  path, ::StringW  interactions, ::StringW  processors) noexcept  {
this->action = action;
this->id = id;
this->path = path;
this->interactions = interactions;
this->processors = processors;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionMap_BindingOverrideJson::InputActionMap_BindingOverrideJson()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_BindingJson.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_BindingJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputActionMap_BindingJson.ToBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputBinding (::GlobalNamespace::InputActionMap_BindingJson::*)()>(&::GlobalNamespace::InputActionMap_BindingJson::ToBinding)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xaf1590c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_BindingJson>(),
                        {"ToBinding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionMap_BindingJson.FromBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionMap_BindingJson (*)(::by_ref<::UnityEngine::InputSystem::InputBinding>)>(&::GlobalNamespace::InputActionMap_BindingJson::FromBinding)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xaf15a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_BindingJson>(),
                        {"FromBinding", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBinding>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputBinding GlobalNamespace::InputActionMap_BindingJson::ToBinding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_BindingJson>(),
                        {"ToBinding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputBinding>(*this, ___internal_method);
}
inline ::GlobalNamespace::InputActionMap_BindingJson GlobalNamespace::InputActionMap_BindingJson::FromBinding(::by_ref<::UnityEngine::InputSystem::InputBinding>  binding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_BindingJson>(),
                        {"FromBinding", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBinding>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionMap_BindingJson>(nullptr, ___internal_method, binding);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "groups", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isComposite", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isPartOfComposite", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionMap_BindingJson::InputActionMap_BindingJson(::StringW  name, ::StringW  id, ::StringW  path, ::StringW  interactions, ::StringW  processors, ::StringW  groups, ::StringW  action, bool  isComposite, bool  isPartOfComposite) noexcept  {
this->name = name;
this->id = id;
this->path = path;
this->interactions = interactions;
this->processors = processors;
this->groups = groups;
this->action = action;
this->isComposite = isComposite;
this->isPartOfComposite = isPartOfComposite;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionMap_BindingJson::InputActionMap_BindingJson()   {
}

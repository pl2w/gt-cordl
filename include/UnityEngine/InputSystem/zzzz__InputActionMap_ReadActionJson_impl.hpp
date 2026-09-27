#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_ReadActionJson.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_BindingJson_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadActionJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_BindingJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputActionMap_ReadActionJson.ToAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::GlobalNamespace::InputActionMap_ReadActionJson::*)(::StringW)>(&::GlobalNamespace::InputActionMap_ReadActionJson::ToAction)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xaf15b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_ReadActionJson>(),
                        {"ToAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputAction* GlobalNamespace::InputActionMap_ReadActionJson::ToAction(::StringW  actionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_ReadActionJson>(),
                        {"ToAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(*this, ___internal_method, actionName);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "expectedControlLayout", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "passThrough", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "initialStateCheck", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bindings", ty: "::ArrayW<::GlobalNamespace::InputActionMap_BindingJson>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionMap_ReadActionJson::InputActionMap_ReadActionJson(::StringW  name, ::StringW  type, ::StringW  id, ::StringW  expectedControlType, ::StringW  expectedControlLayout, ::StringW  processors, ::StringW  interactions, bool  passThrough, bool  initialStateCheck, ::ArrayW<::GlobalNamespace::InputActionMap_BindingJson>  bindings) noexcept  {
this->name = name;
this->type = type;
this->id = id;
this->expectedControlType = expectedControlType;
this->expectedControlLayout = expectedControlLayout;
this->processors = processors;
this->interactions = interactions;
this->passThrough = passThrough;
this->initialStateCheck = initialStateCheck;
this->bindings = bindings;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionMap_ReadActionJson::InputActionMap_ReadActionJson()   {
}
